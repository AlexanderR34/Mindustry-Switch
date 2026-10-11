#include "arc/graphics/g2d/Lines.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "arc/math/geom/Vec2.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/Core.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/graphics/g2d/Batch.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/math/geom/Rect.h"
#include "arc/struct/FloatSeq.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/g2d/Fill.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/IllegalStateException.h"
#include "arc/math/geom/Position.h"

extern "C" {

jbool SF_arc_graphics_g2d_Lines_useLegacyLine;
jfloat SF_arc_graphics_g2d_Lines_stroke;
jobject SF_arc_graphics_g2d_Lines_vector;
jobject SF_arc_graphics_g2d_Lines_u;
jobject SF_arc_graphics_g2d_Lines_v;
jobject SF_arc_graphics_g2d_Lines_floats;
jobject SF_arc_graphics_g2d_Lines_floatBuilder;
jbool SF_arc_graphics_g2d_Lines_building;
jfloat SF_arc_graphics_g2d_Lines_circlePrecision;
jobject SF_arc_graphics_g2d_Lines_AB;
jobject SF_arc_graphics_g2d_Lines_BC;
jobject SF_arc_graphics_g2d_Lines_A;
jobject SF_arc_graphics_g2d_Lines_B;
jobject SF_arc_graphics_g2d_Lines_C;
jobject SF_arc_graphics_g2d_Lines_E;
jobject SF_arc_graphics_g2d_Lines_D;
jobject SF_arc_graphics_g2d_Lines_vec1;
jobject SF_arc_graphics_g2d_Lines_D0;
jobject SF_arc_graphics_g2d_Lines_E0;
jobject SF_arc_graphics_g2d_Lines_q1;
jobject SF_arc_graphics_g2d_Lines_q2;
jobject SF_arc_graphics_g2d_Lines_q3;
jobject SF_arc_graphics_g2d_Lines_q4;
jobject SF_arc_graphics_g2d_Lines_D2;
jobject SF_arc_graphics_g2d_Lines_E2;
jobject SF_arc_graphics_g2d_Lines_D02;
jobject SF_arc_graphics_g2d_Lines_E02;
jfloat SF_arc_graphics_g2d_Lines_miterLimit;

void mark_arc_graphics_g2d_Lines(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_g2d_Lines_vector)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Lines_vector)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Lines_vector, mark, depth + 1);
		if (SF_arc_graphics_g2d_Lines_u)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Lines_u)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Lines_u, mark, depth + 1);
		if (SF_arc_graphics_g2d_Lines_v)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Lines_v)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Lines_v, mark, depth + 1);
		if (SF_arc_graphics_g2d_Lines_floats)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Lines_floats)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Lines_floats, mark, depth + 1);
		if (SF_arc_graphics_g2d_Lines_floatBuilder)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Lines_floatBuilder)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Lines_floatBuilder, mark, depth + 1);
		if (SF_arc_graphics_g2d_Lines_AB)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Lines_AB)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Lines_AB, mark, depth + 1);
		if (SF_arc_graphics_g2d_Lines_BC)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Lines_BC)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Lines_BC, mark, depth + 1);
		if (SF_arc_graphics_g2d_Lines_A)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Lines_A)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Lines_A, mark, depth + 1);
		if (SF_arc_graphics_g2d_Lines_B)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Lines_B)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Lines_B, mark, depth + 1);
		if (SF_arc_graphics_g2d_Lines_C)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Lines_C)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Lines_C, mark, depth + 1);
		if (SF_arc_graphics_g2d_Lines_E)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Lines_E)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Lines_E, mark, depth + 1);
		if (SF_arc_graphics_g2d_Lines_D)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Lines_D)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Lines_D, mark, depth + 1);
		if (SF_arc_graphics_g2d_Lines_vec1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Lines_vec1)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Lines_vec1, mark, depth + 1);
		if (SF_arc_graphics_g2d_Lines_D0)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Lines_D0)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Lines_D0, mark, depth + 1);
		if (SF_arc_graphics_g2d_Lines_E0)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Lines_E0)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Lines_E0, mark, depth + 1);
		if (SF_arc_graphics_g2d_Lines_q1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Lines_q1)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Lines_q1, mark, depth + 1);
		if (SF_arc_graphics_g2d_Lines_q2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Lines_q2)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Lines_q2, mark, depth + 1);
		if (SF_arc_graphics_g2d_Lines_q3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Lines_q3)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Lines_q3, mark, depth + 1);
		if (SF_arc_graphics_g2d_Lines_q4)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Lines_q4)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Lines_q4, mark, depth + 1);
		if (SF_arc_graphics_g2d_Lines_D2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Lines_D2)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Lines_D2, mark, depth + 1);
		if (SF_arc_graphics_g2d_Lines_E2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Lines_E2)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Lines_E2, mark, depth + 1);
		if (SF_arc_graphics_g2d_Lines_D02)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Lines_D02)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Lines_D02, mark, depth + 1);
		if (SF_arc_graphics_g2d_Lines_E02)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_Lines_E02)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_Lines_E02, mark, depth + 1);
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
	auto self = (arc_graphics_g2d_Lines *) object;
}

