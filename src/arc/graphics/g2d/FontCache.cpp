#include "arc/graphics/g2d/FontCache.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/GlyphLayout.h"
#include "arc/graphics/g2d/FontCache_invoke_arc_func_Prov_0.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/func/Prov.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/struct/FloatSeq.h"
#include "arc/graphics/Color.h"
#include "arc/struct/IntSeq.h"
#include "arc/graphics/Texture.h"
#include "arc/graphics/g2d/Font_Glyph.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/CharSequence.h"
#include "arc/graphics/g2d/GlyphLayout_GlyphRun.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/pooling/Pools.h"
#include "arc/struct/Seq.h"
#include "java/lang/Class.h"
#include "arc/graphics/g2d/FontCache.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_arc_graphics_g2d_FontCache_tempColor;

void mark_arc_graphics_g2d_FontCache(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_g2d_FontCache_tempColor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_FontCache_tempColor)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_FontCache_tempColor, mark, depth + 1);
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
	auto self = (arc_graphics_g2d_FontCache *) object;
	if (self->F_font)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_font)->clazz)->markFunction)((jobject) self->F_font, mark, depth + 1);
	if (self->F_layouts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_layouts)->clazz)->markFunction)((jobject) self->F_layouts, mark, depth + 1);
	if (self->F_pooledLayouts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pooledLayouts)->clazz)->markFunction)((jobject) self->F_pooledLayouts, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_pageVertices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pageVertices)->clazz)->markFunction)((jobject) self->F_pageVertices, mark, depth + 1);
	if (self->F_idx)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_idx)->clazz)->markFunction)((jobject) self->F_idx, mark, depth + 1);
	if (self->F_pageGlyphIndices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pageGlyphIndices)->clazz)->markFunction)((jobject) self->F_pageGlyphIndices, mark, depth + 1);
	if (self->F_tempGlyphCount)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tempGlyphCount)->clazz)->markFunction)((jobject) self->F_tempGlyphCount, mark, depth + 1);
}

void init_arc_graphics_g2d_FontCache_arc_graphics_g2d_Font(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_FontCache(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((func_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean])(ctx, (frame[1].o));
	init_arc_graphics_g2d_FontCache_arc_graphics_g2d_Font_boolean(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_FontCache_arc_graphics_g2d_Font_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_FontCache(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(50);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_graphics_g2d_FontCache *) NULL_CHECK(sp[0].o))->F_layouts = (jref) sp[1].o;
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_graphics_g2d_FontCache *) NULL_CHECK(sp[0].o))->F_pooledLayouts = (jref) sp[1].o;
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((arc_graphics_g2d_FontCache *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(51);
	((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_font = (jref) (frame[1].o);
	LINE_NUMBER(52);
	((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_integer = (frame[2].i);
	LINE_NUMBER(54);
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK((frame[1].o)))->F_regions;
	frame[3].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(55);
	if ((frame[3].i) != 0) goto label_8;
	}
	{
	LINE_NUMBER(56);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"The specified font must contain at least one texture page."_j))));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_float, 1), (frame[3].i));
	((arc_graphics_g2d_FontCache *) NULL_CHECK(sp[0].o))->F_pageVertices = (jref) sp[1].o;
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[3].i));
	((arc_graphics_g2d_FontCache *) NULL_CHECK(sp[0].o))->F_idx = (jref) sp[1].o;
	LINE_NUMBER(60);
	if ((frame[3].i) <= (jint(1))) goto label_12;
	}
	{
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_struct_IntSeq, (frame[3].i));
	((arc_graphics_g2d_FontCache *) NULL_CHECK(sp[0].o))->F_pageGlyphIndices = (jref) sp[1].o;
	LINE_NUMBER(63);
	frame[4].i = (jint(0));
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	frame[5].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_16:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_12;
	}
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	jint temp0 = frame[4].i;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(63);
	INST_IINC(4, 1);
	goto label_16;
	}
label_12:;
	{
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[3].i));
	((arc_graphics_g2d_FontCache *) NULL_CHECK(sp[0].o))->F_tempGlyphCount = (jref) sp[1].o;
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_FontCache_setPosition_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:setPosition", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(75);
	((func_arc_graphics_g2d_FontCache_translate_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_FontCache_translate_float_float])(ctx, (frame[0].o), ((frame[1].f) - ((jfloat)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_x)), ((frame[2].f) - ((jfloat)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_y)));
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_FontCache_translate_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:translate", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(84);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(85);
	if (((jint)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_integer) == 0) goto label_2;
	}
	{
	LINE_NUMBER(86);
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (frame[1].f));
	frame[1].f = (jfloat(temp0));
	LINE_NUMBER(87);
	jint temp1 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (frame[2].f));
	frame[2].f = (jfloat(temp1));
	}
label_2:;
	{
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_FontCache *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_graphics_g2d_FontCache *) NULL_CHECK(sp[0].o))->F_x) + (frame[1].f));
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_FontCache *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_graphics_g2d_FontCache *) NULL_CHECK(sp[0].o))->F_y) + (frame[2].f));
	LINE_NUMBER(92);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	frame[3].o = sp[0].o;
	LINE_NUMBER(93);
	frame[4].i = (jint(0));
	frame[5].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_9:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_10;
	}
	{
	LINE_NUMBER(94);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)));
	LINE_NUMBER(95);
	frame[7].i = (jint(0));
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	frame[8].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[4].i)));
	}
label_14:;
	{
	if ((frame[7].i) >= (frame[8].i)) goto label_15;
	}
	{
	LINE_NUMBER(96);
	sp[0].o = frame[6].o;
	jint temp0 = frame[7].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (frame[1].f));
	LINE_NUMBER(97);
	sp[0].o = frame[6].o;
	jint temp3 = (frame[7].i) + (jint(1));
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) + (frame[2].f));
	LINE_NUMBER(95);
	INST_IINC(7, 6);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(93);
	INST_IINC(4, 1);
	goto label_9;
	}
label_10:;
	LINE_NUMBER(100);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_FontCache_setRotation_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:setRotation", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(109);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(110);
	frame[4].f = ((frame[1].f) * (jfloat(0.017453292f)));
	LINE_NUMBER(111);
	jdouble temp0 = (jdouble)SM_java_lang_Math_cos_double_R_double(ctx, (jdouble((frame[4].f))));
	frame[5].f = (jfloat(temp0));
	LINE_NUMBER(112);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble((frame[4].f))));
	frame[6].f = (jfloat(temp1));
	LINE_NUMBER(114);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	frame[7].o = sp[0].o;
	LINE_NUMBER(115);
	frame[8].i = (jint(0));
	frame[9].i = (((jarray) nullCheck(ctx, (frame[7].o)))->length);
	}
label_7:;
	{
	if ((frame[8].i) >= (frame[9].i)) goto label_8;
	}
	{
	LINE_NUMBER(116);
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[8].i)));
	LINE_NUMBER(117);
	frame[11].i = (jint(0));
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	frame[12].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[8].i)));
	}
