#include "arc/math/geom/Rect.h"
#include "java/lang/Math.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/lang/NumberFormatException.h"
#include "arc/math/geom/Shape2D.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/math/geom/Rect.h"
#include "java/lang/Float.h"
#include "arc/math/geom/Circle.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_arc_math_geom_Rect_tmp;
jobject SF_arc_math_geom_Rect_tmp2;

void mark_arc_math_geom_Rect(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_math_geom_Rect_tmp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Rect_tmp)->clazz)->markFunction)((jobject) SF_arc_math_geom_Rect_tmp, mark, depth + 1);
		if (SF_arc_math_geom_Rect_tmp2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Rect_tmp2)->clazz)->markFunction)((jobject) SF_arc_math_geom_Rect_tmp2, mark, depth + 1);
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
	auto self = (arc_math_geom_Rect *) object;
}

void init_arc_math_geom_Rect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Rect(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_Rect_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Rect(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(31);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(32);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(33);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(34);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width = (frame[3].f);
	LINE_NUMBER(35);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height = (frame[4].f);
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_Rect_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Rect(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(42);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(43);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(44);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(45);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_width);
	LINE_NUMBER(46);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_height);
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:setCentered", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, (frame[0].o), ((frame[1].f) - ((frame[3].f) / (jfloat(2)))), ((frame[2].f) - ((frame[3].f) / (jfloat(2)))), (frame[3].f), (frame[3].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:setCentered", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, (frame[0].o), ((frame[1].f) - ((frame[3].f) / (jfloat(2)))), ((frame[2].f) - ((frame[4].f) / (jfloat(2)))), (frame[3].f), (frame[4].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(65);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(66);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(67);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width = (frame[3].f);
	LINE_NUMBER(68);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height = (frame[4].f);
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Rect_getX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Rect_setX_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:setX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(84);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Rect_getY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Rect_setY_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:setY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(100);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y = (frame[1].f);
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Rect_getWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:getWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Rect_setWidth_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:setWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(116);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width = (frame[1].f);
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Rect_getHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:getHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Rect_setHeight_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:setHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(132);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height = (frame[1].f);
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Rect_getPosition_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:getPosition", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, (frame[1].o), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Rect_setPosition_arc_math_geom_Vec2_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:setPosition", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(151);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(152);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Rect_setPosition_float_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:setPosition", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(164);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(165);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Rect_move_float_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:move", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x) + (frame[1].f));
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y) + (frame[2].f));
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Rect_setSize_float_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:setSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(183);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width = (frame[1].f);
	LINE_NUMBER(184);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height = (frame[2].f);
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:setSize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(195);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width = (frame[1].f);
	LINE_NUMBER(196);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height = (frame[1].f);
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Rect_getSize_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:getSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, (frame[1].o), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Rect_contains_float_float_float_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:contains", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Rect(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(210);
	if ((floatCompare((frame[0].f), (frame[4].f), 1)) > 0) goto label_1;
	}
	{
	if ((floatCompare(((frame[0].f) + (frame[2].f)), (frame[4].f), -1)) < 0) goto label_1;
	}
	{
	if ((floatCompare((frame[1].f), (frame[5].f), 1)) > 0) goto label_1;
	}
	{
	if ((floatCompare(((frame[1].f) + (frame[3].f)), (frame[5].f), -1)) < 0) goto label_1;
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

jbool SM_arc_math_geom_Rect_contains_float_float_float_float_float_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:contains", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Rect(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	{
	LINE_NUMBER(214);
	frame[8].f = ((frame[4].f) + (frame[6].f));
	LINE_NUMBER(216);
	frame[9].f = ((frame[5].f) + (frame[7].f));
	LINE_NUMBER(218);
	if ((floatCompare((frame[4].f), (frame[0].f), -1)) <= 0) goto label_3;
	}
	{
	if ((floatCompare((frame[4].f), ((frame[0].f) + (frame[2].f)), 1)) >= 0) goto label_3;
	}
	{
	if ((floatCompare((frame[8].f), (frame[0].f), -1)) <= 0) goto label_3;
	}
	{
	if ((floatCompare((frame[8].f), ((frame[0].f) + (frame[2].f)), 1)) >= 0) goto label_3;
	}
	{
	if ((floatCompare((frame[5].f), (frame[1].f), -1)) <= 0) goto label_3;
	}
	{
	if ((floatCompare((frame[5].f), ((frame[1].f) + (frame[3].f)), 1)) >= 0) goto label_3;
	}
	{
	if ((floatCompare((frame[9].f), (frame[1].f), -1)) <= 0) goto label_3;
	}
	{
	if ((floatCompare((frame[9].f), ((frame[1].f) + (frame[3].f)), 1)) >= 0) goto label_3;
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

jbool M_arc_math_geom_Rect_contains_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:contains", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(228);
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x), (frame[1].f), 1)) > 0) goto label_1;
	}
	{
	if ((floatCompare((((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width)), (frame[1].f), -1)) < 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y), (frame[2].f), 1)) > 0) goto label_1;
	}
	{
	if ((floatCompare((((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height)), (frame[2].f), -1)) < 0) goto label_1;
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

jbool M_arc_math_geom_Rect_contains_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:contains", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(236);
	jint temp0 = (jint)((func_arc_math_geom_Rect_contains_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Rect_contains_float_float_R_boolean])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Rect_contains_arc_math_geom_Circle_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:contains", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(244);
	if ((floatCompare((((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[1].o)))->F_radius)), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x), -1)) < 0) goto label_1;
	}
	{
	if ((floatCompare((((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[1].o)))->F_radius)), (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width)), 1)) > 0) goto label_1;
	}
	{
	if ((floatCompare((((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[1].o)))->F_radius)), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y), -1)) < 0) goto label_1;
	}
	{
	if ((floatCompare((((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[1].o)))->F_radius)), (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height)), 1)) > 0) goto label_1;
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

