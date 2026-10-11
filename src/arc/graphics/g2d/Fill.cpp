#include "arc/graphics/g2d/Fill.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/Core.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/math/Angles.h"
#include "arc/graphics/g2d/Batch.h"
#include "arc/math/geom/Rect.h"
#include "arc/struct/FloatSeq.h"
#include "arc/graphics/Texture.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Fill.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/math/geom/Circle.h"
#include "arc/math/geom/Polygon.h"

extern "C" {

jobject SF_arc_graphics_g2d_Fill_vertices;
jobject SF_arc_graphics_g2d_Fill_circleRegion;
jobject SF_arc_graphics_g2d_Fill_polyFloats;

void mark_arc_graphics_g2d_Fill(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_g2d_Fill_vertices)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Fill_vertices)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Fill_vertices, mark, depth + 1);
		if (SF_arc_graphics_g2d_Fill_circleRegion)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Fill_circleRegion)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Fill_circleRegion, mark, depth + 1);
		if (SF_arc_graphics_g2d_Fill_polyFloats)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Fill_polyFloats)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Fill_polyFloats, mark, depth + 1);
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
	auto self = (arc_graphics_g2d_Fill *) object;
}

void init_arc_graphics_g2d_Fill(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_quad_float_float_float_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	jtype frame[21];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:quad", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	{
	LINE_NUMBER(17);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_Batch_getPackedColor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_getPackedColor_R_float])(ctx, sp[0].o);
	frame[8].f = temp0;
	LINE_NUMBER(18);
	SM_arc_graphics_g2d_Fill_quad_float_float_float_float_float_float_float_float_float_float_float_float(ctx, (frame[0].f), (frame[1].f), (frame[8].f), (frame[2].f), (frame[3].f), (frame[8].f), (frame[4].f), (frame[5].f), (frame[8].f), (frame[6].f), (frame[7].f), (frame[8].f));
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_quad_float_float_float_float_float_float_float_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9, jfloat param10, jfloat param11) {
	jtype frame[20];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:quad", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	frame[8].f = param8;
	frame[9].f = param9;
	frame[10].f = param10;
	frame[11].f = param11;
	{
	LINE_NUMBER(22);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_white_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_white_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o);
	frame[12].o = sp[0].o;
	LINE_NUMBER(23);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_Batch_getPackedMixColor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_getPackedMixColor_R_float])(ctx, sp[0].o);
	frame[13].f = temp0;
	LINE_NUMBER(24);
	frame[14].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[12].o)))->F_u);
	LINE_NUMBER(25);
	frame[15].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[12].o)))->F_v);
	LINE_NUMBER(26);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[0].f);
	LINE_NUMBER(27);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (frame[1].f);
	LINE_NUMBER(28);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (frame[2].f);
	LINE_NUMBER(29);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (frame[14].f);
	LINE_NUMBER(30);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (frame[15].f);
	LINE_NUMBER(31);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (frame[13].f);
	LINE_NUMBER(33);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (frame[3].f);
	LINE_NUMBER(34);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (frame[4].f);
	LINE_NUMBER(35);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (frame[5].f);
	LINE_NUMBER(36);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (frame[14].f);
	LINE_NUMBER(37);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (frame[15].f);
	LINE_NUMBER(38);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (frame[13].f);
	LINE_NUMBER(40);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (frame[6].f);
	LINE_NUMBER(41);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (frame[7].f);
	LINE_NUMBER(42);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (frame[8].f);
	LINE_NUMBER(43);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (frame[14].f);
	LINE_NUMBER(44);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (16)) = (frame[15].f);
	LINE_NUMBER(45);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (17)) = (frame[13].f);
	LINE_NUMBER(47);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (18)) = (frame[9].f);
	LINE_NUMBER(48);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (19)) = (frame[10].f);
	LINE_NUMBER(49);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (20)) = (frame[11].f);
	LINE_NUMBER(50);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (21)) = (frame[14].f);
	LINE_NUMBER(51);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (22)) = (frame[15].f);
	LINE_NUMBER(52);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (23)) = (frame[13].f);
	LINE_NUMBER(54);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[12].o)))->F_texture;
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	jint temp1 = jint(0);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[2].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	SM_arc_graphics_g2d_Draw_vert_arc_graphics_Texture_Array1_float_int_int(ctx, sp[0].o, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_quad_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8) {
	jtype frame[23];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:quad", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	frame[8].f = param8;
	{
	LINE_NUMBER(58);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_Batch_getPackedColor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_getPackedColor_R_float])(ctx, sp[0].o);
	frame[9].f = temp0;
	LINE_NUMBER(59);
	SM_arc_graphics_g2d_Fill_quad_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float_float_float_float_float(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[9].f), (frame[3].f), (frame[4].f), (frame[9].f), (frame[5].f), (frame[6].f), (frame[9].f), (frame[7].f), (frame[8].f), (frame[9].f));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_quad_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9, jfloat param10, jfloat param11, jfloat param12) {
	jtype frame[34];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:quad", 34 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	frame[8].f = param8;
	frame[9].f = param9;
	frame[10].f = param10;
	frame[11].f = param11;
	frame[12].f = param12;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_texture;
	SM_arc_graphics_g2d_Fill_quad_arc_graphics_Texture_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u), ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v), (frame[4].f), (frame[5].f), (frame[6].f), ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u), ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v2), (frame[7].f), (frame[8].f), (frame[9].f), ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u2), ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v2), (frame[10].f), (frame[11].f), (frame[12].f), ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_u2), ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[0].o)))->F_v));
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_quad_arc_graphics_Texture_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9, jfloat param10, jfloat param11, jfloat param12, jfloat param13, jfloat param14, jfloat param15, jfloat param16, jfloat param17, jfloat param18, jfloat param19, jfloat param20) {
	jtype frame[26];
	auto stack = &frame[22];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:quad", 26 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	frame[8].f = param8;
	frame[9].f = param9;
	frame[10].f = param10;
	frame[11].f = param11;
	frame[12].f = param12;
	frame[13].f = param13;
	frame[14].f = param14;
	frame[15].f = param15;
	frame[16].f = param16;
	frame[17].f = param17;
	frame[18].f = param18;
	frame[19].f = param19;
	frame[20].f = param20;
	{
	LINE_NUMBER(74);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_batch;
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_Batch_getPackedMixColor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_getPackedMixColor_R_float])(ctx, sp[0].o);
	frame[21].f = temp0;
	LINE_NUMBER(76);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[1].f);
	LINE_NUMBER(77);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (frame[2].f);
	LINE_NUMBER(78);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (frame[3].f);
	LINE_NUMBER(79);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (frame[4].f);
	LINE_NUMBER(80);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (frame[5].f);
	LINE_NUMBER(81);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (frame[21].f);
	LINE_NUMBER(83);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (frame[6].f);
	LINE_NUMBER(84);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (frame[7].f);
	LINE_NUMBER(85);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (frame[8].f);
	LINE_NUMBER(86);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (frame[9].f);
	LINE_NUMBER(87);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (frame[10].f);
	LINE_NUMBER(88);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (frame[21].f);
	LINE_NUMBER(90);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (frame[11].f);
	LINE_NUMBER(91);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (frame[12].f);
	LINE_NUMBER(92);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (frame[13].f);
	LINE_NUMBER(93);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (frame[14].f);
	LINE_NUMBER(94);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (16)) = (frame[15].f);
	LINE_NUMBER(95);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (17)) = (frame[21].f);
	LINE_NUMBER(97);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (18)) = (frame[16].f);
	LINE_NUMBER(98);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (19)) = (frame[17].f);
	LINE_NUMBER(99);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (20)) = (frame[18].f);
	LINE_NUMBER(100);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (21)) = (frame[19].f);
	LINE_NUMBER(101);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (22)) = (frame[20].f);
	LINE_NUMBER(102);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (23)) = (frame[21].f);
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	jint temp1 = jint(0);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[2].o = (jobject)SF_arc_graphics_g2d_Fill_vertices;
	SM_arc_graphics_g2d_Draw_vert_arc_graphics_Texture_Array1_float_int_int(ctx, sp[0].o, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_tri_float_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:tri", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(108);
	SM_arc_graphics_g2d_Fill_quad_float_float_float_float_float_float_float_float(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (frame[4].f), (frame[5].f));
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_dropShadowRect_float_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:dropShadowRect", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(117);
	SM_arc_graphics_g2d_Fill_dropShadow_float_float_float_float_float_float(ctx, ((frame[0].f) + ((frame[2].f) / (jfloat(2)))), ((frame[1].f) + ((frame[3].f) / (jfloat(2)))), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_dropShadow_float_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[30];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:dropShadow", 30 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(128);
	frame[6].f = (clinit_arc_graphics_Color(ctx), (jfloat)SF_arc_graphics_Color_clearFloatBits);
	LINE_NUMBER(129);
	jfloat temp0 = (jfloat)SM_arc_graphics_Color_toFloatBits_float_float_float_float_R_float(ctx, (jfloat(0)), (jfloat(0)), (jfloat(0)), (frame[5].f));
	frame[7].f = temp0;
	LINE_NUMBER(130);
	frame[8].f = ((frame[4].f) / (jfloat(2)));
	frame[9].f = (frame[4].f);
	LINE_NUMBER(132);
	jfloat temp1 = frame[0].f;
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((frame[2].f) / (jfloat(2))) - (frame[8].f)), (jfloat(0)));
	frame[10].f = (temp1 - temp2);
	jfloat temp3 = frame[1].f;
	jfloat temp4 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((frame[3].f) / (jfloat(2))) - (frame[8].f)), (jfloat(0)));
	frame[11].f = (temp3 - temp4);
	jfloat temp5 = frame[0].f;
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((frame[2].f) / (jfloat(2))) - (frame[8].f)), (jfloat(0)));
	frame[12].f = (temp5 + temp6);
	jfloat temp7 = frame[1].f;
	jfloat temp8 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((frame[3].f) / (jfloat(2))) - (frame[8].f)), (jfloat(0)));
	frame[13].f = (temp7 + temp8);
	LINE_NUMBER(133);
	frame[14].f = ((frame[10].f) - (frame[9].f));
	frame[15].f = ((frame[11].f) - (frame[9].f));
	frame[16].f = ((frame[12].f) + (frame[9].f));
	frame[17].f = ((frame[13].f) + (frame[9].f));
	LINE_NUMBER(136);
	SM_arc_graphics_g2d_Fill_quad_float_float_float_float_float_float_float_float_float_float_float_float(ctx, (frame[10].f), (frame[11].f), (frame[7].f), (frame[12].f), (frame[11].f), (frame[7].f), (frame[12].f), (frame[13].f), (frame[7].f), (frame[10].f), (frame[13].f), (frame[7].f));
	LINE_NUMBER(139);
	SM_arc_graphics_g2d_Fill_quad_float_float_float_float_float_float_float_float_float_float_float_float(ctx, (frame[10].f), (frame[11].f), (frame[7].f), (frame[14].f), (frame[15].f), (frame[6].f), (frame[16].f), (frame[15].f), (frame[6].f), (frame[12].f), (frame[11].f), (frame[7].f));
	LINE_NUMBER(147);
	SM_arc_graphics_g2d_Fill_quad_float_float_float_float_float_float_float_float_float_float_float_float(ctx, (frame[12].f), (frame[11].f), (frame[7].f), (frame[16].f), (frame[15].f), (frame[6].f), (frame[16].f), (frame[17].f), (frame[6].f), (frame[12].f), (frame[13].f), (frame[7].f));
	LINE_NUMBER(155);
	SM_arc_graphics_g2d_Fill_quad_float_float_float_float_float_float_float_float_float_float_float_float(ctx, (frame[10].f), (frame[13].f), (frame[7].f), (frame[14].f), (frame[17].f), (frame[6].f), (frame[16].f), (frame[17].f), (frame[6].f), (frame[12].f), (frame[13].f), (frame[7].f));
	LINE_NUMBER(163);
	SM_arc_graphics_g2d_Fill_quad_float_float_float_float_float_float_float_float_float_float_float_float(ctx, (frame[10].f), (frame[11].f), (frame[7].f), (frame[14].f), (frame[15].f), (frame[6].f), (frame[14].f), (frame[17].f), (frame[6].f), (frame[10].f), (frame[13].f), (frame[7].f));
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_light_float_float_int_float_arc_graphics_Color_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jint param2, jfloat param3, jobject param4, jobject param5) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:light", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(172);
	SM_arc_graphics_g2d_Fill_light_float_float_int_float_float_arc_graphics_Color_arc_graphics_Color(ctx, (frame[0].f), (frame[1].f), (frame[2].i), (frame[3].f), (jfloat(0)), (frame[4].o), (frame[5].o));
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_light_float_float_int_float_float_arc_graphics_Color_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jint param2, jfloat param3, jfloat param4, jobject param5, jobject param6) {
	jtype frame[29];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:light", 29 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(176);
	jfloat temp0 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, (frame[5].o));
	frame[7].f = temp0;
	jfloat temp1 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, (frame[6].o));
	frame[8].f = temp1;
	LINE_NUMBER(178);
	jint temp2 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, ((jfloat((frame[2].i))) / (jfloat(2))));
	frame[2].i = (temp2 * (jint(2)));
	LINE_NUMBER(180);
	frame[9].f = ((jfloat(360.0f)) / (jfloat((frame[2].i))));
	LINE_NUMBER(182);
	frame[10].i = (jint(0));
	}
