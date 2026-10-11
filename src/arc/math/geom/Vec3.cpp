#include "arc/math/geom/Vec3.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/StringBuilder.h"
#include "arc/math/geom/Vector.h"
#include "arc/math/Rand.h"
#include "arc/math/Interp.h"
#include "java/lang/Float.h"
#include "arc/math/Mat.h"
#include "arc/math/geom/Vec3.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/NumberFormatException.h"
#include "arc/util/ArcRuntimeException.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_arc_math_geom_Vec3_X;
jobject SF_arc_math_geom_Vec3_Y;
jobject SF_arc_math_geom_Vec3_Z;
jobject SF_arc_math_geom_Vec3_Zero;
jobject SF_arc_math_geom_Vec3_tmpMat;

void mark_arc_math_geom_Vec3(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_math_geom_Vec3_X)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Vec3_X)->clazz)->markFunction)((jobject) SF_arc_math_geom_Vec3_X, mark, depth + 1);
		if (SF_arc_math_geom_Vec3_Y)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Vec3_Y)->clazz)->markFunction)((jobject) SF_arc_math_geom_Vec3_Y, mark, depth + 1);
		if (SF_arc_math_geom_Vec3_Z)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Vec3_Z)->clazz)->markFunction)((jobject) SF_arc_math_geom_Vec3_Z, mark, depth + 1);
		if (SF_arc_math_geom_Vec3_Zero)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Vec3_Zero)->clazz)->markFunction)((jobject) SF_arc_math_geom_Vec3_Zero, mark, depth + 1);
		if (SF_arc_math_geom_Vec3_tmpMat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Vec3_tmpMat)->clazz)->markFunction)((jobject) SF_arc_math_geom_Vec3_tmpMat, mark, depth + 1);
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
	auto self = (arc_math_geom_Vec3 *) object;
}

void init_arc_math_geom_Vec3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Vec3(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(24);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_Vec3_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Vec3(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(33);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(34);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_Vec3_double_double_double(jcontext ctx, jobject self, jdouble param0, jdouble param1, jdouble param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Vec3(ctx);
	frame[0].o = self;
	frame[1].d = param0;
	frame[3].d = param1;
	frame[5].d = param2;
	{
	LINE_NUMBER(38);
	init_arc_math_geom_Vec3_float_float_float(ctx, (frame[0].o), (jfloat((frame[1].d))), (jfloat((frame[3].d))), (jfloat((frame[5].d))));
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_Vec3_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Vec3(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(45);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(46);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_Vec3_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Vec3(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(54);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))));
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_Vec3_arc_math_geom_Vec2_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Vec3(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(62);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(63);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y), (frame[2].f));
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_geom_Vec3_len_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:len", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Vec3(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(68);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((((frame[0].f) * (frame[0].f)) + ((frame[1].f) * (frame[1].f))) + ((frame[2].f) * (frame[2].f))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_geom_Vec3_len2_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:len2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Vec3(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return ((((frame[0].f) * (frame[0].f)) + ((frame[1].f) * (frame[1].f))) + ((frame[2].f) * (frame[2].f)));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_geom_Vec3_dst_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:dst", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Vec3(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(78);
	frame[6].f = ((frame[3].f) - (frame[0].f));
	LINE_NUMBER(79);
	frame[7].f = ((frame[4].f) - (frame[1].f));
	LINE_NUMBER(80);
	frame[8].f = ((frame[5].f) - (frame[2].f));
	LINE_NUMBER(81);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((((frame[6].f) * (frame[6].f)) + ((frame[7].f) * (frame[7].f))) + ((frame[8].f) * (frame[8].f))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_geom_Vec3_dst2_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:dst2", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Vec3(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(86);
	frame[6].f = ((frame[3].f) - (frame[0].f));
	LINE_NUMBER(87);
	frame[7].f = ((frame[4].f) - (frame[1].f));
	LINE_NUMBER(88);
	frame[8].f = ((frame[5].f) - (frame[2].f));
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return ((((frame[6].f) * (frame[6].f)) + ((frame[7].f) * (frame[7].f))) + ((frame[8].f) * (frame[8].f)));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_geom_Vec3_dot_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:dot", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Vec3(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return ((((frame[0].f) * (frame[3].f)) + ((frame[1].f) * (frame[4].f))) + ((frame[2].f) * (frame[5].f)));
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(105);
	((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(106);
	((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(107);
	((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z = (frame[3].f);
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_div_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:div", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x) / ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y) / ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z) / ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z));
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_set_Array1_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_set_Array1_float_int_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:set", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[2].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (jint(1))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[2].i) + (jint(2))))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_set_arc_math_geom_Vec2_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_setFromSpherical_float_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:setFromSpherical", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(155);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_cos_float_R_float(ctx, (frame[2].f));
	frame[3].f = temp0;
	LINE_NUMBER(156);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sin_float_R_float(ctx, (frame[2].f));
	frame[4].f = temp1;
	LINE_NUMBER(158);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_cos_float_R_float(ctx, (frame[1].f));
	frame[5].f = temp2;
	LINE_NUMBER(159);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_sin_float_R_float(ctx, (frame[1].f));
	frame[6].f = temp3;
	LINE_NUMBER(161);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), ((frame[5].f) * (frame[4].f)), ((frame[6].f) * (frame[4].f)), (frame[3].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_setToRandomDirection_R_arc_math_geom_Vec3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:setToRandomDirection", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(166);
	sp[0].o = frame[0].o;
	clinit_arc_math_Mathf(ctx);
	sp[1].o = (jobject)SF_arc_math_Mathf_rand;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_setToRandomDirection_arc_math_Rand_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_setToRandomDirection_arc_math_Rand_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_setToRandomDirection_arc_math_Rand_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:setToRandomDirection", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(170);
	jfloat temp0 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, (frame[1].o), (jfloat(1)));
	frame[2].f = temp0;
	LINE_NUMBER(171);
	jfloat temp1 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, (frame[1].o), (jfloat(1)));
	frame[3].f = temp1;
	LINE_NUMBER(173);
	frame[4].f = ((jfloat(6.2831855f)) * (frame[2].f));
	LINE_NUMBER(174);
	jdouble temp2 = (jdouble)SM_java_lang_Math_acos_double_R_double(ctx, (jdouble((((jfloat(2)) * (frame[3].f)) - (jfloat(1))))));
	frame[5].f = (jfloat(temp2));
	LINE_NUMBER(176);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_setFromSpherical_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_setFromSpherical_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (frame[4].f), (frame[5].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vec3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:cpy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(181);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_arc_math_geom_Vec3(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_add_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_cpy_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:cpy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_add_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_add_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x) * (frame[2].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) * (frame[2].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z) * (frame[2].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:sub", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_sub_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x) * (frame[2].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) * (frame[2].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z) * (frame[2].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_add_float_float_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:add", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) + (frame[1].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) + (frame[2].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) + (frame[3].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_add_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:add", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) + (frame[1].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) + (frame[1].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) + (frame[1].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:sub", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_sub_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_sub_float_float_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:sub", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) - (frame[1].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) - (frame[2].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) - (frame[3].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_sub_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:sub", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) - (frame[1].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) - (frame[1].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) - (frame[1].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:scl", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[1].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[1].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * (frame[1].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_scl_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:scl", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_scl_float_float_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:scl", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(264);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[1].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[2].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * (frame[3].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:mulAdd", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(269);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x) * (frame[2].f)));
	LINE_NUMBER(270);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) * (frame[2].f)));
	LINE_NUMBER(271);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z) * (frame[2].f)));
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:mulAdd", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(277);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_x)));
	LINE_NUMBER(278);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_y)));
	LINE_NUMBER(279);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_z)));
	LINE_NUMBER(280);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec3_len_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:len", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(285);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x)) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec3_len2_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:len2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return (((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x)) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z)));
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec3_idt_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:idt", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(298);
	if ((floatCompare(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z), -1)) != 0) goto label_1;
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