jbool M_arc_math_geom_Rect_contains_arc_math_geom_Rect_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:contains", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(253);
	frame[2].f = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(254);
	frame[3].f = ((frame[2].f) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_width));
	LINE_NUMBER(256);
	frame[4].f = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(257);
	frame[5].f = ((frame[4].f) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_height));
	LINE_NUMBER(259);
	if ((floatCompare((frame[2].f), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x), -1)) <= 0) goto label_5;
	}
	{
	if ((floatCompare((frame[2].f), (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width)), 1)) >= 0) goto label_5;
	}
	{
	if ((floatCompare((frame[3].f), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x), -1)) <= 0) goto label_5;
	}
	{
	if ((floatCompare((frame[3].f), (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width)), 1)) >= 0) goto label_5;
	}
	{
	if ((floatCompare((frame[4].f), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y), -1)) <= 0) goto label_5;
	}
	{
	if ((floatCompare((frame[4].f), (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height)), 1)) >= 0) goto label_5;
	}
	{
	if ((floatCompare((frame[5].f), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y), -1)) <= 0) goto label_5;
	}
	{
	if ((floatCompare((frame[5].f), (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height)), 1)) >= 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:overlaps", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(268);
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x), (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_width)), 1)) >= 0) goto label_1;
	}
	{
	if ((floatCompare((((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width)), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x), -1)) <= 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y), (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_height)), 1)) >= 0) goto label_1;
	}
	{
	if ((floatCompare((((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height)), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_y), -1)) <= 0) goto label_1;
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

jbool M_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:overlaps", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(275);
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x), ((frame[1].f) + (frame[3].f)), 1)) >= 0) goto label_1;
	}
	{
	if ((floatCompare((((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width)), (frame[1].f), -1)) <= 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y), ((frame[2].f) + (frame[4].f)), 1)) >= 0) goto label_1;
	}
	{
	if ((floatCompare((((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height)), (frame[2].f), -1)) <= 0) goto label_1;
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

jobject M_arc_math_geom_Rect_set_arc_math_geom_Rect_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(284);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(285);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(286);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_width);
	LINE_NUMBER(287);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_height);
	LINE_NUMBER(289);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:grow", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_grow_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Rect_grow_float_float_R_arc_math_geom_Rect])(ctx, (frame[0].o), (frame[1].f), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Rect_grow_float_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:grow", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(297);
	sp[0].o = frame[0].o;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x) - ((frame[1].f) / (jfloat(2))));
	LINE_NUMBER(298);
	sp[0].o = frame[0].o;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y) - ((frame[2].f) / (jfloat(2))));
	LINE_NUMBER(299);
	sp[0].o = frame[0].o;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width) + (frame[1].f));
	LINE_NUMBER(300);
	sp[0].o = frame[0].o;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height) + (frame[2].f));
	LINE_NUMBER(301);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Rect_merge_arc_math_geom_Rect_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:merge", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(310);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x));
	frame[2].f = temp0;
	LINE_NUMBER(311);
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width)), (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_width)));
	frame[3].f = temp1;
	LINE_NUMBER(312);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x = (frame[2].f);
	LINE_NUMBER(313);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width = ((frame[3].f) - (frame[2].f));
	LINE_NUMBER(315);
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_y));
	frame[4].f = temp2;
	LINE_NUMBER(316);
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height)), (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_height)));
	frame[5].f = temp3;
	LINE_NUMBER(317);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y = (frame[4].f);
	LINE_NUMBER(318);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height = ((frame[5].f) - (frame[4].f));
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Rect_normalize_R_arc_math_geom_Rect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:normalize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(325);
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width), (jfloat(0)), 1)) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(326);
	sp[0].o = frame[0].o;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width));
	LINE_NUMBER(327);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width = (-((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width));
	}
