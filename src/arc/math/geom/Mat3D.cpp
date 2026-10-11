#include "arc/math/geom/Mat3D.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "arc/math/geom/Quat.h"
#include "arc/math/geom/Mat3D.h"
#include "java/lang/RuntimeException.h"
#include "arc/math/Mat.h"
#include "arc/math/geom/Vec3.h"
#include "java/lang/System.h"
#include "arc/math/Affine2.h"

extern "C" {

jint SF_arc_math_geom_Mat3D_M00;
jint SF_arc_math_geom_Mat3D_M01;
jint SF_arc_math_geom_Mat3D_M02;
jint SF_arc_math_geom_Mat3D_M03;
jint SF_arc_math_geom_Mat3D_M10;
jint SF_arc_math_geom_Mat3D_M11;
jint SF_arc_math_geom_Mat3D_M12;
jint SF_arc_math_geom_Mat3D_M13;
jint SF_arc_math_geom_Mat3D_M20;
jint SF_arc_math_geom_Mat3D_M21;
jint SF_arc_math_geom_Mat3D_M22;
jint SF_arc_math_geom_Mat3D_M23;
jint SF_arc_math_geom_Mat3D_M30;
jint SF_arc_math_geom_Mat3D_M31;
jint SF_arc_math_geom_Mat3D_M32;
jint SF_arc_math_geom_Mat3D_M33;
jobject SF_arc_math_geom_Mat3D_tmp;
jobject SF_arc_math_geom_Mat3D_tmp2;
jobject SF_arc_math_geom_Mat3D_quat;
jobject SF_arc_math_geom_Mat3D_quat2;
jobject SF_arc_math_geom_Mat3D_l_vez;
jobject SF_arc_math_geom_Mat3D_l_vex;
jobject SF_arc_math_geom_Mat3D_l_vey;
jobject SF_arc_math_geom_Mat3D_tmpVec;
jobject SF_arc_math_geom_Mat3D_tmpMat;
jobject SF_arc_math_geom_Mat3D_right;
jobject SF_arc_math_geom_Mat3D_tmpForward;
jobject SF_arc_math_geom_Mat3D_tmpUp;

void mark_arc_math_geom_Mat3D(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_math_geom_Mat3D_tmp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Mat3D_tmp)->clazz)->markFunction)((jobject) SF_arc_math_geom_Mat3D_tmp, mark, depth + 1);
		if (SF_arc_math_geom_Mat3D_tmp2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Mat3D_tmp2)->clazz)->markFunction)((jobject) SF_arc_math_geom_Mat3D_tmp2, mark, depth + 1);
		if (SF_arc_math_geom_Mat3D_quat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Mat3D_quat)->clazz)->markFunction)((jobject) SF_arc_math_geom_Mat3D_quat, mark, depth + 1);
		if (SF_arc_math_geom_Mat3D_quat2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Mat3D_quat2)->clazz)->markFunction)((jobject) SF_arc_math_geom_Mat3D_quat2, mark, depth + 1);
		if (SF_arc_math_geom_Mat3D_l_vez)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Mat3D_l_vez)->clazz)->markFunction)((jobject) SF_arc_math_geom_Mat3D_l_vez, mark, depth + 1);
		if (SF_arc_math_geom_Mat3D_l_vex)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Mat3D_l_vex)->clazz)->markFunction)((jobject) SF_arc_math_geom_Mat3D_l_vex, mark, depth + 1);
		if (SF_arc_math_geom_Mat3D_l_vey)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Mat3D_l_vey)->clazz)->markFunction)((jobject) SF_arc_math_geom_Mat3D_l_vey, mark, depth + 1);
		if (SF_arc_math_geom_Mat3D_tmpVec)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Mat3D_tmpVec)->clazz)->markFunction)((jobject) SF_arc_math_geom_Mat3D_tmpVec, mark, depth + 1);
		if (SF_arc_math_geom_Mat3D_tmpMat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Mat3D_tmpMat)->clazz)->markFunction)((jobject) SF_arc_math_geom_Mat3D_tmpMat, mark, depth + 1);
		if (SF_arc_math_geom_Mat3D_right)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Mat3D_right)->clazz)->markFunction)((jobject) SF_arc_math_geom_Mat3D_right, mark, depth + 1);
		if (SF_arc_math_geom_Mat3D_tmpForward)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Mat3D_tmpForward)->clazz)->markFunction)((jobject) SF_arc_math_geom_Mat3D_tmpForward, mark, depth + 1);
		if (SF_arc_math_geom_Mat3D_tmpUp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_geom_Mat3D_tmpUp)->clazz)->markFunction)((jobject) SF_arc_math_geom_Mat3D_tmpUp, mark, depth + 1);
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
	auto self = (arc_math_geom_Mat3D *) object;
	if (self->F_val)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val)->clazz)->markFunction)((jobject) self->F_val, mark, depth + 1);
}