label_12:;
	{
	if ((frame[11].i) >= (frame[12].i)) goto label_13;
	}
	{
	LINE_NUMBER(118);
	frame[13].f = (((jfloat)ARRAY_ACCESS(jfloat, (frame[10].o), (frame[11].i))) - (frame[2].f));
	LINE_NUMBER(119);
	frame[14].f = (((jfloat)ARRAY_ACCESS(jfloat, (frame[10].o), ((frame[11].i) + (jint(1))))) - (frame[3].f));
	LINE_NUMBER(120);
	ARRAY_ACCESS(jfloat, (frame[10].o), (frame[11].i)) = (((frame[2].f) + ((frame[13].f) * (frame[5].f))) - ((frame[14].f) * (frame[6].f)));
	LINE_NUMBER(121);
	ARRAY_ACCESS(jfloat, (frame[10].o), ((frame[11].i) + (jint(1)))) = (((frame[3].f) + ((frame[13].f) * (frame[6].f))) + ((frame[14].f) * (frame[5].f)));
	LINE_NUMBER(117);
	INST_IINC(11, 6);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(115);
	INST_IINC(8, 1);
	goto label_7;
	}
label_8:;
	LINE_NUMBER(124);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_FontCache_tint_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:tint", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(128);
	jfloat temp0 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, (frame[1].o));
	frame[2].f = temp0;
	LINE_NUMBER(129);
	if ((floatCompare(((jfloat)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_currentTint), (frame[2].f), -1)) != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(130);
	((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_currentTint = (frame[2].f);
	LINE_NUMBER(132);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_tempGlyphCount;
	frame[3].o = sp[0].o;
	LINE_NUMBER(133);
	frame[4].i = (jint(0));
	frame[5].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_6:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_7;
	}
	{
	LINE_NUMBER(134);
	ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i)) = (jint(0));
	LINE_NUMBER(133);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(136);
	frame[4].i = (jint(0));
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_layouts;
	frame[5].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_11:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_12;
	}
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_layouts;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[4].i));
	frame[6].o = (checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout, sp[0].o));
	LINE_NUMBER(138);
	frame[7].i = (jint(0));
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[6].o)))->F_runs;
	frame[8].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_16:;
	{
	if ((frame[7].i) >= (frame[8].i)) goto label_17;
	}
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[6].o)))->F_runs;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[7].i));
	frame[9].o = (checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout$GlyphRun, sp[0].o));
	LINE_NUMBER(140);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[9].o)))->F_glyphs;
	frame[10].o = sp[0].o;
	LINE_NUMBER(141);
	clinit_arc_graphics_g2d_FontCache(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_FontCache_tempColor;
	sp[1].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[9].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_mul_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	jfloat temp0 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	frame[11].f = temp0;
	LINE_NUMBER(142);
	frame[12].i = (jint(0));
	frame[13].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[10].o)))->F_size);
	}
label_23:;
	{
	if ((frame[12].i) >= (frame[13].i)) goto label_24;
	}
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[10].o), (frame[12].i));
	frame[14].o = (checkCast(ctx, &class_arc_graphics_g2d_Font$Glyph, sp[0].o));
	LINE_NUMBER(144);
	frame[15].i = ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[14].o)))->F_page);
	LINE_NUMBER(145);
	frame[16].i = ((((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[15].i))) * (24)) + (jint(2)));
	LINE_NUMBER(146);
	sp[0].o = frame[3].o;
	jint temp0 = frame[15].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (jint(1)));
	LINE_NUMBER(147);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	frame[17].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[15].i)));
	LINE_NUMBER(148);
	frame[18].i = (jint(0));
	}
label_31:;
	{
	if ((frame[18].i) >= (24)) goto label_32;
	}
	{
	LINE_NUMBER(149);
	ARRAY_ACCESS(jfloat, (frame[17].o), ((frame[16].i) + (frame[18].i))) = (frame[11].f);
	LINE_NUMBER(148);
	INST_IINC(18, 6);
	goto label_31;
	}
label_32:;
	{
	LINE_NUMBER(142);
	INST_IINC(12, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(138);
	INST_IINC(7, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(136);
	INST_IINC(4, 1);
	goto label_11;
	}
label_12:;
	LINE_NUMBER(153);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_FontCache_setAlphas_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:setAlphas", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(157);
	frame[2].i = ((jint(((jfloat(254.0f)) * (frame[1].f)))) << (24));
	LINE_NUMBER(158);
	frame[3].f = (jfloat(0));
	frame[4].f = (jfloat(0));
	LINE_NUMBER(159);
	frame[5].i = (jint(0));
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	frame[6].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_6;
	}
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)));
	LINE_NUMBER(161);
	frame[8].i = (jint(2));
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	frame[9].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[5].i)));
	}
label_10:;
	{
	if ((frame[8].i) >= (frame[9].i)) goto label_11;
	}
	{
	LINE_NUMBER(162);
	frame[10].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[7].o), (frame[8].i)));
	LINE_NUMBER(163);
	if ((floatCompare((frame[10].f), (frame[3].f), -1)) != 0) goto label_14;
	}
	{
	if ((frame[8].i) == (jint(2))) goto label_14;
	}
	{
	LINE_NUMBER(164);
	ARRAY_ACCESS(jfloat, (frame[7].o), (frame[8].i)) = (frame[4].f);
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(166);
	frame[3].f = (frame[10].f);
	LINE_NUMBER(167);
	jint temp0 = (jint)SM_arc_graphics_Color_floatToIntColor_float_R_int(ctx, (frame[10].f));
	frame[11].i = temp0;
	LINE_NUMBER(168);
	frame[11].i = (((frame[11].i) & (jint(16777215))) | (frame[2].i));
	LINE_NUMBER(169);
	jfloat temp1 = (jfloat)SM_arc_graphics_Color_intToFloatColor_int_R_float(ctx, (frame[11].i));
	frame[4].f = temp1;
	LINE_NUMBER(170);
	ARRAY_ACCESS(jfloat, (frame[7].o), (frame[8].i)) = (frame[4].f);
	}
label_16:;
	{
	LINE_NUMBER(161);
	INST_IINC(8, 6);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(159);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(174);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_FontCache_setColors_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:setColors", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(178);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	frame[3].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(180);
	frame[5].i = (jint(2));
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	frame[6].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i)));
	}
label_7:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_8;
	}
	{
	LINE_NUMBER(181);
	ARRAY_ACCESS(jfloat, (frame[4].o), (frame[5].i)) = (frame[1].f);
	LINE_NUMBER(180);
	INST_IINC(5, 6);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(178);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(183);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_FontCache_setColors_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:setColors", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, (frame[1].o));
	((func_arc_graphics_g2d_FontCache_setColors_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_setColors_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_FontCache_setColors_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:setColors", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(192);
	frame[5].i = (((((jint(((jfloat(255.0f)) * (frame[4].f)))) << (24)) | ((jint(((jfloat(255.0f)) * (frame[3].f)))) << (16))) | ((jint(((jfloat(255.0f)) * (frame[2].f)))) << (8))) | (jint(((jfloat(255.0f)) * (frame[1].f)))));
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_graphics_Color_intToFloatColor_int_R_float(ctx, (frame[5].i));
	((func_arc_graphics_g2d_FontCache_setColors_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_setColors_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(194);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_FontCache_setColors_arc_graphics_Color_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:setColors", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(201);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, (frame[1].o));
	((func_arc_graphics_g2d_FontCache_setColors_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_setColors_float_int_int])(ctx, sp[0].o, temp0, (frame[2].i), (frame[3].i));
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_FontCache_setColors_float_int_int(jcontext ctx, jobject self, jfloat param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:setColors", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	LINE_NUMBER(211);
	frame[5].i = (((frame[2].i) * (24)) + (jint(2)));
	frame[6].i = ((frame[3].i) * (24));
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_6;
	}
	{
	LINE_NUMBER(212);
	ARRAY_ACCESS(jfloat, (frame[4].o), (frame[5].i)) = (frame[1].f);
	LINE_NUMBER(211);
	INST_IINC(5, 6);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(213);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	frame[4].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(217);
	frame[5].i = (jint(0));
	}
label_10:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_11;
	}
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)));
	LINE_NUMBER(219);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)));
	LINE_NUMBER(221);
	frame[8].i = (jint(0));
	frame[9].i = ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[7].o)))->F_size);
	}
