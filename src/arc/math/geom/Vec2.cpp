#include "arc/math/geom/Vec2.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/StringBuilder.h"
#include "arc/math/geom/Vector.h"
#include "arc/math/Angles.h"
#include "arc/math/Rand.h"
#include "arc/math/Interp.h"
#include "arc/util/Time.h"
#include "java/lang/Float.h"
#include "arc/math/Mat.h"
#include "arc/math/geom/Vec3.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/NumberFormatException.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/math/geom/Position.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"

extern "C" {

jobject SF_arc_math_geom_Vec2_X;
jobject SF_arc_math_geom_Vec2_Y;
jobject SF_arc_math_geom_Vec2_ZERO;

void mark_arc_math_geom_Vec2(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_math_geom_Vec2_X)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Vec2_X)->clazz)->markFunction)((jobject) SF_arc_math_geom_Vec2_X, mark, depth + 1);
		if (SF_arc_math_geom_Vec2_Y)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Vec2_Y)->clazz)->markFunction)((jobject) SF_arc_math_geom_Vec2_Y, mark, depth + 1);
		if (SF_arc_math_geom_Vec2_ZERO)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Vec2_ZERO)->clazz)->markFunction)((jobject) SF_arc_math_geom_Vec2_ZERO, mark, depth + 1);
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
	auto self = (arc_math_geom_Vec2 *) object;
}

void init_arc_math_geom_Vec2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Vec2(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(19);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_Vec2_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Vec2(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(27);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(28);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(29);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_Vec2_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Vec2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(37);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:trns", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[2].f), (jfloat(0)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:trns", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[2].f), (frame[3].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_trnsExact_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:trnsExact", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[2].f), (jfloat(0)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotateRadExact_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotateRadExact_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((frame[1].f) * (jfloat(0.017453292f))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_snap_R_arc_math_geom_Vec2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:snap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (jfloat((jint(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x))))), (jfloat((jint(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y))))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_div_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:div", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) / ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) / ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vec2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:cpy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2_arc_math_geom_Vec2(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec2_len_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:len", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x)) + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec2_len2_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:len2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x)) + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y)));
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(81);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(82);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = temp0;
	LINE_NUMBER(88);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = temp1;
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(99);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(100);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_set_arc_math_geom_Vec3_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(105);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(106);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:sub", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:sub", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:sub", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(128);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) - (frame[1].f));
	LINE_NUMBER(129);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) - (frame[2].f));
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:sub", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_nor_R_arc_math_geom_Vec2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:nor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(139);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, (frame[0].o));
	frame[1].f = temp0;
	LINE_NUMBER(140);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(141);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) / (frame[1].f));
	LINE_NUMBER(142);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) / (frame[1].f));
	}
label_2:;
	{
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(150);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_add_arc_math_geom_Position_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(155);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_add_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:add", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(159);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) * (frame[2].f)));
	LINE_NUMBER(160);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) * (frame[2].f)));
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) + (frame[1].f));
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) + (frame[2].f));
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:dot", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(178);
	popStackFrame(ctx);
	return ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x)) + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y)));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec2_dot_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:dot", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[1].f)) + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[2].f)));
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:scl", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) * (frame[1].f));
	LINE_NUMBER(188);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) * (frame[1].f));
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_inv_R_arc_math_geom_Vec2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:inv", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (jfloat(-1.0f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_scl_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:scl", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(201);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) * (frame[1].f));
	LINE_NUMBER(202);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) * (frame[2].f));
	LINE_NUMBER(203);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_scl_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:scl", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(208);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(209);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(210);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:mulAdd", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) * (frame[2].f)));
	LINE_NUMBER(216);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) * (frame[2].f)));
	LINE_NUMBER(217);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:mulAdd", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(222);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x)));
	LINE_NUMBER(223);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y)));
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec2_dst_arc_math_geom_Vec2_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:dst", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(229);
	frame[2].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(230);
	frame[3].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(231);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((frame[2].f) * (frame[2].f)) + ((frame[3].f) * (frame[3].f))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec2_dst_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:dst", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(240);
	frame[3].f = ((frame[1].f) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(241);
	frame[4].f = ((frame[2].f) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(242);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((frame[3].f) * (frame[3].f)) + ((frame[4].f) * (frame[4].f))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec2_dst2_arc_math_geom_Vec2_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:dst2", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(247);
	frame[2].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(248);
	frame[3].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(249);
	popStackFrame(ctx);
	return (((frame[2].f) * (frame[2].f)) + ((frame[3].f) * (frame[3].f)));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec2_dst2_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:dst2", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(258);
	frame[3].f = ((frame[1].f) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(259);
	frame[4].f = ((frame[2].f) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(260);
	popStackFrame(ctx);
	return (((frame[3].f) * (frame[3].f)) + ((frame[4].f) * (frame[4].f)));
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_clampLength_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:clampLength", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(264);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_len2_R_float])(ctx, (frame[0].o));
	frame[3].f = temp0;
	LINE_NUMBER(265);
	if ((floatCompare((frame[3].f), ((frame[2].f) * (frame[2].f)), -1)) < 0) goto label_2;
	}
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(267);
	if ((floatCompare((frame[3].f), ((frame[1].f) * (frame[1].f)), 1)) > 0) goto label_4;
	}
	{
	LINE_NUMBER(268);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:limit", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_limit2_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_limit2_float_R_arc_math_geom_Vec2])(ctx, (frame[0].o), ((frame[1].f) * (frame[1].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_limit2_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:limit2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(280);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_len2_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(281);
	if ((floatCompare((frame[2].f), (frame[1].f), -1)) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((frame[1].f) / (frame[2].f)))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(temp0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_clamp_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:clamp", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(289);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_len2_R_float])(ctx, (frame[0].o));
	frame[3].f = temp0;
	LINE_NUMBER(290);
	if ((floatCompare((frame[3].f), (jfloat(0)), -1)) != 0) goto label_2;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(291);
	frame[4].f = ((frame[2].f) * (frame[2].f));
	LINE_NUMBER(292);
	if ((floatCompare((frame[3].f), (frame[4].f), -1)) <= 0) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((frame[4].f) / (frame[3].f)))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(temp0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(293);
	frame[5].f = ((frame[1].f) * (frame[1].f));
	LINE_NUMBER(294);
	if ((floatCompare((frame[3].f), (frame[5].f), 1)) >= 0) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((frame[5].f) / (frame[3].f)))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(temp0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(295);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:setLength", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength2_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_setLength2_float_R_arc_math_geom_Vec2])(ctx, (frame[0].o), ((frame[1].f) * (frame[1].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_setLength2_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:setLength2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(305);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_len2_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(306);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) == 0) goto label_2;
	}
	{
	if ((floatCompare((frame[2].f), (frame[1].f), -1)) != 0) goto label_3;
	}
label_2:;
	INST_ALOAD(0);
	goto label_4;
label_3:;
	{
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((frame[1].f) / (frame[2].f)))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(temp0)));
	sp += 1;
	}
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(315);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_clamp_float_float_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:clamp", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(319);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x), (frame[1].f), (frame[3].f));
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = temp0;
	LINE_NUMBER(320);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y), (frame[2].f), (frame[4].f));
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = temp1;
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_tryFromString_java_lang_String_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:tryFromString", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(326);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[1].o), (44), (jint(1)));
	frame[2].i = temp0;
	LINE_NUMBER(327);
	if ((frame[2].i) == (jint(-1))) { popExceptionFrames(frameRef, 1); goto label_5; }
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (40)) { popExceptionFrames(frameRef, 1); goto label_5; }
	}
	{
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (temp0 - (jint(1))));
	if (temp1 != (41)) { popExceptionFrames(frameRef, 1); goto label_5; }
	}
	{
	LINE_NUMBER(328);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (jint(1)), (frame[2].i));
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[3].f = temp0;
	LINE_NUMBER(329);
	sp[0].o = frame[1].o;
	jint temp1 = (frame[2].i) + (jint(1));
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp1, (temp2 - (jint(1))));
	jfloat temp3 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[4].f = temp3;
	LINE_NUMBER(330);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[3].f), (frame[4].f));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_5:;
	LINE_NUMBER(334);
	goto label_9;
label_2:;
	LINE_NUMBER(332);
	INST_ASTORE(2);
