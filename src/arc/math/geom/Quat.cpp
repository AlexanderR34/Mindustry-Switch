#include "arc/math/geom/Quat.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "arc/math/geom/Quat.h"
#include "arc/math/geom/Mat3D.h"
#include "java/lang/Float.h"
#include "arc/math/Mat.h"
#include "arc/math/geom/Vec3.h"

extern "C" {

jobject SF_arc_math_geom_Quat_tmp1;
jobject SF_arc_math_geom_Quat_tmp2;

void mark_arc_math_geom_Quat(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_math_geom_Quat_tmp1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Quat_tmp1)->clazz)->markFunction)((jobject) SF_arc_math_geom_Quat_tmp1, mark, depth + 1);
		if (SF_arc_math_geom_Quat_tmp2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Quat_tmp2)->clazz)->markFunction)((jobject) SF_arc_math_geom_Quat_tmp2, mark, depth + 1);
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
	auto self = (arc_math_geom_Quat *) object;
}

void init_arc_math_geom_Quat_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Quat(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(28);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(29);
	sp[0].o = (jobject)((func_arc_math_geom_Quat_set_float_float_float_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_set_float_float_float_float_R_arc_math_geom_Quat])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_Quat(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Quat(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(32);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(33);
	sp[0].o = (jobject)((func_arc_math_geom_Quat_idt_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_idt_R_arc_math_geom_Quat])(ctx, (frame[0].o));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_Quat_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Quat(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(40);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(41);
	sp[0].o = (jobject)((func_arc_math_geom_Quat_set_arc_math_geom_Quat_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_set_arc_math_geom_Quat_R_arc_math_geom_Quat])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_Quat_arc_math_geom_Vec3_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Quat(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(49);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(50);
	sp[0].o = (jobject)((func_arc_math_geom_Quat_set_arc_math_geom_Vec3_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_set_arc_math_geom_Vec3_float_R_arc_math_geom_Quat])(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_geom_Quat_len_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:len", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Quat(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(55);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((((frame[0].f) * (frame[0].f)) + ((frame[1].f) * (frame[1].f))) + ((frame[2].f) * (frame[2].f))) + ((frame[3].f) * (frame[3].f))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_geom_Quat_len2_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:len2", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Quat(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return (((((frame[0].f) * (frame[0].f)) + ((frame[1].f) * (frame[1].f))) + ((frame[2].f) * (frame[2].f))) + ((frame[3].f) * (frame[3].f)));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_geom_Quat_dot_float_float_float_float_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:dot", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Quat(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	{
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return (((((frame[0].f) * (frame[4].f)) + ((frame[1].f) * (frame[5].f))) + ((frame[2].f) * (frame[6].f))) + ((frame[3].f) * (frame[7].f)));
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_set_float_float_float_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(88);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(89);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(90);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z = (frame[3].f);
	LINE_NUMBER(91);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w = (frame[4].f);
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_set_arc_math_geom_Quat_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((func_arc_math_geom_Quat_set_float_float_float_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_set_float_float_float_float_R_arc_math_geom_Quat])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_z), ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_w));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_set_arc_math_geom_Vec3_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((func_arc_math_geom_Quat_setFromAxis_float_float_float_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_setFromAxis_float_float_float_float_R_arc_math_geom_Quat])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_cpy_R_arc_math_geom_Quat(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:cpy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(116);
	clinit_arc_math_geom_Quat(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Quat);
	init_arc_math_geom_Quat_arc_math_geom_Quat(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Quat_len_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:len", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(121);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((((((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x)) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y))) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z))) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(126);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"["_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_setEulerAngles_float_float_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:setEulerAngles", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((func_arc_math_geom_Quat_setEulerAnglesRad_float_float_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_setEulerAnglesRad_float_float_float_R_arc_math_geom_Quat])(ctx, (frame[0].o), ((frame[1].f) * (jfloat(0.017453292f))), ((frame[2].f) * (jfloat(0.017453292f))), ((frame[3].f) * (jfloat(0.017453292f))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_setEulerAnglesRad_float_float_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:setEulerAnglesRad", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(149);
	frame[4].f = ((frame[3].f) * (jfloat(0.5f)));
	LINE_NUMBER(150);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble((frame[4].f))));
	frame[5].f = (jfloat(temp0));
	LINE_NUMBER(151);
	jdouble temp1 = (jdouble)SM_java_lang_Math_cos_double_R_double(ctx, (jdouble((frame[4].f))));
	frame[6].f = (jfloat(temp1));
	LINE_NUMBER(152);
	frame[7].f = ((frame[2].f) * (jfloat(0.5f)));
	LINE_NUMBER(153);
	jdouble temp2 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble((frame[7].f))));
	frame[8].f = (jfloat(temp2));
	LINE_NUMBER(154);
	jdouble temp3 = (jdouble)SM_java_lang_Math_cos_double_R_double(ctx, (jdouble((frame[7].f))));
	frame[9].f = (jfloat(temp3));
	LINE_NUMBER(155);
	frame[10].f = ((frame[1].f) * (jfloat(0.5f)));
	LINE_NUMBER(156);
	jdouble temp4 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble((frame[10].f))));
	frame[11].f = (jfloat(temp4));
	LINE_NUMBER(157);
	jdouble temp5 = (jdouble)SM_java_lang_Math_cos_double_R_double(ctx, (jdouble((frame[10].f))));
	frame[12].f = (jfloat(temp5));
	LINE_NUMBER(158);
	frame[13].f = ((frame[12].f) * (frame[8].f));
	LINE_NUMBER(159);
	frame[14].f = ((frame[11].f) * (frame[9].f));
	LINE_NUMBER(160);
	frame[15].f = ((frame[12].f) * (frame[9].f));
	LINE_NUMBER(161);
	frame[16].f = ((frame[11].f) * (frame[8].f));
	LINE_NUMBER(163);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x = (((frame[13].f) * (frame[6].f)) + ((frame[14].f) * (frame[5].f)));
	LINE_NUMBER(164);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y = (((frame[14].f) * (frame[6].f)) - ((frame[13].f) * (frame[5].f)));
	LINE_NUMBER(165);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z = (((frame[15].f) * (frame[5].f)) - ((frame[16].f) * (frame[6].f)));
	LINE_NUMBER(166);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w = (((frame[15].f) * (frame[6].f)) + ((frame[16].f) * (frame[5].f)));
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jint M_arc_math_geom_Quat_getGimbalPole_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:getGimbalPole", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(175);
	frame[1].f = ((((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x)) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w)));
	LINE_NUMBER(176);
	if ((floatCompare((frame[1].f), (jfloat(0.499f)), -1)) <= 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	{
	if ((floatCompare((frame[1].f), (jfloat(-0.499f)), 1)) >= 0) goto label_4;
	}
	INST_ICONST(-1);
	goto label_3;
label_4:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Quat_getRollRad_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:getRollRad", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(184);
	jint temp0 = (jint)((func_arc_math_geom_Quat_getGimbalPole_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_getGimbalPole_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(185);
	if ((frame[1].i) != 0) goto label_2;
	}
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_atan2_float_float_R_float(ctx, ((jfloat(1)) - ((jfloat(2)) * ((((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x)) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z))))), ((jfloat(2)) * ((((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z)) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x)))));
	sp[0].f = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(186);
	jfloat temp0 = (jfloat((frame[1].i))) * (jfloat(2));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_atan2_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w), ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y));
	jfloat temp2 = temp0 * temp1;
	sp[0].f = temp2;
	sp += 1;
	}