label_16:;
	{
	if ((frame[8].i) >= (frame[9].i)) goto label_17;
	}
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[7].o)))->F_items;
	frame[10].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[8].i)));
	LINE_NUMBER(225);
	if ((frame[10].i) < (frame[3].i)) goto label_20;
	}
	goto label_17;
label_20:;
	{
	LINE_NUMBER(228);
	if ((frame[10].i) < (frame[2].i)) goto label_21;
	}
	{
	LINE_NUMBER(229);
	frame[11].i = (jint(0));
	}
label_23:;
	{
	if ((frame[11].i) >= (24)) goto label_21;
	}
	{
	LINE_NUMBER(230);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((frame[11].i) + (((frame[8].i) * (24)) + (jint(2))))) = (frame[1].f);
	LINE_NUMBER(229);
	INST_IINC(11, 6);
	goto label_23;
	}
label_21:;
	{
	LINE_NUMBER(221);
	INST_IINC(8, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(217);
	INST_IINC(5, 1);
	goto label_10;
	}
label_11:;
	LINE_NUMBER(234);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_FontCache_getColor_R_arc_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:getColor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_color;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_FontCache_setColor_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:setColor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_FontCache_setColor_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:setColor", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(252);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_FontCache_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:draw", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_font;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getRegions_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getRegions_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(256);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	frame[3].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_3:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[2].i))) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(259);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].i));
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((checkCast(ctx, &class_arc_graphics_g2d_TextureRegion, sp[0].o))))->F_texture;
	sp[1].o = frame[4].o;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	SM_arc_graphics_g2d_Draw_vert_arc_graphics_Texture_Array1_float_int_int(ctx, sp[0].o, sp[1].o, temp0, ((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[2].i))));
	}
label_6:;
	{
	LINE_NUMBER(256);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(262);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_FontCache_draw_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:draw", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_font;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_texture;
	sp[1].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	SM_arc_graphics_g2d_Draw_vert_arc_graphics_Texture_Array1_float_int_int(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))), ((frame[1].i) * (24)), (((frame[2].i) - (frame[1].i)) * (24)));
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_font;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getRegions_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getRegions_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(272);
	frame[4].i = (jint(0));
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	frame[5].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_6:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_7;
	}
	{
	LINE_NUMBER(273);
	frame[6].i = (jint(-1));
	frame[7].i = (jint(0));
	LINE_NUMBER(276);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	LINE_NUMBER(277);
	frame[9].i = (jint(0));
	frame[10].i = ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[8].o)))->F_size);
	}
label_13:;
	{
	if ((frame[9].i) >= (frame[10].i)) goto label_14;
	}
	{
	LINE_NUMBER(278);
	jint temp0 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, (frame[8].o), (frame[9].i));
	frame[11].i = temp0;
	LINE_NUMBER(281);
	if ((frame[11].i) < (frame[2].i)) goto label_17;
	}
	goto label_14;
label_17:;
	{
	LINE_NUMBER(284);
	if ((frame[6].i) != (jint(-1))) goto label_18;
	}
	{
	if ((frame[11].i) < (frame[1].i)) goto label_18;
	}
	INST_ILOAD(9);
	INST_ISTORE(6);
label_18:;
	{
	LINE_NUMBER(287);
	if ((frame[11].i) < (frame[1].i)) goto label_19;
	}
	LINE_NUMBER(288);
	INST_IINC(7, 1);
label_19:;
	{
	LINE_NUMBER(277);
	INST_IINC(9, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(292);
	if ((frame[6].i) == (jint(-1))) goto label_21;
	}
	INST_ILOAD(7);
	if ((--sp)->i != 0) goto label_22;
	goto label_21;
label_22:;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[4].i));
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((checkCast(ctx, &class_arc_graphics_g2d_TextureRegion, sp[0].o))))->F_texture;
	sp[1].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	SM_arc_graphics_g2d_Draw_vert_arc_graphics_Texture_Array1_float_int_int(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i))), ((frame[6].i) * (24)), ((frame[7].i) * (24)));
	}
label_21:;
	{
	LINE_NUMBER(272);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(297);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_FontCache_draw_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:draw", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(300);
	if ((floatCompare((frame[1].f), (jfloat(1)), -1)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(301);
	((func_arc_graphics_g2d_FontCache_draw) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_FontCache_draw])(ctx, (frame[0].o));
	LINE_NUMBER(302);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_getColor_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_FontCache_getColor_R_arc_graphics_Color])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(305);
	frame[3].f = ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[2].o)))->F_a);
	LINE_NUMBER(306);
	sp[0].o = frame[2].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a) * (frame[1].f));
	LINE_NUMBER(307);
	((func_arc_graphics_g2d_FontCache_setColors_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_FontCache_setColors_arc_graphics_Color])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(308);
	((func_arc_graphics_g2d_FontCache_draw) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_FontCache_draw])(ctx, (frame[0].o));
	LINE_NUMBER(309);
	((arc_graphics_Color *) NULL_CHECK((frame[2].o)))->F_a = (frame[3].f);
	LINE_NUMBER(310);
	((func_arc_graphics_g2d_FontCache_setColors_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_FontCache_setColors_arc_graphics_Color])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(311);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_FontCache_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:clear", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(315);
	((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	LINE_NUMBER(316);
	((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(317);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pooledLayouts;
	SM_arc_util_pooling_Pools_freeAll_arc_struct_Seq_boolean(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(318);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pooledLayouts;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(319);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_layouts;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(320);
	frame[1].i = (jint(0));
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	frame[2].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_7:;
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_8;
	}
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))))->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))));
	}
label_10:;
	{
	LINE_NUMBER(322);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)) = (jint(0));
	LINE_NUMBER(320);
	INST_IINC(1, 1);
	goto label_7;
	}
label_8:;
	LINE_NUMBER(324);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_FontCache_requireGlyphs_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:requireGlyphs", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(327);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(329);
	frame[2].i = (jint(0));
	LINE_NUMBER(330);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[1].o)))->F_runs;
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(331);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[1].o)))->F_runs;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout$GlyphRun, sp[0].o))))->F_glyphs;
	frame[2].i = (temp0 + ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size));
	LINE_NUMBER(330);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(332);
	M_arc_graphics_g2d_FontCache_requirePageGlyphs_int_int(ctx, (frame[0].o), (jint(0)), (frame[2].i));
	LINE_NUMBER(333);
	goto label_10;
	}
