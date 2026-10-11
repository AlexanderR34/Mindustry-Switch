#include "arc/graphics/Pixmaps.h"
#include "arc/graphics/Pixmaps.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/GLTexture.h"
#include "arc/math/geom/Vec2.h"
#include "arc/func/Intc2.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/util/Structs.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/Texture.h"
#include "arc/struct/IntSeq.h"
#include "java/nio/ByteBuffer.h"
#include "arc/graphics/g2d/PixmapRegion.h"
#include "arc/graphics/Pixmaps_invoke_arc_func_Intc2_0.h"
#include "arc/graphics/Pixmaps_invoke_arc_func_Intc2_1.h"
#include "java/lang/Object.h"
#include "arc/graphics/Pixmap.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "java/util/Arrays.h"
#include "arc/util/Tmp.h"
#include "java/lang/IllegalStateException.h"
#include "arc/graphics/Texture_TextureWrap.h"
#include "arc/math/geom/Geometry.h"

extern "C" {

jobject SF_arc_graphics_Pixmaps_offsets;
jobject SF_arc_graphics_Pixmaps_drawPixmap;
jobject SF_arc_graphics_Pixmaps_tmpArray;

void mark_arc_graphics_Pixmaps(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_Pixmaps_offsets)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Pixmaps_offsets)->clazz)->markFunction)((jobject) SF_arc_graphics_Pixmaps_offsets, mark, depth + 1);
		if (SF_arc_graphics_Pixmaps_drawPixmap)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Pixmaps_drawPixmap)->clazz)->markFunction)((jobject) SF_arc_graphics_Pixmaps_drawPixmap, mark, depth + 1);
		if (SF_arc_graphics_Pixmaps_tmpArray)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_Pixmaps_tmpArray)->clazz)->markFunction)((jobject) SF_arc_graphics_Pixmaps_tmpArray, mark, depth + 1);
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
	auto self = (arc_graphics_Pixmaps *) object;
}

void init_arc_graphics_Pixmaps(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(14);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Pixmaps_noise_int_int_R_arc_graphics_Pixmap(jcontext ctx, jint param0, jint param1) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:noise", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(20);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, (frame[0].i), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(21);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(22);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[0].i)) goto label_6;
	}
	{
	LINE_NUMBER(23);
	sp[0].o = frame[2].o;
	jint temp0 = frame[4].i;
	jint temp1 = frame[3].i;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((func_arc_graphics_Color_rand_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_rand_R_arc_graphics_Color])(ctx, sp[1].o);
	((func_arc_graphics_Pixmap_set_int_int_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	LINE_NUMBER(22);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(21);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Pixmaps_noiseTex_int_int_R_arc_graphics_Texture(jcontext ctx, jint param0, jint param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:noiseTex", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)SM_arc_graphics_Pixmaps_noise_int_int_R_arc_graphics_Pixmap(ctx, (frame[0].i), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(31);
	clinit_arc_graphics_Texture(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Texture);
	init_arc_graphics_Texture_arc_graphics_Pixmap(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(32);
	sp[0].o = frame[3].o;
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureWrap_repeat;
	((func_arc_graphics_Texture_setWrap_arc_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setWrap_arc_graphics_Texture$TextureWrap])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(33);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[2].o));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Pixmaps_flip_arc_graphics_Pixmap(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:flip", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixels;
	frame[1].o = sp[0].o;
	LINE_NUMBER(39);
	frame[2].i = ((((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width) * ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height)) * (jint(4)));
	LINE_NUMBER(40);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(41);
	frame[4].i = (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width) * (jint(4)));
	LINE_NUMBER(42);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	if ((frame[5].i) >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height)) goto label_6;
	}
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer])(ctx, (frame[1].o), (((((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height) - (frame[5].i)) - (jint(1))) * (frame[4].i)));
	LINE_NUMBER(44);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_get_Array1_byte_int_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_Array1_byte_int_int_R_java_nio_ByteBuffer])(ctx, (frame[1].o), (frame[3].o), ((frame[5].i) * (frame[4].i)), (frame[4].i));
	LINE_NUMBER(42);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_clear_R_java_nio_Buffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_clear_R_java_nio_Buffer])(ctx, (frame[1].o));
	LINE_NUMBER(47);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_Array1_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_Array1_byte_R_java_nio_ByteBuffer])(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Pixmaps_blend_arc_graphics_g2d_PixmapRegion_arc_graphics_g2d_PixmapRegion_float_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jobject param1, jfloat param2) {
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:blend", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(51);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_width), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_height));
	frame[3].o = sp[0].o;
	LINE_NUMBER(52);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(54);
	frame[6].i = (jint(0));
	}
label_4:;
	{
	if ((frame[6].i) >= ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_height)) goto label_5;
	}
	{
	LINE_NUMBER(55);
	frame[7].i = (jint(0));
	}
label_7:;
	{
	if ((frame[7].i) >= ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_width)) goto label_8;
	}
	{
	LINE_NUMBER(56);
	sp[0].o = frame[4].o;
	jint temp0 = (jint)((func_arc_graphics_g2d_PixmapRegion_getRaw_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapRegion_getRaw_int_int_R_int])(ctx, (frame[0].o), (frame[7].i), (frame[6].i));
	sp[0].o = (jobject)((func_arc_graphics_Color_set_int_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_int_R_arc_graphics_Color])(ctx, sp[0].o, temp0);
	sp[1].o = frame[5].o;
	jint temp1 = (jint)((func_arc_graphics_g2d_PixmapRegion_getRaw_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapRegion_getRaw_int_int_R_int])(ctx, (frame[1].o), (frame[7].i), (frame[6].i));
	sp[1].o = (jobject)((func_arc_graphics_Color_set_int_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_set_int_R_arc_graphics_Color])(ctx, sp[1].o, temp1);
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, (frame[2].f));
	jint temp2 = (jint)((func_arc_graphics_Color_rgba_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_rgba_R_int])(ctx, sp[0].o);
	frame[8].i = temp2;
	LINE_NUMBER(57);
	((func_arc_graphics_Pixmap_setRaw_int_int_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_Pixmap_setRaw_int_int_int])(ctx, (frame[3].o), (frame[7].i), (frame[6].i), (frame[8].i));
	LINE_NUMBER(55);
	INST_IINC(7, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(54);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Pixmaps_median_arc_graphics_Pixmap_int_double_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jint param1, jdouble param2) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:median", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].d = param2;
	{
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jdouble temp1 = frame[2].d;
	clinit_arc_graphics_Pixmaps(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Pixmaps_tmpArray;
	sp[0].o = (jobject)SM_arc_graphics_Pixmaps_median_arc_graphics_Pixmap_int_double_arc_struct_IntSeq_R_arc_graphics_Pixmap(ctx, sp[0].o, temp0, temp1, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Pixmaps_median_arc_graphics_Pixmap_int_double_arc_struct_IntSeq_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jint param1, jdouble param2, jobject param3) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:median", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].d = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(69);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height));
	frame[5].o = sp[0].o;
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_graphics_Pixmaps_invoke_arc_func_Intc2_0(ctx);
		auto proxy = (arc_graphics_Pixmaps_invoke_arc_func_Intc2_0 *) gcAlloc(ctx, &class_arc_graphics_Pixmaps_invoke_arc_func_Intc2_0);
		proxy->F_field4 = (frame[2].d);
		proxy->F_field3 = (jref) (frame[0].o);
		proxy->F_field2 = (frame[1].i);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_graphics_Pixmap_each_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_each_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Pixmaps_scale_arc_graphics_Pixmap_int_int_boolean_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jint param1, jint param2, jbool param3) {
	jtype frame[16];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:scale", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(80);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(81);
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int_int_int_boolean])(ctx, (frame[4].o), (frame[0].o), (jint(0)), (jint(0)), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height), (jint(0)), (jint(0)), (frame[1].i), (frame[2].i), (frame[3].i));
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Pixmaps_scale_arc_graphics_Pixmap_float_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:scale", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)SM_arc_graphics_Pixmaps_scale_arc_graphics_Pixmap_float_float_R_arc_graphics_Pixmap(ctx, (frame[0].o), (frame[1].f), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Pixmaps_scale_arc_graphics_Pixmap_float_float_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:scale", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(90);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, (jint(((jfloat(((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width))) * (frame[1].f)))), (jint(((jfloat(((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height))) * (frame[2].f)))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(91);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[3].o)))->F_height)) goto label_3;
	}
	{
	LINE_NUMBER(92);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	if ((frame[5].i) >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[3].o)))->F_width)) goto label_6;
	}
	{
	LINE_NUMBER(93);
	sp[0].o = frame[3].o;
	jint temp0 = frame[5].i;
	jint temp1 = frame[4].i;
	jint temp2 = (jint)((func_arc_graphics_Pixmap_getRaw_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_getRaw_int_int_R_int])(ctx, (frame[0].o), (jint(((jfloat((frame[5].i))) / (frame[1].f)))), (jint(((jfloat((frame[4].i))) / (frame[2].f)))));
	((func_arc_graphics_Pixmap_setRaw_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_setRaw_int_int_int])(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(92);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(91);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Pixmaps_outline_arc_graphics_g2d_PixmapRegion_arc_graphics_Color_int_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:outline", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)SM_arc_graphics_Pixmaps_outline_arc_graphics_g2d_PixmapRegion_arc_graphics_Color_int_int_R_arc_graphics_Pixmap(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Pixmaps_outline_arc_graphics_g2d_PixmapRegion_arc_graphics_Color_int_int_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3) {
	jtype frame[19];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:outline", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(104);
	jint temp0 = (jint)((func_arc_graphics_Color_rgba8888_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Color_rgba8888_R_int])(ctx, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(105);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, (((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_width) + ((frame[3].i) * (jint(2)))), (((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_height) + ((frame[3].i) * (jint(2)))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(106);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_pixmap;
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (frame[3].i), (frame[3].i), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_y), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_width), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_height));
	LINE_NUMBER(108);
	frame[6].i = (jint(0));
	}
label_4:;
	{
	if ((frame[6].i) >= ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_height)) goto label_5;
	}
	{
	LINE_NUMBER(109);
	frame[7].i = (jint(0));
	}