jfloat M_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:dst", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(303);
	frame[2].f = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(304);
	frame[3].f = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(305);
	frame[4].f = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z));
	LINE_NUMBER(306);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((((frame[2].f) * (frame[2].f)) + ((frame[3].f) * (frame[3].f))) + ((frame[4].f) * (frame[4].f))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec3_dst_float_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:dst", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(311);
	frame[4].f = ((frame[1].f) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(312);
	frame[5].f = ((frame[2].f) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(313);
	frame[6].f = ((frame[3].f) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z));
	LINE_NUMBER(314);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((((frame[4].f) * (frame[4].f)) + ((frame[5].f) * (frame[5].f))) + ((frame[6].f) * (frame[6].f))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec3_dst2_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:dst2", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(319);
	frame[2].f = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(320);
	frame[3].f = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(321);
	frame[4].f = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z));
	LINE_NUMBER(322);
	popStackFrame(ctx);
	return ((((frame[2].f) * (frame[2].f)) + ((frame[3].f) * (frame[3].f))) + ((frame[4].f) * (frame[4].f)));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec3_dst2_float_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:dst2", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(333);
	frame[4].f = ((frame[1].f) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(334);
	frame[5].f = ((frame[2].f) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(335);
	frame[6].f = ((frame[3].f) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z));
	LINE_NUMBER(336);
	popStackFrame(ctx);
	return ((((frame[4].f) * (frame[4].f)) + ((frame[5].f) * (frame[5].f))) + ((frame[6].f) * (frame[6].f)));
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec3_within_arc_math_geom_Vec3_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:within", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(340);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dst2_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_dst2_arc_math_geom_Vec3_R_float])(ctx, (frame[0].o), (frame[1].o));
	if ((floatCompare(temp0, ((frame[2].f) * (frame[2].f)), 1)) >= 0) goto label_1;
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

jobject M_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:nor", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(345);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_len2_R_float])(ctx, (frame[0].o));
	frame[1].f = temp0;
	LINE_NUMBER(346);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) == 0) goto label_2;
	}
	{
	if ((floatCompare((frame[1].f), (jfloat(1)), -1)) != 0) goto label_3;
	}
label_2:;
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(347);
	sp[0].o = frame[0].o;
	jfloat temp0 = jfloat(1);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((frame[1].f))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (temp0 / (jfloat(temp1))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:dot", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return (((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x)) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z)));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec3_angleRad_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:angleRad", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(357);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_len_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_len_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(358);
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vec3_len_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Vec3_len_R_float])(ctx, (frame[1].o));
	frame[3].f = temp1;
	LINE_NUMBER(359);
	jfloat temp2 = (jfloat)SM_arc_math_geom_Vec3_dot_float_float_float_float_float_float_R_float(ctx, (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) / (frame[2].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) / (frame[2].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) / (frame[2].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x) / (frame[3].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) / (frame[3].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z) / (frame[3].f)));
	jdouble temp3 = (jdouble)SM_java_lang_Math_acos_double_R_double(ctx, (jdouble(temp2)));
	popStackFrame(ctx);
	return (jfloat(temp3));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec3_angle_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:angle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(364);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_angleRad_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_angleRad_arc_math_geom_Vec3_R_float])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return (temp0 * (jfloat(57.295776f)));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec3_dot_float_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:dot", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(375);
	popStackFrame(ctx);
	return (((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[1].f)) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[2].f))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * (frame[3].f)));
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_crs_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:crs", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), ((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z)) - (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y))), ((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x)) - (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z))), ((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y)) - (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_crs_float_float_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:crs", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(395);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), ((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[3].f)) - (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * (frame[2].f))), ((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * (frame[1].f)) - (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[3].f))), ((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[2].f)) - (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[1].f))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_mul4x3_Array1_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:mul4x3", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(405);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), ((((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3)))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (6))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (9)))), ((((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(4)))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (7))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (10)))), ((((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5)))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (8))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (11)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_mul_arc_math_Mat_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:mul", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(415);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(416);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3)))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (6))))), (((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4)))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (7))))), (((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5)))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (8))))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_traMul_arc_math_Mat_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:traMul", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(426);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(427);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1)))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2)))))), (((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4)))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5)))))), (((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (6)))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (7))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (8))))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:rotate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(438);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Vec3_tmpMat;
	sp[0].o = (jobject)((func_arc_math_Mat_setToRotation_arc_math_geom_Vec3_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_setToRotation_arc_math_geom_Vec3_float_R_arc_math_Mat])(ctx, sp[0].o, (frame[1].o), (frame[2].f));
	LINE_NUMBER(439);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Vec3_tmpMat;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_mul_arc_math_Mat_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_mul_arc_math_Mat_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec3_isUnit_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:isUnit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(444);
	jint temp0 = (jint)((func_arc_math_geom_Vec3_isUnit_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_isUnit_float_R_boolean])(ctx, (frame[0].o), (jfloat(1,000000e-09f)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec3_isUnit_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:isUnit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(449);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_len2_R_float])(ctx, (frame[0].o));
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

jbool M_arc_math_geom_Vec3_isZero_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:isZero", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(454);
	if ((floatCompare(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z), (jfloat(0)), -1)) != 0) goto label_1;
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

jbool M_arc_math_geom_Vec3_isZero_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:isZero", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(459);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_len2_R_float])(ctx, (frame[0].o));
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

jbool M_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vec3_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:isOnLine", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(464);
	jfloat temp0 = (jfloat)SM_arc_math_geom_Vec3_len2_float_float_float_R_float(ctx, ((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z)) - (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y))), ((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x)) - (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z))), ((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y)) - (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x))));
	if ((floatCompare(temp0, (frame[2].f), 1)) > 0) goto label_1;
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

jbool M_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:isOnLine", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(469);
	jfloat temp0 = (jfloat)SM_arc_math_geom_Vec3_len2_float_float_float_R_float(ctx, ((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z)) - (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y))), ((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x)) - (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z))), ((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y)) - (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x))));
	if ((floatCompare(temp0, (jfloat(1,000000e-06f)), 1)) > 0) goto label_1;
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