label_1:;
	{
	LINE_NUMBER(334);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_tempGlyphCount;
	frame[2].o = sp[0].o;
	LINE_NUMBER(335);
	frame[3].i = (jint(0));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_13:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_14;
	}
	{
	LINE_NUMBER(336);
	ARRAY_ACCESS(jint, (frame[2].o), (frame[3].i)) = (jint(0));
	LINE_NUMBER(335);
	INST_IINC(3, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(338);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[1].o)))->F_runs;
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_18:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_19;
	}
	{
	LINE_NUMBER(339);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[1].o)))->F_runs;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout$GlyphRun, sp[0].o))))->F_glyphs;
	frame[5].o = sp[0].o;
	LINE_NUMBER(340);
	frame[6].i = (jint(0));
	frame[7].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[5].o)))->F_size);
	}
label_23:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_24;
	}
	{
	LINE_NUMBER(341);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[5].o), (frame[6].i));
	jint temp0 = (jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((checkCast(ctx, &class_arc_graphics_g2d_Font$Glyph, sp[1].o))))->F_page;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (jint(1)));
	LINE_NUMBER(340);
	INST_IINC(6, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(338);
	INST_IINC(3, 1);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(344);
	frame[3].i = (jint(0));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_28:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_10;
	}
	{
	LINE_NUMBER(345);
	M_arc_graphics_g2d_FontCache_requirePageGlyphs_int_int(ctx, (frame[0].o), (frame[3].i), ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[3].i))));
	LINE_NUMBER(344);
	INST_IINC(3, 1);
	goto label_28;
	}
label_10:;
	LINE_NUMBER(347);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_FontCache_requirePageGlyphs_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:requirePageGlyphs", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(351);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))->F_items;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	sp[1].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i)))))->F_items;
	sp[0].o = (jobject)((func_arc_struct_IntSeq_ensureCapacity_int_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_ensureCapacity_int_R_Array1_int])(ctx, sp[0].o, (temp0 - (((jarray) nullCheck(ctx, sp[1].o))->length)));
	}
label_1:;
	{
	LINE_NUMBER(355);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	frame[3].i = (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i))) + ((frame[2].i) * (24)));
	LINE_NUMBER(356);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(357);
	if ((frame[4].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject) createArray(ctx, &class_float, (frame[3].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(359);
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) >= (frame[3].i)) goto label_8;
	}
	{
	LINE_NUMBER(360);
	sp[0].o = (jobject) createArray(ctx, &class_float, (frame[3].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(361);
	sp[0].o = frame[4].o;
	jint temp0 = jint(0);
	sp[1].o = frame[5].o;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, ((jint)ARRAY_ACCESS(jint, sp[2].o, (frame[1].i))));
	LINE_NUMBER(362);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (frame[5].o);
	}
label_8:;
	LINE_NUMBER(364);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_FontCache_addToCache_arc_graphics_g2d_GlyphLayout_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:addToCache", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(368);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_font;
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK(sp[0].o))->F_regions;
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(369);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) >= (frame[4].i)) goto label_2;
	}
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_float, 1), (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(371);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	jint temp0 = jint(0);
	sp[1].o = frame[5].o;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(372);
	((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices = (jref) (frame[5].o);
	LINE_NUMBER(374);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[4].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(375);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	jint temp2 = jint(0);
	sp[1].o = frame[6].o;
	jint temp3 = jint(0);
	sp[2].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp2, sp[1].o, temp3, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(376);
	((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_idx = (jref) (frame[6].o);
	LINE_NUMBER(378);
	sp[0].o = (jobject)createArray(ctx, &class_arc_struct_IntSeq, (frame[4].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(379);
	frame[8].i = (jint(0));
	LINE_NUMBER(380);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(381);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	frame[8].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(382);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	jint temp0 = jint(0);
	sp[1].o = frame[7].o;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	}
label_12:;
	{
	LINE_NUMBER(384);
	frame[9].i = (frame[8].i);
	}
label_15:;
	{
	if ((frame[9].i) >= (frame[4].i)) goto label_16;
	}
	{
	LINE_NUMBER(385);
	sp[0].o = frame[7].o;
	jint temp0 = frame[9].i;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(384);
	INST_IINC(9, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(386);
	((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices = (jref) (frame[7].o);
	LINE_NUMBER(388);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (frame[4].i));
	((arc_graphics_g2d_FontCache *) NULL_CHECK(sp[0].o))->F_tempGlyphCount = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(391);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_layouts;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(392);
	M_arc_graphics_g2d_FontCache_requireGlyphs_arc_graphics_g2d_GlyphLayout(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(393);
	frame[5].i = (jint(0));
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[1].o)))->F_runs;
	frame[6].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_23:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_24;
	}
	{
	LINE_NUMBER(394);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[1].o)))->F_runs;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	frame[7].o = (checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout$GlyphRun, sp[0].o));
	LINE_NUMBER(395);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[7].o)))->F_glyphs;
	frame[8].o = sp[0].o;
	LINE_NUMBER(396);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[7].o)))->F_xAdvances;
	frame[9].o = sp[0].o;
	LINE_NUMBER(397);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[7].o)))->F_color;
	jfloat temp0 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	frame[10].f = temp0;
	LINE_NUMBER(398);
	frame[11].f = ((frame[2].f) + ((jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[7].o)))->F_x));
	frame[12].f = ((frame[3].f) + ((jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[7].o)))->F_y));
	LINE_NUMBER(399);
	frame[13].i = (jint(0));
	frame[14].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[8].o)))->F_size);
	}
label_33:;
	{
	if ((frame[13].i) >= (frame[14].i)) goto label_34;
	}
	{
	LINE_NUMBER(400);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[8].o), (frame[13].i));
	frame[15].o = (checkCast(ctx, &class_arc_graphics_g2d_Font$Glyph, sp[0].o));
	LINE_NUMBER(401);
	jfloat temp0 = frame[11].f;
	jfloat temp1 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, (frame[9].o), (frame[13].i));
	frame[11].f = (temp0 + temp1);
	LINE_NUMBER(402);
	M_arc_graphics_g2d_FontCache_addGlyph_arc_graphics_g2d_Font$Glyph_float_float_float(ctx, (frame[0].o), (frame[15].o), (frame[11].f), (frame[12].f), (frame[10].f));
	LINE_NUMBER(399);
	INST_IINC(13, 1);
	goto label_33;
	}