label_3:;
	LINE_NUMBER(185);
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Quat_getRoll_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:getRoll", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(194);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Quat_getRollRad_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_getRollRad_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 * (jfloat(57.295776f)));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Quat_getPitchRad_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:getPitchRad", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(202);
	jint temp0 = (jint)((func_arc_math_geom_Quat_getGimbalPole_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_getGimbalPole_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(203);
	if ((frame[1].i) != 0) goto label_2;
	}
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat(2)) * ((((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x)) - (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y)))), (jfloat(-1.0f)), (jfloat(1)));
	jdouble temp1 = (jdouble)SM_java_lang_Math_asin_double_R_double(ctx, (jdouble(temp0)));
	jfloat temp2 = jfloat(temp1);
	sp[0].f = temp2;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	jfloat temp0 = ((jfloat((frame[1].i))) * (jfloat(3.1415927f))) * (jfloat(0.5f));
	sp[0].f = temp0;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Quat_getPitch_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:getPitch", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(211);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Quat_getPitchRad_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_getPitchRad_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 * (jfloat(57.295776f)));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Quat_getYawRad_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:getYawRad", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(219);
	jint temp0 = (jint)((func_arc_math_geom_Quat_getGimbalPole_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_getGimbalPole_R_int])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_atan2_float_float_R_float(ctx, ((jfloat(1)) - ((jfloat(2)) * ((((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y)) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x))))), ((jfloat(2)) * ((((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w)) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z)))));
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_FCONST(0);
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Quat_getYaw_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:getYaw", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(227);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Quat_getYawRad_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_getYawRad_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 * (jfloat(57.295776f)));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Quat_len2_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:len2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(232);
	popStackFrame(ctx);
	return ((((((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x)) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y))) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z))) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w)));
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_nor_R_arc_math_geom_Quat(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:nor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(240);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Quat_len2_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_len2_R_float])(ctx, (frame[0].o));
	frame[1].f = temp0;
	LINE_NUMBER(241);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) == 0) goto label_2;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (frame[1].f), (jfloat(1)));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(242);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((frame[1].f))));
	frame[1].f = (jfloat(temp0));
	LINE_NUMBER(243);
	sp[0].o = frame[0].o;
	((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_w = (((jfloat)((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_w) / (frame[1].f));
	LINE_NUMBER(244);
	sp[0].o = frame[0].o;
	((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_x) / (frame[1].f));
	LINE_NUMBER(245);
	sp[0].o = frame[0].o;
	((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_y) / (frame[1].f));
	LINE_NUMBER(246);
	sp[0].o = frame[0].o;
	((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_z = (((jfloat)((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_z) / (frame[1].f));
	}
label_2:;
	{
	LINE_NUMBER(248);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_conjugate_R_arc_math_geom_Quat(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:conjugate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(258);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x = (-((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(259);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y = (-((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(260);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z = (-((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z));
	LINE_NUMBER(261);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_transform_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:transform", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(269);
	clinit_arc_math_geom_Quat(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Quat_tmp2;
	sp[0].o = (jobject)((func_arc_math_geom_Quat_set_arc_math_geom_Quat_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Quat_set_arc_math_geom_Quat_R_arc_math_geom_Quat])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(270);
	clinit_arc_math_geom_Quat(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Quat_tmp2;
	sp[0].o = (jobject)((func_arc_math_geom_Quat_conjugate_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Quat_conjugate_R_arc_math_geom_Quat])(ctx, sp[0].o);
	LINE_NUMBER(271);
	clinit_arc_math_geom_Quat(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Quat_tmp2;
	clinit_arc_math_geom_Quat(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Quat_tmp1;
	sp[1].o = (jobject)((func_arc_math_geom_Quat_set_float_float_float_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Quat_set_float_float_float_float_R_arc_math_geom_Quat])(ctx, sp[1].o, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z), (jfloat(0)));
	sp[0].o = (jobject)((func_arc_math_geom_Quat_mulLeft_arc_math_geom_Quat_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Quat_mulLeft_arc_math_geom_Quat_R_arc_math_geom_Quat])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Quat_mulLeft_arc_math_geom_Quat_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Quat_mulLeft_arc_math_geom_Quat_R_arc_math_geom_Quat])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(273);
	sp[0].o = frame[1].o;
	clinit_arc_math_geom_Quat(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Quat_tmp2;
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x = ((jfloat)((arc_math_geom_Quat *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(274);
	sp[0].o = frame[1].o;
	clinit_arc_math_geom_Quat(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Quat_tmp2;
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y = ((jfloat)((arc_math_geom_Quat *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(275);
	sp[0].o = frame[1].o;
	clinit_arc_math_geom_Quat(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Quat_tmp2;
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z = ((jfloat)((arc_math_geom_Quat *) NULL_CHECK(sp[1].o))->F_z);
	LINE_NUMBER(276);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_mul_arc_math_geom_Quat_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:mul", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(285);
	frame[2].f = ((((((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_x)) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_w))) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_z))) - (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_y)));
	LINE_NUMBER(286);
	frame[3].f = ((((((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_y)) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_w))) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_x))) - (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_z)));
	LINE_NUMBER(287);
	frame[4].f = ((((((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_z)) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_w))) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_y))) - (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_x)));
	LINE_NUMBER(288);
	frame[5].f = ((((((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_w)) - (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_x))) - (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_y))) - (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_z)));
	LINE_NUMBER(289);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x = (frame[2].f);
	LINE_NUMBER(290);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y = (frame[3].f);
	LINE_NUMBER(291);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z = (frame[4].f);
	LINE_NUMBER(292);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w = (frame[5].f);
	LINE_NUMBER(293);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_mul_float_float_float_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:mul", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(305);
	frame[5].f = ((((((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w) * (frame[1].f)) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x) * (frame[4].f))) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y) * (frame[3].f))) - (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z) * (frame[2].f)));
	LINE_NUMBER(306);
	frame[6].f = ((((((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w) * (frame[2].f)) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y) * (frame[4].f))) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z) * (frame[1].f))) - (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x) * (frame[3].f)));
	LINE_NUMBER(307);
	frame[7].f = ((((((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w) * (frame[3].f)) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z) * (frame[4].f))) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x) * (frame[2].f))) - (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y) * (frame[1].f)));
	LINE_NUMBER(308);
	frame[8].f = ((((((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w) * (frame[4].f)) - (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x) * (frame[1].f))) - (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y) * (frame[2].f))) - (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z) * (frame[3].f)));
	LINE_NUMBER(309);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x = (frame[5].f);
	LINE_NUMBER(310);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y = (frame[6].f);
	LINE_NUMBER(311);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z = (frame[7].f);
	LINE_NUMBER(312);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w = (frame[8].f);
	LINE_NUMBER(313);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_mulLeft_arc_math_geom_Quat_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:mulLeft", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(322);
	frame[2].f = ((((((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_w) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x)) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_x) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w))) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_y) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z))) - (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_z) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y)));
	LINE_NUMBER(323);
	frame[3].f = ((((((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_w) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y)) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_y) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w))) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_z) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x))) - (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_x) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z)));
	LINE_NUMBER(324);
	frame[4].f = ((((((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_w) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z)) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_z) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w))) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_x) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y))) - (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_y) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x)));
	LINE_NUMBER(325);
	frame[5].f = ((((((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_w) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w)) - (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_x) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x))) - (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_y) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y))) - (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_z) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z)));
	LINE_NUMBER(326);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x = (frame[2].f);
	LINE_NUMBER(327);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y = (frame[3].f);
	LINE_NUMBER(328);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z = (frame[4].f);
	LINE_NUMBER(329);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w = (frame[5].f);
	LINE_NUMBER(330);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_mulLeft_float_float_float_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:mulLeft", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(342);
	frame[5].f = (((((frame[4].f) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x)) + ((frame[1].f) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w))) + ((frame[2].f) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z))) - ((frame[3].f) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y)));
	LINE_NUMBER(343);
	frame[6].f = (((((frame[4].f) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y)) + ((frame[2].f) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w))) + ((frame[3].f) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x))) - ((frame[1].f) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z)));
	LINE_NUMBER(344);
	frame[7].f = (((((frame[4].f) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z)) + ((frame[3].f) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w))) + ((frame[1].f) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y))) - ((frame[2].f) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x)));
	LINE_NUMBER(345);
	frame[8].f = (((((frame[4].f) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w)) - ((frame[1].f) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x))) - ((frame[2].f) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y))) - ((frame[3].f) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z)));
	LINE_NUMBER(346);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x = (frame[5].f);
	LINE_NUMBER(347);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y = (frame[6].f);
	LINE_NUMBER(348);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z = (frame[7].f);
	LINE_NUMBER(349);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w = (frame[8].f);
	LINE_NUMBER(350);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_add_arc_math_geom_Quat_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(355);
	sp[0].o = frame[0].o;
	((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_x) + ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(356);
	sp[0].o = frame[0].o;
	((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_y) + ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(357);
	sp[0].o = frame[0].o;
	((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_z = (((jfloat)((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_z) + ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_z));
	LINE_NUMBER(358);
	sp[0].o = frame[0].o;
	((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_w = (((jfloat)((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_w) + ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_w));
	LINE_NUMBER(359);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_add_float_float_float_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:add", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(364);
	sp[0].o = frame[0].o;
	((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_x) + (frame[1].f));
	LINE_NUMBER(365);
	sp[0].o = frame[0].o;
	((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_y) + (frame[2].f));
	LINE_NUMBER(366);
	sp[0].o = frame[0].o;
	((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_z = (((jfloat)((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_z) + (frame[3].f));
	LINE_NUMBER(367);
	sp[0].o = frame[0].o;
	((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_w = (((jfloat)((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_w) + (frame[4].f));
	LINE_NUMBER(368);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_Quat_toMatrix_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:toMatrix", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(372);
	frame[2].f = (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(373);
	frame[3].f = (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(374);
	frame[4].f = (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z));
	LINE_NUMBER(375);
	frame[5].f = (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w));
	LINE_NUMBER(376);
	frame[6].f = (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(377);
	frame[7].f = (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z));
	LINE_NUMBER(378);
	frame[8].f = (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w));
	LINE_NUMBER(379);
	frame[9].f = (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z));
	LINE_NUMBER(380);
	frame[10].f = (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w));
	LINE_NUMBER(382);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))) = ((jfloat(1)) - ((jfloat(2)) * ((frame[6].f) + (frame[9].f))));
	LINE_NUMBER(383);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(4))) = ((jfloat(2)) * ((frame[3].f) - (frame[10].f)));
	LINE_NUMBER(384);
	ARRAY_ACCESS(jfloat, (frame[1].o), (8)) = ((jfloat(2)) * ((frame[4].f) + (frame[8].f)));
	LINE_NUMBER(385);
	ARRAY_ACCESS(jfloat, (frame[1].o), (12)) = (jfloat(0));
	LINE_NUMBER(386);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))) = ((jfloat(2)) * ((frame[3].f) + (frame[10].f)));
	LINE_NUMBER(387);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5))) = ((jfloat(1)) - ((jfloat(2)) * ((frame[2].f) + (frame[9].f))));
	LINE_NUMBER(388);
	ARRAY_ACCESS(jfloat, (frame[1].o), (9)) = ((jfloat(2)) * ((frame[7].f) - (frame[5].f)));
	LINE_NUMBER(389);
	ARRAY_ACCESS(jfloat, (frame[1].o), (13)) = (jfloat(0));
	LINE_NUMBER(390);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2))) = ((jfloat(2)) * ((frame[4].f) - (frame[8].f)));
	LINE_NUMBER(391);
	ARRAY_ACCESS(jfloat, (frame[1].o), (6)) = ((jfloat(2)) * ((frame[7].f) + (frame[5].f)));
	LINE_NUMBER(392);
	ARRAY_ACCESS(jfloat, (frame[1].o), (10)) = ((jfloat(1)) - ((jfloat(2)) * ((frame[2].f) + (frame[6].f))));
	LINE_NUMBER(393);
	ARRAY_ACCESS(jfloat, (frame[1].o), (14)) = (jfloat(0));
	LINE_NUMBER(394);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3))) = (jfloat(0));
	LINE_NUMBER(395);
	ARRAY_ACCESS(jfloat, (frame[1].o), (7)) = (jfloat(0));
	LINE_NUMBER(396);
	ARRAY_ACCESS(jfloat, (frame[1].o), (11)) = (jfloat(0));
	LINE_NUMBER(397);
	ARRAY_ACCESS(jfloat, (frame[1].o), (15)) = (jfloat(1));
	LINE_NUMBER(398);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_idt_R_arc_math_geom_Quat(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:idt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(405);
	sp[0].o = (jobject)((func_arc_math_geom_Quat_set_float_float_float_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_set_float_float_float_float_R_arc_math_geom_Quat])(ctx, (frame[0].o), (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Quat_isIdentity_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:isIdentity", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(410);
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w), (jfloat(1)));
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

jbool M_arc_math_geom_Quat_isIdentity_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:isIdentity", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(417);
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_float_R_boolean(ctx, ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x), (frame[1].f));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_float_R_boolean(ctx, ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y), (frame[1].f));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_float_R_boolean(ctx, ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z), (frame[1].f));
	if (temp0 == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w;
	jfloat temp1 = jfloat(1);
	jfloat temp2 = frame[1].f;
	LINE_NUMBER(418);
	jint temp3 = (jint)SM_arc_math_Mathf_equal_float_float_float_R_boolean(ctx, temp0, temp1, temp2);
	if (temp3 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	LINE_NUMBER(417);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_setFromAxis_arc_math_geom_Vec3_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:setFromAxis", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(428);
	sp[0].o = (jobject)((func_arc_math_geom_Quat_setFromAxis_float_float_float_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_setFromAxis_float_float_float_float_R_arc_math_geom_Quat])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_setFromAxisRad_arc_math_geom_Vec3_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:setFromAxisRad", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(438);
	sp[0].o = (jobject)((func_arc_math_geom_Quat_setFromAxisRad_float_float_float_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_setFromAxisRad_float_float_float_float_R_arc_math_geom_Quat])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_setFromAxis_float_float_float_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:setFromAxis", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(450);
	sp[0].o = (jobject)((func_arc_math_geom_Quat_setFromAxisRad_float_float_float_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_setFromAxisRad_float_float_float_float_R_arc_math_geom_Quat])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), ((frame[4].f) * (jfloat(0.017453292f))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_setFromAxisRad_float_float_float_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:setFromAxisRad", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(462);
	jfloat temp0 = (jfloat)SM_arc_math_geom_Vec3_len_float_float_float_R_float(ctx, (frame[1].f), (frame[2].f), (frame[3].f));
	frame[5].f = temp0;
	LINE_NUMBER(463);
	if ((floatCompare((frame[5].f), (jfloat(0)), -1)) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_arc_math_geom_Quat_idt_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_idt_R_arc_math_geom_Quat])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(464);
	frame[5].f = ((jfloat(1)) / (frame[5].f));
	LINE_NUMBER(465);
	if ((floatCompare((frame[4].f), (jfloat(0)), 1)) >= 0) goto label_4;
	}
	{
	jfloat temp0 = (jfloat(6.2831855f)) - (fmodf((-(frame[4].f)), (jfloat(6.2831855f))));
	sp[0].f = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	jfloat temp0 = fmodf((frame[4].f), (jfloat(6.2831855f)));
	sp[0].f = temp0;
	sp += 1;
	}
