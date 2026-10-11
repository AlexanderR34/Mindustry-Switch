#include "arc/graphics/g2d/Font.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/GlyphLayout.h"
#include "arc/graphics/GLTexture.h"
#include "arc/util/Disposable.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/Core.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "arc/Files.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/files/Fi.h"
#include "arc/graphics/Texture.h"
#include "arc/Files_FileType.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Font_Glyph.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "arc/graphics/g2d/Font_invoke_arc_func_Boolf_0.h"
#include "arc/graphics/g2d/FontCache.h"
#include "arc/func/Boolf.h"

extern "C" {

jint SF_arc_graphics_g2d_Font_LOG2_PAGE_SIZE;
jint SF_arc_graphics_g2d_Font_PAGE_SIZE;
jint SF_arc_graphics_g2d_Font_PAGES;

void mark_arc_graphics_g2d_Font(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_g2d_Font *) object;
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
	if (self->F_cache)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cache)->clazz)->markFunction)((jobject) self->F_cache, mark, depth + 1);
	if (self->F_regions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_regions)->clazz)->markFunction)((jobject) self->F_regions, mark, depth + 1);
}

void clinit_arc_graphics_g2d_Font(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_graphics_g2d_Font_LOG2_PAGE_SIZE = jint(9);
	SF_arc_graphics_g2d_Font_PAGE_SIZE = jint(512);
	SF_arc_graphics_g2d_Font_PAGES = jint(128);
}

void init_arc_graphics_g2d_Font_arc_files_Fi_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Font(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(81);
	init_arc_graphics_g2d_Font_arc_files_Fi_arc_graphics_g2d_TextureRegion_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)));
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_Font_arc_files_Fi_arc_graphics_g2d_TextureRegion_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Font(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_Font$FontData(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_Font$FontData);
	init_arc_graphics_g2d_Font$FontData_arc_files_Fi_boolean(ctx, sp[1].o, (frame[1].o), (frame[3].i));
	init_arc_graphics_g2d_Font_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_TextureRegion_boolean(ctx, sp[0].o, sp[1].o, (frame[2].o), (jint(1)));
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_Font_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Font(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(101);
	init_arc_graphics_g2d_Font_arc_files_Fi_boolean(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_Font_arc_files_Fi_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Font(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_Font$FontData(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_Font$FontData);
	init_arc_graphics_g2d_Font$FontData_arc_files_Fi_boolean(ctx, sp[1].o, (frame[1].o), (frame[2].i));
	init_arc_graphics_g2d_Font_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_TextureRegion_boolean(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_arc_graphics_g2d_TextureRegion, (jobject(nullptr)))), (jint(1)));
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_Font_arc_files_Fi_arc_files_Fi_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Font(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(119);
	init_arc_graphics_g2d_Font_arc_files_Fi_arc_files_Fi_boolean_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (jint(1)));
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_Font_arc_files_Fi_arc_files_Fi_boolean_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Font(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(129);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_Font$FontData(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_Font$FontData);
	init_arc_graphics_g2d_Font$FontData_arc_files_Fi_boolean(ctx, sp[1].o, (frame[1].o), (frame[3].i));
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	clinit_arc_graphics_Texture(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_graphics_Texture);
	init_arc_graphics_Texture_arc_files_Fi_boolean(ctx, sp[3].o, (frame[2].o), (jint(0)));
	init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture(ctx, sp[2].o, sp[3].o);
	init_arc_graphics_g2d_Font_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_TextureRegion_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[4].i));
	LINE_NUMBER(130);
	((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_ownsTexture = (jint(1));
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_Font_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_TextureRegion_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Font(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp += 2;
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[2].o);
	sp[0].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
label_2:;
	{
	sp -= 3;
	init_arc_graphics_g2d_Font_arc_graphics_g2d_Font$FontData_arc_struct_Seq_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[3].i));
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_Font_arc_graphics_g2d_Font$FontData_arc_struct_Seq_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:<init>", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Font(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(153);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(154);
	((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_flipped = ((jint)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[1].o)))->F_flipped);
	LINE_NUMBER(155);
	((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_data = (jref) (frame[1].o);
	LINE_NUMBER(156);
	((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_integer = (frame[3].i);
	LINE_NUMBER(158);
	if ((frame[2].o) == nullptr) goto label_5;
	}
	{
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size) != 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[1].o)))->F_imagePaths;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(160);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"If no regions are specified, the font data must have an images path."_j))));
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[1].o)))->F_imagePaths;
	frame[4].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(164);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (frame[4].i));
	((arc_graphics_g2d_Font *) NULL_CHECK(sp[0].o))->F_regions = (jref) sp[1].o;
	LINE_NUMBER(165);
	frame[5].i = (jint(0));
	}