void init_arc_math_geom_Mat3D(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Mat3D(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(79);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (16));
	((arc_math_geom_Mat3D *) NULL_CHECK(sp[0].o))->F_val = (jref) sp[1].o;
	LINE_NUMBER(80);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(1));
	LINE_NUMBER(81);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (jfloat(1));
	LINE_NUMBER(82);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (jfloat(1));
	LINE_NUMBER(83);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (jfloat(1));
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_Mat3D_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Mat3D(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(90);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (16));
	((arc_math_geom_Mat3D *) NULL_CHECK(sp[0].o))->F_val = (jref) sp[1].o;
	LINE_NUMBER(91);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_set_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_set_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_Mat3D_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Mat3D(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (16));
	((arc_math_geom_Mat3D *) NULL_CHECK(sp[0].o))->F_val = (jref) sp[1].o;
	LINE_NUMBER(100);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_set_Array1_float_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_set_Array1_float_R_arc_math_geom_Mat3D])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_Mat3D_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Mat3D(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(107);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (16));
	((arc_math_geom_Mat3D *) NULL_CHECK(sp[0].o))->F_val = (jref) sp[1].o;
	LINE_NUMBER(108);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_set_arc_math_geom_Quat_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_set_arc_math_geom_Quat_R_arc_math_geom_Mat3D])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_Mat3D_arc_math_geom_Vec3_arc_math_geom_Quat_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Mat3D(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(117);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (16));
	((arc_math_geom_Mat3D *) NULL_CHECK(sp[0].o))->F_val = (jref) sp[1].o;
	LINE_NUMBER(118);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_set_arc_math_geom_Vec3_arc_math_geom_Quat_arc_math_geom_Vec3_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_set_arc_math_geom_Vec3_arc_math_geom_Quat_arc_math_geom_Vec3_R_arc_math_geom_Mat3D])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_set_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[1].o)))->F_val;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_set_Array1_float_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_set_Array1_float_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_set_Array1_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(138);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_set_arc_math_geom_Quat_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_set_float_float_float_float_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_set_float_float_float_float_R_arc_math_geom_Mat3D])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_z), ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[1].o)))->F_w));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_set_float_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:set", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_set_float_float_float_float_float_float_float_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_set_float_float_float_float_float_float_float_R_arc_math_geom_Mat3D])(ctx, (frame[0].o), (jfloat(0)), (jfloat(0)), (jfloat(0)), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_set_arc_math_geom_Vec3_arc_math_geom_Quat_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:set", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_set_float_float_float_float_float_float_float_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_set_float_float_float_float_float_float_float_R_arc_math_geom_Mat3D])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z), ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[2].o)))->F_y), ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[2].o)))->F_z), ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[2].o)))->F_w));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_set_float_float_float_float_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6) {
	NULL_CHECK(self);
	jtype frame[25];
	auto stack = &frame[20];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:set", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	{
	LINE_NUMBER(186);
	frame[8].f = ((frame[4].f) * (jfloat(2)));
	frame[9].f = ((frame[5].f) * (jfloat(2)));
	frame[10].f = ((frame[6].f) * (jfloat(2)));
	LINE_NUMBER(187);
	frame[11].f = ((frame[7].f) * (frame[8].f));
	frame[12].f = ((frame[7].f) * (frame[9].f));
	frame[13].f = ((frame[7].f) * (frame[10].f));
	LINE_NUMBER(188);
	frame[14].f = ((frame[4].f) * (frame[8].f));
	frame[15].f = ((frame[4].f) * (frame[9].f));
	frame[16].f = ((frame[4].f) * (frame[10].f));
	LINE_NUMBER(189);
	frame[17].f = ((frame[5].f) * (frame[9].f));
	frame[18].f = ((frame[5].f) * (frame[10].f));
	frame[19].f = ((frame[6].f) * (frame[10].f));
	LINE_NUMBER(191);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = ((jfloat(1)) - ((frame[17].f) + (frame[19].f)));
	LINE_NUMBER(192);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = ((frame[15].f) - (frame[13].f));
	LINE_NUMBER(193);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = ((frame[16].f) + (frame[12].f));
	LINE_NUMBER(194);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (frame[1].f);
	LINE_NUMBER(196);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = ((frame[15].f) + (frame[13].f));
	LINE_NUMBER(197);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = ((jfloat(1)) - ((frame[14].f) + (frame[19].f)));
	LINE_NUMBER(198);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = ((frame[18].f) - (frame[11].f));
	LINE_NUMBER(199);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (frame[2].f);
	LINE_NUMBER(201);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = ((frame[16].f) - (frame[12].f));
	LINE_NUMBER(202);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = ((frame[18].f) + (frame[11].f));
	LINE_NUMBER(203);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = ((jfloat(1)) - ((frame[14].f) + (frame[17].f)));
	LINE_NUMBER(204);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (frame[3].f);
	LINE_NUMBER(206);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(0));
	LINE_NUMBER(207);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (jfloat(0));
	LINE_NUMBER(208);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (jfloat(0));
	LINE_NUMBER(209);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (jfloat(1));
	LINE_NUMBER(210);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_set_arc_math_geom_Vec3_arc_math_geom_Quat_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:set", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(221);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_set_float_float_float_float_float_float_float_float_float_float_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_set_float_float_float_float_float_float_float_float_float_float_R_arc_math_geom_Mat3D])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z), ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[2].o)))->F_y), ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[2].o)))->F_z), ((jfloat)((arc_math_geom_Quat *) NULL_CHECK((frame[2].o)))->F_w), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[3].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[3].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[3].o)))->F_z));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_set_float_float_float_float_float_float_float_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9) {
	NULL_CHECK(self);
	jtype frame[29];
	auto stack = &frame[23];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:set", 29 };
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
	frame[10].f = param9;
	{
	LINE_NUMBER(241);
	frame[11].f = ((frame[4].f) * (jfloat(2)));
	frame[12].f = ((frame[5].f) * (jfloat(2)));
	frame[13].f = ((frame[6].f) * (jfloat(2)));
	LINE_NUMBER(242);
	frame[14].f = ((frame[7].f) * (frame[11].f));
	frame[15].f = ((frame[7].f) * (frame[12].f));
	frame[16].f = ((frame[7].f) * (frame[13].f));
	LINE_NUMBER(243);
	frame[17].f = ((frame[4].f) * (frame[11].f));
	frame[18].f = ((frame[4].f) * (frame[12].f));
	frame[19].f = ((frame[4].f) * (frame[13].f));
	LINE_NUMBER(244);
	frame[20].f = ((frame[5].f) * (frame[12].f));
	frame[21].f = ((frame[5].f) * (frame[13].f));
	frame[22].f = ((frame[6].f) * (frame[13].f));
	LINE_NUMBER(246);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = ((frame[8].f) * ((jfloat(1)) - ((frame[20].f) + (frame[22].f))));
	LINE_NUMBER(247);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = ((frame[9].f) * ((frame[18].f) - (frame[16].f)));
	LINE_NUMBER(248);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = ((frame[10].f) * ((frame[19].f) + (frame[15].f)));
	LINE_NUMBER(249);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (frame[1].f);
	LINE_NUMBER(251);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = ((frame[8].f) * ((frame[18].f) + (frame[16].f)));
	LINE_NUMBER(252);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = ((frame[9].f) * ((jfloat(1)) - ((frame[17].f) + (frame[22].f))));
	LINE_NUMBER(253);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = ((frame[10].f) * ((frame[21].f) - (frame[14].f)));
	LINE_NUMBER(254);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (frame[2].f);
	LINE_NUMBER(256);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = ((frame[8].f) * ((frame[19].f) - (frame[15].f)));
	LINE_NUMBER(257);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = ((frame[9].f) * ((frame[21].f) + (frame[14].f)));
	LINE_NUMBER(258);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = ((frame[10].f) * ((jfloat(1)) - ((frame[17].f) + (frame[20].f))));
	LINE_NUMBER(259);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (frame[3].f);
	LINE_NUMBER(261);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(0));
	LINE_NUMBER(262);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (jfloat(0));
	LINE_NUMBER(263);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (jfloat(0));
	LINE_NUMBER(264);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (jfloat(1));
	LINE_NUMBER(265);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(277);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(278);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(279);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z);
	LINE_NUMBER(280);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_x);
	LINE_NUMBER(281);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_y);
	LINE_NUMBER(282);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_z);
	LINE_NUMBER(283);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[3].o)))->F_x);
	LINE_NUMBER(284);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[3].o)))->F_y);
	LINE_NUMBER(285);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[3].o)))->F_z);
	LINE_NUMBER(286);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[4].o)))->F_x);
	LINE_NUMBER(287);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[4].o)))->F_y);
	LINE_NUMBER(288);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[4].o)))->F_z);
	LINE_NUMBER(289);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(0));
	LINE_NUMBER(290);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (jfloat(0));
	LINE_NUMBER(291);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (jfloat(0));
	LINE_NUMBER(292);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (jfloat(1));
	LINE_NUMBER(293);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_cpy_R_arc_math_geom_Mat3D(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:cpy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(298);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Mat3D);
	init_arc_math_geom_Mat3D_arc_math_geom_Mat3D(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_trn_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:trn", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(307);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = 12;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(308);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = 13;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) + ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(309);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp6 = 14;
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp6)) + ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z));
	LINE_NUMBER(310);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_trn_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:trn", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = 12;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (frame[1].f));
	LINE_NUMBER(322);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = 13;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) + (frame[2].f));
	LINE_NUMBER(323);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp6 = 14;
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp6)) + (frame[3].f));
	LINE_NUMBER(324);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_getValues_R_Array1_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:getValues", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(329);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_mul_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:mul", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(342);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[1].o)))->F_val;
	SM_arc_math_geom_Mat3D_mul_Array1_float_Array1_float(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(343);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_mulLeft_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:mulLeft", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(356);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmpMat;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_set_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_set_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(357);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmpMat;
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK(sp[0].o))->F_val;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	SM_arc_math_geom_Mat3D_mul_Array1_float_Array1_float(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(358);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmpMat;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_set_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_set_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_tra_R_arc_math_geom_Mat3D(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:tra", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(366);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0))));
	LINE_NUMBER(367);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp1 = jint(4);
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp1) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))));
	LINE_NUMBER(368);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp2 = 8;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))));
	LINE_NUMBER(369);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp3 = 12;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3))));
	LINE_NUMBER(370);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp4 = jint(1);
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp4) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4))));
	LINE_NUMBER(371);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp5 = jint(5);
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp5) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5))));
	LINE_NUMBER(372);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp6 = 9;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6)));
	LINE_NUMBER(373);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp7 = 13;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp7) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7)));
	LINE_NUMBER(374);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp8 = jint(2);
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp8) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8)));
	LINE_NUMBER(375);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp9 = 6;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp9) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9)));
	LINE_NUMBER(376);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp10 = 10;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp10) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10)));
	LINE_NUMBER(377);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp11 = 14;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp11) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (11)));
	LINE_NUMBER(378);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp12 = jint(3);
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp12) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12)));
	LINE_NUMBER(379);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp13 = 7;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp13) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13)));
	LINE_NUMBER(380);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp14 = 11;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp14) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (14)));
	LINE_NUMBER(381);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp15 = 15;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp15) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (15)));
	LINE_NUMBER(382);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_set_Array1_float_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_set_Array1_float_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:idt", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(390);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(1));
	LINE_NUMBER(391);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (jfloat(0));
	LINE_NUMBER(392);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (jfloat(0));
	LINE_NUMBER(393);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (jfloat(0));
	LINE_NUMBER(394);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (jfloat(0));
	LINE_NUMBER(395);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (jfloat(1));
	LINE_NUMBER(396);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (jfloat(0));
	LINE_NUMBER(397);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (jfloat(0));
	LINE_NUMBER(398);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (jfloat(0));
	LINE_NUMBER(399);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (jfloat(0));
	LINE_NUMBER(400);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (jfloat(1));
	LINE_NUMBER(401);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (jfloat(0));
	LINE_NUMBER(402);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(0));
	LINE_NUMBER(403);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (jfloat(0));
	LINE_NUMBER(404);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (jfloat(0));
	LINE_NUMBER(405);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (jfloat(1));
	LINE_NUMBER(406);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_inv_R_arc_math_geom_Mat3D(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:inv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(415);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp1 = temp0 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp2 = temp1 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp3 = temp2 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp4 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp5 = temp4 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp6 = temp5 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp7 = temp3 - (temp6 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp8 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp9 = temp8 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp10 = temp9 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp11 = temp7 - (temp10 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp12 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp13 = temp12 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp14 = temp13 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp15 = temp11 + (temp14 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp16 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp17 = temp16 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp18 = temp17 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp19 = temp15 + (temp18 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp20 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp21 = temp20 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp22 = temp21 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp23 = temp19 - (temp22 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp24 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp25 = temp24 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp26 = temp25 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp27 = temp23 - (temp26 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp28 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp29 = temp28 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp30 = temp29 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp31 = temp27 + (temp30 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp32 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp33 = temp32 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp34 = temp33 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp35 = temp31 + (temp34 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp36 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp37 = temp36 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp38 = temp37 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp39 = temp35 - (temp38 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp40 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp41 = temp40 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp42 = temp41 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp43 = temp39 - (temp42 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp44 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp45 = temp44 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp46 = temp45 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp47 = temp43 + (temp46 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp48 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp49 = temp48 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp50 = temp49 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp51 = temp47 + (temp50 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp52 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp53 = temp52 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp54 = temp53 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp55 = temp51 - (temp54 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp56 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp57 = temp56 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp58 = temp57 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp59 = temp55 - (temp58 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp60 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp61 = temp60 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp62 = temp61 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp63 = temp59 + (temp62 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp64 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp65 = temp64 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp66 = temp65 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp67 = temp63 + (temp66 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp68 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp69 = temp68 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp70 = temp69 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp71 = temp67 - (temp70 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp72 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp73 = temp72 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp74 = temp73 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp75 = temp71 - (temp74 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp76 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp77 = temp76 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp78 = temp77 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp79 = temp75 + (temp78 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp80 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp81 = temp80 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp82 = temp81 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp83 = temp79 + (temp82 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp84 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp85 = temp84 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp86 = temp85 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp87 = temp83 - (temp86 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp88 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp89 = temp88 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp90 = temp89 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp91 = temp87 - (temp90 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp92 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp93 = temp92 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp94 = temp93 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	frame[1].f = (temp91 + (temp94 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15)))));
	LINE_NUMBER(424);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_2;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"non-invertible matrix"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(425);
	frame[2].f = ((jfloat(1)) / (frame[1].f));
	LINE_NUMBER(426);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp2 = temp1 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (14)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp3 = temp2 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp4 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp5 = temp4 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp6 = temp3 - (temp5 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp7 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp8 = temp7 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp9 = temp6 + (temp8 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (11))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp10 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp11 = temp10 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (14)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp12 = temp9 - (temp11 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (11))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp13 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp14 = temp13 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp15 = temp12 - (temp14 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (15))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp16 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp17 = temp16 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (temp15 + (temp17 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (15)))));
	LINE_NUMBER(428);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp18 = jint(4);
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp19 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp20 = temp19 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp21 = temp20 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp22 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp23 = temp22 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (14)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp24 = temp21 - (temp23 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp25 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp26 = temp25 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp27 = temp24 - (temp26 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (11))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp28 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp29 = temp28 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (14)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp30 = temp27 + (temp29 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (11))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp31 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp32 = temp31 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp33 = temp30 + (temp32 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (15))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp34 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp35 = temp34 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp18) = (temp33 - (temp35 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (15)))));
	LINE_NUMBER(430);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp36 = 8;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp37 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp38 = temp37 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp39 = temp38 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp40 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp41 = temp40 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp42 = temp39 - (temp41 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp43 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp44 = temp43 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp45 = temp42 + (temp44 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (11))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp46 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp47 = temp46 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp48 = temp45 - (temp47 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (11))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp49 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp50 = temp49 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp51 = temp48 - (temp50 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (15))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp52 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp53 = temp52 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp36) = (temp51 + (temp53 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (15)))));
	LINE_NUMBER(432);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp54 = 12;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp55 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp56 = temp55 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp57 = temp56 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp58 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp59 = temp58 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp60 = temp57 - (temp59 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp61 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp62 = temp61 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp63 = temp60 - (temp62 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp64 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp65 = temp64 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp66 = temp63 + (temp65 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp67 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp68 = temp67 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp69 = temp66 + (temp68 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (14))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp70 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp71 = temp70 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp54) = (temp69 - (temp71 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (14)))));
	LINE_NUMBER(434);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp72 = jint(1);
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp73 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp74 = temp73 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp75 = temp74 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp76 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp77 = temp76 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (14)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp78 = temp75 - (temp77 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3)))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp79 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp80 = temp79 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp81 = temp78 - (temp80 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (11))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp82 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp83 = temp82 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (14)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp84 = temp81 + (temp83 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (11))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp85 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp86 = temp85 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp87 = temp84 + (temp86 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (15))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp88 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp89 = temp88 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp72) = (temp87 - (temp89 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (15)))));
	LINE_NUMBER(436);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp90 = jint(5);
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp91 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp92 = temp91 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (14)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp93 = temp92 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp94 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp95 = temp94 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp96 = temp93 - (temp95 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3)))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp97 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp98 = temp97 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp99 = temp96 + (temp98 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (11))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp100 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp101 = temp100 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (14)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp102 = temp99 - (temp101 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (11))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp103 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp104 = temp103 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp105 = temp102 - (temp104 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (15))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp106 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp107 = temp106 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp90) = (temp105 + (temp107 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (15)))));
	LINE_NUMBER(438);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp108 = 9;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp109 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp110 = temp109 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp111 = temp110 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp112 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp113 = temp112 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp114 = temp111 - (temp113 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3)))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp115 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp116 = temp115 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp117 = temp114 - (temp116 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (11))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp118 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp119 = temp118 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp120 = temp117 + (temp119 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (11))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp121 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp122 = temp121 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp123 = temp120 + (temp122 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (15))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp124 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp125 = temp124 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp108) = (temp123 - (temp125 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (15)))));
	LINE_NUMBER(440);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp126 = 13;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp127 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp128 = temp127 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp129 = temp128 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp130 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp131 = temp130 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp132 = temp129 - (temp131 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2)))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp133 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp134 = temp133 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp135 = temp132 + (temp134 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp136 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp137 = temp136 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp138 = temp135 - (temp137 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp139 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp140 = temp139 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp141 = temp138 - (temp140 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (14))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp142 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp143 = temp142 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp126) = (temp141 + (temp143 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (14)))));
	LINE_NUMBER(442);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp144 = jint(2);
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp145 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp146 = temp145 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (14)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp147 = temp146 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp148 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp149 = temp148 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp150 = temp147 - (temp149 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3)))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp151 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp152 = temp151 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp153 = temp150 + (temp152 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp154 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp155 = temp154 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (14)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp156 = temp153 - (temp155 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp157 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp158 = temp157 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp159 = temp156 - (temp158 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (15))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp160 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp161 = temp160 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp144) = (temp159 + (temp161 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (15)))));
	LINE_NUMBER(444);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp162 = 6;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp163 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp164 = temp163 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp165 = temp164 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp166 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp167 = temp166 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (14)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp168 = temp165 - (temp167 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3)))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp169 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp170 = temp169 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp171 = temp168 - (temp170 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp172 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp173 = temp172 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (14)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp174 = temp171 + (temp173 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp175 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp176 = temp175 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp177 = temp174 + (temp176 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (15))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp178 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp179 = temp178 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp162) = (temp177 - (temp179 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (15)))));
	LINE_NUMBER(446);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp180 = 10;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp181 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp182 = temp181 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp183 = temp182 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp184 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp185 = temp184 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp186 = temp183 - (temp185 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3)))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp187 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp188 = temp187 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp189 = temp186 + (temp188 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp190 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp191 = temp190 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp192 = temp189 - (temp191 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp193 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp194 = temp193 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp195 = temp192 - (temp194 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (15))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp196 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp197 = temp196 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp180) = (temp195 + (temp197 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (15)))));
	LINE_NUMBER(448);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp198 = 14;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp199 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp200 = temp199 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp201 = temp200 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp202 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp203 = temp202 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp204 = temp201 - (temp203 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2)))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp205 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp206 = temp205 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp207 = temp204 - (temp206 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp208 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp209 = temp208 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp210 = temp207 + (temp209 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp211 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp212 = temp211 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp213 = temp210 + (temp212 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (14))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp214 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp215 = temp214 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp198) = (temp213 - (temp215 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (14)))));
	LINE_NUMBER(450);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp216 = jint(3);
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp217 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp218 = temp217 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp219 = temp218 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp220 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp221 = temp220 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp222 = temp219 - (temp221 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3)))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp223 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp224 = temp223 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp225 = temp222 - (temp224 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp226 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp227 = temp226 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp228 = temp225 + (temp227 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp229 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp230 = temp229 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp231 = temp228 + (temp230 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (11))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp232 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp233 = temp232 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp216) = (temp231 - (temp233 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (11)))));
	LINE_NUMBER(452);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp234 = 7;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp235 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp236 = temp235 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp237 = temp236 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp238 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp239 = temp238 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp240 = temp237 - (temp239 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3)))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp241 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp242 = temp241 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp243 = temp240 + (temp242 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp244 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp245 = temp244 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp246 = temp243 - (temp245 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp247 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp248 = temp247 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp249 = temp246 - (temp248 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (11))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp250 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp251 = temp250 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp234) = (temp249 + (temp251 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (11)))));
	LINE_NUMBER(454);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp252 = 11;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp253 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp254 = temp253 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp255 = temp254 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp256 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp257 = temp256 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp258 = temp255 - (temp257 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3)))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp259 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp260 = temp259 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp261 = temp258 - (temp260 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp262 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp263 = temp262 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp264 = temp261 + (temp263 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp265 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp266 = temp265 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp267 = temp264 + (temp266 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (11))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp268 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp269 = temp268 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp252) = (temp267 - (temp269 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (11)))));
	LINE_NUMBER(456);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	jint temp270 = 15;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp271 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp272 = temp271 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp273 = temp272 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp274 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp275 = temp274 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp276 = temp273 - (temp275 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2)))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp277 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp278 = temp277 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp279 = temp276 + (temp278 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp280 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp281 = temp280 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp282 = temp279 - (temp281 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp283 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp284 = temp283 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp285 = temp282 - (temp284 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp286 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp287 = temp286 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp270) = (temp285 + (temp287 * ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10)))));
	LINE_NUMBER(458);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp288 = jint(0);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp288) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)))) * (frame[2].f));
	LINE_NUMBER(459);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp289 = jint(4);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp289) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4)))) * (frame[2].f));
	LINE_NUMBER(460);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp290 = 8;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp290) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8))) * (frame[2].f));
	LINE_NUMBER(461);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp291 = 12;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp291) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12))) * (frame[2].f));
	LINE_NUMBER(462);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp292 = jint(1);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp292) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1)))) * (frame[2].f));
	LINE_NUMBER(463);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp293 = jint(5);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp293) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5)))) * (frame[2].f));
	LINE_NUMBER(464);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp294 = 9;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp294) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9))) * (frame[2].f));
	LINE_NUMBER(465);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp295 = 13;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp295) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13))) * (frame[2].f));
	LINE_NUMBER(466);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp296 = jint(2);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp296) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2)))) * (frame[2].f));
	LINE_NUMBER(467);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp297 = 6;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp297) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6))) * (frame[2].f));
	LINE_NUMBER(468);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp298 = 10;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp298) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10))) * (frame[2].f));
	LINE_NUMBER(469);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp299 = 14;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp299) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (14))) * (frame[2].f));
	LINE_NUMBER(470);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp300 = jint(3);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp300) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3)))) * (frame[2].f));
	LINE_NUMBER(471);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp301 = 7;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp301) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7))) * (frame[2].f));
	LINE_NUMBER(472);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp302 = 11;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp302) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (11))) * (frame[2].f));
	LINE_NUMBER(473);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp303 = 15;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp303) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (15))) * (frame[2].f));
	LINE_NUMBER(474);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Mat3D_det_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:det", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(479);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp1 = temp0 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp2 = temp1 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp3 = temp2 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp4 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp5 = temp4 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp6 = temp5 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp7 = temp3 - (temp6 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp8 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp9 = temp8 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp10 = temp9 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp11 = temp7 - (temp10 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp12 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp13 = temp12 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp14 = temp13 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp15 = temp11 + (temp14 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp16 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp17 = temp16 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp18 = temp17 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp19 = temp15 + (temp18 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp20 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp21 = temp20 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp22 = temp21 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp23 = temp19 - (temp22 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (12))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp24 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp25 = temp24 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp26 = temp25 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp27 = temp23 - (temp26 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp28 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp29 = temp28 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp30 = temp29 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp31 = temp27 + (temp30 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp32 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp33 = temp32 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp34 = temp33 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp35 = temp31 + (temp34 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp36 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp37 = temp36 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp38 = temp37 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp39 = temp35 - (temp38 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp40 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp41 = temp40 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp42 = temp41 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp43 = temp39 - (temp42 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp44 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp45 = temp44 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp46 = temp45 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp47 = temp43 + (temp46 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (13))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp48 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp49 = temp48 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp50 = temp49 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp51 = temp47 + (temp50 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp52 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp53 = temp52 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp54 = temp53 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp55 = temp51 - (temp54 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp56 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp57 = temp56 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp58 = temp57 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp59 = temp55 - (temp58 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp60 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp61 = temp60 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp62 = temp61 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp63 = temp59 + (temp62 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp64 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp65 = temp64 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp66 = temp65 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp67 = temp63 + (temp66 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp68 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp69 = temp68 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp70 = temp69 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (11)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp71 = temp67 - (temp70 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (14))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp72 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp73 = temp72 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp74 = temp73 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp75 = temp71 - (temp74 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp76 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp77 = temp76 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp78 = temp77 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp79 = temp75 + (temp78 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp80 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp81 = temp80 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp82 = temp81 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp83 = temp79 + (temp82 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp84 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp85 = temp84 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp86 = temp85 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp87 = temp83 - (temp86 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp88 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp89 = temp88 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp90 = temp89 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp91 = temp87 - (temp90 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp92 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp93 = temp92 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp94 = temp93 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	popStackFrame(ctx);
	return (temp91 + (temp94 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (15)))));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Mat3D_det3x3_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:det3x3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(492);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp1 = temp0 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp2 = temp1 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp3 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp4 = temp3 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp5 = temp2 + (temp4 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp6 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp7 = temp6 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp8 = temp5 + (temp7 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp9 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp10 = temp9 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp11 = temp8 - (temp10 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp12 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp13 = temp12 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp14 = temp11 - (temp13 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp15 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp16 = temp15 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	popStackFrame(ctx);
	return (temp14 - (temp16 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))))));
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_setToProjection_float_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:setToProjection", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(507);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D])(ctx, (frame[0].o));
	LINE_NUMBER(508);
	jdouble temp0 = jdouble(1);
	jdouble temp1 = (jdouble)SM_java_lang_Math_tan_double_R_double(ctx, (((jdouble((frame[3].f))) * (jdouble(0.017453292519943295))) / (jdouble(2.0))));
	frame[5].f = (jfloat((temp0 / temp1)));
	LINE_NUMBER(509);
	frame[6].f = (((frame[2].f) + (frame[1].f)) / ((frame[1].f) - (frame[2].f)));
	LINE_NUMBER(510);
	frame[7].f = ((((jfloat(2)) * (frame[2].f)) * (frame[1].f)) / ((frame[1].f) - (frame[2].f)));
	LINE_NUMBER(511);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = ((frame[5].f) / (frame[4].f));
	LINE_NUMBER(512);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (jfloat(0));
	LINE_NUMBER(513);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (jfloat(0));
	LINE_NUMBER(514);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(0));
	LINE_NUMBER(515);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (jfloat(0));
	LINE_NUMBER(516);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (frame[5].f);
	LINE_NUMBER(517);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (jfloat(0));
	LINE_NUMBER(518);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (jfloat(0));
	LINE_NUMBER(519);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (jfloat(0));
	LINE_NUMBER(520);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (jfloat(0));
	LINE_NUMBER(521);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (frame[6].f);
	LINE_NUMBER(522);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (jfloat(-1.0f));
	LINE_NUMBER(523);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (jfloat(0));
	LINE_NUMBER(524);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (jfloat(0));
	LINE_NUMBER(525);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (frame[7].f);
	LINE_NUMBER(526);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (jfloat(0));
	LINE_NUMBER(528);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_setToProjection_float_float_float_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:setToProjection", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(540);
	frame[7].f = (((jfloat(2)) * (frame[5].f)) / ((frame[2].f) - (frame[1].f)));
	LINE_NUMBER(541);
	frame[8].f = (((jfloat(2)) * (frame[5].f)) / ((frame[4].f) - (frame[3].f)));
	LINE_NUMBER(542);
	frame[9].f = (((frame[2].f) + (frame[1].f)) / ((frame[2].f) - (frame[1].f)));
	LINE_NUMBER(543);
	frame[10].f = (((frame[4].f) + (frame[3].f)) / ((frame[4].f) - (frame[3].f)));
	LINE_NUMBER(544);
	frame[11].f = (((frame[6].f) + (frame[5].f)) / ((frame[5].f) - (frame[6].f)));
	LINE_NUMBER(545);
	frame[12].f = ((((jfloat(2)) * (frame[6].f)) * (frame[5].f)) / ((frame[5].f) - (frame[6].f)));
	LINE_NUMBER(546);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[7].f);
	LINE_NUMBER(547);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (jfloat(0));
	LINE_NUMBER(548);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (jfloat(0));
	LINE_NUMBER(549);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(0));
	LINE_NUMBER(550);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (jfloat(0));
	LINE_NUMBER(551);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (frame[8].f);
	LINE_NUMBER(552);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (jfloat(0));
	LINE_NUMBER(553);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (jfloat(0));
	LINE_NUMBER(554);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (frame[9].f);
	LINE_NUMBER(555);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (frame[10].f);
	LINE_NUMBER(556);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (frame[11].f);
	LINE_NUMBER(557);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (jfloat(-1.0f));
	LINE_NUMBER(558);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (jfloat(0));
	LINE_NUMBER(559);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (jfloat(0));
	LINE_NUMBER(560);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (frame[12].f);
	LINE_NUMBER(561);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (jfloat(0));
	LINE_NUMBER(563);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_setToOrtho2D_float_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:setToOrtho2D", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(576);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_setToOrtho_float_float_float_float_float_float_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_setToOrtho_float_float_float_float_float_float_R_arc_math_geom_Mat3D])(ctx, (frame[0].o), (frame[1].f), ((frame[1].f) + (frame[3].f)), (frame[2].f), ((frame[2].f) + (frame[4].f)), (jfloat(0)), (jfloat(1)));
	LINE_NUMBER(577);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_setToOrtho2D_float_float_float_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:setToOrtho2D", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(592);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_setToOrtho_float_float_float_float_float_float_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_setToOrtho_float_float_float_float_float_float_R_arc_math_geom_Mat3D])(ctx, (frame[0].o), (frame[1].f), ((frame[1].f) + (frame[3].f)), (frame[2].f), ((frame[2].f) + (frame[4].f)), (frame[5].f), (frame[6].f));
	LINE_NUMBER(593);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_setToOrtho_float_float_float_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:setToOrtho", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(609);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D])(ctx, (frame[0].o));
	LINE_NUMBER(610);
	frame[7].f = ((jfloat(2)) / ((frame[2].f) - (frame[1].f)));
	LINE_NUMBER(611);
	frame[8].f = ((jfloat(2)) / ((frame[4].f) - (frame[3].f)));
	LINE_NUMBER(612);
	frame[9].f = ((jfloat(-2.0f)) / ((frame[6].f) - (frame[5].f)));
	LINE_NUMBER(614);
	frame[10].f = ((-((frame[2].f) + (frame[1].f))) / ((frame[2].f) - (frame[1].f)));
	LINE_NUMBER(615);
	frame[11].f = ((-((frame[4].f) + (frame[3].f))) / ((frame[4].f) - (frame[3].f)));
	LINE_NUMBER(616);
	frame[12].f = ((-((frame[6].f) + (frame[5].f))) / ((frame[6].f) - (frame[5].f)));
	LINE_NUMBER(618);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[7].f);
	LINE_NUMBER(619);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (jfloat(0));
	LINE_NUMBER(620);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (jfloat(0));
	LINE_NUMBER(621);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(0));
	LINE_NUMBER(622);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (jfloat(0));
	LINE_NUMBER(623);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (frame[8].f);
	LINE_NUMBER(624);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (jfloat(0));
	LINE_NUMBER(625);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (jfloat(0));
	LINE_NUMBER(626);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (jfloat(0));
	LINE_NUMBER(627);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (jfloat(0));
	LINE_NUMBER(628);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (frame[9].f);
	LINE_NUMBER(629);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (jfloat(0));
	LINE_NUMBER(630);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (frame[10].f);
	LINE_NUMBER(631);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (frame[11].f);
	LINE_NUMBER(632);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (frame[12].f);
	LINE_NUMBER(633);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (jfloat(1));
	LINE_NUMBER(635);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_setTranslation_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:setTranslation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(644);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(645);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(646);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z);
	LINE_NUMBER(647);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_setTranslation_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:setTranslation", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(658);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (frame[1].f);
	LINE_NUMBER(659);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (frame[2].f);
	LINE_NUMBER(660);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (frame[3].f);
	LINE_NUMBER(661);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_setToTranslation_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:setToTranslation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(671);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D])(ctx, (frame[0].o));
	LINE_NUMBER(672);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(673);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(674);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z);
	LINE_NUMBER(675);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_setToTranslation_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:setToTranslation", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(687);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D])(ctx, (frame[0].o));
	LINE_NUMBER(688);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (frame[1].f);
	LINE_NUMBER(689);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (frame[2].f);
	LINE_NUMBER(690);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (frame[3].f);
	LINE_NUMBER(691);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_setToTranslationAndScaling_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:setToTranslationAndScaling", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(702);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D])(ctx, (frame[0].o));
	LINE_NUMBER(703);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(704);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(705);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z);
	LINE_NUMBER(706);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_x);
	LINE_NUMBER(707);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_y);
	LINE_NUMBER(708);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_z);
	LINE_NUMBER(709);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_setToTranslationAndScaling_float_float_float_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:setToTranslationAndScaling", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(725);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D])(ctx, (frame[0].o));
	LINE_NUMBER(726);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (frame[1].f);
	LINE_NUMBER(727);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (frame[2].f);
	LINE_NUMBER(728);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (frame[3].f);
	LINE_NUMBER(729);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[4].f);
	LINE_NUMBER(730);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (frame[5].f);
	LINE_NUMBER(731);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (frame[6].f);
	LINE_NUMBER(732);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_setToRotation_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:setToRotation", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(745);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(746);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D])(ctx, (frame[0].o));
	LINE_NUMBER(747);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(749);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_quat;
	sp[1].o = (jobject)((func_arc_math_geom_Quat_set_arc_math_geom_Vec3_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Quat_set_arc_math_geom_Vec3_float_R_arc_math_geom_Quat])(ctx, sp[1].o, (frame[1].o), (frame[2].f));
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_set_arc_math_geom_Quat_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_set_arc_math_geom_Quat_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_setToRotationRad_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:setToRotationRad", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(759);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(760);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D])(ctx, (frame[0].o));
	LINE_NUMBER(761);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(763);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_quat;
	sp[1].o = (jobject)((func_arc_math_geom_Quat_setFromAxisRad_arc_math_geom_Vec3_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Quat_setFromAxisRad_arc_math_geom_Vec3_float_R_arc_math_geom_Quat])(ctx, sp[1].o, (frame[1].o), (frame[2].f));
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_set_arc_math_geom_Quat_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_set_arc_math_geom_Quat_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_setToRotation_float_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:setToRotation", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(775);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(776);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D])(ctx, (frame[0].o));
	LINE_NUMBER(777);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(779);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_quat;
	sp[1].o = (jobject)((func_arc_math_geom_Quat_setFromAxis_float_float_float_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Quat_setFromAxis_float_float_float_float_R_arc_math_geom_Quat])(ctx, sp[1].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_set_arc_math_geom_Quat_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_set_arc_math_geom_Quat_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_setToRotationRad_float_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:setToRotationRad", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(791);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(792);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D])(ctx, (frame[0].o));
	LINE_NUMBER(793);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(795);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_quat;
	sp[1].o = (jobject)((func_arc_math_geom_Quat_setFromAxisRad_float_float_float_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Quat_setFromAxisRad_float_float_float_float_R_arc_math_geom_Quat])(ctx, sp[1].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_set_arc_math_geom_Quat_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_set_arc_math_geom_Quat_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_setToRotation_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:setToRotation", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(805);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_quat;
	sp[1].o = (jobject)((func_arc_math_geom_Quat_setFromCross_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Quat_setFromCross_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Quat])(ctx, sp[1].o, (frame[1].o), (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_set_arc_math_geom_Quat_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_set_arc_math_geom_Quat_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_setToRotation_float_float_float_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:setToRotation", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(819);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_quat;
	sp[1].o = (jobject)((func_arc_math_geom_Quat_setFromCross_float_float_float_float_float_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Quat_setFromCross_float_float_float_float_float_float_R_arc_math_geom_Quat])(ctx, sp[1].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f));
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_set_arc_math_geom_Quat_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_set_arc_math_geom_Quat_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_setFromEulerAngles_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:setFromEulerAngles", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(830);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_quat;
	sp[0].o = (jobject)((func_arc_math_geom_Quat_setEulerAngles_float_float_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Quat_setEulerAngles_float_float_float_R_arc_math_geom_Quat])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(831);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_quat;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_set_arc_math_geom_Quat_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_set_arc_math_geom_Quat_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_setFromEulerAnglesRad_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:setFromEulerAnglesRad", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(842);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_quat;
	sp[0].o = (jobject)((func_arc_math_geom_Quat_setEulerAnglesRad_float_float_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Quat_setEulerAnglesRad_float_float_float_R_arc_math_geom_Quat])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(843);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_quat;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_set_arc_math_geom_Quat_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_set_arc_math_geom_Quat_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_setToScaling_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:setToScaling", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(852);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D])(ctx, (frame[0].o));
	LINE_NUMBER(853);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(854);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(855);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z);
	LINE_NUMBER(856);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_setToScaling_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:setToScaling", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(867);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D])(ctx, (frame[0].o));
	LINE_NUMBER(868);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[1].f);
	LINE_NUMBER(869);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (frame[2].f);
	LINE_NUMBER(870);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (frame[3].f);
	LINE_NUMBER(871);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_setToLookAt_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:setToLookAt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(886);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_l_vez;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	LINE_NUMBER(887);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_l_vex;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	LINE_NUMBER(888);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_l_vex;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_crs_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_crs_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	LINE_NUMBER(889);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_l_vey;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_l_vex;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_l_vez;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_crs_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_crs_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	LINE_NUMBER(890);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D])(ctx, (frame[0].o));
	LINE_NUMBER(891);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = jint(0);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_l_vex;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(892);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp1 = jint(4);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_l_vex;
	ARRAY_ACCESS(jfloat, sp[0].o, temp1) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(893);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp2 = 8;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_l_vex;
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_z);
	LINE_NUMBER(894);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = jint(1);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_l_vey;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(895);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp4 = jint(5);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_l_vey;
	ARRAY_ACCESS(jfloat, sp[0].o, temp4) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(896);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp5 = 9;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_l_vey;
	ARRAY_ACCESS(jfloat, sp[0].o, temp5) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_z);
	LINE_NUMBER(897);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp6 = jint(2);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_l_vez;
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = (-((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(898);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp7 = 6;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_l_vez;
	ARRAY_ACCESS(jfloat, sp[0].o, temp7) = (-((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(899);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp8 = 10;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_l_vez;
	ARRAY_ACCESS(jfloat, sp[0].o, temp8) = (-((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_z));
	LINE_NUMBER(901);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_setToLookAt_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:setToLookAt", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(915);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmpVec;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(916);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmpVec;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_setToLookAt_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_setToLookAt_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o, (frame[3].o));
	LINE_NUMBER(917);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmpMat;
	sp[1].o = (jobject)((func_arc_math_geom_Mat3D_setToTranslation_float_float_float_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Mat3D_setToTranslation_float_float_float_R_arc_math_geom_Mat3D])(ctx, sp[1].o, (-((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x)), (-((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y)), (-((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z)));
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_mul_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_mul_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(919);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_setToWorld_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:setToWorld", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(927);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmpForward;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	LINE_NUMBER(928);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_right;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmpForward;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_crs_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_crs_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	LINE_NUMBER(929);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmpUp;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_right;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmpForward;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_crs_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_crs_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	LINE_NUMBER(931);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_right;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Mat3D_tmpUp;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[3].o = (jobject)SF_arc_math_geom_Mat3D_tmpForward;
	sp[3].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[3].o, (jfloat(-1.0f)));
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[1].o));
	LINE_NUMBER(932);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(936);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"["_j))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]\n["_j))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]\n["_j))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (14))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]\n["_j))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (11))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (15))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]\n"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_lerp_arc_math_geom_Mat3D_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:lerp", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(948);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (16)) goto label_2;
	}
	{
	LINE_NUMBER(949);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp1 = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[3].i))) * ((jfloat(1)) - (frame[2].f));
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (temp1 + (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[3].i))) * (frame[2].f)));
	LINE_NUMBER(948);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(950);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_avg_arc_math_geom_Mat3D_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:avg", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(961);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmpVec;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_getScale_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_getScale_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(962);
	sp[0].o = frame[1].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmpForward;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_getScale_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_getScale_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(964);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_quat;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_getRotation_arc_math_geom_Quat_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_getRotation_arc_math_geom_Quat_R_arc_math_geom_Quat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(965);
	sp[0].o = frame[1].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_quat2;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_getRotation_arc_math_geom_Quat_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_getRotation_arc_math_geom_Quat_R_arc_math_geom_Quat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(967);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmpUp;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_getTranslation_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_getTranslation_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(968);
	sp[0].o = frame[1].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_right;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_getTranslation_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_getTranslation_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(970);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmpVec;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, (frame[2].f));
	clinit_arc_math_geom_Mat3D(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Mat3D_tmpForward;
	sp[2].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[2].o, ((jfloat(1)) - (frame[2].f)));
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_setToScaling_arc_math_geom_Vec3_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_setToScaling_arc_math_geom_Vec3_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(971);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_quat;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Mat3D_quat2;
	sp[1].o = (jobject)((func_arc_math_geom_Quat_slerp_arc_math_geom_Quat_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Quat_slerp_arc_math_geom_Quat_float_R_arc_math_geom_Quat])(ctx, sp[1].o, sp[2].o, ((jfloat(1)) - (frame[2].f)));
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_rotate_arc_math_geom_Quat_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_rotate_arc_math_geom_Quat_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(972);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmpUp;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, (frame[2].f));
	clinit_arc_math_geom_Mat3D(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Mat3D_right;
	sp[2].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[2].o, ((jfloat(1)) - (frame[2].f)));
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_setTranslation_arc_math_geom_Vec3_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_setTranslation_arc_math_geom_Vec3_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(974);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_avg_Array1_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:avg", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(984);
	frame[2].f = ((jfloat(1)) / (jfloat((((jarray) nullCheck(ctx, (frame[1].o)))->length))));
	LINE_NUMBER(986);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmpVec;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)));
	clinit_arc_math_geom_Mat3D(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Mat3D_tmpUp;
	sp[1].o = (jobject)((func_arc_math_geom_Mat3D_getScale_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Mat3D_getScale_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, (frame[2].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(987);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_quat;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)));
	clinit_arc_math_geom_Mat3D(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Mat3D_quat2;
	sp[1].o = (jobject)((func_arc_math_geom_Mat3D_getRotation_arc_math_geom_Quat_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Mat3D_getRotation_arc_math_geom_Quat_R_arc_math_geom_Quat])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Quat_exp_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Quat_exp_float_R_arc_math_geom_Quat])(ctx, sp[1].o, (frame[2].f));
	sp[0].o = (jobject)((func_arc_math_geom_Quat_set_arc_math_geom_Quat_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Quat_set_arc_math_geom_Quat_R_arc_math_geom_Quat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(988);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmpForward;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)));
	clinit_arc_math_geom_Mat3D(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Mat3D_tmpUp;
	sp[1].o = (jobject)((func_arc_math_geom_Mat3D_getTranslation_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Mat3D_getTranslation_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, (frame[2].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(990);
	frame[3].i = (jint(1));
	}
label_5:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(991);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmpVec;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i));
	clinit_arc_math_geom_Mat3D(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Mat3D_tmpUp;
	sp[1].o = (jobject)((func_arc_math_geom_Mat3D_getScale_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Mat3D_getScale_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, (frame[2].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(992);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_quat;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i));
	clinit_arc_math_geom_Mat3D(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Mat3D_quat2;
	sp[1].o = (jobject)((func_arc_math_geom_Mat3D_getRotation_arc_math_geom_Quat_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Mat3D_getRotation_arc_math_geom_Quat_R_arc_math_geom_Quat])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Quat_exp_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Quat_exp_float_R_arc_math_geom_Quat])(ctx, sp[1].o, (frame[2].f));
	sp[0].o = (jobject)((func_arc_math_geom_Quat_mul_arc_math_geom_Quat_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Quat_mul_arc_math_geom_Quat_R_arc_math_geom_Quat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(993);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmpForward;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i));
	clinit_arc_math_geom_Mat3D(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Mat3D_tmpUp;
	sp[1].o = (jobject)((func_arc_math_geom_Mat3D_getTranslation_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Mat3D_getTranslation_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, (frame[2].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(990);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(995);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_quat;
	sp[0].o = (jobject)((func_arc_math_geom_Quat_nor_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Quat_nor_R_arc_math_geom_Quat])(ctx, sp[0].o);
	LINE_NUMBER(997);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmpVec;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_setToScaling_arc_math_geom_Vec3_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_setToScaling_arc_math_geom_Vec3_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(998);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_quat;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_rotate_arc_math_geom_Quat_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_rotate_arc_math_geom_Quat_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(999);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmpForward;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_setTranslation_arc_math_geom_Vec3_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_setTranslation_arc_math_geom_Vec3_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1001);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_avg_Array1_arc_math_geom_Mat3D_Array1_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:avg", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1013);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmpVec;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)));
	clinit_arc_math_geom_Mat3D(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Mat3D_tmpUp;
	sp[1].o = (jobject)((func_arc_math_geom_Mat3D_getScale_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Mat3D_getScale_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0)))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1014);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_quat;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)));
	clinit_arc_math_geom_Mat3D(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Mat3D_quat2;
	sp[1].o = (jobject)((func_arc_math_geom_Mat3D_getRotation_arc_math_geom_Quat_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Mat3D_getRotation_arc_math_geom_Quat_R_arc_math_geom_Quat])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Quat_exp_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Quat_exp_float_R_arc_math_geom_Quat])(ctx, sp[1].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0)))));
	sp[0].o = (jobject)((func_arc_math_geom_Quat_set_arc_math_geom_Quat_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Quat_set_arc_math_geom_Quat_R_arc_math_geom_Quat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1015);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmpForward;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)));
	clinit_arc_math_geom_Mat3D(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Mat3D_tmpUp;
	sp[1].o = (jobject)((func_arc_math_geom_Mat3D_getTranslation_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Mat3D_getTranslation_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0)))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1017);
	frame[3].i = (jint(1));
	}
