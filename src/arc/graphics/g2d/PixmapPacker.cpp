#include "arc/graphics/g2d/PixmapPacker.h"
#include "arc/graphics/GLTexture.h"
#include "java/lang/StringBuilder.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/struct/OrderedMap.h"
#include "arc/math/geom/Rect.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/PixmapPacker_GuillotineStrategy.h"
#include "java/nio/ByteBuffer.h"
#include "arc/graphics/Pixmap.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "java/util/Arrays.h"
#include "arc/graphics/g2d/PixmapPacker_PixmapPackerRect.h"
#include "arc/struct/Seq.h"
#include "arc/graphics/g2d/PixmapPacker_Page.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/util/Disposable.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/util/Iterator.h"
#include "arc/graphics/Texture.h"
#include "arc/graphics/g2d/PixmapPacker_PackStrategy.h"
#include "arc/graphics/g2d/PixmapPacker_SkylineStrategy.h"
#include "arc/graphics/g2d/PixmapRegion.h"
#include "java/lang/Object.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/graphics/Gl.h"
#include "arc/struct/ObjectSet.h"
#include "arc/graphics/g2d/PixmapPacker.h"
#include "arc/struct/ObjectMap.h"

extern "C" {


void mark_arc_graphics_g2d_PixmapPacker(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_g2d_PixmapPacker *) object;
	if (self->F_pages)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pages)->clazz)->markFunction)((jobject) self->F_pages, mark, depth + 1);
	if (self->F_transparentColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_transparentColor)->clazz)->markFunction)((jobject) self->F_transparentColor, mark, depth + 1);
	if (self->F_packStrategy)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_packStrategy)->clazz)->markFunction)((jobject) self->F_packStrategy, mark, depth + 1);
}

void clinit_arc_graphics_g2d_PixmapPacker(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_g2d_PixmapPacker_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:<init>", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_PixmapPacker(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jint temp2 = frame[3].i;
	jint temp3 = frame[4].i;
	jint temp4 = jint(0);
	jint temp5 = jint(0);
	clinit_arc_graphics_g2d_PixmapPacker$GuillotineStrategy(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_PixmapPacker$GuillotineStrategy);
	init_arc_graphics_g2d_PixmapPacker$GuillotineStrategy(ctx, sp[1].o);
	init_arc_graphics_g2d_PixmapPacker_int_int_int_boolean_boolean_boolean_arc_graphics_g2d_PixmapPacker$PackStrategy(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, sp[1].o);
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_PixmapPacker_int_int_int_boolean_arc_graphics_g2d_PixmapPacker$PackStrategy(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:<init>", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_PixmapPacker(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(100);
	init_arc_graphics_g2d_PixmapPacker_int_int_int_boolean_boolean_boolean_arc_graphics_g2d_PixmapPacker$PackStrategy(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (jint(0)), (jint(0)), (frame[5].o));
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_PixmapPacker_int_int_int_boolean_boolean_boolean_arc_graphics_g2d_PixmapPacker$PackStrategy(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3, jbool param4, jbool param5, jobject param6) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:<init>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_PixmapPacker(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(112);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_graphics_g2d_PixmapPacker *) NULL_CHECK(sp[0].o))->F_pages = (jref) sp[1].o;
	LINE_NUMBER(81);
	((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_allowMultiplePages = (jint(1));
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)));
	((arc_graphics_g2d_PixmapPacker *) NULL_CHECK(sp[0].o))->F_transparentColor = (jref) sp[1].o;
	LINE_NUMBER(113);
	((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pageWidth = (frame[1].i);
	LINE_NUMBER(114);
	((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pageHeight = (frame[2].i);
	LINE_NUMBER(115);
	((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_padding = (frame[3].i);
	LINE_NUMBER(116);
	((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_duplicateBorder = (frame[4].i);
	LINE_NUMBER(117);
	((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_stripWhitespaceX = (frame[5].i);
	LINE_NUMBER(118);
	((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_stripWhitespaceY = (frame[6].i);
	LINE_NUMBER(119);
	((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_packStrategy = (jref) (frame[7].o);
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_PixmapPacker_setAllowMultiplePages_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:setAllowMultiplePages", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(123);
	((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_allowMultiplePages = (frame[1].i);
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_PixmapPacker_sort_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:sort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_packStrategy;
	((func_arc_graphics_g2d_PixmapPacker$PackStrategy_sort_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_arc_graphics_g2d_PixmapPacker$PackStrategy, INDEX_arc_graphics_g2d_PixmapPacker$PackStrategy_sort_arc_struct_Seq, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_PixmapPacker_pack_arc_graphics_Pixmap_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:pack", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_arc_graphics_Pixmap_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_arc_graphics_Pixmap_R_arc_math_geom_Rect])(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].o));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_arc_graphics_Pixmap_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:pack", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(151);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_arc_graphics_g2d_PixmapRegion(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_graphics_g2d_PixmapRegion);
	init_arc_graphics_g2d_PixmapRegion_arc_graphics_Pixmap(ctx, sp[2].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_arc_graphics_g2d_PixmapRegion_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_arc_graphics_g2d_PixmapRegion_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_arc_graphics_g2d_PixmapRegion_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:pack", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_arc_graphics_g2d_PixmapRegion_Array1_int_Array1_int_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_arc_graphics_g2d_PixmapRegion_Array1_int_Array1_int_R_arc_math_geom_Rect])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)), (jobject(nullptr)));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_int_int_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:pack", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(167);
	if (((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_disposed) == 0) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx, self);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(169);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(170);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(171);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_getRect_java_lang_String_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_getRect_java_lang_String_R_arc_math_geom_Rect])(ctx, (frame[0].o), (frame[1].o));
	frame[6].o = (checkCast(ctx, &class_arc_graphics_g2d_PixmapPacker$PixmapPackerRect, sp[0].o));
	LINE_NUMBER(173);
	if ((frame[6].o) == nullptr) goto label_4;
	}
	{
	if ((jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[6].o)))->F_width))) != (frame[2].i)) goto label_4;
	}
	{
	if ((jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[6].o)))->F_height))) != (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(174);
	frame[4].o = (frame[6].o);
	LINE_NUMBER(175);
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_getPage_java_lang_String_R_arc_graphics_g2d_PixmapPacker$Page) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_getPage_java_lang_String_R_arc_graphics_g2d_PixmapPacker$Page])(ctx, (frame[0].o), (frame[1].o));
	frame[5].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(179);
	clinit_arc_graphics_g2d_PixmapPacker$PixmapPackerRect(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_PixmapPacker$PixmapPackerRect);
	init_arc_graphics_g2d_PixmapPacker$PixmapPackerRect_int_int_int_int(ctx, sp[0].o, (jint(0)), (jint(0)), (frame[2].i), (frame[3].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(180);
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[6].o)))->F_width), (jfloat(((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pageWidth))), -1)) > 0) goto label_10;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[6].o)))->F_height), (jfloat(((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pageHeight))), -1)) <= 0) goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(181);
	if ((frame[1].o) != nullptr) goto label_12;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Page size too small for pixmap."_j))));
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(182);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Page size too small for pixmap: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(186);
	if ((frame[4].o) == nullptr) goto label_13;
	}
	INST_ALOAD(5);
	if ((--sp)->o == nullptr) goto label_13;
	{
	LINE_NUMBER(187);
	frame[7].o = (frame[5].o);
	LINE_NUMBER(188);
	frame[6].o = (frame[4].o);
	LINE_NUMBER(190);
	((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[7].o)))->F_dirty = (jint(1));
	LINE_NUMBER(191);
	frame[8].i = (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[6].o)))->F_y)));
	frame[9].i = ((frame[8].i) + (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[6].o)))->F_height))));
	}
label_19:;
	{
	if ((frame[8].i) >= (frame[9].i)) goto label_20;
	}
	{
	LINE_NUMBER(192);
	frame[10].i = (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[6].o)))->F_x)));
	frame[11].i = ((frame[10].i) + (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[6].o)))->F_width))));
	}