void init_arc_graphics_g2d_Lines(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_setCirclePrecision_float(jcontext ctx, jfloat param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:setCirclePrecision", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(21);
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_circlePrecision = (frame[0].f);
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_arc_graphics_g2d_Lines_circleVertices_float_R_int(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:circleVertices", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return ((11) + (jint(((frame[0].f) * (clinit_arc_graphics_g2d_Lines(ctx), (jfloat)SF_arc_graphics_g2d_Lines_circlePrecision)))));
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_lineAngle_float_float_float_float_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jbool param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:lineAngle", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(29);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(31);
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	jfloat temp2 = frame[0].f;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	jfloat temp3 = temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	jfloat temp4 = frame[1].f;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	SM_arc_graphics_g2d_Lines_line_float_float_float_float_boolean(ctx, temp0, temp1, temp3, (temp4 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y)), (frame[4].i));
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_lineAngle_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:lineAngle", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(35);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(37);
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	jfloat temp2 = frame[0].f;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	jfloat temp3 = temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	jfloat temp4 = frame[1].f;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, temp0, temp1, temp3, (temp4 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y)));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_lineAngle_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:lineAngle", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(41);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (jfloat(1)));
	LINE_NUMBER(43);
	jfloat temp0 = frame[0].f;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	jfloat temp1 = temp0 + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) * (frame[4].f));
	jfloat temp2 = frame[1].f;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	jfloat temp3 = temp2 + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) * (frame[4].f));
	jfloat temp4 = frame[0].f;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	jfloat temp5 = temp4 + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) * ((frame[3].f) + (frame[4].f)));
	jfloat temp6 = frame[1].f;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, temp1, temp3, temp5, (temp6 + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) * ((frame[3].f) + (frame[4].f)))));
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_lineAngleCenter_float_float_float_float_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jbool param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:lineAngleCenter", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(47);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(49);
	jfloat temp0 = frame[0].f;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	jfloat temp1 = temp0 - (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) / (jfloat(2)));
	jfloat temp2 = frame[1].f;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	jfloat temp3 = temp2 - (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) / (jfloat(2)));
	jfloat temp4 = frame[0].f;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	jfloat temp5 = temp4 + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) / (jfloat(2)));
	jfloat temp6 = frame[1].f;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	SM_arc_graphics_g2d_Lines_line_float_float_float_float_boolean(ctx, temp1, temp3, temp5, (temp6 + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) / (jfloat(2)))), (frame[4].i));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_lineAngleCenter_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:lineAngleCenter", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(53);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(55);
	jfloat temp0 = frame[0].f;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	jfloat temp1 = temp0 - (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) / (jfloat(2)));
	jfloat temp2 = frame[1].f;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	jfloat temp3 = temp2 - (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) / (jfloat(2)));
	jfloat temp4 = frame[0].f;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	jfloat temp5 = temp4 + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) / (jfloat(2)));
	jfloat temp6 = frame[1].f;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, temp1, temp3, temp5, (temp6 + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) / (jfloat(2)))));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_line_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:line", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(59);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float_boolean(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), (jint(1)));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_line_float_float_arc_graphics_Color_float_float_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jobject param2, jfloat param3, jfloat param4, jobject param5) {
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:line", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(63);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_white_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_white_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o);
	SM_arc_graphics_g2d_Lines_line_arc_graphics_g2d_TextureRegion_float_float_arc_graphics_Color_float_float_arc_graphics_Color_boolean(ctx, sp[0].o, (frame[0].f), (frame[1].f), (frame[2].o), (frame[3].f), (frame[4].f), (frame[5].o), (jint(1)));
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_line_float_float_float_float_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jbool param4) {
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:line", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(67);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_white_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_white_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o);
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_batch;
	jfloat temp2 = (jfloat)((func_arc_graphics_g2d_Batch_getPackedColor_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_getPackedColor_R_float])(ctx, sp[1].o);
	jfloat temp3 = frame[2].f;
	jfloat temp4 = frame[3].f;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_batch;
	jfloat temp5 = (jfloat)((func_arc_graphics_g2d_Batch_getPackedColor_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_getPackedColor_R_float])(ctx, sp[1].o);
	SM_arc_graphics_g2d_Lines_line_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_boolean(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, (frame[4].i));
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_line_arc_graphics_g2d_TextureRegion_float_float_float_float_boolean(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jbool param5) {
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:line", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_batch;
	jfloat temp2 = (jfloat)((func_arc_graphics_g2d_Batch_getPackedColor_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_getPackedColor_R_float])(ctx, sp[1].o);
	jfloat temp3 = frame[3].f;
	jfloat temp4 = frame[4].f;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_batch;
	jfloat temp5 = (jfloat)((func_arc_graphics_g2d_Batch_getPackedColor_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_Batch_getPackedColor_R_float])(ctx, sp[1].o);
	SM_arc_graphics_g2d_Lines_line_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_boolean(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, (frame[5].i));
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_line_arc_graphics_g2d_TextureRegion_float_float_arc_graphics_Color_float_float_arc_graphics_Color_boolean(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3, jfloat param4, jfloat param5, jobject param6, jbool param7) {
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:line", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].o = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, (frame[3].o));
	jfloat temp3 = frame[4].f;
	jfloat temp4 = frame[5].f;
	jfloat temp5 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, (frame[6].o));
	SM_arc_graphics_g2d_Lines_line_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_boolean(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, (frame[7].i));
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_line_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_boolean(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jbool param7) {
	jtype frame[25];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:line", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(80);
	if ((clinit_arc_graphics_g2d_Lines(ctx), (jint)SF_arc_graphics_g2d_Lines_useLegacyLine) == 0) goto label_1;
	}
	{
	LINE_NUMBER(81);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_dst_float_float_float_float_R_float(ctx, (frame[1].f), (frame[2].f), (frame[4].f), (frame[5].f));
	sp[0].f = temp0;
	sp += 1;
	if ((frame[7].i) != 0) goto label_3;
	}
	INST_FCONST(0);
	goto label_4;
label_3:;
	clinit_arc_graphics_g2d_Lines(ctx);
	(sp++)->f = SF_arc_graphics_g2d_Lines_stroke;
label_4:;
	{
	sp -= 2;
	frame[8].f = (sp[0].f + sp[1].f);
	LINE_NUMBER(82);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_atan2_float_float_R_float(ctx, ((frame[4].f) - (frame[1].f)), ((frame[5].f) - (frame[2].f)));
	frame[9].f = (temp0 * (jfloat(57.295776f)));
	LINE_NUMBER(84);
	if ((frame[7].i) == 0) goto label_7;
	}
	{
	LINE_NUMBER(85);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float(ctx, (frame[0].o), (((frame[1].f) - ((clinit_arc_graphics_g2d_Lines(ctx), (jfloat)SF_arc_graphics_g2d_Lines_stroke) / (jfloat(2)))) + ((frame[8].f) / (jfloat(2)))), (frame[2].f), (frame[8].f), (clinit_arc_graphics_g2d_Lines(ctx), (jfloat)SF_arc_graphics_g2d_Lines_stroke), ((clinit_arc_graphics_g2d_Lines(ctx), (jfloat)SF_arc_graphics_g2d_Lines_stroke) / (jfloat(2))), ((clinit_arc_graphics_g2d_Lines(ctx), (jfloat)SF_arc_graphics_g2d_Lines_stroke) / (jfloat(2))), (frame[9].f));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(87);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float(ctx, (frame[0].o), ((frame[1].f) + ((frame[8].f) / (jfloat(2)))), (frame[2].f), (frame[8].f), (clinit_arc_graphics_g2d_Lines(ctx), (jfloat)SF_arc_graphics_g2d_Lines_stroke), (jfloat(0)), ((clinit_arc_graphics_g2d_Lines(ctx), (jfloat)SF_arc_graphics_g2d_Lines_stroke) / (jfloat(2))), (frame[9].f));
	}
label_9:;
	LINE_NUMBER(89);
	goto label_10;
label_1:;
	{
	LINE_NUMBER(90);
	frame[8].f = ((clinit_arc_graphics_g2d_Lines(ctx), (jfloat)SF_arc_graphics_g2d_Lines_stroke) / (jfloat(2)));
	LINE_NUMBER(91);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_len_float_float_R_float(ctx, ((frame[4].f) - (frame[1].f)), ((frame[5].f) - (frame[2].f)));
	frame[9].f = temp0;
	LINE_NUMBER(92);
	frame[10].f = ((((frame[4].f) - (frame[1].f)) / (frame[9].f)) * (frame[8].f));
	frame[11].f = ((((frame[5].f) - (frame[2].f)) / (frame[9].f)) * (frame[8].f));
	LINE_NUMBER(94);
	if ((frame[7].i) == 0) goto label_15;
	}
	{
	LINE_NUMBER(95);
	SM_arc_graphics_g2d_Fill_quad_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float_float_float_float_float(ctx, (frame[0].o), (((frame[1].f) - (frame[10].f)) - (frame[11].f)), (((frame[2].f) - (frame[11].f)) + (frame[10].f)), (frame[3].f), (((frame[1].f) - (frame[10].f)) + (frame[11].f)), (((frame[2].f) - (frame[11].f)) - (frame[10].f)), (frame[3].f), (((frame[4].f) + (frame[10].f)) + (frame[11].f)), (((frame[5].f) + (frame[11].f)) - (frame[10].f)), (frame[6].f), (((frame[4].f) + (frame[10].f)) - (frame[11].f)), (((frame[5].f) + (frame[11].f)) + (frame[10].f)), (frame[6].f));
	goto label_10;
	}
label_15:;
	{
	LINE_NUMBER(115);
	SM_arc_graphics_g2d_Fill_quad_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float(ctx, (frame[0].o), ((frame[1].f) - (frame[11].f)), ((frame[2].f) + (frame[10].f)), ((frame[1].f) + (frame[11].f)), ((frame[2].f) - (frame[10].f)), ((frame[4].f) + (frame[11].f)), ((frame[5].f) - (frame[10].f)), ((frame[4].f) - (frame[11].f)), ((frame[5].f) + (frame[10].f)));
	}
label_10:;
	LINE_NUMBER(133);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_linePoint_arc_math_geom_Position(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:linePoint", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(136);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[0].o)))(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[0].o)))(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Lines_linePoint_float_float(ctx, temp0, temp1);
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_linePoint_float_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:linePoint", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(140);
	if ((clinit_arc_graphics_g2d_Lines(ctx), (jint)SF_arc_graphics_g2d_Lines_building) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Not building"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(141);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_floatBuilder;
	((func_arc_struct_FloatSeq_add_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float_float])(ctx, sp[0].o, (frame[0].f), (frame[1].f));
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_beginLine(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:beginLine", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	{
	LINE_NUMBER(145);
	if ((clinit_arc_graphics_g2d_Lines(ctx), (jint)SF_arc_graphics_g2d_Lines_building) == 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Already building"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(146);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_floatBuilder;
	((func_arc_struct_FloatSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(147);
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_building = (jint(1));
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_endLine(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:endLine", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	{
	LINE_NUMBER(151);
	SM_arc_graphics_g2d_Lines_endLine_boolean(ctx, (jint(0)));
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_endLine_boolean(jcontext ctx, jbool param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:endLine", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(155);
	SM_arc_graphics_g2d_Lines_endLine_boolean_boolean(ctx, (frame[0].i), (jint(0)));
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_endLine_boolean_boolean(jcontext ctx, jbool param0, jbool param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:endLine", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(159);
	if ((clinit_arc_graphics_g2d_Lines(ctx), (jint)SF_arc_graphics_g2d_Lines_building) != 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Not building"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(160);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_floatBuilder;
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_items;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_floatBuilder;
	SM_arc_graphics_g2d_Lines_polyline_Array1_float_int_boolean_boolean(ctx, sp[0].o, ((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[1].o))->F_size), (frame[0].i), (frame[1].i));
	LINE_NUMBER(161);
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_building = (jint(0));
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_polyline_arc_struct_FloatSeq_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:polyline", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_items;
	SM_arc_graphics_g2d_Lines_polyline_Array1_float_int_boolean(ctx, sp[0].o, ((jint)((arc_struct_FloatSeq *) NULL_CHECK((frame[0].o)))->F_size), (frame[1].i));
	LINE_NUMBER(166);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_polyline_Array1_float_int_boolean(jcontext ctx, jobject param0, jint param1, jbool param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:polyline", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(175);
	SM_arc_graphics_g2d_Lines_polyline_Array1_float_int_boolean_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (jint(0)));
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_polyline_Array1_float_int_boolean_boolean(jcontext ctx, jobject param0, jint param1, jbool param2, jbool param3) {
	jtype frame[19];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:polyline", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(180);
	if ((frame[1].i) >= (jint(4))) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(182);
	frame[4].f = ((jfloat(0.5f)) * (clinit_arc_graphics_g2d_Lines(ctx), (jfloat)SF_arc_graphics_g2d_Lines_stroke));
	LINE_NUMBER(184);
	frame[5].i = (jint(2));
	}
label_3:;
	{
	if ((frame[5].i) >= ((frame[1].i) - (jint(2)))) goto label_4;
	}
	{
	LINE_NUMBER(185);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_A;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[5].i) - (jint(2))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[5].i) - (jint(1))))));
	LINE_NUMBER(186);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_B;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[5].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[5].i) + (jint(1))))));
	LINE_NUMBER(187);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_C;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[5].i) + (jint(2))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[5].i) + (jint(3))))));
	LINE_NUMBER(189);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_A;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_B;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[2].o = (jobject)SF_arc_graphics_g2d_Lines_C;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[3].o = (jobject)SF_arc_graphics_g2d_Lines_D;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[4].o = (jobject)SF_arc_graphics_g2d_Lines_E;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[5].o = (jobject)SF_arc_graphics_g2d_Lines_D2;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[6].o = (jobject)SF_arc_graphics_g2d_Lines_E2;
	SM_arc_graphics_g2d_Lines_preparePointyJoin_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_float_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, (frame[4].f), (frame[3].i));
	LINE_NUMBER(192);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_D2;
	frame[6].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_D2;
	frame[7].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(193);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_E2;
	frame[8].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_E2;
	frame[9].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(195);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_q3;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_D;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(196);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_q4;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_E;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(198);
	if ((frame[5].i) != (jint(2))) goto label_16;
	}
	{
	LINE_NUMBER(199);
	if ((frame[2].i) != 0) goto label_18;
	}
	{
	LINE_NUMBER(200);
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)));
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)));
	jfloat temp2 = (jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)));
	jfloat temp3 = (jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)));
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_D;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_E;
	SM_arc_graphics_g2d_Lines_prepareFlatEndpoint_float_float_float_float_arc_math_geom_Vec2_arc_math_geom_Vec2_float(ctx, temp0, temp1, temp2, temp3, sp[0].o, sp[1].o, (frame[4].f));
	LINE_NUMBER(201);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_q1;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_E;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(202);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_q2;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_D;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	goto label_16;
	}