label_9:;
	{
	LINE_NUMBER(335);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_fromString_java_lang_String_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:fromString", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(344);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[1].o), (44), (jint(1)));
	frame[2].i = temp0;
	LINE_NUMBER(345);
	if ((frame[2].i) == (jint(-1))) goto label_6;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (40)) goto label_6;
	}
	{
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (temp0 - (jint(1))));
	if (temp1 != (41)) goto label_6;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(347);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (jint(1)), (frame[2].i));
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[3].f = temp0;
	LINE_NUMBER(348);
	sp[0].o = frame[1].o;
	jint temp1 = (frame[2].i) + (jint(1));
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp1, (temp2 - (jint(1))));
	jfloat temp3 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[4].f = temp3;
	LINE_NUMBER(349);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[3].f), (frame[4].f));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	LINE_NUMBER(350);
	INST_ASTORE(3);
label_6:;
	{
	LINE_NUMBER(354);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Malformed Vec2: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_mul_arc_math_Mat_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:mul", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(363);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp1 = temp0 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))));
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp3 = temp1 + (temp2 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)))));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	frame[2].f = (temp3 + ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6))));
	LINE_NUMBER(364);
	jfloat temp4 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp5 = temp4 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))));
	jfloat temp6 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp7 = temp5 + (temp6 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)))));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	frame[3].f = (temp7 + ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))));
	LINE_NUMBER(365);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x = (frame[2].f);
	LINE_NUMBER(366);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y = (frame[3].f);
	LINE_NUMBER(367);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec2_crs_arc_math_geom_Vec2_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:crs", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(376);
	popStackFrame(ctx);
	return ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y)) - (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x)));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec2_crs_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:crs", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(386);
	popStackFrame(ctx);
	return ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[2].f)) - (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[1].f)));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec2_angle_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:angle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(394);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_atan2_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y));
	frame[1].f = (temp0 * (jfloat(57.295776f)));
	LINE_NUMBER(395);
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) >= 0) goto label_2;
	}
	{
	frame[1].f = ((frame[1].f) + (jfloat(360.0f)));
	}
label_2:;
	{
	LINE_NUMBER(396);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec2_angle_arc_math_geom_Vec2_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:angle", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(404);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_crs_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_crs_arc_math_geom_Vec2_R_float])(ctx, (frame[0].o), (frame[1].o));
	jdouble temp1 = jdouble(temp0);
	jfloat temp2 = (jfloat)((func_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float])(ctx, (frame[0].o), (frame[1].o));
	jdouble temp3 = (jdouble)SM_java_lang_Math_atan2_double_double_R_double(ctx, temp1, (jdouble(temp2)));
	popStackFrame(ctx);
	return ((jfloat(temp3)) * (jfloat(57.295776f)));
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:rnd", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(409);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vec2])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f));
	LINE_NUMBER(410);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec2_angleRad_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:angleRad", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(418);
	jdouble temp0 = (jdouble)SM_java_lang_Math_atan2_double_double_R_double(ctx, (jdouble(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y))), (jdouble(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec2_angleRad_arc_math_geom_Vec2_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:angleRad", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(426);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_crs_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_crs_arc_math_geom_Vec2_R_float])(ctx, (frame[0].o), (frame[1].o));
	jdouble temp1 = jdouble(temp0);
	jfloat temp2 = (jfloat)((func_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float])(ctx, (frame[0].o), (frame[1].o));
	jdouble temp3 = (jdouble)SM_java_lang_Math_atan2_double_double_R_double(ctx, temp1, (jdouble(temp2)));
	popStackFrame(ctx);
	return (jfloat(temp3));
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:setAngle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(434);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setAngleRad_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_setAngleRad_float_R_arc_math_geom_Vec2])(ctx, (frame[0].o), ((frame[1].f) * (jfloat(0.017453292f))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_setAngleRad_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:setAngleRad", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(442);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, (jfloat(0)));
	LINE_NUMBER(443);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotateRad_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_rotateRad_float_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(445);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_rotateTo_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:rotateTo", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(449);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_angle_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_angle_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)SM_arc_math_Angles_moveToward_float_float_float_R_float(ctx, temp0, (frame[1].f), (frame[2].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:rotate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(457);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotateRad_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_rotateRad_float_R_arc_math_geom_Vec2])(ctx, (frame[0].o), ((frame[1].f) * (jfloat(0.017453292f))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_rotateAround_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:rotateAround", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(466);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_rotateRad_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:rotateRad", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(474);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_cos_float_R_float(ctx, (frame[1].f));
	frame[2].f = temp0;
	LINE_NUMBER(475);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sin_float_R_float(ctx, (frame[1].f));
	frame[3].f = temp1;
	LINE_NUMBER(477);
	frame[4].f = ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[2].f)) - (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[3].f)));
	LINE_NUMBER(478);
	frame[5].f = ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[3].f)) + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[2].f)));
	LINE_NUMBER(480);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x = (frame[4].f);
	LINE_NUMBER(481);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y = (frame[5].f);
	LINE_NUMBER(483);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_rotateRadExact_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:rotateRadExact", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(487);
	jdouble temp0 = (jdouble)SM_java_lang_Math_cos_double_R_double(ctx, (jdouble((frame[1].f))));
	frame[2].f = (jfloat(temp0));
	LINE_NUMBER(488);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble((frame[1].f))));
	frame[3].f = (jfloat(temp1));
	LINE_NUMBER(490);
	frame[4].f = ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[2].f)) - (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[3].f)));
	LINE_NUMBER(491);
	frame[5].f = ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[3].f)) + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[2].f)));
	LINE_NUMBER(493);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x = (frame[4].f);
	LINE_NUMBER(494);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y = (frame[5].f);
	LINE_NUMBER(496);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_rotateAroundRad_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:rotateAroundRad", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(505);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotateRad_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotateRad_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_rotate90_int_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:rotate90", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(510);
	frame[2].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(511);
	if ((frame[1].i) < 0) goto label_2;
	}
	{
	LINE_NUMBER(512);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x = (-((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(513);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(515);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(516);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y = (-(frame[2].f));
	}
label_5:;
	{
	LINE_NUMBER(518);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_approachDelta_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:approachDelta", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(522);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_approach_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_approach_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[1].o), ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) * (frame[2].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_approach_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:approach", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(526);
	frame[3].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x));
	frame[4].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(527);
	frame[5].f = ((frame[2].f) * (frame[2].f));
	LINE_NUMBER(528);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_len2_float_float_R_float(ctx, (frame[3].f), (frame[4].f));
	frame[6].f = temp0;
	LINE_NUMBER(530);
	if ((floatCompare((frame[6].f), (frame[5].f), -1)) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(531);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_sqrt_float_R_float(ctx, ((frame[5].f) / (frame[6].f)));
	frame[7].f = temp0;
	LINE_NUMBER(532);
	frame[3].f = ((frame[3].f) * (frame[7].f));
	LINE_NUMBER(533);
	frame[4].f = ((frame[4].f) * (frame[7].f));
	LINE_NUMBER(535);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[3].f), (frame[4].f));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(537);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_lerpPast_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:lerpPast", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(542);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x) + ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x)) * (frame[2].f)));
	LINE_NUMBER(543);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y) + ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y)) * (frame[2].f)));
	LINE_NUMBER(544);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_lerpDelta_float_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:lerpDelta", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(548);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((frame[3].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	frame[3].f = temp0;
	LINE_NUMBER(549);
	frame[4].f = ((jfloat(1)) - (frame[3].f));
	LINE_NUMBER(550);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x = ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[4].f)) + ((frame[1].f) * (frame[3].f)));
	LINE_NUMBER(551);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y = ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[4].f)) + ((frame[2].f) * (frame[3].f)));
	LINE_NUMBER(552);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_lerpDelta_arc_math_geom_Position_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:lerpDelta", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(556);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((frame[2].f) * (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	frame[2].f = temp0;
	LINE_NUMBER(557);
	frame[3].f = ((jfloat(1)) - (frame[2].f));
	LINE_NUMBER(558);
	sp[0].o = frame[0].o;
	jfloat temp1 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[3].f);
	jfloat temp2 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (temp1 + (temp2 * (frame[2].f)));
	LINE_NUMBER(559);
	sp[0].o = frame[0].o;
	jfloat temp3 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[3].f);
	jfloat temp4 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (temp3 + (temp4 * (frame[2].f)));
	LINE_NUMBER(560);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_lerp_arc_math_geom_Position_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:lerp", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(564);
	frame[3].f = ((jfloat(1)) - (frame[2].f));
	LINE_NUMBER(565);
	sp[0].o = frame[0].o;
	jfloat temp0 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[3].f);
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (temp0 + (temp1 * (frame[2].f)));
	LINE_NUMBER(566);
	sp[0].o = frame[0].o;
	jfloat temp2 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[3].f);
	jfloat temp3 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (temp2 + (temp3 * (frame[2].f)));
	LINE_NUMBER(567);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_lerp_float_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:lerp", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(571);
	frame[4].f = ((jfloat(1)) - (frame[3].f));
	LINE_NUMBER(572);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x = ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[4].f)) + ((frame[1].f) * (frame[3].f)));
	LINE_NUMBER(573);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y = ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[4].f)) + ((frame[2].f) * (frame[3].f)));
	LINE_NUMBER(574);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_lerp_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:lerp", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(579);
	frame[3].f = ((jfloat(1)) - (frame[2].f));
	LINE_NUMBER(580);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x = ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[3].f)) + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) * (frame[2].f)));
	LINE_NUMBER(581);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y = ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[3].f)) + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) * (frame[2].f)));
	LINE_NUMBER(582);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_interpolate_arc_math_geom_Vec2_float_arc_math_Interp_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:interpolate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(587);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_arc_math_Interp_apply_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_R_float, (frame[3].o)))(ctx, (frame[3].o), (frame[2].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_lerp_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_lerp_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vec2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:setToRandomDirection", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(592);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, (jfloat(0)), (jfloat(6.2831855f)));
	frame[1].f = temp0;
	LINE_NUMBER(593);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_cos_float_R_float(ctx, (frame[1].f));
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_sin_float_R_float(ctx, (frame[1].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, temp2);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_setToRandomDirection_arc_math_Rand_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:setToRandomDirection", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(597);
	jfloat temp0 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, (frame[1].o), (jfloat(0)), (jfloat(6.2831855f)));
	frame[2].f = temp0;
	LINE_NUMBER(598);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_cos_float_R_float(ctx, (frame[2].f));
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_sin_float_R_float(ctx, (frame[2].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, temp2);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_arc_math_geom_Vec2_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:hashCode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(603);
	frame[1].i = (31);
	LINE_NUMBER(604);
	frame[2].i = (jint(1));
	LINE_NUMBER(605);
	jint temp0 = (31) * (frame[2].i);
	jint temp1 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x));
	frame[2].i = (temp0 + temp1);
	LINE_NUMBER(606);
	jint temp2 = (31) * (frame[2].i);
	jint temp3 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y));
	frame[2].i = (temp2 + temp3);
	LINE_NUMBER(607);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec2_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(612);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(613);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(614);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(615);
	frame[2].o = (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[1].o)));
	LINE_NUMBER(616);
	jint temp0 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x));
	jint temp1 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x));
	if (temp0 == temp1) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(617);
	jint temp0 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y));
	jint temp1 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y));
	if (temp0 != temp1) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec2_epsilonEquals_arc_math_geom_Vec2_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:epsilonEquals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(622);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(623);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x)));
	if ((floatCompare(temp0, (frame[2].f), -1)) <= 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(624);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y)));
	if ((floatCompare(temp0, (frame[2].f), -1)) > 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec2_epsilonEquals_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:epsilonEquals", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(632);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[1].f) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x)));
	if ((floatCompare(temp0, (frame[3].f), -1)) <= 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(633);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[2].f) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y)));
	if ((floatCompare(temp0, (frame[3].f), -1)) > 0) goto label_2;
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