label_5:;
	{
	sp -= 1;
	frame[6].f = sp[0].f;
	LINE_NUMBER(466);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble(((frame[6].f) / (jfloat(2))))));
	frame[7].f = (jfloat(temp0));
	LINE_NUMBER(467);
	jdouble temp1 = (jdouble)SM_java_lang_Math_cos_double_R_double(ctx, (jdouble(((frame[6].f) / (jfloat(2))))));
	frame[8].f = (jfloat(temp1));
	LINE_NUMBER(468);
	sp[0].o = (jobject)((func_arc_math_geom_Quat_set_float_float_float_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_set_float_float_float_float_R_arc_math_geom_Quat])(ctx, (frame[0].o), (((frame[5].f) * (frame[1].f)) * (frame[7].f)), (((frame[5].f) * (frame[2].f)) * (frame[7].f)), (((frame[5].f) * (frame[3].f)) * (frame[7].f)), (frame[8].f));
	sp[0].o = (jobject)((func_arc_math_geom_Quat_nor_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Quat_nor_R_arc_math_geom_Quat])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_setFromMatrix_boolean_arc_math_geom_Mat3D_R_arc_math_geom_Quat(jcontext ctx, jobject self, jbool param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:setFromMatrix", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(473);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp2 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp3 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp4 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp5 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp6 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp7 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp8 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[2].o)))->F_val;
	sp[0].o = (jobject)((func_arc_math_geom_Quat_setFromAxes_boolean_float_float_float_float_float_float_float_float_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Quat_setFromAxes_boolean_float_float_float_float_float_float_float_float_float_R_arc_math_geom_Quat])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_setFromMatrix_arc_math_geom_Mat3D_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:setFromMatrix", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(480);
	sp[0].o = (jobject)((func_arc_math_geom_Quat_setFromMatrix_boolean_arc_math_geom_Mat3D_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_setFromMatrix_boolean_arc_math_geom_Mat3D_R_arc_math_geom_Quat])(ctx, (frame[0].o), (jint(0)), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_setFromMatrix_boolean_arc_math_Mat_R_arc_math_geom_Quat(jcontext ctx, jobject self, jbool param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:setFromMatrix", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(485);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)));
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp2 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3)));
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp3 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6));
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp4 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1)));
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp5 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4)));
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp6 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7));
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp7 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2)));
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[2].o)))->F_val;
	jfloat temp8 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5)));
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[2].o)))->F_val;
	sp[0].o = (jobject)((func_arc_math_geom_Quat_setFromAxes_boolean_float_float_float_float_float_float_float_float_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Quat_setFromAxes_boolean_float_float_float_float_float_float_float_float_float_R_arc_math_geom_Quat])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_setFromMatrix_arc_math_Mat_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:setFromMatrix", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(492);
	sp[0].o = (jobject)((func_arc_math_geom_Quat_setFromMatrix_boolean_arc_math_Mat_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_setFromMatrix_boolean_arc_math_Mat_R_arc_math_geom_Quat])(ctx, (frame[0].o), (jint(0)), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_setFromAxes_float_float_float_float_float_float_float_float_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:setFromAxes", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	{
	LINE_NUMBER(515);
	sp[0].o = (jobject)((func_arc_math_geom_Quat_setFromAxes_boolean_float_float_float_float_float_float_float_float_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_setFromAxes_boolean_float_float_float_float_float_float_float_float_float_R_arc_math_geom_Quat])(ctx, (frame[0].o), (jint(0)), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].f), (frame[8].f), (frame[9].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_setFromAxes_boolean_float_float_float_float_float_float_float_float_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jbool param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:setFromAxes", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	frame[10].f = param9;
	{
	LINE_NUMBER(540);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(541);
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)SM_arc_math_geom_Vec3_len_float_float_float_R_float(ctx, (frame[2].f), (frame[3].f), (frame[4].f));
	frame[11].f = (temp0 / temp1);
	LINE_NUMBER(542);
	jfloat temp2 = jfloat(1);
	jfloat temp3 = (jfloat)SM_arc_math_geom_Vec3_len_float_float_float_R_float(ctx, (frame[5].f), (frame[6].f), (frame[7].f));
	frame[12].f = (temp2 / temp3);
	LINE_NUMBER(543);
	jfloat temp4 = jfloat(1);
	jfloat temp5 = (jfloat)SM_arc_math_geom_Vec3_len_float_float_float_R_float(ctx, (frame[8].f), (frame[9].f), (frame[10].f));
	frame[13].f = (temp4 / temp5);
	LINE_NUMBER(544);
	frame[2].f = ((frame[2].f) * (frame[11].f));
	LINE_NUMBER(545);
	frame[3].f = ((frame[3].f) * (frame[11].f));
	LINE_NUMBER(546);
	frame[4].f = ((frame[4].f) * (frame[11].f));
	LINE_NUMBER(547);
	frame[5].f = ((frame[5].f) * (frame[12].f));
	LINE_NUMBER(548);
	frame[6].f = ((frame[6].f) * (frame[12].f));
	LINE_NUMBER(549);
	frame[7].f = ((frame[7].f) * (frame[12].f));
	LINE_NUMBER(550);
	frame[8].f = ((frame[8].f) * (frame[13].f));
	LINE_NUMBER(551);
	frame[9].f = ((frame[9].f) * (frame[13].f));
	LINE_NUMBER(552);
	frame[10].f = ((frame[10].f) * (frame[13].f));
	}
label_1:;
	{
	LINE_NUMBER(556);
	frame[11].f = (((frame[2].f) + (frame[6].f)) + (frame[10].f));
	LINE_NUMBER(559);
	if ((floatCompare((frame[11].f), (jfloat(0)), -1)) < 0) goto label_15;
	}
	{
	LINE_NUMBER(560);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((frame[11].f) + (jfloat(1))))));
	frame[12].f = (jfloat(temp0));
	LINE_NUMBER(561);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w = ((jfloat(0.5f)) * (frame[12].f));
	LINE_NUMBER(562);
	frame[12].f = ((jfloat(0.5f)) / (frame[12].f));
	LINE_NUMBER(563);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x = (((frame[9].f) - (frame[7].f)) * (frame[12].f));
	LINE_NUMBER(564);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y = (((frame[4].f) - (frame[8].f)) * (frame[12].f));
	LINE_NUMBER(565);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z = (((frame[5].f) - (frame[3].f)) * (frame[12].f));
	LINE_NUMBER(566);
	goto label_23;
	}