jbool M_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vec3_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:isCollinear", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(474);
	jint temp0 = (jint)((func_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vec3_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vec3_float_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_math_geom_Vec3_hasSameDirection_arc_math_geom_Vec3_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_hasSameDirection_arc_math_geom_Vec3_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
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

jbool M_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:isCollinear", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(479);
	jint temp0 = (jint)((func_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vec3_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vec3_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_math_geom_Vec3_hasSameDirection_arc_math_geom_Vec3_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_hasSameDirection_arc_math_geom_Vec3_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
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

jbool M_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vec3_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:isCollinearOpposite", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(484);
	jint temp0 = (jint)((func_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vec3_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vec3_float_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_math_geom_Vec3_hasOppositeDirection_arc_math_geom_Vec3_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_hasOppositeDirection_arc_math_geom_Vec3_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
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

jbool M_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:isCollinearOpposite", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(489);
	jint temp0 = (jint)((func_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vec3_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vec3_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_math_geom_Vec3_hasOppositeDirection_arc_math_geom_Vec3_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_hasOppositeDirection_arc_math_geom_Vec3_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
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

jbool M_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:isPerpendicular", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(494);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, (frame[0].o), (frame[1].o));
	jint temp1 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vec3_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:isPerpendicular", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(499);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, (frame[0].o), (frame[1].o));
	jint temp1 = (jint)SM_arc_math_Mathf_zero_float_float_R_boolean(ctx, temp0, (frame[2].f));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec3_hasSameDirection_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:hasSameDirection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(504);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, (frame[0].o), (frame[1].o));
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

jbool M_arc_math_geom_Vec3_hasOppositeDirection_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:hasOppositeDirection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(509);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, (frame[0].o), (frame[1].o));
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

jobject M_arc_math_geom_Vec3_lerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:lerp", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(514);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x) + ((frame[2].f) * (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x))));
	LINE_NUMBER(515);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y) + ((frame[2].f) * (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y))));
	LINE_NUMBER(516);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z) + ((frame[2].f) * (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z))));
	LINE_NUMBER(517);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_interpolate_arc_math_geom_Vec3_float_arc_math_Interp_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:interpolate", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(522);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_arc_math_Interp_apply_float_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_float_float_R_float, (frame[3].o)))(ctx, (frame[3].o), (jfloat(0)), (jfloat(1)), (frame[2].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_lerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_lerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_slerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:slerp", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(533);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, (frame[0].o), (frame[1].o));
	frame[3].f = temp0;
	LINE_NUMBER(535);
	if ((doubleCompare((jdouble((frame[3].f))), (jdouble(0.9995)), -1)) > 0) goto label_2;
	}
	{
	if ((doubleCompare((jdouble((frame[3].f))), (jdouble(-0.9995)), 1)) >= 0) goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_lerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_lerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(538);
	jdouble temp0 = (jdouble)SM_java_lang_Math_acos_double_R_double(ctx, (jdouble((frame[3].f))));
	frame[4].f = (jfloat(temp0));
	LINE_NUMBER(540);
	frame[5].f = ((frame[4].f) * (frame[2].f));
	LINE_NUMBER(542);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble((frame[5].f))));
	frame[6].f = (jfloat(temp1));
	LINE_NUMBER(543);
	frame[7].f = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x) - (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * (frame[3].f)));
	LINE_NUMBER(544);
	frame[8].f = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) - (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * (frame[3].f)));
	LINE_NUMBER(545);
	frame[9].f = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z) - (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * (frame[3].f)));
	LINE_NUMBER(546);
	frame[10].f = ((((frame[7].f) * (frame[7].f)) + ((frame[8].f) * (frame[8].f))) + ((frame[9].f) * (frame[9].f)));
	LINE_NUMBER(547);
	jfloat temp2 = frame[6].f;
	sp[0].f = temp2;
	sp += 1;
	if ((floatCompare((frame[10].f), (jfloat(1,000000e-04f)), 1)) >= 0) goto label_11;
	}
	INST_FCONST(1);
	goto label_12;
label_11:;
	{
	jfloat temp0 = jfloat(1);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((frame[10].f))));
	jfloat temp2 = temp0 / (jfloat(temp1));
	sp[0].f = temp2;
	sp += 1;
	}
label_12:;
	{
	sp -= 2;
	frame[11].f = (sp[0].f * sp[1].f);
	LINE_NUMBER(549);
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_java_lang_Math_cos_double_R_double(ctx, (jdouble((frame[5].f))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (jfloat(temp0)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, ((frame[7].f) * (frame[11].f)), ((frame[8].f) * (frame[11].f)), ((frame[9].f) * (frame[11].f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(558);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_fromString_java_lang_String_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:fromString", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(567);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[1].o), (44), (jint(1)));
	frame[2].i = temp0;
	LINE_NUMBER(568);
	jint temp1 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[1].o), (44), ((frame[2].i) + (jint(1))));
	frame[3].i = temp1;
	LINE_NUMBER(569);
	if ((frame[2].i) == (jint(-1))) goto label_7;
	}
	{
	if ((frame[3].i) == (jint(-1))) goto label_7;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (40)) goto label_7;
	}
	{
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (temp0 - (jint(1))));
	if (temp1 != (41)) goto label_7;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(571);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (jint(1)), (frame[2].i));
	jfloat temp0 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[4].f = temp0;
	LINE_NUMBER(572);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), ((frame[2].i) + (jint(1))), (frame[3].i));
	jfloat temp1 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[5].f = temp1;
	LINE_NUMBER(573);
	sp[0].o = frame[1].o;
	jint temp2 = (frame[3].i) + (jint(1));
	jint temp3 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp2, (temp3 - (jint(1))));
	jfloat temp4 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, sp[0].o);
	frame[6].f = temp4;
	LINE_NUMBER(574);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (frame[4].f), (frame[5].f), (frame[6].f));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	LINE_NUMBER(575);
	INST_ASTORE(4);
label_7:;
	{
	LINE_NUMBER(579);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Malformed Vec3: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_limit_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:limit", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(584);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_limit2_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_limit2_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), ((frame[1].f) * (frame[1].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_limit2_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:limit2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(589);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_len2_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(590);
	if ((floatCompare((frame[2].f), (frame[1].f), -1)) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(591);
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((frame[1].f) / (frame[2].f)))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (jfloat(temp0)));
	}
label_2:;
	{
	LINE_NUMBER(593);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:setLength", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(598);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_setLength2_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_setLength2_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), ((frame[1].f) * (frame[1].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_setLength2_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:setLength2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(603);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_len2_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(604);
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
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (jfloat(temp0)));
	sp += 1;
	}
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_clamp_float_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:clamp", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(609);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_len2_R_float])(ctx, (frame[0].o));
	frame[3].f = temp0;
	LINE_NUMBER(610);
	if ((floatCompare((frame[3].f), (jfloat(0)), -1)) != 0) goto label_2;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(611);
	frame[4].f = ((frame[2].f) * (frame[2].f));
	LINE_NUMBER(612);
	if ((floatCompare((frame[3].f), (frame[4].f), -1)) <= 0) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((frame[4].f) / (frame[3].f)))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (jfloat(temp0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(613);
	frame[5].f = ((frame[1].f) * (frame[1].f));
	LINE_NUMBER(614);
	if ((floatCompare((frame[3].f), (frame[5].f), 1)) >= 0) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((frame[5].f) / (frame[3].f)))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (jfloat(temp0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(615);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jint M_arc_math_geom_Vec3_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:hashCode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(620);
	frame[1].i = (31);
	LINE_NUMBER(621);
	frame[2].i = (jint(1));
	LINE_NUMBER(622);
	jint temp0 = (31) * (frame[2].i);
	jint temp1 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x));
	frame[2].i = (temp0 + temp1);
	LINE_NUMBER(623);
	jint temp2 = (31) * (frame[2].i);
	jint temp3 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y));
	frame[2].i = (temp2 + temp3);
	LINE_NUMBER(624);
	jint temp4 = (31) * (frame[2].i);
	jint temp5 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z));
	frame[2].i = (temp4 + temp5);
	LINE_NUMBER(625);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec3_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(630);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(631);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(632);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(633);
	frame[2].o = (checkCast(ctx, &class_arc_math_geom_Vec3, (frame[1].o)));
	LINE_NUMBER(634);
	jint temp0 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x));
	jint temp1 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_x));
	if (temp0 != temp1) goto label_5;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y));
	jint temp1 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_y));
	if (temp0 != temp1) goto label_5;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z));
	jint temp1 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_z));
	if (temp0 != temp1) goto label_5;
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

jbool M_arc_math_geom_Vec3_epsilonEquals_arc_math_geom_Vec3_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:epsilonEquals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(639);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(640);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x)));
	if ((floatCompare(temp0, (frame[2].f), -1)) <= 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(641);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y)));
	if ((floatCompare(temp0, (frame[2].f), -1)) <= 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(642);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z)));
	if ((floatCompare(temp0, (frame[2].f), -1)) > 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec3_epsilonEquals_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:epsilonEquals", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(650);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[1].f) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x)));
	if ((floatCompare(temp0, (frame[4].f), -1)) <= 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(651);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[2].f) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y)));
	if ((floatCompare(temp0, (frame[4].f), -1)) <= 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(652);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[3].f) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z)));
	if ((floatCompare(temp0, (frame[4].f), -1)) > 0) goto label_3;
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