label_5:;
	{
	if ((frame[10].i) >= (frame[2].i)) goto label_6;
	}
	{
	LINE_NUMBER(183);
	jfloat temp0 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (((frame[9].f) * (jfloat((frame[10].i)))) + (frame[4].f)), (frame[3].f));
	frame[11].f = temp0;
	LINE_NUMBER(184);
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (((frame[9].f) * (jfloat((frame[10].i)))) + (frame[4].f)), (frame[3].f));
	frame[12].f = temp1;
	LINE_NUMBER(185);
	jfloat temp2 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (((frame[9].f) * (jfloat(((frame[10].i) + (jint(1)))))) + (frame[4].f)), (frame[3].f));
	frame[13].f = temp2;
	LINE_NUMBER(186);
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (((frame[9].f) * (jfloat(((frame[10].i) + (jint(1)))))) + (frame[4].f)), (frame[3].f));
	frame[14].f = temp3;
	LINE_NUMBER(187);
	jfloat temp4 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (((frame[9].f) * (jfloat(((frame[10].i) + (jint(2)))))) + (frame[4].f)), (frame[3].f));
	frame[15].f = temp4;
	LINE_NUMBER(188);
	jfloat temp5 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (((frame[9].f) * (jfloat(((frame[10].i) + (jint(2)))))) + (frame[4].f)), (frame[3].f));
	frame[16].f = temp5;
	LINE_NUMBER(189);
	SM_arc_graphics_g2d_Fill_quad_float_float_float_float_float_float_float_float_float_float_float_float(ctx, (frame[0].f), (frame[1].f), (frame[7].f), ((frame[0].f) + (frame[11].f)), ((frame[1].f) + (frame[12].f)), (frame[8].f), ((frame[0].f) + (frame[13].f)), ((frame[1].f) + (frame[14].f)), (frame[8].f), ((frame[0].f) + (frame[15].f)), ((frame[1].f) + (frame[16].f)), (frame[8].f));
	LINE_NUMBER(182);
	INST_IINC(10, 2);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(191);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_lightInner_float_float_int_float_float_float_arc_graphics_Color_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jint param2, jfloat param3, jfloat param4, jfloat param5, jobject param6, jobject param7) {
	jtype frame[30];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:lightInner", 30 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(194);
	jfloat temp0 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, (frame[6].o));
	frame[8].f = temp0;
	jfloat temp1 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, (frame[7].o));
	frame[9].f = temp1;
	LINE_NUMBER(196);
	frame[10].f = ((jfloat(360.0f)) / (jfloat((frame[2].i))));
	LINE_NUMBER(198);
	frame[11].i = (jint(0));
	}