label_11:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_12;
	}
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[1].o)))->F_fontFile;
	if (sp[0].o != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(168);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	sp[1].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[1].o)))->F_imagePaths;
	sp[0].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i))));
	frame[6].o = sp[0].o;
	goto label_17;
	}
label_14:;
	{
	LINE_NUMBER(170);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	sp[1].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[1].o)))->F_imagePaths;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i));
	sp[2].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[1].o)))->F_fontFile;
	sp[2].o = (jobject)((func_arc_files_Fi_type_R_arc_Files$FileType) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_files_Fi_type_R_arc_Files$FileType])(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_Files_get_java_lang_String_arc_Files$FileType_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_get_java_lang_String_arc_Files$FileType_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[6].o = sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_regions;
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	clinit_arc_graphics_Texture(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_graphics_Texture);
	init_arc_graphics_Texture_arc_files_Fi_boolean(ctx, sp[2].o, (frame[6].o), (jint(0)));
	init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(165);
	INST_IINC(5, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(173);
	((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_ownsTexture = (jint(1));
	LINE_NUMBER(174);
	goto label_20;
	}
label_6:;
	{
	LINE_NUMBER(175);
	((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_regions = (jref) (frame[2].o);
	LINE_NUMBER(176);
	((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_ownsTexture = (jint(0));
	}
label_20:;
	{
	LINE_NUMBER(179);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_graphics_g2d_Font_newFontCache_R_arc_graphics_g2d_FontCache) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font_newFontCache_R_arc_graphics_g2d_FontCache])(ctx, (frame[0].o));
	((arc_graphics_g2d_Font *) NULL_CHECK(sp[0].o))->F_cache = (jref) sp[1].o;
	LINE_NUMBER(181);
	((func_arc_graphics_g2d_Font_load_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font_load_arc_graphics_g2d_Font$FontData])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_g2d_Font_indexOf_java_lang_CharSequence_char_int_R_int(jcontext ctx, jobject param0, jchar param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:indexOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Font(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(185);
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[0].o)))(ctx, (frame[0].o));
	frame[3].i = temp0;
	}
label_1:;
	{
	LINE_NUMBER(186);
	if ((frame[2].i) >= (frame[3].i)) goto label_2;
	}
	{
	LINE_NUMBER(187);
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[0].o)))(ctx, (frame[0].o), (frame[2].i));
	if (temp0 != (frame[1].i)) goto label_4;
	}
	INST_ILOAD(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(186);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return (frame[3].i);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Font_load_arc_graphics_g2d_Font$FontData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:load", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[1].o)))->F_glyphs;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(193);
	if ((frame[5].o) != nullptr) goto label_4;
	}
	goto label_5;
label_4:;
	{
	LINE_NUMBER(194);
	frame[6].o = (frame[5].o);
	frame[7].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	frame[8].i = (jint(0));
	}
label_6:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_5;
	}
	{
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(195);
	if ((frame[9].o) == nullptr) goto label_8;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = frame[9].o;
	sp[2].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[2].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[2].o, ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[9].o)))->F_page));
	((func_arc_graphics_g2d_Font$FontData_setGlyphRegion_arc_graphics_g2d_Font$Glyph_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setGlyphRegion_arc_graphics_g2d_Font$Glyph_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_arc_graphics_g2d_TextureRegion, sp[2].o)));
	}
label_8:;
	{
	LINE_NUMBER(194);
	INST_IINC(8, 1);
	goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(192);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[1].o)))->F_missingGlyph;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[1].o)))->F_missingGlyph;
	sp[2].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[3].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[1].o)))->F_missingGlyph;
	sp[2].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[2].o, ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[3].o))->F_page));
	((func_arc_graphics_g2d_Font$FontData_setGlyphRegion_arc_graphics_g2d_Font$Glyph_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setGlyphRegion_arc_graphics_g2d_Font$Glyph_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_arc_graphics_g2d_TextureRegion, sp[2].o)));
	}