jbool M_arc_math_geom_Vec3_epsilonEquals_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:epsilonEquals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(661);
	jint temp0 = (jint)((func_arc_math_geom_Vec3_epsilonEquals_arc_math_geom_Vec3_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_epsilonEquals_arc_math_geom_Vec3_float_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jfloat(1,000000e-06f)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec3_epsilonEquals_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:epsilonEquals", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(672);
	jint temp0 = (jint)((func_arc_math_geom_Vec3_epsilonEquals_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_epsilonEquals_float_float_float_float_R_boolean])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (jfloat(1,000000e-06f)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_setZero_R_arc_math_geom_Vec3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:setZero", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(677);
	((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	LINE_NUMBER(678);
	((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(679);
	((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z = (jfloat(0));
	LINE_NUMBER(680);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_setZero_R_arc_math_geom_Vector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:setZero", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_setZero_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_setZero_R_arc_math_geom_Vec3])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:mulAdd", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec3, (frame[1].o))), (checkCast(ctx, &class_arc_math_geom_Vec3, (frame[2].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vector_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:mulAdd", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec3, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec3_epsilonEquals_arc_math_geom_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:epsilonEquals", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(10);
	jint temp0 = (jint)((func_arc_math_geom_Vec3_epsilonEquals_arc_math_geom_Vec3_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_epsilonEquals_arc_math_geom_Vec3_float_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec3, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec3_hasOppositeDirection_arc_math_geom_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:hasOppositeDirection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	jint temp0 = (jint)((func_arc_math_geom_Vec3_hasOppositeDirection_arc_math_geom_Vec3_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_hasOppositeDirection_arc_math_geom_Vec3_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec3, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec3_hasSameDirection_arc_math_geom_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:hasSameDirection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	jint temp0 = (jint)((func_arc_math_geom_Vec3_hasSameDirection_arc_math_geom_Vec3_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_hasSameDirection_arc_math_geom_Vec3_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec3, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:isPerpendicular", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(10);
	jint temp0 = (jint)((func_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vec3_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vec3_float_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec3, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:isPerpendicular", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	jint temp0 = (jint)((func_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vec3_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vec3_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec3, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:isCollinearOpposite", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	jint temp0 = (jint)((func_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vec3_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vec3_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec3, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:isCollinearOpposite", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(10);
	jint temp0 = (jint)((func_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vec3_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vec3_float_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec3, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:isCollinear", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	jint temp0 = (jint)((func_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vec3_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vec3_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec3, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:isCollinear", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(10);
	jint temp0 = (jint)((func_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vec3_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vec3_float_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec3, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:isOnLine", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	jint temp0 = (jint)((func_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vec3_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vec3_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec3, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vector_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:isOnLine", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(10);
	jint temp0 = (jint)((func_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vec3_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vec3_float_R_boolean])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec3, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_setToRandomDirection_R_arc_math_geom_Vector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:setToRandomDirection", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_setToRandomDirection_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_setToRandomDirection_R_arc_math_geom_Vec3])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_interpolate_arc_math_geom_Vector_float_arc_math_Interp_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:interpolate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_interpolate_arc_math_geom_Vec3_float_arc_math_Interp_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_interpolate_arc_math_geom_Vec3_float_arc_math_Interp_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec3, (frame[1].o))), (frame[2].f), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_lerp_arc_math_geom_Vector_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:lerp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_lerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_lerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec3, (frame[1].o))), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec3_dst2_arc_math_geom_Vector_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:dst2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dst2_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_dst2_arc_math_geom_Vec3_R_float])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec3, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec3_dst_arc_math_geom_Vector_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:dst", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec3, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_div_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:div", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_div_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_div_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec3, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_scl_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:scl", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_scl_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec3, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:scl", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Vec3_dot_arc_math_geom_Vector_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:dot", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec3, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_add_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec3, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_nor_R_arc_math_geom_Vector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:nor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_sub_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:sub", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec3, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_set_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_math_geom_Vec3, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_clamp_float_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:clamp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_clamp_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_clamp_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_setLength2_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:setLength2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_setLength2_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_setLength2_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:setLength", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_limit2_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:limit2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_limit2_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_limit2_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_limit_float_R_arc_math_geom_Vector(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:limit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_limit_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_limit_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:cpy", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vec3])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_math_geom_Vec3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vec3:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Vec3(ctx);
	{
	LINE_NUMBER(11);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[0].o, (jfloat(1)), (jfloat(0)), (jfloat(0)));
	clinit_arc_math_geom_Vec3(ctx);
	SF_arc_math_geom_Vec3_X = sp[0].o;
	LINE_NUMBER(12);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(1)), (jfloat(0)));
	clinit_arc_math_geom_Vec3(ctx);
	SF_arc_math_geom_Vec3_Y = sp[0].o;
	LINE_NUMBER(13);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(1)));
	clinit_arc_math_geom_Vec3(ctx);
	SF_arc_math_geom_Vec3_Z = sp[0].o;
	LINE_NUMBER(14);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)));
	clinit_arc_math_geom_Vec3(ctx);
	SF_arc_math_geom_Vec3_Zero = sp[0].o;
	LINE_NUMBER(15);
	clinit_arc_math_Mat(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Mat);
	init_arc_math_Mat(ctx, sp[0].o);
	clinit_arc_math_geom_Vec3(ctx);
	SF_arc_math_geom_Vec3_tmpMat = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_geom_Vec3[] {
	(void *) M_arc_math_geom_Vec3_hashCode_R_int,
	(void *) M_arc_math_geom_Vec3_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_math_geom_Vec3_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec3_len_R_float,
	(void *) M_arc_math_geom_Vec3_len2_R_float,
	(void *) M_arc_math_geom_Vec3_limit_float_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec3_limit2_float_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec3_setLength2_float_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec3_clamp_float_float_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec3_set_arc_math_geom_Vector_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec3_sub_arc_math_geom_Vector_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec3_nor_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec3_add_arc_math_geom_Vector_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec3_dot_arc_math_geom_Vector_R_float,
	(void *) M_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec3_scl_arc_math_geom_Vector_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec3_div_arc_math_geom_Vector_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec3_dst_arc_math_geom_Vector_R_float,
	(void *) M_arc_math_geom_Vec3_dst2_arc_math_geom_Vector_R_float,
	(void *) M_arc_math_geom_Vec3_lerp_arc_math_geom_Vector_float_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec3_interpolate_arc_math_geom_Vector_float_arc_math_Interp_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec3_setToRandomDirection_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec3_isUnit_R_boolean,
	(void *) M_arc_math_geom_Vec3_isUnit_float_R_boolean,
	(void *) M_arc_math_geom_Vec3_isZero_R_boolean,
	(void *) M_arc_math_geom_Vec3_isZero_float_R_boolean,
	(void *) M_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vector_float_R_boolean,
	(void *) M_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vector_R_boolean,
	(void *) M_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vector_float_R_boolean,
	(void *) M_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vector_R_boolean,
	(void *) M_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vector_float_R_boolean,
	(void *) M_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vector_R_boolean,
	(void *) M_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vector_R_boolean,
	(void *) M_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vector_float_R_boolean,
	(void *) M_arc_math_geom_Vec3_hasSameDirection_arc_math_geom_Vector_R_boolean,
	(void *) M_arc_math_geom_Vec3_hasOppositeDirection_arc_math_geom_Vector_R_boolean,
	(void *) M_arc_math_geom_Vec3_epsilonEquals_arc_math_geom_Vector_float_R_boolean,
	(void *) M_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vector_float_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec3_setZero_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vector_plus_arc_math_geom_Vector_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vector_minus_arc_math_geom_Vector_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vector_unaryMinus_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vector_times_arc_math_geom_Vector_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_div_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_set_Array1_float_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_set_Array1_float_int_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_set_arc_math_geom_Vec2_float_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_setFromSpherical_float_float_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_setToRandomDirection_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_setToRandomDirection_arc_math_Rand_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_cpy_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_add_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_add_float_float_float_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_add_float_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_sub_float_float_float_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_sub_float_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_scl_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_scl_float_float_float_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_idt_arc_math_geom_Vec3_R_boolean,
	(void *) M_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float,
	(void *) M_arc_math_geom_Vec3_dst_float_float_float_R_float,
	(void *) M_arc_math_geom_Vec3_dst2_arc_math_geom_Vec3_R_float,
	(void *) M_arc_math_geom_Vec3_dst2_float_float_float_R_float,
	(void *) M_arc_math_geom_Vec3_within_arc_math_geom_Vec3_float_R_boolean,
	(void *) M_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float,
	(void *) M_arc_math_geom_Vec3_angleRad_arc_math_geom_Vec3_R_float,
	(void *) M_arc_math_geom_Vec3_angle_arc_math_geom_Vec3_R_float,
	(void *) M_arc_math_geom_Vec3_dot_float_float_float_R_float,
	(void *) M_arc_math_geom_Vec3_crs_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_crs_float_float_float_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_mul4x3_Array1_float_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_mul_arc_math_Mat_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_traMul_arc_math_Mat_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vec3_float_R_boolean,
	(void *) M_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vec3_R_boolean,
	(void *) M_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vec3_float_R_boolean,
	(void *) M_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vec3_R_boolean,
	(void *) M_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vec3_float_R_boolean,
	(void *) M_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vec3_R_boolean,
	(void *) M_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vec3_R_boolean,
	(void *) M_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vec3_float_R_boolean,
	(void *) M_arc_math_geom_Vec3_hasSameDirection_arc_math_geom_Vec3_R_boolean,
	(void *) M_arc_math_geom_Vec3_hasOppositeDirection_arc_math_geom_Vec3_R_boolean,
	(void *) M_arc_math_geom_Vec3_lerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_interpolate_arc_math_geom_Vec3_float_arc_math_Interp_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_slerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_fromString_java_lang_String_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_limit_float_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_limit2_float_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_setLength2_float_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_clamp_float_float_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Vec3_epsilonEquals_arc_math_geom_Vec3_float_R_boolean,
	(void *) M_arc_math_geom_Vec3_epsilonEquals_float_float_float_float_R_boolean,
	(void *) M_arc_math_geom_Vec3_epsilonEquals_arc_math_geom_Vec3_R_boolean,
	(void *) M_arc_math_geom_Vec3_epsilonEquals_float_float_float_R_boolean,
	(void *) M_arc_math_geom_Vec3_setZero_R_arc_math_geom_Vec3,
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
	{ "set", "(FFF)Larc/math/geom/Vec3;" },
	{ "div", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "set", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "set", "([F)Larc/math/geom/Vec3;" },
	{ "set", "([FI)Larc/math/geom/Vec3;" },
	{ "set", "(Larc/math/geom/Vec2;F)Larc/math/geom/Vec3;" },
	{ "setFromSpherical", "(FF)Larc/math/geom/Vec3;" },
	{ "setToRandomDirection", "()Larc/math/geom/Vec3;" },
	{ "setToRandomDirection", "(Larc/math/Rand;)Larc/math/geom/Vec3;" },
	{ "cpy", "()Larc/math/geom/Vec3;" },
	{ "add", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "cpy", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "add", "(Larc/math/geom/Vec3;F)Larc/math/geom/Vec3;" },
	{ "sub", "(Larc/math/geom/Vec3;F)Larc/math/geom/Vec3;" },
	{ "add", "(FFF)Larc/math/geom/Vec3;" },
	{ "add", "(F)Larc/math/geom/Vec3;" },
	{ "sub", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "sub", "(FFF)Larc/math/geom/Vec3;" },
	{ "sub", "(F)Larc/math/geom/Vec3;" },
	{ "scl", "(F)Larc/math/geom/Vec3;" },
	{ "scl", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "scl", "(FFF)Larc/math/geom/Vec3;" },
	{ "mulAdd", "(Larc/math/geom/Vec3;F)Larc/math/geom/Vec3;" },
	{ "mulAdd", "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "idt", "(Larc/math/geom/Vec3;)Z" },
	{ "dst", "(Larc/math/geom/Vec3;)F" },
	{ "dst", "(FFF)F" },
	{ "dst2", "(Larc/math/geom/Vec3;)F" },
	{ "dst2", "(FFF)F" },
	{ "within", "(Larc/math/geom/Vec3;F)Z" },
	{ "nor", "()Larc/math/geom/Vec3;" },
	{ "dot", "(Larc/math/geom/Vec3;)F" },
	{ "angleRad", "(Larc/math/geom/Vec3;)F" },
	{ "angle", "(Larc/math/geom/Vec3;)F" },
	{ "dot", "(FFF)F" },
	{ "crs", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "crs", "(FFF)Larc/math/geom/Vec3;" },
	{ "mul4x3", "([F)Larc/math/geom/Vec3;" },
	{ "mul", "(Larc/math/Mat;)Larc/math/geom/Vec3;" },
	{ "traMul", "(Larc/math/Mat;)Larc/math/geom/Vec3;" },
	{ "rotate", "(Larc/math/geom/Vec3;F)Larc/math/geom/Vec3;" },
	{ "isOnLine", "(Larc/math/geom/Vec3;F)Z" },
	{ "isOnLine", "(Larc/math/geom/Vec3;)Z" },
	{ "isCollinear", "(Larc/math/geom/Vec3;F)Z" },
	{ "isCollinear", "(Larc/math/geom/Vec3;)Z" },
	{ "isCollinearOpposite", "(Larc/math/geom/Vec3;F)Z" },
	{ "isCollinearOpposite", "(Larc/math/geom/Vec3;)Z" },
	{ "isPerpendicular", "(Larc/math/geom/Vec3;)Z" },
	{ "isPerpendicular", "(Larc/math/geom/Vec3;F)Z" },
	{ "hasSameDirection", "(Larc/math/geom/Vec3;)Z" },
	{ "hasOppositeDirection", "(Larc/math/geom/Vec3;)Z" },
	{ "lerp", "(Larc/math/geom/Vec3;F)Larc/math/geom/Vec3;" },
	{ "interpolate", "(Larc/math/geom/Vec3;FLarc/math/Interp;)Larc/math/geom/Vec3;" },
	{ "slerp", "(Larc/math/geom/Vec3;F)Larc/math/geom/Vec3;" },
	{ "fromString", "(Ljava/lang/String;)Larc/math/geom/Vec3;" },
	{ "limit", "(F)Larc/math/geom/Vec3;" },
	{ "limit2", "(F)Larc/math/geom/Vec3;" },
	{ "setLength", "(F)Larc/math/geom/Vec3;" },
	{ "setLength2", "(F)Larc/math/geom/Vec3;" },
	{ "clamp", "(FF)Larc/math/geom/Vec3;" },
	{ "epsilonEquals", "(Larc/math/geom/Vec3;F)Z" },
	{ "epsilonEquals", "(FFFF)Z" },
	{ "epsilonEquals", "(Larc/math/geom/Vec3;)Z" },
	{ "epsilonEquals", "(FFF)Z" },
	{ "setZero", "()Larc/math/geom/Vec3;" },
};

static jclass interfaces[] { &class_arc_math_geom_Vector, };

static FieldMetadata fields[] {
	{ "X", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_math_geom_Vec3_X, "Larc/math/geom/Vec3;", 25 },
	{ "Y", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_math_geom_Vec3_Y, "Larc/math/geom/Vec3;", 25 },
	{ "Z", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_math_geom_Vec3_Z, "Larc/math/geom/Vec3;", 25 },
	{ "Zero", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_math_geom_Vec3_Zero, "Larc/math/geom/Vec3;", 25 },
	{ "tmpMat", &class_arc_math_Mat, (intptr_t) &SF_arc_math_geom_Vec3_tmpMat, "Larc/math/Mat;", 26 },
	{ "x", &class_float, offsetof(arc_math_geom_Vec3, F_x), "F", 1 },
	{ "y", &class_float, offsetof(arc_math_geom_Vec3, F_y), "F", 1 },
	{ "z", &class_float, offsetof(arc_math_geom_Vec3, F_z), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_geom_Vec3, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_Vec3_float_float_float, 0, "(FFF)V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_Vec3_double_double_double, 0, "(DDD)V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_Vec3_arc_math_geom_Vec3, 0, "(Larc/math/geom/Vec3;)V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_Vec3_Array1_float, 0, "([F)V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_Vec3_arc_math_geom_Vec2_float, 0, "(Larc/math/geom/Vec2;F)V", 1 },
	{ "len", (intptr_t) SM_arc_math_geom_Vec3_len_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "len2", (intptr_t) SM_arc_math_geom_Vec3_len2_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "dst", (intptr_t) SM_arc_math_geom_Vec3_dst_float_float_float_float_float_float_R_float, 0, "(FFFFFF)F", 9 },
	{ "dst2", (intptr_t) SM_arc_math_geom_Vec3_dst2_float_float_float_float_float_float_R_float, 0, "(FFFFFF)F", 9 },
	{ "dot", (intptr_t) SM_arc_math_geom_Vec3_dot_float_float_float_float_float_float_R_float, 0, "(FFFFFF)F", 9 },
	{ "set", (intptr_t) M_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3, "(FFF)Larc/math/geom/Vec3;", 1 },
	{ "div", (intptr_t) M_arc_math_geom_Vec3_div_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_div_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Vec3_set_Array1_float_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_set_Array1_float_R_arc_math_geom_Vec3, "([F)Larc/math/geom/Vec3;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Vec3_set_Array1_float_int_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_set_Array1_float_int_R_arc_math_geom_Vec3, "([FI)Larc/math/geom/Vec3;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Vec3_set_arc_math_geom_Vec2_float_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec2_float_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec2;F)Larc/math/geom/Vec3;", 1 },
	{ "setFromSpherical", (intptr_t) M_arc_math_geom_Vec3_setFromSpherical_float_float_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_setFromSpherical_float_float_R_arc_math_geom_Vec3, "(FF)Larc/math/geom/Vec3;", 1 },
	{ "setToRandomDirection", (intptr_t) M_arc_math_geom_Vec3_setToRandomDirection_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_setToRandomDirection_R_arc_math_geom_Vec3, "()Larc/math/geom/Vec3;", 1 },
	{ "setToRandomDirection", (intptr_t) M_arc_math_geom_Vec3_setToRandomDirection_arc_math_Rand_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_setToRandomDirection_arc_math_Rand_R_arc_math_geom_Vec3, "(Larc/math/Rand;)Larc/math/geom/Vec3;", 1 },
	{ "cpy", (intptr_t) M_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vec3, "()Larc/math/geom/Vec3;", 1 },
	{ "add", (intptr_t) M_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "cpy", (intptr_t) M_arc_math_geom_Vec3_cpy_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_cpy_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "add", (intptr_t) M_arc_math_geom_Vec3_add_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;F)Larc/math/geom/Vec3;", 1 },
	{ "sub", (intptr_t) M_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;F)Larc/math/geom/Vec3;", 1 },
	{ "add", (intptr_t) M_arc_math_geom_Vec3_add_float_float_float_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_add_float_float_float_R_arc_math_geom_Vec3, "(FFF)Larc/math/geom/Vec3;", 1 },
	{ "add", (intptr_t) M_arc_math_geom_Vec3_add_float_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_add_float_R_arc_math_geom_Vec3, "(F)Larc/math/geom/Vec3;", 1 },
	{ "sub", (intptr_t) M_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "sub", (intptr_t) M_arc_math_geom_Vec3_sub_float_float_float_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_sub_float_float_float_R_arc_math_geom_Vec3, "(FFF)Larc/math/geom/Vec3;", 1 },
	{ "sub", (intptr_t) M_arc_math_geom_Vec3_sub_float_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_sub_float_R_arc_math_geom_Vec3, "(F)Larc/math/geom/Vec3;", 1 },
	{ "scl", (intptr_t) M_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3, "(F)Larc/math/geom/Vec3;", 1 },
	{ "scl", (intptr_t) M_arc_math_geom_Vec3_scl_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_scl_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "scl", (intptr_t) M_arc_math_geom_Vec3_scl_float_float_float_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_scl_float_float_float_R_arc_math_geom_Vec3, "(FFF)Larc/math/geom/Vec3;", 1 },
	{ "mulAdd", (intptr_t) M_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;F)Larc/math/geom/Vec3;", 1 },
	{ "mulAdd", (intptr_t) M_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "len", (intptr_t) M_arc_math_geom_Vec3_len_R_float, VTABLE_arc_math_geom_Vec3_len_R_float, "()F", 1 },
	{ "len2", (intptr_t) M_arc_math_geom_Vec3_len2_R_float, VTABLE_arc_math_geom_Vec3_len2_R_float, "()F", 1 },
	{ "idt", (intptr_t) M_arc_math_geom_Vec3_idt_arc_math_geom_Vec3_R_boolean, VTABLE_arc_math_geom_Vec3_idt_arc_math_geom_Vec3_R_boolean, "(Larc/math/geom/Vec3;)Z", 1 },
	{ "dst", (intptr_t) M_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float, VTABLE_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float, "(Larc/math/geom/Vec3;)F", 1 },
	{ "dst", (intptr_t) M_arc_math_geom_Vec3_dst_float_float_float_R_float, VTABLE_arc_math_geom_Vec3_dst_float_float_float_R_float, "(FFF)F", 1 },
	{ "dst2", (intptr_t) M_arc_math_geom_Vec3_dst2_arc_math_geom_Vec3_R_float, VTABLE_arc_math_geom_Vec3_dst2_arc_math_geom_Vec3_R_float, "(Larc/math/geom/Vec3;)F", 1 },
	{ "dst2", (intptr_t) M_arc_math_geom_Vec3_dst2_float_float_float_R_float, VTABLE_arc_math_geom_Vec3_dst2_float_float_float_R_float, "(FFF)F", 1 },
	{ "within", (intptr_t) M_arc_math_geom_Vec3_within_arc_math_geom_Vec3_float_R_boolean, VTABLE_arc_math_geom_Vec3_within_arc_math_geom_Vec3_float_R_boolean, "(Larc/math/geom/Vec3;F)Z", 1 },
	{ "nor", (intptr_t) M_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3, "()Larc/math/geom/Vec3;", 1 },
	{ "dot", (intptr_t) M_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float, VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float, "(Larc/math/geom/Vec3;)F", 1 },
	{ "angleRad", (intptr_t) M_arc_math_geom_Vec3_angleRad_arc_math_geom_Vec3_R_float, VTABLE_arc_math_geom_Vec3_angleRad_arc_math_geom_Vec3_R_float, "(Larc/math/geom/Vec3;)F", 1 },
	{ "angle", (intptr_t) M_arc_math_geom_Vec3_angle_arc_math_geom_Vec3_R_float, VTABLE_arc_math_geom_Vec3_angle_arc_math_geom_Vec3_R_float, "(Larc/math/geom/Vec3;)F", 1 },
	{ "dot", (intptr_t) M_arc_math_geom_Vec3_dot_float_float_float_R_float, VTABLE_arc_math_geom_Vec3_dot_float_float_float_R_float, "(FFF)F", 1 },
	{ "crs", (intptr_t) M_arc_math_geom_Vec3_crs_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_crs_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "crs", (intptr_t) M_arc_math_geom_Vec3_crs_float_float_float_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_crs_float_float_float_R_arc_math_geom_Vec3, "(FFF)Larc/math/geom/Vec3;", 1 },
	{ "mul4x3", (intptr_t) M_arc_math_geom_Vec3_mul4x3_Array1_float_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_mul4x3_Array1_float_R_arc_math_geom_Vec3, "([F)Larc/math/geom/Vec3;", 1 },
	{ "mul", (intptr_t) M_arc_math_geom_Vec3_mul_arc_math_Mat_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_mul_arc_math_Mat_R_arc_math_geom_Vec3, "(Larc/math/Mat;)Larc/math/geom/Vec3;", 1 },
	{ "traMul", (intptr_t) M_arc_math_geom_Vec3_traMul_arc_math_Mat_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_traMul_arc_math_Mat_R_arc_math_geom_Vec3, "(Larc/math/Mat;)Larc/math/geom/Vec3;", 1 },
	{ "rotate", (intptr_t) M_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;F)Larc/math/geom/Vec3;", 1 },
	{ "isUnit", (intptr_t) M_arc_math_geom_Vec3_isUnit_R_boolean, VTABLE_arc_math_geom_Vec3_isUnit_R_boolean, "()Z", 1 },
	{ "isUnit", (intptr_t) M_arc_math_geom_Vec3_isUnit_float_R_boolean, VTABLE_arc_math_geom_Vec3_isUnit_float_R_boolean, "(F)Z", 1 },
	{ "isZero", (intptr_t) M_arc_math_geom_Vec3_isZero_R_boolean, VTABLE_arc_math_geom_Vec3_isZero_R_boolean, "()Z", 1 },
	{ "isZero", (intptr_t) M_arc_math_geom_Vec3_isZero_float_R_boolean, VTABLE_arc_math_geom_Vec3_isZero_float_R_boolean, "(F)Z", 1 },
	{ "isOnLine", (intptr_t) M_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vec3_float_R_boolean, VTABLE_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vec3_float_R_boolean, "(Larc/math/geom/Vec3;F)Z", 1 },
	{ "isOnLine", (intptr_t) M_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vec3_R_boolean, VTABLE_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vec3_R_boolean, "(Larc/math/geom/Vec3;)Z", 1 },
	{ "isCollinear", (intptr_t) M_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vec3_float_R_boolean, VTABLE_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vec3_float_R_boolean, "(Larc/math/geom/Vec3;F)Z", 1 },
	{ "isCollinear", (intptr_t) M_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vec3_R_boolean, VTABLE_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vec3_R_boolean, "(Larc/math/geom/Vec3;)Z", 1 },
	{ "isCollinearOpposite", (intptr_t) M_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vec3_float_R_boolean, VTABLE_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vec3_float_R_boolean, "(Larc/math/geom/Vec3;F)Z", 1 },
	{ "isCollinearOpposite", (intptr_t) M_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vec3_R_boolean, VTABLE_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vec3_R_boolean, "(Larc/math/geom/Vec3;)Z", 1 },
	{ "isPerpendicular", (intptr_t) M_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vec3_R_boolean, VTABLE_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vec3_R_boolean, "(Larc/math/geom/Vec3;)Z", 1 },
	{ "isPerpendicular", (intptr_t) M_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vec3_float_R_boolean, VTABLE_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vec3_float_R_boolean, "(Larc/math/geom/Vec3;F)Z", 1 },
	{ "hasSameDirection", (intptr_t) M_arc_math_geom_Vec3_hasSameDirection_arc_math_geom_Vec3_R_boolean, VTABLE_arc_math_geom_Vec3_hasSameDirection_arc_math_geom_Vec3_R_boolean, "(Larc/math/geom/Vec3;)Z", 1 },
	{ "hasOppositeDirection", (intptr_t) M_arc_math_geom_Vec3_hasOppositeDirection_arc_math_geom_Vec3_R_boolean, VTABLE_arc_math_geom_Vec3_hasOppositeDirection_arc_math_geom_Vec3_R_boolean, "(Larc/math/geom/Vec3;)Z", 1 },
	{ "lerp", (intptr_t) M_arc_math_geom_Vec3_lerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_lerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;F)Larc/math/geom/Vec3;", 1 },
	{ "interpolate", (intptr_t) M_arc_math_geom_Vec3_interpolate_arc_math_geom_Vec3_float_arc_math_Interp_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_interpolate_arc_math_geom_Vec3_float_arc_math_Interp_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;FLarc/math/Interp;)Larc/math/geom/Vec3;", 1 },
	{ "slerp", (intptr_t) M_arc_math_geom_Vec3_slerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_slerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;F)Larc/math/geom/Vec3;", 1 },
	{ "toString", (intptr_t) M_arc_math_geom_Vec3_toString_R_java_lang_String, VTABLE_arc_math_geom_Vec3_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "fromString", (intptr_t) M_arc_math_geom_Vec3_fromString_java_lang_String_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_fromString_java_lang_String_R_arc_math_geom_Vec3, "(Ljava/lang/String;)Larc/math/geom/Vec3;", 1 },
	{ "limit", (intptr_t) M_arc_math_geom_Vec3_limit_float_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_limit_float_R_arc_math_geom_Vec3, "(F)Larc/math/geom/Vec3;", 1 },
	{ "limit2", (intptr_t) M_arc_math_geom_Vec3_limit2_float_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_limit2_float_R_arc_math_geom_Vec3, "(F)Larc/math/geom/Vec3;", 1 },
	{ "setLength", (intptr_t) M_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3, "(F)Larc/math/geom/Vec3;", 1 },
	{ "setLength2", (intptr_t) M_arc_math_geom_Vec3_setLength2_float_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_setLength2_float_R_arc_math_geom_Vec3, "(F)Larc/math/geom/Vec3;", 1 },
	{ "clamp", (intptr_t) M_arc_math_geom_Vec3_clamp_float_float_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_clamp_float_float_R_arc_math_geom_Vec3, "(FF)Larc/math/geom/Vec3;", 1 },
	{ "hashCode", (intptr_t) M_arc_math_geom_Vec3_hashCode_R_int, VTABLE_arc_math_geom_Vec3_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_arc_math_geom_Vec3_equals_java_lang_Object_R_boolean, VTABLE_arc_math_geom_Vec3_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "epsilonEquals", (intptr_t) M_arc_math_geom_Vec3_epsilonEquals_arc_math_geom_Vec3_float_R_boolean, VTABLE_arc_math_geom_Vec3_epsilonEquals_arc_math_geom_Vec3_float_R_boolean, "(Larc/math/geom/Vec3;F)Z", 1 },
	{ "epsilonEquals", (intptr_t) M_arc_math_geom_Vec3_epsilonEquals_float_float_float_float_R_boolean, VTABLE_arc_math_geom_Vec3_epsilonEquals_float_float_float_float_R_boolean, "(FFFF)Z", 1 },
	{ "epsilonEquals", (intptr_t) M_arc_math_geom_Vec3_epsilonEquals_arc_math_geom_Vec3_R_boolean, VTABLE_arc_math_geom_Vec3_epsilonEquals_arc_math_geom_Vec3_R_boolean, "(Larc/math/geom/Vec3;)Z", 1 },
	{ "epsilonEquals", (intptr_t) M_arc_math_geom_Vec3_epsilonEquals_float_float_float_R_boolean, VTABLE_arc_math_geom_Vec3_epsilonEquals_float_float_float_R_boolean, "(FFF)Z", 1 },
	{ "setZero", (intptr_t) M_arc_math_geom_Vec3_setZero_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Vec3_setZero_R_arc_math_geom_Vec3, "()Larc/math/geom/Vec3;", 1 },
	{ "setZero", (intptr_t) M_arc_math_geom_Vec3_setZero_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec3_setZero_R_arc_math_geom_Vector, "()Larc/math/geom/Vector;", 4161 },
	{ "mulAdd", (intptr_t) M_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;Larc/math/geom/Vector;)Larc/math/geom/Vector;", 4161 },
	{ "mulAdd", (intptr_t) M_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vector_float_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec3_mulAdd_arc_math_geom_Vector_float_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;F)Larc/math/geom/Vector;", 4161 },
	{ "epsilonEquals", (intptr_t) M_arc_math_geom_Vec3_epsilonEquals_arc_math_geom_Vector_float_R_boolean, VTABLE_arc_math_geom_Vec3_epsilonEquals_arc_math_geom_Vector_float_R_boolean, "(Larc/math/geom/Vector;F)Z", 4161 },
	{ "hasOppositeDirection", (intptr_t) M_arc_math_geom_Vec3_hasOppositeDirection_arc_math_geom_Vector_R_boolean, VTABLE_arc_math_geom_Vec3_hasOppositeDirection_arc_math_geom_Vector_R_boolean, "(Larc/math/geom/Vector;)Z", 4161 },
	{ "hasSameDirection", (intptr_t) M_arc_math_geom_Vec3_hasSameDirection_arc_math_geom_Vector_R_boolean, VTABLE_arc_math_geom_Vec3_hasSameDirection_arc_math_geom_Vector_R_boolean, "(Larc/math/geom/Vector;)Z", 4161 },
	{ "isPerpendicular", (intptr_t) M_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vector_float_R_boolean, VTABLE_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vector_float_R_boolean, "(Larc/math/geom/Vector;F)Z", 4161 },
	{ "isPerpendicular", (intptr_t) M_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vector_R_boolean, VTABLE_arc_math_geom_Vec3_isPerpendicular_arc_math_geom_Vector_R_boolean, "(Larc/math/geom/Vector;)Z", 4161 },
	{ "isCollinearOpposite", (intptr_t) M_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vector_R_boolean, VTABLE_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vector_R_boolean, "(Larc/math/geom/Vector;)Z", 4161 },
	{ "isCollinearOpposite", (intptr_t) M_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vector_float_R_boolean, VTABLE_arc_math_geom_Vec3_isCollinearOpposite_arc_math_geom_Vector_float_R_boolean, "(Larc/math/geom/Vector;F)Z", 4161 },
	{ "isCollinear", (intptr_t) M_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vector_R_boolean, VTABLE_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vector_R_boolean, "(Larc/math/geom/Vector;)Z", 4161 },
	{ "isCollinear", (intptr_t) M_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vector_float_R_boolean, VTABLE_arc_math_geom_Vec3_isCollinear_arc_math_geom_Vector_float_R_boolean, "(Larc/math/geom/Vector;F)Z", 4161 },
	{ "isOnLine", (intptr_t) M_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vector_R_boolean, VTABLE_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vector_R_boolean, "(Larc/math/geom/Vector;)Z", 4161 },
	{ "isOnLine", (intptr_t) M_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vector_float_R_boolean, VTABLE_arc_math_geom_Vec3_isOnLine_arc_math_geom_Vector_float_R_boolean, "(Larc/math/geom/Vector;F)Z", 4161 },
	{ "setToRandomDirection", (intptr_t) M_arc_math_geom_Vec3_setToRandomDirection_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec3_setToRandomDirection_R_arc_math_geom_Vector, "()Larc/math/geom/Vector;", 4161 },
	{ "interpolate", (intptr_t) M_arc_math_geom_Vec3_interpolate_arc_math_geom_Vector_float_arc_math_Interp_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec3_interpolate_arc_math_geom_Vector_float_arc_math_Interp_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;FLarc/math/Interp;)Larc/math/geom/Vector;", 4161 },
	{ "lerp", (intptr_t) M_arc_math_geom_Vec3_lerp_arc_math_geom_Vector_float_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec3_lerp_arc_math_geom_Vector_float_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;F)Larc/math/geom/Vector;", 4161 },
	{ "dst2", (intptr_t) M_arc_math_geom_Vec3_dst2_arc_math_geom_Vector_R_float, VTABLE_arc_math_geom_Vec3_dst2_arc_math_geom_Vector_R_float, "(Larc/math/geom/Vector;)F", 4161 },
	{ "dst", (intptr_t) M_arc_math_geom_Vec3_dst_arc_math_geom_Vector_R_float, VTABLE_arc_math_geom_Vec3_dst_arc_math_geom_Vector_R_float, "(Larc/math/geom/Vector;)F", 4161 },
	{ "div", (intptr_t) M_arc_math_geom_Vec3_div_arc_math_geom_Vector_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec3_div_arc_math_geom_Vector_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;)Larc/math/geom/Vector;", 4161 },
	{ "scl", (intptr_t) M_arc_math_geom_Vec3_scl_arc_math_geom_Vector_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec3_scl_arc_math_geom_Vector_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;)Larc/math/geom/Vector;", 4161 },
	{ "scl", (intptr_t) M_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vector, "(F)Larc/math/geom/Vector;", 4161 },
	{ "dot", (intptr_t) M_arc_math_geom_Vec3_dot_arc_math_geom_Vector_R_float, VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vector_R_float, "(Larc/math/geom/Vector;)F", 4161 },
	{ "add", (intptr_t) M_arc_math_geom_Vec3_add_arc_math_geom_Vector_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vector_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;)Larc/math/geom/Vector;", 4161 },
	{ "nor", (intptr_t) M_arc_math_geom_Vec3_nor_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vector, "()Larc/math/geom/Vector;", 4161 },
	{ "sub", (intptr_t) M_arc_math_geom_Vec3_sub_arc_math_geom_Vector_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vector_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;)Larc/math/geom/Vector;", 4161 },
	{ "set", (intptr_t) M_arc_math_geom_Vec3_set_arc_math_geom_Vector_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vector_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;)Larc/math/geom/Vector;", 4161 },
	{ "clamp", (intptr_t) M_arc_math_geom_Vec3_clamp_float_float_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec3_clamp_float_float_R_arc_math_geom_Vector, "(FF)Larc/math/geom/Vector;", 4161 },
	{ "setLength2", (intptr_t) M_arc_math_geom_Vec3_setLength2_float_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec3_setLength2_float_R_arc_math_geom_Vector, "(F)Larc/math/geom/Vector;", 4161 },
	{ "setLength", (intptr_t) M_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vector, "(F)Larc/math/geom/Vector;", 4161 },
	{ "limit2", (intptr_t) M_arc_math_geom_Vec3_limit2_float_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec3_limit2_float_R_arc_math_geom_Vector, "(F)Larc/math/geom/Vector;", 4161 },
	{ "limit", (intptr_t) M_arc_math_geom_Vec3_limit_float_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec3_limit_float_R_arc_math_geom_Vector, "(F)Larc/math/geom/Vector;", 4161 },
	{ "cpy", (intptr_t) M_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vector, VTABLE_arc_math_geom_Vec3_cpy_R_arc_math_geom_Vector, "()Larc/math/geom/Vector;", 4161 },
	{ "<clinit>", (intptr_t) clinit_arc_math_geom_Vec3, 0, "()V", 8 },
};

Class class_arc_math_geom_Vec3{
		.nativeName = (intptr_t) "arc/math/geom/Vec3",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_geom_Vec3),
		.classVtable = (intptr_t) vtable_arc_math_geom_Vec3,
		.staticInitializer = (intptr_t) clinit_arc_math_geom_Vec3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_geom_Vec3,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 119,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 119,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_geom_Vec3 = registerClass(&class_arc_math_geom_Vec3);

}