label_4:;
	{
	if ((frame[11].i) >= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(199);
	jfloat temp0 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (((frame[10].f) * (jfloat((frame[11].i)))) + (frame[5].f)), (frame[4].f));
	frame[12].f = temp0;
	LINE_NUMBER(200);
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (((frame[10].f) * (jfloat((frame[11].i)))) + (frame[5].f)), (frame[4].f));
	frame[13].f = temp1;
	LINE_NUMBER(201);
	jfloat temp2 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (((frame[10].f) * (jfloat(((frame[11].i) + (jint(1)))))) + (frame[5].f)), (frame[4].f));
	frame[14].f = temp2;
	LINE_NUMBER(202);
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (((frame[10].f) * (jfloat(((frame[11].i) + (jint(1)))))) + (frame[5].f)), (frame[4].f));
	frame[15].f = temp3;
	LINE_NUMBER(203);
	jfloat temp4 = frame[0].f;
	jfloat temp5 = ((frame[10].f) * (jfloat((frame[11].i)))) + (frame[5].f);
	jfloat temp6 = frame[3].f;
	LINE_NUMBER(204);
	jfloat temp7 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp5, temp6);
	jfloat temp8 = temp4 + temp7;
	jfloat temp9 = frame[1].f;
	jfloat temp10 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (((frame[10].f) * (jfloat((frame[11].i)))) + (frame[5].f)), (frame[3].f));
	jfloat temp11 = temp9 + temp10;
	jfloat temp12 = frame[8].f;
	jfloat temp13 = (frame[0].f) + (frame[12].f);
	jfloat temp14 = (frame[1].f) + (frame[13].f);
	jfloat temp15 = frame[9].f;
	jfloat temp16 = (frame[0].f) + (frame[14].f);
	jfloat temp17 = (frame[1].f) + (frame[15].f);
	jfloat temp18 = frame[9].f;
	jfloat temp19 = frame[0].f;
	jfloat temp20 = ((frame[10].f) * (jfloat(((frame[11].i) + (jint(1)))))) + (frame[5].f);
	jfloat temp21 = frame[3].f;
	LINE_NUMBER(207);
	jfloat temp22 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp20, temp21);
	jfloat temp23 = temp19 + temp22;
	jfloat temp24 = frame[1].f;
	jfloat temp25 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (((frame[10].f) * (jfloat(((frame[11].i) + (jint(1)))))) + (frame[5].f)), (frame[3].f));
	jfloat temp26 = temp24 + temp25;
	jfloat temp27 = frame[8].f;
	LINE_NUMBER(203);
	SM_arc_graphics_g2d_Fill_quad_float_float_float_float_float_float_float_float_float_float_float_float(ctx, temp8, temp11, temp12, temp13, temp14, temp15, temp16, temp17, temp18, temp23, temp26, temp27);
	LINE_NUMBER(198);
	INST_IINC(11, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(210);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_polyBegin(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:polyBegin", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	{
	LINE_NUMBER(213);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_polyFloats;
	((func_arc_struct_FloatSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_polyPoint_float_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:polyPoint", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(217);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_polyFloats;
	((func_arc_struct_FloatSeq_add_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float_float])(ctx, sp[0].o, (frame[0].f), (frame[1].f));
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_polyEnd(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:polyEnd", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	{
	LINE_NUMBER(221);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_polyFloats;
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_items;
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Fill_polyFloats;
	SM_arc_graphics_g2d_Fill_poly_Array1_float_int(ctx, sp[0].o, ((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(222);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_poly_arc_math_geom_Polygon(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:poly", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((func_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Polygon_getTransformedVertices_R_Array1_float])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Fill_poly_Array1_float_int(ctx, sp[0].o, (((jarray) nullCheck(ctx, sp[1].o))->length));
	LINE_NUMBER(226);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_poly_arc_struct_FloatSeq(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:poly", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	SM_arc_graphics_g2d_Fill_poly_Array1_float_int(ctx, sp[0].o, ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_poly_Array1_float_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[13];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:poly", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(233);
	if ((frame[1].i) >= (6)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(235);
	frame[2].i = (jint(2));
	}
label_2:;
	{
	if ((frame[2].i) >= ((frame[1].i) - (jint(4)))) goto label_3;
	}
	{
	LINE_NUMBER(236);
	SM_arc_graphics_g2d_Fill_quad_float_float_float_float_float_float_float_float(ctx, ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[2].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[2].i) + (jint(1))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[2].i) + (jint(2))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[2].i) + (jint(3))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[2].i) + (jint(4))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[2].i) + (jint(5))))));
	LINE_NUMBER(235);
	INST_IINC(2, 4);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(243);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_poly_float_float_int_float(jcontext ctx, jfloat param0, jfloat param1, jint param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:poly", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(246);
	SM_arc_graphics_g2d_Fill_poly_float_float_int_float_float(ctx, (frame[0].f), (frame[1].f), (frame[2].i), (frame[3].f), (jfloat(0)));
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_poly_float_float_int_float_float(jcontext ctx, jfloat param0, jfloat param1, jint param2, jfloat param3, jfloat param4) {
	jtype frame[23];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:poly", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(252);
	if ((frame[2].i) != (jint(3))) goto label_1;
	}
	{
	LINE_NUMBER(253);
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[4].f;
	jfloat temp2 = frame[3].f;
	LINE_NUMBER(254);
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp1, temp2);
	jfloat temp4 = temp0 + temp3;
	jfloat temp5 = frame[1].f;
	jfloat temp6 = frame[4].f;
	jfloat temp7 = frame[3].f;
	LINE_NUMBER(255);
	jfloat temp8 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp6, temp7);
	jfloat temp9 = temp5 + temp8;
	jfloat temp10 = frame[0].f;
	jfloat temp11 = (jfloat(120.0f)) + (frame[4].f);
	jfloat temp12 = frame[3].f;
	LINE_NUMBER(256);
	jfloat temp13 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp11, temp12);
	jfloat temp14 = temp10 + temp13;
	jfloat temp15 = frame[1].f;
	jfloat temp16 = (jfloat(120.0f)) + (frame[4].f);
	jfloat temp17 = frame[3].f;
	LINE_NUMBER(257);
	jfloat temp18 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp16, temp17);
	jfloat temp19 = temp15 + temp18;
	jfloat temp20 = frame[0].f;
	jfloat temp21 = (jfloat(240.0f)) + (frame[4].f);
	jfloat temp22 = frame[3].f;
	LINE_NUMBER(258);
	jfloat temp23 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp21, temp22);
	jfloat temp24 = temp20 + temp23;
	jfloat temp25 = frame[1].f;
	jfloat temp26 = (jfloat(240.0f)) + (frame[4].f);
	jfloat temp27 = frame[3].f;
	LINE_NUMBER(259);
	jfloat temp28 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp26, temp27);
	jfloat temp29 = temp25 + temp28;
	LINE_NUMBER(253);
	SM_arc_graphics_g2d_Fill_tri_float_float_float_float_float_float(ctx, temp4, temp9, temp14, temp19, temp24, temp29);
	goto label_10;
	}