label_9:;
	LINE_NUMBER(198);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:draw", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_arc_graphics_g2d_FontCache_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_clear])(ctx, sp[0].o);
	LINE_NUMBER(206);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, (frame[1].o), (frame[2].f), (frame[3].f));
	frame[4].o = sp[0].o;
	LINE_NUMBER(207);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_arc_graphics_g2d_FontCache_draw) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_draw])(ctx, sp[0].o);
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_arc_graphics_Color_float_boolean_int_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jobject param3, jfloat param4, jbool param5, jint param6) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:draw", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	frame[5].f = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[0].o));
	frame[8].f = ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_scaleX);
	LINE_NUMBER(213);
	jint temp0 = (jint)((func_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean])(ctx, (frame[0].o));
	frame[9].i = temp0;
	LINE_NUMBER(214);
	((func_arc_graphics_g2d_Font_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_arc_graphics_Color])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(215);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[0].o));
	((func_arc_graphics_g2d_Font$FontData_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float])(ctx, sp[0].o, (frame[5].f));
	LINE_NUMBER(216);
	((func_arc_graphics_g2d_Font_setUseIntegerPositions_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setUseIntegerPositions_boolean])(ctx, (frame[0].o), (frame[6].i));
	LINE_NUMBER(217);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (jfloat(0)), (frame[7].i), (jint(0)));
	frame[10].o = sp[0].o;
	LINE_NUMBER(218);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[0].o));
	((func_arc_graphics_g2d_Font$FontData_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float])(ctx, sp[0].o, (frame[8].f));
	LINE_NUMBER(219);
	((func_arc_graphics_g2d_Font_setUseIntegerPositions_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setUseIntegerPositions_boolean])(ctx, (frame[0].o), (frame[9].i));
	LINE_NUMBER(220);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((func_arc_graphics_g2d_Font_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return (frame[10].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:draw", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (jfloat(0)), (frame[4].i), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jint param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:draw", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_arc_graphics_g2d_FontCache_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_clear])(ctx, sp[0].o);
	LINE_NUMBER(234);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].i), (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(235);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_arc_graphics_g2d_FontCache_draw) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_draw])(ctx, sp[0].o);
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4, jfloat param5, jint param6, jbool param7) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:draw", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].f = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_arc_graphics_g2d_FontCache_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_clear])(ctx, sp[0].o);
	LINE_NUMBER(245);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].i), (frame[6].f), (frame[7].i), (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(246);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_arc_graphics_g2d_FontCache_draw) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_draw])(ctx, sp[0].o);
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return (frame[9].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4, jfloat param5, jint param6, jbool param7, jobject param8) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:draw", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].f = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].o = param8;
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_arc_graphics_g2d_FontCache_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_clear])(ctx, sp[0].o);
	LINE_NUMBER(257);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].i), (frame[6].f), (frame[7].i), (frame[8].i), (frame[9].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(258);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_arc_graphics_g2d_FontCache_draw) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_draw])(ctx, sp[0].o);
	LINE_NUMBER(259);
	popStackFrame(ctx);
	return (frame[10].o);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Font_draw_arc_graphics_g2d_GlyphLayout_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:draw", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_arc_graphics_g2d_FontCache_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_clear])(ctx, sp[0].o);
	LINE_NUMBER(268);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_arc_graphics_g2d_FontCache_addText_arc_graphics_g2d_GlyphLayout_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_addText_arc_graphics_g2d_GlyphLayout_float_float])(ctx, sp[0].o, (frame[1].o), (frame[2].f), (frame[3].f));
	LINE_NUMBER(269);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_arc_graphics_g2d_FontCache_draw) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_draw])(ctx, sp[0].o);
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_Font_getColor_R_arc_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:getColor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(274);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_getColor_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_getColor_R_arc_graphics_Color])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Font_setColor_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:setColor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_getColor_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_getColor_R_arc_graphics_Color])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(280);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Font_setColor_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:setColor", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(284);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_getColor_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_getColor_R_arc_graphics_Color])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(285);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_Font_getScaleX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:getScaleX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_scaleX);
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_Font_getScaleY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:getScaleY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_scaleY);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_Font_getRegion_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:getRegion", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_graphics_g2d_TextureRegion, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_Font_getRegions_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:getRegions", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(309);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_regions;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_Font_getRegion_int_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:getRegion", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_graphics_g2d_TextureRegion, sp[0].o));
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_Font_getLineHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:getLineHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(322);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_lineHeight);
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_Font_getSpaceXadvance_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:getSpaceXadvance", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(327);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_spaceXadvance);
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_Font_getXHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:getXHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(332);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_xHeight);
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_Font_getCapHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:getCapHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_capHeight);
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_Font_getAscent_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:getAscent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(345);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_ascent);
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_Font_getDescent_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:getDescent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(353);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_descent);
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_g2d_Font_isFlipped_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:isFlipped", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(358);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_flipped);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Font_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:dispose", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(364);
	if (((jint)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_ownsTexture) == 0) goto label_1;
	}
	{
	LINE_NUMBER(365);
	frame[1].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_regions;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(366);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((checkCast(ctx, &class_arc_graphics_g2d_TextureRegion, sp[0].o))))->F_texture;
	((func_arc_graphics_Texture_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_dispose])(ctx, sp[0].o);
	LINE_NUMBER(365);
	INST_IINC(1, 1);
	goto label_3;
	}