label_23:;
	{
	if ((frame[10].i) >= (frame[11].i)) goto label_24;
	}
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[7].o)))->F_image;
	((func_arc_graphics_Pixmap_setRaw_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_setRaw_int_int_int])(ctx, sp[0].o, (frame[10].i), (frame[8].i), (clinit_arc_graphics_Color(ctx), (jint)SF_arc_graphics_Color_clearRgba));
	LINE_NUMBER(192);
	INST_IINC(10, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(191);
	INST_IINC(8, 1);
	goto label_19;
	}
label_20:;
	goto label_27;
label_13:;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_packStrategy;
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker$PackStrategy_pack_arc_graphics_g2d_PixmapPacker_java_lang_String_arc_math_geom_Rect_R_arc_graphics_g2d_PixmapPacker$Page) resolveInterfaceMethod(ctx, &class_arc_graphics_g2d_PixmapPacker$PackStrategy, INDEX_arc_graphics_g2d_PixmapPacker$PackStrategy_pack_arc_graphics_g2d_PixmapPacker_java_lang_String_arc_math_geom_Rect_R_arc_graphics_g2d_PixmapPacker$Page, sp[0].o))(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(198);
	if ((frame[1].o) == nullptr) goto label_27;
	}
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[7].o)))->F_rects;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[6].o));
	LINE_NUMBER(200);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[7].o)))->F_addedRects;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	}
label_27:;
	{
	LINE_NUMBER(204);
	popStackFrame(ctx, self);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_arc_graphics_g2d_PixmapRegion_Array1_int_Array1_int_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[27];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:pack", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(208);
	if (((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_disposed) == 0) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx, self);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(211);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(212);
	frame[6].o = (jobject(nullptr));
	LINE_NUMBER(214);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_getRect_java_lang_String_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_getRect_java_lang_String_R_arc_math_geom_Rect])(ctx, (frame[0].o), (frame[1].o));
	frame[7].o = (checkCast(ctx, &class_arc_graphics_g2d_PixmapPacker$PixmapPackerRect, sp[0].o));
	LINE_NUMBER(216);
	if ((frame[7].o) == nullptr) goto label_4;
	}
	{
	if ((jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[7].o)))->F_width))) != ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[2].o)))->F_width)) goto label_4;
	}
	{
	if ((jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[7].o)))->F_height))) != ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[2].o)))->F_height)) goto label_4;
	}
	{
	LINE_NUMBER(217);
	frame[5].o = (frame[7].o);
	LINE_NUMBER(218);
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker_getPage_java_lang_String_R_arc_graphics_g2d_PixmapPacker$Page) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_getPage_java_lang_String_R_arc_graphics_g2d_PixmapPacker$Page])(ctx, (frame[0].o), (frame[1].o));
	frame[6].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(222);
	if ((frame[1].o) == nullptr) goto label_9;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8".9"_j))));
	if (temp0 == 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(225);
	frame[9].o = (jobject(nullptr));
	LINE_NUMBER(226);
	if ((frame[7].i) == 0) goto label_13;
	}
	INST_ALOAD(3);
	if ((--sp)->o != nullptr) goto label_13;
	{
	LINE_NUMBER(227);
	clinit_arc_graphics_g2d_PixmapPacker$PixmapPackerRect(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_PixmapPacker$PixmapPackerRect);
	init_arc_graphics_g2d_PixmapPacker$PixmapPackerRect_int_int_int_int(ctx, sp[0].o, (jint(0)), (jint(0)), (((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[2].o)))->F_width) - (jint(2))), (((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[2].o)))->F_height) - (jint(2))));
	frame[8].o = sp[0].o;
	LINE_NUMBER(228);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, (((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[2].o)))->F_width) - (jint(2))), (((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[2].o)))->F_height) - (jint(2))));
	frame[9].o = sp[0].o;
	LINE_NUMBER(229);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)M_arc_graphics_g2d_PixmapPacker_getSplits_arc_graphics_g2d_PixmapRegion_R_Array1_int(ctx, (frame[0].o), (frame[2].o));
	((arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) NULL_CHECK(sp[0].o))->F_splits = (jref) sp[1].o;
	LINE_NUMBER(230);
	sp[0].o = frame[8].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) NULL_CHECK((frame[8].o)))->F_splits;
	sp[1].o = (jobject)M_arc_graphics_g2d_PixmapPacker_getPads_arc_graphics_g2d_PixmapRegion_Array1_int_R_Array1_int(ctx, sp[1].o, sp[2].o, sp[3].o);
	((arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) NULL_CHECK(sp[0].o))->F_pads = (jref) sp[1].o;
	LINE_NUMBER(231);
	((func_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int])(ctx, (frame[9].o), (frame[2].o), (jint(0)), (jint(0)), (jint(1)), (jint(1)), (((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[2].o)))->F_width) - (jint(1))), (((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[2].o)))->F_height) - (jint(1))));
	LINE_NUMBER(232);
	clinit_arc_graphics_g2d_PixmapRegion(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_PixmapRegion);
	init_arc_graphics_g2d_PixmapRegion_arc_graphics_Pixmap(ctx, sp[0].o, (frame[9].o));
	frame[2].o = sp[0].o;
	goto label_20;
	}
label_13:;
	{
	LINE_NUMBER(234);
	clinit_arc_graphics_g2d_PixmapPacker$PixmapPackerRect(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_PixmapPacker$PixmapPackerRect);
	init_arc_graphics_g2d_PixmapPacker$PixmapPackerRect_int_int_int_int(ctx, sp[0].o, (jint(0)), (jint(0)), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[2].o)))->F_width), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[2].o)))->F_height));
	frame[8].o = sp[0].o;
	LINE_NUMBER(235);
	((arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) NULL_CHECK((frame[8].o)))->F_splits = (jref) (frame[3].o);
	LINE_NUMBER(236);
	((arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) NULL_CHECK((frame[8].o)))->F_pads = (jref) (frame[4].o);
	}
label_20:;
	{
	LINE_NUMBER(239);
	if ((frame[7].i) == 0) goto label_23;
	}
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\\."_j))));
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	}
label_23:;
	{
	LINE_NUMBER(243);
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[8].o)))->F_width), (jfloat(((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pageWidth))), -1)) > 0) goto label_25;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[8].o)))->F_height), (jfloat(((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pageHeight))), -1)) <= 0) goto label_26;
	}
label_25:;
	{
	LINE_NUMBER(244);
	if ((frame[1].o) != nullptr) goto label_27;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Page size too small for pixmap."_j))));
	throwException(ctx, sp[0].o);	}
label_27:;
	{
	LINE_NUMBER(245);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Page size too small for pixmap: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_26:;
	{
	LINE_NUMBER(251);
	if ((frame[5].o) == nullptr) goto label_28;
	}
	INST_ALOAD(6);
	if ((--sp)->o == nullptr) goto label_28;
	INST_ILOAD(7);
	if ((--sp)->i != 0) goto label_28;
	{
	LINE_NUMBER(252);
	frame[10].o = (frame[6].o);
	LINE_NUMBER(253);
	frame[8].o = (frame[5].o);
	goto label_31;
	}
label_28:;
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_packStrategy;
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapPacker$PackStrategy_pack_arc_graphics_g2d_PixmapPacker_java_lang_String_arc_math_geom_Rect_R_arc_graphics_g2d_PixmapPacker$Page) resolveInterfaceMethod(ctx, &class_arc_graphics_g2d_PixmapPacker$PackStrategy, INDEX_arc_graphics_g2d_PixmapPacker$PackStrategy_pack_arc_graphics_g2d_PixmapPacker_java_lang_String_arc_math_geom_Rect_R_arc_graphics_g2d_PixmapPacker$Page, sp[0].o))(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[8].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(256);
	if ((frame[1].o) == nullptr) goto label_31;
	}
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[10].o)))->F_rects;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[8].o));
	LINE_NUMBER(258);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[10].o)))->F_addedRects;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	}