label_1:;
	{
	LINE_NUMBER(261);
	if ((frame[2].i) != (jint(4))) goto label_11;
	}
	{
	LINE_NUMBER(262);
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[4].f;
	jfloat temp2 = frame[3].f;
	LINE_NUMBER(263);
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp1, temp2);
	jfloat temp4 = temp0 + temp3;
	jfloat temp5 = frame[1].f;
	jfloat temp6 = frame[4].f;
	jfloat temp7 = frame[3].f;
	LINE_NUMBER(264);
	jfloat temp8 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp6, temp7);
	jfloat temp9 = temp5 + temp8;
	jfloat temp10 = frame[0].f;
	jfloat temp11 = (jfloat(90.0f)) + (frame[4].f);
	jfloat temp12 = frame[3].f;
	LINE_NUMBER(265);
	jfloat temp13 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp11, temp12);
	jfloat temp14 = temp10 + temp13;
	jfloat temp15 = frame[1].f;
	jfloat temp16 = (jfloat(90.0f)) + (frame[4].f);
	jfloat temp17 = frame[3].f;
	LINE_NUMBER(266);
	jfloat temp18 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp16, temp17);
	jfloat temp19 = temp15 + temp18;
	jfloat temp20 = frame[0].f;
	jfloat temp21 = (jfloat(180.0f)) + (frame[4].f);
	jfloat temp22 = frame[3].f;
	LINE_NUMBER(267);
	jfloat temp23 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp21, temp22);
	jfloat temp24 = temp20 + temp23;
	jfloat temp25 = frame[1].f;
	jfloat temp26 = (jfloat(180.0f)) + (frame[4].f);
	jfloat temp27 = frame[3].f;
	LINE_NUMBER(268);
	jfloat temp28 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp26, temp27);
	jfloat temp29 = temp25 + temp28;
	jfloat temp30 = frame[0].f;
	jfloat temp31 = (jfloat(270.0f)) + (frame[4].f);
	jfloat temp32 = frame[3].f;
	LINE_NUMBER(269);
	jfloat temp33 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp31, temp32);
	jfloat temp34 = temp30 + temp33;
	jfloat temp35 = frame[1].f;
	jfloat temp36 = (jfloat(270.0f)) + (frame[4].f);
	jfloat temp37 = frame[3].f;
	LINE_NUMBER(270);
	jfloat temp38 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp36, temp37);
	jfloat temp39 = temp35 + temp38;
	LINE_NUMBER(262);
	SM_arc_graphics_g2d_Fill_quad_float_float_float_float_float_float_float_float(ctx, temp4, temp9, temp14, temp19, temp24, temp29, temp34, temp39);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(274);
	frame[5].f = ((jfloat(360.0f)) / (jfloat((frame[2].i))));
	LINE_NUMBER(276);
	frame[6].i = (jint(0));
	}