label_34:;
	{
	LINE_NUMBER(393);
	INST_IINC(5, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(406);
	((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_currentTint = (clinit_arc_graphics_Color(ctx), (jfloat)SF_arc_graphics_Color_whiteFloatBits);
	LINE_NUMBER(407);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_FontCache_addGlyph_arc_graphics_g2d_Font$Glyph_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:addGlyph", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(410);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_font;
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK(sp[0].o))->F_data;
	frame[5].f = ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_scaleX);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_font;
	sp[0].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK(sp[0].o))->F_data;
	frame[6].f = ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_scaleY);
	LINE_NUMBER(411);
	frame[2].f = ((frame[2].f) + ((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_xoffset))) * (frame[5].f)));
	LINE_NUMBER(412);
	frame[3].f = ((frame[3].f) + ((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_yoffset))) * (frame[6].f)));
	LINE_NUMBER(413);
	frame[7].f = ((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_width))) * (frame[5].f));
	frame[8].f = ((jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_height))) * (frame[6].f));
	LINE_NUMBER(414);
	frame[9].f = ((jfloat)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_u);
	frame[10].f = ((jfloat)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_u2);
	frame[11].f = ((jfloat)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_v);
	frame[12].f = ((jfloat)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_v2);
	LINE_NUMBER(416);
	if (((jint)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_integer) == 0) goto label_11;
	}
	{
	LINE_NUMBER(417);
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (frame[2].f));
	frame[2].f = (jfloat(temp0));
	LINE_NUMBER(418);
	jint temp1 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (frame[3].f));
	frame[3].f = (jfloat(temp1));
	LINE_NUMBER(419);
	jint temp2 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (frame[7].f));
	frame[7].f = (jfloat(temp2));
	LINE_NUMBER(420);
	jint temp3 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (frame[8].f));
	frame[8].f = (jfloat(temp3));
	}
label_11:;
	{
	LINE_NUMBER(422);
	frame[13].f = ((frame[2].f) + (frame[7].f));
	frame[14].f = ((frame[3].f) + (frame[8].f));
	LINE_NUMBER(424);
	frame[15].i = ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[1].o)))->F_page);
	LINE_NUMBER(425);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	frame[16].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[15].i)));
	LINE_NUMBER(426);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	jint temp0 = frame[15].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) + (24));
	LINE_NUMBER(428);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageGlyphIndices;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[15].i));
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((arc_graphics_g2d_FontCache *) NULL_CHECK(sp[1].o))->F_glyphCount;
	((arc_graphics_g2d_FontCache *) NULL_CHECK(sp[1].o))->F_glyphCount = (temp0 + (jint(1)));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	}
