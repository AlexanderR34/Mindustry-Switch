#include "arc/freetype/FreeTypeFontGenerator_FreeTypeFontData.h"
#include "arc/freetype/FreeTypeFontGenerator.h"
#include "arc/freetype/FreeType.h"
#include "arc/Application.h"
#include "arc/graphics/g2d/Font_Glyph.h"
#include "java/lang/Runnable.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/freetype/FreeType_Face.h"
#include "arc/freetype/FreeType_Stroker.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "arc/util/Disposable.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Nullable.h"
#include "java/lang/CharSequence.h"
#include "arc/freetype/FreeTypeFontGenerator_FreeTypeFontParameter.h"
#include "arc/graphics/g2d/GlyphLayout_GlyphRun.h"
#include "java/lang/Object.h"
#include "arc/freetype/FreeTypeFontGenerator_FreeTypeFontData_invoke_java_lang_Runnable_0.h"
#include "arc/freetype/FreeTypeFontGenerator_FreeTypeFontData.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/graphics/g2d/PixmapPacker.h"

extern "C" {

jbool SF_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_ignoreDirty;

void mark_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_graphics_g2d_Font$FontData(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) object;
	if (self->F_regions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_regions)->clazz)->markFunction)((jobject) self->F_regions, mark, depth + 1);
	if (self->F_generator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_generator)->clazz)->markFunction)((jobject) self->F_generator, mark, depth + 1);
	if (self->F_parameter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parameter)->clazz)->markFunction)((jobject) self->F_parameter, mark, depth + 1);
	if (self->F_stroker)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stroker)->clazz)->markFunction)((jobject) self->F_stroker, mark, depth + 1);
	if (self->F_packer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_packer)->clazz)->markFunction)((jobject) self->F_packer, mark, depth + 1);
	if (self->F_glyphs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_glyphs)->clazz)->markFunction)((jobject) self->F_glyphs, mark, depth + 1);
	if (self->F_fallback)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fallback)->clazz)->markFunction)((jobject) self->F_fallback, mark, depth + 1);
	if (self->F_override)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_override)->clazz)->markFunction)((jobject) self->F_override, mark, depth + 1);
}

