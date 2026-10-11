#include "arc/math/geom/Plane.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "arc/math/geom/Plane_PlaneSide.h"
#include "arc/math/geom/Plane.h"
#include "arc/math/geom/Vec3.h"

extern "C" {


void mark_arc_math_geom_Plane(jobject object, jint mark, jint depth) {
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
	auto self = (arc_math_geom_Plane *) object;
	if (self->F_normal)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_normal)->clazz)->markFunction)((jobject) self->F_normal, mark, depth + 1);
}

void clinit_arc_math_geom_Plane(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_math_geom_Plane(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Plane:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Plane(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(14);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(8);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((arc_math_geom_Plane *) NULL_CHECK(sp[0].o))->F_normal = (jref) sp[1].o;
	LINE_NUMBER(9);
	((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_d = (jfloat(0));
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_Plane_arc_math_geom_Vec3_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Plane:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Plane(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(23);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(8);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((arc_math_geom_Plane *) NULL_CHECK(sp[0].o))->F_normal = (jref) sp[1].o;
	LINE_NUMBER(9);
	((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_d = (jfloat(0));
	LINE_NUMBER(24);
	sp[0].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	LINE_NUMBER(25);
	((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_d = (frame[2].f);
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_Plane_arc_math_geom_Vec3_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Plane:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Plane(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(33);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(8);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((arc_math_geom_Plane *) NULL_CHECK(sp[0].o))->F_normal = (jref) sp[1].o;
	LINE_NUMBER(9);
	((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_d = (jfloat(0));
	LINE_NUMBER(34);
	sp[0].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, sp[1].o, (frame[2].o));
	((arc_math_geom_Plane *) NULL_CHECK(sp[0].o))->F_d = (-temp0);
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_Plane_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Plane:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Plane(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(45);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(8);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((arc_math_geom_Plane *) NULL_CHECK(sp[0].o))->F_normal = (jref) sp[1].o;
	LINE_NUMBER(9);
	((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_d = (jfloat(0));
	LINE_NUMBER(46);
	((func_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Plane:set", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_crs_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_crs_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_x) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[3].o)))->F_x)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_y) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[3].o)))->F_y)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_z) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[3].o)))->F_z)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, sp[1].o, sp[2].o);
	((arc_math_geom_Plane *) NULL_CHECK(sp[0].o))->F_d = (-temp0);
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_Plane_set_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Plane:set", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(67);
	((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_d = (frame[4].f);
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Plane_project_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Plane:project", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, (frame[1].o));
	frame[2].f = (temp0 + ((jfloat)((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_d));
	LINE_NUMBER(74);
	sp[0].o = frame[1].o;
	jfloat temp1 = frame[2].f;
	sp[1].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	jfloat temp2 = temp1 * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp3 = frame[2].f;
	sp[1].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	jfloat temp4 = temp3 * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_y);
	jfloat temp5 = frame[2].f;
	sp[1].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, temp2, temp4, (temp5 * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_z)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Plane_distance_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Plane:distance", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (temp0 + ((jfloat)((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_d));
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Plane:testPoint", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, (frame[1].o));
	frame[2].f = (temp0 + ((jfloat)((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_d));
	LINE_NUMBER(95);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) != 0) goto label_2;
	}
	{
	LINE_NUMBER(96);
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_onPlane;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(97);
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(98);
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_back;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(100);
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_front;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Plane:testPoint", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dot_float_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dot_float_float_float_R_float])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	frame[4].f = (temp0 + ((jfloat)((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_d));
	LINE_NUMBER(111);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) != 0) goto label_2;
	}
	{
	LINE_NUMBER(112);
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_onPlane;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(113);
	if ((floatCompare((frame[4].f), (jfloat(0)), 1)) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(114);
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_back;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(116);
	clinit_arc_math_geom_Plane$PlaneSide(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Plane$PlaneSide_front;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Plane_isFrontFacing_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Plane:isFrontFacing", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, (frame[1].o));
	frame[2].f = temp0;
	LINE_NUMBER(127);
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) > 0) goto label_2;
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

jobject M_arc_math_geom_Plane_getNormal_R_arc_math_geom_Vec3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Plane:getNormal", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Plane_getD_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Plane:getD", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return ((jfloat)((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_d);
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Plane:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(147);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, (frame[1].o), (frame[2].o));
	((arc_math_geom_Plane *) NULL_CHECK(sp[0].o))->F_d = (-temp0);
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_Plane_set_float_float_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Plane:set", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[4].f), (frame[5].f), (frame[6].f));
	LINE_NUMBER(152);
	((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_d = (-((((frame[1].f) * (frame[4].f)) + ((frame[2].f) * (frame[5].f))) + ((frame[3].f) * (frame[6].f))));
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_Plane_set_arc_math_geom_Plane(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Plane:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	sp[1].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK((frame[1].o)))->F_normal;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(161);
	((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_d = ((jfloat)((arc_math_geom_Plane *) NULL_CHECK((frame[1].o)))->F_d);
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Plane_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Plane:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(166);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_normal;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Plane *) NULL_CHECK((frame[0].o)))->F_d));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_geom_Plane[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_math_geom_Plane_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Plane_set_float_float_float_float,
	(void *) M_arc_math_geom_Plane_project_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Plane_distance_arc_math_geom_Vec3_R_float,
	(void *) M_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide,
	(void *) M_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide,
	(void *) M_arc_math_geom_Plane_isFrontFacing_arc_math_geom_Vec3_R_boolean,
	(void *) M_arc_math_geom_Plane_getNormal_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Plane_getD_R_float,
	(void *) M_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Plane_set_float_float_float_float_float_float,
	(void *) M_arc_math_geom_Plane_set_arc_math_geom_Plane,
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
	{ "set", "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/math/geom/Vec3;)V" },
	{ "set", "(FFFF)V" },
	{ "project", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "distance", "(Larc/math/geom/Vec3;)F" },
	{ "testPoint", "(Larc/math/geom/Vec3;)Larc/math/geom/Plane$PlaneSide;" },
	{ "testPoint", "(FFF)Larc/math/geom/Plane$PlaneSide;" },
	{ "isFrontFacing", "(Larc/math/geom/Vec3;)Z" },
	{ "getNormal", "()Larc/math/geom/Vec3;" },
	{ "getD", "()F" },
	{ "set", "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;)V" },
	{ "set", "(FFFFFF)V" },
	{ "set", "(Larc/math/geom/Plane;)V" },
};

static jclass innerClasses[] {
	&class_arc_math_geom_Plane$PlaneSide,
};

static FieldMetadata fields[] {
	{ "normal", &class_arc_math_geom_Vec3, offsetof(arc_math_geom_Plane, F_normal), "Larc/math/geom/Vec3;", 17 },
	{ "d", &class_float, offsetof(arc_math_geom_Plane, F_d), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_geom_Plane, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_Plane_arc_math_geom_Vec3_float, 0, "(Larc/math/geom/Vec3;F)V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_Plane_arc_math_geom_Vec3_arc_math_geom_Vec3, 0, "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;)V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_Plane_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3, 0, "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/math/geom/Vec3;)V", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3, VTABLE_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/math/geom/Vec3;)V", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Plane_set_float_float_float_float, VTABLE_arc_math_geom_Plane_set_float_float_float_float, "(FFFF)V", 1 },
	{ "project", (intptr_t) M_arc_math_geom_Plane_project_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Plane_project_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "distance", (intptr_t) M_arc_math_geom_Plane_distance_arc_math_geom_Vec3_R_float, VTABLE_arc_math_geom_Plane_distance_arc_math_geom_Vec3_R_float, "(Larc/math/geom/Vec3;)F", 1 },
	{ "testPoint", (intptr_t) M_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide, VTABLE_arc_math_geom_Plane_testPoint_arc_math_geom_Vec3_R_arc_math_geom_Plane$PlaneSide, "(Larc/math/geom/Vec3;)Larc/math/geom/Plane$PlaneSide;", 1 },
	{ "testPoint", (intptr_t) M_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide, VTABLE_arc_math_geom_Plane_testPoint_float_float_float_R_arc_math_geom_Plane$PlaneSide, "(FFF)Larc/math/geom/Plane$PlaneSide;", 1 },
	{ "isFrontFacing", (intptr_t) M_arc_math_geom_Plane_isFrontFacing_arc_math_geom_Vec3_R_boolean, VTABLE_arc_math_geom_Plane_isFrontFacing_arc_math_geom_Vec3_R_boolean, "(Larc/math/geom/Vec3;)Z", 1 },
	{ "getNormal", (intptr_t) M_arc_math_geom_Plane_getNormal_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Plane_getNormal_R_arc_math_geom_Vec3, "()Larc/math/geom/Vec3;", 1 },
	{ "getD", (intptr_t) M_arc_math_geom_Plane_getD_R_float, VTABLE_arc_math_geom_Plane_getD_R_float, "()F", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3, VTABLE_arc_math_geom_Plane_set_arc_math_geom_Vec3_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;)V", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Plane_set_float_float_float_float_float_float, VTABLE_arc_math_geom_Plane_set_float_float_float_float_float_float, "(FFFFFF)V", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Plane_set_arc_math_geom_Plane, VTABLE_arc_math_geom_Plane_set_arc_math_geom_Plane, "(Larc/math/geom/Plane;)V", 1 },
	{ "toString", (intptr_t) M_arc_math_geom_Plane_toString_R_java_lang_String, VTABLE_arc_math_geom_Plane_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_arc_math_geom_Plane{
		.nativeName = (intptr_t) "arc/math/geom/Plane",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_geom_Plane),
		.classVtable = (intptr_t) vtable_arc_math_geom_Plane,
		.staticInitializer = (intptr_t) clinit_arc_math_geom_Plane,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_geom_Plane,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_geom_Plane = registerClass(&class_arc_math_geom_Plane);

}