label_31:;
	{
	LINE_NUMBER(262);
	frame[11].i = (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[8].o)))->F_x)));
	frame[12].i = (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[8].o)))->F_y)));
	frame[13].i = (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[8].o)))->F_width)));
	frame[14].i = (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[8].o)))->F_height)));
	LINE_NUMBER(264);
	if (((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_packToTexture) == 0) goto label_39;
	}
	{
	if (((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_duplicateBorder) != 0) goto label_39;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[10].o)))->F_texture;
	if (sp[0].o == nullptr) goto label_39;
	}
	{
	if (((jint)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[10].o)))->F_dirty) != 0) goto label_39;
	}
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[10].o)))->F_texture;
	((func_arc_graphics_Texture_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_bind])(ctx, sp[0].o);
	LINE_NUMBER(267);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[10].o)))->F_texture;
	jint temp0 = (jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_glTarget;
	jint temp1 = jint(0);
	jint temp2 = frame[11].i;
	jint temp3 = frame[12].i;
	jint temp4 = frame[13].i;
	jint temp5 = frame[14].i;
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[2].o)))->F_pixmap;
	jint temp6 = (jint)((func_arc_graphics_Pixmap_getGLFormat_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_getGLFormat_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[2].o)))->F_pixmap;
	LINE_NUMBER(268);
	jint temp7 = (jint)((func_arc_graphics_Pixmap_getGLType_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_getGLType_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[2].o)))->F_pixmap;
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_pixels;
	LINE_NUMBER(267);
	SM_arc_graphics_Gl_texSubImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer(ctx, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, sp[0].o);
	goto label_44;
	}
label_39:;
	{
	LINE_NUMBER(270);
	((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[10].o)))->F_dirty = (jint(1));
	}
label_44:;
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[10].o)))->F_image;
	((func_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int])(ctx, sp[0].o, (frame[2].o), (frame[11].i), (frame[12].i));
	LINE_NUMBER(274);
	if (((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_duplicateBorder) == 0) goto label_46;
	}
	{
	LINE_NUMBER(275);
	frame[15].i = ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[2].o)))->F_width);
	frame[16].i = ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[2].o)))->F_height);
	LINE_NUMBER(277);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[10].o)))->F_image;
	((func_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int_int_int])(ctx, sp[0].o, (frame[2].o), (jint(0)), (jint(0)), (jint(1)), (jint(1)), ((frame[11].i) - (jint(1))), ((frame[12].i) - (jint(1))), (jint(1)), (jint(1)));
	LINE_NUMBER(278);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[10].o)))->F_image;
	((func_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int_int_int])(ctx, sp[0].o, (frame[2].o), ((frame[15].i) - (jint(1))), (jint(0)), (jint(1)), (jint(1)), ((frame[11].i) + (frame[13].i)), ((frame[12].i) - (jint(1))), (jint(1)), (jint(1)));
	LINE_NUMBER(279);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[10].o)))->F_image;
	((func_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int_int_int])(ctx, sp[0].o, (frame[2].o), (jint(0)), ((frame[16].i) - (jint(1))), (jint(1)), (jint(1)), ((frame[11].i) - (jint(1))), ((frame[12].i) + (frame[14].i)), (jint(1)), (jint(1)));
	LINE_NUMBER(280);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[10].o)))->F_image;
	((func_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int_int_int])(ctx, sp[0].o, (frame[2].o), ((frame[15].i) - (jint(1))), ((frame[16].i) - (jint(1))), (jint(1)), (jint(1)), ((frame[11].i) + (frame[13].i)), ((frame[12].i) + (frame[14].i)), (jint(1)), (jint(1)));
	LINE_NUMBER(282);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[10].o)))->F_image;
	((func_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int_int_int])(ctx, sp[0].o, (frame[2].o), (jint(0)), (jint(0)), (frame[15].i), (jint(1)), (frame[11].i), ((frame[12].i) - (jint(1))), (frame[13].i), (jint(1)));
	LINE_NUMBER(283);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[10].o)))->F_image;
	((func_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int_int_int])(ctx, sp[0].o, (frame[2].o), (jint(0)), ((frame[16].i) - (jint(1))), (frame[15].i), (jint(1)), (frame[11].i), ((frame[12].i) + (frame[14].i)), (frame[13].i), (jint(1)));
	LINE_NUMBER(284);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[10].o)))->F_image;
	((func_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int_int_int])(ctx, sp[0].o, (frame[2].o), (jint(0)), (jint(0)), (jint(1)), (frame[16].i), ((frame[11].i) - (jint(1))), (frame[12].i), (jint(1)), (frame[14].i));
	LINE_NUMBER(285);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[10].o)))->F_image;
	((func_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_int_int_int_int_int_int_int_int])(ctx, sp[0].o, (frame[2].o), ((frame[15].i) - (jint(1))), (jint(0)), (jint(1)), (frame[16].i), ((frame[11].i) + (frame[13].i)), (frame[12].i), (jint(1)), (frame[14].i));
	}
label_46:;
	{
	LINE_NUMBER(288);
	if ((frame[9].o) == nullptr) goto label_57;
	}
	{
	LINE_NUMBER(289);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[9].o));
	}
label_57:;
	{
	LINE_NUMBER(292);
	popStackFrame(ctx, self);
	return (frame[8].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:getPages", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pages;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_PixmapPacker_getRect_java_lang_String_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:getRect", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pages;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_arc_graphics_g2d_PixmapPacker$Page, sp[0].o));
	LINE_NUMBER(309);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[3].o)))->F_rects;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[4].o = (checkCast(ctx, &class_arc_math_geom_Rect, sp[0].o));
	LINE_NUMBER(310);
	if ((frame[4].o) == nullptr) goto label_5;
	}
	INST_ALOAD(4);
	popStackFrame(ctx, self);
	INST_ARETURN();
label_5:;
	LINE_NUMBER(311);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(312);
	popStackFrame(ctx, self);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_PixmapPacker_getRegion_java_lang_String_R_arc_graphics_g2d_PixmapRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:getRegion", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pages;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_arc_graphics_g2d_PixmapPacker$Page, sp[0].o));
	LINE_NUMBER(318);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[3].o)))->F_rects;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[4].o = (checkCast(ctx, &class_arc_math_geom_Rect, sp[0].o));
	LINE_NUMBER(319);
	if ((frame[4].o) == nullptr) goto label_5;
	}
	{
	clinit_arc_graphics_g2d_PixmapRegion(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_PixmapRegion);
	sp[1].o = (jobject)((func_arc_graphics_g2d_PixmapPacker$Page_getPixmap_R_arc_graphics_Pixmap) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker$Page_getPixmap_R_arc_graphics_Pixmap])(ctx, (frame[3].o));
	init_arc_graphics_g2d_PixmapRegion_arc_graphics_Pixmap_int_int_int_int(ctx, sp[0].o, sp[1].o, (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[4].o)))->F_x))), (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[4].o)))->F_y))), (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[4].o)))->F_width))), (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[4].o)))->F_height))));
	popStackFrame(ctx, self);
	return sp[0].o;
	}
label_5:;
	LINE_NUMBER(320);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(321);
	popStackFrame(ctx, self);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_PixmapPacker_getPage_java_lang_String_R_arc_graphics_g2d_PixmapPacker$Page(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:getPage", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(329);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pages;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_arc_graphics_g2d_PixmapPacker$Page, sp[0].o));
	LINE_NUMBER(330);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[3].o)))->F_rects;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[4].o = (checkCast(ctx, &class_arc_math_geom_Rect, sp[0].o));
	LINE_NUMBER(331);
	if ((frame[4].o) == nullptr) goto label_5;
	}
	INST_ALOAD(3);
	popStackFrame(ctx, self);
	INST_ARETURN();