void init_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator$FreeTypeFontData:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(686);
	init_arc_graphics_g2d_Font$FontData(ctx, (frame[0].o));
	LINE_NUMBER(699);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK(sp[0].o))->F_fallback = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_setOverride_arc_graphics_g2d_Font$FontData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator$FreeTypeFontData:setOverride", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(705);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_override = (jref) (frame[1].o);
	LINE_NUMBER(706);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[1].o)))->F_capHeight = ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_capHeight);
	LINE_NUMBER(707);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_addFallback_arc_graphics_g2d_Font$FontData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator$FreeTypeFontData:addFallback", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(711);
	if ((frame[1].o) == (frame[0].o)) goto label_1;
	}
	{
	LINE_NUMBER(712);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_fallback;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(714);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator$FreeTypeFontData:getGlyph", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(718);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_override;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(719);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_override;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph])(ctx, sp[0].o, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(720);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_override;
	sp[1].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[1].o))->F_missingGlyph;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(721);
	((func_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_setGlyph_int_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_setGlyph_int_arc_graphics_g2d_Font$Glyph])(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	LINE_NUMBER(722);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(723);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_1:;
	{
	LINE_NUMBER(727);
	sp[0].o = (jobject)M_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(728);
	if ((frame[2].o) != nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_generator;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(729);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_generator;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_parameter;
	((func_arc_freetype_FreeTypeFontGenerator_setPixelSizes_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeTypeFontGenerator_setPixelSizes_int_int])(ctx, sp[0].o, temp0, ((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(730);
	if (((jint)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_flipped) == 0) goto label_11;
	}
	{
	jfloat temp0 = -((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_ascent);
	sp[0].f = temp0;
	sp += 1;
	goto label_12;
	}
label_11:;
	INST_ALOAD(0);
	sp[-1].f = ((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[-1].o))->F_ascent;
label_12:;
	{
	sp -= 1;
	frame[3].f = ((sp[0].f + ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_capHeight)) / ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_scaleY));
	LINE_NUMBER(731);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_generator;
	jint temp0 = frame[1].i;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_parameter;
	sp[3].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_stroker;
	jfloat temp1 = frame[3].f;
	sp[4].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_packer;
	sp[0].o = (jobject)((func_arc_freetype_FreeTypeFontGenerator_createGlyph_char_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_arc_freetype_FreeType$Stroker_float_arc_graphics_g2d_PixmapPacker_R_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeTypeFontGenerator_createGlyph_char_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_arc_freetype_FreeType$Stroker_float_arc_graphics_g2d_PixmapPacker_R_arc_graphics_g2d_Font$Glyph])(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, sp[3].o, temp1, sp[4].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(732);
	if ((frame[2].o) != nullptr) goto label_15;
	}
	{
	LINE_NUMBER(734);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_fallback;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_17:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_arc_graphics_g2d_Font$FontData, sp[0].o));
	LINE_NUMBER(735);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph])(ctx, (frame[5].o), (frame[1].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(736);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[5].o)))->F_missingGlyph;
	if (sp[0].o == sp[1].o) goto label_21;
	}
	{
	LINE_NUMBER(737);
	((func_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_setGlyph_int_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_setGlyph_int_arc_graphics_g2d_Font$Glyph])(ctx, (frame[0].o), (frame[1].i), (frame[6].o));
	LINE_NUMBER(738);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_21:;
	LINE_NUMBER(740);
	goto label_17;
label_18:;
	{
	LINE_NUMBER(741);
	sp[0].o = (jobject)((arc_graphics_g2d_Font$FontData *) NULL_CHECK((frame[0].o)))->F_missingGlyph;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(744);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[2].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[2].o, ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[2].o)))->F_page));
	((func_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_setGlyphRegion_arc_graphics_g2d_Font$Glyph_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_setGlyphRegion_arc_graphics_g2d_Font$Glyph_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_arc_graphics_g2d_TextureRegion, sp[2].o)));
	LINE_NUMBER(745);
	((func_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_setGlyph_int_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_setGlyph_int_arc_graphics_g2d_Font$Glyph])(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	LINE_NUMBER(746);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_glyphs;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(747);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(1));
	LINE_NUMBER(749);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_generator;
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator *) NULL_CHECK(sp[0].o))->F_face;
	frame[4].o = sp[0].o;
	LINE_NUMBER(750);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_parameter;
	if (((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[0].o))->F_kerning) == 0) goto label_8;
	}
	{
	LINE_NUMBER(751);
	jint temp0 = (jint)((func_arc_freetype_FreeType$Face_getCharIndex_int_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_freetype_FreeType$Face_getCharIndex_int_R_int])(ctx, (frame[4].o), (frame[1].i));
	frame[5].i = temp0;
	LINE_NUMBER(752);
	frame[6].i = (jint(0));
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_glyphs;
	frame[7].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_32:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_8;
	}
	{
	LINE_NUMBER(753);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_glyphs;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[6].i));
	frame[8].o = (checkCast(ctx, &class_arc_graphics_g2d_Font$Glyph, sp[0].o));
	LINE_NUMBER(754);
	jint temp0 = (jint)((func_arc_freetype_FreeType$Face_getCharIndex_int_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_freetype_FreeType$Face_getCharIndex_int_R_int])(ctx, (frame[4].o), ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[8].o)))->F_id));
	frame[9].i = temp0;
	LINE_NUMBER(756);
	jint temp1 = (jint)((func_arc_freetype_FreeType$Face_getKerning_int_int_int_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_freetype_FreeType$Face_getKerning_int_int_int_R_int])(ctx, (frame[4].o), (frame[5].i), (frame[9].i), (jint(0)));
	frame[10].i = temp1;
	LINE_NUMBER(757);
	if ((frame[10].i) == 0) goto label_37;
	}
	{
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[8].o)))->F_id;
	jint temp1 = (jint)SM_arc_freetype_FreeType_toInt_int_R_int(ctx, (frame[10].i));
	((func_arc_graphics_g2d_Font$Glyph_setKerning_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$Glyph_setKerning_int_int])(ctx, sp[0].o, temp0, temp1);
	}
label_37:;
	{
	LINE_NUMBER(759);
	jint temp0 = (jint)((func_arc_freetype_FreeType$Face_getKerning_int_int_int_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_freetype_FreeType$Face_getKerning_int_int_int_R_int])(ctx, (frame[4].o), (frame[9].i), (frame[5].i), (jint(0)));
	frame[10].i = temp0;
	LINE_NUMBER(760);
	if ((frame[10].i) == 0) goto label_39;
	}
	{
	sp[0].o = frame[8].o;
	jint temp0 = frame[1].i;
	jint temp1 = (jint)SM_arc_freetype_FreeType_toInt_int_R_int(ctx, (frame[10].i));
	((func_arc_graphics_g2d_Font$Glyph_setKerning_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$Glyph_setKerning_int_int])(ctx, sp[0].o, temp0, temp1);
	}