label_1:;
	LINE_NUMBER(368);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_graphics_g2d_Font_isDisposed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:isDisposed", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(372);
	if (((jint)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_ownsTexture) == 0) goto label_1;
	}
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_regions;
	{ /* InvokeDynamic */
		clinit_arc_graphics_g2d_Font_invoke_arc_func_Boolf_0(ctx);
		auto proxy = (arc_graphics_g2d_Font_invoke_arc_func_Boolf_0 *) gcAlloc(ctx, &class_arc_graphics_g2d_Font_invoke_arc_func_Boolf_0);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(376);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Font_setFixedWidthGlyphs_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:setFixedWidthGlyphs", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_data;
	frame[2].o = sp[0].o;
	LINE_NUMBER(385);
	frame[3].i = (jint(0));
	LINE_NUMBER(386);
	frame[4].i = (jint(0));
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[5].i = temp0;
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_5;
	}
	{
	LINE_NUMBER(387);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[1].o)))(ctx, (frame[1].o), (frame[4].i));
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph])(ctx, sp[0].o, temp0);
	frame[6].o = sp[0].o;
	LINE_NUMBER(388);
	if ((frame[6].o) == nullptr) goto label_8;
	}
	{
	if (((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[6].o)))->F_xadvance) <= (frame[3].i)) goto label_8;
	}
	{
	frame[3].i = ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[6].o)))->F_xadvance);
	}
label_8:;
	{
	LINE_NUMBER(386);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(390);
	frame[4].i = (jint(0));
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[5].i = temp0;
	}
label_10:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_11;
	}
	{
	LINE_NUMBER(391);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[1].o)))(ctx, (frame[1].o), (frame[4].i));
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph])(ctx, sp[0].o, temp0);
	frame[6].o = sp[0].o;
	LINE_NUMBER(392);
	if ((frame[6].o) != nullptr) goto label_14;
	}
	goto label_15;
label_14:;
	{
	LINE_NUMBER(393);
	sp[0].o = frame[6].o;
	jint temp0 = (jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_xoffset;
	jint temp1 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (jfloat((((frame[3].i) - ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[6].o)))->F_xadvance)) / (jint(2))))));
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_xoffset = (temp0 + temp1);
	LINE_NUMBER(394);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[6].o)))->F_xadvance = (frame[3].i);
	LINE_NUMBER(395);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[6].o)))->F_kerning = (jref) (jobject(nullptr));
	LINE_NUMBER(396);
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[6].o)))->F_fixedWidth = (jint(1));
	}
label_15:;
	{
	LINE_NUMBER(390);
	INST_IINC(4, 1);
	goto label_10;
	}