label_23:;
	{
	if ((frame[6].i) >= ((frame[2].i) - (jint(1)))) goto label_24;
	}
	{
	LINE_NUMBER(277);
	jfloat temp0 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (((frame[5].f) * (jfloat((frame[6].i)))) + (frame[4].f)), (frame[3].f));
	frame[7].f = temp0;
	LINE_NUMBER(278);
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (((frame[5].f) * (jfloat((frame[6].i)))) + (frame[4].f)), (frame[3].f));
	frame[8].f = temp1;
	LINE_NUMBER(279);
	jfloat temp2 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (((frame[5].f) * (jfloat(((frame[6].i) + (jint(1)))))) + (frame[4].f)), (frame[3].f));
	frame[9].f = temp2;
	LINE_NUMBER(280);
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (((frame[5].f) * (jfloat(((frame[6].i) + (jint(1)))))) + (frame[4].f)), (frame[3].f));
	frame[10].f = temp3;
	LINE_NUMBER(281);
	jfloat temp4 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (((frame[5].f) * (jfloat(((frame[6].i) + (jint(2)))))) + (frame[4].f)), (frame[3].f));
	frame[11].f = temp4;
	LINE_NUMBER(282);
	jfloat temp5 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (((frame[5].f) * (jfloat(((frame[6].i) + (jint(2)))))) + (frame[4].f)), (frame[3].f));
	frame[12].f = temp5;
	LINE_NUMBER(283);
	SM_arc_graphics_g2d_Fill_quad_float_float_float_float_float_float_float_float(ctx, (frame[0].f), (frame[1].f), ((frame[0].f) + (frame[7].f)), ((frame[1].f) + (frame[8].f)), ((frame[0].f) + (frame[9].f)), ((frame[1].f) + (frame[10].f)), ((frame[0].f) + (frame[11].f)), ((frame[1].f) + (frame[12].f)));
	LINE_NUMBER(276);
	INST_IINC(6, 2);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(286);
	frame[6].i = ((frame[2].i) % (jint(2)));
	LINE_NUMBER(288);
	if ((frame[6].i) != 0) goto label_34;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_34:;
	{
	LINE_NUMBER(290);
	frame[7].i = ((frame[2].i) - (jint(1)));
	LINE_NUMBER(292);
	jfloat temp0 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (((frame[5].f) * (jfloat((frame[7].i)))) + (frame[4].f)), (frame[3].f));
	frame[8].f = temp0;
	LINE_NUMBER(293);
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (((frame[5].f) * (jfloat((frame[7].i)))) + (frame[4].f)), (frame[3].f));
	frame[9].f = temp1;
	LINE_NUMBER(294);
	jfloat temp2 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (((frame[5].f) * (jfloat(((frame[7].i) + (jint(1)))))) + (frame[4].f)), (frame[3].f));
	frame[10].f = temp2;
	LINE_NUMBER(295);
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (((frame[5].f) * (jfloat(((frame[7].i) + (jint(1)))))) + (frame[4].f)), (frame[3].f));
	frame[11].f = temp3;
	LINE_NUMBER(296);
	SM_arc_graphics_g2d_Fill_tri_float_float_float_float_float_float(ctx, (frame[0].f), (frame[1].f), ((frame[0].f) + (frame[8].f)), ((frame[1].f) + (frame[9].f)), ((frame[0].f) + (frame[10].f)), ((frame[1].f) + (frame[11].f)));
	}