label_15:;
	{
	if ((floatCompare((frame[2].f), (frame[6].f), -1)) <= 0) goto label_24;
	}
	{
	if ((floatCompare((frame[2].f), (frame[10].f), -1)) <= 0) goto label_24;
	}
	{
	LINE_NUMBER(567);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, ((((jdouble(1)) + (jdouble((frame[2].f)))) - (jdouble((frame[6].f)))) - (jdouble((frame[10].f)))));
	frame[12].f = (jfloat(temp0));
	LINE_NUMBER(568);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x = ((frame[12].f) * (jfloat(0.5f)));
	LINE_NUMBER(569);
	frame[12].f = ((jfloat(0.5f)) / (frame[12].f));
	LINE_NUMBER(570);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y = (((frame[5].f) + (frame[3].f)) * (frame[12].f));
	LINE_NUMBER(571);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z = (((frame[4].f) + (frame[8].f)) * (frame[12].f));
	LINE_NUMBER(572);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w = (((frame[9].f) - (frame[7].f)) * (frame[12].f));
	LINE_NUMBER(573);
	goto label_23;
	}
label_24:;
	{
	if ((floatCompare((frame[6].f), (frame[10].f), -1)) <= 0) goto label_32;
	}
	{
	LINE_NUMBER(574);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, ((((jdouble(1)) + (jdouble((frame[6].f)))) - (jdouble((frame[2].f)))) - (jdouble((frame[10].f)))));
	frame[12].f = (jfloat(temp0));
	LINE_NUMBER(575);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y = ((frame[12].f) * (jfloat(0.5f)));
	LINE_NUMBER(576);
	frame[12].f = ((jfloat(0.5f)) / (frame[12].f));
	LINE_NUMBER(577);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x = (((frame[5].f) + (frame[3].f)) * (frame[12].f));
	LINE_NUMBER(578);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z = (((frame[9].f) + (frame[7].f)) * (frame[12].f));
	LINE_NUMBER(579);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w = (((frame[4].f) - (frame[8].f)) * (frame[12].f));
	LINE_NUMBER(580);
	goto label_23;
	}
label_32:;
	{
	LINE_NUMBER(581);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, ((((jdouble(1)) + (jdouble((frame[10].f)))) - (jdouble((frame[2].f)))) - (jdouble((frame[6].f)))));
	frame[12].f = (jfloat(temp0));
	LINE_NUMBER(582);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z = ((frame[12].f) * (jfloat(0.5f)));
	LINE_NUMBER(583);
	frame[12].f = ((jfloat(0.5f)) / (frame[12].f));
	LINE_NUMBER(584);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x = (((frame[4].f) + (frame[8].f)) * (frame[12].f));
	LINE_NUMBER(585);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y = (((frame[9].f) + (frame[7].f)) * (frame[12].f));
	LINE_NUMBER(586);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w = (((frame[5].f) - (frame[3].f)) * (frame[12].f));
	}
label_23:;
	{
	LINE_NUMBER(589);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_setFromCross_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:setFromCross", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(599);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, (frame[1].o), (frame[2].o));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, temp0, (jfloat(-1.0f)), (jfloat(1)));
	frame[3].f = temp1;
	LINE_NUMBER(600);
	jdouble temp2 = (jdouble)SM_java_lang_Math_acos_double_R_double(ctx, (jdouble((frame[3].f))));
	frame[4].f = (jfloat(temp2));
	LINE_NUMBER(601);
	sp[0].o = (jobject)((func_arc_math_geom_Quat_setFromAxisRad_float_float_float_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_setFromAxisRad_float_float_float_float_R_arc_math_geom_Quat])(ctx, (frame[0].o), ((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_z)) - (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_y))), ((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_x)) - (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_z))), ((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_y)) - (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_x))), (frame[4].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_setFromCross_float_float_float_float_float_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:setFromCross", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(615);
	jfloat temp0 = (jfloat)SM_arc_math_geom_Vec3_dot_float_float_float_float_float_float_R_float(ctx, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, temp0, (jfloat(-1.0f)), (jfloat(1)));
	frame[7].f = temp1;
	LINE_NUMBER(616);
	jdouble temp2 = (jdouble)SM_java_lang_Math_acos_double_R_double(ctx, (jdouble((frame[7].f))));
	frame[8].f = (jfloat(temp2));
	LINE_NUMBER(617);
	sp[0].o = (jobject)((func_arc_math_geom_Quat_setFromAxisRad_float_float_float_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_setFromAxisRad_float_float_float_float_R_arc_math_geom_Quat])(ctx, (frame[0].o), (((frame[2].f) * (frame[6].f)) - ((frame[3].f) * (frame[5].f))), (((frame[3].f) * (frame[4].f)) - ((frame[1].f) * (frame[6].f))), (((frame[1].f) * (frame[5].f)) - ((frame[2].f) * (frame[4].f))), (frame[8].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_slerp_arc_math_geom_Quat_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:slerp", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(628);
	frame[3].f = ((((((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_x)) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_y))) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_z))) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_w)));
	LINE_NUMBER(629);
	if ((floatCompare((frame[3].f), (jfloat(0)), 1)) >= 0) goto label_2;
	}
	{
	jfloat temp0 = -(frame[3].f);
	sp[0].f = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_FLOAD(3);
label_3:;
	{
	sp -= 1;
	frame[4].f = sp[0].f;
	LINE_NUMBER(632);
	frame[5].f = ((jfloat(1)) - (frame[2].f));
	LINE_NUMBER(633);
	frame[6].f = (frame[2].f);
	LINE_NUMBER(637);
	if ((doubleCompare((jdouble(((jfloat(1)) - (frame[4].f)))), (jdouble(0.1)), -1)) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(639);
	jdouble temp0 = (jdouble)SM_java_lang_Math_acos_double_R_double(ctx, (jdouble((frame[4].f))));
	frame[7].f = (jfloat(temp0));
	LINE_NUMBER(640);
	jfloat temp1 = jfloat(1);
	jdouble temp2 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble((frame[7].f))));
	frame[8].f = (temp1 / (jfloat(temp2)));
	LINE_NUMBER(644);
	jdouble temp3 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble((((jfloat(1)) - (frame[2].f)) * (frame[7].f)))));
	frame[5].f = ((jfloat(temp3)) * (frame[8].f));
	LINE_NUMBER(645);
	jdouble temp4 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble(((frame[2].f) * (frame[7].f)))));
	frame[6].f = ((jfloat(temp4)) * (frame[8].f));
	}
label_7:;
	{
	LINE_NUMBER(648);
	if ((floatCompare((frame[3].f), (jfloat(0)), 1)) >= 0) goto label_12;
	}
	{
	frame[6].f = (-(frame[6].f));
	}
label_12:;
	{
	LINE_NUMBER(652);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x = (((frame[5].f) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x)) + ((frame[6].f) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_x)));
	LINE_NUMBER(653);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y = (((frame[5].f) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y)) + ((frame[6].f) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_y)));
	LINE_NUMBER(654);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z = (((frame[5].f) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z)) + ((frame[6].f) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_z)));
	LINE_NUMBER(655);
	((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w = (((frame[5].f) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w)) + ((frame[6].f) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_w)));
	LINE_NUMBER(658);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_slerp_Array1_arc_math_geom_Quat_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:slerp", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(670);
	frame[2].f = ((jfloat(1)) / (jfloat((((jarray) nullCheck(ctx, (frame[1].o)))->length))));
	LINE_NUMBER(671);
	sp[0].o = (jobject)((func_arc_math_geom_Quat_set_arc_math_geom_Quat_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_set_arc_math_geom_Quat_R_arc_math_geom_Quat])(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	sp[0].o = (jobject)((func_arc_math_geom_Quat_exp_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Quat_exp_float_R_arc_math_geom_Quat])(ctx, sp[0].o, (frame[2].f));
	LINE_NUMBER(672);
	frame[3].i = (jint(1));
	}
label_3:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
	{
	LINE_NUMBER(673);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Quat(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Quat_tmp1;
	sp[1].o = (jobject)((func_arc_math_geom_Quat_set_arc_math_geom_Quat_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Quat_set_arc_math_geom_Quat_R_arc_math_geom_Quat])(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))));
	sp[1].o = (jobject)((func_arc_math_geom_Quat_exp_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Quat_exp_float_R_arc_math_geom_Quat])(ctx, sp[1].o, (frame[2].f));
	sp[0].o = (jobject)((func_arc_math_geom_Quat_mul_arc_math_geom_Quat_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Quat_mul_arc_math_geom_Quat_R_arc_math_geom_Quat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(672);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(674);
	sp[0].o = (jobject)((func_arc_math_geom_Quat_nor_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_nor_R_arc_math_geom_Quat])(ctx, (frame[0].o));
	LINE_NUMBER(675);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_slerp_Array1_arc_math_geom_Quat_Array1_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:slerp", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(689);
	sp[0].o = (jobject)((func_arc_math_geom_Quat_set_arc_math_geom_Quat_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_set_arc_math_geom_Quat_R_arc_math_geom_Quat])(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	sp[0].o = (jobject)((func_arc_math_geom_Quat_exp_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Quat_exp_float_R_arc_math_geom_Quat])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0)))));
	LINE_NUMBER(690);
	frame[3].i = (jint(1));
	}