label_7:;
	{
	if ((frame[7].i) >= ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_width)) goto label_8;
	}
	{
	LINE_NUMBER(111);
	jint temp0 = (jint)((func_arc_graphics_g2d_PixmapRegion_getA_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapRegion_getA_int_int_R_int])(ctx, (frame[0].o), (frame[7].i), (frame[6].i));
	if (temp0 >= (255)) goto label_10;
	}
	{
	LINE_NUMBER(112);
	frame[8].i = (jint(0));
	LINE_NUMBER(114);
	frame[9].i = (-(frame[2].i));
	}
label_13:;
	{
	if ((frame[9].i) > (frame[2].i)) goto label_14;
	}
	{
	LINE_NUMBER(115);
	frame[10].i = (-(frame[2].i));
	}
label_16:;
	{
	if ((frame[10].i) > (frame[2].i)) goto label_17;
	}
	{
	LINE_NUMBER(116);
	jint temp0 = (jint)SM_arc_util_Structs_inBounds_int_int_int_int_R_boolean(ctx, ((frame[9].i) + (frame[7].i)), ((frame[10].i) + (frame[6].i)), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_width), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_height));
	if (temp0 == 0) goto label_19;
	}
	{
	if ((((frame[9].i) * (frame[9].i)) + ((frame[10].i) * (frame[10].i))) > ((frame[2].i) * (frame[2].i))) goto label_19;
	}
	{
	jint temp0 = (jint)((func_arc_graphics_g2d_PixmapRegion_getA_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapRegion_getA_int_int_R_int])(ctx, (frame[0].o), ((frame[9].i) + (frame[7].i)), ((frame[10].i) + (frame[6].i)));
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(117);
	frame[8].i = (jint(1));
	LINE_NUMBER(118);
	goto label_14;
	}
label_19:;
	{
	LINE_NUMBER(115);
	INST_IINC(10, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(114);
	INST_IINC(9, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(122);
	if ((frame[8].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(123);
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, (frame[5].o), ((frame[7].i) + (frame[3].i)), ((frame[6].i) + (frame[3].i)), (frame[4].i));
	}
label_10:;
	{
	LINE_NUMBER(109);
	INST_IINC(7, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(108);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Pixmaps_outline_arc_graphics_Pixmap_arc_graphics_Color_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:outline", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((func_arc_graphics_Pixmap_copy_R_arc_graphics_Pixmap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_copy_R_arc_graphics_Pixmap])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(134);
	jint temp0 = (jint)((func_arc_graphics_Color_rgba_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Color_rgba_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(136);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_height)) goto label_4;
	}
	{
	LINE_NUMBER(137);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	if ((frame[5].i) >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_width)) goto label_7;
	}
	{
	LINE_NUMBER(138);
	jint temp0 = (jint)((func_arc_graphics_Pixmap_empty_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_empty_int_int_R_boolean])(ctx, (frame[0].o), (frame[5].i), (frame[4].i));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = frame[5].i;
	jint temp1 = (frame[4].i) + (jint(1));
	LINE_NUMBER(139);
	jint temp2 = (jint)((func_arc_graphics_Pixmap_empty_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_empty_int_int_R_boolean])(ctx, sp[0].o, temp0, temp1);
	if (temp2 != 0) goto label_11;
	}
	{
	if ((frame[4].i) < (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_height) - (jint(1)))) goto label_12;
	}
label_11:;
	{
	jint temp0 = (jint)((func_arc_graphics_Pixmap_empty_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_empty_int_int_R_boolean])(ctx, (frame[0].o), (frame[5].i), ((frame[4].i) - (jint(1))));
	if (temp0 != 0) goto label_13;
	}
	INST_ILOAD(4);
	if ((--sp)->i > 0) goto label_12;
label_13:;
	{
	jint temp0 = (jint)((func_arc_graphics_Pixmap_empty_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_empty_int_int_R_boolean])(ctx, (frame[0].o), ((frame[5].i) - (jint(1))), (frame[4].i));
	if (temp0 != 0) goto label_14;
	}
	INST_ILOAD(5);
	if ((--sp)->i > 0) goto label_12;
label_14:;
	{
	jint temp0 = (jint)((func_arc_graphics_Pixmap_empty_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_empty_int_int_R_boolean])(ctx, (frame[0].o), ((frame[5].i) + (jint(1))), (frame[4].i));
	if (temp0 != 0) goto label_9;
	}
	{
	if ((frame[5].i) >= (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_width) - (jint(1)))) goto label_9;
	}
label_12:;
	{
	LINE_NUMBER(140);
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, (frame[2].o), (frame[5].i), (frame[4].i), (frame[3].i));
	}