label_11:;
	LINE_NUMBER(398);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Font_setUseIntegerPositions_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:setUseIntegerPositions", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(402);
	((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_integer = (frame[1].i);
	LINE_NUMBER(403);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_arc_graphics_g2d_FontCache_setUseIntegerPositions_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_setUseIntegerPositions_boolean])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(404);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:usesIntegerPositions", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(408);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_integer);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:getCache", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(417);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_cache;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:getData", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(422);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_g2d_Font_ownsTexture_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:ownsTexture", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(427);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_ownsTexture);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Font_setOwnsTexture_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:setOwnsTexture", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(436);
	((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_ownsTexture = (frame[1].i);
	LINE_NUMBER(437);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_Font_newFontCache_R_arc_graphics_g2d_FontCache(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:newFontCache", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(447);
	clinit_arc_graphics_g2d_FontCache(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_FontCache);
	init_arc_graphics_g2d_FontCache_arc_graphics_g2d_Font_boolean(ctx, sp[0].o, (frame[0].o), ((jint)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_integer));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_Font_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(451);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_fontFile;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_fontFile;
	sp[0].o = (jobject)((func_arc_files_Fi_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_nameWithoutExtension_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(452);
	sp[0].o = (jobject)M_java_lang_Object_toString_R_java_lang_String(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_Font_addFallback_arc_graphics_g2d_Font(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:addFallback", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(460);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[0].o)))->F_data;
	sp[1].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[1].o)))->F_data;
	((func_arc_graphics_g2d_Font$FontData_addFallback_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_addFallback_arc_graphics_g2d_Font$FontData])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(461);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_arc_graphics_g2d_Font_lambda$isDisposed$0_arc_graphics_g2d_TextureRegion_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Font:lambda$isDisposed$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Font(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	jint temp0 = (jint)((func_arc_graphics_Texture_isDisposed_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_isDisposed_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_Font[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_graphics_g2d_Font_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_graphics_g2d_Font_dispose,
	(void *) M_arc_graphics_g2d_Font_isDisposed_R_boolean,
	(void *) M_arc_graphics_g2d_Font_load_arc_graphics_g2d_Font$FontData,
	(void *) M_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout,
	(void *) M_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_arc_graphics_Color_float_boolean_int_R_arc_graphics_g2d_GlyphLayout,
	(void *) M_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_R_arc_graphics_g2d_GlyphLayout,
	(void *) M_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout,
	(void *) M_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout,
	(void *) M_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout,
	(void *) M_arc_graphics_g2d_Font_draw_arc_graphics_g2d_GlyphLayout_float_float,
	(void *) M_arc_graphics_g2d_Font_getColor_R_arc_graphics_Color,
	(void *) M_arc_graphics_g2d_Font_setColor_arc_graphics_Color,
	(void *) M_arc_graphics_g2d_Font_setColor_float_float_float_float,
	(void *) M_arc_graphics_g2d_Font_getScaleX_R_float,
	(void *) M_arc_graphics_g2d_Font_getScaleY_R_float,
	(void *) M_arc_graphics_g2d_Font_getRegion_R_arc_graphics_g2d_TextureRegion,
	(void *) M_arc_graphics_g2d_Font_getRegions_R_arc_struct_Seq,
	(void *) M_arc_graphics_g2d_Font_getRegion_int_R_arc_graphics_g2d_TextureRegion,
	(void *) M_arc_graphics_g2d_Font_getLineHeight_R_float,
	(void *) M_arc_graphics_g2d_Font_getSpaceXadvance_R_float,
	(void *) M_arc_graphics_g2d_Font_getXHeight_R_float,
	(void *) M_arc_graphics_g2d_Font_getCapHeight_R_float,
	(void *) M_arc_graphics_g2d_Font_getAscent_R_float,
	(void *) M_arc_graphics_g2d_Font_getDescent_R_float,
	(void *) M_arc_graphics_g2d_Font_isFlipped_R_boolean,
	(void *) M_arc_graphics_g2d_Font_setFixedWidthGlyphs_java_lang_CharSequence,
	(void *) M_arc_graphics_g2d_Font_setUseIntegerPositions_boolean,
	(void *) M_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean,
	(void *) M_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache,
	(void *) M_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData,
	(void *) M_arc_graphics_g2d_Font_ownsTexture_R_boolean,
	(void *) M_arc_graphics_g2d_Font_setOwnsTexture_boolean,
	(void *) M_arc_graphics_g2d_Font_newFontCache_R_arc_graphics_g2d_FontCache,
	(void *) M_arc_graphics_g2d_Font_addFallback_arc_graphics_g2d_Font,
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
	{ "load", "(Larc/graphics/g2d/Font$FontData;)V" },
	{ "draw", "(Ljava/lang/CharSequence;FF)Larc/graphics/g2d/GlyphLayout;" },
	{ "draw", "(Ljava/lang/CharSequence;FFLarc/graphics/Color;FZI)Larc/graphics/g2d/GlyphLayout;" },
	{ "draw", "(Ljava/lang/CharSequence;FFI)Larc/graphics/g2d/GlyphLayout;" },
	{ "draw", "(Ljava/lang/CharSequence;FFFIZ)Larc/graphics/g2d/GlyphLayout;" },
	{ "draw", "(Ljava/lang/CharSequence;FFIIFIZ)Larc/graphics/g2d/GlyphLayout;" },
	{ "draw", "(Ljava/lang/CharSequence;FFIIFIZLjava/lang/String;)Larc/graphics/g2d/GlyphLayout;" },
	{ "draw", "(Larc/graphics/g2d/GlyphLayout;FF)V" },
	{ "getColor", "()Larc/graphics/Color;" },
	{ "setColor", "(Larc/graphics/Color;)V" },
	{ "setColor", "(FFFF)V" },
	{ "getScaleX", "()F" },
	{ "getScaleY", "()F" },
	{ "getRegion", "()Larc/graphics/g2d/TextureRegion;" },
	{ "getRegions", "()Larc/struct/Seq;" },
	{ "getRegion", "(I)Larc/graphics/g2d/TextureRegion;" },
	{ "getLineHeight", "()F" },
	{ "getSpaceXadvance", "()F" },
	{ "getXHeight", "()F" },
	{ "getCapHeight", "()F" },
	{ "getAscent", "()F" },
	{ "getDescent", "()F" },
	{ "isFlipped", "()Z" },
	{ "setFixedWidthGlyphs", "(Ljava/lang/CharSequence;)V" },
	{ "setUseIntegerPositions", "(Z)V" },
	{ "usesIntegerPositions", "()Z" },
	{ "getCache", "()Larc/graphics/g2d/FontCache;" },
	{ "getData", "()Larc/graphics/g2d/Font$FontData;" },
	{ "ownsTexture", "()Z" },
	{ "setOwnsTexture", "(Z)V" },
	{ "newFontCache", "()Larc/graphics/g2d/FontCache;" },
	{ "addFallback", "(Larc/graphics/g2d/Font;)V" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static jclass innerClasses[] {
	&class_arc_graphics_g2d_Font$FontData,
	&class_arc_graphics_g2d_Font$Glyph,
};

static FieldMetadata fields[] {
	{ "LOG2_PAGE_SIZE", &class_int, (intptr_t) &SF_arc_graphics_g2d_Font_LOG2_PAGE_SIZE, "I", 26 },
	{ "PAGE_SIZE", &class_int, (intptr_t) &SF_arc_graphics_g2d_Font_PAGE_SIZE, "I", 26 },
	{ "PAGES", &class_int, (intptr_t) &SF_arc_graphics_g2d_Font_PAGES, "I", 26 },
	{ "data", &class_arc_graphics_g2d_Font$FontData, offsetof(arc_graphics_g2d_Font, F_data), "Larc/graphics/g2d/Font$FontData;", 17 },
	{ "cache", &class_arc_graphics_g2d_FontCache, offsetof(arc_graphics_g2d_Font, F_cache), "Larc/graphics/g2d/FontCache;", 18 },
	{ "regions", &class_arc_struct_Seq, offsetof(arc_graphics_g2d_Font, F_regions), "Larc/struct/Seq;", 0 },
	{ "integer", &class_boolean, offsetof(arc_graphics_g2d_Font, F_integer), "Z", 0 },
	{ "flipped", &class_boolean, offsetof(arc_graphics_g2d_Font, F_flipped), "Z", 2 },
	{ "ownsTexture", &class_boolean, offsetof(arc_graphics_g2d_Font, F_ownsTexture), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_Font_arc_files_Fi_arc_graphics_g2d_TextureRegion, 0, "(Larc/files/Fi;Larc/graphics/g2d/TextureRegion;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_Font_arc_files_Fi_arc_graphics_g2d_TextureRegion_boolean, 0, "(Larc/files/Fi;Larc/graphics/g2d/TextureRegion;Z)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_Font_arc_files_Fi, 0, "(Larc/files/Fi;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_Font_arc_files_Fi_boolean, 0, "(Larc/files/Fi;Z)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_Font_arc_files_Fi_arc_files_Fi_boolean, 0, "(Larc/files/Fi;Larc/files/Fi;Z)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_Font_arc_files_Fi_arc_files_Fi_boolean_boolean, 0, "(Larc/files/Fi;Larc/files/Fi;ZZ)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_Font_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_TextureRegion_boolean, 0, "(Larc/graphics/g2d/Font$FontData;Larc/graphics/g2d/TextureRegion;Z)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_Font_arc_graphics_g2d_Font$FontData_arc_struct_Seq_boolean, 0, "(Larc/graphics/g2d/Font$FontData;Larc/struct/Seq;Z)V", 1 },
	{ "indexOf", (intptr_t) SM_arc_graphics_g2d_Font_indexOf_java_lang_CharSequence_char_int_R_int, 0, "(Ljava/lang/CharSequence;CI)I", 8 },
	{ "load", (intptr_t) M_arc_graphics_g2d_Font_load_arc_graphics_g2d_Font$FontData, VTABLE_arc_graphics_g2d_Font_load_arc_graphics_g2d_Font$FontData, "(Larc/graphics/g2d/Font$FontData;)V", 4 },
	{ "draw", (intptr_t) M_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout, VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout, "(Ljava/lang/CharSequence;FF)Larc/graphics/g2d/GlyphLayout;", 1 },
	{ "draw", (intptr_t) M_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_arc_graphics_Color_float_boolean_int_R_arc_graphics_g2d_GlyphLayout, VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_arc_graphics_Color_float_boolean_int_R_arc_graphics_g2d_GlyphLayout, "(Ljava/lang/CharSequence;FFLarc/graphics/Color;FZI)Larc/graphics/g2d/GlyphLayout;", 1 },
	{ "draw", (intptr_t) M_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_R_arc_graphics_g2d_GlyphLayout, VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_R_arc_graphics_g2d_GlyphLayout, "(Ljava/lang/CharSequence;FFI)Larc/graphics/g2d/GlyphLayout;", 1 },
	{ "draw", (intptr_t) M_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout, VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout, "(Ljava/lang/CharSequence;FFFIZ)Larc/graphics/g2d/GlyphLayout;", 1 },
	{ "draw", (intptr_t) M_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout, VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout, "(Ljava/lang/CharSequence;FFIIFIZ)Larc/graphics/g2d/GlyphLayout;", 1 },
	{ "draw", (intptr_t) M_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout, VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout, "(Ljava/lang/CharSequence;FFIIFIZLjava/lang/String;)Larc/graphics/g2d/GlyphLayout;", 1 },
	{ "draw", (intptr_t) M_arc_graphics_g2d_Font_draw_arc_graphics_g2d_GlyphLayout_float_float, VTABLE_arc_graphics_g2d_Font_draw_arc_graphics_g2d_GlyphLayout_float_float, "(Larc/graphics/g2d/GlyphLayout;FF)V", 1 },
	{ "getColor", (intptr_t) M_arc_graphics_g2d_Font_getColor_R_arc_graphics_Color, VTABLE_arc_graphics_g2d_Font_getColor_R_arc_graphics_Color, "()Larc/graphics/Color;", 1 },
	{ "setColor", (intptr_t) M_arc_graphics_g2d_Font_setColor_arc_graphics_Color, VTABLE_arc_graphics_g2d_Font_setColor_arc_graphics_Color, "(Larc/graphics/Color;)V", 1 },
	{ "setColor", (intptr_t) M_arc_graphics_g2d_Font_setColor_float_float_float_float, VTABLE_arc_graphics_g2d_Font_setColor_float_float_float_float, "(FFFF)V", 1 },
	{ "getScaleX", (intptr_t) M_arc_graphics_g2d_Font_getScaleX_R_float, VTABLE_arc_graphics_g2d_Font_getScaleX_R_float, "()F", 1 },
	{ "getScaleY", (intptr_t) M_arc_graphics_g2d_Font_getScaleY_R_float, VTABLE_arc_graphics_g2d_Font_getScaleY_R_float, "()F", 1 },
	{ "getRegion", (intptr_t) M_arc_graphics_g2d_Font_getRegion_R_arc_graphics_g2d_TextureRegion, VTABLE_arc_graphics_g2d_Font_getRegion_R_arc_graphics_g2d_TextureRegion, "()Larc/graphics/g2d/TextureRegion;", 1 },
	{ "getRegions", (intptr_t) M_arc_graphics_g2d_Font_getRegions_R_arc_struct_Seq, VTABLE_arc_graphics_g2d_Font_getRegions_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "getRegion", (intptr_t) M_arc_graphics_g2d_Font_getRegion_int_R_arc_graphics_g2d_TextureRegion, VTABLE_arc_graphics_g2d_Font_getRegion_int_R_arc_graphics_g2d_TextureRegion, "(I)Larc/graphics/g2d/TextureRegion;", 1 },
	{ "getLineHeight", (intptr_t) M_arc_graphics_g2d_Font_getLineHeight_R_float, VTABLE_arc_graphics_g2d_Font_getLineHeight_R_float, "()F", 1 },
	{ "getSpaceXadvance", (intptr_t) M_arc_graphics_g2d_Font_getSpaceXadvance_R_float, VTABLE_arc_graphics_g2d_Font_getSpaceXadvance_R_float, "()F", 1 },
	{ "getXHeight", (intptr_t) M_arc_graphics_g2d_Font_getXHeight_R_float, VTABLE_arc_graphics_g2d_Font_getXHeight_R_float, "()F", 1 },
	{ "getCapHeight", (intptr_t) M_arc_graphics_g2d_Font_getCapHeight_R_float, VTABLE_arc_graphics_g2d_Font_getCapHeight_R_float, "()F", 1 },
	{ "getAscent", (intptr_t) M_arc_graphics_g2d_Font_getAscent_R_float, VTABLE_arc_graphics_g2d_Font_getAscent_R_float, "()F", 1 },
	{ "getDescent", (intptr_t) M_arc_graphics_g2d_Font_getDescent_R_float, VTABLE_arc_graphics_g2d_Font_getDescent_R_float, "()F", 1 },
	{ "isFlipped", (intptr_t) M_arc_graphics_g2d_Font_isFlipped_R_boolean, VTABLE_arc_graphics_g2d_Font_isFlipped_R_boolean, "()Z", 1 },
	{ "dispose", (intptr_t) M_arc_graphics_g2d_Font_dispose, VTABLE_arc_graphics_g2d_Font_dispose, "()V", 1 },
	{ "isDisposed", (intptr_t) M_arc_graphics_g2d_Font_isDisposed_R_boolean, VTABLE_arc_graphics_g2d_Font_isDisposed_R_boolean, "()Z", 1 },
	{ "setFixedWidthGlyphs", (intptr_t) M_arc_graphics_g2d_Font_setFixedWidthGlyphs_java_lang_CharSequence, VTABLE_arc_graphics_g2d_Font_setFixedWidthGlyphs_java_lang_CharSequence, "(Ljava/lang/CharSequence;)V", 1 },
	{ "setUseIntegerPositions", (intptr_t) M_arc_graphics_g2d_Font_setUseIntegerPositions_boolean, VTABLE_arc_graphics_g2d_Font_setUseIntegerPositions_boolean, "(Z)V", 1 },
	{ "usesIntegerPositions", (intptr_t) M_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean, VTABLE_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean, "()Z", 1 },
	{ "getCache", (intptr_t) M_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache, VTABLE_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache, "()Larc/graphics/g2d/FontCache;", 1 },
	{ "getData", (intptr_t) M_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData, VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData, "()Larc/graphics/g2d/Font$FontData;", 1 },
	{ "ownsTexture", (intptr_t) M_arc_graphics_g2d_Font_ownsTexture_R_boolean, VTABLE_arc_graphics_g2d_Font_ownsTexture_R_boolean, "()Z", 1 },
	{ "setOwnsTexture", (intptr_t) M_arc_graphics_g2d_Font_setOwnsTexture_boolean, VTABLE_arc_graphics_g2d_Font_setOwnsTexture_boolean, "(Z)V", 1 },
	{ "newFontCache", (intptr_t) M_arc_graphics_g2d_Font_newFontCache_R_arc_graphics_g2d_FontCache, VTABLE_arc_graphics_g2d_Font_newFontCache_R_arc_graphics_g2d_FontCache, "()Larc/graphics/g2d/FontCache;", 1 },
	{ "toString", (intptr_t) M_arc_graphics_g2d_Font_toString_R_java_lang_String, VTABLE_arc_graphics_g2d_Font_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "addFallback", (intptr_t) M_arc_graphics_g2d_Font_addFallback_arc_graphics_g2d_Font, VTABLE_arc_graphics_g2d_Font_addFallback_arc_graphics_g2d_Font, "(Larc/graphics/g2d/Font;)V", 1 },
	{ "lambda$isDisposed$0", (intptr_t) SM_arc_graphics_g2d_Font_lambda$isDisposed$0_arc_graphics_g2d_TextureRegion_R_boolean, 0, "(Larc/graphics/g2d/TextureRegion;)Z", 4106 },
};

Class class_arc_graphics_g2d_Font{
		.nativeName = (intptr_t) "arc/graphics/g2d/Font",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_Font),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_Font,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_Font,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_Font,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 45,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 45,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_Font = registerClass(&class_arc_graphics_g2d_Font);

}