jbool M_arc_math_geom_Vec2_epsilonEquals_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:epsilonEquals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(642);
	jint temp0 = (jint)((func_arc_math_geom_Vec2_epsilonEquals_arc_math_geom_Vec2_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_epsilonEquals_arc_math_geom_Vec2_float_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jfloat(1,000000e-06f)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec2_epsilonEquals_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:epsilonEquals", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(652);
	jint temp0 = (jint)((func_arc_math_geom_Vec2_epsilonEquals_float_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_epsilonEquals_float_float_float_R_boolean])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (jfloat(1,000000e-06f)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec2_isNaN_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:isNaN", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(656);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec2_isInfinite_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:isInfinite", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(660);
	jint temp0 = (jint)SM_java_lang_Float_isInfinite_float_R_boolean(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_isInfinite_float_R_boolean(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec2_isUnit_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:isUnit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(665);
	jint temp0 = (jint)((func_arc_math_geom_Vec2_isUnit_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_isUnit_float_R_boolean])(ctx, (frame[0].o), (jfloat(1,000000e-09f)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec2_isUnit_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:isUnit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(670);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_len2_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp0 - (jfloat(1))));
	if ((floatCompare(temp1, (frame[1].f), 1)) >= 0) goto label_1;
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

jbool M_arc_math_geom_Vec2_isZero_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:isZero", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(675);
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y), (jfloat(0)), -1)) != 0) goto label_1;
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

jbool M_arc_math_geom_Vec2_isZero_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:isZero", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(680);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_len2_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp0, (frame[1].f), 1)) >= 0) goto label_1;
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

jbool M_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:isOnLine", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(685);
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y)) - (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vec2_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:isOnLine", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(690);
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_float_R_boolean(ctx, ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y)) - (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x))), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vec2_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:isCollinear", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(695);
	jint temp0 = (jint)((func_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vec2_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vec2_float_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	if (temp0 == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float])(ctx, (frame[0].o), (frame[1].o));
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_1;
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

jbool M_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:isCollinear", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(700);
	jint temp0 = (jint)((func_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vec2_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vec2_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float])(ctx, (frame[0].o), (frame[1].o));
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_1;
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

jbool M_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vec2_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:isCollinearOpposite", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(705);
	jint temp0 = (jint)((func_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vec2_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vec2_float_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	if (temp0 == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float])(ctx, (frame[0].o), (frame[1].o));
	if ((floatCompare(temp0, (jfloat(0)), 1)) >= 0) goto label_1;
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

jbool M_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:isCollinearOpposite", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(710);
	jint temp0 = (jint)((func_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vec2_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vec2_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float])(ctx, (frame[0].o), (frame[1].o));
	if ((floatCompare(temp0, (jfloat(0)), 1)) >= 0) goto label_1;
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

jbool M_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:isPerpendicular", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(715);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float])(ctx, (frame[0].o), (frame[1].o));
	jint temp1 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vec2_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:isPerpendicular", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(720);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float])(ctx, (frame[0].o), (frame[1].o));
	jint temp1 = (jint)SM_arc_math_Mathf_zero_float_float_R_boolean(ctx, temp0, (frame[2].f));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec2_hasSameDirection_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:hasSameDirection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(725);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float])(ctx, (frame[0].o), (frame[1].o));
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_1;
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

jbool M_arc_math_geom_Vec2_hasOppositeDirection_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:hasOppositeDirection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(730);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float])(ctx, (frame[0].o), (frame[1].o));
	if ((floatCompare(temp0, (jfloat(0)), 1)) >= 0) goto label_1;
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