label_1:;
	{
	LINE_NUMBER(330);
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height), (jfloat(0)), 1)) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(331);
	sp[0].o = frame[0].o;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height));
	LINE_NUMBER(332);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height = (-((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height));
	}
label_4:;
	{
	LINE_NUMBER(334);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Rect_merge_float_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:merge", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(344);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x), (frame[1].f));
	frame[3].f = temp0;
	LINE_NUMBER(345);
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width)), (frame[1].f));
	frame[4].f = temp1;
	LINE_NUMBER(346);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x = (frame[3].f);
	LINE_NUMBER(347);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width = ((frame[4].f) - (frame[3].f));
	LINE_NUMBER(349);
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y), (frame[2].f));
	frame[5].f = temp2;
	LINE_NUMBER(350);
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height)), (frame[2].f));
	frame[6].f = temp3;
	LINE_NUMBER(351);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y = (frame[5].f);
	LINE_NUMBER(352);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height = ((frame[6].f) - (frame[5].f));
	LINE_NUMBER(354);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Rect_merge_arc_math_geom_Vec2_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:merge", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(363);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_merge_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Rect_merge_float_float_R_arc_math_geom_Rect])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Rect_merge_Array1_arc_math_geom_Vec2_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:merge", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(372);
	frame[2].f = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(373);
	frame[3].f = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width));
	LINE_NUMBER(374);
	frame[4].f = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(375);
	frame[5].f = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height));
	LINE_NUMBER(376);
	frame[6].i = (jint(0));
	}
label_5:;
	{
	if ((frame[6].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(377);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[6].i)));
	LINE_NUMBER(378);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[2].f), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[7].o)))->F_x));
	frame[2].f = temp0;
	LINE_NUMBER(379);
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[3].f), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[7].o)))->F_x));
	frame[3].f = temp1;
	LINE_NUMBER(380);
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[4].f), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[7].o)))->F_y));
	frame[4].f = temp2;
	LINE_NUMBER(381);
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[5].f), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[7].o)))->F_y));
	frame[5].f = temp3;
	LINE_NUMBER(376);
	INST_IINC(6, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(383);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x = (frame[2].f);
	LINE_NUMBER(384);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width = ((frame[3].f) - (frame[2].f));
	LINE_NUMBER(385);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y = (frame[4].f);
	LINE_NUMBER(386);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height = ((frame[5].f) - (frame[4].f));
	LINE_NUMBER(387);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Rect_getAspectRatio_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:getAspectRatio", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(395);
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height), (jfloat(0)), -1)) != 0) goto label_1;
	}
	(sp++)->f = jfloat(std::numeric_limits<float>::quiet_NaN());
	goto label_2;
label_1:;
	{
	jfloat temp0 = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width) / ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height);
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Rect_getCenter_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:getCenter", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(404);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x) + (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2))));
	LINE_NUMBER(405);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y) + (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2))));
	LINE_NUMBER(406);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:setCenter", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(416);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setPosition_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Rect_setPosition_float_float_R_arc_math_geom_Rect])(ctx, (frame[0].o), ((frame[1].f) - (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2)))), ((frame[2].f) - (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2)))));
	LINE_NUMBER(417);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Rect_setCenter_arc_math_geom_Vec2_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:setCenter", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(426);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setPosition_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Rect_setPosition_float_float_R_arc_math_geom_Rect])(ctx, (frame[0].o), (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) - (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2)))), (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) - (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2)))));
	LINE_NUMBER(427);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Rect_fitOutside_arc_math_geom_Rect_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:fitOutside", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(438);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Rect_getAspectRatio_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Rect_getAspectRatio_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(440);
	jfloat temp1 = frame[2].f;
	jfloat temp2 = (jfloat)((func_arc_math_geom_Rect_getAspectRatio_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Rect_getAspectRatio_R_float])(ctx, (frame[1].o));
	if ((floatCompare(temp1, temp2, -1)) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(442);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setSize_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_float_R_arc_math_geom_Rect])(ctx, (frame[0].o), (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_height) * (frame[2].f)), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_height));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(445);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setSize_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_float_R_arc_math_geom_Rect])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_width), (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_width) / (frame[2].f)));
	}