label_18:;
	{
	LINE_NUMBER(204);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vec1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[1].i) - (jint(2))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), ((frame[1].i) - (jint(1))))));
	LINE_NUMBER(205);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vec1;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_A;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[2].o = (jobject)SF_arc_graphics_g2d_Lines_B;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[3].o = (jobject)SF_arc_graphics_g2d_Lines_D0;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[4].o = (jobject)SF_arc_graphics_g2d_Lines_E0;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[5].o = (jobject)SF_arc_graphics_g2d_Lines_D02;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[6].o = (jobject)SF_arc_graphics_g2d_Lines_E02;
	SM_arc_graphics_g2d_Lines_preparePointyJoin_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_float_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, (frame[4].f), (frame[3].i));
	LINE_NUMBER(207);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_q1;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_E02;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(208);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_q2;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_D02;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	}
label_16:;
	{
	LINE_NUMBER(212);
	SM_arc_graphics_g2d_Lines_pushQuad(ctx);
	LINE_NUMBER(213);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_q1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[8].f), (frame[9].f));
	LINE_NUMBER(214);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_q2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[6].f), (frame[7].f));
	LINE_NUMBER(184);
	INST_IINC(5, 2);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(217);
	if ((frame[2].i) != 0) goto label_28;
	}
	{
	LINE_NUMBER(219);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_B;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_C;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[2].o = (jobject)SF_arc_graphics_g2d_Lines_D;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[3].o = (jobject)SF_arc_graphics_g2d_Lines_E;
	SM_arc_graphics_g2d_Lines_prepareFlatEndpoint_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_float(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[4].f));
	LINE_NUMBER(220);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_q3;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_E;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(221);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_q4;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_D;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(222);
	SM_arc_graphics_g2d_Lines_pushQuad(ctx);
	goto label_33;
	}
label_28:;
	{
	LINE_NUMBER(225);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_A;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))));
	LINE_NUMBER(226);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_B;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_C;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[2].o = (jobject)SF_arc_graphics_g2d_Lines_A;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[3].o = (jobject)SF_arc_graphics_g2d_Lines_D;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[4].o = (jobject)SF_arc_graphics_g2d_Lines_E;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[5].o = (jobject)SF_arc_graphics_g2d_Lines_D2;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[6].o = (jobject)SF_arc_graphics_g2d_Lines_E2;
	SM_arc_graphics_g2d_Lines_preparePointyJoin_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_float_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, (frame[4].f), (frame[3].i));
	LINE_NUMBER(227);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_q3;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_D;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(228);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_q4;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_E;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(229);
	SM_arc_graphics_g2d_Lines_pushQuad(ctx);
	LINE_NUMBER(232);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_q1;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_D2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(233);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_q2;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_E2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(234);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_q3;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_E0;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(235);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_q4;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_D0;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(236);
	SM_arc_graphics_g2d_Lines_pushQuad(ctx);
	}