label_9:;
	{
	LINE_NUMBER(137);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(136);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Pixmaps_zoom_arc_graphics_Pixmap_int_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jint param1) {
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:zoom", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(147);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height));
	frame[2].o = sp[0].o;
	LINE_NUMBER(148);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_width)) goto label_3;
	}
	{
	LINE_NUMBER(149);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_height)) goto label_6;
	}
	{
	LINE_NUMBER(150);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	jint temp1 = frame[4].i;
	jint temp2 = (jint)((func_arc_graphics_Pixmap_get_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_get_int_int_R_int])(ctx, (frame[0].o), (((frame[3].i) / (frame[1].i)) + ((((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_width) / (jint(2))) / (frame[1].i))), (((frame[4].i) / (frame[1].i)) + ((((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_height) / (jint(2))) / (frame[1].i))));
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(149);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(148);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Pixmaps_resize_arc_graphics_Pixmap_int_int_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:resize", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(157);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(158);
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int])(ctx, (frame[3].o), (frame[0].o), (((frame[1].i) / (jint(2))) - (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width) / (jint(2)))), (((frame[2].i) / (jint(2))) - (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height) / (jint(2)))));
	LINE_NUMBER(160);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Pixmaps_resize_arc_graphics_Pixmap_int_int_int_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:resize", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(164);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(165);
	((func_arc_graphics_Pixmap_fill_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_graphics_Pixmap_fill_int])(ctx, (frame[4].o), (frame[3].i));
	LINE_NUMBER(166);
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int])(ctx, (frame[4].o), (frame[0].o), (((frame[1].i) / (jint(2))) - (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width) / (jint(2)))), (((frame[2].i) / (jint(2))) - (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height) / (jint(2)))));
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Pixmaps_crop_arc_graphics_Pixmap_int_int_int_int_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:crop", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(172);
	jint temp0 = (jint)((func_arc_graphics_Pixmap_isDisposed_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_isDisposed_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"input is disposed."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(173);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, (frame[3].i), (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(174);
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_int_int_int_int])(ctx, (frame[5].o), (frame[0].o), (jint(0)), (jint(0)), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Pixmaps_rotate_arc_graphics_Pixmap_float_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:rotate", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(179);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(180);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width));
	frame[3].o = sp[0].o;
	LINE_NUMBER(182);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height)) goto label_4;
	}
	{
	LINE_NUMBER(183);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	if ((frame[5].i) >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width)) goto label_7;
	}
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, (frame[2].o), (((jfloat((frame[5].i))) - ((jfloat(((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width))) / (jfloat(2)))) + (jfloat(0.5f))), ((jfloat((frame[4].i))) - ((jfloat(((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height))) / (jfloat(2)))));
	LINE_NUMBER(185);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, (frame[2].o), (-(frame[1].f)));
	LINE_NUMBER(186);
	frame[6].i = (jint(((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x) + ((jfloat(((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width))) / (jfloat(2)))) + (jfloat(1,000000e-02f)))));
	LINE_NUMBER(187);
	frame[7].i = (jint(((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y) + ((jfloat(((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height))) / (jfloat(2)))) + (jfloat(1,000000e-02f)))));
	LINE_NUMBER(188);
	sp[0].o = frame[3].o;
	jint temp0 = ((frame[6].i) - (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width) / (jint(2)))) + (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[3].o)))->F_width) / (jint(2)));
	jint temp1 = ((frame[7].i) - (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height) / (jint(2)))) + (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[3].o)))->F_height) / (jint(2)));
	jint temp2 = (jint)((func_arc_graphics_Pixmap_get_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_get_int_int_R_int])(ctx, (frame[0].o), (frame[5].i), (frame[4].i));
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(183);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(182);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jbool SM_arc_graphics_Pixmaps_empty_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:empty", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(196);
	if (((frame[0].i) & (255)) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Pixmaps_huePixmap_int_int_R_arc_graphics_Pixmap(jcontext ctx, jint param0, jint param1) {
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:huePixmap", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(200);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, (frame[0].i), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(201);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(203);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[0].i)) goto label_4;
	}
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((func_arc_graphics_Color_fromHsv_float_float_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_Color_fromHsv_float_float_float_R_arc_graphics_Color])(ctx, (frame[3].o), (((jfloat((frame[4].i))) / (jfloat((frame[0].i)))) * (jfloat(360.0f))), (jfloat(1)), (jfloat(1)));
	LINE_NUMBER(205);
	jint temp0 = (jint)((func_arc_graphics_Color_rgba_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_Color_rgba_R_int])(ctx, (frame[3].o));
	frame[5].i = temp0;
	LINE_NUMBER(206);
	frame[6].i = (jint(0));
	}