label_39:;
	{
	LINE_NUMBER(752);
	INST_IINC(6, 1);
	goto label_32;
	}
label_8:;
	{
	LINE_NUMBER(764);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_getGlyphs_arc_graphics_g2d_GlyphLayout$GlyphRun_java_lang_CharSequence_int_int_arc_graphics_g2d_Font$Glyph(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator$FreeTypeFontData:getGlyphs", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(768);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_packer;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_packer;
	((func_arc_graphics_g2d_PixmapPacker_setPackToTexture_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_setPackToTexture_boolean])(ctx, sp[0].o, (jint(1)));
	}
label_1:;
	{
	LINE_NUMBER(769);
	M_arc_graphics_g2d_Font$FontData_getGlyphs_arc_graphics_g2d_GlyphLayout$GlyphRun_java_lang_CharSequence_int_int_arc_graphics_g2d_Font$Glyph(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].i), (frame[5].o));
	LINE_NUMBER(770);
	if (((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_dirty) == 0) goto label_3;
	}
	clinit_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData(ctx);
	(sp++)->i = SF_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_ignoreDirty;
	if ((--sp)->i != 0) goto label_3;
	{
	LINE_NUMBER(772);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_invoke_java_lang_Runnable_0(ctx);
		auto proxy = (arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_invoke_java_lang_Runnable_0 *) gcAlloc(ctx, &class_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_invoke_java_lang_Runnable_0);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	LINE_NUMBER(779);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator$FreeTypeFontData:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(783);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_stroker;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_stroker;
	((func_arc_freetype_FreeType$Stroker_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_freetype_FreeType$Stroker_dispose])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(784);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_packer;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_packer;
	((func_arc_graphics_g2d_PixmapPacker_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_dispose])(ctx, sp[0].o);
	}
label_2:;
	LINE_NUMBER(785);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_lambda$getGlyphs$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator$FreeTypeFontData:lambda$getGlyphs$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(773);
	if (((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_dirty) == 0) goto label_1;
	}
	{
	LINE_NUMBER(774);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_dirty = (jint(0));
	LINE_NUMBER(775);
	sp[0].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_packer;
	sp[1].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_regions;
	sp[2].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_parameter;
	sp[2].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[2].o))->F_minFilter;
	sp[3].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_parameter;
	sp[3].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[3].o))->F_magFilter;
	sp[4].o = (jobject)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontData *) NULL_CHECK((frame[0].o)))->F_parameter;
	((func_arc_graphics_g2d_PixmapPacker_updateTextureRegions_arc_struct_Seq_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_updateTextureRegions_arc_struct_Seq_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, ((jint)((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[4].o))->F_genMipMaps));
	}