label_5:;
	LINE_NUMBER(332);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(333);
	popStackFrame(ctx, self);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_g2d_PixmapPacker_getPageIndex_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:getPageIndex", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(342);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pages;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pages;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((checkCast(ctx, &class_arc_graphics_g2d_PixmapPacker$Page, sp[0].o))))->F_rects;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = (checkCast(ctx, &class_arc_math_geom_Rect, sp[0].o));
	LINE_NUMBER(344);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	INST_ILOAD(2);
	popStackFrame(ctx, self);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(342);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(346);
	popStackFrame(ctx, self);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_PixmapPacker_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:dispose", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(354);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pages;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_graphics_g2d_PixmapPacker$Page, sp[0].o));
	LINE_NUMBER(355);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[2].o)))->F_texture;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(356);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[2].o)))->F_image;
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, sp[0].o);
	}
label_4:;
	LINE_NUMBER(358);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(359);
	((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_disposed = (jint(1));
	LINE_NUMBER(360);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_PixmapPacker_forceDispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:forceDispose", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(364);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pages;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_graphics_g2d_PixmapPacker$Page, sp[0].o));
	LINE_NUMBER(365);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[2].o)))->F_image;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(366);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[2].o)))->F_image;
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, sp[0].o);
	}
label_4:;
	LINE_NUMBER(368);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(369);
	((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_disposed = (jint(1));
	LINE_NUMBER(370);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_PixmapPacker_generateTextureAtlas_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean_R_arc_graphics_g2d_TextureAtlas(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:generateTextureAtlas", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(377);
	clinit_arc_graphics_g2d_TextureAtlas(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureAtlas);
	init_arc_graphics_g2d_TextureAtlas(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(378);
	((func_arc_graphics_g2d_PixmapPacker_updateTextureAtlas_arc_graphics_g2d_TextureAtlas_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_updateTextureAtlas_arc_graphics_g2d_TextureAtlas_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean_boolean])(ctx, (frame[0].o), (frame[4].o), (frame[1].o), (frame[2].o), (frame[3].i), (jint(1)));
	LINE_NUMBER(379);
	popStackFrame(ctx, self);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_PixmapPacker_updateTextureAtlas_arc_graphics_g2d_TextureAtlas_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:updateTextureAtlas", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(383);
	((func_arc_graphics_g2d_PixmapPacker_updateTextureAtlas_arc_graphics_g2d_TextureAtlas_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_updateTextureAtlas_arc_graphics_g2d_TextureAtlas_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].i), (jint(1)));
	LINE_NUMBER(384);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_PixmapPacker_updateTextureAtlas_arc_graphics_g2d_TextureAtlas_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:updateTextureAtlas", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(393);
	((func_arc_graphics_g2d_PixmapPacker_updatePageTextures_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_updatePageTextures_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean])(ctx, (frame[0].o), (frame[2].o), (frame[3].o), (frame[4].i));
	LINE_NUMBER(395);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pages;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_arc_graphics_g2d_PixmapPacker$Page, sp[0].o));
	LINE_NUMBER(396);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[7].o)))->F_addedRects;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(397);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[7].o)))->F_addedRects;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[8].o)))(ctx, (frame[8].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(398);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[7].o)))->F_rects;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_arc_graphics_g2d_PixmapPacker$PixmapPackerRect, sp[0].o));
	LINE_NUMBER(399);
	clinit_arc_graphics_g2d_TextureAtlas$AtlasRegion(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureAtlas$AtlasRegion);
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[7].o)))->F_texture;
	init_arc_graphics_g2d_TextureAtlas$AtlasRegion_arc_graphics_Texture_int_int_int_int(ctx, sp[0].o, sp[1].o, (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[10].o)))->F_x))), (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[10].o)))->F_y))), (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[10].o)))->F_width))), (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[10].o)))->F_height))));
	frame[11].o = sp[0].o;
	LINE_NUMBER(401);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) NULL_CHECK((frame[10].o)))->F_splits;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(402);
	sp[0].o = frame[11].o;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) NULL_CHECK((frame[10].o)))->F_splits;
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_splits = (jref) sp[1].o;
	LINE_NUMBER(403);
	sp[0].o = frame[11].o;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) NULL_CHECK((frame[10].o)))->F_pads;
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_pads = (jref) sp[1].o;
	}
label_12:;
	{
	LINE_NUMBER(406);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[11].o)))->F_name = (jref) (frame[9].o);
	LINE_NUMBER(407);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[11].o)))->F_offsetX = (jfloat(((jint)((arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) NULL_CHECK((frame[10].o)))->F_offsetX)));
	LINE_NUMBER(408);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[11].o)))->F_offsetY = (jfloat((jint((((jfloat(((jint)((arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) NULL_CHECK((frame[10].o)))->F_originalHeight))) - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[10].o)))->F_height)) - (jfloat(((jint)((arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) NULL_CHECK((frame[10].o)))->F_offsetY))))))));
	LINE_NUMBER(409);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[11].o)))->F_originalWidth = ((jint)((arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) NULL_CHECK((frame[10].o)))->F_originalWidth);
	LINE_NUMBER(410);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[11].o)))->F_originalHeight = ((jint)((arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) NULL_CHECK((frame[10].o)))->F_originalHeight);
	LINE_NUMBER(412);
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getRegions_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getRegions_R_arc_struct_Seq])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[11].o));
	LINE_NUMBER(413);
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getRegionMap_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getRegionMap_R_arc_struct_ObjectMap])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[9].o), (frame[11].o));
	LINE_NUMBER(414);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(415);
	if ((frame[5].i) == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[7].o)))->F_addedRects;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	}
label_22:;
	{
	LINE_NUMBER(416);
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_getTextures_R_arc_struct_ObjectSet) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_getTextures_R_arc_struct_ObjectSet])(ctx, (frame[1].o));
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((frame[7].o)))->F_texture;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	LINE_NUMBER(418);
	goto label_2;
label_3:;
	LINE_NUMBER(419);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_PixmapPacker_updateTextureRegions_arc_struct_Seq_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:updateTextureRegions", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(427);
	((func_arc_graphics_g2d_PixmapPacker_updatePageTextures_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker_updatePageTextures_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean])(ctx, (frame[0].o), (frame[2].o), (frame[3].o), (frame[4].i));
	}
label_1:;
	{
	LINE_NUMBER(428);
	jint temp0 = (jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size;
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pages;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(429);
	sp[0].o = frame[1].o;
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	sp[2].o = (jobject)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pages;
	sp[2].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[2].o, ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size));
	sp[2].o = (jobject)((arc_graphics_g2d_PixmapPacker$Page *) NULL_CHECK((checkCast(ctx, &class_arc_graphics_g2d_PixmapPacker$Page, sp[2].o))))->F_texture;
	init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(430);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_PixmapPacker_updatePageTextures_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:updatePageTextures", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(434);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pages;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_arc_graphics_g2d_PixmapPacker$Page, sp[0].o));
	LINE_NUMBER(435);
	jint temp0 = (jint)((func_arc_graphics_g2d_PixmapPacker$Page_updateTexture_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapPacker$Page_updateTexture_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean_R_boolean])(ctx, (frame[5].o), (frame[1].o), (frame[2].o), (frame[3].i));
	goto label_1;
	}