label_4:;
	{
	LINE_NUMBER(448);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setPosition_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Rect_setPosition_float_float_R_arc_math_geom_Rect])(ctx, (frame[0].o), ((((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x) + (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_width) / (jfloat(2)))) - (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2)))), ((((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_y) + (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_height) / (jfloat(2)))) - (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2)))));
	LINE_NUMBER(449);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Rect_fitInside_arc_math_geom_Rect_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:fitInside", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(460);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Rect_getAspectRatio_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Rect_getAspectRatio_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(462);
	jfloat temp1 = frame[2].f;
	jfloat temp2 = (jfloat)((func_arc_math_geom_Rect_getAspectRatio_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Rect_getAspectRatio_R_float])(ctx, (frame[1].o));
	if ((floatCompare(temp1, temp2, 1)) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(464);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setSize_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_float_R_arc_math_geom_Rect])(ctx, (frame[0].o), (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_height) * (frame[2].f)), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_height));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(467);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setSize_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_float_R_arc_math_geom_Rect])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_width), (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_width) / (frame[2].f)));
	}
label_4:;
	{
	LINE_NUMBER(470);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setPosition_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Rect_setPosition_float_float_R_arc_math_geom_Rect])(ctx, (frame[0].o), ((((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x) + (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_width) / (jfloat(2)))) - (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2)))), ((((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_y) + (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_height) / (jfloat(2)))) - (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2)))));
	LINE_NUMBER(471);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Rect_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(479);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"["_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Rect_fromString_java_lang_String_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:fromString", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(489);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[1].o), (44), (jint(1)));
	frame[2].i = temp0;
	LINE_NUMBER(490);
	jint temp1 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[1].o), (44), ((frame[2].i) + (jint(1))));
	frame[3].i = temp1;
	LINE_NUMBER(491);
	jint temp2 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[1].o), (44), ((frame[3].i) + (jint(1))));
	frame[4].i = temp2;
	LINE_NUMBER(492);
	if ((frame[2].i) == (jint(-1))) goto label_8;
	}
	{
	if ((frame[3].i) == (jint(-1))) goto label_8;
	}
	{
	if ((frame[4].i) == (jint(-1))) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (91)) goto label_8;
	}
	{
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (temp0 - (jint(1))));
	if (temp1 != (93)) goto label_8;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(494);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (jint(1)), (frame[2].i));
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[5].f = temp0;
	LINE_NUMBER(495);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), ((frame[2].i) + (jint(1))), (frame[3].i));
	jfloat temp1 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[6].f = temp1;
	LINE_NUMBER(496);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), ((frame[3].i) + (jint(1))), (frame[4].i));
	jfloat temp2 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[7].f = temp2;
	LINE_NUMBER(497);
	sp[0].o = frame[1].o;
	jint temp3 = (frame[4].i) + (jint(1));
	jint temp4 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp3, (temp4 - (jint(1))));
	jfloat temp5 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[8].f = temp5;
	LINE_NUMBER(498);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, (frame[0].o), (frame[5].f), (frame[6].f), (frame[7].f), (frame[8].f));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	LINE_NUMBER(499);
	INST_ASTORE(5);
label_8:;
	{
	LINE_NUMBER(503);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Malformed Rectangle: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Rect_area_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:area", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(507);
	popStackFrame(ctx);
	return (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width) * ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Rect_perimeter_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:perimeter", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(511);
	popStackFrame(ctx);
	return ((jfloat(2)) * (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height)));
	}

	popStackFrame(ctx);
}