label_10:;
	LINE_NUMBER(298);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_arc_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:arc", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(301);
	SM_arc_graphics_g2d_Fill_arc_float_float_float_float_float(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), (jfloat(0)));
	LINE_NUMBER(302);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_arc_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:arc", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(305);
	SM_arc_graphics_g2d_Fill_arc_float_float_float_float_float_int(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (50));
	LINE_NUMBER(306);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_arc_float_float_float_float_float_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jint param5) {
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:arc", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(309);
	jint temp0 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, ((jfloat((frame[5].i))) * (frame[3].f)));
	frame[6].i = temp0;
	LINE_NUMBER(310);
	SM_arc_graphics_g2d_Fill_polyBegin(ctx);
	LINE_NUMBER(311);
	SM_arc_graphics_g2d_Fill_polyPoint_float_float(ctx, (frame[0].f), (frame[1].f));
	LINE_NUMBER(313);
	frame[7].i = (jint(0));
	}
label_4:;
	{
	if ((frame[7].i) > (frame[6].i)) goto label_5;
	}
	{
	LINE_NUMBER(314);
	frame[8].f = (((((jfloat((frame[7].i))) / (jfloat((frame[6].i)))) * (frame[3].f)) * (jfloat(360.0f))) + (frame[4].f));
	LINE_NUMBER(315);
	jfloat temp0 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (frame[8].f), (frame[2].f));
	frame[9].f = temp0;
	LINE_NUMBER(316);
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (frame[8].f), (frame[2].f));
	frame[10].f = temp1;
	LINE_NUMBER(318);
	SM_arc_graphics_g2d_Fill_polyPoint_float_float(ctx, ((frame[0].f) + (frame[9].f)), ((frame[1].f) + (frame[10].f)));
	LINE_NUMBER(313);
	INST_IINC(7, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(320);
	SM_arc_graphics_g2d_Fill_polyPoint_float_float(ctx, (frame[0].f), (frame[1].f));
	LINE_NUMBER(322);
	SM_arc_graphics_g2d_Fill_polyEnd(ctx);
	LINE_NUMBER(323);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_circle_arc_math_geom_Circle(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:circle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(326);
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_radius));
	LINE_NUMBER(327);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_circle_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:circle", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(330);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_circleRegion;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_circleRegion;
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_texture;
	jint temp0 = (jint)((func_arc_graphics_Texture_isDisposed_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_isDisposed_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(331);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"circle"_j))));
	clinit_arc_graphics_g2d_Fill(ctx);
	SF_arc_graphics_g2d_Fill_circleRegion = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(334);
	clinit_arc_graphics_g2d_Fill(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Fill_circleRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, (frame[0].f), (frame[1].f), ((frame[2].f) * (jfloat(2))), ((frame[2].f) * (jfloat(2))));
	LINE_NUMBER(335);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_rect_arc_math_geom_Rect(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:rect", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(338);
	SM_arc_graphics_g2d_Fill_crect_float_float_float_float(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height));
	LINE_NUMBER(339);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_rect_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:rect", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(342);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_white_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_white_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(343);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_rect_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:rect", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(346);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_white_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_white_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(347);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_crect_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:crect", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(350);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_white_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_white_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, ((frame[0].f) + ((frame[2].f) / (jfloat(2)))), ((frame[1].f) + ((frame[3].f) / (jfloat(2)))), (frame[2].f), (frame[3].f));
	LINE_NUMBER(351);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_rects_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[14];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:rects", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(354);
	SM_arc_graphics_g2d_Fill_quad_float_float_float_float_float_float_float_float(ctx, (frame[0].f), (frame[1].f), ((frame[0].f) + (frame[2].f)), (frame[1].f), (((frame[0].f) + (frame[2].f)) + (frame[4].f)), ((frame[1].f) + (frame[3].f)), ((frame[0].f) + (frame[4].f)), ((frame[1].f) + (frame[3].f)));
	LINE_NUMBER(355);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_square_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:square", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(358);
	SM_arc_graphics_g2d_Fill_rect_float_float_float_float(ctx, (frame[0].f), (frame[1].f), ((frame[2].f) * (jfloat(2))), ((frame[2].f) * (jfloat(2))));
	LINE_NUMBER(359);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Fill_square_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:square", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(362);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_white_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_white_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, (frame[0].f), (frame[1].f), ((frame[2].f) * (jfloat(2))), ((frame[2].f) * (jfloat(2))), (frame[3].f));
	LINE_NUMBER(363);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_arc_graphics_g2d_Fill(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Fill:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Fill(ctx);
	{
	LINE_NUMBER(12);
	sp[0].o = (jobject) createArray(ctx, &class_float, (24));
	clinit_arc_graphics_g2d_Fill(ctx);
	SF_arc_graphics_g2d_Fill_vertices = sp[0].o;
	LINE_NUMBER(14);
	clinit_arc_struct_FloatSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_FloatSeq);
	init_arc_struct_FloatSeq(ctx, sp[0].o);
	clinit_arc_graphics_g2d_Fill(ctx);
	SF_arc_graphics_g2d_Fill_polyFloats = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_Fill[] {
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
	{ "vertices", getArrayClass(&class_float, 1), (intptr_t) &SF_arc_graphics_g2d_Fill_vertices, "[F", 10 },
	{ "circleRegion", &class_arc_graphics_g2d_TextureRegion, (intptr_t) &SF_arc_graphics_g2d_Fill_circleRegion, "Larc/graphics/g2d/TextureRegion;", 10 },
	{ "polyFloats", &class_arc_struct_FloatSeq, (intptr_t) &SF_arc_graphics_g2d_Fill_polyFloats, "Larc/struct/FloatSeq;", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_Fill, 0, "()V", 1 },
	{ "quad", (intptr_t) SM_arc_graphics_g2d_Fill_quad_float_float_float_float_float_float_float_float, 0, "(FFFFFFFF)V", 9 },
	{ "quad", (intptr_t) SM_arc_graphics_g2d_Fill_quad_float_float_float_float_float_float_float_float_float_float_float_float, 0, "(FFFFFFFFFFFF)V", 9 },
	{ "quad", (intptr_t) SM_arc_graphics_g2d_Fill_quad_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float, 0, "(Larc/graphics/g2d/TextureRegion;FFFFFFFF)V", 9 },
	{ "quad", (intptr_t) SM_arc_graphics_g2d_Fill_quad_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float_float_float_float_float, 0, "(Larc/graphics/g2d/TextureRegion;FFFFFFFFFFFF)V", 9 },
	{ "quad", (intptr_t) SM_arc_graphics_g2d_Fill_quad_arc_graphics_Texture_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float, 0, "(Larc/graphics/Texture;FFFFFFFFFFFFFFFFFFFF)V", 9 },
	{ "tri", (intptr_t) SM_arc_graphics_g2d_Fill_tri_float_float_float_float_float_float, 0, "(FFFFFF)V", 9 },
	{ "dropShadowRect", (intptr_t) SM_arc_graphics_g2d_Fill_dropShadowRect_float_float_float_float_float_float, 0, "(FFFFFF)V", 9 },
	{ "dropShadow", (intptr_t) SM_arc_graphics_g2d_Fill_dropShadow_float_float_float_float_float_float, 0, "(FFFFFF)V", 9 },
	{ "light", (intptr_t) SM_arc_graphics_g2d_Fill_light_float_float_int_float_arc_graphics_Color_arc_graphics_Color, 0, "(FFIFLarc/graphics/Color;Larc/graphics/Color;)V", 9 },
	{ "light", (intptr_t) SM_arc_graphics_g2d_Fill_light_float_float_int_float_float_arc_graphics_Color_arc_graphics_Color, 0, "(FFIFFLarc/graphics/Color;Larc/graphics/Color;)V", 9 },
	{ "lightInner", (intptr_t) SM_arc_graphics_g2d_Fill_lightInner_float_float_int_float_float_float_arc_graphics_Color_arc_graphics_Color, 0, "(FFIFFFLarc/graphics/Color;Larc/graphics/Color;)V", 9 },
	{ "polyBegin", (intptr_t) SM_arc_graphics_g2d_Fill_polyBegin, 0, "()V", 9 },
	{ "polyPoint", (intptr_t) SM_arc_graphics_g2d_Fill_polyPoint_float_float, 0, "(FF)V", 9 },
	{ "polyEnd", (intptr_t) SM_arc_graphics_g2d_Fill_polyEnd, 0, "()V", 9 },
	{ "poly", (intptr_t) SM_arc_graphics_g2d_Fill_poly_arc_math_geom_Polygon, 0, "(Larc/math/geom/Polygon;)V", 9 },
	{ "poly", (intptr_t) SM_arc_graphics_g2d_Fill_poly_arc_struct_FloatSeq, 0, "(Larc/struct/FloatSeq;)V", 9 },
	{ "poly", (intptr_t) SM_arc_graphics_g2d_Fill_poly_Array1_float_int, 0, "([FI)V", 9 },
	{ "poly", (intptr_t) SM_arc_graphics_g2d_Fill_poly_float_float_int_float, 0, "(FFIF)V", 9 },
	{ "poly", (intptr_t) SM_arc_graphics_g2d_Fill_poly_float_float_int_float_float, 0, "(FFIFF)V", 9 },
	{ "arc", (intptr_t) SM_arc_graphics_g2d_Fill_arc_float_float_float_float, 0, "(FFFF)V", 9 },
	{ "arc", (intptr_t) SM_arc_graphics_g2d_Fill_arc_float_float_float_float_float, 0, "(FFFFF)V", 9 },
	{ "arc", (intptr_t) SM_arc_graphics_g2d_Fill_arc_float_float_float_float_float_int, 0, "(FFFFFI)V", 9 },
	{ "circle", (intptr_t) SM_arc_graphics_g2d_Fill_circle_arc_math_geom_Circle, 0, "(Larc/math/geom/Circle;)V", 9 },
	{ "circle", (intptr_t) SM_arc_graphics_g2d_Fill_circle_float_float_float, 0, "(FFF)V", 9 },
	{ "rect", (intptr_t) SM_arc_graphics_g2d_Fill_rect_arc_math_geom_Rect, 0, "(Larc/math/geom/Rect;)V", 9 },
	{ "rect", (intptr_t) SM_arc_graphics_g2d_Fill_rect_float_float_float_float, 0, "(FFFF)V", 9 },
	{ "rect", (intptr_t) SM_arc_graphics_g2d_Fill_rect_float_float_float_float_float, 0, "(FFFFF)V", 9 },
	{ "crect", (intptr_t) SM_arc_graphics_g2d_Fill_crect_float_float_float_float, 0, "(FFFF)V", 9 },
	{ "rects", (intptr_t) SM_arc_graphics_g2d_Fill_rects_float_float_float_float_float, 0, "(FFFFF)V", 9 },
	{ "square", (intptr_t) SM_arc_graphics_g2d_Fill_square_float_float_float, 0, "(FFF)V", 9 },
	{ "square", (intptr_t) SM_arc_graphics_g2d_Fill_square_float_float_float_float, 0, "(FFFF)V", 9 },
	{ "<clinit>", (intptr_t) clinit_arc_graphics_g2d_Fill, 0, "()V", 8 },
};

Class class_arc_graphics_g2d_Fill{
		.nativeName = (intptr_t) "arc/graphics/g2d/Fill",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_Fill),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_Fill,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_Fill,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_Fill,
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
		.methodCount = 33,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_Fill = registerClass(&class_arc_graphics_g2d_Fill);

}