jobject M_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:setZero", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(735);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	LINE_NUMBER(736);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(737);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec2_getX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(742);
	popStackFrame(ctx);
	return ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec2_getY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(747);
	popStackFrame(ctx);
	return ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:setZero", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:mulAdd", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[1].o))), (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[2].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vector_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:mulAdd", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec2_epsilonEquals_arc_math_geom_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:epsilonEquals", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(10);
	jint temp0 = (jint)((func_arc_math_geom_Vec2_epsilonEquals_arc_math_geom_Vec2_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_epsilonEquals_arc_math_geom_Vec2_float_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec2_hasOppositeDirection_arc_math_geom_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:hasOppositeDirection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	jint temp0 = (jint)((func_arc_math_geom_Vec2_hasOppositeDirection_arc_math_geom_Vec2_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_hasOppositeDirection_arc_math_geom_Vec2_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec2_hasSameDirection_arc_math_geom_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:hasSameDirection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	jint temp0 = (jint)((func_arc_math_geom_Vec2_hasSameDirection_arc_math_geom_Vec2_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_hasSameDirection_arc_math_geom_Vec2_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:isPerpendicular", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(10);
	jint temp0 = (jint)((func_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vec2_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vec2_float_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:isPerpendicular", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	jint temp0 = (jint)((func_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vec2_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vec2_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:isCollinearOpposite", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	jint temp0 = (jint)((func_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vec2_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vec2_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:isCollinearOpposite", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(10);
	jint temp0 = (jint)((func_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vec2_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vec2_float_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:isCollinear", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	jint temp0 = (jint)((func_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vec2_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vec2_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:isCollinear", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(10);
	jint temp0 = (jint)((func_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vec2_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vec2_float_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:isOnLine", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	jint temp0 = (jint)((func_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vec2_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vec2_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:isOnLine", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(10);
	jint temp0 = (jint)((func_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vec2_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vec2_float_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:setToRandomDirection", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vec2])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_interpolate_arc_math_geom_Vector_float_arc_math_Interp_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:interpolate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_interpolate_arc_math_geom_Vec2_float_arc_math_Interp_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_interpolate_arc_math_geom_Vec2_float_arc_math_Interp_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[1].o))), (frame[2].f), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_lerp_arc_math_geom_Vector_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:lerp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_lerp_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_lerp_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec2_dst2_arc_math_geom_Vector_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:dst2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_dst2_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_dst2_arc_math_geom_Vec2_R_float])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec2_dst_arc_math_geom_Vector_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:dst", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_dst_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_dst_arc_math_geom_Vec2_R_float])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_div_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:div", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_div_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_div_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_scl_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:scl", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_scl_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:scl", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec2_dot_arc_math_geom_Vector_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:dot", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_add_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_nor_R_arc_math_geom_Vector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:nor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_nor_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_nor_R_arc_math_geom_Vec2])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_sub_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:sub", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_set_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_clamp_float_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:clamp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_clamp_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_clamp_float_float_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_setLength2_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:setLength2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength2_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_setLength2_float_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:setLength", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_limit2_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:limit2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_limit2_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_limit2_float_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:limit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:cpy", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vec2])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_math_geom_Vec2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec2:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Vec2(ctx);
	{
	LINE_NUMBER(11);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2_float_float(ctx, sp[0].o, (jfloat(1)), (jfloat(0)));
	clinit_arc_math_geom_Vec2(ctx);
	SF_arc_math_geom_Vec2_X = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(1)));
	clinit_arc_math_geom_Vec2(ctx);
	SF_arc_math_geom_Vec2_Y = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(0)));
	clinit_arc_math_geom_Vec2(ctx);
	SF_arc_math_geom_Vec2_ZERO = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_geom_Vec2[] {
	(void *) M_arc_math_geom_Vec2_hashCode_R_int,
	(void *) M_arc_math_geom_Vec2_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_math_geom_Vec2_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec2_len_R_float,
	(void *) M_arc_math_geom_Vec2_len2_R_float,
	(void *) M_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec2_limit2_float_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec2_setLength2_float_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec2_clamp_float_float_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec2_set_arc_math_geom_Vector_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec2_sub_arc_math_geom_Vector_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec2_nor_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec2_add_arc_math_geom_Vector_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec2_dot_arc_math_geom_Vector_R_float,
	(void *) M_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec2_scl_arc_math_geom_Vector_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec2_div_arc_math_geom_Vector_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec2_dst_arc_math_geom_Vector_R_float,
	(void *) M_arc_math_geom_Vec2_dst2_arc_math_geom_Vector_R_float,
	(void *) M_arc_math_geom_Vec2_lerp_arc_math_geom_Vector_float_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec2_interpolate_arc_math_geom_Vector_float_arc_math_Interp_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec2_isUnit_R_boolean,
	(void *) M_arc_math_geom_Vec2_isUnit_float_R_boolean,
	(void *) M_arc_math_geom_Vec2_isZero_R_boolean,
	(void *) M_arc_math_geom_Vec2_isZero_float_R_boolean,
	(void *) M_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vector_float_R_boolean,
	(void *) M_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vector_R_boolean,
	(void *) M_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vector_float_R_boolean,
	(void *) M_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vector_R_boolean,
	(void *) M_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vector_float_R_boolean,
	(void *) M_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vector_R_boolean,
	(void *) M_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vector_R_boolean,
	(void *) M_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vector_float_R_boolean,
	(void *) M_arc_math_geom_Vec2_hasSameDirection_arc_math_geom_Vector_R_boolean,
	(void *) M_arc_math_geom_Vec2_hasOppositeDirection_arc_math_geom_Vector_R_boolean,
	(void *) M_arc_math_geom_Vec2_epsilonEquals_arc_math_geom_Vector_float_R_boolean,
	(void *) M_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vector_float_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vector_plus_arc_math_geom_Vector_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vector_minus_arc_math_geom_Vector_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vector_unaryMinus_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vector_times_arc_math_geom_Vector_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec2_getX_R_float,
	(void *) M_arc_math_geom_Vec2_getY_R_float,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Vec2_dst_float_float_R_float,
	(void *) M_arc_math_geom_Vec2_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) M_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_trnsExact_float_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_snap_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_div_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_set_arc_math_geom_Vec3_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_nor_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_add_arc_math_geom_Position_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_add_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float,
	(void *) M_arc_math_geom_Vec2_dot_float_float_R_float,
	(void *) M_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_inv_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_scl_float_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_scl_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_dst_arc_math_geom_Vec2_R_float,
	(void *) M_arc_math_geom_Vec2_dst2_arc_math_geom_Vec2_R_float,
	(void *) M_arc_math_geom_Vec2_clampLength_float_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_limit2_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_clamp_float_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_setLength2_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_clamp_float_float_float_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_tryFromString_java_lang_String_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_fromString_java_lang_String_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_mul_arc_math_Mat_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_crs_arc_math_geom_Vec2_R_float,
	(void *) M_arc_math_geom_Vec2_crs_float_float_R_float,
	(void *) M_arc_math_geom_Vec2_angle_R_float,
	(void *) M_arc_math_geom_Vec2_angle_arc_math_geom_Vec2_R_float,
	(void *) M_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_angleRad_R_float,
	(void *) M_arc_math_geom_Vec2_angleRad_arc_math_geom_Vec2_R_float,
	(void *) M_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_setAngleRad_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_rotateTo_float_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_rotateAround_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_rotateRad_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_rotateRadExact_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_rotateAroundRad_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_rotate90_int_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_approachDelta_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_approach_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_lerpPast_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_lerpDelta_float_float_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_lerpDelta_arc_math_geom_Position_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_lerp_arc_math_geom_Position_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_lerp_float_float_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_lerp_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_interpolate_arc_math_geom_Vec2_float_arc_math_Interp_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_setToRandomDirection_arc_math_Rand_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Vec2_epsilonEquals_arc_math_geom_Vec2_float_R_boolean,
	(void *) M_arc_math_geom_Vec2_epsilonEquals_float_float_float_R_boolean,
	(void *) M_arc_math_geom_Vec2_epsilonEquals_arc_math_geom_Vec2_R_boolean,
	(void *) M_arc_math_geom_Vec2_epsilonEquals_float_float_R_boolean,
	(void *) M_arc_math_geom_Vec2_isNaN_R_boolean,
	(void *) M_arc_math_geom_Vec2_isInfinite_R_boolean,
	(void *) M_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vec2_R_boolean,
	(void *) M_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vec2_float_R_boolean,
	(void *) M_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vec2_float_R_boolean,
	(void *) M_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vec2_R_boolean,
	(void *) M_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vec2_float_R_boolean,
	(void *) M_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vec2_R_boolean,
	(void *) M_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vec2_R_boolean,
	(void *) M_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vec2_float_R_boolean,
	(void *) M_arc_math_geom_Vec2_hasSameDirection_arc_math_geom_Vec2_R_boolean,
	(void *) M_arc_math_geom_Vec2_hasOppositeDirection_arc_math_geom_Vec2_R_boolean,
	(void *) M_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2,
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
	{ "cpy", "()Larc/math/geom/Vector;" },
	{ "len", "()F" },
	{ "len2", "()F" },
	{ "limit", "(F)Larc/math/geom/Vector;" },
	{ "limit2", "(F)Larc/math/geom/Vector;" },
	{ "setLength", "(F)Larc/math/geom/Vector;" },
	{ "setLength2", "(F)Larc/math/geom/Vector;" },
	{ "clamp", "(FF)Larc/math/geom/Vector;" },
	{ "set", "(Larc/math/geom/Vector;)Larc/math/geom/Vector;" },
	{ "sub", "(Larc/math/geom/Vector;)Larc/math/geom/Vector;" },
	{ "nor", "()Larc/math/geom/Vector;" },
	{ "add", "(Larc/math/geom/Vector;)Larc/math/geom/Vector;" },
	{ "dot", "(Larc/math/geom/Vector;)F" },
	{ "scl", "(F)Larc/math/geom/Vector;" },
	{ "scl", "(Larc/math/geom/Vector;)Larc/math/geom/Vector;" },
	{ "div", "(Larc/math/geom/Vector;)Larc/math/geom/Vector;" },
	{ "dst", "(Larc/math/geom/Vector;)F" },
	{ "dst2", "(Larc/math/geom/Vector;)F" },
	{ "lerp", "(Larc/math/geom/Vector;F)Larc/math/geom/Vector;" },
	{ "interpolate", "(Larc/math/geom/Vector;FLarc/math/Interp;)Larc/math/geom/Vector;" },
	{ "setToRandomDirection", "()Larc/math/geom/Vector;" },
	{ "isUnit", "()Z" },
	{ "isUnit", "(F)Z" },
	{ "isZero", "()Z" },
	{ "isZero", "(F)Z" },
	{ "isOnLine", "(Larc/math/geom/Vector;F)Z" },
	{ "isOnLine", "(Larc/math/geom/Vector;)Z" },
	{ "isCollinear", "(Larc/math/geom/Vector;F)Z" },
	{ "isCollinear", "(Larc/math/geom/Vector;)Z" },
	{ "isCollinearOpposite", "(Larc/math/geom/Vector;F)Z" },
	{ "isCollinearOpposite", "(Larc/math/geom/Vector;)Z" },
	{ "isPerpendicular", "(Larc/math/geom/Vector;)Z" },
	{ "isPerpendicular", "(Larc/math/geom/Vector;F)Z" },
	{ "hasSameDirection", "(Larc/math/geom/Vector;)Z" },
	{ "hasOppositeDirection", "(Larc/math/geom/Vector;)Z" },
	{ "epsilonEquals", "(Larc/math/geom/Vector;F)Z" },
	{ "mulAdd", "(Larc/math/geom/Vector;F)Larc/math/geom/Vector;" },
	{ "mulAdd", "(Larc/math/geom/Vector;Larc/math/geom/Vector;)Larc/math/geom/Vector;" },
	{ "setZero", "()Larc/math/geom/Vector;" },
	{ "plus", "(Larc/math/geom/Vector;)Larc/math/geom/Vector;" },
	{ "minus", "(Larc/math/geom/Vector;)Larc/math/geom/Vector;" },
	{ "unaryMinus", "()Larc/math/geom/Vector;" },
	{ "times", "(Larc/math/geom/Vector;)Larc/math/geom/Vector;" },
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "angleTo", "(Larc/math/geom/Position;)F" },
	{ "angleTo", "(FF)F" },
	{ "dst2", "(Larc/math/geom/Position;)F" },
	{ "dst", "(Larc/math/geom/Position;)F" },
	{ "dst", "(FF)F" },
	{ "dst2", "(FF)F" },
	{ "within", "(Larc/math/geom/Position;F)Z" },
	{ "within", "(FFF)Z" },
	{ "trns", "(FF)Larc/math/geom/Vec2;" },
	{ "trns", "(FFF)Larc/math/geom/Vec2;" },
	{ "trnsExact", "(FF)Larc/math/geom/Vec2;" },
	{ "snap", "()Larc/math/geom/Vec2;" },
	{ "div", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "cpy", "()Larc/math/geom/Vec2;" },
	{ "set", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "set", "(Larc/math/geom/Position;)Larc/math/geom/Vec2;" },
	{ "set", "(FF)Larc/math/geom/Vec2;" },
	{ "set", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec2;" },
	{ "sub", "(Larc/math/geom/Position;)Larc/math/geom/Vec2;" },
	{ "sub", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "sub", "(FF)Larc/math/geom/Vec2;" },
	{ "sub", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec2;" },
	{ "nor", "()Larc/math/geom/Vec2;" },
	{ "add", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "add", "(Larc/math/geom/Position;)Larc/math/geom/Vec2;" },
	{ "add", "(Larc/math/geom/Vec2;F)Larc/math/geom/Vec2;" },
	{ "add", "(FF)Larc/math/geom/Vec2;" },
	{ "dot", "(Larc/math/geom/Vec2;)F" },
	{ "dot", "(FF)F" },
	{ "scl", "(F)Larc/math/geom/Vec2;" },
	{ "inv", "()Larc/math/geom/Vec2;" },
	{ "scl", "(FF)Larc/math/geom/Vec2;" },
	{ "scl", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "mulAdd", "(Larc/math/geom/Vec2;F)Larc/math/geom/Vec2;" },
	{ "mulAdd", "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "dst", "(Larc/math/geom/Vec2;)F" },
	{ "dst2", "(Larc/math/geom/Vec2;)F" },
	{ "clampLength", "(FF)Larc/math/geom/Vec2;" },
	{ "limit", "(F)Larc/math/geom/Vec2;" },
	{ "limit2", "(F)Larc/math/geom/Vec2;" },
	{ "clamp", "(FF)Larc/math/geom/Vec2;" },
	{ "setLength", "(F)Larc/math/geom/Vec2;" },
	{ "setLength2", "(F)Larc/math/geom/Vec2;" },
	{ "clamp", "(FFFF)Larc/math/geom/Vec2;" },
	{ "tryFromString", "(Ljava/lang/String;)Larc/math/geom/Vec2;" },
	{ "fromString", "(Ljava/lang/String;)Larc/math/geom/Vec2;" },
	{ "mul", "(Larc/math/Mat;)Larc/math/geom/Vec2;" },
	{ "crs", "(Larc/math/geom/Vec2;)F" },
	{ "crs", "(FF)F" },
	{ "angle", "()F" },
	{ "angle", "(Larc/math/geom/Vec2;)F" },
	{ "rnd", "(F)Larc/math/geom/Vec2;" },
	{ "angleRad", "()F" },
	{ "angleRad", "(Larc/math/geom/Vec2;)F" },
	{ "setAngle", "(F)Larc/math/geom/Vec2;" },
	{ "setAngleRad", "(F)Larc/math/geom/Vec2;" },
	{ "rotateTo", "(FF)Larc/math/geom/Vec2;" },
	{ "rotate", "(F)Larc/math/geom/Vec2;" },
	{ "rotateAround", "(Larc/math/geom/Vec2;F)Larc/math/geom/Vec2;" },
	{ "rotateRad", "(F)Larc/math/geom/Vec2;" },
	{ "rotateRadExact", "(F)Larc/math/geom/Vec2;" },
	{ "rotateAroundRad", "(Larc/math/geom/Vec2;F)Larc/math/geom/Vec2;" },
	{ "rotate90", "(I)Larc/math/geom/Vec2;" },
	{ "approachDelta", "(Larc/math/geom/Vec2;F)Larc/math/geom/Vec2;" },
	{ "approach", "(Larc/math/geom/Vec2;F)Larc/math/geom/Vec2;" },
	{ "lerpPast", "(Larc/math/geom/Vec2;F)Larc/math/geom/Vec2;" },
	{ "lerpDelta", "(FFF)Larc/math/geom/Vec2;" },
	{ "lerpDelta", "(Larc/math/geom/Position;F)Larc/math/geom/Vec2;" },
	{ "lerp", "(Larc/math/geom/Position;F)Larc/math/geom/Vec2;" },
	{ "lerp", "(FFF)Larc/math/geom/Vec2;" },
	{ "lerp", "(Larc/math/geom/Vec2;F)Larc/math/geom/Vec2;" },
	{ "interpolate", "(Larc/math/geom/Vec2;FLarc/math/Interp;)Larc/math/geom/Vec2;" },
	{ "setToRandomDirection", "()Larc/math/geom/Vec2;" },
	{ "setToRandomDirection", "(Larc/math/Rand;)Larc/math/geom/Vec2;" },
	{ "epsilonEquals", "(Larc/math/geom/Vec2;F)Z" },
	{ "epsilonEquals", "(FFF)Z" },
	{ "epsilonEquals", "(Larc/math/geom/Vec2;)Z" },
	{ "epsilonEquals", "(FF)Z" },
	{ "isNaN", "()Z" },
	{ "isInfinite", "()Z" },
	{ "isOnLine", "(Larc/math/geom/Vec2;)Z" },
	{ "isOnLine", "(Larc/math/geom/Vec2;F)Z" },
	{ "isCollinear", "(Larc/math/geom/Vec2;F)Z" },
	{ "isCollinear", "(Larc/math/geom/Vec2;)Z" },
	{ "isCollinearOpposite", "(Larc/math/geom/Vec2;F)Z" },
	{ "isCollinearOpposite", "(Larc/math/geom/Vec2;)Z" },
	{ "isPerpendicular", "(Larc/math/geom/Vec2;)Z" },
	{ "isPerpendicular", "(Larc/math/geom/Vec2;F)Z" },
	{ "hasSameDirection", "(Larc/math/geom/Vec2;)Z" },
	{ "hasOppositeDirection", "(Larc/math/geom/Vec2;)Z" },
	{ "setZero", "()Larc/math/geom/Vec2;" },
};

static jclass interfaces[] { &class_arc_math_geom_Vector, &class_arc_math_geom_Position, };

static FieldMetadata fields[] {
	{ "X", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_math_geom_Vec2_X, "Larc/math/geom/Vec2;", 25 },
	{ "Y", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_math_geom_Vec2_Y, "Larc/math/geom/Vec2;", 25 },
	{ "ZERO", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_math_geom_Vec2_ZERO, "Larc/math/geom/Vec2;", 25 },
	{ "x", &class_float, offsetof(arc_math_geom_Vec2, F_x), "F", 1 },
	{ "y", &class_float, offsetof(arc_math_geom_Vec2, F_y), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_geom_Vec2, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_Vec2_float_float, 0, "(FF)V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_Vec2_arc_math_geom_Vec2, 0, "(Larc/math/geom/Vec2;)V", 1 },
	{ "trns", (intptr_t) M_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2, "(FF)Larc/math/geom/Vec2;", 1 },
	{ "trns", (intptr_t) M_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2, "(FFF)Larc/math/geom/Vec2;", 1 },
	{ "trnsExact", (intptr_t) M_arc_math_geom_Vec2_trnsExact_float_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_trnsExact_float_float_R_arc_math_geom_Vec2, "(FF)Larc/math/geom/Vec2;", 1 },
	{ "snap", (intptr_t) M_arc_math_geom_Vec2_snap_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_snap_R_arc_math_geom_Vec2, "()Larc/math/geom/Vec2;", 1 },
	{ "div", (intptr_t) M_arc_math_geom_Vec2_div_arc_math_geom_Vec2_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_div_arc_math_geom_Vec2_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 1 },
	{ "cpy", (intptr_t) M_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vec2, "()Larc/math/geom/Vec2;", 1 },
	{ "len", (intptr_t) M_arc_math_geom_Vec2_len_R_float, VTABLE_arc_math_geom_Vec2_len_R_float, "()F", 1 },
	{ "len2", (intptr_t) M_arc_math_geom_Vec2_len2_R_float, VTABLE_arc_math_geom_Vec2_len2_R_float, "()F", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2, "(Larc/math/geom/Position;)Larc/math/geom/Vec2;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2, "(FF)Larc/math/geom/Vec2;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Vec2_set_arc_math_geom_Vec3_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec3_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec2;", 1 },
	{ "sub", (intptr_t) M_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2, "(Larc/math/geom/Position;)Larc/math/geom/Vec2;", 1 },
	{ "sub", (intptr_t) M_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 1 },
	{ "sub", (intptr_t) M_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2, "(FF)Larc/math/geom/Vec2;", 1 },
	{ "sub", (intptr_t) M_arc_math_geom_Vec2_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec2;", 1 },
	{ "nor", (intptr_t) M_arc_math_geom_Vec2_nor_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_nor_R_arc_math_geom_Vec2, "()Larc/math/geom/Vec2;", 1 },
	{ "add", (intptr_t) M_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 1 },
	{ "add", (intptr_t) M_arc_math_geom_Vec2_add_arc_math_geom_Position_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Position_R_arc_math_geom_Vec2, "(Larc/math/geom/Position;)Larc/math/geom/Vec2;", 1 },
	{ "add", (intptr_t) M_arc_math_geom_Vec2_add_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;F)Larc/math/geom/Vec2;", 1 },
	{ "add", (intptr_t) M_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2, "(FF)Larc/math/geom/Vec2;", 1 },
	{ "dot", (intptr_t) M_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float, VTABLE_arc_math_geom_Vec2_dot_arc_math_geom_Vec2_R_float, "(Larc/math/geom/Vec2;)F", 1 },
	{ "dot", (intptr_t) M_arc_math_geom_Vec2_dot_float_float_R_float, VTABLE_arc_math_geom_Vec2_dot_float_float_R_float, "(FF)F", 1 },
	{ "scl", (intptr_t) M_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2, "(F)Larc/math/geom/Vec2;", 1 },
	{ "inv", (intptr_t) M_arc_math_geom_Vec2_inv_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_inv_R_arc_math_geom_Vec2, "()Larc/math/geom/Vec2;", 1 },
	{ "scl", (intptr_t) M_arc_math_geom_Vec2_scl_float_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_scl_float_float_R_arc_math_geom_Vec2, "(FF)Larc/math/geom/Vec2;", 1 },
	{ "scl", (intptr_t) M_arc_math_geom_Vec2_scl_arc_math_geom_Vec2_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_scl_arc_math_geom_Vec2_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 1 },
	{ "mulAdd", (intptr_t) M_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;F)Larc/math/geom/Vec2;", 1 },
	{ "mulAdd", (intptr_t) M_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 1 },
	{ "dst", (intptr_t) M_arc_math_geom_Vec2_dst_arc_math_geom_Vec2_R_float, VTABLE_arc_math_geom_Vec2_dst_arc_math_geom_Vec2_R_float, "(Larc/math/geom/Vec2;)F", 1 },
	{ "dst", (intptr_t) M_arc_math_geom_Vec2_dst_float_float_R_float, VTABLE_arc_math_geom_Vec2_dst_float_float_R_float, "(FF)F", 1 },
	{ "dst2", (intptr_t) M_arc_math_geom_Vec2_dst2_arc_math_geom_Vec2_R_float, VTABLE_arc_math_geom_Vec2_dst2_arc_math_geom_Vec2_R_float, "(Larc/math/geom/Vec2;)F", 1 },
	{ "dst2", (intptr_t) M_arc_math_geom_Vec2_dst2_float_float_R_float, VTABLE_arc_math_geom_Vec2_dst2_float_float_R_float, "(FF)F", 1 },
	{ "clampLength", (intptr_t) M_arc_math_geom_Vec2_clampLength_float_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_clampLength_float_float_R_arc_math_geom_Vec2, "(FF)Larc/math/geom/Vec2;", 1 },
	{ "limit", (intptr_t) M_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2, "(F)Larc/math/geom/Vec2;", 1 },
	{ "limit2", (intptr_t) M_arc_math_geom_Vec2_limit2_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_limit2_float_R_arc_math_geom_Vec2, "(F)Larc/math/geom/Vec2;", 1 },
	{ "clamp", (intptr_t) M_arc_math_geom_Vec2_clamp_float_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_clamp_float_float_R_arc_math_geom_Vec2, "(FF)Larc/math/geom/Vec2;", 1 },
	{ "setLength", (intptr_t) M_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2, "(F)Larc/math/geom/Vec2;", 1 },
	{ "setLength2", (intptr_t) M_arc_math_geom_Vec2_setLength2_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_setLength2_float_R_arc_math_geom_Vec2, "(F)Larc/math/geom/Vec2;", 1 },
	{ "toString", (intptr_t) M_arc_math_geom_Vec2_toString_R_java_lang_String, VTABLE_arc_math_geom_Vec2_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "clamp", (intptr_t) M_arc_math_geom_Vec2_clamp_float_float_float_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_clamp_float_float_float_float_R_arc_math_geom_Vec2, "(FFFF)Larc/math/geom/Vec2;", 1 },
	{ "tryFromString", (intptr_t) M_arc_math_geom_Vec2_tryFromString_java_lang_String_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_tryFromString_java_lang_String_R_arc_math_geom_Vec2, "(Ljava/lang/String;)Larc/math/geom/Vec2;", 1 },
	{ "fromString", (intptr_t) M_arc_math_geom_Vec2_fromString_java_lang_String_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_fromString_java_lang_String_R_arc_math_geom_Vec2, "(Ljava/lang/String;)Larc/math/geom/Vec2;", 1 },
	{ "mul", (intptr_t) M_arc_math_geom_Vec2_mul_arc_math_Mat_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_mul_arc_math_Mat_R_arc_math_geom_Vec2, "(Larc/math/Mat;)Larc/math/geom/Vec2;", 1 },
	{ "crs", (intptr_t) M_arc_math_geom_Vec2_crs_arc_math_geom_Vec2_R_float, VTABLE_arc_math_geom_Vec2_crs_arc_math_geom_Vec2_R_float, "(Larc/math/geom/Vec2;)F", 1 },
	{ "crs", (intptr_t) M_arc_math_geom_Vec2_crs_float_float_R_float, VTABLE_arc_math_geom_Vec2_crs_float_float_R_float, "(FF)F", 1 },
	{ "angle", (intptr_t) M_arc_math_geom_Vec2_angle_R_float, VTABLE_arc_math_geom_Vec2_angle_R_float, "()F", 1 },
	{ "angle", (intptr_t) M_arc_math_geom_Vec2_angle_arc_math_geom_Vec2_R_float, VTABLE_arc_math_geom_Vec2_angle_arc_math_geom_Vec2_R_float, "(Larc/math/geom/Vec2;)F", 1 },
	{ "rnd", (intptr_t) M_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2, "(F)Larc/math/geom/Vec2;", 1 },
	{ "angleRad", (intptr_t) M_arc_math_geom_Vec2_angleRad_R_float, VTABLE_arc_math_geom_Vec2_angleRad_R_float, "()F", 1 },
	{ "angleRad", (intptr_t) M_arc_math_geom_Vec2_angleRad_arc_math_geom_Vec2_R_float, VTABLE_arc_math_geom_Vec2_angleRad_arc_math_geom_Vec2_R_float, "(Larc/math/geom/Vec2;)F", 1 },
	{ "setAngle", (intptr_t) M_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2, "(F)Larc/math/geom/Vec2;", 1 },
	{ "setAngleRad", (intptr_t) M_arc_math_geom_Vec2_setAngleRad_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_setAngleRad_float_R_arc_math_geom_Vec2, "(F)Larc/math/geom/Vec2;", 1 },
	{ "rotateTo", (intptr_t) M_arc_math_geom_Vec2_rotateTo_float_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_rotateTo_float_float_R_arc_math_geom_Vec2, "(FF)Larc/math/geom/Vec2;", 1 },
	{ "rotate", (intptr_t) M_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2, "(F)Larc/math/geom/Vec2;", 1 },
	{ "rotateAround", (intptr_t) M_arc_math_geom_Vec2_rotateAround_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_rotateAround_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;F)Larc/math/geom/Vec2;", 1 },
	{ "rotateRad", (intptr_t) M_arc_math_geom_Vec2_rotateRad_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_rotateRad_float_R_arc_math_geom_Vec2, "(F)Larc/math/geom/Vec2;", 1 },
	{ "rotateRadExact", (intptr_t) M_arc_math_geom_Vec2_rotateRadExact_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_rotateRadExact_float_R_arc_math_geom_Vec2, "(F)Larc/math/geom/Vec2;", 1 },
	{ "rotateAroundRad", (intptr_t) M_arc_math_geom_Vec2_rotateAroundRad_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_rotateAroundRad_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;F)Larc/math/geom/Vec2;", 1 },
	{ "rotate90", (intptr_t) M_arc_math_geom_Vec2_rotate90_int_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_rotate90_int_R_arc_math_geom_Vec2, "(I)Larc/math/geom/Vec2;", 1 },
	{ "approachDelta", (intptr_t) M_arc_math_geom_Vec2_approachDelta_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_approachDelta_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;F)Larc/math/geom/Vec2;", 1 },
	{ "approach", (intptr_t) M_arc_math_geom_Vec2_approach_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_approach_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;F)Larc/math/geom/Vec2;", 1 },
	{ "lerpPast", (intptr_t) M_arc_math_geom_Vec2_lerpPast_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_lerpPast_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;F)Larc/math/geom/Vec2;", 1 },
	{ "lerpDelta", (intptr_t) M_arc_math_geom_Vec2_lerpDelta_float_float_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_lerpDelta_float_float_float_R_arc_math_geom_Vec2, "(FFF)Larc/math/geom/Vec2;", 1 },
	{ "lerpDelta", (intptr_t) M_arc_math_geom_Vec2_lerpDelta_arc_math_geom_Position_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_lerpDelta_arc_math_geom_Position_float_R_arc_math_geom_Vec2, "(Larc/math/geom/Position;F)Larc/math/geom/Vec2;", 1 },
	{ "lerp", (intptr_t) M_arc_math_geom_Vec2_lerp_arc_math_geom_Position_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_lerp_arc_math_geom_Position_float_R_arc_math_geom_Vec2, "(Larc/math/geom/Position;F)Larc/math/geom/Vec2;", 1 },
	{ "lerp", (intptr_t) M_arc_math_geom_Vec2_lerp_float_float_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_lerp_float_float_float_R_arc_math_geom_Vec2, "(FFF)Larc/math/geom/Vec2;", 1 },
	{ "lerp", (intptr_t) M_arc_math_geom_Vec2_lerp_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_lerp_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;F)Larc/math/geom/Vec2;", 1 },
	{ "interpolate", (intptr_t) M_arc_math_geom_Vec2_interpolate_arc_math_geom_Vec2_float_arc_math_Interp_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_interpolate_arc_math_geom_Vec2_float_arc_math_Interp_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;FLarc/math/Interp;)Larc/math/geom/Vec2;", 1 },
	{ "setToRandomDirection", (intptr_t) M_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vec2, "()Larc/math/geom/Vec2;", 1 },
	{ "setToRandomDirection", (intptr_t) M_arc_math_geom_Vec2_setToRandomDirection_arc_math_Rand_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_setToRandomDirection_arc_math_Rand_R_arc_math_geom_Vec2, "(Larc/math/Rand;)Larc/math/geom/Vec2;", 1 },
	{ "hashCode", (intptr_t) M_arc_math_geom_Vec2_hashCode_R_int, VTABLE_arc_math_geom_Vec2_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_arc_math_geom_Vec2_equals_java_lang_Object_R_boolean, VTABLE_arc_math_geom_Vec2_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "epsilonEquals", (intptr_t) M_arc_math_geom_Vec2_epsilonEquals_arc_math_geom_Vec2_float_R_boolean, VTABLE_arc_math_geom_Vec2_epsilonEquals_arc_math_geom_Vec2_float_R_boolean, "(Larc/math/geom/Vec2;F)Z", 1 },
	{ "epsilonEquals", (intptr_t) M_arc_math_geom_Vec2_epsilonEquals_float_float_float_R_boolean, VTABLE_arc_math_geom_Vec2_epsilonEquals_float_float_float_R_boolean, "(FFF)Z", 1 },
	{ "epsilonEquals", (intptr_t) M_arc_math_geom_Vec2_epsilonEquals_arc_math_geom_Vec2_R_boolean, VTABLE_arc_math_geom_Vec2_epsilonEquals_arc_math_geom_Vec2_R_boolean, "(Larc/math/geom/Vec2;)Z", 1 },
	{ "epsilonEquals", (intptr_t) M_arc_math_geom_Vec2_epsilonEquals_float_float_R_boolean, VTABLE_arc_math_geom_Vec2_epsilonEquals_float_float_R_boolean, "(FF)Z", 1 },
	{ "isNaN", (intptr_t) M_arc_math_geom_Vec2_isNaN_R_boolean, VTABLE_arc_math_geom_Vec2_isNaN_R_boolean, "()Z", 1 },
	{ "isInfinite", (intptr_t) M_arc_math_geom_Vec2_isInfinite_R_boolean, VTABLE_arc_math_geom_Vec2_isInfinite_R_boolean, "()Z", 1 },
	{ "isUnit", (intptr_t) M_arc_math_geom_Vec2_isUnit_R_boolean, VTABLE_arc_math_geom_Vec2_isUnit_R_boolean, "()Z", 1 },
	{ "isUnit", (intptr_t) M_arc_math_geom_Vec2_isUnit_float_R_boolean, VTABLE_arc_math_geom_Vec2_isUnit_float_R_boolean, "(F)Z", 1 },
	{ "isZero", (intptr_t) M_arc_math_geom_Vec2_isZero_R_boolean, VTABLE_arc_math_geom_Vec2_isZero_R_boolean, "()Z", 1 },
	{ "isZero", (intptr_t) M_arc_math_geom_Vec2_isZero_float_R_boolean, VTABLE_arc_math_geom_Vec2_isZero_float_R_boolean, "(F)Z", 1 },
	{ "isOnLine", (intptr_t) M_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vec2_R_boolean, VTABLE_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vec2_R_boolean, "(Larc/math/geom/Vec2;)Z", 1 },
	{ "isOnLine", (intptr_t) M_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vec2_float_R_boolean, VTABLE_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vec2_float_R_boolean, "(Larc/math/geom/Vec2;F)Z", 1 },
	{ "isCollinear", (intptr_t) M_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vec2_float_R_boolean, VTABLE_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vec2_float_R_boolean, "(Larc/math/geom/Vec2;F)Z", 1 },
	{ "isCollinear", (intptr_t) M_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vec2_R_boolean, VTABLE_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vec2_R_boolean, "(Larc/math/geom/Vec2;)Z", 1 },
	{ "isCollinearOpposite", (intptr_t) M_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vec2_float_R_boolean, VTABLE_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vec2_float_R_boolean, "(Larc/math/geom/Vec2;F)Z", 1 },
	{ "isCollinearOpposite", (intptr_t) M_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vec2_R_boolean, VTABLE_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vec2_R_boolean, "(Larc/math/geom/Vec2;)Z", 1 },
	{ "isPerpendicular", (intptr_t) M_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vec2_R_boolean, VTABLE_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vec2_R_boolean, "(Larc/math/geom/Vec2;)Z", 1 },
	{ "isPerpendicular", (intptr_t) M_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vec2_float_R_boolean, VTABLE_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vec2_float_R_boolean, "(Larc/math/geom/Vec2;F)Z", 1 },
	{ "hasSameDirection", (intptr_t) M_arc_math_geom_Vec2_hasSameDirection_arc_math_geom_Vec2_R_boolean, VTABLE_arc_math_geom_Vec2_hasSameDirection_arc_math_geom_Vec2_R_boolean, "(Larc/math/geom/Vec2;)Z", 1 },
	{ "hasOppositeDirection", (intptr_t) M_arc_math_geom_Vec2_hasOppositeDirection_arc_math_geom_Vec2_R_boolean, VTABLE_arc_math_geom_Vec2_hasOppositeDirection_arc_math_geom_Vec2_R_boolean, "(Larc/math/geom/Vec2;)Z", 1 },
	{ "setZero", (intptr_t) M_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2, "()Larc/math/geom/Vec2;", 1 },
	{ "getX", (intptr_t) M_arc_math_geom_Vec2_getX_R_float, VTABLE_arc_math_geom_Vec2_getX_R_float, "()F", 1 },
	{ "getY", (intptr_t) M_arc_math_geom_Vec2_getY_R_float, VTABLE_arc_math_geom_Vec2_getY_R_float, "()F", 1 },
	{ "setZero", (intptr_t) M_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vector, "()Larc/math/geom/Vector;", 4161 },
	{ "mulAdd", (intptr_t) M_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;Larc/math/geom/Vector;)Larc/math/geom/Vector;", 4161 },
	{ "mulAdd", (intptr_t) M_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vector_float_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec2_mulAdd_arc_math_geom_Vector_float_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;F)Larc/math/geom/Vector;", 4161 },
	{ "epsilonEquals", (intptr_t) M_arc_math_geom_Vec2_epsilonEquals_arc_math_geom_Vector_float_R_boolean, VTABLE_arc_math_geom_Vec2_epsilonEquals_arc_math_geom_Vector_float_R_boolean, "(Larc/math/geom/Vector;F)Z", 4161 },
	{ "hasOppositeDirection", (intptr_t) M_arc_math_geom_Vec2_hasOppositeDirection_arc_math_geom_Vector_R_boolean, VTABLE_arc_math_geom_Vec2_hasOppositeDirection_arc_math_geom_Vector_R_boolean, "(Larc/math/geom/Vector;)Z", 4161 },
	{ "hasSameDirection", (intptr_t) M_arc_math_geom_Vec2_hasSameDirection_arc_math_geom_Vector_R_boolean, VTABLE_arc_math_geom_Vec2_hasSameDirection_arc_math_geom_Vector_R_boolean, "(Larc/math/geom/Vector;)Z", 4161 },
	{ "isPerpendicular", (intptr_t) M_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vector_float_R_boolean, VTABLE_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vector_float_R_boolean, "(Larc/math/geom/Vector;F)Z", 4161 },
	{ "isPerpendicular", (intptr_t) M_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vector_R_boolean, VTABLE_arc_math_geom_Vec2_isPerpendicular_arc_math_geom_Vector_R_boolean, "(Larc/math/geom/Vector;)Z", 4161 },
	{ "isCollinearOpposite", (intptr_t) M_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vector_R_boolean, VTABLE_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vector_R_boolean, "(Larc/math/geom/Vector;)Z", 4161 },
	{ "isCollinearOpposite", (intptr_t) M_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vector_float_R_boolean, VTABLE_arc_math_geom_Vec2_isCollinearOpposite_arc_math_geom_Vector_float_R_boolean, "(Larc/math/geom/Vector;F)Z", 4161 },
	{ "isCollinear", (intptr_t) M_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vector_R_boolean, VTABLE_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vector_R_boolean, "(Larc/math/geom/Vector;)Z", 4161 },
	{ "isCollinear", (intptr_t) M_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vector_float_R_boolean, VTABLE_arc_math_geom_Vec2_isCollinear_arc_math_geom_Vector_float_R_boolean, "(Larc/math/geom/Vector;F)Z", 4161 },
	{ "isOnLine", (intptr_t) M_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vector_R_boolean, VTABLE_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vector_R_boolean, "(Larc/math/geom/Vector;)Z", 4161 },
	{ "isOnLine", (intptr_t) M_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vector_float_R_boolean, VTABLE_arc_math_geom_Vec2_isOnLine_arc_math_geom_Vector_float_R_boolean, "(Larc/math/geom/Vector;F)Z", 4161 },
	{ "setToRandomDirection", (intptr_t) M_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vector, "()Larc/math/geom/Vector;", 4161 },
	{ "interpolate", (intptr_t) M_arc_math_geom_Vec2_interpolate_arc_math_geom_Vector_float_arc_math_Interp_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec2_interpolate_arc_math_geom_Vector_float_arc_math_Interp_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;FLarc/math/Interp;)Larc/math/geom/Vector;", 4161 },
	{ "lerp", (intptr_t) M_arc_math_geom_Vec2_lerp_arc_math_geom_Vector_float_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec2_lerp_arc_math_geom_Vector_float_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;F)Larc/math/geom/Vector;", 4161 },
	{ "dst2", (intptr_t) M_arc_math_geom_Vec2_dst2_arc_math_geom_Vector_R_float, VTABLE_arc_math_geom_Vec2_dst2_arc_math_geom_Vector_R_float, "(Larc/math/geom/Vector;)F", 4161 },
	{ "dst", (intptr_t) M_arc_math_geom_Vec2_dst_arc_math_geom_Vector_R_float, VTABLE_arc_math_geom_Vec2_dst_arc_math_geom_Vector_R_float, "(Larc/math/geom/Vector;)F", 4161 },
	{ "div", (intptr_t) M_arc_math_geom_Vec2_div_arc_math_geom_Vector_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec2_div_arc_math_geom_Vector_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;)Larc/math/geom/Vector;", 4161 },
	{ "scl", (intptr_t) M_arc_math_geom_Vec2_scl_arc_math_geom_Vector_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec2_scl_arc_math_geom_Vector_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;)Larc/math/geom/Vector;", 4161 },
	{ "scl", (intptr_t) M_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vector, "(F)Larc/math/geom/Vector;", 4161 },
	{ "dot", (intptr_t) M_arc_math_geom_Vec2_dot_arc_math_geom_Vector_R_float, VTABLE_arc_math_geom_Vec2_dot_arc_math_geom_Vector_R_float, "(Larc/math/geom/Vector;)F", 4161 },
	{ "add", (intptr_t) M_arc_math_geom_Vec2_add_arc_math_geom_Vector_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vector_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;)Larc/math/geom/Vector;", 4161 },
	{ "nor", (intptr_t) M_arc_math_geom_Vec2_nor_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec2_nor_R_arc_math_geom_Vector, "()Larc/math/geom/Vector;", 4161 },
	{ "sub", (intptr_t) M_arc_math_geom_Vec2_sub_arc_math_geom_Vector_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vector_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;)Larc/math/geom/Vector;", 4161 },
	{ "set", (intptr_t) M_arc_math_geom_Vec2_set_arc_math_geom_Vector_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vector_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;)Larc/math/geom/Vector;", 4161 },
	{ "clamp", (intptr_t) M_arc_math_geom_Vec2_clamp_float_float_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec2_clamp_float_float_R_arc_math_geom_Vector, "(FF)Larc/math/geom/Vector;", 4161 },
	{ "setLength2", (intptr_t) M_arc_math_geom_Vec2_setLength2_float_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec2_setLength2_float_R_arc_math_geom_Vector, "(F)Larc/math/geom/Vector;", 4161 },
	{ "setLength", (intptr_t) M_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vector, "(F)Larc/math/geom/Vector;", 4161 },
	{ "limit2", (intptr_t) M_arc_math_geom_Vec2_limit2_float_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec2_limit2_float_R_arc_math_geom_Vector, "(F)Larc/math/geom/Vector;", 4161 },
	{ "limit", (intptr_t) M_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vector, "(F)Larc/math/geom/Vector;", 4161 },
	{ "cpy", (intptr_t) M_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vector, "()Larc/math/geom/Vector;", 4161 },
	{ "<clinit>", (intptr_t) clinit_arc_math_geom_Vec2, 0, "()V", 8 },
};

Class class_arc_math_geom_Vec2{
		.nativeName = (intptr_t) "arc/math/geom/Vec2",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_geom_Vec2),
		.classVtable = (intptr_t) vtable_arc_math_geom_Vec2,
		.staticInitializer = (intptr_t) clinit_arc_math_geom_Vec2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_geom_Vec2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 133,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 147,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_geom_Vec2 = registerClass(&class_arc_math_geom_Vec2);

}