label_4:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(1018);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmpVec;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i));
	clinit_arc_math_geom_Mat3D(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Mat3D_tmpUp;
	sp[1].o = (jobject)((func_arc_math_geom_Mat3D_getScale_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Mat3D_getScale_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[3].i))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1019);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_quat;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i));
	clinit_arc_math_geom_Mat3D(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Mat3D_quat2;
	sp[1].o = (jobject)((func_arc_math_geom_Mat3D_getRotation_arc_math_geom_Quat_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Mat3D_getRotation_arc_math_geom_Quat_R_arc_math_geom_Quat])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Quat_exp_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Quat_exp_float_R_arc_math_geom_Quat])(ctx, sp[1].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[3].i))));
	sp[0].o = (jobject)((func_arc_math_geom_Quat_mul_arc_math_geom_Quat_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Quat_mul_arc_math_geom_Quat_R_arc_math_geom_Quat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1020);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmpForward;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i));
	clinit_arc_math_geom_Mat3D(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Mat3D_tmpUp;
	sp[1].o = (jobject)((func_arc_math_geom_Mat3D_getTranslation_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Mat3D_getTranslation_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[3].i))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1017);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1022);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_quat;
	sp[0].o = (jobject)((func_arc_math_geom_Quat_nor_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Quat_nor_R_arc_math_geom_Quat])(ctx, sp[0].o);
	LINE_NUMBER(1024);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmpVec;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_setToScaling_arc_math_geom_Vec3_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_setToScaling_arc_math_geom_Vec3_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1025);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_quat;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_rotate_arc_math_geom_Quat_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_rotate_arc_math_geom_Quat_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1026);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmpForward;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_setTranslation_arc_math_geom_Vec3_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_setTranslation_arc_math_geom_Vec3_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1028);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_set_arc_math_Mat_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1036);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0))));
	LINE_NUMBER(1037);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp1) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))));
	LINE_NUMBER(1038);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp2 = jint(2);
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))));
	LINE_NUMBER(1039);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(0));
	LINE_NUMBER(1040);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = jint(4);
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3))));
	LINE_NUMBER(1041);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp4 = jint(5);
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp4) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4))));
	LINE_NUMBER(1042);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp5 = 6;
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp5) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5))));
	LINE_NUMBER(1043);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (jfloat(0));
	LINE_NUMBER(1044);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (jfloat(0));
	LINE_NUMBER(1045);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (jfloat(0));
	LINE_NUMBER(1046);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (jfloat(1));
	LINE_NUMBER(1047);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (jfloat(0));
	LINE_NUMBER(1048);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp6 = 12;
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6)));
	LINE_NUMBER(1049);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp7 = 13;
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp7) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7)));
	LINE_NUMBER(1050);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (jfloat(0));
	LINE_NUMBER(1051);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp8 = 15;
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp8) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8)));
	LINE_NUMBER(1052);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_set_arc_math_Affine2_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1068);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m00);
	LINE_NUMBER(1069);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m10);
	LINE_NUMBER(1070);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (jfloat(0));
	LINE_NUMBER(1071);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(0));
	LINE_NUMBER(1072);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m01);
	LINE_NUMBER(1073);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m11);
	LINE_NUMBER(1074);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (jfloat(0));
	LINE_NUMBER(1075);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (jfloat(0));
	LINE_NUMBER(1076);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (jfloat(0));
	LINE_NUMBER(1077);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (jfloat(0));
	LINE_NUMBER(1078);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (jfloat(1));
	LINE_NUMBER(1079);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (jfloat(0));
	LINE_NUMBER(1080);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m02);
	LINE_NUMBER(1081);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m12);
	LINE_NUMBER(1082);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (jfloat(0));
	LINE_NUMBER(1083);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (jfloat(1));
	LINE_NUMBER(1084);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_setAsAffine_arc_math_Affine2_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:setAsAffine", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1101);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m00);
	LINE_NUMBER(1102);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m10);
	LINE_NUMBER(1103);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m01);
	LINE_NUMBER(1104);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m11);
	LINE_NUMBER(1105);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m02);
	LINE_NUMBER(1106);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m12);
	LINE_NUMBER(1107);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_setAsAffine_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:setAsAffine", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1123);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0))));
	LINE_NUMBER(1124);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp1) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))));
	LINE_NUMBER(1125);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp2 = jint(4);
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4))));
	LINE_NUMBER(1126);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = jint(5);
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5))));
	LINE_NUMBER(1127);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp4 = 12;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp4) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12)));
	LINE_NUMBER(1128);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp5 = 13;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[1].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp5) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13)));
	LINE_NUMBER(1129);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_scl_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:scl", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1133);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(1134);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = jint(5);
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(1135);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp6 = 10;
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp6)) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z));
	LINE_NUMBER(1136);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_scl_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:scl", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(1140);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) * (frame[1].f));
	LINE_NUMBER(1141);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = jint(5);
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) * (frame[2].f));
	LINE_NUMBER(1142);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp6 = 10;
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp6)) * (frame[3].f));
	LINE_NUMBER(1143);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_scl_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:scl", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1147);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) * (frame[1].f));
	LINE_NUMBER(1148);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = jint(5);
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) * (frame[1].f));
	LINE_NUMBER(1149);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp6 = 10;
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp6)) * (frame[1].f));
	LINE_NUMBER(1150);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_getTranslation_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:getTranslation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1154);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12)));
	LINE_NUMBER(1155);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13)));
	LINE_NUMBER(1156);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (14)));
	LINE_NUMBER(1157);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_getRotation_arc_math_geom_Quat_boolean_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:getRotation", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1167);
	sp[0].o = (jobject)((func_arc_math_geom_Quat_setFromMatrix_boolean_arc_math_geom_Mat3D_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Quat_setFromMatrix_boolean_arc_math_geom_Mat3D_R_arc_math_geom_Quat])(ctx, (frame[1].o), (frame[2].i), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_getRotation_arc_math_geom_Quat_R_arc_math_geom_Quat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:getRotation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1176);
	sp[0].o = (jobject)((func_arc_math_geom_Quat_setFromMatrix_arc_math_geom_Mat3D_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Quat_setFromMatrix_arc_math_geom_Mat3D_R_arc_math_geom_Quat])(ctx, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Mat3D_getScaleXSquared_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:getScaleXSquared", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1181);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp1 = temp0 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp2 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp3 = temp1 + (temp2 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp4 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	popStackFrame(ctx);
	return (temp3 + (temp4 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)))));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Mat3D_getScaleYSquared_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:getScaleYSquared", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1186);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp1 = temp0 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp2 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp3 = temp1 + (temp2 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5)))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp4 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	popStackFrame(ctx);
	return (temp3 + (temp4 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9)))));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Mat3D_getScaleZSquared_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:getScaleZSquared", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1191);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp1 = temp0 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp2 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp3 = temp1 + (temp2 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6))));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp4 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10));
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	popStackFrame(ctx);
	return (temp3 + (temp4 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10)))));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Mat3D_getScaleX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:getScaleX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1196);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)))));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8))));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)))));
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1197);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Mat3D_getScaleXSquared_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_getScaleXSquared_R_float])(ctx, (frame[0].o));
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(temp0)));
	jfloat temp2 = jfloat(temp1);
	sp[0].f = temp2;
	sp += 1;
	}