label_2:;
	LINE_NUMBER(436);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_arc_graphics_g2d_PixmapPacker_getPageWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:getPageWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(439);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pageWidth);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_PixmapPacker_setPageWidth_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:setPageWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(443);
	((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pageWidth = (frame[1].i);
	LINE_NUMBER(444);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_g2d_PixmapPacker_getPageHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:getPageHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(447);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pageHeight);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_PixmapPacker_setPageHeight_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:setPageHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(451);
	((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_pageHeight = (frame[1].i);
	LINE_NUMBER(452);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_g2d_PixmapPacker_getPadding_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:getPadding", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(455);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_padding);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_PixmapPacker_setPadding_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:setPadding", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(459);
	((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_padding = (frame[1].i);
	LINE_NUMBER(460);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_g2d_PixmapPacker_getDuplicateBorder_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:getDuplicateBorder", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(463);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_duplicateBorder);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_PixmapPacker_setDuplicateBorder_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:setDuplicateBorder", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(467);
	((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_duplicateBorder = (frame[1].i);
	LINE_NUMBER(468);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_g2d_PixmapPacker_getPackToTexture_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:getPackToTexture", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(471);
	popStackFrame(ctx);
	return ((jint)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_packToTexture);
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_PixmapPacker_setPackToTexture_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:setPackToTexture", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(480);
	((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_packToTexture = (frame[1].i);
	LINE_NUMBER(481);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_PixmapPacker_getTransparentColor_R_arc_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:getTransparentColor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(485);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_transparentColor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_PixmapPacker_setTransparentColor_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:setTransparentColor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(494);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[0].o)))->F_transparentColor;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(495);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_PixmapPacker_getSplits_arc_graphics_g2d_PixmapRegion_R_Array1_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:getSplits", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(499);
	jint temp0 = (jint)M_arc_graphics_g2d_PixmapPacker_getSplitPoint_arc_graphics_g2d_PixmapRegion_int_int_boolean_boolean_R_int(ctx, (frame[0].o), (frame[1].o), (jint(1)), (jint(0)), (jint(1)), (jint(1)));
	frame[2].i = temp0;
	LINE_NUMBER(500);
	jint temp1 = (jint)M_arc_graphics_g2d_PixmapPacker_getSplitPoint_arc_graphics_g2d_PixmapRegion_int_int_boolean_boolean_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (jint(0)), (jint(0)), (jint(1)));
	frame[3].i = temp1;
	LINE_NUMBER(501);
	jint temp2 = (jint)M_arc_graphics_g2d_PixmapPacker_getSplitPoint_arc_graphics_g2d_PixmapRegion_int_int_boolean_boolean_R_int(ctx, (frame[0].o), (frame[1].o), (jint(0)), (jint(1)), (jint(1)), (jint(0)));
	frame[4].i = temp2;
	LINE_NUMBER(502);
	jint temp3 = (jint)M_arc_graphics_g2d_PixmapPacker_getSplitPoint_arc_graphics_g2d_PixmapRegion_int_int_boolean_boolean_R_int(ctx, (frame[0].o), (frame[1].o), (jint(0)), (frame[4].i), (jint(0)), (jint(0)));
	frame[5].i = temp3;
	LINE_NUMBER(505);
	jint temp4 = (jint)M_arc_graphics_g2d_PixmapPacker_getSplitPoint_arc_graphics_g2d_PixmapRegion_int_int_boolean_boolean_R_int(ctx, (frame[0].o), (frame[1].o), ((frame[3].i) + (jint(1))), (jint(0)), (jint(1)), (jint(1)));
	LINE_NUMBER(506);
	jint temp5 = (jint)M_arc_graphics_g2d_PixmapPacker_getSplitPoint_arc_graphics_g2d_PixmapRegion_int_int_boolean_boolean_R_int(ctx, (frame[0].o), (frame[1].o), (jint(0)), ((frame[5].i) + (jint(1))), (jint(1)), (jint(0)));
	LINE_NUMBER(509);
	if ((frame[2].i) != 0) goto label_7;
	}
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_7;
	INST_ILOAD(4);
	if ((--sp)->i != 0) goto label_7;
	INST_ILOAD(5);
	if ((--sp)->i != 0) goto label_7;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
	{
	LINE_NUMBER(512);
	if ((frame[2].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(513);
	INST_IINC(2, -1);
	LINE_NUMBER(514);
	frame[3].i = ((((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_width) - (jint(2))) - ((frame[3].i) - (jint(1))));
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(517);
	frame[3].i = (((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_width) - (jint(2)));
	}
label_11:;
	{
	LINE_NUMBER(519);
	if ((frame[4].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(520);
	INST_IINC(4, -1);
	LINE_NUMBER(521);
	frame[5].i = ((((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_height) - (jint(2))) - ((frame[5].i) - (jint(1))));
	goto label_15;
	}
label_12:;
	{
	LINE_NUMBER(524);
	frame[5].i = (((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_height) - (jint(2)));
	}
label_15:;
	{
	LINE_NUMBER(527);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (frame[2].i);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (frame[3].i);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (frame[4].i);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (frame[5].i);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_PixmapPacker_getPads_arc_graphics_g2d_PixmapRegion_Array1_int_R_Array1_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:getPads", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(532);
	frame[3].i = (((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_height) - (jint(1)));
	LINE_NUMBER(533);
	frame[4].i = (((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_width) - (jint(1)));
	LINE_NUMBER(535);
	jint temp0 = (jint)M_arc_graphics_g2d_PixmapPacker_getSplitPoint_arc_graphics_g2d_PixmapRegion_int_int_boolean_boolean_R_int(ctx, (frame[0].o), (frame[1].o), (jint(1)), (frame[3].i), (jint(1)), (jint(1)));
	frame[5].i = temp0;
	LINE_NUMBER(536);
	jint temp1 = (jint)M_arc_graphics_g2d_PixmapPacker_getSplitPoint_arc_graphics_g2d_PixmapRegion_int_int_boolean_boolean_R_int(ctx, (frame[0].o), (frame[1].o), (frame[4].i), (jint(1)), (jint(1)), (jint(0)));
	frame[6].i = temp1;
	LINE_NUMBER(539);
	frame[7].i = (jint(0));
	LINE_NUMBER(540);
	frame[8].i = (jint(0));
	LINE_NUMBER(541);
	if ((frame[5].i) == 0) goto label_7;
	}
	{
	jint temp0 = (jint)M_arc_graphics_g2d_PixmapPacker_getSplitPoint_arc_graphics_g2d_PixmapRegion_int_int_boolean_boolean_R_int(ctx, (frame[0].o), (frame[1].o), ((frame[5].i) + (jint(1))), (frame[3].i), (jint(0)), (jint(1)));
	frame[7].i = temp0;
	}
label_7:;
	{
	LINE_NUMBER(542);
	if ((frame[6].i) == 0) goto label_8;
	}
	{
	jint temp0 = (jint)M_arc_graphics_g2d_PixmapPacker_getSplitPoint_arc_graphics_g2d_PixmapRegion_int_int_boolean_boolean_R_int(ctx, (frame[0].o), (frame[1].o), (frame[4].i), ((frame[6].i) + (jint(1))), (jint(0)), (jint(0)));
	frame[8].i = temp0;
	}
label_8:;
	{
	LINE_NUMBER(545);
	jint temp0 = (jint)M_arc_graphics_g2d_PixmapPacker_getSplitPoint_arc_graphics_g2d_PixmapRegion_int_int_boolean_boolean_R_int(ctx, (frame[0].o), (frame[1].o), ((frame[7].i) + (jint(1))), (frame[3].i), (jint(1)), (jint(1)));
	LINE_NUMBER(546);
	jint temp1 = (jint)M_arc_graphics_g2d_PixmapPacker_getSplitPoint_arc_graphics_g2d_PixmapRegion_int_int_boolean_boolean_R_int(ctx, (frame[0].o), (frame[1].o), (frame[4].i), ((frame[8].i) + (jint(1))), (jint(1)), (jint(0)));
	LINE_NUMBER(549);
	if ((frame[5].i) != 0) goto label_11;
	}
	INST_ILOAD(7);
	if ((--sp)->i != 0) goto label_11;
	INST_ILOAD(6);
	if ((--sp)->i != 0) goto label_11;
	INST_ILOAD(8);
	if ((--sp)->i != 0) goto label_11;
	{
	LINE_NUMBER(550);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_11:;
	{
	LINE_NUMBER(554);
	if ((frame[5].i) != 0) goto label_13;
	}
	INST_ILOAD(7);
	if ((--sp)->i != 0) goto label_13;
	{
	LINE_NUMBER(555);
	frame[5].i = (jint(-1));
	LINE_NUMBER(556);
	frame[7].i = (jint(-1));
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(558);
	if ((frame[5].i) <= 0) goto label_17;
	}
	{
	LINE_NUMBER(559);
	INST_IINC(5, -1);
	LINE_NUMBER(560);
	frame[7].i = ((((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_width) - (jint(2))) - ((frame[7].i) - (jint(1))));
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(563);
	frame[7].i = (((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_width) - (jint(2)));
	}
label_16:;
	{
	LINE_NUMBER(566);
	if ((frame[6].i) != 0) goto label_20;
	}
	INST_ILOAD(8);
	if ((--sp)->i != 0) goto label_20;
	{
	LINE_NUMBER(567);
	frame[6].i = (jint(-1));
	LINE_NUMBER(568);
	frame[8].i = (jint(-1));
	goto label_23;
	}
label_20:;
	{
	LINE_NUMBER(570);
	if ((frame[6].i) <= 0) goto label_24;
	}
	{
	LINE_NUMBER(571);
	INST_IINC(6, -1);
	LINE_NUMBER(572);
	frame[8].i = ((((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_height) - (jint(2))) - ((frame[8].i) - (jint(1))));
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(575);
	frame[8].i = (((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_height) - (jint(2)));
	}
label_23:;
	{
	LINE_NUMBER(579);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(4)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (frame[5].i);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (frame[7].i);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (frame[6].i);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (frame[8].i);
	frame[9].o = sp[0].o;
	LINE_NUMBER(581);
	if ((frame[2].o) == nullptr) goto label_28;
	}
	{
	jint temp0 = (jint)SM_java_util_Arrays_equals_Array1_int_Array1_int_R_boolean(ctx, (frame[9].o), (frame[2].o));
	if (temp0 == 0) goto label_28;
	}
	{
	LINE_NUMBER(582);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_28:;
	{
	LINE_NUMBER(585);
	popStackFrame(ctx);
	return (frame[9].o);
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_g2d_PixmapPacker_getSplitPoint_arc_graphics_g2d_PixmapRegion_int_int_boolean_boolean_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker:getSplitPoint", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(589);
	if ((frame[5].i) == 0) goto label_1;
	}
	INST_ILOAD(2);
	goto label_2;
label_1:;
	INST_ILOAD(3);
label_2:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(590);
	if ((frame[5].i) == 0) goto label_4;
	}
	{
	jint temp0 = (jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[1].o)))->F_width;
	sp[0].i = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ALOAD(1);
	sp[-1].i = ((arc_graphics_g2d_PixmapRegion *) NULL_CHECK(sp[-1].o))->F_height;
label_5:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(591);
	if ((frame[4].i) == 0) goto label_7;
	}
	INST_SIPUSH(255);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(593);
	frame[9].i = (frame[2].i);
	LINE_NUMBER(594);
	frame[10].i = (frame[3].i);
	}
label_11:;
	{
	LINE_NUMBER(595);
	if ((frame[6].i) == (frame[7].i)) goto label_12;
	}
	{
	LINE_NUMBER(596);
	if ((frame[5].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(597);
	frame[9].i = (frame[6].i);
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(599);
	frame[10].i = (frame[6].i);
	}
label_16:;
	{
	LINE_NUMBER(601);
	jint temp0 = (jint)((func_arc_graphics_g2d_PixmapRegion_getA_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapRegion_getA_int_int_R_int])(ctx, (frame[1].o), (frame[9].i), (frame[10].i));
	frame[11].i = temp0;
	LINE_NUMBER(602);
	if ((frame[11].i) != (frame[8].i)) goto label_18;
	}
	INST_ILOAD(6);
	popStackFrame(ctx);
	INST_IRETURN();
label_18:;
	{
	LINE_NUMBER(604);
	INST_IINC(6, 1);
	LINE_NUMBER(605);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(607);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_PixmapPacker[] {
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
	(void *) M_arc_graphics_g2d_PixmapPacker_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_graphics_g2d_PixmapPacker_setAllowMultiplePages_boolean,
	(void *) M_arc_graphics_g2d_PixmapPacker_sort_arc_struct_Seq,
	(void *) M_arc_graphics_g2d_PixmapPacker_pack_arc_graphics_Pixmap_R_arc_math_geom_Rect,
	(void *) M_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_arc_graphics_Pixmap_R_arc_math_geom_Rect,
	(void *) M_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_arc_graphics_g2d_PixmapRegion_R_arc_math_geom_Rect,
	(void *) M_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_int_int_R_arc_math_geom_Rect,
	(void *) M_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_arc_graphics_g2d_PixmapRegion_Array1_int_Array1_int_R_arc_math_geom_Rect,
	(void *) M_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq,
	(void *) M_arc_graphics_g2d_PixmapPacker_getRect_java_lang_String_R_arc_math_geom_Rect,
	(void *) M_arc_graphics_g2d_PixmapPacker_getRegion_java_lang_String_R_arc_graphics_g2d_PixmapRegion,
	(void *) M_arc_graphics_g2d_PixmapPacker_getPage_java_lang_String_R_arc_graphics_g2d_PixmapPacker$Page,
	(void *) M_arc_graphics_g2d_PixmapPacker_getPageIndex_java_lang_String_R_int,
	(void *) M_arc_graphics_g2d_PixmapPacker_forceDispose,
	(void *) M_arc_graphics_g2d_PixmapPacker_generateTextureAtlas_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean_R_arc_graphics_g2d_TextureAtlas,
	(void *) M_arc_graphics_g2d_PixmapPacker_updateTextureAtlas_arc_graphics_g2d_TextureAtlas_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean,
	(void *) M_arc_graphics_g2d_PixmapPacker_updateTextureAtlas_arc_graphics_g2d_TextureAtlas_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean_boolean,
	(void *) M_arc_graphics_g2d_PixmapPacker_updateTextureRegions_arc_struct_Seq_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean,
	(void *) M_arc_graphics_g2d_PixmapPacker_updatePageTextures_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean,
	(void *) M_arc_graphics_g2d_PixmapPacker_getPageWidth_R_int,
	(void *) M_arc_graphics_g2d_PixmapPacker_setPageWidth_int,
	(void *) M_arc_graphics_g2d_PixmapPacker_getPageHeight_R_int,
	(void *) M_arc_graphics_g2d_PixmapPacker_setPageHeight_int,
	(void *) M_arc_graphics_g2d_PixmapPacker_getPadding_R_int,
	(void *) M_arc_graphics_g2d_PixmapPacker_setPadding_int,
	(void *) M_arc_graphics_g2d_PixmapPacker_getDuplicateBorder_R_boolean,
	(void *) M_arc_graphics_g2d_PixmapPacker_setDuplicateBorder_boolean,
	(void *) M_arc_graphics_g2d_PixmapPacker_getPackToTexture_R_boolean,
	(void *) M_arc_graphics_g2d_PixmapPacker_setPackToTexture_boolean,
	(void *) M_arc_graphics_g2d_PixmapPacker_getTransparentColor_R_arc_graphics_Color,
	(void *) M_arc_graphics_g2d_PixmapPacker_setTransparentColor_arc_graphics_Color,
	(void *) M_arc_graphics_g2d_PixmapPacker_getSplits_arc_graphics_g2d_PixmapRegion_R_Array1_int,
	(void *) M_arc_graphics_g2d_PixmapPacker_getPads_arc_graphics_g2d_PixmapRegion_Array1_int_R_Array1_int,
	(void *) M_arc_graphics_g2d_PixmapPacker_getSplitPoint_arc_graphics_g2d_PixmapRegion_int_int_boolean_boolean_R_int,
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
	{ "setAllowMultiplePages", "(Z)V" },
	{ "sort", "(Larc/struct/Seq;)V" },
	{ "pack", "(Larc/graphics/Pixmap;)Larc/math/geom/Rect;" },
	{ "pack", "(Ljava/lang/String;Larc/graphics/Pixmap;)Larc/math/geom/Rect;" },
	{ "pack", "(Ljava/lang/String;Larc/graphics/g2d/PixmapRegion;)Larc/math/geom/Rect;" },
	{ "pack", "(Ljava/lang/String;II)Larc/math/geom/Rect;" },
	{ "pack", "(Ljava/lang/String;Larc/graphics/g2d/PixmapRegion;[I[I)Larc/math/geom/Rect;" },
	{ "getPages", "()Larc/struct/Seq;" },
	{ "getRect", "(Ljava/lang/String;)Larc/math/geom/Rect;" },
	{ "getRegion", "(Ljava/lang/String;)Larc/graphics/g2d/PixmapRegion;" },
	{ "getPage", "(Ljava/lang/String;)Larc/graphics/g2d/PixmapPacker$Page;" },
	{ "getPageIndex", "(Ljava/lang/String;)I" },
	{ "forceDispose", "()V" },
	{ "generateTextureAtlas", "(Larc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureFilter;Z)Larc/graphics/g2d/TextureAtlas;" },
	{ "updateTextureAtlas", "(Larc/graphics/g2d/TextureAtlas;Larc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureFilter;Z)V" },
	{ "updateTextureAtlas", "(Larc/graphics/g2d/TextureAtlas;Larc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureFilter;ZZ)V" },
	{ "updateTextureRegions", "(Larc/struct/Seq;Larc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureFilter;Z)V" },
	{ "updatePageTextures", "(Larc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureFilter;Z)V" },
	{ "getPageWidth", "()I" },
	{ "setPageWidth", "(I)V" },
	{ "getPageHeight", "()I" },
	{ "setPageHeight", "(I)V" },
	{ "getPadding", "()I" },
	{ "setPadding", "(I)V" },
	{ "getDuplicateBorder", "()Z" },
	{ "setDuplicateBorder", "(Z)V" },
	{ "getPackToTexture", "()Z" },
	{ "setPackToTexture", "(Z)V" },
	{ "getTransparentColor", "()Larc/graphics/Color;" },
	{ "setTransparentColor", "(Larc/graphics/Color;)V" },
	{ "getSplits", "(Larc/graphics/g2d/PixmapRegion;)[I" },
	{ "getPads", "(Larc/graphics/g2d/PixmapRegion;[I)[I" },
	{ "getSplitPoint", "(Larc/graphics/g2d/PixmapRegion;IIZZ)I" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static jclass innerClasses[] {
	&class_arc_graphics_g2d_PixmapPacker$GuillotineStrategy,
	&class_arc_graphics_g2d_PixmapPacker$PackStrategy,
	&class_arc_graphics_g2d_PixmapPacker$PixmapPackerRect,
	&class_arc_graphics_g2d_PixmapPacker$Page,
	&class_arc_graphics_g2d_PixmapPacker$SkylineStrategy,
};

static FieldMetadata fields[] {
	{ "pages", &class_arc_struct_Seq, offsetof(arc_graphics_g2d_PixmapPacker, F_pages), "Larc/struct/Seq;", 16 },
	{ "packToTexture", &class_boolean, offsetof(arc_graphics_g2d_PixmapPacker, F_packToTexture), "Z", 0 },
	{ "disposed", &class_boolean, offsetof(arc_graphics_g2d_PixmapPacker, F_disposed), "Z", 0 },
	{ "pageWidth", &class_int, offsetof(arc_graphics_g2d_PixmapPacker, F_pageWidth), "I", 0 },
	{ "pageHeight", &class_int, offsetof(arc_graphics_g2d_PixmapPacker, F_pageHeight), "I", 0 },
	{ "padding", &class_int, offsetof(arc_graphics_g2d_PixmapPacker, F_padding), "I", 0 },
	{ "allowMultiplePages", &class_boolean, offsetof(arc_graphics_g2d_PixmapPacker, F_allowMultiplePages), "Z", 0 },
	{ "duplicateBorder", &class_boolean, offsetof(arc_graphics_g2d_PixmapPacker, F_duplicateBorder), "Z", 0 },
	{ "stripWhitespaceX", &class_boolean, offsetof(arc_graphics_g2d_PixmapPacker, F_stripWhitespaceX), "Z", 0 },
	{ "stripWhitespaceY", &class_boolean, offsetof(arc_graphics_g2d_PixmapPacker, F_stripWhitespaceY), "Z", 0 },
	{ "transparentColor", &class_arc_graphics_Color, offsetof(arc_graphics_g2d_PixmapPacker, F_transparentColor), "Larc/graphics/Color;", 0 },
	{ "packStrategy", &class_arc_graphics_g2d_PixmapPacker$PackStrategy, offsetof(arc_graphics_g2d_PixmapPacker, F_packStrategy), "Larc/graphics/g2d/PixmapPacker$PackStrategy;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_PixmapPacker_int_int_int_boolean, 0, "(IIIZ)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_PixmapPacker_int_int_int_boolean_arc_graphics_g2d_PixmapPacker$PackStrategy, 0, "(IIIZLarc/graphics/g2d/PixmapPacker$PackStrategy;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_PixmapPacker_int_int_int_boolean_boolean_boolean_arc_graphics_g2d_PixmapPacker$PackStrategy, 0, "(IIIZZZLarc/graphics/g2d/PixmapPacker$PackStrategy;)V", 1 },
	{ "setAllowMultiplePages", (intptr_t) M_arc_graphics_g2d_PixmapPacker_setAllowMultiplePages_boolean, VTABLE_arc_graphics_g2d_PixmapPacker_setAllowMultiplePages_boolean, "(Z)V", 1 },
	{ "sort", (intptr_t) M_arc_graphics_g2d_PixmapPacker_sort_arc_struct_Seq, VTABLE_arc_graphics_g2d_PixmapPacker_sort_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "pack", (intptr_t) M_arc_graphics_g2d_PixmapPacker_pack_arc_graphics_Pixmap_R_arc_math_geom_Rect, VTABLE_arc_graphics_g2d_PixmapPacker_pack_arc_graphics_Pixmap_R_arc_math_geom_Rect, "(Larc/graphics/Pixmap;)Larc/math/geom/Rect;", 33 },
	{ "pack", (intptr_t) M_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_arc_graphics_Pixmap_R_arc_math_geom_Rect, VTABLE_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_arc_graphics_Pixmap_R_arc_math_geom_Rect, "(Ljava/lang/String;Larc/graphics/Pixmap;)Larc/math/geom/Rect;", 33 },
	{ "pack", (intptr_t) M_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_arc_graphics_g2d_PixmapRegion_R_arc_math_geom_Rect, VTABLE_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_arc_graphics_g2d_PixmapRegion_R_arc_math_geom_Rect, "(Ljava/lang/String;Larc/graphics/g2d/PixmapRegion;)Larc/math/geom/Rect;", 33 },
	{ "pack", (intptr_t) M_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_int_int_R_arc_math_geom_Rect, VTABLE_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_int_int_R_arc_math_geom_Rect, "(Ljava/lang/String;II)Larc/math/geom/Rect;", 33 },
	{ "pack", (intptr_t) M_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_arc_graphics_g2d_PixmapRegion_Array1_int_Array1_int_R_arc_math_geom_Rect, VTABLE_arc_graphics_g2d_PixmapPacker_pack_java_lang_String_arc_graphics_g2d_PixmapRegion_Array1_int_Array1_int_R_arc_math_geom_Rect, "(Ljava/lang/String;Larc/graphics/g2d/PixmapRegion;[I[I)Larc/math/geom/Rect;", 33 },
	{ "getPages", (intptr_t) M_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq, VTABLE_arc_graphics_g2d_PixmapPacker_getPages_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "getRect", (intptr_t) M_arc_graphics_g2d_PixmapPacker_getRect_java_lang_String_R_arc_math_geom_Rect, VTABLE_arc_graphics_g2d_PixmapPacker_getRect_java_lang_String_R_arc_math_geom_Rect, "(Ljava/lang/String;)Larc/math/geom/Rect;", 33 },
	{ "getRegion", (intptr_t) M_arc_graphics_g2d_PixmapPacker_getRegion_java_lang_String_R_arc_graphics_g2d_PixmapRegion, VTABLE_arc_graphics_g2d_PixmapPacker_getRegion_java_lang_String_R_arc_graphics_g2d_PixmapRegion, "(Ljava/lang/String;)Larc/graphics/g2d/PixmapRegion;", 33 },
	{ "getPage", (intptr_t) M_arc_graphics_g2d_PixmapPacker_getPage_java_lang_String_R_arc_graphics_g2d_PixmapPacker$Page, VTABLE_arc_graphics_g2d_PixmapPacker_getPage_java_lang_String_R_arc_graphics_g2d_PixmapPacker$Page, "(Ljava/lang/String;)Larc/graphics/g2d/PixmapPacker$Page;", 33 },
	{ "getPageIndex", (intptr_t) M_arc_graphics_g2d_PixmapPacker_getPageIndex_java_lang_String_R_int, VTABLE_arc_graphics_g2d_PixmapPacker_getPageIndex_java_lang_String_R_int, "(Ljava/lang/String;)I", 33 },
	{ "dispose", (intptr_t) M_arc_graphics_g2d_PixmapPacker_dispose, VTABLE_arc_graphics_g2d_PixmapPacker_dispose, "()V", 33 },
	{ "forceDispose", (intptr_t) M_arc_graphics_g2d_PixmapPacker_forceDispose, VTABLE_arc_graphics_g2d_PixmapPacker_forceDispose, "()V", 1 },
	{ "generateTextureAtlas", (intptr_t) M_arc_graphics_g2d_PixmapPacker_generateTextureAtlas_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean_R_arc_graphics_g2d_TextureAtlas, VTABLE_arc_graphics_g2d_PixmapPacker_generateTextureAtlas_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean_R_arc_graphics_g2d_TextureAtlas, "(Larc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureFilter;Z)Larc/graphics/g2d/TextureAtlas;", 33 },
	{ "updateTextureAtlas", (intptr_t) M_arc_graphics_g2d_PixmapPacker_updateTextureAtlas_arc_graphics_g2d_TextureAtlas_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean, VTABLE_arc_graphics_g2d_PixmapPacker_updateTextureAtlas_arc_graphics_g2d_TextureAtlas_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean, "(Larc/graphics/g2d/TextureAtlas;Larc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureFilter;Z)V", 33 },
	{ "updateTextureAtlas", (intptr_t) M_arc_graphics_g2d_PixmapPacker_updateTextureAtlas_arc_graphics_g2d_TextureAtlas_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean_boolean, VTABLE_arc_graphics_g2d_PixmapPacker_updateTextureAtlas_arc_graphics_g2d_TextureAtlas_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean_boolean, "(Larc/graphics/g2d/TextureAtlas;Larc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureFilter;ZZ)V", 33 },
	{ "updateTextureRegions", (intptr_t) M_arc_graphics_g2d_PixmapPacker_updateTextureRegions_arc_struct_Seq_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean, VTABLE_arc_graphics_g2d_PixmapPacker_updateTextureRegions_arc_struct_Seq_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean, "(Larc/struct/Seq;Larc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureFilter;Z)V", 33 },
	{ "updatePageTextures", (intptr_t) M_arc_graphics_g2d_PixmapPacker_updatePageTextures_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean, VTABLE_arc_graphics_g2d_PixmapPacker_updatePageTextures_arc_graphics_Texture$TextureFilter_arc_graphics_Texture$TextureFilter_boolean, "(Larc/graphics/Texture$TextureFilter;Larc/graphics/Texture$TextureFilter;Z)V", 33 },
	{ "getPageWidth", (intptr_t) M_arc_graphics_g2d_PixmapPacker_getPageWidth_R_int, VTABLE_arc_graphics_g2d_PixmapPacker_getPageWidth_R_int, "()I", 1 },
	{ "setPageWidth", (intptr_t) M_arc_graphics_g2d_PixmapPacker_setPageWidth_int, VTABLE_arc_graphics_g2d_PixmapPacker_setPageWidth_int, "(I)V", 1 },
	{ "getPageHeight", (intptr_t) M_arc_graphics_g2d_PixmapPacker_getPageHeight_R_int, VTABLE_arc_graphics_g2d_PixmapPacker_getPageHeight_R_int, "()I", 1 },
	{ "setPageHeight", (intptr_t) M_arc_graphics_g2d_PixmapPacker_setPageHeight_int, VTABLE_arc_graphics_g2d_PixmapPacker_setPageHeight_int, "(I)V", 1 },
	{ "getPadding", (intptr_t) M_arc_graphics_g2d_PixmapPacker_getPadding_R_int, VTABLE_arc_graphics_g2d_PixmapPacker_getPadding_R_int, "()I", 1 },
	{ "setPadding", (intptr_t) M_arc_graphics_g2d_PixmapPacker_setPadding_int, VTABLE_arc_graphics_g2d_PixmapPacker_setPadding_int, "(I)V", 1 },
	{ "getDuplicateBorder", (intptr_t) M_arc_graphics_g2d_PixmapPacker_getDuplicateBorder_R_boolean, VTABLE_arc_graphics_g2d_PixmapPacker_getDuplicateBorder_R_boolean, "()Z", 1 },
	{ "setDuplicateBorder", (intptr_t) M_arc_graphics_g2d_PixmapPacker_setDuplicateBorder_boolean, VTABLE_arc_graphics_g2d_PixmapPacker_setDuplicateBorder_boolean, "(Z)V", 1 },
	{ "getPackToTexture", (intptr_t) M_arc_graphics_g2d_PixmapPacker_getPackToTexture_R_boolean, VTABLE_arc_graphics_g2d_PixmapPacker_getPackToTexture_R_boolean, "()Z", 1 },
	{ "setPackToTexture", (intptr_t) M_arc_graphics_g2d_PixmapPacker_setPackToTexture_boolean, VTABLE_arc_graphics_g2d_PixmapPacker_setPackToTexture_boolean, "(Z)V", 1 },
	{ "getTransparentColor", (intptr_t) M_arc_graphics_g2d_PixmapPacker_getTransparentColor_R_arc_graphics_Color, VTABLE_arc_graphics_g2d_PixmapPacker_getTransparentColor_R_arc_graphics_Color, "()Larc/graphics/Color;", 1 },
	{ "setTransparentColor", (intptr_t) M_arc_graphics_g2d_PixmapPacker_setTransparentColor_arc_graphics_Color, VTABLE_arc_graphics_g2d_PixmapPacker_setTransparentColor_arc_graphics_Color, "(Larc/graphics/Color;)V", 1 },
	{ "getSplits", (intptr_t) M_arc_graphics_g2d_PixmapPacker_getSplits_arc_graphics_g2d_PixmapRegion_R_Array1_int, VTABLE_arc_graphics_g2d_PixmapPacker_getSplits_arc_graphics_g2d_PixmapRegion_R_Array1_int, "(Larc/graphics/g2d/PixmapRegion;)[I", 2 },
	{ "getPads", (intptr_t) M_arc_graphics_g2d_PixmapPacker_getPads_arc_graphics_g2d_PixmapRegion_Array1_int_R_Array1_int, VTABLE_arc_graphics_g2d_PixmapPacker_getPads_arc_graphics_g2d_PixmapRegion_Array1_int_R_Array1_int, "(Larc/graphics/g2d/PixmapRegion;[I)[I", 2 },
	{ "getSplitPoint", (intptr_t) M_arc_graphics_g2d_PixmapPacker_getSplitPoint_arc_graphics_g2d_PixmapRegion_int_int_boolean_boolean_R_int, VTABLE_arc_graphics_g2d_PixmapPacker_getSplitPoint_arc_graphics_g2d_PixmapRegion_int_int_boolean_boolean_R_int, "(Larc/graphics/g2d/PixmapRegion;IIZZ)I", 2 },
};

Class class_arc_graphics_g2d_PixmapPacker{
		.nativeName = (intptr_t) "arc/graphics/g2d/PixmapPacker",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_PixmapPacker),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_PixmapPacker,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_PixmapPacker,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_PixmapPacker,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 5,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 37,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 46,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_PixmapPacker = registerClass(&class_arc_graphics_g2d_PixmapPacker);

}