label_1:;
	LINE_NUMBER(777);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_graphics_g2d_Font$FontData(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator$FreeTypeFontData:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData(ctx);
	{
	LINE_NUMBER(688);
	clinit_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData(ctx);
	SF_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_ignoreDirty = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field override
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[9]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData[] {
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
	(void *) M_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_setOverride_arc_graphics_g2d_Font$FontData,
	(void *) M_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_addFallback_arc_graphics_g2d_Font$FontData,
	(void *) M_arc_graphics_g2d_Font$FontData_load_arc_files_Fi_boolean,
	(void *) M_arc_graphics_g2d_Font$FontData_setGlyphRegion_arc_graphics_g2d_Font$Glyph_arc_graphics_g2d_TextureRegion,
	(void *) M_arc_graphics_g2d_Font$FontData_setLineHeight_float,
	(void *) M_arc_graphics_g2d_Font$FontData_setGlyph_int_arc_graphics_g2d_Font$Glyph,
	(void *) M_arc_graphics_g2d_Font$FontData_getFirstGlyph_R_arc_graphics_g2d_Font$Glyph,
	(void *) M_arc_graphics_g2d_Font$FontData_hasGlyph_char_R_boolean,
	(void *) M_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph,
	(void *) M_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_getGlyphs_arc_graphics_g2d_GlyphLayout$GlyphRun_java_lang_CharSequence_int_int_arc_graphics_g2d_Font$Glyph,
	(void *) M_arc_graphics_g2d_Font$FontData_getWrapIndex_arc_struct_Seq_int_R_int,
	(void *) M_arc_graphics_g2d_Font$FontData_isBreakChar_char_R_boolean,
	(void *) M_arc_graphics_g2d_Font$FontData_isWhitespace_char_R_boolean,
	(void *) M_arc_graphics_g2d_Font$FontData_getImagePath_int_R_java_lang_String,
	(void *) M_arc_graphics_g2d_Font$FontData_getImagePaths_R_Array1_java_lang_String,
	(void *) M_arc_graphics_g2d_Font$FontData_getFontFile_R_arc_files_Fi,
	(void *) M_arc_graphics_g2d_Font$FontData_setScale_float_float,
	(void *) M_arc_graphics_g2d_Font$FontData_setScale_float,
	(void *) M_arc_graphics_g2d_Font$FontData_scale_float,
	(void *) M_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_lambda$getGlyphs$0,
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
	{ "dispose", "()V" },
	{ "isDisposed", "()Z" },
	{ "lambda$getGlyphs$0", "()V" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static FieldMetadata fields[] {
	{ "ignoreDirty", &class_boolean, (intptr_t) &SF_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_ignoreDirty, "Z", 9 },
	{ "regions", &class_arc_struct_Seq, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontData, F_regions), "Larc/struct/Seq;", 0 },
	{ "generator", &class_arc_freetype_FreeTypeFontGenerator, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontData, F_generator), "Larc/freetype/FreeTypeFontGenerator;", 0 },
	{ "parameter", &class_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontData, F_parameter), "Larc/freetype/FreeTypeFontGenerator$FreeTypeFontParameter;", 0 },
	{ "stroker", &class_arc_freetype_FreeType$Stroker, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontData, F_stroker), "Larc/freetype/FreeType$Stroker;", 0 },
	{ "packer", &class_arc_graphics_g2d_PixmapPacker, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontData, F_packer), "Larc/graphics/g2d/PixmapPacker;", 0 },
	{ "glyphs", &class_arc_struct_Seq, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontData, F_glyphs), "Larc/struct/Seq;", 0 },
	{ "dirty", &class_boolean, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontData, F_dirty), "Z", 2 },
	{ "fallback", &class_arc_struct_Seq, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontData, F_fallback), "Larc/struct/Seq;", 0 },
	{ "override", &class_arc_graphics_g2d_Font$FontData, offsetof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontData, F_override), "Larc/graphics/g2d/Font$FontData;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData, 0, "()V", 1 },
	{ "setOverride", (intptr_t) M_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_setOverride_arc_graphics_g2d_Font$FontData, VTABLE_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_setOverride_arc_graphics_g2d_Font$FontData, "(Larc/graphics/g2d/Font$FontData;)V", 1 },
	{ "addFallback", (intptr_t) M_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_addFallback_arc_graphics_g2d_Font$FontData, VTABLE_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_addFallback_arc_graphics_g2d_Font$FontData, "(Larc/graphics/g2d/Font$FontData;)V", 1 },
	{ "getGlyph", (intptr_t) M_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph, VTABLE_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph, "(C)Larc/graphics/g2d/Font$Glyph;", 1 },
	{ "getGlyphs", (intptr_t) M_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_getGlyphs_arc_graphics_g2d_GlyphLayout$GlyphRun_java_lang_CharSequence_int_int_arc_graphics_g2d_Font$Glyph, VTABLE_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_getGlyphs_arc_graphics_g2d_GlyphLayout$GlyphRun_java_lang_CharSequence_int_int_arc_graphics_g2d_Font$Glyph, "(Larc/graphics/g2d/GlyphLayout$GlyphRun;Ljava/lang/CharSequence;IILarc/graphics/g2d/Font$Glyph;)V", 1 },
	{ "dispose", (intptr_t) M_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_dispose, VTABLE_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_dispose, "()V", 1 },
	{ "lambda$getGlyphs$0", (intptr_t) M_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_lambda$getGlyphs$0, VTABLE_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData_lambda$getGlyphs$0, "()V", 4098 },
	{ "<clinit>", (intptr_t) clinit_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData, 0, "()V", 8 },
};

Class class_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData{
		.nativeName = (intptr_t) "arc/freetype/FreeTypeFontGenerator$FreeTypeFontData",
		.parentClass = (intptr_t) &class_arc_graphics_g2d_Font$FontData,
		.size = sizeof(arc_freetype_FreeTypeFontGenerator$FreeTypeFontData),
		.classVtable = (intptr_t) vtable_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData,
		.staticInitializer = (intptr_t) clinit_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_freetype_FreeTypeFontGenerator,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 33,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData = registerClass(&class_arc_freetype_FreeTypeFontGenerator$FreeTypeFontData);

}