label_2:;
	LINE_NUMBER(1196);
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Mat3D_getScaleY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:getScaleY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1202);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)))));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9))));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5)))));
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1203);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Mat3D_getScaleYSquared_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_getScaleYSquared_R_float])(ctx, (frame[0].o));
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(temp0)));
	jfloat temp2 = jfloat(temp1);
	sp[0].f = temp2;
	sp += 1;
	}
label_2:;
	LINE_NUMBER(1202);
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Mat3D_getScaleZ_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:getScaleZ", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1208);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)))));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6))));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10))));
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1209);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Mat3D_getScaleZSquared_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_getScaleZSquared_R_float])(ctx, (frame[0].o));
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(temp0)));
	jfloat temp2 = jfloat(temp1);
	sp[0].f = temp2;
	sp += 1;
	}
label_2:;
	LINE_NUMBER(1208);
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_getScale_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:getScale", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1217);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Mat3D_getScaleX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_getScaleX_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Mat3D_getScaleY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_getScaleY_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((func_arc_math_geom_Mat3D_getScaleZ_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_getScaleZ_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, temp0, temp1, temp2);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_toNormalMatrix_R_arc_math_geom_Mat3D(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:toNormalMatrix", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1222);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (jfloat(0));
	LINE_NUMBER(1223);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (jfloat(0));
	LINE_NUMBER(1224);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (jfloat(0));
	LINE_NUMBER(1225);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_inv_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_inv_R_arc_math_geom_Mat3D])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_tra_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_tra_R_arc_math_geom_Mat3D])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_math_geom_Mat3D_mul_Array1_float_Array1_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:mul", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Mat3D(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1235);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3))))));
	LINE_NUMBER(1236);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(4))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (6))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (7)))));
	LINE_NUMBER(1237);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (8)))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (9))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (10))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (11)))));
	LINE_NUMBER(1238);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (12)))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (13))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (14))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (15)))));
	LINE_NUMBER(1239);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3))))));
	LINE_NUMBER(1240);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(4))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (6))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (7)))));
	LINE_NUMBER(1241);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (8)))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (9))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (10))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (11)))));
	LINE_NUMBER(1242);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (12)))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (13))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (14))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (15)))));
	LINE_NUMBER(1243);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3))))));
	LINE_NUMBER(1244);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(4))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (6))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (7)))));
	LINE_NUMBER(1245);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (8)))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (9))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (10))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (11)))));
	LINE_NUMBER(1246);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (12)))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (13))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (14))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (15)))));
	LINE_NUMBER(1247);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3))))));
	LINE_NUMBER(1248);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(4))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (6))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (7)))));
	LINE_NUMBER(1249);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (8)))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (9))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (10))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (11)))));
	LINE_NUMBER(1250);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (12)))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (13))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (14))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (15)))));
	LINE_NUMBER(1251);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[0].o), (jint(0)), (16));
	LINE_NUMBER(1252);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_math_geom_Mat3D_mulVec_Array1_float_Array1_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:mulVec", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Mat3D(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1263);
	frame[2].f = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))));
	LINE_NUMBER(1264);
	frame[3].f = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))));
	LINE_NUMBER(1265);
	frame[4].f = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14))));
	LINE_NUMBER(1266);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))) = (frame[2].f);
	LINE_NUMBER(1267);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))) = (frame[3].f);
	LINE_NUMBER(1268);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2))) = (frame[4].f);
	LINE_NUMBER(1269);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_math_geom_Mat3D_prj_Array1_float_Array1_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:prj", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Mat3D(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1280);
	frame[2].f = ((jfloat(1)) / ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15)))));
	LINE_NUMBER(1281);
	frame[3].f = (((((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12)))) * (frame[2].f));
	LINE_NUMBER(1282);
	frame[4].f = (((((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13)))) * (frame[2].f));
	LINE_NUMBER(1283);
	frame[5].f = (((((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))) * (frame[2].f));
	LINE_NUMBER(1284);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))) = (frame[3].f);
	LINE_NUMBER(1285);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))) = (frame[4].f);
	LINE_NUMBER(1286);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2))) = (frame[5].f);
	LINE_NUMBER(1287);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_math_geom_Mat3D_prj_Array1_float_Array1_float_int_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4) {
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:prj", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Mat3D(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(1301);
	frame[5].i = (frame[2].i);
	LINE_NUMBER(1302);
	frame[6].i = (jint(0));
	}