label_33:;
	LINE_NUMBER(238);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_pushQuad(jcontext ctx) {
	jtype frame[8];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:pushQuad", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	{
	LINE_NUMBER(241);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_q1;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_q1;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_q2;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_q2;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_q3;
	jfloat temp4 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_q3;
	jfloat temp5 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_q4;
	jfloat temp6 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_q4;
	SM_arc_graphics_g2d_Fill_quad_float_float_float_float_float_float_float_float(ctx, temp0, temp1, temp2, temp3, temp4, temp5, temp6, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(242);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_pushBevelFill_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:pushBevelFill", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(245);
	SM_arc_graphics_g2d_Fill_quad_float_float_float_float_float_float_float_float(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_prepareFlatEndpoint_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jfloat param4) {
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:prepareFlatEndpoint", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(249);
	SM_arc_graphics_g2d_Lines_prepareFlatEndpoint_float_float_float_float_arc_math_geom_Vec2_arc_math_geom_Vec2_float(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y), (frame[2].o), (frame[3].o), (frame[4].f));
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_prepareFlatEndpoint_float_float_float_float_arc_math_geom_Vec2_arc_math_geom_Vec2_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5, jfloat param6) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:prepareFlatEndpoint", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].f = param6;
	{
	LINE_NUMBER(253);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[0].f), (frame[1].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(254);
	sp[0].o = frame[4].o;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_v;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, (-((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(255);
	sp[0].o = frame[5].o;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_v;
	jfloat temp1 = -((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(256);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_preparePointyJoin_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_float_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jfloat param7, jbool param8) {
	jtype frame[19];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:preparePointyJoin", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].f = param7;
	frame[8].i = param8;
	{
	LINE_NUMBER(259);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_AB;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(260);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_BC;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(261);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_AB;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_BC;
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Lines_angleRad_arc_math_geom_Vec2_arc_math_geom_Vec2_R_float(ctx, sp[0].o, sp[1].o);
	frame[9].f = temp0;
	LINE_NUMBER(263);
	jint temp1 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (frame[9].f), (jfloat(0)));
	if (temp1 != 0) goto label_4;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (frame[9].f), (jfloat(6.2831855f)));
	if (temp0 == 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(264);
	SM_arc_graphics_g2d_Lines_prepareStraightJoin_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_float(ctx, (frame[1].o), (frame[3].o), (frame[4].o), (frame[7].f));
	LINE_NUMBER(265);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[5].o), (frame[3].o));
	LINE_NUMBER(266);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[6].o), (frame[4].o));
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return;
	}
label_5:;
	{
	LINE_NUMBER(270);
	if ((floatCompare((frame[9].f), (jfloat(0)), 1)) >= 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(271);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble((frame[9].f))));
	frame[11].f = (jfloat(temp0));
	LINE_NUMBER(273);
	if ((frame[8].i) != 0) goto label_13;
	}
	{
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[11].f));
	if ((floatCompare((temp0 / temp1), (jfloat(4.0f)), 1)) > 0) goto label_13;
	}
	{
	LINE_NUMBER(274);
	frame[12].f = ((frame[7].f) / (frame[11].f));
	LINE_NUMBER(275);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_AB;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[12].f));
	LINE_NUMBER(276);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_BC;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[12].f));
	LINE_NUMBER(278);
	if ((frame[10].i) == 0) goto label_18;
	}
	INST_ALOAD(3);
	goto label_19;
label_18:;
	INST_ALOAD(4);
label_19:;
	{
	sp -= 1;
	frame[13].o = sp[0].o;
	LINE_NUMBER(279);
	if ((frame[10].i) == 0) goto label_21;
	}
	INST_ALOAD(4);
	goto label_22;
label_21:;
	INST_ALOAD(3);
label_22:;
	{
	sp -= 1;
	frame[14].o = sp[0].o;
	LINE_NUMBER(280);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[13].o), (frame[1].o));
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_AB;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_BC;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(281);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[14].o), (frame[1].o));
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_AB;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_BC;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(283);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[5].o), (frame[3].o));
	LINE_NUMBER(284);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[6].o), (frame[4].o));
	LINE_NUMBER(285);
	goto label_28;
	}
