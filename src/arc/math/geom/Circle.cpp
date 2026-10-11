#include "arc/math/geom/Circle.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "arc/math/geom/Shape2D.h"
#include "java/lang/Float.h"
#include "arc/math/geom/Circle.h"
#include "java/lang/Class.h"

extern "C" {


void mark_arc_math_geom_Circle(jobject object, jint mark, jint depth) {
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
	auto self = (arc_math_geom_Circle *) object;
}

void clinit_arc_math_geom_Circle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_math_geom_Circle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Circle:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Circle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(14);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_Circle_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Circle:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Circle(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(24);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(25);
	((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(26);
	((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(27);
	((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_radius = (frame[3].f);
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_Circle_arc_math_geom_Vec2_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Circle:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Circle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(35);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(36);
	((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(37);
	((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(38);
	((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_radius = (frame[2].f);
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_Circle_arc_math_geom_Circle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Circle:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Circle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(45);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(46);
	((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(47);
	((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(48);
	((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_radius = ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[1].o)))->F_radius);
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_Circle_arc_math_geom_Vec2_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Circle:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Circle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(56);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(57);
	((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(58);
	((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_len_float_float_R_float(ctx, (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x)), (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y)));
	((arc_math_geom_Circle *) NULL_CHECK(sp[0].o))->F_radius = temp0;
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Circle_set_float_float_float_R_arc_math_geom_Circle(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Circle:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(69);
	((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(70);
	((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(71);
	((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_radius = (frame[3].f);
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Circle_set_arc_math_geom_Vec2_float_R_arc_math_geom_Circle(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Circle:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(81);
	((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(82);
	((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(83);
	((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_radius = (frame[2].f);
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Circle_set_arc_math_geom_Circle_R_arc_math_geom_Circle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Circle:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(92);
	((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(93);
	((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(94);
	((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_radius = ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[1].o)))->F_radius);
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Circle_set_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_geom_Circle(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Circle:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(104);
	((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(105);
	((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(106);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_len_float_float_R_float(ctx, (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x)), (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y)));
	((arc_math_geom_Circle *) NULL_CHECK(sp[0].o))->F_radius = temp0;
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Circle_setPosition_arc_math_geom_Vec2_R_arc_math_geom_Circle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Circle:setPosition", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(115);
	((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(116);
	((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Circle_setPosition_float_float_R_arc_math_geom_Circle(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Circle:setPosition", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(126);
	((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(127);
	((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_Circle_setX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Circle:setX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(136);
	((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_Circle_setY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Circle:setY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(144);
	((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_y = (frame[1].f);
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_Circle_setRadius_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Circle:setRadius", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(152);
	((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_radius = (frame[1].f);
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Circle_contains_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Circle:contains", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(162);
	frame[1].f = (((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_x) - (frame[1].f));
	LINE_NUMBER(163);
	frame[2].f = (((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_y) - (frame[2].f));
	LINE_NUMBER(164);
	if ((floatCompare((((frame[1].f) * (frame[1].f)) + ((frame[2].f) * (frame[2].f))), (((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_radius) * ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_radius)), 1)) > 0) goto label_3;
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

jbool M_arc_math_geom_Circle_contains_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Circle:contains", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(173);
	frame[2].f = (((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_x) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(174);
	frame[3].f = (((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(175);
	if ((floatCompare((((frame[2].f) * (frame[2].f)) + ((frame[3].f) * (frame[3].f))), (((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_radius) * ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_radius)), 1)) > 0) goto label_3;
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

jbool M_arc_math_geom_Circle_contains_arc_math_geom_Circle_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Circle:contains", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(183);
	frame[2].f = (((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_radius) - ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[1].o)))->F_radius));
	LINE_NUMBER(184);
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) >= 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(185);
	frame[3].f = (((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_x) - ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(186);
	frame[4].f = (((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_y) - ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(187);
	frame[5].f = (((frame[3].f) * (frame[3].f)) + ((frame[4].f) * (frame[4].f)));
	LINE_NUMBER(188);
	frame[6].f = (((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_radius) + ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[1].o)))->F_radius));
	LINE_NUMBER(189);
	if ((floatCompare(((frame[2].f) * (frame[2].f)), (frame[5].f), 1)) < 0) goto label_7;
	}
	{
	if ((floatCompare((frame[5].f), ((frame[6].f) * (frame[6].f)), 1)) >= 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Circle_overlaps_arc_math_geom_Circle_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Circle:overlaps", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(197);
	frame[2].f = (((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_x) - ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(198);
	frame[3].f = (((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_y) - ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(199);
	frame[4].f = (((frame[2].f) * (frame[2].f)) + ((frame[3].f) * (frame[3].f)));
	LINE_NUMBER(200);
	frame[5].f = (((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_radius) + ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[1].o)))->F_radius));
	LINE_NUMBER(201);
	if ((floatCompare((frame[4].f), ((frame[5].f) * (frame[5].f)), 1)) >= 0) goto label_5;
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

jobject M_arc_math_geom_Circle_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Circle:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(207);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_x));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_y));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_radius));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Circle_circumference_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Circle:circumference", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(212);
	popStackFrame(ctx);
	return (((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_radius) * (jfloat(6.2831855f)));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Circle_area_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Circle:area", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(217);
	popStackFrame(ctx);
	return ((((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_radius) * ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_radius)) * (jfloat(3.1415927f)));
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Circle_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Circle:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(222);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(223);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_2:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(224);
	frame[2].o = (checkCast(ctx, &class_arc_math_geom_Circle, (frame[1].o)));
	LINE_NUMBER(225);
	if ((floatCompare(((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[2].o)))->F_x), -1)) != 0) goto label_5;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[2].o)))->F_y), -1)) != 0) goto label_5;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_radius), ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[2].o)))->F_radius), -1)) != 0) goto label_5;
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

jint M_arc_math_geom_Circle_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Circle:hashCode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(230);
	frame[1].i = (41);
	LINE_NUMBER(231);
	frame[2].i = (jint(1));
	LINE_NUMBER(232);
	jint temp0 = (41) * (frame[2].i);
	jint temp1 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_radius));
	frame[2].i = (temp0 + temp1);
	LINE_NUMBER(233);
	jint temp2 = (41) * (frame[2].i);
	jint temp3 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_x));
	frame[2].i = (temp2 + temp3);
	LINE_NUMBER(234);
	jint temp4 = (41) * (frame[2].i);
	jint temp5 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Circle *) NULL_CHECK((frame[0].o)))->F_y));
	frame[2].i = (temp4 + temp5);
	LINE_NUMBER(235);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_geom_Circle[] {
	(void *) M_arc_math_geom_Circle_hashCode_R_int,
	(void *) M_arc_math_geom_Circle_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_math_geom_Circle_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_math_geom_Circle_contains_arc_math_geom_Vec2_R_boolean,
	(void *) M_arc_math_geom_Circle_contains_float_float_R_boolean,
	(void *) M_arc_math_geom_Circle_set_float_float_float_R_arc_math_geom_Circle,
	(void *) M_arc_math_geom_Circle_set_arc_math_geom_Vec2_float_R_arc_math_geom_Circle,
	(void *) M_arc_math_geom_Circle_set_arc_math_geom_Circle_R_arc_math_geom_Circle,
	(void *) M_arc_math_geom_Circle_set_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_geom_Circle,
	(void *) M_arc_math_geom_Circle_setPosition_arc_math_geom_Vec2_R_arc_math_geom_Circle,
	(void *) M_arc_math_geom_Circle_setPosition_float_float_R_arc_math_geom_Circle,
	(void *) M_arc_math_geom_Circle_setX_float,
	(void *) M_arc_math_geom_Circle_setY_float,
	(void *) M_arc_math_geom_Circle_setRadius_float,
	(void *) M_arc_math_geom_Circle_contains_arc_math_geom_Circle_R_boolean,
	(void *) M_arc_math_geom_Circle_overlaps_arc_math_geom_Circle_R_boolean,
	(void *) M_arc_math_geom_Circle_circumference_R_float,
	(void *) M_arc_math_geom_Circle_area_R_float,
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
	{ "set", "(FFF)Larc/math/geom/Circle;" },
	{ "set", "(Larc/math/geom/Vec2;F)Larc/math/geom/Circle;" },
	{ "set", "(Larc/math/geom/Circle;)Larc/math/geom/Circle;" },
	{ "set", "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;)Larc/math/geom/Circle;" },
	{ "setPosition", "(Larc/math/geom/Vec2;)Larc/math/geom/Circle;" },
	{ "setPosition", "(FF)Larc/math/geom/Circle;" },
	{ "setX", "(F)V" },
	{ "setY", "(F)V" },
	{ "setRadius", "(F)V" },
	{ "contains", "(Larc/math/geom/Circle;)Z" },
	{ "overlaps", "(Larc/math/geom/Circle;)Z" },
	{ "circumference", "()F" },
	{ "area", "()F" },
};

static jclass interfaces[] { &class_arc_math_geom_Shape2D, };

static FieldMetadata fields[] {
	{ "x", &class_float, offsetof(arc_math_geom_Circle, F_x), "F", 1 },
	{ "y", &class_float, offsetof(arc_math_geom_Circle, F_y), "F", 1 },
	{ "radius", &class_float, offsetof(arc_math_geom_Circle, F_radius), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_geom_Circle, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_Circle_float_float_float, 0, "(FFF)V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_Circle_arc_math_geom_Vec2_float, 0, "(Larc/math/geom/Vec2;F)V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_Circle_arc_math_geom_Circle, 0, "(Larc/math/geom/Circle;)V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_Circle_arc_math_geom_Vec2_arc_math_geom_Vec2, 0, "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;)V", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Circle_set_float_float_float_R_arc_math_geom_Circle, VTABLE_arc_math_geom_Circle_set_float_float_float_R_arc_math_geom_Circle, "(FFF)Larc/math/geom/Circle;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Circle_set_arc_math_geom_Vec2_float_R_arc_math_geom_Circle, VTABLE_arc_math_geom_Circle_set_arc_math_geom_Vec2_float_R_arc_math_geom_Circle, "(Larc/math/geom/Vec2;F)Larc/math/geom/Circle;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Circle_set_arc_math_geom_Circle_R_arc_math_geom_Circle, VTABLE_arc_math_geom_Circle_set_arc_math_geom_Circle_R_arc_math_geom_Circle, "(Larc/math/geom/Circle;)Larc/math/geom/Circle;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Circle_set_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_geom_Circle, VTABLE_arc_math_geom_Circle_set_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_geom_Circle, "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;)Larc/math/geom/Circle;", 1 },
	{ "setPosition", (intptr_t) M_arc_math_geom_Circle_setPosition_arc_math_geom_Vec2_R_arc_math_geom_Circle, VTABLE_arc_math_geom_Circle_setPosition_arc_math_geom_Vec2_R_arc_math_geom_Circle, "(Larc/math/geom/Vec2;)Larc/math/geom/Circle;", 1 },
	{ "setPosition", (intptr_t) M_arc_math_geom_Circle_setPosition_float_float_R_arc_math_geom_Circle, VTABLE_arc_math_geom_Circle_setPosition_float_float_R_arc_math_geom_Circle, "(FF)Larc/math/geom/Circle;", 1 },
	{ "setX", (intptr_t) M_arc_math_geom_Circle_setX_float, VTABLE_arc_math_geom_Circle_setX_float, "(F)V", 1 },
	{ "setY", (intptr_t) M_arc_math_geom_Circle_setY_float, VTABLE_arc_math_geom_Circle_setY_float, "(F)V", 1 },
	{ "setRadius", (intptr_t) M_arc_math_geom_Circle_setRadius_float, VTABLE_arc_math_geom_Circle_setRadius_float, "(F)V", 1 },
	{ "contains", (intptr_t) M_arc_math_geom_Circle_contains_float_float_R_boolean, VTABLE_arc_math_geom_Circle_contains_float_float_R_boolean, "(FF)Z", 1 },
	{ "contains", (intptr_t) M_arc_math_geom_Circle_contains_arc_math_geom_Vec2_R_boolean, VTABLE_arc_math_geom_Circle_contains_arc_math_geom_Vec2_R_boolean, "(Larc/math/geom/Vec2;)Z", 1 },
	{ "contains", (intptr_t) M_arc_math_geom_Circle_contains_arc_math_geom_Circle_R_boolean, VTABLE_arc_math_geom_Circle_contains_arc_math_geom_Circle_R_boolean, "(Larc/math/geom/Circle;)Z", 1 },
	{ "overlaps", (intptr_t) M_arc_math_geom_Circle_overlaps_arc_math_geom_Circle_R_boolean, VTABLE_arc_math_geom_Circle_overlaps_arc_math_geom_Circle_R_boolean, "(Larc/math/geom/Circle;)Z", 1 },
	{ "toString", (intptr_t) M_arc_math_geom_Circle_toString_R_java_lang_String, VTABLE_arc_math_geom_Circle_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "circumference", (intptr_t) M_arc_math_geom_Circle_circumference_R_float, VTABLE_arc_math_geom_Circle_circumference_R_float, "()F", 1 },
	{ "area", (intptr_t) M_arc_math_geom_Circle_area_R_float, VTABLE_arc_math_geom_Circle_area_R_float, "()F", 1 },
	{ "equals", (intptr_t) M_arc_math_geom_Circle_equals_java_lang_Object_R_boolean, VTABLE_arc_math_geom_Circle_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_arc_math_geom_Circle_hashCode_R_int, VTABLE_arc_math_geom_Circle_hashCode_R_int, "()I", 1 },
};

Class class_arc_math_geom_Circle{
		.nativeName = (intptr_t) "arc/math/geom/Circle",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_geom_Circle),
		.classVtable = (intptr_t) vtable_arc_math_geom_Circle,
		.staticInitializer = (intptr_t) clinit_arc_math_geom_Circle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_geom_Circle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 23,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_geom_Circle = registerClass(&class_arc_math_geom_Circle);

}