label_2:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(1303);
	frame[7].f = ((jfloat(1)) / ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[5].i))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (jint(2))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15)))));
	LINE_NUMBER(1304);
	frame[8].f = (((((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[5].i))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (jint(2))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12)))) * (frame[7].f));
	LINE_NUMBER(1305);
	frame[9].f = (((((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[5].i))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (jint(2))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13)))) * (frame[7].f));
	LINE_NUMBER(1306);
	frame[10].f = (((((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[5].i))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (jint(2))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))) * (frame[7].f));
	LINE_NUMBER(1307);
	ARRAY_ACCESS(jfloat, (frame[1].o), (frame[5].i)) = (frame[8].f);
	LINE_NUMBER(1308);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (jint(1)))) = (frame[9].f);
	LINE_NUMBER(1309);
	ARRAY_ACCESS(jfloat, (frame[1].o), ((frame[5].i) + (jint(2)))) = (frame[10].f);
	LINE_NUMBER(1310);
	frame[5].i = ((frame[5].i) + (frame[4].i));
	LINE_NUMBER(1302);
	INST_IINC(6, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(1312);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_math_geom_Mat3D_rot_Array1_float_Array1_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:rot", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Mat3D(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1323);
	frame[2].f = (((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8)))));
	LINE_NUMBER(1324);
	frame[3].f = (((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))));
	LINE_NUMBER(1325);
	frame[4].f = (((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))));
	LINE_NUMBER(1326);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))) = (frame[2].f);
	LINE_NUMBER(1327);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))) = (frame[3].f);
	LINE_NUMBER(1328);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2))) = (frame[4].f);
	LINE_NUMBER(1329);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_geom_Mat3D_inv_Array1_float_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:inv", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Mat3D(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1338);
	jfloat temp0 = (jfloat)SM_arc_math_geom_Mat3D_det_Array1_float_R_float(ctx, (frame[0].o));
	frame[1].f = temp0;
	LINE_NUMBER(1339);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(1340);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7)))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15)))));
	LINE_NUMBER(1342);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7)))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15)))));
	LINE_NUMBER(1344);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7)))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15)))));
	LINE_NUMBER(1346);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))));
	LINE_NUMBER(1348);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15)))));
	LINE_NUMBER(1350);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15)))));
	LINE_NUMBER(1352);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15)))));
	LINE_NUMBER(1354);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))));
	LINE_NUMBER(1356);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15)))));
	LINE_NUMBER(1358);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15)))));
	LINE_NUMBER(1360);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15)))));
	LINE_NUMBER(1362);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14)))));
	LINE_NUMBER(1364);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11)))));
	LINE_NUMBER(1366);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11)))));
	LINE_NUMBER(1368);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11)))));
	LINE_NUMBER(1370);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))));
	LINE_NUMBER(1372);
	frame[2].f = ((jfloat(1)) / (frame[1].f));
	LINE_NUMBER(1373);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0)))) * (frame[2].f));
	LINE_NUMBER(1374);
	sp[0].o = frame[0].o;
	jint temp1 = jint(4);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp1) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4)))) * (frame[2].f));
	LINE_NUMBER(1375);
	sp[0].o = frame[0].o;
	jint temp2 = 8;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8))) * (frame[2].f));
	LINE_NUMBER(1376);
	sp[0].o = frame[0].o;
	jint temp3 = 12;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12))) * (frame[2].f));
	LINE_NUMBER(1377);
	sp[0].o = frame[0].o;
	jint temp4 = jint(1);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp4) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1)))) * (frame[2].f));
	LINE_NUMBER(1378);
	sp[0].o = frame[0].o;
	jint temp5 = jint(5);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp5) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5)))) * (frame[2].f));
	LINE_NUMBER(1379);
	sp[0].o = frame[0].o;
	jint temp6 = 9;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9))) * (frame[2].f));
	LINE_NUMBER(1380);
	sp[0].o = frame[0].o;
	jint temp7 = 13;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp7) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13))) * (frame[2].f));
	LINE_NUMBER(1381);
	sp[0].o = frame[0].o;
	jint temp8 = jint(2);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp8) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2)))) * (frame[2].f));
	LINE_NUMBER(1382);
	sp[0].o = frame[0].o;
	jint temp9 = 6;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp9) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6))) * (frame[2].f));
	LINE_NUMBER(1383);
	sp[0].o = frame[0].o;
	jint temp10 = 10;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp10) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10))) * (frame[2].f));
	LINE_NUMBER(1384);
	sp[0].o = frame[0].o;
	jint temp11 = 14;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp11) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (14))) * (frame[2].f));
	LINE_NUMBER(1385);
	sp[0].o = frame[0].o;
	jint temp12 = jint(3);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp12) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(3)))) * (frame[2].f));
	LINE_NUMBER(1386);
	sp[0].o = frame[0].o;
	jint temp13 = 7;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp13) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7))) * (frame[2].f));
	LINE_NUMBER(1387);
	sp[0].o = frame[0].o;
	jint temp14 = 11;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp14) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (11))) * (frame[2].f));
	LINE_NUMBER(1388);
	sp[0].o = frame[0].o;
	jint temp15 = 15;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, temp15) = (((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (15))) * (frame[2].f));
	LINE_NUMBER(1389);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_geom_Mat3D_det_Array1_float_R_float(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:det", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Mat3D(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1399);
	popStackFrame(ctx);
	return ((((((((((((((((((((((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12)))) - (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))))) - (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))))) + (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))))) + (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))))) - (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (12))))) - (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))))) + (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))))) + (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))))) - (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))))) - (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))))) + (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (13))))) + (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14))))) - (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14))))) - (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14))))) + (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14))))) + (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14))))) - (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (11)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (14))))) - (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))))) + (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))))) + (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))))) - (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (9)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))))) - (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15))))) + (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (10)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (15)))));
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_translate_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:translate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1416);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_translate_float_float_float_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_translate_float_float_float_R_arc_math_geom_Mat3D])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_translate_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:translate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(1428);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(1));
	LINE_NUMBER(1429);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (jfloat(0));
	LINE_NUMBER(1430);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (jfloat(0));
	LINE_NUMBER(1431);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (frame[1].f);
	LINE_NUMBER(1432);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (jfloat(0));
	LINE_NUMBER(1433);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (jfloat(1));
	LINE_NUMBER(1434);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (jfloat(0));
	LINE_NUMBER(1435);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (frame[2].f);
	LINE_NUMBER(1436);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (jfloat(0));
	LINE_NUMBER(1437);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (jfloat(0));
	LINE_NUMBER(1438);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (jfloat(1));
	LINE_NUMBER(1439);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (frame[3].f);
	LINE_NUMBER(1440);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(0));
	LINE_NUMBER(1441);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (jfloat(0));
	LINE_NUMBER(1442);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (jfloat(0));
	LINE_NUMBER(1443);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (jfloat(1));
	LINE_NUMBER(1445);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	SM_arc_math_geom_Mat3D_mul_Array1_float_Array1_float(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1446);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:rotate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1457);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(1458);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_quat;
	sp[0].o = (jobject)((func_arc_math_geom_Quat_set_arc_math_geom_Vec3_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Quat_set_arc_math_geom_Vec3_float_R_arc_math_geom_Quat])(ctx, sp[0].o, (frame[1].o), (frame[2].f));
	LINE_NUMBER(1459);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_quat;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_rotate_arc_math_geom_Quat_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_rotate_arc_math_geom_Quat_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_rotateRad_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:rotateRad", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1470);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(1471);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_quat;
	sp[0].o = (jobject)((func_arc_math_geom_Quat_setFromAxisRad_arc_math_geom_Vec3_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Quat_setFromAxisRad_arc_math_geom_Vec3_float_R_arc_math_geom_Quat])(ctx, sp[0].o, (frame[1].o), (frame[2].f));
	LINE_NUMBER(1472);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_quat;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_rotate_arc_math_geom_Quat_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_rotate_arc_math_geom_Quat_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_rotate_float_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:rotate", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(1485);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(1486);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_quat;
	sp[0].o = (jobject)((func_arc_math_geom_Quat_setFromAxis_float_float_float_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Quat_setFromAxis_float_float_float_float_R_arc_math_geom_Quat])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(1487);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_quat;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_rotate_arc_math_geom_Quat_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_rotate_arc_math_geom_Quat_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_rotateRad_float_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:rotateRad", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(1500);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(1501);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_quat;
	sp[0].o = (jobject)((func_arc_math_geom_Quat_setFromAxisRad_float_float_float_float_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Quat_setFromAxisRad_float_float_float_float_R_arc_math_geom_Quat])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(1502);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_quat;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_rotate_arc_math_geom_Quat_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_rotate_arc_math_geom_Quat_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_rotate_arc_math_geom_Quat_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:rotate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1511);
	sp[0].o = frame[1].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	((func_arc_math_geom_Quat_toMatrix_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Quat_toMatrix_Array1_float])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1512);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	SM_arc_math_geom_Mat3D_mul_Array1_float_Array1_float(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1513);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_rotate_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:rotate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1523);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_quat;
	sp[1].o = (jobject)((func_arc_math_geom_Quat_setFromCross_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Quat) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Quat_setFromCross_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Quat])(ctx, sp[1].o, (frame[1].o), (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_rotate_arc_math_geom_Quat_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_rotate_arc_math_geom_Quat_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_scale_arc_math_geom_Vec3_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:scale", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1527);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_scale_float_float_float_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Mat3D_scale_float_float_float_R_arc_math_geom_Mat3D])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Mat3D_scale_float_float_float_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:scale", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(1539);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[1].f);
	LINE_NUMBER(1540);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (jfloat(0));
	LINE_NUMBER(1541);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (jfloat(0));
	LINE_NUMBER(1542);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (12)) = (jfloat(0));
	LINE_NUMBER(1543);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (jfloat(0));
	LINE_NUMBER(1544);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (frame[2].f);
	LINE_NUMBER(1545);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (9)) = (jfloat(0));
	LINE_NUMBER(1546);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (13)) = (jfloat(0));
	LINE_NUMBER(1547);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (jfloat(0));
	LINE_NUMBER(1548);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (jfloat(0));
	LINE_NUMBER(1549);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (10)) = (frame[3].f);
	LINE_NUMBER(1550);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (14)) = (jfloat(0));
	LINE_NUMBER(1551);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(0));
	LINE_NUMBER(1552);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (jfloat(0));
	LINE_NUMBER(1553);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (11)) = (jfloat(0));
	LINE_NUMBER(1554);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	ARRAY_ACCESS(jfloat, sp[0].o, (15)) = (jfloat(1));
	LINE_NUMBER(1556);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	clinit_arc_math_geom_Mat3D(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Mat3D_tmp2;
	SM_arc_math_geom_Mat3D_mul_Array1_float_Array1_float(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1557);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_Mat3D_extract4x3Matrix_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:extract4x3Matrix", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1565);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(0))));
	LINE_NUMBER(1566);
	sp[0].o = frame[1].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp1) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(1))));
	LINE_NUMBER(1567);
	sp[0].o = frame[1].o;
	jint temp2 = jint(2);
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(2))));
	LINE_NUMBER(1568);
	sp[0].o = frame[1].o;
	jint temp3 = jint(3);
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(4))));
	LINE_NUMBER(1569);
	sp[0].o = frame[1].o;
	jint temp4 = jint(4);
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp4) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (jint(5))));
	LINE_NUMBER(1570);
	sp[0].o = frame[1].o;
	jint temp5 = jint(5);
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp5) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6)));
	LINE_NUMBER(1571);
	sp[0].o = frame[1].o;
	jint temp6 = 6;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (8)));
	LINE_NUMBER(1572);
	sp[0].o = frame[1].o;
	jint temp7 = 7;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp7) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (9)));
	LINE_NUMBER(1573);
	sp[0].o = frame[1].o;
	jint temp8 = 8;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp8) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (10)));
	LINE_NUMBER(1574);
	sp[0].o = frame[1].o;
	jint temp9 = 9;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp9) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (12)));
	LINE_NUMBER(1575);
	sp[0].o = frame[1].o;
	jint temp10 = 10;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp10) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (13)));
	LINE_NUMBER(1576);
	sp[0].o = frame[1].o;
	jint temp11 = 11;
	sp[1].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, temp11) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (14)));
	LINE_NUMBER(1577);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Mat3D_hasRotationOrScaling_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:hasRotationOrScaling", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1581);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)))), (jfloat(1)));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5)))), (jfloat(1)));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (10))), (jfloat(1)));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)));
	LINE_NUMBER(1582);
	jint temp1 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8))));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)))));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (9))));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)));
	LINE_NUMBER(1583);
	jint temp1 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6))));
	if (temp0 != 0) goto label_4;
	}