label_2:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(691);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Quat(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Quat_tmp1;
	sp[1].o = (jobject)((func_arc_math_geom_Quat_set_arc_math_geom_Quat_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Quat_set_arc_math_geom_Quat_R_arc_math_geom_Quat])(ctx, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))));
	sp[1].o = (jobject)((func_arc_math_geom_Quat_exp_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Quat_exp_float_R_arc_math_geom_Quat])(ctx, sp[1].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[3].i))));
	sp[0].o = (jobject)((func_arc_math_geom_Quat_mul_arc_math_geom_Quat_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Quat_mul_arc_math_geom_Quat_R_arc_math_geom_Quat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(690);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(692);
	sp[0].o = (jobject)((func_arc_math_geom_Quat_nor_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_nor_R_arc_math_geom_Quat])(ctx, (frame[0].o));
	LINE_NUMBER(693);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_exp_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:exp", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(705);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Quat_len_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_len_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(706);
	jdouble temp1 = (jdouble)SM_java_lang_Math_pow_double_double_R_double(ctx, (jdouble((frame[2].f))), (jdouble((frame[1].f))));
	frame[3].f = (jfloat(temp1));
	LINE_NUMBER(709);
	jdouble temp2 = (jdouble)SM_java_lang_Math_acos_double_R_double(ctx, (jdouble((((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w) / (frame[2].f)))));
	frame[4].f = (jfloat(temp2));
	LINE_NUMBER(712);
	frame[5].f = (jfloat(0));
	LINE_NUMBER(713);
	jfloat temp3 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[4].f));
	if ((doubleCompare((jdouble(temp3)), (jdouble(1,000000e-03)), 1)) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(715);
	frame[5].f = (((frame[3].f) * (frame[1].f)) / (frame[2].f));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(717);
	jdouble temp0 = jdouble((frame[3].f));
	jdouble temp1 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble(((frame[1].f) * (frame[4].f)))));
	jdouble temp2 = temp0 * temp1;
	jdouble temp3 = jdouble((frame[2].f));
	jdouble temp4 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble((frame[4].f))));
	frame[5].f = (jfloat((temp2 / (temp3 * temp4))));
	}
label_7:;
	{
	LINE_NUMBER(720);
	sp[0].o = frame[0].o;
	jdouble temp0 = jdouble((frame[3].f));
	jdouble temp1 = (jdouble)SM_java_lang_Math_cos_double_R_double(ctx, (jdouble(((frame[1].f) * (frame[4].f)))));
	((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_w = (jfloat((temp0 * temp1)));
	LINE_NUMBER(721);
	sp[0].o = frame[0].o;
	((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_x) * (frame[5].f));
	LINE_NUMBER(722);
	sp[0].o = frame[0].o;
	((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_y) * (frame[5].f));
	LINE_NUMBER(723);
	sp[0].o = frame[0].o;
	((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_z = (((jfloat)((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_z) * (frame[5].f));
	LINE_NUMBER(726);
	sp[0].o = (jobject)((func_arc_math_geom_Quat_nor_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_nor_R_arc_math_geom_Quat])(ctx, (frame[0].o));
	LINE_NUMBER(728);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jint M_arc_math_geom_Quat_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:hashCode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(733);
	frame[1].i = (31);
	LINE_NUMBER(734);
	frame[2].i = (jint(1));
	LINE_NUMBER(735);
	jint temp0 = (31) * (frame[2].i);
	jint temp1 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w));
	frame[2].i = (temp0 + temp1);
	LINE_NUMBER(736);
	jint temp2 = (31) * (frame[2].i);
	jint temp3 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x));
	frame[2].i = (temp2 + temp3);
	LINE_NUMBER(737);
	jint temp4 = (31) * (frame[2].i);
	jint temp5 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y));
	frame[2].i = (temp4 + temp5);
	LINE_NUMBER(738);
	jint temp6 = (31) * (frame[2].i);
	jint temp7 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z));
	frame[2].i = (temp6 + temp7);
	LINE_NUMBER(739);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Quat_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(744);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(745);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(747);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(748);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(750);
	if ((isInstance(ctx, (frame[1].o), &class_arc_math_geom_Quat)) != 0) goto label_5;
	}
	{
	LINE_NUMBER(751);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(753);
	frame[2].o = (checkCast(ctx, &class_arc_math_geom_Quat, (frame[1].o)));
	LINE_NUMBER(754);
	jint temp0 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w));
	jint temp1 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[2].o)))->F_w));
	if (temp0 != temp1) goto label_8;
	}
	{
	jfloat temp0 = (jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x;
	LINE_NUMBER(755);
	jint temp1 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, temp0);
	jint temp2 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[2].o)))->F_x));
	if (temp1 != temp2) goto label_8;
	}
	{
	jfloat temp0 = (jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y;
	LINE_NUMBER(756);
	jint temp1 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, temp0);
	jint temp2 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[2].o)))->F_y));
	if (temp1 != temp2) goto label_8;
	}
	{
	jfloat temp0 = (jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z;
	LINE_NUMBER(757);
	jint temp1 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, temp0);
	jint temp2 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[2].o)))->F_z));
	if (temp1 != temp2) goto label_8;
	}
	INST_ICONST(1);
	goto label_12;
label_8:;
	INST_ICONST(0);