label_8:;
	{
	if ((frame[6].i) >= (frame[1].i)) goto label_9;
	}
	{
	LINE_NUMBER(207);
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, (frame[2].o), (frame[4].i), (frame[6].i), (frame[5].i));
	LINE_NUMBER(206);
	INST_IINC(6, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(203);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(210);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Pixmaps_hueTexture_int_int_R_arc_graphics_Texture(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:hueTexture", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(214);
	clinit_arc_graphics_Texture(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Texture);
	sp[1].o = (jobject)SM_arc_graphics_Pixmaps_huePixmap_int_int_R_arc_graphics_Pixmap(ctx, (frame[0].i), (frame[1].i));
	init_arc_graphics_Texture_arc_graphics_Pixmap(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Pixmaps_blankPixmap_R_arc_graphics_Pixmap(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:blankPixmap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	{
	LINE_NUMBER(218);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, (jint(1)), (jint(1)));
	frame[0].o = sp[0].o;
	LINE_NUMBER(219);
	((func_arc_graphics_Pixmap_fill_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_fill_int])(ctx, (frame[0].o), (clinit_arc_graphics_Color(ctx), (jint)SF_arc_graphics_Color_whiteRgba));
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Pixmaps_blankTexture_R_arc_graphics_Texture(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:blankTexture", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	{
	LINE_NUMBER(224);
	clinit_arc_graphics_Texture(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Texture);
	sp[1].o = (jobject)SM_arc_graphics_Pixmaps_blankPixmap_R_arc_graphics_Pixmap(ctx);
	init_arc_graphics_Texture_arc_graphics_Pixmap(ctx, sp[0].o, sp[1].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(225);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureWrap_repeat;
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Texture$TextureWrap_repeat;
	((func_arc_graphics_Texture_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setWrap_arc_graphics_Texture$TextureWrap_arc_graphics_Texture$TextureWrap])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(226);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Pixmaps_blankTextureRegion_R_arc_graphics_g2d_TextureRegion(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:blankTextureRegion", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	{
	LINE_NUMBER(230);
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	sp[1].o = (jobject)SM_arc_graphics_Pixmaps_blankTexture_R_arc_graphics_Texture(ctx);
	init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Pixmaps_drawPixel_arc_graphics_Texture_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:drawPixel", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(234);
	clinit_arc_graphics_Pixmaps(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Pixmaps_drawPixmap;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(235);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, (jint(1)), (jint(1)));
	clinit_arc_graphics_Pixmaps(ctx);
	SF_arc_graphics_Pixmaps_drawPixmap = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(238);
	clinit_arc_graphics_Pixmaps(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Pixmaps_drawPixmap;
	((func_arc_graphics_Pixmap_setRaw_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_setRaw_int_int_int])(ctx, sp[0].o, (jint(0)), (jint(0)), (frame[3].i));
	LINE_NUMBER(239);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Pixmaps(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Pixmaps_drawPixmap;
	jint temp0 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, (frame[1].i), (jint(0)), (((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_width) - (jint(1))));
	jint temp1 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, (frame[2].i), (jint(0)), (((jint)((arc_graphics_GLTexture *) NULL_CHECK((frame[0].o)))->F_height) - (jint(1))));
	((func_arc_graphics_Texture_draw_arc_graphics_Pixmap_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_draw_arc_graphics_Pixmap_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	LINE_NUMBER(240);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Pixmaps_bleed_arc_graphics_Pixmap_R_arc_graphics_Pixmap(jcontext ctx, jobject param0) {
	jtype frame[19];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:bleed", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(248);
	frame[1].i = ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width);
	frame[2].i = ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height);
	LINE_NUMBER(249);
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixels;
	frame[3].o = sp[0].o;
	LINE_NUMBER(251);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(252);
	frame[5].i = (jint(0));
	}
label_7:;
	{
	if ((frame[5].i) >= (frame[1].i)) goto label_8;
	}
	{
	LINE_NUMBER(253);
	jint temp0 = (jint)((func_arc_graphics_Pixmap_empty_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_empty_int_int_R_boolean])(ctx, (frame[0].o), (frame[5].i), (frame[4].i));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(254);
	frame[6].i = (jint(0));
	frame[7].i = (jint(0));
	frame[8].i = (jint(0));
	frame[9].i = (jint(0));
	LINE_NUMBER(255);
	frame[10].i = (((frame[5].i) + ((frame[4].i) * (frame[1].i))) * (jint(4)));
	LINE_NUMBER(258);
	frame[11].i = (jint(0));
	}
label_17:;
	{
	if ((frame[11].i) >= (16)) goto label_18;
	}
	{
	LINE_NUMBER(259);
	jint temp0 = frame[5].i;
	clinit_arc_graphics_Pixmaps(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Pixmaps_offsets;
	frame[12].i = (temp0 + ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[11].i))));
	LINE_NUMBER(260);
	jint temp1 = frame[4].i;
	clinit_arc_graphics_Pixmaps(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Pixmaps_offsets;
	frame[13].i = (temp1 + ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[11].i) + (jint(1))))));
	LINE_NUMBER(261);
	frame[14].i = ((((frame[13].i) * (frame[1].i)) + (frame[12].i)) * (jint(4)));
	LINE_NUMBER(262);
	if ((frame[12].i) < 0) goto label_23;
	}
	INST_ILOAD(13);
	if ((--sp)->i < 0) goto label_23;
	{
	if ((frame[12].i) >= (frame[1].i)) goto label_23;
	}
	{
	if ((frame[13].i) >= (frame[2].i)) goto label_23;
	}
	{
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_int_R_byte) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_int_R_byte])(ctx, (frame[3].o), ((frame[14].i) + (jint(3))));
	if (temp0 == 0) goto label_23;
	}
	{
	LINE_NUMBER(263);
	jint temp0 = frame[6].i;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_get_int_R_byte) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_int_R_byte])(ctx, (frame[3].o), (frame[14].i));
	frame[6].i = (temp0 + (temp1 & (255)));
	LINE_NUMBER(264);
	jint temp2 = frame[7].i;
	jint temp3 = (jint)((func_java_nio_ByteBuffer_get_int_R_byte) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_int_R_byte])(ctx, (frame[3].o), ((frame[14].i) + (jint(1))));
	frame[7].i = (temp2 + (temp3 & (255)));
	LINE_NUMBER(265);
	jint temp4 = frame[8].i;
	jint temp5 = (jint)((func_java_nio_ByteBuffer_get_int_R_byte) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_int_R_byte])(ctx, (frame[3].o), ((frame[14].i) + (jint(2))));
	frame[8].i = (temp4 + (temp5 & (255)));
	LINE_NUMBER(266);
	INST_IINC(9, 1);
	}
label_23:;
	{
	LINE_NUMBER(258);
	INST_IINC(11, 2);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(270);
	if ((frame[9].i) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer])(ctx, (frame[3].o), (frame[10].i), (jbyte(((frame[6].i) / (frame[9].i)))));
	LINE_NUMBER(272);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer])(ctx, (frame[3].o), ((frame[10].i) + (jint(1))), (jbyte(((frame[7].i) / (frame[9].i)))));
	LINE_NUMBER(273);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer])(ctx, (frame[3].o), ((frame[10].i) + (jint(2))), (jbyte(((frame[8].i) / (frame[9].i)))));
	}
label_10:;
	{
	LINE_NUMBER(252);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(251);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(278);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Pixmaps_antialias_arc_graphics_Pixmap(jcontext ctx, jobject param0) {
	jtype frame[41];
	auto stack = &frame[33];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:antialias", 41 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(282);
	sp[0].o = (jobject)((func_arc_graphics_Pixmap_copy_R_arc_graphics_Pixmap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Pixmap_copy_R_arc_graphics_Pixmap])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(284);
	sp[0].o = (jobject) createArray(ctx, &class_int, (9));
	frame[2].o = sp[0].o;
	LINE_NUMBER(286);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_height)) goto label_4;
	}
	{
	LINE_NUMBER(287);
	frame[4].i = (jint(0));
	}
label_6:;
	{
	if ((frame[4].i) >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_width)) goto label_7;
	}
	{
	LINE_NUMBER(289);
	jint temp0 = (jint)((func_arc_graphics_Pixmap_getClamp_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Pixmap_getClamp_int_int_R_int])(ctx, (frame[1].o), ((frame[4].i) - (jint(1))), ((frame[3].i) + (jint(1))));
	frame[5].i = temp0;
	LINE_NUMBER(290);
	jint temp1 = (jint)((func_arc_graphics_Pixmap_getClamp_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Pixmap_getClamp_int_int_R_int])(ctx, (frame[1].o), (frame[4].i), ((frame[3].i) + (jint(1))));
	frame[6].i = temp1;
	LINE_NUMBER(291);
	jint temp2 = (jint)((func_arc_graphics_Pixmap_getClamp_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Pixmap_getClamp_int_int_R_int])(ctx, (frame[1].o), ((frame[4].i) + (jint(1))), ((frame[3].i) + (jint(1))));
	frame[7].i = temp2;
	LINE_NUMBER(292);
	jint temp3 = (jint)((func_arc_graphics_Pixmap_getClamp_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Pixmap_getClamp_int_int_R_int])(ctx, (frame[1].o), ((frame[4].i) - (jint(1))), (frame[3].i));
	frame[8].i = temp3;
	LINE_NUMBER(293);
	jint temp4 = (jint)((func_arc_graphics_Pixmap_getClamp_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Pixmap_getClamp_int_int_R_int])(ctx, (frame[1].o), (frame[4].i), (frame[3].i));
	frame[9].i = temp4;
	LINE_NUMBER(294);
	jint temp5 = (jint)((func_arc_graphics_Pixmap_getClamp_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Pixmap_getClamp_int_int_R_int])(ctx, (frame[1].o), ((frame[4].i) + (jint(1))), (frame[3].i));
	frame[10].i = temp5;
	LINE_NUMBER(295);
	jint temp6 = (jint)((func_arc_graphics_Pixmap_getClamp_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Pixmap_getClamp_int_int_R_int])(ctx, (frame[1].o), ((frame[4].i) - (jint(1))), ((frame[3].i) - (jint(1))));
	frame[11].i = temp6;
	LINE_NUMBER(296);
	jint temp7 = (jint)((func_arc_graphics_Pixmap_getClamp_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Pixmap_getClamp_int_int_R_int])(ctx, (frame[1].o), (frame[4].i), ((frame[3].i) - (jint(1))));
	frame[12].i = temp7;
	LINE_NUMBER(297);
	jint temp8 = (jint)((func_arc_graphics_Pixmap_getClamp_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Pixmap_getClamp_int_int_R_int])(ctx, (frame[1].o), ((frame[4].i) + (jint(1))), ((frame[3].i) - (jint(1))));
	frame[13].i = temp8;
	LINE_NUMBER(299);
	SM_java_util_Arrays_fill_Array1_int_int(ctx, (frame[2].o), (frame[9].i));
	LINE_NUMBER(301);
	if ((frame[8].i) != (frame[6].i)) goto label_19;
	}
	{
	if ((frame[8].i) == (frame[12].i)) goto label_19;
	}
	{
	if ((frame[6].i) == (frame[10].i)) goto label_19;
	}
	{
	ARRAY_ACCESS(jint, (frame[2].o), (jint(0))) = (frame[8].i);
	}