label_1:;
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	LINE_NUMBER(1581);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Mat3D_prj_arc_math_geom_Vec3_arc_math_geom_Mat3D_R_arc_math_geom_Vec3(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:prj", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Mat3D(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1593);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[1].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1594);
	frame[3].f = ((jfloat(1)) / ((((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (7))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (11))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (15)))));
	LINE_NUMBER(1595);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (((((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4)))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (8))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (12)))) * (frame[3].f)), (((((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5)))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (9))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (13)))) * (frame[3].f)), (((((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (6))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (10))))) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (14)))) * (frame[3].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Mat3D_rot_arc_math_geom_Vec3_arc_math_geom_Mat3D_R_arc_math_geom_Vec3(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:rot", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Mat3D(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1606);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[1].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1607);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4)))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (8))))), (((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5)))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (9))))), (((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (6))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (10))))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Mat3D_unrotate_arc_math_geom_Vec3_arc_math_geom_Mat3D_R_arc_math_geom_Vec3(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:unrotate", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Mat3D(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1618);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[1].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1619);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1)))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2)))))), (((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5)))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (6))))), (((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (8)))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (9))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (10))))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Mat3D_untransform_arc_math_geom_Vec3_arc_math_geom_Mat3D_R_arc_math_geom_Vec3(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:untransform", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Mat3D(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1631);
	sp[0].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK((frame[1].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1632);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x) - ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (12))));
	LINE_NUMBER(1633);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y) - ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (12))));
	LINE_NUMBER(1634);
	sp[0].o = frame[0].o;
	((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z) - ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (12))));
	LINE_NUMBER(1635);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1)))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2)))))), (((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5)))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (6))))), (((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (8)))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (9))))) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (10))))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_math_geom_Mat3D(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_math_geom_Mat3D_M00 = jint(0);
	SF_arc_math_geom_Mat3D_M01 = jint(4);
	SF_arc_math_geom_Mat3D_M02 = jint(8);
	SF_arc_math_geom_Mat3D_M03 = jint(12);
	SF_arc_math_geom_Mat3D_M10 = jint(1);
	SF_arc_math_geom_Mat3D_M11 = jint(5);
	SF_arc_math_geom_Mat3D_M12 = jint(9);
	SF_arc_math_geom_Mat3D_M13 = jint(13);
	SF_arc_math_geom_Mat3D_M20 = jint(2);
	SF_arc_math_geom_Mat3D_M21 = jint(6);
	SF_arc_math_geom_Mat3D_M22 = jint(10);
	SF_arc_math_geom_Mat3D_M23 = jint(14);
	SF_arc_math_geom_Mat3D_M30 = jint(3);
	SF_arc_math_geom_Mat3D_M31 = jint(7);
	SF_arc_math_geom_Mat3D_M32 = jint(11);
	SF_arc_math_geom_Mat3D_M33 = jint(15);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Mat3D:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Mat3D(ctx);
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject) createArray(ctx, &class_float, (16));
	clinit_arc_math_geom_Mat3D(ctx);
	SF_arc_math_geom_Mat3D_tmp = sp[0].o;
	sp[0].o = (jobject) createArray(ctx, &class_float, (16));
	clinit_arc_math_geom_Mat3D(ctx);
	SF_arc_math_geom_Mat3D_tmp2 = sp[0].o;
	LINE_NUMBER(735);
	clinit_arc_math_geom_Quat(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Quat);
	init_arc_math_geom_Quat(ctx, sp[0].o);
	clinit_arc_math_geom_Mat3D(ctx);
	SF_arc_math_geom_Mat3D_quat = sp[0].o;
	LINE_NUMBER(736);
	clinit_arc_math_geom_Quat(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Quat);
	init_arc_math_geom_Quat(ctx, sp[0].o);
	clinit_arc_math_geom_Mat3D(ctx);
	SF_arc_math_geom_Mat3D_quat2 = sp[0].o;
	LINE_NUMBER(874);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_arc_math_geom_Mat3D(ctx);
	SF_arc_math_geom_Mat3D_l_vez = sp[0].o;
	LINE_NUMBER(875);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_arc_math_geom_Mat3D(ctx);
	SF_arc_math_geom_Mat3D_l_vex = sp[0].o;
	LINE_NUMBER(876);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_arc_math_geom_Mat3D(ctx);
	SF_arc_math_geom_Mat3D_l_vey = sp[0].o;
	LINE_NUMBER(904);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_arc_math_geom_Mat3D(ctx);
	SF_arc_math_geom_Mat3D_tmpVec = sp[0].o;
	LINE_NUMBER(905);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Mat3D);
	init_arc_math_geom_Mat3D(ctx, sp[0].o);
	clinit_arc_math_geom_Mat3D(ctx);
	SF_arc_math_geom_Mat3D_tmpMat = sp[0].o;
	LINE_NUMBER(922);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_arc_math_geom_Mat3D(ctx);
	SF_arc_math_geom_Mat3D_right = sp[0].o;
	LINE_NUMBER(923);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_arc_math_geom_Mat3D(ctx);
	SF_arc_math_geom_Mat3D_tmpForward = sp[0].o;
	LINE_NUMBER(924);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_arc_math_geom_Mat3D(ctx);
	SF_arc_math_geom_Mat3D_tmpUp = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_geom_Mat3D[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_math_geom_Mat3D_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_math_geom_Mat3D_set_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_set_Array1_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_set_arc_math_geom_Quat_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_set_float_float_float_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_set_arc_math_geom_Vec3_arc_math_geom_Quat_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_set_float_float_float_float_float_float_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_set_arc_math_geom_Vec3_arc_math_geom_Quat_arc_math_geom_Vec3_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_set_float_float_float_float_float_float_float_float_float_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_cpy_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_trn_arc_math_geom_Vec3_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_trn_float_float_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_getValues_R_Array1_float,
	(void *) M_arc_math_geom_Mat3D_mul_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_mulLeft_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_tra_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_inv_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_det_R_float,
	(void *) M_arc_math_geom_Mat3D_det3x3_R_float,
	(void *) M_arc_math_geom_Mat3D_setToProjection_float_float_float_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_setToProjection_float_float_float_float_float_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_setToOrtho2D_float_float_float_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_setToOrtho2D_float_float_float_float_float_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_setToOrtho_float_float_float_float_float_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_setTranslation_arc_math_geom_Vec3_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_setTranslation_float_float_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_setToTranslation_arc_math_geom_Vec3_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_setToTranslation_float_float_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_setToTranslationAndScaling_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_setToTranslationAndScaling_float_float_float_float_float_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_setToRotation_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_setToRotationRad_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_setToRotation_float_float_float_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_setToRotationRad_float_float_float_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_setToRotation_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_setToRotation_float_float_float_float_float_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_setFromEulerAngles_float_float_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_setFromEulerAnglesRad_float_float_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_setToScaling_arc_math_geom_Vec3_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_setToScaling_float_float_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_setToLookAt_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_setToLookAt_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_setToWorld_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_lerp_arc_math_geom_Mat3D_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_avg_arc_math_geom_Mat3D_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_avg_Array1_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_avg_Array1_arc_math_geom_Mat3D_Array1_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_set_arc_math_Mat_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_set_arc_math_Affine2_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_setAsAffine_arc_math_Affine2_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_setAsAffine_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_scl_arc_math_geom_Vec3_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_scl_float_float_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_scl_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_getTranslation_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Mat3D_getRotation_arc_math_geom_Quat_boolean_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Mat3D_getRotation_arc_math_geom_Quat_R_arc_math_geom_Quat,
	(void *) M_arc_math_geom_Mat3D_getScaleXSquared_R_float,
	(void *) M_arc_math_geom_Mat3D_getScaleYSquared_R_float,
	(void *) M_arc_math_geom_Mat3D_getScaleZSquared_R_float,
	(void *) M_arc_math_geom_Mat3D_getScaleX_R_float,
	(void *) M_arc_math_geom_Mat3D_getScaleY_R_float,
	(void *) M_arc_math_geom_Mat3D_getScaleZ_R_float,
	(void *) M_arc_math_geom_Mat3D_getScale_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Mat3D_toNormalMatrix_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_translate_arc_math_geom_Vec3_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_translate_float_float_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_rotateRad_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_rotate_float_float_float_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_rotateRad_float_float_float_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_rotate_arc_math_geom_Quat_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_rotate_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_scale_arc_math_geom_Vec3_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_scale_float_float_float_R_arc_math_geom_Mat3D,
	(void *) M_arc_math_geom_Mat3D_extract4x3Matrix_Array1_float,
	(void *) M_arc_math_geom_Mat3D_hasRotationOrScaling_R_boolean,
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
	{ "set", "(Larc/math/geom/Mat3D;)Larc/math/geom/Mat3D;" },
	{ "set", "([F)Larc/math/geom/Mat3D;" },
	{ "set", "(Larc/math/geom/Quat;)Larc/math/geom/Mat3D;" },
	{ "set", "(FFFF)Larc/math/geom/Mat3D;" },
	{ "set", "(Larc/math/geom/Vec3;Larc/math/geom/Quat;)Larc/math/geom/Mat3D;" },
	{ "set", "(FFFFFFF)Larc/math/geom/Mat3D;" },
	{ "set", "(Larc/math/geom/Vec3;Larc/math/geom/Quat;Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;" },
	{ "set", "(FFFFFFFFFF)Larc/math/geom/Mat3D;" },
	{ "set", "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;" },
	{ "cpy", "()Larc/math/geom/Mat3D;" },
	{ "trn", "(Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;" },
	{ "trn", "(FFF)Larc/math/geom/Mat3D;" },
	{ "getValues", "()[F" },
	{ "mul", "(Larc/math/geom/Mat3D;)Larc/math/geom/Mat3D;" },
	{ "mulLeft", "(Larc/math/geom/Mat3D;)Larc/math/geom/Mat3D;" },
	{ "tra", "()Larc/math/geom/Mat3D;" },
	{ "idt", "()Larc/math/geom/Mat3D;" },
	{ "inv", "()Larc/math/geom/Mat3D;" },
	{ "det", "()F" },
	{ "det3x3", "()F" },
	{ "setToProjection", "(FFFF)Larc/math/geom/Mat3D;" },
	{ "setToProjection", "(FFFFFF)Larc/math/geom/Mat3D;" },
	{ "setToOrtho2D", "(FFFF)Larc/math/geom/Mat3D;" },
	{ "setToOrtho2D", "(FFFFFF)Larc/math/geom/Mat3D;" },
	{ "setToOrtho", "(FFFFFF)Larc/math/geom/Mat3D;" },
	{ "setTranslation", "(Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;" },
	{ "setTranslation", "(FFF)Larc/math/geom/Mat3D;" },
	{ "setToTranslation", "(Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;" },
	{ "setToTranslation", "(FFF)Larc/math/geom/Mat3D;" },
	{ "setToTranslationAndScaling", "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;" },
	{ "setToTranslationAndScaling", "(FFFFFF)Larc/math/geom/Mat3D;" },
	{ "setToRotation", "(Larc/math/geom/Vec3;F)Larc/math/geom/Mat3D;" },
	{ "setToRotationRad", "(Larc/math/geom/Vec3;F)Larc/math/geom/Mat3D;" },
	{ "setToRotation", "(FFFF)Larc/math/geom/Mat3D;" },
	{ "setToRotationRad", "(FFFF)Larc/math/geom/Mat3D;" },
	{ "setToRotation", "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;" },
	{ "setToRotation", "(FFFFFF)Larc/math/geom/Mat3D;" },
	{ "setFromEulerAngles", "(FFF)Larc/math/geom/Mat3D;" },
	{ "setFromEulerAnglesRad", "(FFF)Larc/math/geom/Mat3D;" },
	{ "setToScaling", "(Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;" },
	{ "setToScaling", "(FFF)Larc/math/geom/Mat3D;" },
	{ "setToLookAt", "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;" },
	{ "setToLookAt", "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;" },
	{ "setToWorld", "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;" },
	{ "lerp", "(Larc/math/geom/Mat3D;F)Larc/math/geom/Mat3D;" },
	{ "avg", "(Larc/math/geom/Mat3D;F)Larc/math/geom/Mat3D;" },
	{ "avg", "([Larc/math/geom/Mat3D;)Larc/math/geom/Mat3D;" },
	{ "avg", "([Larc/math/geom/Mat3D;[F)Larc/math/geom/Mat3D;" },
	{ "set", "(Larc/math/Mat;)Larc/math/geom/Mat3D;" },
	{ "set", "(Larc/math/Affine2;)Larc/math/geom/Mat3D;" },
	{ "setAsAffine", "(Larc/math/Affine2;)Larc/math/geom/Mat3D;" },
	{ "setAsAffine", "(Larc/math/geom/Mat3D;)Larc/math/geom/Mat3D;" },
	{ "scl", "(Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;" },
	{ "scl", "(FFF)Larc/math/geom/Mat3D;" },
	{ "scl", "(F)Larc/math/geom/Mat3D;" },
	{ "getTranslation", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "getRotation", "(Larc/math/geom/Quat;Z)Larc/math/geom/Quat;" },
	{ "getRotation", "(Larc/math/geom/Quat;)Larc/math/geom/Quat;" },
	{ "getScaleXSquared", "()F" },
	{ "getScaleYSquared", "()F" },
	{ "getScaleZSquared", "()F" },
	{ "getScaleX", "()F" },
	{ "getScaleY", "()F" },
	{ "getScaleZ", "()F" },
	{ "getScale", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "toNormalMatrix", "()Larc/math/geom/Mat3D;" },
	{ "translate", "(Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;" },
	{ "translate", "(FFF)Larc/math/geom/Mat3D;" },
	{ "rotate", "(Larc/math/geom/Vec3;F)Larc/math/geom/Mat3D;" },
	{ "rotateRad", "(Larc/math/geom/Vec3;F)Larc/math/geom/Mat3D;" },
	{ "rotate", "(FFFF)Larc/math/geom/Mat3D;" },
	{ "rotateRad", "(FFFF)Larc/math/geom/Mat3D;" },
	{ "rotate", "(Larc/math/geom/Quat;)Larc/math/geom/Mat3D;" },
	{ "rotate", "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;" },
	{ "scale", "(Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;" },
	{ "scale", "(FFF)Larc/math/geom/Mat3D;" },
	{ "extract4x3Matrix", "([F)V" },
	{ "hasRotationOrScaling", "()Z" },
};