label_12:;
	LINE_NUMBER(754);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Quat_dot_arc_math_geom_Quat_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:dot", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(766);
	popStackFrame(ctx);
	return ((((((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_x)) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_y))) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_z))) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_w)));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Quat_dot_float_float_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:dot", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(778);
	popStackFrame(ctx);
	return ((((((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x) * (frame[1].f)) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y) * (frame[2].f))) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z) * (frame[3].f))) + (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w) * (frame[4].f)));
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Quat_mul_float_R_arc_math_geom_Quat(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:mul", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(787);
	sp[0].o = frame[0].o;
	((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_x) * (frame[1].f));
	LINE_NUMBER(788);
	sp[0].o = frame[0].o;
	((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_y) * (frame[1].f));
	LINE_NUMBER(789);
	sp[0].o = frame[0].o;
	((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_z = (((jfloat)((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_z) * (frame[1].f));
	LINE_NUMBER(790);
	sp[0].o = frame[0].o;
	((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_w = (((jfloat)((arc_math_geom_Quat *) NULL_CHECK(sp[0].o))->F_w) * (frame[1].f));
	LINE_NUMBER(791);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Quat_getAxisAngle_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:getAxisAngle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(806);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Quat_getAxisAngleRad_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_getAxisAngleRad_arc_math_geom_Vec3_R_float])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return (temp0 * (jfloat(57.295776f)));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Quat_getAxisAngleRad_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:getAxisAngleRad", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(821);
	if ((floatCompare(((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w), (jfloat(1)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(822);
	sp[0].o = (jobject)((func_arc_math_geom_Quat_nor_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_nor_R_arc_math_geom_Quat])(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(823);
	jdouble temp0 = jdouble(2.0);
	jdouble temp1 = (jdouble)SM_java_lang_Math_acos_double_R_double(ctx, (jdouble(((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w))));
	frame[2].f = (jfloat((temp0 * temp1)));
	LINE_NUMBER(824);
	jdouble temp2 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((jfloat(1)) - (((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w) * ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w))))));
	frame[3].d = temp2;
	LINE_NUMBER(825);
	if ((doubleCompare((frame[3].d), (jdouble(1,000000e-06)), 1)) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(827);
	((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x = ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(828);
	((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y = ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(829);
	((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z = ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z);
	goto label_9;
	}
label_5:;
	{
	LINE_NUMBER(831);
	((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x = (jfloat(((jdouble(((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x))) / (frame[3].d))));
	LINE_NUMBER(832);
	((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y = (jfloat(((jdouble(((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y))) / (frame[3].d))));
	LINE_NUMBER(833);
	((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z = (jfloat(((jdouble(((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z))) / (frame[3].d))));
	}
label_9:;
	{
	LINE_NUMBER(836);
	popStackFrame(ctx);
	return (frame[2].f);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Quat_getAngleRad_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:getAngleRad", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(846);
	jdouble temp0 = jdouble(2.0);
	sp[0].d = temp0;
	sp += 1;
	if ((floatCompare(((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w), (jfloat(1)), -1)) <= 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w;
	jfloat temp1 = (jfloat)((func_arc_math_geom_Quat_len_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_len_R_float])(ctx, (frame[0].o));
	jdouble temp2 = jdouble((temp0 / temp1));
	sp[0].d = temp2;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jdouble temp0 = jdouble(((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w));
	sp[0].d = temp0;
	sp += 1;
	}
label_2:;
	{
	sp -= 2;
	jdouble temp0 = (jdouble)SM_java_lang_Math_acos_double_R_double(ctx, sp[1].d);
	popStackFrame(ctx);
	return (jfloat((sp[0].d * temp0)));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Quat_getAngle_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:getAngle", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(855);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Quat_getAngleRad_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_getAngleRad_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 * (jfloat(57.295776f)));
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_Quat_getSwingTwist_float_float_float_arc_math_geom_Quat_arc_math_geom_Quat(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:getSwingTwist", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(872);
	jfloat temp0 = (jfloat)SM_arc_math_geom_Vec3_dot_float_float_float_float_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z), (frame[1].f), (frame[2].f), (frame[3].f));
	frame[6].f = temp0;
	LINE_NUMBER(873);
	sp[0].o = (jobject)((func_arc_math_geom_Quat_set_float_float_float_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_math_geom_Quat_set_float_float_float_float_R_arc_math_geom_Quat])(ctx, (frame[5].o), ((frame[1].f) * (frame[6].f)), ((frame[2].f) * (frame[6].f)), ((frame[3].f) * (frame[6].f)), ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w));
	sp[0].o = (jobject)((func_arc_math_geom_Quat_nor_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Quat_nor_R_arc_math_geom_Quat])(ctx, sp[0].o);
	LINE_NUMBER(874);
	if ((floatCompare((frame[6].f), (jfloat(0)), 1)) >= 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_arc_math_geom_Quat_mul_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_math_geom_Quat_mul_float_R_arc_math_geom_Quat])(ctx, (frame[5].o), (jfloat(-1.0f)));
	}
label_3:;
	{
	LINE_NUMBER(875);
	sp[0].o = (jobject)((func_arc_math_geom_Quat_set_arc_math_geom_Quat_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_math_geom_Quat_set_arc_math_geom_Quat_R_arc_math_geom_Quat])(ctx, (frame[4].o), (frame[5].o));
	sp[0].o = (jobject)((func_arc_math_geom_Quat_conjugate_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Quat_conjugate_R_arc_math_geom_Quat])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_math_geom_Quat_mulLeft_arc_math_geom_Quat_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Quat_mulLeft_arc_math_geom_Quat_R_arc_math_geom_Quat])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(876);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_Quat_getSwingTwist_arc_math_geom_Vec3_arc_math_geom_Quat_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:getSwingTwist", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(889);
	((func_arc_math_geom_Quat_getSwingTwist_float_float_float_arc_math_geom_Quat_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_getSwingTwist_float_float_float_arc_math_geom_Quat_arc_math_geom_Quat])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z), (frame[2].o), (frame[3].o));
	LINE_NUMBER(890);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Quat_getAngleAroundRad_float_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:getAngleAroundRad", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(900);
	jfloat temp0 = (jfloat)SM_arc_math_geom_Vec3_dot_float_float_float_float_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_z), (frame[1].f), (frame[2].f), (frame[3].f));
	frame[4].f = temp0;
	LINE_NUMBER(901);
	jfloat temp1 = (jfloat)SM_arc_math_geom_Quat_len2_float_float_float_float_R_float(ctx, ((frame[1].f) * (frame[4].f)), ((frame[2].f) * (frame[4].f)), ((frame[3].f) * (frame[4].f)), ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w));
	frame[5].f = temp1;
	LINE_NUMBER(902);
	jint temp2 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, (frame[5].f));
	if (temp2 == 0) goto label_3;
	}
	INST_FCONST(0);
	goto label_4;
label_3:;
	{
	jdouble temp0 = jdouble(2.0);
	LINE_NUMBER(903);
	sp[0].d = temp0;
	sp += 1;
	if ((floatCompare((frame[4].f), (jfloat(0)), 1)) >= 0) goto label_6;
	}
	{
	jfloat temp0 = -((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[0].o)))->F_w);
	sp[0].f = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ALOAD(0);
	sp[-1].f = ((arc_math_geom_Quat *) NULL_CHECK(sp[-1].o))->F_w;
label_7:;
	{
	sp -= 2;
	jdouble temp0 = jdouble(sp[1].f);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((frame[5].f))));
	jfloat temp2 = jfloat((temp0 / temp1));
	jfloat temp3 = jfloat(-1.0f);
	jfloat temp4 = jfloat(1);
	LINE_NUMBER(902);
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, temp2, temp3, temp4);
	jdouble temp6 = (jdouble)SM_java_lang_Math_acos_double_R_double(ctx, (jdouble(temp5)));
	jfloat temp7 = jfloat((sp[0].d * temp6));
	sp[0].f = temp7;
	sp += 1;
	}
label_4:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Quat_getAngleAroundRad_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:getAngleAroundRad", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(912);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Quat_getAngleAroundRad_float_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_getAngleAroundRad_float_float_float_R_float])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Quat_getAngleAround_float_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:getAngleAround", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(923);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Quat_getAngleAroundRad_float_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_getAngleAroundRad_float_float_float_R_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f));
	popStackFrame(ctx);
	return (temp0 * (jfloat(57.295776f)));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Quat_getAngleAround_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:getAngleAround", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(932);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Quat_getAngleAround_float_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Quat_getAngleAround_float_float_float_R_float])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_arc_math_geom_Quat(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Quat:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Quat(ctx);
	{
	LINE_NUMBER(13);
	clinit_arc_math_geom_Quat(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Quat);
	init_arc_math_geom_Quat_float_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)));
	clinit_arc_math_geom_Quat(ctx);
	SF_arc_math_geom_Quat_tmp1 = sp[0].o;
	LINE_NUMBER(14);
	clinit_arc_math_geom_Quat(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Quat);
	init_arc_math_geom_Quat_float_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)));
	clinit_arc_math_geom_Quat(ctx);
	SF_arc_math_geom_Quat_tmp2 = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_geom_Quat[] {
	(void *) M_arc_math_geom_Quat_hashCode_R_int,
	(void *) M_arc_math_geom_Quat_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_math_geom_Quat_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_math_geom_Quat_set_float_float_float_float_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_set_arc_math_geom_Quat_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_set_arc_math_geom_Vec3_float_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_cpy_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_len_R_float,
	(void *) M_arc_math_geom_Quat_setEulerAngles_float_float_float_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_setEulerAnglesRad_float_float_float_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_getGimbalPole_R_int,
	(void *) M_arc_math_geom_Quat_getRollRad_R_float,
	(void *) M_arc_math_geom_Quat_getRoll_R_float,
	(void *) M_arc_math_geom_Quat_getPitchRad_R_float,
	(void *) M_arc_math_geom_Quat_getPitch_R_float,
	(void *) M_arc_math_geom_Quat_getYawRad_R_float,
	(void *) M_arc_math_geom_Quat_getYaw_R_float,
	(void *) M_arc_math_geom_Quat_len2_R_float,
	(void *) M_arc_math_geom_Quat_nor_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_conjugate_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_transform_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Quat_mul_arc_math_geom_Quat_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_mul_float_float_float_float_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_mulLeft_arc_math_geom_Quat_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_mulLeft_float_float_float_float_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_add_arc_math_geom_Quat_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_add_float_float_float_float_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_toMatrix_Array1_float,
	(void *) M_arc_math_geom_Quat_idt_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_isIdentity_R_boolean,
	(void *) M_arc_math_geom_Quat_isIdentity_float_R_boolean,
	(void *) M_arc_math_geom_Quat_setFromAxis_arc_math_geom_Vec3_float_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_setFromAxisRad_arc_math_geom_Vec3_float_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_setFromAxis_float_float_float_float_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_setFromAxisRad_float_float_float_float_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_setFromMatrix_boolean_arc_math_geom_Mat3D_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_setFromMatrix_arc_math_geom_Mat3D_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_setFromMatrix_boolean_arc_math_Mat_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_setFromMatrix_arc_math_Mat_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_setFromAxes_float_float_float_float_float_float_float_float_float_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_setFromAxes_boolean_float_float_float_float_float_float_float_float_float_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_setFromCross_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_setFromCross_float_float_float_float_float_float_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_slerp_arc_math_geom_Quat_float_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_slerp_Array1_arc_math_geom_Quat_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_slerp_Array1_arc_math_geom_Quat_Array1_float_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_exp_float_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_dot_arc_math_geom_Quat_R_float,
	(void *) M_arc_math_geom_Quat_dot_float_float_float_float_R_float,
	(void *) M_arc_math_geom_Quat_mul_float_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_getAxisAngle_arc_math_geom_Vec3_R_float,
	(void *) M_arc_math_geom_Quat_getAxisAngleRad_arc_math_geom_Vec3_R_float,
	(void *) M_arc_math_geom_Quat_getAngleRad_R_float,
	(void *) M_arc_math_geom_Quat_getAngle_R_float,
	(void *) M_arc_math_geom_Quat_getSwingTwist_float_float_float_arc_math_geom_Quat_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_getSwingTwist_arc_math_geom_Vec3_arc_math_geom_Quat_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Quat_getAngleAroundRad_float_float_float_R_float,
	(void *) M_arc_math_geom_Quat_getAngleAroundRad_arc_math_geom_Vec3_R_float,
	(void *) M_arc_math_geom_Quat_getAngleAround_float_float_float_R_float,
	(void *) M_arc_math_geom_Quat_getAngleAround_arc_math_geom_Vec3_R_float,
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
	{ "set", "(FFFF)Larc/math/geom/Quat;" },
	{ "set", "(Larc/math/geom/Quat;)Larc/math/geom/Quat;" },
	{ "set", "(Larc/math/geom/Vec3;F)Larc/math/geom/Quat;" },
	{ "cpy", "()Larc/math/geom/Quat;" },
	{ "len", "()F" },
	{ "setEulerAngles", "(FFF)Larc/math/geom/Quat;" },
	{ "setEulerAnglesRad", "(FFF)Larc/math/geom/Quat;" },
	{ "getGimbalPole", "()I" },
	{ "getRollRad", "()F" },
	{ "getRoll", "()F" },
	{ "getPitchRad", "()F" },
	{ "getPitch", "()F" },
	{ "getYawRad", "()F" },
	{ "getYaw", "()F" },
	{ "len2", "()F" },
	{ "nor", "()Larc/math/geom/Quat;" },
	{ "conjugate", "()Larc/math/geom/Quat;" },
	{ "transform", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "mul", "(Larc/math/geom/Quat;)Larc/math/geom/Quat;" },
	{ "mul", "(FFFF)Larc/math/geom/Quat;" },
	{ "mulLeft", "(Larc/math/geom/Quat;)Larc/math/geom/Quat;" },
	{ "mulLeft", "(FFFF)Larc/math/geom/Quat;" },
	{ "add", "(Larc/math/geom/Quat;)Larc/math/geom/Quat;" },
	{ "add", "(FFFF)Larc/math/geom/Quat;" },
	{ "toMatrix", "([F)V" },
	{ "idt", "()Larc/math/geom/Quat;" },
	{ "isIdentity", "()Z" },
	{ "isIdentity", "(F)Z" },
	{ "setFromAxis", "(Larc/math/geom/Vec3;F)Larc/math/geom/Quat;" },
	{ "setFromAxisRad", "(Larc/math/geom/Vec3;F)Larc/math/geom/Quat;" },
	{ "setFromAxis", "(FFFF)Larc/math/geom/Quat;" },
	{ "setFromAxisRad", "(FFFF)Larc/math/geom/Quat;" },
	{ "setFromMatrix", "(ZLarc/math/geom/Mat3D;)Larc/math/geom/Quat;" },
	{ "setFromMatrix", "(Larc/math/geom/Mat3D;)Larc/math/geom/Quat;" },
	{ "setFromMatrix", "(ZLarc/math/Mat;)Larc/math/geom/Quat;" },
	{ "setFromMatrix", "(Larc/math/Mat;)Larc/math/geom/Quat;" },
	{ "setFromAxes", "(FFFFFFFFF)Larc/math/geom/Quat;" },
	{ "setFromAxes", "(ZFFFFFFFFF)Larc/math/geom/Quat;" },
	{ "setFromCross", "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;)Larc/math/geom/Quat;" },
	{ "setFromCross", "(FFFFFF)Larc/math/geom/Quat;" },
	{ "slerp", "(Larc/math/geom/Quat;F)Larc/math/geom/Quat;" },
	{ "slerp", "([Larc/math/geom/Quat;)Larc/math/geom/Quat;" },
	{ "slerp", "([Larc/math/geom/Quat;[F)Larc/math/geom/Quat;" },
	{ "exp", "(F)Larc/math/geom/Quat;" },
	{ "dot", "(Larc/math/geom/Quat;)F" },
	{ "dot", "(FFFF)F" },
	{ "mul", "(F)Larc/math/geom/Quat;" },
	{ "getAxisAngle", "(Larc/math/geom/Vec3;)F" },
	{ "getAxisAngleRad", "(Larc/math/geom/Vec3;)F" },
	{ "getAngleRad", "()F" },
	{ "getAngle", "()F" },
	{ "getSwingTwist", "(FFFLarc/math/geom/Quat;Larc/math/geom/Quat;)V" },
	{ "getSwingTwist", "(Larc/math/geom/Vec3;Larc/math/geom/Quat;Larc/math/geom/Quat;)V" },
	{ "getAngleAroundRad", "(FFF)F" },
	{ "getAngleAroundRad", "(Larc/math/geom/Vec3;)F" },
	{ "getAngleAround", "(FFF)F" },
	{ "getAngleAround", "(Larc/math/geom/Vec3;)F" },
};

static FieldMetadata fields[] {
	{ "tmp1", &class_arc_math_geom_Quat, (intptr_t) &SF_arc_math_geom_Quat_tmp1, "Larc/math/geom/Quat;", 10 },
	{ "tmp2", &class_arc_math_geom_Quat, (intptr_t) &SF_arc_math_geom_Quat_tmp2, "Larc/math/geom/Quat;", 10 },
	{ "x", &class_float, offsetof(arc_math_geom_Quat, F_x), "F", 1 },
	{ "y", &class_float, offsetof(arc_math_geom_Quat, F_y), "F", 1 },
	{ "z", &class_float, offsetof(arc_math_geom_Quat, F_z), "F", 1 },
	{ "w", &class_float, offsetof(arc_math_geom_Quat, F_w), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_geom_Quat_float_float_float_float, 0, "(FFFF)V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_Quat, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_Quat_arc_math_geom_Quat, 0, "(Larc/math/geom/Quat;)V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_Quat_arc_math_geom_Vec3_float, 0, "(Larc/math/geom/Vec3;F)V", 1 },
	{ "len", (intptr_t) SM_arc_math_geom_Quat_len_float_float_float_float_R_float, 0, "(FFFF)F", 9 },
	{ "len2", (intptr_t) SM_arc_math_geom_Quat_len2_float_float_float_float_R_float, 0, "(FFFF)F", 9 },
	{ "dot", (intptr_t) SM_arc_math_geom_Quat_dot_float_float_float_float_float_float_float_float_R_float, 0, "(FFFFFFFF)F", 9 },
	{ "set", (intptr_t) M_arc_math_geom_Quat_set_float_float_float_float_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_set_float_float_float_float_R_arc_math_geom_Quat, "(FFFF)Larc/math/geom/Quat;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Quat_set_arc_math_geom_Quat_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_set_arc_math_geom_Quat_R_arc_math_geom_Quat, "(Larc/math/geom/Quat;)Larc/math/geom/Quat;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Quat_set_arc_math_geom_Vec3_float_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_set_arc_math_geom_Vec3_float_R_arc_math_geom_Quat, "(Larc/math/geom/Vec3;F)Larc/math/geom/Quat;", 1 },
	{ "cpy", (intptr_t) M_arc_math_geom_Quat_cpy_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_cpy_R_arc_math_geom_Quat, "()Larc/math/geom/Quat;", 1 },
	{ "len", (intptr_t) M_arc_math_geom_Quat_len_R_float, VTABLE_arc_math_geom_Quat_len_R_float, "()F", 1 },
	{ "toString", (intptr_t) M_arc_math_geom_Quat_toString_R_java_lang_String, VTABLE_arc_math_geom_Quat_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setEulerAngles", (intptr_t) M_arc_math_geom_Quat_setEulerAngles_float_float_float_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_setEulerAngles_float_float_float_R_arc_math_geom_Quat, "(FFF)Larc/math/geom/Quat;", 1 },
	{ "setEulerAnglesRad", (intptr_t) M_arc_math_geom_Quat_setEulerAnglesRad_float_float_float_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_setEulerAnglesRad_float_float_float_R_arc_math_geom_Quat, "(FFF)Larc/math/geom/Quat;", 1 },
	{ "getGimbalPole", (intptr_t) M_arc_math_geom_Quat_getGimbalPole_R_int, VTABLE_arc_math_geom_Quat_getGimbalPole_R_int, "()I", 1 },
	{ "getRollRad", (intptr_t) M_arc_math_geom_Quat_getRollRad_R_float, VTABLE_arc_math_geom_Quat_getRollRad_R_float, "()F", 1 },
	{ "getRoll", (intptr_t) M_arc_math_geom_Quat_getRoll_R_float, VTABLE_arc_math_geom_Quat_getRoll_R_float, "()F", 1 },
	{ "getPitchRad", (intptr_t) M_arc_math_geom_Quat_getPitchRad_R_float, VTABLE_arc_math_geom_Quat_getPitchRad_R_float, "()F", 1 },
	{ "getPitch", (intptr_t) M_arc_math_geom_Quat_getPitch_R_float, VTABLE_arc_math_geom_Quat_getPitch_R_float, "()F", 1 },
	{ "getYawRad", (intptr_t) M_arc_math_geom_Quat_getYawRad_R_float, VTABLE_arc_math_geom_Quat_getYawRad_R_float, "()F", 1 },
	{ "getYaw", (intptr_t) M_arc_math_geom_Quat_getYaw_R_float, VTABLE_arc_math_geom_Quat_getYaw_R_float, "()F", 1 },
	{ "len2", (intptr_t) M_arc_math_geom_Quat_len2_R_float, VTABLE_arc_math_geom_Quat_len2_R_float, "()F", 1 },
	{ "nor", (intptr_t) M_arc_math_geom_Quat_nor_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_nor_R_arc_math_geom_Quat, "()Larc/math/geom/Quat;", 1 },
	{ "conjugate", (intptr_t) M_arc_math_geom_Quat_conjugate_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_conjugate_R_arc_math_geom_Quat, "()Larc/math/geom/Quat;", 1 },
	{ "transform", (intptr_t) M_arc_math_geom_Quat_transform_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Quat_transform_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "mul", (intptr_t) M_arc_math_geom_Quat_mul_arc_math_geom_Quat_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_mul_arc_math_geom_Quat_R_arc_math_geom_Quat, "(Larc/math/geom/Quat;)Larc/math/geom/Quat;", 1 },
	{ "mul", (intptr_t) M_arc_math_geom_Quat_mul_float_float_float_float_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_mul_float_float_float_float_R_arc_math_geom_Quat, "(FFFF)Larc/math/geom/Quat;", 1 },
	{ "mulLeft", (intptr_t) M_arc_math_geom_Quat_mulLeft_arc_math_geom_Quat_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_mulLeft_arc_math_geom_Quat_R_arc_math_geom_Quat, "(Larc/math/geom/Quat;)Larc/math/geom/Quat;", 1 },
	{ "mulLeft", (intptr_t) M_arc_math_geom_Quat_mulLeft_float_float_float_float_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_mulLeft_float_float_float_float_R_arc_math_geom_Quat, "(FFFF)Larc/math/geom/Quat;", 1 },
	{ "add", (intptr_t) M_arc_math_geom_Quat_add_arc_math_geom_Quat_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_add_arc_math_geom_Quat_R_arc_math_geom_Quat, "(Larc/math/geom/Quat;)Larc/math/geom/Quat;", 1 },
	{ "add", (intptr_t) M_arc_math_geom_Quat_add_float_float_float_float_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_add_float_float_float_float_R_arc_math_geom_Quat, "(FFFF)Larc/math/geom/Quat;", 1 },
	{ "toMatrix", (intptr_t) M_arc_math_geom_Quat_toMatrix_Array1_float, VTABLE_arc_math_geom_Quat_toMatrix_Array1_float, "([F)V", 1 },
	{ "idt", (intptr_t) M_arc_math_geom_Quat_idt_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_idt_R_arc_math_geom_Quat, "()Larc/math/geom/Quat;", 1 },
	{ "isIdentity", (intptr_t) M_arc_math_geom_Quat_isIdentity_R_boolean, VTABLE_arc_math_geom_Quat_isIdentity_R_boolean, "()Z", 1 },
	{ "isIdentity", (intptr_t) M_arc_math_geom_Quat_isIdentity_float_R_boolean, VTABLE_arc_math_geom_Quat_isIdentity_float_R_boolean, "(F)Z", 1 },
	{ "setFromAxis", (intptr_t) M_arc_math_geom_Quat_setFromAxis_arc_math_geom_Vec3_float_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_setFromAxis_arc_math_geom_Vec3_float_R_arc_math_geom_Quat, "(Larc/math/geom/Vec3;F)Larc/math/geom/Quat;", 1 },
	{ "setFromAxisRad", (intptr_t) M_arc_math_geom_Quat_setFromAxisRad_arc_math_geom_Vec3_float_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_setFromAxisRad_arc_math_geom_Vec3_float_R_arc_math_geom_Quat, "(Larc/math/geom/Vec3;F)Larc/math/geom/Quat;", 1 },
	{ "setFromAxis", (intptr_t) M_arc_math_geom_Quat_setFromAxis_float_float_float_float_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_setFromAxis_float_float_float_float_R_arc_math_geom_Quat, "(FFFF)Larc/math/geom/Quat;", 1 },
	{ "setFromAxisRad", (intptr_t) M_arc_math_geom_Quat_setFromAxisRad_float_float_float_float_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_setFromAxisRad_float_float_float_float_R_arc_math_geom_Quat, "(FFFF)Larc/math/geom/Quat;", 1 },
	{ "setFromMatrix", (intptr_t) M_arc_math_geom_Quat_setFromMatrix_boolean_arc_math_geom_Mat3D_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_setFromMatrix_boolean_arc_math_geom_Mat3D_R_arc_math_geom_Quat, "(ZLarc/math/geom/Mat3D;)Larc/math/geom/Quat;", 1 },
	{ "setFromMatrix", (intptr_t) M_arc_math_geom_Quat_setFromMatrix_arc_math_geom_Mat3D_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_setFromMatrix_arc_math_geom_Mat3D_R_arc_math_geom_Quat, "(Larc/math/geom/Mat3D;)Larc/math/geom/Quat;", 1 },
	{ "setFromMatrix", (intptr_t) M_arc_math_geom_Quat_setFromMatrix_boolean_arc_math_Mat_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_setFromMatrix_boolean_arc_math_Mat_R_arc_math_geom_Quat, "(ZLarc/math/Mat;)Larc/math/geom/Quat;", 1 },
	{ "setFromMatrix", (intptr_t) M_arc_math_geom_Quat_setFromMatrix_arc_math_Mat_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_setFromMatrix_arc_math_Mat_R_arc_math_geom_Quat, "(Larc/math/Mat;)Larc/math/geom/Quat;", 1 },
	{ "setFromAxes", (intptr_t) M_arc_math_geom_Quat_setFromAxes_float_float_float_float_float_float_float_float_float_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_setFromAxes_float_float_float_float_float_float_float_float_float_R_arc_math_geom_Quat, "(FFFFFFFFF)Larc/math/geom/Quat;", 1 },
	{ "setFromAxes", (intptr_t) M_arc_math_geom_Quat_setFromAxes_boolean_float_float_float_float_float_float_float_float_float_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_setFromAxes_boolean_float_float_float_float_float_float_float_float_float_R_arc_math_geom_Quat, "(ZFFFFFFFFF)Larc/math/geom/Quat;", 1 },
	{ "setFromCross", (intptr_t) M_arc_math_geom_Quat_setFromCross_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_setFromCross_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Quat, "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;)Larc/math/geom/Quat;", 1 },
	{ "setFromCross", (intptr_t) M_arc_math_geom_Quat_setFromCross_float_float_float_float_float_float_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_setFromCross_float_float_float_float_float_float_R_arc_math_geom_Quat, "(FFFFFF)Larc/math/geom/Quat;", 1 },
	{ "slerp", (intptr_t) M_arc_math_geom_Quat_slerp_arc_math_geom_Quat_float_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_slerp_arc_math_geom_Quat_float_R_arc_math_geom_Quat, "(Larc/math/geom/Quat;F)Larc/math/geom/Quat;", 1 },
	{ "slerp", (intptr_t) M_arc_math_geom_Quat_slerp_Array1_arc_math_geom_Quat_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_slerp_Array1_arc_math_geom_Quat_R_arc_math_geom_Quat, "([Larc/math/geom/Quat;)Larc/math/geom/Quat;", 1 },
	{ "slerp", (intptr_t) M_arc_math_geom_Quat_slerp_Array1_arc_math_geom_Quat_Array1_float_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_slerp_Array1_arc_math_geom_Quat_Array1_float_R_arc_math_geom_Quat, "([Larc/math/geom/Quat;[F)Larc/math/geom/Quat;", 1 },
	{ "exp", (intptr_t) M_arc_math_geom_Quat_exp_float_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_exp_float_R_arc_math_geom_Quat, "(F)Larc/math/geom/Quat;", 1 },
	{ "hashCode", (intptr_t) M_arc_math_geom_Quat_hashCode_R_int, VTABLE_arc_math_geom_Quat_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_arc_math_geom_Quat_equals_java_lang_Object_R_boolean, VTABLE_arc_math_geom_Quat_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "dot", (intptr_t) M_arc_math_geom_Quat_dot_arc_math_geom_Quat_R_float, VTABLE_arc_math_geom_Quat_dot_arc_math_geom_Quat_R_float, "(Larc/math/geom/Quat;)F", 1 },
	{ "dot", (intptr_t) M_arc_math_geom_Quat_dot_float_float_float_float_R_float, VTABLE_arc_math_geom_Quat_dot_float_float_float_float_R_float, "(FFFF)F", 1 },
	{ "mul", (intptr_t) M_arc_math_geom_Quat_mul_float_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_mul_float_R_arc_math_geom_Quat, "(F)Larc/math/geom/Quat;", 1 },
	{ "getAxisAngle", (intptr_t) M_arc_math_geom_Quat_getAxisAngle_arc_math_geom_Vec3_R_float, VTABLE_arc_math_geom_Quat_getAxisAngle_arc_math_geom_Vec3_R_float, "(Larc/math/geom/Vec3;)F", 1 },
	{ "getAxisAngleRad", (intptr_t) M_arc_math_geom_Quat_getAxisAngleRad_arc_math_geom_Vec3_R_float, VTABLE_arc_math_geom_Quat_getAxisAngleRad_arc_math_geom_Vec3_R_float, "(Larc/math/geom/Vec3;)F", 1 },
	{ "getAngleRad", (intptr_t) M_arc_math_geom_Quat_getAngleRad_R_float, VTABLE_arc_math_geom_Quat_getAngleRad_R_float, "()F", 1 },
	{ "getAngle", (intptr_t) M_arc_math_geom_Quat_getAngle_R_float, VTABLE_arc_math_geom_Quat_getAngle_R_float, "()F", 1 },
	{ "getSwingTwist", (intptr_t) M_arc_math_geom_Quat_getSwingTwist_float_float_float_arc_math_geom_Quat_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_getSwingTwist_float_float_float_arc_math_geom_Quat_arc_math_geom_Quat, "(FFFLarc/math/geom/Quat;Larc/math/geom/Quat;)V", 1 },
	{ "getSwingTwist", (intptr_t) M_arc_math_geom_Quat_getSwingTwist_arc_math_geom_Vec3_arc_math_geom_Quat_arc_math_geom_Quat, VTABLE_arc_math_geom_Quat_getSwingTwist_arc_math_geom_Vec3_arc_math_geom_Quat_arc_math_geom_Quat, "(Larc/math/geom/Vec3;Larc/math/geom/Quat;Larc/math/geom/Quat;)V", 1 },
	{ "getAngleAroundRad", (intptr_t) M_arc_math_geom_Quat_getAngleAroundRad_float_float_float_R_float, VTABLE_arc_math_geom_Quat_getAngleAroundRad_float_float_float_R_float, "(FFF)F", 1 },
	{ "getAngleAroundRad", (intptr_t) M_arc_math_geom_Quat_getAngleAroundRad_arc_math_geom_Vec3_R_float, VTABLE_arc_math_geom_Quat_getAngleAroundRad_arc_math_geom_Vec3_R_float, "(Larc/math/geom/Vec3;)F", 1 },
	{ "getAngleAround", (intptr_t) M_arc_math_geom_Quat_getAngleAround_float_float_float_R_float, VTABLE_arc_math_geom_Quat_getAngleAround_float_float_float_R_float, "(FFF)F", 1 },
	{ "getAngleAround", (intptr_t) M_arc_math_geom_Quat_getAngleAround_arc_math_geom_Vec3_R_float, VTABLE_arc_math_geom_Quat_getAngleAround_arc_math_geom_Vec3_R_float, "(Larc/math/geom/Vec3;)F", 1 },
	{ "<clinit>", (intptr_t) clinit_arc_math_geom_Quat, 0, "()V", 8 },
};

Class class_arc_math_geom_Quat{
		.nativeName = (intptr_t) "arc/math/geom/Quat",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_geom_Quat),
		.classVtable = (intptr_t) vtable_arc_math_geom_Quat,
		.staticInitializer = (intptr_t) clinit_arc_math_geom_Quat,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_geom_Quat,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 68,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 68,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_geom_Quat = registerClass(&class_arc_math_geom_Quat);

}