label_19:;
	{
	LINE_NUMBER(302);
	if ((frame[8].i) != (frame[6].i)) goto label_20;
	}
	{
	if ((frame[8].i) == (frame[12].i)) goto label_20;
	}
	{
	if ((frame[6].i) == (frame[10].i)) goto label_20;
	}
	{
	if ((frame[9].i) != (frame[7].i)) goto label_21;
	}
label_20:;
	{
	if ((frame[6].i) != (frame[10].i)) goto label_22;
	}
	{
	if ((frame[6].i) == (frame[8].i)) goto label_22;
	}
	{
	if ((frame[10].i) == (frame[12].i)) goto label_22;
	}
	{
	if ((frame[9].i) == (frame[5].i)) goto label_22;
	}
label_21:;
	{
	ARRAY_ACCESS(jint, (frame[2].o), (jint(1))) = (frame[6].i);
	}
label_22:;
	{
	LINE_NUMBER(303);
	if ((frame[6].i) != (frame[10].i)) goto label_23;
	}
	{
	if ((frame[6].i) == (frame[8].i)) goto label_23;
	}
	{
	if ((frame[10].i) == (frame[12].i)) goto label_23;
	}
	{
	ARRAY_ACCESS(jint, (frame[2].o), (jint(2))) = (frame[10].i);
	}
label_23:;
	{
	LINE_NUMBER(304);
	if ((frame[12].i) != (frame[8].i)) goto label_24;
	}
	{
	if ((frame[12].i) == (frame[10].i)) goto label_24;
	}
	{
	if ((frame[8].i) == (frame[6].i)) goto label_24;
	}
	{
	if ((frame[9].i) != (frame[5].i)) goto label_25;
	}
label_24:;
	{
	if ((frame[8].i) != (frame[6].i)) goto label_26;
	}
	{
	if ((frame[8].i) == (frame[12].i)) goto label_26;
	}
	{
	if ((frame[6].i) == (frame[10].i)) goto label_26;
	}
	{
	if ((frame[9].i) == (frame[11].i)) goto label_26;
	}
label_25:;
	{
	ARRAY_ACCESS(jint, (frame[2].o), (jint(3))) = (frame[8].i);
	}
label_26:;
	{
	LINE_NUMBER(305);
	if ((frame[6].i) != (frame[10].i)) goto label_27;
	}
	{
	if ((frame[6].i) == (frame[8].i)) goto label_27;
	}
	{
	if ((frame[10].i) == (frame[12].i)) goto label_27;
	}
	{
	if ((frame[9].i) != (frame[13].i)) goto label_28;
	}
label_27:;
	{
	if ((frame[10].i) != (frame[12].i)) goto label_29;
	}
	{
	if ((frame[10].i) == (frame[6].i)) goto label_29;
	}
	{
	if ((frame[12].i) == (frame[8].i)) goto label_29;
	}
	{
	if ((frame[9].i) == (frame[7].i)) goto label_29;
	}
label_28:;
	{
	ARRAY_ACCESS(jint, (frame[2].o), (jint(5))) = (frame[10].i);
	}
label_29:;
	{
	LINE_NUMBER(306);
	if ((frame[12].i) != (frame[8].i)) goto label_30;
	}
	{
	if ((frame[12].i) == (frame[10].i)) goto label_30;
	}
	{
	if ((frame[8].i) == (frame[6].i)) goto label_30;
	}
	{
	ARRAY_ACCESS(jint, (frame[2].o), (6)) = (frame[8].i);
	}
label_30:;
	{
	LINE_NUMBER(307);
	if ((frame[10].i) != (frame[12].i)) goto label_31;
	}
	{
	if ((frame[10].i) == (frame[6].i)) goto label_31;
	}
	{
	if ((frame[12].i) == (frame[8].i)) goto label_31;
	}
	{
	if ((frame[9].i) != (frame[11].i)) goto label_32;
	}
label_31:;
	{
	if ((frame[12].i) != (frame[8].i)) goto label_33;
	}
	{
	if ((frame[12].i) == (frame[10].i)) goto label_33;
	}
	{
	if ((frame[8].i) == (frame[6].i)) goto label_33;
	}
	{
	if ((frame[9].i) == (frame[13].i)) goto label_33;
	}
label_32:;
	{
	ARRAY_ACCESS(jint, (frame[2].o), (7)) = (frame[12].i);
	}
label_33:;
	{
	LINE_NUMBER(308);
	if ((frame[10].i) != (frame[12].i)) goto label_34;
	}
	{
	if ((frame[10].i) == (frame[6].i)) goto label_34;
	}
	{
	if ((frame[12].i) == (frame[8].i)) goto label_34;
	}
	{
	ARRAY_ACCESS(jint, (frame[2].o), (8)) = (frame[10].i);
	}
label_34:;
	{
	LINE_NUMBER(310);
	frame[14].f = (jfloat(0));
	frame[15].f = (jfloat(0));
	frame[16].f = (jfloat(0));
	frame[17].f = (jfloat(0));
	LINE_NUMBER(312);
	frame[18].o = (frame[2].o);
	frame[19].i = (((jarray) nullCheck(ctx, (frame[18].o)))->length);
	frame[20].i = (jint(0));
	}
label_39:;
	{
	if ((frame[20].i) >= (frame[19].i)) goto label_40;
	}
	{
	frame[21].i = ((jint)ARRAY_ACCESS(jint, (frame[18].o), (frame[20].i)));
	LINE_NUMBER(313);
	frame[22].f = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[21].i) & (jint(-16777216)))) >> (24))))) / (jfloat(255.0f)));
	LINE_NUMBER(314);
	frame[23].f = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[21].i) & (jint(16711680)))) >> (16))))) / (jfloat(255.0f)));
	LINE_NUMBER(315);
	frame[24].f = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[21].i) & (jint(65280)))) >> (8))))) / (jfloat(255.0f)));
	LINE_NUMBER(316);
	frame[25].f = ((jfloat(((frame[21].i) & (255)))) / (jfloat(255.0f)));
	LINE_NUMBER(318);
	frame[14].f = ((frame[14].f) + ((frame[22].f) * (frame[25].f)));
	LINE_NUMBER(319);
	frame[15].f = ((frame[15].f) + ((frame[23].f) * (frame[25].f)));
	LINE_NUMBER(320);
	frame[16].f = ((frame[16].f) + ((frame[24].f) * (frame[25].f)));
	LINE_NUMBER(321);
	frame[17].f = ((frame[17].f) + (frame[25].f));
	LINE_NUMBER(312);
	INST_IINC(20, 1);
	goto label_39;
	}
label_40:;
	{
	LINE_NUMBER(324);
	if ((floatCompare((frame[17].f), (jfloat(1,000000e-03f)), 1)) > 0) goto label_50;
	}
	INST_FCONST(0);
	goto label_51;