static FieldMetadata fields[] {
	{ "M00", &class_int, (intptr_t) &SF_arc_math_geom_Mat3D_M00, "I", 25 },
	{ "M01", &class_int, (intptr_t) &SF_arc_math_geom_Mat3D_M01, "I", 25 },
	{ "M02", &class_int, (intptr_t) &SF_arc_math_geom_Mat3D_M02, "I", 25 },
	{ "M03", &class_int, (intptr_t) &SF_arc_math_geom_Mat3D_M03, "I", 25 },
	{ "M10", &class_int, (intptr_t) &SF_arc_math_geom_Mat3D_M10, "I", 25 },
	{ "M11", &class_int, (intptr_t) &SF_arc_math_geom_Mat3D_M11, "I", 25 },
	{ "M12", &class_int, (intptr_t) &SF_arc_math_geom_Mat3D_M12, "I", 25 },
	{ "M13", &class_int, (intptr_t) &SF_arc_math_geom_Mat3D_M13, "I", 25 },
	{ "M20", &class_int, (intptr_t) &SF_arc_math_geom_Mat3D_M20, "I", 25 },
	{ "M21", &class_int, (intptr_t) &SF_arc_math_geom_Mat3D_M21, "I", 25 },
	{ "M22", &class_int, (intptr_t) &SF_arc_math_geom_Mat3D_M22, "I", 25 },
	{ "M23", &class_int, (intptr_t) &SF_arc_math_geom_Mat3D_M23, "I", 25 },
	{ "M30", &class_int, (intptr_t) &SF_arc_math_geom_Mat3D_M30, "I", 25 },
	{ "M31", &class_int, (intptr_t) &SF_arc_math_geom_Mat3D_M31, "I", 25 },
	{ "M32", &class_int, (intptr_t) &SF_arc_math_geom_Mat3D_M32, "I", 25 },
	{ "M33", &class_int, (intptr_t) &SF_arc_math_geom_Mat3D_M33, "I", 25 },
	{ "tmp", getArrayClass(&class_float, 1), (intptr_t) &SF_arc_math_geom_Mat3D_tmp, "[F", 26 },
	{ "tmp2", getArrayClass(&class_float, 1), (intptr_t) &SF_arc_math_geom_Mat3D_tmp2, "[F", 26 },
	{ "val", getArrayClass(&class_float, 1), offsetof(arc_math_geom_Mat3D, F_val), "[F", 17 },
	{ "quat", &class_arc_math_geom_Quat, (intptr_t) &SF_arc_math_geom_Mat3D_quat, "Larc/math/geom/Quat;", 8 },
	{ "quat2", &class_arc_math_geom_Quat, (intptr_t) &SF_arc_math_geom_Mat3D_quat2, "Larc/math/geom/Quat;", 8 },
	{ "l_vez", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_math_geom_Mat3D_l_vez, "Larc/math/geom/Vec3;", 24 },
	{ "l_vex", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_math_geom_Mat3D_l_vex, "Larc/math/geom/Vec3;", 24 },
	{ "l_vey", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_math_geom_Mat3D_l_vey, "Larc/math/geom/Vec3;", 24 },
	{ "tmpVec", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_math_geom_Mat3D_tmpVec, "Larc/math/geom/Vec3;", 24 },
	{ "tmpMat", &class_arc_math_geom_Mat3D, (intptr_t) &SF_arc_math_geom_Mat3D_tmpMat, "Larc/math/geom/Mat3D;", 24 },
	{ "right", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_math_geom_Mat3D_right, "Larc/math/geom/Vec3;", 24 },
	{ "tmpForward", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_math_geom_Mat3D_tmpForward, "Larc/math/geom/Vec3;", 24 },
	{ "tmpUp", &class_arc_math_geom_Vec3, (intptr_t) &SF_arc_math_geom_Mat3D_tmpUp, "Larc/math/geom/Vec3;", 24 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_geom_Mat3D, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_Mat3D_arc_math_geom_Mat3D, 0, "(Larc/math/geom/Mat3D;)V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_Mat3D_Array1_float, 0, "([F)V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_Mat3D_arc_math_geom_Quat, 0, "(Larc/math/geom/Quat;)V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_Mat3D_arc_math_geom_Vec3_arc_math_geom_Quat_arc_math_geom_Vec3, 0, "(Larc/math/geom/Vec3;Larc/math/geom/Quat;Larc/math/geom/Vec3;)V", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Mat3D_set_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_set_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D, "(Larc/math/geom/Mat3D;)Larc/math/geom/Mat3D;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Mat3D_set_Array1_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_set_Array1_float_R_arc_math_geom_Mat3D, "([F)Larc/math/geom/Mat3D;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Mat3D_set_arc_math_geom_Quat_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_set_arc_math_geom_Quat_R_arc_math_geom_Mat3D, "(Larc/math/geom/Quat;)Larc/math/geom/Mat3D;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Mat3D_set_float_float_float_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_set_float_float_float_float_R_arc_math_geom_Mat3D, "(FFFF)Larc/math/geom/Mat3D;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Mat3D_set_arc_math_geom_Vec3_arc_math_geom_Quat_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_set_arc_math_geom_Vec3_arc_math_geom_Quat_R_arc_math_geom_Mat3D, "(Larc/math/geom/Vec3;Larc/math/geom/Quat;)Larc/math/geom/Mat3D;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Mat3D_set_float_float_float_float_float_float_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_set_float_float_float_float_float_float_float_R_arc_math_geom_Mat3D, "(FFFFFFF)Larc/math/geom/Mat3D;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Mat3D_set_arc_math_geom_Vec3_arc_math_geom_Quat_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_set_arc_math_geom_Vec3_arc_math_geom_Quat_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, "(Larc/math/geom/Vec3;Larc/math/geom/Quat;Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Mat3D_set_float_float_float_float_float_float_float_float_float_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_set_float_float_float_float_float_float_float_float_float_float_R_arc_math_geom_Mat3D, "(FFFFFFFFFF)Larc/math/geom/Mat3D;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Mat3D_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_set_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;", 1 },
	{ "cpy", (intptr_t) M_arc_math_geom_Mat3D_cpy_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_cpy_R_arc_math_geom_Mat3D, "()Larc/math/geom/Mat3D;", 1 },
	{ "trn", (intptr_t) M_arc_math_geom_Mat3D_trn_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_trn_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, "(Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;", 1 },
	{ "trn", (intptr_t) M_arc_math_geom_Mat3D_trn_float_float_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_trn_float_float_float_R_arc_math_geom_Mat3D, "(FFF)Larc/math/geom/Mat3D;", 1 },
	{ "getValues", (intptr_t) M_arc_math_geom_Mat3D_getValues_R_Array1_float, VTABLE_arc_math_geom_Mat3D_getValues_R_Array1_float, "()[F", 1 },
	{ "mul", (intptr_t) M_arc_math_geom_Mat3D_mul_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_mul_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D, "(Larc/math/geom/Mat3D;)Larc/math/geom/Mat3D;", 1 },
	{ "mulLeft", (intptr_t) M_arc_math_geom_Mat3D_mulLeft_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_mulLeft_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D, "(Larc/math/geom/Mat3D;)Larc/math/geom/Mat3D;", 1 },
	{ "tra", (intptr_t) M_arc_math_geom_Mat3D_tra_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_tra_R_arc_math_geom_Mat3D, "()Larc/math/geom/Mat3D;", 1 },
	{ "idt", (intptr_t) M_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_idt_R_arc_math_geom_Mat3D, "()Larc/math/geom/Mat3D;", 1 },
	{ "inv", (intptr_t) M_arc_math_geom_Mat3D_inv_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_inv_R_arc_math_geom_Mat3D, "()Larc/math/geom/Mat3D;", 1 },
	{ "det", (intptr_t) M_arc_math_geom_Mat3D_det_R_float, VTABLE_arc_math_geom_Mat3D_det_R_float, "()F", 1 },
	{ "det3x3", (intptr_t) M_arc_math_geom_Mat3D_det3x3_R_float, VTABLE_arc_math_geom_Mat3D_det3x3_R_float, "()F", 1 },
	{ "setToProjection", (intptr_t) M_arc_math_geom_Mat3D_setToProjection_float_float_float_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_setToProjection_float_float_float_float_R_arc_math_geom_Mat3D, "(FFFF)Larc/math/geom/Mat3D;", 1 },
	{ "setToProjection", (intptr_t) M_arc_math_geom_Mat3D_setToProjection_float_float_float_float_float_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_setToProjection_float_float_float_float_float_float_R_arc_math_geom_Mat3D, "(FFFFFF)Larc/math/geom/Mat3D;", 1 },
	{ "setToOrtho2D", (intptr_t) M_arc_math_geom_Mat3D_setToOrtho2D_float_float_float_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_setToOrtho2D_float_float_float_float_R_arc_math_geom_Mat3D, "(FFFF)Larc/math/geom/Mat3D;", 1 },
	{ "setToOrtho2D", (intptr_t) M_arc_math_geom_Mat3D_setToOrtho2D_float_float_float_float_float_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_setToOrtho2D_float_float_float_float_float_float_R_arc_math_geom_Mat3D, "(FFFFFF)Larc/math/geom/Mat3D;", 1 },
	{ "setToOrtho", (intptr_t) M_arc_math_geom_Mat3D_setToOrtho_float_float_float_float_float_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_setToOrtho_float_float_float_float_float_float_R_arc_math_geom_Mat3D, "(FFFFFF)Larc/math/geom/Mat3D;", 1 },
	{ "setTranslation", (intptr_t) M_arc_math_geom_Mat3D_setTranslation_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_setTranslation_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, "(Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;", 1 },
	{ "setTranslation", (intptr_t) M_arc_math_geom_Mat3D_setTranslation_float_float_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_setTranslation_float_float_float_R_arc_math_geom_Mat3D, "(FFF)Larc/math/geom/Mat3D;", 1 },
	{ "setToTranslation", (intptr_t) M_arc_math_geom_Mat3D_setToTranslation_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_setToTranslation_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, "(Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;", 1 },
	{ "setToTranslation", (intptr_t) M_arc_math_geom_Mat3D_setToTranslation_float_float_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_setToTranslation_float_float_float_R_arc_math_geom_Mat3D, "(FFF)Larc/math/geom/Mat3D;", 1 },
	{ "setToTranslationAndScaling", (intptr_t) M_arc_math_geom_Mat3D_setToTranslationAndScaling_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_setToTranslationAndScaling_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;", 1 },
	{ "setToTranslationAndScaling", (intptr_t) M_arc_math_geom_Mat3D_setToTranslationAndScaling_float_float_float_float_float_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_setToTranslationAndScaling_float_float_float_float_float_float_R_arc_math_geom_Mat3D, "(FFFFFF)Larc/math/geom/Mat3D;", 1 },
	{ "setToRotation", (intptr_t) M_arc_math_geom_Mat3D_setToRotation_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_setToRotation_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D, "(Larc/math/geom/Vec3;F)Larc/math/geom/Mat3D;", 1 },
	{ "setToRotationRad", (intptr_t) M_arc_math_geom_Mat3D_setToRotationRad_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_setToRotationRad_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D, "(Larc/math/geom/Vec3;F)Larc/math/geom/Mat3D;", 1 },
	{ "setToRotation", (intptr_t) M_arc_math_geom_Mat3D_setToRotation_float_float_float_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_setToRotation_float_float_float_float_R_arc_math_geom_Mat3D, "(FFFF)Larc/math/geom/Mat3D;", 1 },
	{ "setToRotationRad", (intptr_t) M_arc_math_geom_Mat3D_setToRotationRad_float_float_float_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_setToRotationRad_float_float_float_float_R_arc_math_geom_Mat3D, "(FFFF)Larc/math/geom/Mat3D;", 1 },
	{ "setToRotation", (intptr_t) M_arc_math_geom_Mat3D_setToRotation_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_setToRotation_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;", 1 },
	{ "setToRotation", (intptr_t) M_arc_math_geom_Mat3D_setToRotation_float_float_float_float_float_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_setToRotation_float_float_float_float_float_float_R_arc_math_geom_Mat3D, "(FFFFFF)Larc/math/geom/Mat3D;", 1 },
	{ "setFromEulerAngles", (intptr_t) M_arc_math_geom_Mat3D_setFromEulerAngles_float_float_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_setFromEulerAngles_float_float_float_R_arc_math_geom_Mat3D, "(FFF)Larc/math/geom/Mat3D;", 1 },
	{ "setFromEulerAnglesRad", (intptr_t) M_arc_math_geom_Mat3D_setFromEulerAnglesRad_float_float_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_setFromEulerAnglesRad_float_float_float_R_arc_math_geom_Mat3D, "(FFF)Larc/math/geom/Mat3D;", 1 },
	{ "setToScaling", (intptr_t) M_arc_math_geom_Mat3D_setToScaling_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_setToScaling_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, "(Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;", 1 },
	{ "setToScaling", (intptr_t) M_arc_math_geom_Mat3D_setToScaling_float_float_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_setToScaling_float_float_float_R_arc_math_geom_Mat3D, "(FFF)Larc/math/geom/Mat3D;", 1 },
	{ "setToLookAt", (intptr_t) M_arc_math_geom_Mat3D_setToLookAt_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_setToLookAt_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;", 1 },
	{ "setToLookAt", (intptr_t) M_arc_math_geom_Mat3D_setToLookAt_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_setToLookAt_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;", 1 },
	{ "setToWorld", (intptr_t) M_arc_math_geom_Mat3D_setToWorld_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_setToWorld_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;", 1 },
	{ "toString", (intptr_t) M_arc_math_geom_Mat3D_toString_R_java_lang_String, VTABLE_arc_math_geom_Mat3D_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "lerp", (intptr_t) M_arc_math_geom_Mat3D_lerp_arc_math_geom_Mat3D_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_lerp_arc_math_geom_Mat3D_float_R_arc_math_geom_Mat3D, "(Larc/math/geom/Mat3D;F)Larc/math/geom/Mat3D;", 1 },
	{ "avg", (intptr_t) M_arc_math_geom_Mat3D_avg_arc_math_geom_Mat3D_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_avg_arc_math_geom_Mat3D_float_R_arc_math_geom_Mat3D, "(Larc/math/geom/Mat3D;F)Larc/math/geom/Mat3D;", 1 },
	{ "avg", (intptr_t) M_arc_math_geom_Mat3D_avg_Array1_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_avg_Array1_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D, "([Larc/math/geom/Mat3D;)Larc/math/geom/Mat3D;", 1 },
	{ "avg", (intptr_t) M_arc_math_geom_Mat3D_avg_Array1_arc_math_geom_Mat3D_Array1_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_avg_Array1_arc_math_geom_Mat3D_Array1_float_R_arc_math_geom_Mat3D, "([Larc/math/geom/Mat3D;[F)Larc/math/geom/Mat3D;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Mat3D_set_arc_math_Mat_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_set_arc_math_Mat_R_arc_math_geom_Mat3D, "(Larc/math/Mat;)Larc/math/geom/Mat3D;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Mat3D_set_arc_math_Affine2_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_set_arc_math_Affine2_R_arc_math_geom_Mat3D, "(Larc/math/Affine2;)Larc/math/geom/Mat3D;", 1 },
	{ "setAsAffine", (intptr_t) M_arc_math_geom_Mat3D_setAsAffine_arc_math_Affine2_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_setAsAffine_arc_math_Affine2_R_arc_math_geom_Mat3D, "(Larc/math/Affine2;)Larc/math/geom/Mat3D;", 1 },
	{ "setAsAffine", (intptr_t) M_arc_math_geom_Mat3D_setAsAffine_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_setAsAffine_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D, "(Larc/math/geom/Mat3D;)Larc/math/geom/Mat3D;", 1 },
	{ "scl", (intptr_t) M_arc_math_geom_Mat3D_scl_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_scl_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, "(Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;", 1 },
	{ "scl", (intptr_t) M_arc_math_geom_Mat3D_scl_float_float_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_scl_float_float_float_R_arc_math_geom_Mat3D, "(FFF)Larc/math/geom/Mat3D;", 1 },
	{ "scl", (intptr_t) M_arc_math_geom_Mat3D_scl_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_scl_float_R_arc_math_geom_Mat3D, "(F)Larc/math/geom/Mat3D;", 1 },
	{ "getTranslation", (intptr_t) M_arc_math_geom_Mat3D_getTranslation_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Mat3D_getTranslation_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "getRotation", (intptr_t) M_arc_math_geom_Mat3D_getRotation_arc_math_geom_Quat_boolean_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Mat3D_getRotation_arc_math_geom_Quat_boolean_R_arc_math_geom_Quat, "(Larc/math/geom/Quat;Z)Larc/math/geom/Quat;", 1 },
	{ "getRotation", (intptr_t) M_arc_math_geom_Mat3D_getRotation_arc_math_geom_Quat_R_arc_math_geom_Quat, VTABLE_arc_math_geom_Mat3D_getRotation_arc_math_geom_Quat_R_arc_math_geom_Quat, "(Larc/math/geom/Quat;)Larc/math/geom/Quat;", 1 },
	{ "getScaleXSquared", (intptr_t) M_arc_math_geom_Mat3D_getScaleXSquared_R_float, VTABLE_arc_math_geom_Mat3D_getScaleXSquared_R_float, "()F", 1 },
	{ "getScaleYSquared", (intptr_t) M_arc_math_geom_Mat3D_getScaleYSquared_R_float, VTABLE_arc_math_geom_Mat3D_getScaleYSquared_R_float, "()F", 1 },
	{ "getScaleZSquared", (intptr_t) M_arc_math_geom_Mat3D_getScaleZSquared_R_float, VTABLE_arc_math_geom_Mat3D_getScaleZSquared_R_float, "()F", 1 },
	{ "getScaleX", (intptr_t) M_arc_math_geom_Mat3D_getScaleX_R_float, VTABLE_arc_math_geom_Mat3D_getScaleX_R_float, "()F", 1 },
	{ "getScaleY", (intptr_t) M_arc_math_geom_Mat3D_getScaleY_R_float, VTABLE_arc_math_geom_Mat3D_getScaleY_R_float, "()F", 1 },
	{ "getScaleZ", (intptr_t) M_arc_math_geom_Mat3D_getScaleZ_R_float, VTABLE_arc_math_geom_Mat3D_getScaleZ_R_float, "()F", 1 },
	{ "getScale", (intptr_t) M_arc_math_geom_Mat3D_getScale_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Mat3D_getScale_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "toNormalMatrix", (intptr_t) M_arc_math_geom_Mat3D_toNormalMatrix_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_toNormalMatrix_R_arc_math_geom_Mat3D, "()Larc/math/geom/Mat3D;", 1 },
	{ "mul", (intptr_t) SM_arc_math_geom_Mat3D_mul_Array1_float_Array1_float, 0, "([F[F)V", 9 },
	{ "mulVec", (intptr_t) SM_arc_math_geom_Mat3D_mulVec_Array1_float_Array1_float, 0, "([F[F)V", 9 },
	{ "prj", (intptr_t) SM_arc_math_geom_Mat3D_prj_Array1_float_Array1_float, 0, "([F[F)V", 9 },
	{ "prj", (intptr_t) SM_arc_math_geom_Mat3D_prj_Array1_float_Array1_float_int_int_int, 0, "([F[FIII)V", 9 },
	{ "rot", (intptr_t) SM_arc_math_geom_Mat3D_rot_Array1_float_Array1_float, 0, "([F[F)V", 9 },
	{ "inv", (intptr_t) SM_arc_math_geom_Mat3D_inv_Array1_float_R_boolean, 0, "([F)Z", 9 },
	{ "det", (intptr_t) SM_arc_math_geom_Mat3D_det_Array1_float_R_float, 0, "([F)F", 9 },
	{ "translate", (intptr_t) M_arc_math_geom_Mat3D_translate_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_translate_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, "(Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;", 1 },
	{ "translate", (intptr_t) M_arc_math_geom_Mat3D_translate_float_float_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_translate_float_float_float_R_arc_math_geom_Mat3D, "(FFF)Larc/math/geom/Mat3D;", 1 },
	{ "rotate", (intptr_t) M_arc_math_geom_Mat3D_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D, "(Larc/math/geom/Vec3;F)Larc/math/geom/Mat3D;", 1 },
	{ "rotateRad", (intptr_t) M_arc_math_geom_Mat3D_rotateRad_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_rotateRad_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D, "(Larc/math/geom/Vec3;F)Larc/math/geom/Mat3D;", 1 },
	{ "rotate", (intptr_t) M_arc_math_geom_Mat3D_rotate_float_float_float_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_rotate_float_float_float_float_R_arc_math_geom_Mat3D, "(FFFF)Larc/math/geom/Mat3D;", 1 },
	{ "rotateRad", (intptr_t) M_arc_math_geom_Mat3D_rotateRad_float_float_float_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_rotateRad_float_float_float_float_R_arc_math_geom_Mat3D, "(FFFF)Larc/math/geom/Mat3D;", 1 },
	{ "rotate", (intptr_t) M_arc_math_geom_Mat3D_rotate_arc_math_geom_Quat_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_rotate_arc_math_geom_Quat_R_arc_math_geom_Mat3D, "(Larc/math/geom/Quat;)Larc/math/geom/Mat3D;", 1 },
	{ "rotate", (intptr_t) M_arc_math_geom_Mat3D_rotate_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_rotate_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;", 1 },
	{ "scale", (intptr_t) M_arc_math_geom_Mat3D_scale_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_scale_arc_math_geom_Vec3_R_arc_math_geom_Mat3D, "(Larc/math/geom/Vec3;)Larc/math/geom/Mat3D;", 1 },
	{ "scale", (intptr_t) M_arc_math_geom_Mat3D_scale_float_float_float_R_arc_math_geom_Mat3D, VTABLE_arc_math_geom_Mat3D_scale_float_float_float_R_arc_math_geom_Mat3D, "(FFF)Larc/math/geom/Mat3D;", 1 },
	{ "extract4x3Matrix", (intptr_t) M_arc_math_geom_Mat3D_extract4x3Matrix_Array1_float, VTABLE_arc_math_geom_Mat3D_extract4x3Matrix_Array1_float, "([F)V", 1 },
	{ "hasRotationOrScaling", (intptr_t) M_arc_math_geom_Mat3D_hasRotationOrScaling_R_boolean, VTABLE_arc_math_geom_Mat3D_hasRotationOrScaling_R_boolean, "()Z", 1 },
	{ "prj", (intptr_t) SM_arc_math_geom_Mat3D_prj_arc_math_geom_Vec3_arc_math_geom_Mat3D_R_arc_math_geom_Vec3, 0, "(Larc/math/geom/Vec3;Larc/math/geom/Mat3D;)Larc/math/geom/Vec3;", 9 },
	{ "rot", (intptr_t) SM_arc_math_geom_Mat3D_rot_arc_math_geom_Vec3_arc_math_geom_Mat3D_R_arc_math_geom_Vec3, 0, "(Larc/math/geom/Vec3;Larc/math/geom/Mat3D;)Larc/math/geom/Vec3;", 9 },
	{ "unrotate", (intptr_t) SM_arc_math_geom_Mat3D_unrotate_arc_math_geom_Vec3_arc_math_geom_Mat3D_R_arc_math_geom_Vec3, 0, "(Larc/math/geom/Vec3;Larc/math/geom/Mat3D;)Larc/math/geom/Vec3;", 9 },
	{ "untransform", (intptr_t) SM_arc_math_geom_Mat3D_untransform_arc_math_geom_Vec3_arc_math_geom_Mat3D_R_arc_math_geom_Vec3, 0, "(Larc/math/geom/Vec3;Larc/math/geom/Mat3D;)Larc/math/geom/Vec3;", 9 },
	{ "<clinit>", (intptr_t) clinit_arc_math_geom_Mat3D, 0, "()V", 8 },
};

Class class_arc_math_geom_Mat3D{
		.nativeName = (intptr_t) "arc/math/geom/Mat3D",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_geom_Mat3D),
		.classVtable = (intptr_t) vtable_arc_math_geom_Mat3D,
		.staticInitializer = (intptr_t) clinit_arc_math_geom_Mat3D,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_geom_Mat3D,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 29,
		.nativeFields = (intptr_t) fields,
		.methodCount = 96,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 89,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_geom_Mat3D = registerClass(&class_arc_math_geom_Mat3D);

}