label_13:;
	{
	LINE_NUMBER(286);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_AB;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(287);
	sp[0].o = frame[3].o;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_AB;
	jfloat temp0 = -((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_AB;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(288);
	sp[0].o = frame[4].o;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_AB;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_AB;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, (-((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(290);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_BC;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(291);
	sp[0].o = frame[5].o;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_BC;
	jfloat temp2 = -((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_BC;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp2, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(292);
	sp[0].o = frame[6].o;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_BC;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_BC;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp3, (-((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(294);
	if ((frame[10].i) == 0) goto label_35;
	}
	INST_ALOAD(4);
	goto label_36;
label_35:;
	INST_ALOAD(3);
label_36:;
	{
	sp -= 1;
	frame[12].o = sp[0].o;
	LINE_NUMBER(295);
	if ((frame[10].i) == 0) goto label_38;
	}
	INST_ALOAD(6);
	goto label_39;
label_38:;
	INST_ALOAD(5);
label_39:;
	{
	sp -= 1;
	frame[13].o = sp[0].o;
	LINE_NUMBER(296);
	SM_arc_graphics_g2d_Lines_pushBevelFill_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2(ctx, (frame[12].o), (frame[13].o), (frame[1].o));
	}
label_28:;
	LINE_NUMBER(298);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat SM_arc_graphics_g2d_Lines_angleRad_arc_math_geom_Vec2_arc_math_geom_Vec2_R_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:angleRad", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(301);
	jdouble temp0 = (jdouble)SM_java_lang_Math_atan2_double_double_R_double(ctx, (jdouble(((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y)) - (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x))))), (jdouble(((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x)) + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_prepareStraightJoin_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:prepareStraightJoin", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(305);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_AB;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[3].f));
	LINE_NUMBER(306);
	sp[0].o = frame[1].o;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_AB;
	jfloat temp0 = -((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_AB;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(307);
	sp[0].o = frame[2].o;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_AB;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_Lines_AB;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, (-((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(308);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_dashLine_float_float_float_float_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jint param4) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:dashLine", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(311);
	frame[5].f = ((frame[2].f) - (frame[0].f));
	frame[6].f = ((frame[3].f) - (frame[1].f));
	LINE_NUMBER(313);
	frame[7].i = (jint(0));
	}
label_3:;
	{
	if ((frame[7].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(314);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, ((frame[0].f) + (((jfloat((frame[7].i))) / (jfloat((frame[4].i)))) * (frame[5].f))), ((frame[1].f) + (((jfloat((frame[7].i))) / (jfloat((frame[4].i)))) * (frame[6].f))), ((frame[0].f) + ((((jfloat((frame[7].i))) + (jfloat(1))) / (jfloat((frame[4].i)))) * (frame[5].f))), ((frame[1].f) + ((((jfloat((frame[7].i))) + (jfloat(1))) / (jfloat((frame[4].i)))) * (frame[6].f))));
	LINE_NUMBER(313);
	INST_IINC(7, 2);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(317);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_circle_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:circle", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(320);
	jfloat temp0 = frame[0].f;
	jfloat temp1 = frame[1].f;
	jint temp2 = (jint)SM_arc_graphics_g2d_Lines_circleVertices_float_R_int(ctx, (frame[2].f));
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float(ctx, temp0, temp1, temp2, (frame[2].f));
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_ellipse_float_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:ellipse", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(324);
	jint temp0 = (jint)SM_arc_graphics_g2d_Lines_circleVertices_float_R_int(ctx, (frame[2].f));
	SM_arc_graphics_g2d_Lines_ellipse_int_float_float_float_float_float(ctx, temp0, (frame[0].f), (frame[1].f), ((frame[3].f) * (frame[2].f)), ((frame[4].f) * (frame[2].f)), (frame[5].f));
	LINE_NUMBER(326);
	SM_arc_graphics_g2d_Lines_beginLine(ctx);
	LINE_NUMBER(327);
	jint temp1 = (jint)SM_arc_graphics_g2d_Lines_circleVertices_float_R_int(ctx, (frame[2].f));
	frame[6].f = (jfloat(temp1));
	LINE_NUMBER(328);
	frame[7].f = ((jfloat(360.0f)) / (frame[6].f));
	LINE_NUMBER(329);
	frame[8].i = (jint(0));
	}
label_5:;
	{
	if ((floatCompare((jfloat((frame[8].i))), (frame[6].f), 1)) >= 0) goto label_6;
	}
	{
	LINE_NUMBER(330);
	frame[9].f = ((frame[7].f) * (jfloat((frame[8].i))));
	LINE_NUMBER(331);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_u;
	jfloat temp0 = frame[5].f;
	jfloat temp1 = (frame[2].f) * (frame[3].f);
	jfloat temp2 = frame[9].f;
	LINE_NUMBER(332);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_cosDeg_float_R_float(ctx, temp2);
	jfloat temp4 = temp1 * temp3;
	jfloat temp5 = (frame[2].f) * (frame[4].f);
	jfloat temp6 = frame[9].f;
	LINE_NUMBER(333);
	jfloat temp7 = (jfloat)SM_arc_math_Mathf_sinDeg_float_R_float(ctx, temp6);
	jfloat temp8 = temp5 * temp7;
	LINE_NUMBER(331);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp4, temp8);
	LINE_NUMBER(335);
	jfloat temp9 = frame[0].f;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_u;
	jfloat temp10 = temp9 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	jfloat temp11 = frame[1].f;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_u;
	SM_arc_graphics_g2d_Lines_linePoint_float_float(ctx, temp10, (temp11 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y)));
	LINE_NUMBER(329);
	INST_IINC(8, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(337);
	SM_arc_graphics_g2d_Lines_endLine_boolean(ctx, (jint(1)));
	LINE_NUMBER(338);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_ellipse_int_float_float_float_float_float(jcontext ctx, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:ellipse", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].i = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(341);
	SM_arc_graphics_g2d_Lines_beginLine(ctx);
	LINE_NUMBER(342);
	frame[6].f = ((jfloat(360.0f)) / (jfloat((frame[0].i))));
	LINE_NUMBER(343);
	frame[7].i = (jint(0));
	}
label_3:;
	{
	if ((frame[7].i) >= (frame[0].i)) goto label_4;
	}
	{
	LINE_NUMBER(344);
	frame[8].f = ((frame[6].f) * (jfloat((frame[7].i))));
	LINE_NUMBER(345);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_u;
	jfloat temp0 = frame[5].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = frame[8].f;
	LINE_NUMBER(346);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_cosDeg_float_R_float(ctx, temp2);
	jfloat temp4 = temp1 * temp3;
	jfloat temp5 = frame[4].f;
	jfloat temp6 = frame[8].f;
	LINE_NUMBER(347);
	jfloat temp7 = (jfloat)SM_arc_math_Mathf_sinDeg_float_R_float(ctx, temp6);
	jfloat temp8 = temp5 * temp7;
	LINE_NUMBER(345);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp4, temp8);
	LINE_NUMBER(349);
	jfloat temp9 = frame[1].f;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_u;
	jfloat temp10 = temp9 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	jfloat temp11 = frame[2].f;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_u;
	SM_arc_graphics_g2d_Lines_linePoint_float_float(ctx, temp10, (temp11 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y)));
	LINE_NUMBER(343);
	INST_IINC(7, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(351);
	SM_arc_graphics_g2d_Lines_endLine_boolean(ctx, (jint(1)));
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_dashCircle_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:dashCircle", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(355);
	frame[3].f = (jfloat(0.6f));
	LINE_NUMBER(356);
	frame[4].i = ((10) + (jint(((frame[2].f) * (frame[3].f)))));
	LINE_NUMBER(357);
	if (((frame[4].i) % (jint(2))) != (jint(1))) goto label_3;
	}
	INST_IINC(4, 1);
label_3:;
	{
	LINE_NUMBER(359);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(361);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(362);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (jfloat(0)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((((jfloat(360.0f)) / (jfloat((frame[4].i)))) * (jfloat((frame[5].i)))) + (jfloat(90.0f))));
	LINE_NUMBER(363);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	frame[6].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	LINE_NUMBER(364);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	frame[7].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(366);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (jfloat(0)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((((jfloat(360.0f)) / (jfloat((frame[4].i)))) * (jfloat(((frame[5].i) + (jint(1)))))) + (jfloat(90.0f))));
	LINE_NUMBER(368);
	jfloat temp0 = (frame[6].f) + (frame[0].f);
	jfloat temp1 = (frame[7].f) + (frame[1].f);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	jfloat temp2 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) + (frame[0].f);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, temp0, temp1, temp2, (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) + (frame[1].f)));
	LINE_NUMBER(361);
	INST_IINC(5, 2);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(370);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_spikes_float_float_float_float_int_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jint param4, jfloat param5) {
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:spikes", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].i = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(373);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(0)), (jfloat(1)));
	LINE_NUMBER(374);
	frame[6].f = ((jfloat(360.0f)) / (jfloat((frame[4].i))));
	LINE_NUMBER(376);
	frame[7].i = (jint(0));
	}
label_3:;
	{
	if ((frame[7].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(377);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat((frame[7].i))) * (frame[6].f)) + (frame[5].f)), (frame[2].f));
	LINE_NUMBER(378);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	frame[8].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	frame[9].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(379);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((frame[2].f) + (frame[3].f)));
	LINE_NUMBER(381);
	jfloat temp0 = (frame[0].f) + (frame[8].f);
	jfloat temp1 = (frame[1].f) + (frame[9].f);
	jfloat temp2 = frame[0].f;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	jfloat temp3 = temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	jfloat temp4 = frame[1].f;
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, temp0, temp1, temp3, (temp4 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y)));
	LINE_NUMBER(376);
	INST_IINC(7, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(383);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_spikes_float_float_float_float_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jint param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:spikes", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(386);
	SM_arc_graphics_g2d_Lines_spikes_float_float_float_float_int_float(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].i), (jfloat(0)));
	LINE_NUMBER(387);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_quad_float_float_float_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:quad", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	{
	LINE_NUMBER(390);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_floatBuilder;
	((func_arc_struct_FloatSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(392);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_floatBuilder;
	((func_arc_struct_FloatSeq_add_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float_float_float_float])(ctx, sp[0].o, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(393);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_floatBuilder;
	((func_arc_struct_FloatSeq_add_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float_float_float_float])(ctx, sp[0].o, (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].f));
	LINE_NUMBER(395);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_floatBuilder;
	SM_arc_graphics_g2d_Lines_polyline_arc_struct_FloatSeq_boolean(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(396);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_poly_float_float_int_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jint param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[26];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:poly", 26 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(399);
	frame[6].f = (((frame[5].f) - (frame[4].f)) / (jfloat((frame[2].i))));
	LINE_NUMBER(400);
	jfloat temp0 = (clinit_arc_graphics_g2d_Lines(ctx), (jfloat)SF_arc_graphics_g2d_Lines_stroke) / (jfloat(2));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_cosDeg_float_R_float(ctx, ((frame[6].f) / (jfloat(2))));
	frame[7].f = (temp0 / temp1);
	LINE_NUMBER(401);
	frame[8].f = ((frame[3].f) - (frame[7].f));
	frame[9].f = ((frame[3].f) + (frame[7].f));
	LINE_NUMBER(403);
	frame[10].i = (jint(0));
	}
label_5:;
	{
	if ((frame[10].i) >= (frame[2].i)) goto label_6;
	}
	{
	LINE_NUMBER(404);
	frame[11].f = (((frame[6].f) * (jfloat((frame[10].i)))) + (frame[4].f));
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_cosDeg_float_R_float(ctx, (frame[11].f));
	frame[12].f = temp0;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sinDeg_float_R_float(ctx, (frame[11].f));
	frame[13].f = temp1;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_cosDeg_float_R_float(ctx, ((frame[11].f) + (frame[6].f)));
	frame[14].f = temp2;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_sinDeg_float_R_float(ctx, ((frame[11].f) + (frame[6].f)));
	frame[15].f = temp3;
	LINE_NUMBER(405);
	SM_arc_graphics_g2d_Fill_quad_float_float_float_float_float_float_float_float(ctx, ((frame[0].f) + ((frame[8].f) * (frame[12].f))), ((frame[1].f) + ((frame[8].f) * (frame[13].f))), ((frame[0].f) + ((frame[8].f) * (frame[14].f))), ((frame[1].f) + ((frame[8].f) * (frame[15].f))), ((frame[0].f) + ((frame[9].f) * (frame[14].f))), ((frame[1].f) + ((frame[9].f) * (frame[15].f))), ((frame[0].f) + ((frame[9].f) * (frame[12].f))), ((frame[1].f) + ((frame[9].f) * (frame[13].f))));
	LINE_NUMBER(403);
	INST_IINC(10, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(412);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_poly_float_float_int_float_float(jcontext ctx, jfloat param0, jfloat param1, jint param2, jfloat param3, jfloat param4) {
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:poly", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(415);
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float_float_float(ctx, (frame[0].f), (frame[1].f), (frame[2].i), (frame[3].f), (frame[4].f), ((frame[4].f) + (jfloat(360.0f))));
	LINE_NUMBER(416);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_poly_float_float_int_float(jcontext ctx, jfloat param0, jfloat param1, jint param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:poly", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(419);
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float_float(ctx, (frame[0].f), (frame[1].f), (frame[2].i), (frame[3].f), (jfloat(0)));
	LINE_NUMBER(420);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_poly_Array1_arc_math_geom_Vec2_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:poly", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(423);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(424);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[4].i)));
	LINE_NUMBER(425);
	if ((frame[4].i) != ((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (jint(1)))) goto label_5;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)));
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[4].i) + (jint(1))));
	sp += 1;
	}
label_6:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(426);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[5].o)))->F_x) * (frame[3].f)) + (frame[1].f)), ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[5].o)))->F_y) * (frame[3].f)) + (frame[2].f)), ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[6].o)))->F_x) * (frame[3].f)) + (frame[1].f)), ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[6].o)))->F_y) * (frame[3].f)) + (frame[2].f)));
	LINE_NUMBER(423);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(428);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_curve_float_float_float_float_float_float_float_float_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jint param8) {
	jtype frame[31];
	auto stack = &frame[28];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:curve", 31 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	frame[8].i = param8;
	{
	LINE_NUMBER(433);
	frame[9].f = ((jfloat(1)) / (jfloat((frame[8].i))));
	LINE_NUMBER(434);
	frame[10].f = ((frame[9].f) * (frame[9].f));
	LINE_NUMBER(435);
	frame[11].f = (((frame[9].f) * (frame[9].f)) * (frame[9].f));
	LINE_NUMBER(437);
	frame[12].f = ((jfloat(3.0f)) * (frame[9].f));
	LINE_NUMBER(438);
	frame[13].f = ((jfloat(3.0f)) * (frame[10].f));
	LINE_NUMBER(439);
	frame[14].f = ((jfloat(6.0f)) * (frame[10].f));
	LINE_NUMBER(440);
	frame[15].f = ((jfloat(6.0f)) * (frame[11].f));
	LINE_NUMBER(442);
	frame[16].f = (((frame[0].f) - ((frame[2].f) * (jfloat(2)))) + (frame[4].f));
	LINE_NUMBER(443);
	frame[17].f = (((frame[1].f) - ((frame[3].f) * (jfloat(2)))) + (frame[5].f));
	LINE_NUMBER(445);
	frame[18].f = (((((frame[2].f) - (frame[4].f)) * (jfloat(3.0f))) - (frame[0].f)) + (frame[6].f));
	LINE_NUMBER(446);
	frame[19].f = (((((frame[3].f) - (frame[5].f)) * (jfloat(3.0f))) - (frame[1].f)) + (frame[7].f));
	LINE_NUMBER(448);
	frame[20].f = (frame[0].f);
	LINE_NUMBER(449);
	frame[21].f = (frame[1].f);
	LINE_NUMBER(451);
	frame[22].f = (((((frame[2].f) - (frame[0].f)) * (frame[12].f)) + ((frame[16].f) * (frame[13].f))) + ((frame[18].f) * (frame[11].f)));
	LINE_NUMBER(452);
	frame[23].f = (((((frame[3].f) - (frame[1].f)) * (frame[12].f)) + ((frame[17].f) * (frame[13].f))) + ((frame[19].f) * (frame[11].f)));
	LINE_NUMBER(454);
	frame[24].f = (((frame[16].f) * (frame[14].f)) + ((frame[18].f) * (frame[15].f)));
	LINE_NUMBER(455);
	frame[25].f = (((frame[17].f) * (frame[14].f)) + ((frame[19].f) * (frame[15].f)));
	LINE_NUMBER(457);
	frame[26].f = ((frame[18].f) * (frame[15].f));
	LINE_NUMBER(458);
	frame[27].f = ((frame[19].f) * (frame[15].f));
	LINE_NUMBER(460);
	SM_arc_graphics_g2d_Lines_beginLine(ctx);
	}
label_20:;
	{
	LINE_NUMBER(462);
	jint temp0 = frame[8].i;
	INST_IINC(8, -1);
	if (temp0 <= 0) goto label_21;
	}
	{
	LINE_NUMBER(463);
	SM_arc_graphics_g2d_Lines_linePoint_float_float(ctx, (frame[20].f), (frame[21].f));
	LINE_NUMBER(465);
	frame[20].f = ((frame[20].f) + (frame[22].f));
	LINE_NUMBER(466);
	frame[21].f = ((frame[21].f) + (frame[23].f));
	LINE_NUMBER(467);
	frame[22].f = ((frame[22].f) + (frame[24].f));
	LINE_NUMBER(468);
	frame[23].f = ((frame[23].f) + (frame[25].f));
	LINE_NUMBER(469);
	frame[24].f = ((frame[24].f) + (frame[26].f));
	LINE_NUMBER(470);
	frame[25].f = ((frame[25].f) + (frame[27].f));
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(473);
	SM_arc_graphics_g2d_Lines_linePoint_float_float(ctx, (frame[6].f), (frame[7].f));
	LINE_NUMBER(475);
	SM_arc_graphics_g2d_Lines_endLine(ctx);
	LINE_NUMBER(476);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_arc_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:arc", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(479);
	SM_arc_graphics_g2d_Lines_arc_float_float_float_float_float(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), (jfloat(0)));
	LINE_NUMBER(480);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_arc_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:arc", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(483);
	SM_arc_graphics_g2d_Lines_arc_float_float_float_float_float_int(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (50));
	LINE_NUMBER(484);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_arc_float_float_float_float_float_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jint param5) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:arc", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(487);
	jint temp0 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, ((jfloat((frame[5].i))) * (frame[3].f)));
	frame[6].i = temp0;
	LINE_NUMBER(488);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_floats;
	((func_arc_struct_FloatSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(490);
	frame[7].i = (jint(0));
	}
label_3:;
	{
	if ((frame[7].i) > (frame[6].i)) goto label_4;
	}
	{
	LINE_NUMBER(491);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((((jfloat((frame[7].i))) / (jfloat((frame[6].i)))) * (frame[3].f)) * (jfloat(360.0f))) + (frame[4].f)), (frame[2].f));
	LINE_NUMBER(492);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	frame[8].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	LINE_NUMBER(493);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	frame[9].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(495);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_vector;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((((jfloat(((frame[7].i) + (jint(1))))) / (jfloat((frame[6].i)))) * (frame[3].f)) * (jfloat(360.0f))) + (frame[4].f)), (frame[2].f));
	LINE_NUMBER(497);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_floats;
	((func_arc_struct_FloatSeq_add_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float_float])(ctx, sp[0].o, ((frame[8].f) + (frame[0].f)), ((frame[9].f) + (frame[1].f)));
	LINE_NUMBER(490);
	INST_IINC(7, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(500);
	clinit_arc_graphics_g2d_Lines(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_Lines_floats;
	SM_arc_graphics_g2d_Lines_polyline_arc_struct_FloatSeq_boolean(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(501);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_square_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:square", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(504);
	SM_arc_graphics_g2d_Lines_rect_float_float_float_float(ctx, ((frame[0].f) - (frame[2].f)), ((frame[1].f) - (frame[2].f)), ((frame[2].f) * (jfloat(2))), ((frame[2].f) * (jfloat(2))));
	LINE_NUMBER(505);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_square_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:square", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(508);
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float_float(ctx, (frame[0].f), (frame[1].f), (jint(4)), (frame[2].f), ((frame[3].f) - (jfloat(45.0f))));
	LINE_NUMBER(509);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_rect_float_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:rect", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(512);
	frame[0].f = ((frame[0].f) - (frame[4].f));
	LINE_NUMBER(513);
	frame[1].f = ((frame[1].f) - (frame[5].f));
	LINE_NUMBER(514);
	frame[2].f = ((frame[2].f) + ((frame[4].f) * (jfloat(2))));
	LINE_NUMBER(515);
	frame[3].f = ((frame[3].f) + ((frame[5].f) * (jfloat(2))));
	LINE_NUMBER(517);
	SM_arc_graphics_g2d_Fill_crect_float_float_float_float(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (clinit_arc_graphics_g2d_Lines(ctx), (jfloat)SF_arc_graphics_g2d_Lines_stroke));
	LINE_NUMBER(518);
	SM_arc_graphics_g2d_Fill_crect_float_float_float_float(ctx, (frame[0].f), ((frame[1].f) + (frame[3].f)), (frame[2].f), (-(clinit_arc_graphics_g2d_Lines(ctx), (jfloat)SF_arc_graphics_g2d_Lines_stroke)));
	LINE_NUMBER(520);
	SM_arc_graphics_g2d_Fill_crect_float_float_float_float(ctx, ((frame[0].f) + (frame[2].f)), (frame[1].f), (-(clinit_arc_graphics_g2d_Lines(ctx), (jfloat)SF_arc_graphics_g2d_Lines_stroke)), (frame[3].f));
	LINE_NUMBER(521);
	SM_arc_graphics_g2d_Fill_crect_float_float_float_float(ctx, (frame[0].f), (frame[1].f), (clinit_arc_graphics_g2d_Lines(ctx), (jfloat)SF_arc_graphics_g2d_Lines_stroke), (frame[3].f));
	LINE_NUMBER(522);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_rect_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:rect", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(525);
	SM_arc_graphics_g2d_Lines_rect_float_float_float_float_float(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), (jfloat(0)));
	LINE_NUMBER(526);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_rect_arc_math_geom_Rect(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:rect", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(529);
	SM_arc_graphics_g2d_Lines_rect_float_float_float_float_float(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height), (jfloat(0)));
	LINE_NUMBER(530);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_rect_float_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:rect", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(533);
	SM_arc_graphics_g2d_Lines_rect_float_float_float_float_float_float(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[4].f));
	LINE_NUMBER(534);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_stroke_float(jcontext ctx, jfloat param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:stroke", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(537);
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_stroke = (frame[0].f);
	LINE_NUMBER(538);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(jcontext ctx, jfloat param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:stroke", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(541);
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_stroke = (frame[0].f);
	LINE_NUMBER(542);
	if (frame[1].o) {
		SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, (frame[1].o));
	}
	LINE_NUMBER(543);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_graphics_g2d_Lines_getStroke_R_float(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:getStroke", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	{
	LINE_NUMBER(546);
	popStackFrame(ctx);
	return (clinit_arc_graphics_g2d_Lines(ctx), (jfloat)SF_arc_graphics_g2d_Lines_stroke);
	}

	popStackFrame(ctx);
}

void clinit_arc_graphics_g2d_Lines(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_graphics_g2d_Lines_miterLimit = jfloat(4.0f);
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/Lines:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_Lines(ctx);
	{
	LINE_NUMBER(10);
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_useLegacyLine = (jint(0));
	LINE_NUMBER(12);
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_stroke = (jfloat(1));
	LINE_NUMBER(13);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_vector = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_u = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_v = sp[0].o;
	LINE_NUMBER(14);
	clinit_arc_struct_FloatSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_FloatSeq);
	init_arc_struct_FloatSeq_int(ctx, sp[0].o, (20));
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_floats = sp[0].o;
	LINE_NUMBER(15);
	clinit_arc_struct_FloatSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_FloatSeq);
	init_arc_struct_FloatSeq_int(ctx, sp[0].o, (20));
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_floatBuilder = sp[0].o;
	LINE_NUMBER(17);
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_circlePrecision = (jfloat(0.4f));
	LINE_NUMBER(168);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_AB = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_BC = sp[0].o;
	LINE_NUMBER(169);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_A = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_B = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_C = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_E = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_D = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_vec1 = sp[0].o;
	LINE_NUMBER(170);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_D0 = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_E0 = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_q1 = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_q2 = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_q3 = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_q4 = sp[0].o;
	LINE_NUMBER(171);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_D2 = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_E2 = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_D02 = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_graphics_g2d_Lines(ctx);
	SF_arc_graphics_g2d_Lines_E02 = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_Lines[] {
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
	{ "useLegacyLine", &class_boolean, (intptr_t) &SF_arc_graphics_g2d_Lines_useLegacyLine, "Z", 9 },
	{ "stroke", &class_float, (intptr_t) &SF_arc_graphics_g2d_Lines_stroke, "F", 10 },
	{ "vector", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_graphics_g2d_Lines_vector, "Larc/math/geom/Vec2;", 10 },
	{ "u", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_graphics_g2d_Lines_u, "Larc/math/geom/Vec2;", 10 },
	{ "v", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_graphics_g2d_Lines_v, "Larc/math/geom/Vec2;", 10 },
	{ "floats", &class_arc_struct_FloatSeq, (intptr_t) &SF_arc_graphics_g2d_Lines_floats, "Larc/struct/FloatSeq;", 10 },
	{ "floatBuilder", &class_arc_struct_FloatSeq, (intptr_t) &SF_arc_graphics_g2d_Lines_floatBuilder, "Larc/struct/FloatSeq;", 10 },
	{ "building", &class_boolean, (intptr_t) &SF_arc_graphics_g2d_Lines_building, "Z", 10 },
	{ "circlePrecision", &class_float, (intptr_t) &SF_arc_graphics_g2d_Lines_circlePrecision, "F", 10 },
	{ "AB", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_graphics_g2d_Lines_AB, "Larc/math/geom/Vec2;", 26 },
	{ "BC", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_graphics_g2d_Lines_BC, "Larc/math/geom/Vec2;", 26 },
	{ "A", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_graphics_g2d_Lines_A, "Larc/math/geom/Vec2;", 26 },
	{ "B", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_graphics_g2d_Lines_B, "Larc/math/geom/Vec2;", 26 },
	{ "C", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_graphics_g2d_Lines_C, "Larc/math/geom/Vec2;", 26 },
	{ "E", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_graphics_g2d_Lines_E, "Larc/math/geom/Vec2;", 26 },
	{ "D", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_graphics_g2d_Lines_D, "Larc/math/geom/Vec2;", 26 },
	{ "vec1", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_graphics_g2d_Lines_vec1, "Larc/math/geom/Vec2;", 26 },
	{ "D0", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_graphics_g2d_Lines_D0, "Larc/math/geom/Vec2;", 26 },
	{ "E0", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_graphics_g2d_Lines_E0, "Larc/math/geom/Vec2;", 26 },
	{ "q1", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_graphics_g2d_Lines_q1, "Larc/math/geom/Vec2;", 26 },
	{ "q2", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_graphics_g2d_Lines_q2, "Larc/math/geom/Vec2;", 26 },
	{ "q3", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_graphics_g2d_Lines_q3, "Larc/math/geom/Vec2;", 26 },
	{ "q4", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_graphics_g2d_Lines_q4, "Larc/math/geom/Vec2;", 26 },
	{ "D2", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_graphics_g2d_Lines_D2, "Larc/math/geom/Vec2;", 26 },
	{ "E2", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_graphics_g2d_Lines_E2, "Larc/math/geom/Vec2;", 26 },
	{ "D02", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_graphics_g2d_Lines_D02, "Larc/math/geom/Vec2;", 26 },
	{ "E02", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_graphics_g2d_Lines_E02, "Larc/math/geom/Vec2;", 26 },
	{ "miterLimit", &class_float, (intptr_t) &SF_arc_graphics_g2d_Lines_miterLimit, "F", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_Lines, 0, "()V", 1 },
	{ "setCirclePrecision", (intptr_t) SM_arc_graphics_g2d_Lines_setCirclePrecision_float, 0, "(F)V", 9 },
	{ "circleVertices", (intptr_t) SM_arc_graphics_g2d_Lines_circleVertices_float_R_int, 0, "(F)I", 9 },
	{ "lineAngle", (intptr_t) SM_arc_graphics_g2d_Lines_lineAngle_float_float_float_float_boolean, 0, "(FFFFZ)V", 9 },
	{ "lineAngle", (intptr_t) SM_arc_graphics_g2d_Lines_lineAngle_float_float_float_float, 0, "(FFFF)V", 9 },
	{ "lineAngle", (intptr_t) SM_arc_graphics_g2d_Lines_lineAngle_float_float_float_float_float, 0, "(FFFFF)V", 9 },
	{ "lineAngleCenter", (intptr_t) SM_arc_graphics_g2d_Lines_lineAngleCenter_float_float_float_float_boolean, 0, "(FFFFZ)V", 9 },
	{ "lineAngleCenter", (intptr_t) SM_arc_graphics_g2d_Lines_lineAngleCenter_float_float_float_float, 0, "(FFFF)V", 9 },
	{ "line", (intptr_t) SM_arc_graphics_g2d_Lines_line_float_float_float_float, 0, "(FFFF)V", 9 },
	{ "line", (intptr_t) SM_arc_graphics_g2d_Lines_line_float_float_arc_graphics_Color_float_float_arc_graphics_Color, 0, "(FFLarc/graphics/Color;FFLarc/graphics/Color;)V", 9 },
	{ "line", (intptr_t) SM_arc_graphics_g2d_Lines_line_float_float_float_float_boolean, 0, "(FFFFZ)V", 9 },
	{ "line", (intptr_t) SM_arc_graphics_g2d_Lines_line_arc_graphics_g2d_TextureRegion_float_float_float_float_boolean, 0, "(Larc/graphics/g2d/TextureRegion;FFFFZ)V", 9 },
	{ "line", (intptr_t) SM_arc_graphics_g2d_Lines_line_arc_graphics_g2d_TextureRegion_float_float_arc_graphics_Color_float_float_arc_graphics_Color_boolean, 0, "(Larc/graphics/g2d/TextureRegion;FFLarc/graphics/Color;FFLarc/graphics/Color;Z)V", 9 },
	{ "line", (intptr_t) SM_arc_graphics_g2d_Lines_line_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_boolean, 0, "(Larc/graphics/g2d/TextureRegion;FFFFFFZ)V", 9 },
	{ "linePoint", (intptr_t) SM_arc_graphics_g2d_Lines_linePoint_arc_math_geom_Position, 0, "(Larc/math/geom/Position;)V", 9 },
	{ "linePoint", (intptr_t) SM_arc_graphics_g2d_Lines_linePoint_float_float, 0, "(FF)V", 9 },
	{ "beginLine", (intptr_t) SM_arc_graphics_g2d_Lines_beginLine, 0, "()V", 9 },
	{ "endLine", (intptr_t) SM_arc_graphics_g2d_Lines_endLine, 0, "()V", 9 },
	{ "endLine", (intptr_t) SM_arc_graphics_g2d_Lines_endLine_boolean, 0, "(Z)V", 9 },
	{ "endLine", (intptr_t) SM_arc_graphics_g2d_Lines_endLine_boolean_boolean, 0, "(ZZ)V", 9 },
	{ "polyline", (intptr_t) SM_arc_graphics_g2d_Lines_polyline_arc_struct_FloatSeq_boolean, 0, "(Larc/struct/FloatSeq;Z)V", 9 },
	{ "polyline", (intptr_t) SM_arc_graphics_g2d_Lines_polyline_Array1_float_int_boolean, 0, "([FIZ)V", 9 },
	{ "polyline", (intptr_t) SM_arc_graphics_g2d_Lines_polyline_Array1_float_int_boolean_boolean, 0, "([FIZZ)V", 9 },
	{ "pushQuad", (intptr_t) SM_arc_graphics_g2d_Lines_pushQuad, 0, "()V", 10 },
	{ "pushBevelFill", (intptr_t) SM_arc_graphics_g2d_Lines_pushBevelFill_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2, 0, "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)V", 10 },
	{ "prepareFlatEndpoint", (intptr_t) SM_arc_graphics_g2d_Lines_prepareFlatEndpoint_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_float, 0, "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;F)V", 10 },
	{ "prepareFlatEndpoint", (intptr_t) SM_arc_graphics_g2d_Lines_prepareFlatEndpoint_float_float_float_float_arc_math_geom_Vec2_arc_math_geom_Vec2_float, 0, "(FFFFLarc/math/geom/Vec2;Larc/math/geom/Vec2;F)V", 10 },
	{ "preparePointyJoin", (intptr_t) SM_arc_graphics_g2d_Lines_preparePointyJoin_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_float_boolean, 0, "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;FZ)V", 10 },
	{ "angleRad", (intptr_t) SM_arc_graphics_g2d_Lines_angleRad_arc_math_geom_Vec2_arc_math_geom_Vec2_R_float, 0, "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;)F", 10 },
	{ "prepareStraightJoin", (intptr_t) SM_arc_graphics_g2d_Lines_prepareStraightJoin_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_float, 0, "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;F)V", 10 },
	{ "dashLine", (intptr_t) SM_arc_graphics_g2d_Lines_dashLine_float_float_float_float_int, 0, "(FFFFI)V", 9 },
	{ "circle", (intptr_t) SM_arc_graphics_g2d_Lines_circle_float_float_float, 0, "(FFF)V", 9 },
	{ "ellipse", (intptr_t) SM_arc_graphics_g2d_Lines_ellipse_float_float_float_float_float_float, 0, "(FFFFFF)V", 9 },
	{ "ellipse", (intptr_t) SM_arc_graphics_g2d_Lines_ellipse_int_float_float_float_float_float, 0, "(IFFFFF)V", 9 },
	{ "dashCircle", (intptr_t) SM_arc_graphics_g2d_Lines_dashCircle_float_float_float, 0, "(FFF)V", 9 },
	{ "spikes", (intptr_t) SM_arc_graphics_g2d_Lines_spikes_float_float_float_float_int_float, 0, "(FFFFIF)V", 9 },
	{ "spikes", (intptr_t) SM_arc_graphics_g2d_Lines_spikes_float_float_float_float_int, 0, "(FFFFI)V", 9 },
	{ "quad", (intptr_t) SM_arc_graphics_g2d_Lines_quad_float_float_float_float_float_float_float_float, 0, "(FFFFFFFF)V", 9 },
	{ "poly", (intptr_t) SM_arc_graphics_g2d_Lines_poly_float_float_int_float_float_float, 0, "(FFIFFF)V", 9 },
	{ "poly", (intptr_t) SM_arc_graphics_g2d_Lines_poly_float_float_int_float_float, 0, "(FFIFF)V", 9 },
	{ "poly", (intptr_t) SM_arc_graphics_g2d_Lines_poly_float_float_int_float, 0, "(FFIF)V", 9 },
	{ "poly", (intptr_t) SM_arc_graphics_g2d_Lines_poly_Array1_arc_math_geom_Vec2_float_float_float, 0, "([Larc/math/geom/Vec2;FFF)V", 9 },
	{ "curve", (intptr_t) SM_arc_graphics_g2d_Lines_curve_float_float_float_float_float_float_float_float_int, 0, "(FFFFFFFFI)V", 9 },
	{ "arc", (intptr_t) SM_arc_graphics_g2d_Lines_arc_float_float_float_float, 0, "(FFFF)V", 9 },
	{ "arc", (intptr_t) SM_arc_graphics_g2d_Lines_arc_float_float_float_float_float, 0, "(FFFFF)V", 9 },
	{ "arc", (intptr_t) SM_arc_graphics_g2d_Lines_arc_float_float_float_float_float_int, 0, "(FFFFFI)V", 9 },
	{ "square", (intptr_t) SM_arc_graphics_g2d_Lines_square_float_float_float, 0, "(FFF)V", 9 },
	{ "square", (intptr_t) SM_arc_graphics_g2d_Lines_square_float_float_float_float, 0, "(FFFF)V", 9 },
	{ "rect", (intptr_t) SM_arc_graphics_g2d_Lines_rect_float_float_float_float_float_float, 0, "(FFFFFF)V", 9 },
	{ "rect", (intptr_t) SM_arc_graphics_g2d_Lines_rect_float_float_float_float, 0, "(FFFF)V", 9 },
	{ "rect", (intptr_t) SM_arc_graphics_g2d_Lines_rect_arc_math_geom_Rect, 0, "(Larc/math/geom/Rect;)V", 9 },
	{ "rect", (intptr_t) SM_arc_graphics_g2d_Lines_rect_float_float_float_float_float, 0, "(FFFFF)V", 9 },
	{ "stroke", (intptr_t) SM_arc_graphics_g2d_Lines_stroke_float, 0, "(F)V", 9 },
	{ "stroke", (intptr_t) SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color, 0, "(FLarc/graphics/Color;)V", 9 },
	{ "getStroke", (intptr_t) SM_arc_graphics_g2d_Lines_getStroke_R_float, 0, "()F", 9 },
	{ "<clinit>", (intptr_t) clinit_arc_graphics_g2d_Lines, 0, "()V", 8 },
};

Class class_arc_graphics_g2d_Lines{
		.nativeName = (intptr_t) "arc/graphics/g2d/Lines",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_Lines),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_Lines,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_Lines,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_Lines,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 28,
		.nativeFields = (intptr_t) fields,
		.methodCount = 56,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_Lines = registerClass(&class_arc_graphics_g2d_Lines);

}