label_50:;
	{
	jfloat temp0 = (jfloat(1)) / (frame[17].f);
	sp[0].f = temp0;
	sp += 1;
	}
label_51:;
	{
	sp -= 1;
	frame[18].f = sp[0].f;
	LINE_NUMBER(325);
	frame[14].f = ((frame[14].f) * (frame[18].f));
	LINE_NUMBER(326);
	frame[15].f = ((frame[15].f) * (frame[18].f));
	LINE_NUMBER(327);
	frame[16].f = ((frame[16].f) * (frame[18].f));
	LINE_NUMBER(329);
	frame[19].f = (jfloat(0));
	LINE_NUMBER(330);
	frame[20].f = (jfloat(0));
	frame[21].f = (jfloat(0));
	frame[22].f = (jfloat(0));
	frame[23].f = (jfloat(0));
	LINE_NUMBER(332);
	frame[24].o = (frame[2].o);
	frame[25].i = (((jarray) nullCheck(ctx, (frame[24].o)))->length);
	frame[26].i = (jint(0));
	}
label_61:;
	{
	if ((frame[26].i) >= (frame[25].i)) goto label_62;
	}
	{
	frame[27].i = ((jint)ARRAY_ACCESS(jint, (frame[24].o), (frame[26].i)));
	LINE_NUMBER(333);
	frame[28].f = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[27].i) & (jint(-16777216)))) >> (24))))) / (jfloat(255.0f)));
	LINE_NUMBER(334);
	frame[29].f = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[27].i) & (jint(16711680)))) >> (16))))) / (jfloat(255.0f)));
	LINE_NUMBER(335);
	frame[30].f = ((jfloat((bit_cast<jint>(bit_cast<uint32_t>(((frame[27].i) & (jint(65280)))) >> (8))))) / (jfloat(255.0f)));
	LINE_NUMBER(336);
	frame[31].f = ((jfloat(((frame[27].i) & (255)))) / (jfloat(255.0f)));
	LINE_NUMBER(338);
	frame[32].f = ((jfloat(1)) - (frame[31].f));
	LINE_NUMBER(340);
	frame[28].f = ((frame[28].f) + ((frame[32].f) * ((frame[14].f) - (frame[28].f))));
	LINE_NUMBER(341);
	frame[29].f = ((frame[29].f) + ((frame[32].f) * ((frame[15].f) - (frame[29].f))));
	LINE_NUMBER(342);
	frame[30].f = ((frame[30].f) + ((frame[32].f) * ((frame[16].f) - (frame[30].f))));
	LINE_NUMBER(344);
	frame[20].f = ((frame[20].f) + (frame[28].f));
	LINE_NUMBER(345);
	frame[21].f = ((frame[21].f) + (frame[29].f));
	LINE_NUMBER(346);
	frame[22].f = ((frame[22].f) + (frame[30].f));
	LINE_NUMBER(347);
	frame[23].f = ((frame[23].f) + (frame[31].f));
	LINE_NUMBER(348);
	frame[19].f = ((frame[19].f) + (jfloat(1)));
	LINE_NUMBER(332);
	INST_IINC(26, 1);
	goto label_61;
	}
label_62:;
	{
	LINE_NUMBER(351);
	frame[18].f = ((jfloat(1)) / (frame[19].f));
	LINE_NUMBER(352);
	sp[0].o = frame[0].o;
	jint temp0 = frame[4].i;
	jint temp1 = frame[3].i;
	jint temp2 = (jint)SM_arc_graphics_Color_rgba8888_float_float_float_float_R_int(ctx, ((frame[20].f) * (frame[18].f)), ((frame[21].f) * (frame[18].f)), ((frame[22].f) * (frame[18].f)), ((frame[23].f) * (frame[18].f)));
	((func_arc_graphics_Pixmap_setRaw_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_setRaw_int_int_int])(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(287);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(286);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(356);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[1].o));
	LINE_NUMBER(357);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_Pixmaps_bleed_arc_graphics_Pixmap_int_R_arc_graphics_Pixmap(jcontext ctx, jobject param0, jint param1) {
	jtype frame[28];
	auto stack = &frame[24];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:bleed", 28 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(364);
	frame[2].i = (((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width) * ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height));
	LINE_NUMBER(365);
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixels;
	frame[3].o = sp[0].o;
	LINE_NUMBER(367);
	sp[0].o = (jobject) createArray(ctx, &class_boolean, (frame[2].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(368);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[2].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(369);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[2].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(370);
	frame[7].i = (jint(0));
	frame[8].i = (jint(0));
	LINE_NUMBER(372);
	frame[9].i = (jint(0));
	}
label_8:;
	{
	if ((frame[9].i) >= (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(373);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_int_R_byte) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_int_R_byte])(ctx, (frame[3].o), (((frame[9].i) * (jint(4))) + (jint(3))));
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(374);
	sp[0].o = frame[5].o;
	jint temp0 = frame[7].i;
	INST_IINC(7, 1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (frame[9].i);
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(376);
	ARRAY_ACCESS(jbyte, (frame[4].o), (frame[9].i)) = (jint(1));
	}
label_13:;
	{
	LINE_NUMBER(372);
	INST_IINC(9, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(380);
	frame[9].i = (jint(0));
	LINE_NUMBER(381);
	frame[10].i = (jint(-1));
	}
label_15:;
	{
	LINE_NUMBER(382);
	if ((frame[7].i) <= 0) goto label_16;
	}
	{
	if ((frame[7].i) == (frame[10].i)) goto label_16;
	}
	{
	if ((frame[9].i) >= (frame[1].i)) goto label_16;
	}
	{
	LINE_NUMBER(383);
	frame[10].i = (frame[7].i);
	LINE_NUMBER(384);
	frame[11].i = (jint(0));
	}
label_19:;
	{
	LINE_NUMBER(386);
	if ((frame[11].i) >= (frame[7].i)) goto label_20;
	}
	{
	LINE_NUMBER(387);
	sp[0].o = frame[5].o;
	jint temp0 = frame[11].i;
	INST_IINC(11, 1);
	frame[12].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, temp0));
	LINE_NUMBER(388);
	frame[13].i = ((frame[12].i) % ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width));
	LINE_NUMBER(389);
	frame[14].i = ((frame[12].i) / ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width));
	LINE_NUMBER(390);
	frame[15].i = (jint(0));
	frame[16].i = (jint(0));
	frame[17].i = (jint(0));
	LINE_NUMBER(391);
	frame[18].i = (jint(0));
	LINE_NUMBER(393);
	frame[19].i = (jint(0));
	}
label_29:;
	{
	if ((frame[19].i) >= (16)) goto label_30;
	}
	{
	LINE_NUMBER(394);
	jint temp0 = frame[13].i;
	clinit_arc_graphics_Pixmaps(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Pixmaps_offsets;
	frame[20].i = (temp0 + ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[19].i))));
	LINE_NUMBER(395);
	jint temp1 = frame[14].i;
	clinit_arc_graphics_Pixmaps(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Pixmaps_offsets;
	frame[21].i = (temp1 + ((jint)ARRAY_ACCESS(jint, sp[0].o, ((frame[19].i) + (jint(1))))));
	LINE_NUMBER(397);
	if ((frame[20].i) < 0) goto label_34;
	}
	{
	if ((frame[20].i) >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width)) goto label_34;
	}
	INST_ILOAD(21);
	if ((--sp)->i < 0) goto label_34;
	{
	if ((frame[21].i) < ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_height)) goto label_35;
	}
	goto label_34;