label_21:;
	{
	LINE_NUMBER(430);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	frame[17].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[15].i)));
	LINE_NUMBER(431);
	sp[0].o = frame[17].o;
	jint temp0 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (frame[2].f);
	LINE_NUMBER(432);
	sp[0].o = frame[17].o;
	jint temp1 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp1) = (frame[3].f);
	LINE_NUMBER(433);
	sp[0].o = frame[17].o;
	jint temp2 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = (frame[4].f);
	LINE_NUMBER(434);
	sp[0].o = frame[17].o;
	jint temp3 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (frame[9].f);
	LINE_NUMBER(435);
	sp[0].o = frame[17].o;
	jint temp4 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp4) = (frame[11].f);
	LINE_NUMBER(436);
	INST_IINC(16, 1);
	LINE_NUMBER(438);
	sp[0].o = frame[17].o;
	jint temp5 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp5) = (frame[2].f);
	LINE_NUMBER(439);
	sp[0].o = frame[17].o;
	jint temp6 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = (frame[14].f);
	LINE_NUMBER(440);
	sp[0].o = frame[17].o;
	jint temp7 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp7) = (frame[4].f);
	LINE_NUMBER(441);
	sp[0].o = frame[17].o;
	jint temp8 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp8) = (frame[9].f);
	LINE_NUMBER(442);
	sp[0].o = frame[17].o;
	jint temp9 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp9) = (frame[12].f);
	LINE_NUMBER(443);
	INST_IINC(16, 1);
	LINE_NUMBER(445);
	sp[0].o = frame[17].o;
	jint temp10 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp10) = (frame[13].f);
	LINE_NUMBER(446);
	sp[0].o = frame[17].o;
	jint temp11 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp11) = (frame[14].f);
	LINE_NUMBER(447);
	sp[0].o = frame[17].o;
	jint temp12 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp12) = (frame[4].f);
	LINE_NUMBER(448);
	sp[0].o = frame[17].o;
	jint temp13 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp13) = (frame[10].f);
	LINE_NUMBER(449);
	sp[0].o = frame[17].o;
	jint temp14 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp14) = (frame[12].f);
	LINE_NUMBER(450);
	INST_IINC(16, 1);
	LINE_NUMBER(452);
	sp[0].o = frame[17].o;
	jint temp15 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp15) = (frame[13].f);
	LINE_NUMBER(453);
	sp[0].o = frame[17].o;
	jint temp16 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp16) = (frame[3].f);
	LINE_NUMBER(454);
	sp[0].o = frame[17].o;
	jint temp17 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp17) = (frame[4].f);
	LINE_NUMBER(455);
	sp[0].o = frame[17].o;
	jint temp18 = frame[16].i;
	INST_IINC(16, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp18) = (frame[10].f);
	LINE_NUMBER(456);
	ARRAY_ACCESS(jfloat, (frame[17].o), (frame[16].i)) = (frame[11].f);
	LINE_NUMBER(459);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_FontCache_setText_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:setText", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(466);
	((func_arc_graphics_g2d_FontCache_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_FontCache_clear])(ctx, (frame[0].o));
	LINE_NUMBER(467);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jint temp2 = jint(0);
	jint temp3 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, (jfloat(0)), (8), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_FontCache_setText_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jint param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:setText", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(475);
	((func_arc_graphics_g2d_FontCache_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_FontCache_clear])(ctx, (frame[0].o));
	LINE_NUMBER(476);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jint temp2 = jint(0);
	jint temp3 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, (frame[4].f), (frame[5].i), (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_FontCache_setText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4, jfloat param5, jint param6, jbool param7) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:setText", 18 };
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
	LINE_NUMBER(485);
	((func_arc_graphics_g2d_FontCache_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_FontCache_clear])(ctx, (frame[0].o));
	LINE_NUMBER(486);
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].i), (frame[6].f), (frame[7].i), (frame[8].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_FontCache_setText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4, jfloat param5, jint param6, jbool param7, jobject param8) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:setText", 20 };
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
	LINE_NUMBER(495);
	((func_arc_graphics_g2d_FontCache_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_FontCache_clear])(ctx, (frame[0].o));
	LINE_NUMBER(496);
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].i), (frame[6].f), (frame[7].i), (frame[8].i), (frame[9].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_FontCache_setText_arc_graphics_g2d_GlyphLayout_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:setText", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(504);
	((func_arc_graphics_g2d_FontCache_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_FontCache_clear])(ctx, (frame[0].o));
	LINE_NUMBER(505);
	((func_arc_graphics_g2d_FontCache_addText_arc_graphics_g2d_GlyphLayout_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_FontCache_addText_arc_graphics_g2d_GlyphLayout_float_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f));
	LINE_NUMBER(506);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:addText", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(513);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jint temp2 = jint(0);
	jint temp3 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, (jfloat(0)), (8), (jint(0)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jint param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:addText", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(521);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jint temp2 = jint(0);
	jint temp3 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, (frame[4].f), (frame[5].i), (frame[6].i), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4, jfloat param5, jint param6, jbool param7) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:addText", 19 };
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
	LINE_NUMBER(530);
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].i), (frame[6].f), (frame[7].i), (frame[8].i), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4, jfloat param5, jint param6, jbool param7, jobject param8) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:addText", 21 };
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
	LINE_NUMBER(548);
	sp[0].o = ((jobject) &class_arc_graphics_g2d_GlyphLayout);
	{ /* InvokeDynamic */
		clinit_arc_graphics_g2d_FontCache_invoke_arc_func_Prov_0(ctx);
		auto proxy = (arc_graphics_g2d_FontCache_invoke_arc_func_Prov_0 *) gcAlloc(ctx, &class_arc_graphics_g2d_FontCache_invoke_arc_func_Prov_0);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[10].o = (checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout, sp[0].o));
	LINE_NUMBER(549);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pooledLayouts;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[10].o));
	LINE_NUMBER(550);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_font;
	sp[2].o = frame[1].o;
	jint temp0 = frame[4].i;
	jint temp1 = frame[5].i;
	sp[3].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_color;
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_int_int_arc_graphics_Color_float_int_boolean_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_int_int_arc_graphics_Color_float_int_boolean_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, sp[3].o, (frame[6].f), (frame[7].i), (frame[8].i), (frame[9].o));
	LINE_NUMBER(551);
	((func_arc_graphics_g2d_FontCache_addText_arc_graphics_g2d_GlyphLayout_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_FontCache_addText_arc_graphics_g2d_GlyphLayout_float_float])(ctx, (frame[0].o), (frame[10].o), (frame[2].f), (frame[3].f));
	LINE_NUMBER(552);
	popStackFrame(ctx);
	return (frame[10].o);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_FontCache_addText_arc_graphics_g2d_GlyphLayout_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:addText", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(557);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	sp[2].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_font;
	sp[2].o = (jobject)((arc_graphics_g2d_Font *) NULL_CHECK(sp[2].o))->F_data;
	M_arc_graphics_g2d_FontCache_addToCache_arc_graphics_g2d_GlyphLayout_float_float(ctx, sp[0].o, sp[1].o, temp0, (temp1 + ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[2].o))->F_ascent)));
	LINE_NUMBER(558);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_FontCache_getX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(562);
	popStackFrame(ctx);
	return ((jfloat)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_FontCache_getY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(567);
	popStackFrame(ctx);
	return ((jfloat)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:getFont", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(571);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_font;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_FontCache_setUseIntegerPositions_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:setUseIntegerPositions", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(576);
	((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_integer = (frame[1].i);
	LINE_NUMBER(577);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_g2d_FontCache_usesIntegerPositions_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:usesIntegerPositions", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(581);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_integer);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_FontCache_getVertices_R_Array1_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:getVertices", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(585);
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_getVertices_int_R_Array1_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_FontCache_getVertices_int_R_Array1_float])(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_FontCache_getVertices_int_R_Array1_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:getVertices", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(589);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_pageVertices;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_g2d_FontCache_getVertexCount_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:getVertexCount", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(593);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_idx;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_FontCache_getLayouts_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:getLayouts", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(597);
	sp[0].o = (jobject)((arc_graphics_g2d_FontCache *) NULL_CHECK((frame[0].o)))->F_layouts;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_graphics_g2d_FontCache(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/FontCache:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_FontCache(ctx);
	{
	LINE_NUMBER(22);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	clinit_arc_graphics_g2d_FontCache(ctx);
	SF_arc_graphics_g2d_FontCache_tempColor = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_FontCache[] {
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
	(void *) M_arc_graphics_g2d_FontCache_setPosition_float_float,
	(void *) M_arc_graphics_g2d_FontCache_translate_float_float,
	(void *) M_arc_graphics_g2d_FontCache_setRotation_float_float_float,
	(void *) M_arc_graphics_g2d_FontCache_tint_arc_graphics_Color,
	(void *) M_arc_graphics_g2d_FontCache_setAlphas_float,
	(void *) M_arc_graphics_g2d_FontCache_setColors_float,
	(void *) M_arc_graphics_g2d_FontCache_setColors_arc_graphics_Color,
	(void *) M_arc_graphics_g2d_FontCache_setColors_float_float_float_float,
	(void *) M_arc_graphics_g2d_FontCache_setColors_arc_graphics_Color_int_int,
	(void *) M_arc_graphics_g2d_FontCache_setColors_float_int_int,
	(void *) M_arc_graphics_g2d_FontCache_getColor_R_arc_graphics_Color,
	(void *) M_arc_graphics_g2d_FontCache_setColor_arc_graphics_Color,
	(void *) M_arc_graphics_g2d_FontCache_setColor_float_float_float_float,
	(void *) M_arc_graphics_g2d_FontCache_draw,
	(void *) M_arc_graphics_g2d_FontCache_draw_int_int,
	(void *) M_arc_graphics_g2d_FontCache_draw_float,
	(void *) M_arc_graphics_g2d_FontCache_clear,
	(void *) M_arc_graphics_g2d_FontCache_requireGlyphs_arc_graphics_g2d_GlyphLayout,
	(void *) M_arc_graphics_g2d_FontCache_requirePageGlyphs_int_int,
	(void *) M_arc_graphics_g2d_FontCache_addToCache_arc_graphics_g2d_GlyphLayout_float_float,
	(void *) M_arc_graphics_g2d_FontCache_addGlyph_arc_graphics_g2d_Font$Glyph_float_float_float,
	(void *) M_arc_graphics_g2d_FontCache_setText_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout,
	(void *) M_arc_graphics_g2d_FontCache_setText_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout,
	(void *) M_arc_graphics_g2d_FontCache_setText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout,
	(void *) M_arc_graphics_g2d_FontCache_setText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout,
	(void *) M_arc_graphics_g2d_FontCache_setText_arc_graphics_g2d_GlyphLayout_float_float,
	(void *) M_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout,
	(void *) M_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout,
	(void *) M_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout,
	(void *) M_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout,
	(void *) M_arc_graphics_g2d_FontCache_addText_arc_graphics_g2d_GlyphLayout_float_float,
	(void *) M_arc_graphics_g2d_FontCache_getX_R_float,
	(void *) M_arc_graphics_g2d_FontCache_getY_R_float,
	(void *) M_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font,
	(void *) M_arc_graphics_g2d_FontCache_setUseIntegerPositions_boolean,
	(void *) M_arc_graphics_g2d_FontCache_usesIntegerPositions_R_boolean,
	(void *) M_arc_graphics_g2d_FontCache_getVertices_R_Array1_float,
	(void *) M_arc_graphics_g2d_FontCache_getVertices_int_R_Array1_float,
	(void *) M_arc_graphics_g2d_FontCache_getVertexCount_int_R_int,
	(void *) M_arc_graphics_g2d_FontCache_getLayouts_R_arc_struct_Seq,
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
	{ "setPosition", "(FF)V" },
	{ "translate", "(FF)V" },
	{ "setRotation", "(FFF)V" },
	{ "tint", "(Larc/graphics/Color;)V" },
	{ "setAlphas", "(F)V" },
	{ "setColors", "(F)V" },
	{ "setColors", "(Larc/graphics/Color;)V" },
	{ "setColors", "(FFFF)V" },
	{ "setColors", "(Larc/graphics/Color;II)V" },
	{ "setColors", "(FII)V" },
	{ "getColor", "()Larc/graphics/Color;" },
	{ "setColor", "(Larc/graphics/Color;)V" },
	{ "setColor", "(FFFF)V" },
	{ "draw", "()V" },
	{ "draw", "(II)V" },
	{ "draw", "(F)V" },
	{ "clear", "()V" },
	{ "requireGlyphs", "(Larc/graphics/g2d/GlyphLayout;)V" },
	{ "requirePageGlyphs", "(II)V" },
	{ "addToCache", "(Larc/graphics/g2d/GlyphLayout;FF)V" },
	{ "addGlyph", "(Larc/graphics/g2d/Font$Glyph;FFF)V" },
	{ "setText", "(Ljava/lang/CharSequence;FF)Larc/graphics/g2d/GlyphLayout;" },
	{ "setText", "(Ljava/lang/CharSequence;FFFIZ)Larc/graphics/g2d/GlyphLayout;" },
	{ "setText", "(Ljava/lang/CharSequence;FFIIFIZ)Larc/graphics/g2d/GlyphLayout;" },
	{ "setText", "(Ljava/lang/CharSequence;FFIIFIZLjava/lang/String;)Larc/graphics/g2d/GlyphLayout;" },
	{ "setText", "(Larc/graphics/g2d/GlyphLayout;FF)V" },
	{ "addText", "(Ljava/lang/CharSequence;FF)Larc/graphics/g2d/GlyphLayout;" },
	{ "addText", "(Ljava/lang/CharSequence;FFFIZ)Larc/graphics/g2d/GlyphLayout;" },
	{ "addText", "(Ljava/lang/CharSequence;FFIIFIZ)Larc/graphics/g2d/GlyphLayout;" },
	{ "addText", "(Ljava/lang/CharSequence;FFIIFIZLjava/lang/String;)Larc/graphics/g2d/GlyphLayout;" },
	{ "addText", "(Larc/graphics/g2d/GlyphLayout;FF)V" },
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "getFont", "()Larc/graphics/g2d/Font;" },
	{ "setUseIntegerPositions", "(Z)V" },
	{ "usesIntegerPositions", "()Z" },
	{ "getVertices", "()[F" },
	{ "getVertices", "(I)[F" },
	{ "getVertexCount", "(I)I" },
	{ "getLayouts", "()Larc/struct/Seq;" },
};

static FieldMetadata fields[] {
	{ "tempColor", &class_arc_graphics_Color, (intptr_t) &SF_arc_graphics_g2d_FontCache_tempColor, "Larc/graphics/Color;", 26 },
	{ "font", &class_arc_graphics_g2d_Font, offsetof(arc_graphics_g2d_FontCache, F_font), "Larc/graphics/g2d/Font;", 18 },
	{ "layouts", &class_arc_struct_Seq, offsetof(arc_graphics_g2d_FontCache, F_layouts), "Larc/struct/Seq;", 18 },
	{ "pooledLayouts", &class_arc_struct_Seq, offsetof(arc_graphics_g2d_FontCache, F_pooledLayouts), "Larc/struct/Seq;", 18 },
	{ "color", &class_arc_graphics_Color, offsetof(arc_graphics_g2d_FontCache, F_color), "Larc/graphics/Color;", 18 },
	{ "integer", &class_boolean, offsetof(arc_graphics_g2d_FontCache, F_integer), "Z", 2 },
	{ "glyphCount", &class_int, offsetof(arc_graphics_g2d_FontCache, F_glyphCount), "I", 2 },
	{ "x", &class_float, offsetof(arc_graphics_g2d_FontCache, F_x), "F", 2 },
	{ "y", &class_float, offsetof(arc_graphics_g2d_FontCache, F_y), "F", 2 },
	{ "currentTint", &class_float, offsetof(arc_graphics_g2d_FontCache, F_currentTint), "F", 2 },
	{ "pageVertices", getArrayClass(&class_float, 2), offsetof(arc_graphics_g2d_FontCache, F_pageVertices), "[[F", 2 },
	{ "idx", getArrayClass(&class_int, 1), offsetof(arc_graphics_g2d_FontCache, F_idx), "[I", 2 },
	{ "pageGlyphIndices", getArrayClass(&class_arc_struct_IntSeq, 1), offsetof(arc_graphics_g2d_FontCache, F_pageGlyphIndices), "[Larc/struct/IntSeq;", 2 },
	{ "tempGlyphCount", getArrayClass(&class_int, 1), offsetof(arc_graphics_g2d_FontCache, F_tempGlyphCount), "[I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_FontCache_arc_graphics_g2d_Font, 0, "(Larc/graphics/g2d/Font;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_FontCache_arc_graphics_g2d_Font_boolean, 0, "(Larc/graphics/g2d/Font;Z)V", 1 },
	{ "setPosition", (intptr_t) M_arc_graphics_g2d_FontCache_setPosition_float_float, VTABLE_arc_graphics_g2d_FontCache_setPosition_float_float, "(FF)V", 1 },
	{ "translate", (intptr_t) M_arc_graphics_g2d_FontCache_translate_float_float, VTABLE_arc_graphics_g2d_FontCache_translate_float_float, "(FF)V", 1 },
	{ "setRotation", (intptr_t) M_arc_graphics_g2d_FontCache_setRotation_float_float_float, VTABLE_arc_graphics_g2d_FontCache_setRotation_float_float_float, "(FFF)V", 1 },
	{ "tint", (intptr_t) M_arc_graphics_g2d_FontCache_tint_arc_graphics_Color, VTABLE_arc_graphics_g2d_FontCache_tint_arc_graphics_Color, "(Larc/graphics/Color;)V", 1 },
	{ "setAlphas", (intptr_t) M_arc_graphics_g2d_FontCache_setAlphas_float, VTABLE_arc_graphics_g2d_FontCache_setAlphas_float, "(F)V", 1 },
	{ "setColors", (intptr_t) M_arc_graphics_g2d_FontCache_setColors_float, VTABLE_arc_graphics_g2d_FontCache_setColors_float, "(F)V", 1 },
	{ "setColors", (intptr_t) M_arc_graphics_g2d_FontCache_setColors_arc_graphics_Color, VTABLE_arc_graphics_g2d_FontCache_setColors_arc_graphics_Color, "(Larc/graphics/Color;)V", 1 },
	{ "setColors", (intptr_t) M_arc_graphics_g2d_FontCache_setColors_float_float_float_float, VTABLE_arc_graphics_g2d_FontCache_setColors_float_float_float_float, "(FFFF)V", 1 },
	{ "setColors", (intptr_t) M_arc_graphics_g2d_FontCache_setColors_arc_graphics_Color_int_int, VTABLE_arc_graphics_g2d_FontCache_setColors_arc_graphics_Color_int_int, "(Larc/graphics/Color;II)V", 1 },
	{ "setColors", (intptr_t) M_arc_graphics_g2d_FontCache_setColors_float_int_int, VTABLE_arc_graphics_g2d_FontCache_setColors_float_int_int, "(FII)V", 1 },
	{ "getColor", (intptr_t) M_arc_graphics_g2d_FontCache_getColor_R_arc_graphics_Color, VTABLE_arc_graphics_g2d_FontCache_getColor_R_arc_graphics_Color, "()Larc/graphics/Color;", 1 },
	{ "setColor", (intptr_t) M_arc_graphics_g2d_FontCache_setColor_arc_graphics_Color, VTABLE_arc_graphics_g2d_FontCache_setColor_arc_graphics_Color, "(Larc/graphics/Color;)V", 1 },
	{ "setColor", (intptr_t) M_arc_graphics_g2d_FontCache_setColor_float_float_float_float, VTABLE_arc_graphics_g2d_FontCache_setColor_float_float_float_float, "(FFFF)V", 1 },
	{ "draw", (intptr_t) M_arc_graphics_g2d_FontCache_draw, VTABLE_arc_graphics_g2d_FontCache_draw, "()V", 1 },
	{ "draw", (intptr_t) M_arc_graphics_g2d_FontCache_draw_int_int, VTABLE_arc_graphics_g2d_FontCache_draw_int_int, "(II)V", 1 },
	{ "draw", (intptr_t) M_arc_graphics_g2d_FontCache_draw_float, VTABLE_arc_graphics_g2d_FontCache_draw_float, "(F)V", 1 },
	{ "clear", (intptr_t) M_arc_graphics_g2d_FontCache_clear, VTABLE_arc_graphics_g2d_FontCache_clear, "()V", 1 },
	{ "requireGlyphs", (intptr_t) M_arc_graphics_g2d_FontCache_requireGlyphs_arc_graphics_g2d_GlyphLayout, VTABLE_arc_graphics_g2d_FontCache_requireGlyphs_arc_graphics_g2d_GlyphLayout, "(Larc/graphics/g2d/GlyphLayout;)V", 2 },
	{ "requirePageGlyphs", (intptr_t) M_arc_graphics_g2d_FontCache_requirePageGlyphs_int_int, VTABLE_arc_graphics_g2d_FontCache_requirePageGlyphs_int_int, "(II)V", 2 },
	{ "addToCache", (intptr_t) M_arc_graphics_g2d_FontCache_addToCache_arc_graphics_g2d_GlyphLayout_float_float, VTABLE_arc_graphics_g2d_FontCache_addToCache_arc_graphics_g2d_GlyphLayout_float_float, "(Larc/graphics/g2d/GlyphLayout;FF)V", 2 },
	{ "addGlyph", (intptr_t) M_arc_graphics_g2d_FontCache_addGlyph_arc_graphics_g2d_Font$Glyph_float_float_float, VTABLE_arc_graphics_g2d_FontCache_addGlyph_arc_graphics_g2d_Font$Glyph_float_float_float, "(Larc/graphics/g2d/Font$Glyph;FFF)V", 2 },
	{ "setText", (intptr_t) M_arc_graphics_g2d_FontCache_setText_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout, VTABLE_arc_graphics_g2d_FontCache_setText_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout, "(Ljava/lang/CharSequence;FF)Larc/graphics/g2d/GlyphLayout;", 1 },
	{ "setText", (intptr_t) M_arc_graphics_g2d_FontCache_setText_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout, VTABLE_arc_graphics_g2d_FontCache_setText_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout, "(Ljava/lang/CharSequence;FFFIZ)Larc/graphics/g2d/GlyphLayout;", 1 },
	{ "setText", (intptr_t) M_arc_graphics_g2d_FontCache_setText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout, VTABLE_arc_graphics_g2d_FontCache_setText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout, "(Ljava/lang/CharSequence;FFIIFIZ)Larc/graphics/g2d/GlyphLayout;", 1 },
	{ "setText", (intptr_t) M_arc_graphics_g2d_FontCache_setText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout, VTABLE_arc_graphics_g2d_FontCache_setText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout, "(Ljava/lang/CharSequence;FFIIFIZLjava/lang/String;)Larc/graphics/g2d/GlyphLayout;", 1 },
	{ "setText", (intptr_t) M_arc_graphics_g2d_FontCache_setText_arc_graphics_g2d_GlyphLayout_float_float, VTABLE_arc_graphics_g2d_FontCache_setText_arc_graphics_g2d_GlyphLayout_float_float, "(Larc/graphics/g2d/GlyphLayout;FF)V", 1 },
	{ "addText", (intptr_t) M_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout, VTABLE_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout, "(Ljava/lang/CharSequence;FF)Larc/graphics/g2d/GlyphLayout;", 1 },
	{ "addText", (intptr_t) M_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout, VTABLE_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout, "(Ljava/lang/CharSequence;FFFIZ)Larc/graphics/g2d/GlyphLayout;", 1 },
	{ "addText", (intptr_t) M_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout, VTABLE_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout, "(Ljava/lang/CharSequence;FFIIFIZ)Larc/graphics/g2d/GlyphLayout;", 1 },
	{ "addText", (intptr_t) M_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout, VTABLE_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout, "(Ljava/lang/CharSequence;FFIIFIZLjava/lang/String;)Larc/graphics/g2d/GlyphLayout;", 1 },
	{ "addText", (intptr_t) M_arc_graphics_g2d_FontCache_addText_arc_graphics_g2d_GlyphLayout_float_float, VTABLE_arc_graphics_g2d_FontCache_addText_arc_graphics_g2d_GlyphLayout_float_float, "(Larc/graphics/g2d/GlyphLayout;FF)V", 1 },
	{ "getX", (intptr_t) M_arc_graphics_g2d_FontCache_getX_R_float, VTABLE_arc_graphics_g2d_FontCache_getX_R_float, "()F", 1 },
	{ "getY", (intptr_t) M_arc_graphics_g2d_FontCache_getY_R_float, VTABLE_arc_graphics_g2d_FontCache_getY_R_float, "()F", 1 },
	{ "getFont", (intptr_t) M_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font, VTABLE_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font, "()Larc/graphics/g2d/Font;", 1 },
	{ "setUseIntegerPositions", (intptr_t) M_arc_graphics_g2d_FontCache_setUseIntegerPositions_boolean, VTABLE_arc_graphics_g2d_FontCache_setUseIntegerPositions_boolean, "(Z)V", 1 },
	{ "usesIntegerPositions", (intptr_t) M_arc_graphics_g2d_FontCache_usesIntegerPositions_R_boolean, VTABLE_arc_graphics_g2d_FontCache_usesIntegerPositions_R_boolean, "()Z", 1 },
	{ "getVertices", (intptr_t) M_arc_graphics_g2d_FontCache_getVertices_R_Array1_float, VTABLE_arc_graphics_g2d_FontCache_getVertices_R_Array1_float, "()[F", 1 },
	{ "getVertices", (intptr_t) M_arc_graphics_g2d_FontCache_getVertices_int_R_Array1_float, VTABLE_arc_graphics_g2d_FontCache_getVertices_int_R_Array1_float, "(I)[F", 1 },
	{ "getVertexCount", (intptr_t) M_arc_graphics_g2d_FontCache_getVertexCount_int_R_int, VTABLE_arc_graphics_g2d_FontCache_getVertexCount_int_R_int, "(I)I", 1 },
	{ "getLayouts", (intptr_t) M_arc_graphics_g2d_FontCache_getLayouts_R_arc_struct_Seq, VTABLE_arc_graphics_g2d_FontCache_getLayouts_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "<clinit>", (intptr_t) clinit_arc_graphics_g2d_FontCache, 0, "()V", 8 },
};

Class class_arc_graphics_g2d_FontCache{
		.nativeName = (intptr_t) "arc/graphics/g2d/FontCache",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_FontCache),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_FontCache,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_FontCache,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_FontCache,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 43,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 51,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_FontCache = registerClass(&class_arc_graphics_g2d_FontCache);

}