jint M_arc_math_geom_Rect_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:hashCode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(515);
	frame[1].i = (31);
	LINE_NUMBER(516);
	frame[2].i = (jint(1));
	LINE_NUMBER(517);
	jint temp0 = (31) * (frame[2].i);
	jint temp1 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height));
	frame[2].i = (temp0 + temp1);
	LINE_NUMBER(518);
	jint temp2 = (31) * (frame[2].i);
	jint temp3 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width));
	frame[2].i = (temp2 + temp3);
	LINE_NUMBER(519);
	jint temp4 = (31) * (frame[2].i);
	jint temp5 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x));
	frame[2].i = (temp4 + temp5);
	LINE_NUMBER(520);
	jint temp6 = (31) * (frame[2].i);
	jint temp7 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y));
	frame[2].i = (temp6 + temp7);
	LINE_NUMBER(521);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Rect_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(525);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(526);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(527);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(528);
	frame[2].o = (checkCast(ctx, &class_arc_math_geom_Rect, (frame[1].o)));
	LINE_NUMBER(529);
	jint temp0 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height));
	jint temp1 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[2].o)))->F_height));
	if (temp0 == temp1) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(530);
	jint temp0 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width));
	jint temp1 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[2].o)))->F_width));
	if (temp0 == temp1) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(531);
	jint temp0 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x));
	jint temp1 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[2].o)))->F_x));
	if (temp0 == temp1) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(532);
	jint temp0 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y));
	jint temp1 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[2].o)))->F_y));
	if (temp0 != temp1) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void clinit_arc_math_geom_Rect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Rect:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Rect(ctx);
	{
	LINE_NUMBER(11);
	clinit_arc_math_geom_Rect(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[0].o);
	clinit_arc_math_geom_Rect(ctx);
	SF_arc_math_geom_Rect_tmp = sp[0].o;
	LINE_NUMBER(14);
	clinit_arc_math_geom_Rect(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[0].o);
	clinit_arc_math_geom_Rect(ctx);
	SF_arc_math_geom_Rect_tmp2 = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_geom_Rect[] {
	(void *) M_arc_math_geom_Rect_hashCode_R_int,
	(void *) M_arc_math_geom_Rect_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_math_geom_Rect_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_math_geom_Rect_contains_arc_math_geom_Vec2_R_boolean,
	(void *) M_arc_math_geom_Rect_contains_float_float_R_boolean,
	(void *) M_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_getX_R_float,
	(void *) M_arc_math_geom_Rect_setX_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_getY_R_float,
	(void *) M_arc_math_geom_Rect_setY_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_getWidth_R_float,
	(void *) M_arc_math_geom_Rect_setWidth_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_getHeight_R_float,
	(void *) M_arc_math_geom_Rect_setHeight_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_getPosition_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Rect_setPosition_arc_math_geom_Vec2_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_setPosition_float_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_move_float_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_setSize_float_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_getSize_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Rect_contains_arc_math_geom_Circle_R_boolean,
	(void *) M_arc_math_geom_Rect_contains_arc_math_geom_Rect_R_boolean,
	(void *) M_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean,
	(void *) M_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean,
	(void *) M_arc_math_geom_Rect_set_arc_math_geom_Rect_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_grow_float_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_merge_arc_math_geom_Rect_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_normalize_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_merge_float_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_merge_arc_math_geom_Vec2_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_merge_Array1_arc_math_geom_Vec2_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_getAspectRatio_R_float,
	(void *) M_arc_math_geom_Rect_getCenter_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_setCenter_arc_math_geom_Vec2_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_fitOutside_arc_math_geom_Rect_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_fitInside_arc_math_geom_Rect_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_fromString_java_lang_String_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_area_R_float,
	(void *) M_arc_math_geom_Rect_perimeter_R_float,
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
	{ "contains", "(Larc/math/geom/Vec2;)Z" },
	{ "contains", "(FF)Z" },
	{ "setCentered", "(FFF)Larc/math/geom/Rect;" },
	{ "setCentered", "(FFFF)Larc/math/geom/Rect;" },
	{ "set", "(FFFF)Larc/math/geom/Rect;" },
	{ "getX", "()F" },
	{ "setX", "(F)Larc/math/geom/Rect;" },
	{ "getY", "()F" },
	{ "setY", "(F)Larc/math/geom/Rect;" },
	{ "getWidth", "()F" },
	{ "setWidth", "(F)Larc/math/geom/Rect;" },
	{ "getHeight", "()F" },
	{ "setHeight", "(F)Larc/math/geom/Rect;" },
	{ "getPosition", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "setPosition", "(Larc/math/geom/Vec2;)Larc/math/geom/Rect;" },
	{ "setPosition", "(FF)Larc/math/geom/Rect;" },
	{ "move", "(FF)Larc/math/geom/Rect;" },
	{ "setSize", "(FF)Larc/math/geom/Rect;" },
	{ "setSize", "(F)Larc/math/geom/Rect;" },
	{ "getSize", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "contains", "(Larc/math/geom/Circle;)Z" },
	{ "contains", "(Larc/math/geom/Rect;)Z" },
	{ "overlaps", "(Larc/math/geom/Rect;)Z" },
	{ "overlaps", "(FFFF)Z" },
	{ "set", "(Larc/math/geom/Rect;)Larc/math/geom/Rect;" },
	{ "grow", "(F)Larc/math/geom/Rect;" },
	{ "grow", "(FF)Larc/math/geom/Rect;" },
	{ "merge", "(Larc/math/geom/Rect;)Larc/math/geom/Rect;" },
	{ "normalize", "()Larc/math/geom/Rect;" },
	{ "merge", "(FF)Larc/math/geom/Rect;" },
	{ "merge", "(Larc/math/geom/Vec2;)Larc/math/geom/Rect;" },
	{ "merge", "([Larc/math/geom/Vec2;)Larc/math/geom/Rect;" },
	{ "getAspectRatio", "()F" },
	{ "getCenter", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "setCenter", "(FF)Larc/math/geom/Rect;" },
	{ "setCenter", "(Larc/math/geom/Vec2;)Larc/math/geom/Rect;" },
	{ "fitOutside", "(Larc/math/geom/Rect;)Larc/math/geom/Rect;" },
	{ "fitInside", "(Larc/math/geom/Rect;)Larc/math/geom/Rect;" },
	{ "fromString", "(Ljava/lang/String;)Larc/math/geom/Rect;" },
	{ "area", "()F" },
	{ "perimeter", "()F" },
};

static jclass interfaces[] { &class_arc_math_geom_Shape2D, };

static FieldMetadata fields[] {
	{ "tmp", &class_arc_math_geom_Rect, (intptr_t) &SF_arc_math_geom_Rect_tmp, "Larc/math/geom/Rect;", 25 },
	{ "tmp2", &class_arc_math_geom_Rect, (intptr_t) &SF_arc_math_geom_Rect_tmp2, "Larc/math/geom/Rect;", 25 },
	{ "x", &class_float, offsetof(arc_math_geom_Rect, F_x), "F", 1 },
	{ "y", &class_float, offsetof(arc_math_geom_Rect, F_y), "F", 1 },
	{ "width", &class_float, offsetof(arc_math_geom_Rect, F_width), "F", 1 },
	{ "height", &class_float, offsetof(arc_math_geom_Rect, F_height), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_geom_Rect, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_Rect_float_float_float_float, 0, "(FFFF)V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_Rect_arc_math_geom_Rect, 0, "(Larc/math/geom/Rect;)V", 1 },
	{ "setCentered", (intptr_t) M_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect, VTABLE_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect, "(FFF)Larc/math/geom/Rect;", 1 },
	{ "setCentered", (intptr_t) M_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect, VTABLE_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect, "(FFFF)Larc/math/geom/Rect;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect, VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect, "(FFFF)Larc/math/geom/Rect;", 1 },
	{ "getX", (intptr_t) M_arc_math_geom_Rect_getX_R_float, VTABLE_arc_math_geom_Rect_getX_R_float, "()F", 1 },
	{ "setX", (intptr_t) M_arc_math_geom_Rect_setX_float_R_arc_math_geom_Rect, VTABLE_arc_math_geom_Rect_setX_float_R_arc_math_geom_Rect, "(F)Larc/math/geom/Rect;", 1 },
	{ "getY", (intptr_t) M_arc_math_geom_Rect_getY_R_float, VTABLE_arc_math_geom_Rect_getY_R_float, "()F", 1 },
	{ "setY", (intptr_t) M_arc_math_geom_Rect_setY_float_R_arc_math_geom_Rect, VTABLE_arc_math_geom_Rect_setY_float_R_arc_math_geom_Rect, "(F)Larc/math/geom/Rect;", 1 },
	{ "getWidth", (intptr_t) M_arc_math_geom_Rect_getWidth_R_float, VTABLE_arc_math_geom_Rect_getWidth_R_float, "()F", 1 },
	{ "setWidth", (intptr_t) M_arc_math_geom_Rect_setWidth_float_R_arc_math_geom_Rect, VTABLE_arc_math_geom_Rect_setWidth_float_R_arc_math_geom_Rect, "(F)Larc/math/geom/Rect;", 1 },
	{ "getHeight", (intptr_t) M_arc_math_geom_Rect_getHeight_R_float, VTABLE_arc_math_geom_Rect_getHeight_R_float, "()F", 1 },
	{ "setHeight", (intptr_t) M_arc_math_geom_Rect_setHeight_float_R_arc_math_geom_Rect, VTABLE_arc_math_geom_Rect_setHeight_float_R_arc_math_geom_Rect, "(F)Larc/math/geom/Rect;", 1 },
	{ "getPosition", (intptr_t) M_arc_math_geom_Rect_getPosition_arc_math_geom_Vec2_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Rect_getPosition_arc_math_geom_Vec2_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 1 },
	{ "setPosition", (intptr_t) M_arc_math_geom_Rect_setPosition_arc_math_geom_Vec2_R_arc_math_geom_Rect, VTABLE_arc_math_geom_Rect_setPosition_arc_math_geom_Vec2_R_arc_math_geom_Rect, "(Larc/math/geom/Vec2;)Larc/math/geom/Rect;", 1 },
	{ "setPosition", (intptr_t) M_arc_math_geom_Rect_setPosition_float_float_R_arc_math_geom_Rect, VTABLE_arc_math_geom_Rect_setPosition_float_float_R_arc_math_geom_Rect, "(FF)Larc/math/geom/Rect;", 1 },
	{ "move", (intptr_t) M_arc_math_geom_Rect_move_float_float_R_arc_math_geom_Rect, VTABLE_arc_math_geom_Rect_move_float_float_R_arc_math_geom_Rect, "(FF)Larc/math/geom/Rect;", 1 },
	{ "setSize", (intptr_t) M_arc_math_geom_Rect_setSize_float_float_R_arc_math_geom_Rect, VTABLE_arc_math_geom_Rect_setSize_float_float_R_arc_math_geom_Rect, "(FF)Larc/math/geom/Rect;", 1 },
	{ "setSize", (intptr_t) M_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect, VTABLE_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect, "(F)Larc/math/geom/Rect;", 1 },
	{ "getSize", (intptr_t) M_arc_math_geom_Rect_getSize_arc_math_geom_Vec2_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Rect_getSize_arc_math_geom_Vec2_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 1 },
	{ "contains", (intptr_t) SM_arc_math_geom_Rect_contains_float_float_float_float_float_float_R_boolean, 0, "(FFFFFF)Z", 9 },
	{ "contains", (intptr_t) SM_arc_math_geom_Rect_contains_float_float_float_float_float_float_float_float_R_boolean, 0, "(FFFFFFFF)Z", 9 },
	{ "contains", (intptr_t) M_arc_math_geom_Rect_contains_float_float_R_boolean, VTABLE_arc_math_geom_Rect_contains_float_float_R_boolean, "(FF)Z", 1 },
	{ "contains", (intptr_t) M_arc_math_geom_Rect_contains_arc_math_geom_Vec2_R_boolean, VTABLE_arc_math_geom_Rect_contains_arc_math_geom_Vec2_R_boolean, "(Larc/math/geom/Vec2;)Z", 1 },
	{ "contains", (intptr_t) M_arc_math_geom_Rect_contains_arc_math_geom_Circle_R_boolean, VTABLE_arc_math_geom_Rect_contains_arc_math_geom_Circle_R_boolean, "(Larc/math/geom/Circle;)Z", 1 },
	{ "contains", (intptr_t) M_arc_math_geom_Rect_contains_arc_math_geom_Rect_R_boolean, VTABLE_arc_math_geom_Rect_contains_arc_math_geom_Rect_R_boolean, "(Larc/math/geom/Rect;)Z", 1 },
	{ "overlaps", (intptr_t) M_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean, VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean, "(Larc/math/geom/Rect;)Z", 1 },
	{ "overlaps", (intptr_t) M_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean, VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean, "(FFFF)Z", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Rect_set_arc_math_geom_Rect_R_arc_math_geom_Rect, VTABLE_arc_math_geom_Rect_set_arc_math_geom_Rect_R_arc_math_geom_Rect, "(Larc/math/geom/Rect;)Larc/math/geom/Rect;", 1 },
	{ "grow", (intptr_t) M_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect, VTABLE_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect, "(F)Larc/math/geom/Rect;", 1 },
	{ "grow", (intptr_t) M_arc_math_geom_Rect_grow_float_float_R_arc_math_geom_Rect, VTABLE_arc_math_geom_Rect_grow_float_float_R_arc_math_geom_Rect, "(FF)Larc/math/geom/Rect;", 1 },
	{ "merge", (intptr_t) M_arc_math_geom_Rect_merge_arc_math_geom_Rect_R_arc_math_geom_Rect, VTABLE_arc_math_geom_Rect_merge_arc_math_geom_Rect_R_arc_math_geom_Rect, "(Larc/math/geom/Rect;)Larc/math/geom/Rect;", 1 },
	{ "normalize", (intptr_t) M_arc_math_geom_Rect_normalize_R_arc_math_geom_Rect, VTABLE_arc_math_geom_Rect_normalize_R_arc_math_geom_Rect, "()Larc/math/geom/Rect;", 1 },
	{ "merge", (intptr_t) M_arc_math_geom_Rect_merge_float_float_R_arc_math_geom_Rect, VTABLE_arc_math_geom_Rect_merge_float_float_R_arc_math_geom_Rect, "(FF)Larc/math/geom/Rect;", 1 },
	{ "merge", (intptr_t) M_arc_math_geom_Rect_merge_arc_math_geom_Vec2_R_arc_math_geom_Rect, VTABLE_arc_math_geom_Rect_merge_arc_math_geom_Vec2_R_arc_math_geom_Rect, "(Larc/math/geom/Vec2;)Larc/math/geom/Rect;", 1 },
	{ "merge", (intptr_t) M_arc_math_geom_Rect_merge_Array1_arc_math_geom_Vec2_R_arc_math_geom_Rect, VTABLE_arc_math_geom_Rect_merge_Array1_arc_math_geom_Vec2_R_arc_math_geom_Rect, "([Larc/math/geom/Vec2;)Larc/math/geom/Rect;", 1 },
	{ "getAspectRatio", (intptr_t) M_arc_math_geom_Rect_getAspectRatio_R_float, VTABLE_arc_math_geom_Rect_getAspectRatio_R_float, "()F", 1 },
	{ "getCenter", (intptr_t) M_arc_math_geom_Rect_getCenter_arc_math_geom_Vec2_R_arc_math_geom_Vec2, VTABLE_arc_math_geom_Rect_getCenter_arc_math_geom_Vec2_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 1 },
	{ "setCenter", (intptr_t) M_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect, VTABLE_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect, "(FF)Larc/math/geom/Rect;", 1 },
	{ "setCenter", (intptr_t) M_arc_math_geom_Rect_setCenter_arc_math_geom_Vec2_R_arc_math_geom_Rect, VTABLE_arc_math_geom_Rect_setCenter_arc_math_geom_Vec2_R_arc_math_geom_Rect, "(Larc/math/geom/Vec2;)Larc/math/geom/Rect;", 1 },
	{ "fitOutside", (intptr_t) M_arc_math_geom_Rect_fitOutside_arc_math_geom_Rect_R_arc_math_geom_Rect, VTABLE_arc_math_geom_Rect_fitOutside_arc_math_geom_Rect_R_arc_math_geom_Rect, "(Larc/math/geom/Rect;)Larc/math/geom/Rect;", 1 },
	{ "fitInside", (intptr_t) M_arc_math_geom_Rect_fitInside_arc_math_geom_Rect_R_arc_math_geom_Rect, VTABLE_arc_math_geom_Rect_fitInside_arc_math_geom_Rect_R_arc_math_geom_Rect, "(Larc/math/geom/Rect;)Larc/math/geom/Rect;", 1 },
	{ "toString", (intptr_t) M_arc_math_geom_Rect_toString_R_java_lang_String, VTABLE_arc_math_geom_Rect_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "fromString", (intptr_t) M_arc_math_geom_Rect_fromString_java_lang_String_R_arc_math_geom_Rect, VTABLE_arc_math_geom_Rect_fromString_java_lang_String_R_arc_math_geom_Rect, "(Ljava/lang/String;)Larc/math/geom/Rect;", 1 },
	{ "area", (intptr_t) M_arc_math_geom_Rect_area_R_float, VTABLE_arc_math_geom_Rect_area_R_float, "()F", 1 },
	{ "perimeter", (intptr_t) M_arc_math_geom_Rect_perimeter_R_float, VTABLE_arc_math_geom_Rect_perimeter_R_float, "()F", 1 },
	{ "hashCode", (intptr_t) M_arc_math_geom_Rect_hashCode_R_int, VTABLE_arc_math_geom_Rect_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_arc_math_geom_Rect_equals_java_lang_Object_R_boolean, VTABLE_arc_math_geom_Rect_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "<clinit>", (intptr_t) clinit_arc_math_geom_Rect, 0, "()V", 8 },
};

Class class_arc_math_geom_Rect{
		.nativeName = (intptr_t) "arc/math/geom/Rect",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_geom_Rect),
		.classVtable = (intptr_t) vtable_arc_math_geom_Rect,
		.staticInitializer = (intptr_t) clinit_arc_math_geom_Rect,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_geom_Rect,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 50,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 52,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_geom_Rect = registerClass(&class_arc_math_geom_Rect);

}