label_35:;
	{
	LINE_NUMBER(399);
	frame[22].i = (((frame[21].i) * ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_width)) + (frame[20].i));
	LINE_NUMBER(400);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[4].o), (frame[22].i))) == 0) goto label_34;
	}
	{
	LINE_NUMBER(401);
	frame[23].i = ((frame[22].i) * (jint(4)));
	LINE_NUMBER(402);
	jint temp0 = frame[15].i;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_get_int_R_byte) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_int_R_byte])(ctx, (frame[3].o), (frame[23].i));
	frame[15].i = (temp0 + (temp1 & (255)));
	LINE_NUMBER(403);
	jint temp2 = frame[16].i;
	jint temp3 = (jint)((func_java_nio_ByteBuffer_get_int_R_byte) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_int_R_byte])(ctx, (frame[3].o), ((frame[23].i) + (jint(1))));
	frame[16].i = (temp2 + (temp3 & (255)));
	LINE_NUMBER(404);
	jint temp4 = frame[17].i;
	jint temp5 = (jint)((func_java_nio_ByteBuffer_get_int_R_byte) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_int_R_byte])(ctx, (frame[3].o), ((frame[23].i) + (jint(2))));
	frame[17].i = (temp4 + (temp5 & (255)));
	LINE_NUMBER(405);
	INST_IINC(18, 1);
	}
label_34:;
	{
	LINE_NUMBER(393);
	INST_IINC(19, 2);
	goto label_29;
	}
label_30:;
	{
	LINE_NUMBER(409);
	if ((frame[18].i) == 0) goto label_42;
	}
	{
	LINE_NUMBER(410);
	frame[19].i = ((frame[12].i) * (jint(4)));
	LINE_NUMBER(411);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer])(ctx, (frame[3].o), (frame[19].i), (jbyte(((frame[15].i) / (frame[18].i)))));
	LINE_NUMBER(412);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer])(ctx, (frame[3].o), ((frame[19].i) + (jint(1))), (jbyte(((frame[16].i) / (frame[18].i)))));
	LINE_NUMBER(413);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer])(ctx, (frame[3].o), ((frame[19].i) + (jint(2))), (jbyte(((frame[17].i) / (frame[18].i)))));
	LINE_NUMBER(415);
	INST_IINC(11, -1);
	LINE_NUMBER(416);
	frame[20].i = ((jint)ARRAY_ACCESS(jint, (frame[5].o), (frame[11].i)));
	LINE_NUMBER(417);
	INST_IINC(7, -1);
	LINE_NUMBER(418);
	ARRAY_ACCESS(jint, (frame[5].o), (frame[11].i)) = ((jint)ARRAY_ACCESS(jint, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(419);
	ARRAY_ACCESS(jint, (frame[6].o), (frame[8].i)) = (frame[20].i);
	LINE_NUMBER(420);
	INST_IINC(8, 1);
	}
label_42:;
	LINE_NUMBER(422);
	goto label_19;
label_20:;
	{
	LINE_NUMBER(424);
	frame[12].i = (jint(0));
	}
label_53:;
	{
	if ((frame[12].i) >= (frame[8].i)) goto label_54;
	}
	{
	LINE_NUMBER(425);
	ARRAY_ACCESS(jbyte, (frame[4].o), ((jint)ARRAY_ACCESS(jint, (frame[6].o), (frame[12].i)))) = (jint(1));
	LINE_NUMBER(424);
	INST_IINC(12, 1);
	goto label_53;
	}
label_54:;
	{
	LINE_NUMBER(427);
	frame[8].i = (jint(0));
	LINE_NUMBER(428);
	INST_IINC(9, 1);
	LINE_NUMBER(429);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(431);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Pixmaps_lambda$median$0_arc_struct_IntSeq_arc_graphics_Pixmap_int_arc_graphics_Pixmap_double_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3, jdouble param4, jint param5, jint param6) {
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:lambda$median$0", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].d = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(71);
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, (frame[0].o));
	LINE_NUMBER(72);
	jint temp0 = frame[6].i;
	jint temp1 = frame[7].i;
	jint temp2 = (jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_width;
	jint temp3 = (jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_height;
	jint temp4 = frame[2].i;
	{ /* InvokeDynamic */
		clinit_arc_graphics_Pixmaps_invoke_arc_func_Intc2_1(ctx);
		auto proxy = (arc_graphics_Pixmaps_invoke_arc_func_Intc2_1 *) gcAlloc(ctx, &class_arc_graphics_Pixmaps_invoke_arc_func_Intc2_1);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_math_geom_Geometry_circle_int_int_int_int_int_arc_func_Intc2(ctx, temp0, temp1, temp2, temp3, temp4, sp[0].o);
	LINE_NUMBER(73);
	((func_arc_struct_IntSeq_sort) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_IntSeq_sort])(ctx, (frame[0].o));
	LINE_NUMBER(74);
	sp[0].o = frame[1].o;
	jint temp5 = frame[6].i;
	jint temp6 = frame[7].i;
	sp[1].o = frame[0].o;
	jint temp7 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, (jint(((jdouble(((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size))) * (frame[4].d)))), (jint(0)), (((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1))));
	jint temp8 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[1].o, temp7);
	((func_arc_graphics_Pixmap_setRaw_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_setRaw_int_int_int])(ctx, sp[0].o, temp5, temp6, temp8);
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_Pixmaps_lambda$median$1_arc_struct_IntSeq_arc_graphics_Pixmap_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:lambda$median$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_arc_graphics_Pixmap_get_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Pixmap_get_int_int_R_int])(ctx, (frame[1].o), (frame[2].i), (frame[3].i));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_arc_graphics_Pixmaps(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/Pixmaps:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_Pixmaps(ctx);
	{
	LINE_NUMBER(15);
	sp[0].o = (jobject) createArray(ctx, &class_int, (16));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (jint(-1));
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (8)) = (jint(-1));
	ARRAY_ACCESS(jint, sp[0].o, (9)) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (10)) = (jint(-1));
	ARRAY_ACCESS(jint, sp[0].o, (11)) = (jint(-1));
	ARRAY_ACCESS(jint, sp[0].o, (12)) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (13)) = (jint(-1));
	ARRAY_ACCESS(jint, sp[0].o, (14)) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (15)) = (jint(-1));
	clinit_arc_graphics_Pixmaps(ctx);
	SF_arc_graphics_Pixmaps_offsets = sp[0].o;
	LINE_NUMBER(17);
	clinit_arc_struct_IntSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[0].o);
	clinit_arc_graphics_Pixmaps(ctx);
	SF_arc_graphics_Pixmaps_tmpArray = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_Pixmaps[] {
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
};

static FieldMetadata fields[] {
	{ "offsets", getArrayClass(&class_int, 1), (intptr_t) &SF_arc_graphics_Pixmaps_offsets, "[I", 26 },
	{ "drawPixmap", &class_arc_graphics_Pixmap, (intptr_t) &SF_arc_graphics_Pixmaps_drawPixmap, "Larc/graphics/Pixmap;", 10 },
	{ "tmpArray", &class_arc_struct_IntSeq, (intptr_t) &SF_arc_graphics_Pixmaps_tmpArray, "Larc/struct/IntSeq;", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_Pixmaps, 0, "()V", 1 },
	{ "noise", (intptr_t) SM_arc_graphics_Pixmaps_noise_int_int_R_arc_graphics_Pixmap, 0, "(II)Larc/graphics/Pixmap;", 9 },
	{ "noiseTex", (intptr_t) SM_arc_graphics_Pixmaps_noiseTex_int_int_R_arc_graphics_Texture, 0, "(II)Larc/graphics/Texture;", 9 },
	{ "flip", (intptr_t) SM_arc_graphics_Pixmaps_flip_arc_graphics_Pixmap, 0, "(Larc/graphics/Pixmap;)V", 9 },
	{ "blend", (intptr_t) SM_arc_graphics_Pixmaps_blend_arc_graphics_g2d_PixmapRegion_arc_graphics_g2d_PixmapRegion_float_R_arc_graphics_Pixmap, 0, "(Larc/graphics/g2d/PixmapRegion;Larc/graphics/g2d/PixmapRegion;F)Larc/graphics/Pixmap;", 9 },
	{ "median", (intptr_t) SM_arc_graphics_Pixmaps_median_arc_graphics_Pixmap_int_double_R_arc_graphics_Pixmap, 0, "(Larc/graphics/Pixmap;ID)Larc/graphics/Pixmap;", 9 },
	{ "median", (intptr_t) SM_arc_graphics_Pixmaps_median_arc_graphics_Pixmap_int_double_arc_struct_IntSeq_R_arc_graphics_Pixmap, 0, "(Larc/graphics/Pixmap;IDLarc/struct/IntSeq;)Larc/graphics/Pixmap;", 9 },
	{ "scale", (intptr_t) SM_arc_graphics_Pixmaps_scale_arc_graphics_Pixmap_int_int_boolean_R_arc_graphics_Pixmap, 0, "(Larc/graphics/Pixmap;IIZ)Larc/graphics/Pixmap;", 9 },
	{ "scale", (intptr_t) SM_arc_graphics_Pixmaps_scale_arc_graphics_Pixmap_float_R_arc_graphics_Pixmap, 0, "(Larc/graphics/Pixmap;F)Larc/graphics/Pixmap;", 9 },
	{ "scale", (intptr_t) SM_arc_graphics_Pixmaps_scale_arc_graphics_Pixmap_float_float_R_arc_graphics_Pixmap, 0, "(Larc/graphics/Pixmap;FF)Larc/graphics/Pixmap;", 9 },
	{ "outline", (intptr_t) SM_arc_graphics_Pixmaps_outline_arc_graphics_g2d_PixmapRegion_arc_graphics_Color_int_R_arc_graphics_Pixmap, 0, "(Larc/graphics/g2d/PixmapRegion;Larc/graphics/Color;I)Larc/graphics/Pixmap;", 9 },
	{ "outline", (intptr_t) SM_arc_graphics_Pixmaps_outline_arc_graphics_g2d_PixmapRegion_arc_graphics_Color_int_int_R_arc_graphics_Pixmap, 0, "(Larc/graphics/g2d/PixmapRegion;Larc/graphics/Color;II)Larc/graphics/Pixmap;", 9 },
	{ "outline", (intptr_t) SM_arc_graphics_Pixmaps_outline_arc_graphics_Pixmap_arc_graphics_Color_R_arc_graphics_Pixmap, 0, "(Larc/graphics/Pixmap;Larc/graphics/Color;)Larc/graphics/Pixmap;", 9 },
	{ "zoom", (intptr_t) SM_arc_graphics_Pixmaps_zoom_arc_graphics_Pixmap_int_R_arc_graphics_Pixmap, 0, "(Larc/graphics/Pixmap;I)Larc/graphics/Pixmap;", 9 },
	{ "resize", (intptr_t) SM_arc_graphics_Pixmaps_resize_arc_graphics_Pixmap_int_int_R_arc_graphics_Pixmap, 0, "(Larc/graphics/Pixmap;II)Larc/graphics/Pixmap;", 9 },
	{ "resize", (intptr_t) SM_arc_graphics_Pixmaps_resize_arc_graphics_Pixmap_int_int_int_R_arc_graphics_Pixmap, 0, "(Larc/graphics/Pixmap;III)Larc/graphics/Pixmap;", 9 },
	{ "crop", (intptr_t) SM_arc_graphics_Pixmaps_crop_arc_graphics_Pixmap_int_int_int_int_R_arc_graphics_Pixmap, 0, "(Larc/graphics/Pixmap;IIII)Larc/graphics/Pixmap;", 9 },
	{ "rotate", (intptr_t) SM_arc_graphics_Pixmaps_rotate_arc_graphics_Pixmap_float_R_arc_graphics_Pixmap, 0, "(Larc/graphics/Pixmap;F)Larc/graphics/Pixmap;", 9 },
	{ "empty", (intptr_t) SM_arc_graphics_Pixmaps_empty_int_R_boolean, 0, "(I)Z", 9 },
	{ "huePixmap", (intptr_t) SM_arc_graphics_Pixmaps_huePixmap_int_int_R_arc_graphics_Pixmap, 0, "(II)Larc/graphics/Pixmap;", 9 },
	{ "hueTexture", (intptr_t) SM_arc_graphics_Pixmaps_hueTexture_int_int_R_arc_graphics_Texture, 0, "(II)Larc/graphics/Texture;", 9 },
	{ "blankPixmap", (intptr_t) SM_arc_graphics_Pixmaps_blankPixmap_R_arc_graphics_Pixmap, 0, "()Larc/graphics/Pixmap;", 9 },
	{ "blankTexture", (intptr_t) SM_arc_graphics_Pixmaps_blankTexture_R_arc_graphics_Texture, 0, "()Larc/graphics/Texture;", 9 },
	{ "blankTextureRegion", (intptr_t) SM_arc_graphics_Pixmaps_blankTextureRegion_R_arc_graphics_g2d_TextureRegion, 0, "()Larc/graphics/g2d/TextureRegion;", 9 },
	{ "drawPixel", (intptr_t) SM_arc_graphics_Pixmaps_drawPixel_arc_graphics_Texture_int_int_int, 0, "(Larc/graphics/Texture;III)V", 9 },
	{ "bleed", (intptr_t) SM_arc_graphics_Pixmaps_bleed_arc_graphics_Pixmap_R_arc_graphics_Pixmap, 0, "(Larc/graphics/Pixmap;)Larc/graphics/Pixmap;", 9 },
	{ "antialias", (intptr_t) SM_arc_graphics_Pixmaps_antialias_arc_graphics_Pixmap, 0, "(Larc/graphics/Pixmap;)V", 9 },
	{ "bleed", (intptr_t) SM_arc_graphics_Pixmaps_bleed_arc_graphics_Pixmap_int_R_arc_graphics_Pixmap, 0, "(Larc/graphics/Pixmap;I)Larc/graphics/Pixmap;", 9 },
	{ "lambda$median$0", (intptr_t) SM_arc_graphics_Pixmaps_lambda$median$0_arc_struct_IntSeq_arc_graphics_Pixmap_int_arc_graphics_Pixmap_double_int_int, 0, "(Larc/struct/IntSeq;Larc/graphics/Pixmap;ILarc/graphics/Pixmap;DII)V", 4106 },
	{ "lambda$median$1", (intptr_t) SM_arc_graphics_Pixmaps_lambda$median$1_arc_struct_IntSeq_arc_graphics_Pixmap_int_int, 0, "(Larc/struct/IntSeq;Larc/graphics/Pixmap;II)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_graphics_Pixmaps, 0, "()V", 8 },
};

Class class_arc_graphics_Pixmaps{
		.nativeName = (intptr_t) "arc/graphics/Pixmaps",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_Pixmaps),
		.classVtable = (intptr_t) vtable_arc_graphics_Pixmaps,
		.staticInitializer = (intptr_t) clinit_arc_graphics_Pixmaps,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_Pixmaps,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 31,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_Pixmaps = registerClass(&class_arc_graphics_Pixmaps);

}
