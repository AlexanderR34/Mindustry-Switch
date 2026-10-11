#include "arc/math/Angles.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/math/Angles_ParticleConsumer.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/Object.h"
#include "arc/Core.h"
#include "arc/math/Angles.h"
#include "arc/Input.h"
#include "arc/math/Rand.h"
#include "arc/func/Floatc2.h"
#include "arc/graphics/Camera.h"

extern "C" {

jobject SF_arc_math_Angles_rand;
jobject SF_arc_math_Angles_rv;

void mark_arc_math_Angles(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_math_Angles_rand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Angles_rand)->clazz)->markFunction)((jobject) SF_arc_math_Angles_rand, mark, depth + 1);
		if (SF_arc_math_Angles_rv)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_math_Angles_rv)->clazz)->markFunction)((jobject) SF_arc_math_Angles_rv, mark, depth + 1);
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
	auto self = (arc_math_Angles *) object;
}

void init_arc_math_Angles(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Angles:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Angles(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Angles_forwardDistance_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Angles:forwardDistance", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Angles(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(12);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[0].f) - (frame[1].f)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Angles_backwardDistance_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Angles:backwardDistance", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Angles(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(16);
	jfloat temp0 = jfloat(360.0f);
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[0].f) - (frame[1].f)));
	popStackFrame(ctx);
	return (temp0 - temp1);
	}

	popStackFrame(ctx);
}

jbool SM_arc_math_Angles_within_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Angles:within", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Angles(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(20);
	jfloat temp0 = (jfloat)SM_arc_math_Angles_angleDist_float_float_R_float(ctx, (frame[0].f), (frame[1].f));
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

jfloat SM_arc_math_Angles_angleDist_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Angles:angleDist", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Angles(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(24);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_mod_float_float_R_float(ctx, (frame[0].f), (jfloat(360.0f)));
	frame[0].f = temp0;
	LINE_NUMBER(25);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_mod_float_float_R_float(ctx, (frame[1].f), (jfloat(360.0f)));
	frame[1].f = temp1;
	LINE_NUMBER(26);
	if ((floatCompare(((frame[0].f) - (frame[1].f)), (jfloat(0)), 1)) >= 0) goto label_3;
	}
	{
	jfloat temp0 = ((frame[0].f) - (frame[1].f)) + (jfloat(360.0f));
	sp[0].f = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	jfloat temp0 = (frame[0].f) - (frame[1].f);
	sp[0].f = temp0;
	sp += 1;
	}
label_4:;
	{
	if ((floatCompare(((frame[1].f) - (frame[0].f)), (jfloat(0)), 1)) >= 0) goto label_5;
	}
	{
	jfloat temp0 = ((frame[1].f) - (frame[0].f)) + (jfloat(360.0f));
	sp[0].f = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	jfloat temp0 = (frame[1].f) - (frame[0].f);
	sp[0].f = temp0;
	sp += 1;
	}
label_6:;
	POP_N(2); // Pop method args
	sp->f = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, sp[0].f, sp[1].f);
	sp++;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jbool SM_arc_math_Angles_near_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Angles:near", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Angles(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(30);
	jfloat temp0 = (jfloat)SM_arc_math_Angles_angleDist_float_float_R_float(ctx, (frame[0].f), (frame[1].f));
	if ((floatCompare(temp0, (frame[2].f), 1)) >= 0) goto label_1;
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

jfloat SM_arc_math_Angles_clampRange_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Angles:clampRange", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Angles(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(34);
	jfloat temp0 = (jfloat)SM_arc_math_Angles_angleDist_float_float_R_float(ctx, (frame[0].f), (frame[1].f));
	frame[3].f = temp0;
	LINE_NUMBER(35);
	if ((floatCompare((frame[3].f), (frame[2].f), 1)) > 0) goto label_2;
	}
	INST_FLOAD(0);
	goto label_3;
label_2:;
	{
	jfloat temp0 = (jfloat)SM_arc_math_Angles_moveToward_float_float_float_R_float(ctx, (frame[0].f), (frame[1].f), ((frame[3].f) - (frame[2].f)));
	sp[0].f = temp0;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat SM_arc_math_Angles_moveToward_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Angles:moveToward", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Angles(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(39);
	jfloat temp0 = (jfloat)SM_arc_math_Angles_angleDist_float_float_R_float(ctx, (frame[0].f), (frame[1].f));
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, temp0);
	if ((floatCompare(temp1, (frame[2].f), 1)) >= 0) goto label_1;
	}
	INST_FLOAD(1);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(40);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_mod_float_float_R_float(ctx, (frame[0].f), (jfloat(360.0f)));
	frame[0].f = temp0;
	LINE_NUMBER(41);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_mod_float_float_R_float(ctx, (frame[1].f), (jfloat(360.0f)));
	frame[1].f = temp1;
	LINE_NUMBER(43);
	if ((floatCompare((frame[0].f), (frame[1].f), -1)) <= 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	jfloat temp0 = (jfloat)SM_arc_math_Angles_backwardDistance_float_float_R_float(ctx, (frame[0].f), (frame[1].f));
	jfloat temp1 = (jfloat)SM_arc_math_Angles_forwardDistance_float_float_R_float(ctx, (frame[0].f), (frame[1].f));
	if ((floatCompare(temp0, temp1, -1)) <= 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	sp -= 2; if (sp[0].i != sp[1].i) goto label_8;
	{
	LINE_NUMBER(44);
	frame[0].f = ((frame[0].f) - (frame[2].f));
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(46);
	frame[0].f = ((frame[0].f) + (frame[2].f));
	}
label_10:;
	{
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return (frame[0].f);
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Angles_angle_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Angles:angle", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Angles(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(53);
	jfloat temp0 = (jfloat)SM_arc_math_Angles_angle_float_float_float_float_R_float(ctx, (jfloat(0)), (jfloat(0)), (frame[0].f), (frame[1].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Angles_angle_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Angles:angle", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Angles(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(57);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_atan2_float_float_R_float(ctx, ((frame[2].f) - (frame[0].f)), ((frame[3].f) - (frame[1].f)));
	frame[4].f = (temp0 * (jfloat(57.295776f)));
	LINE_NUMBER(58);
	if ((floatCompare((frame[4].f), (jfloat(0)), 1)) >= 0) goto label_2;
	}
	{
	frame[4].f = ((frame[4].f) + (jfloat(360.0f)));
	}
label_2:;
	{
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return (frame[4].f);
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Angles_angleRad_float_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Angles:angleRad", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Angles(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(63);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_atan2_float_float_R_float(ctx, ((frame[2].f) - (frame[0].f)), ((frame[3].f) - (frame[1].f)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Angles_trnsx_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Angles:trnsx", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Angles(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(67);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_cosDeg_float_R_float(ctx, (frame[0].f));
	popStackFrame(ctx);
	return (temp0 * temp1);
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Angles_trnsy_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Angles:trnsy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Angles(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(71);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sinDeg_float_R_float(ctx, (frame[0].f));
	popStackFrame(ctx);
	return (temp0 * temp1);
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Angles_trnsx_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Angles:trnsx", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Angles(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(75);
	clinit_arc_math_Angles(ctx);
	sp[0].o = (jobject)SF_arc_math_Angles_rv;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[0].f));
	popStackFrame(ctx);
	return ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Angles_trnsy_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Angles:trnsy", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Angles(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(79);
	clinit_arc_math_Angles(ctx);
	sp[0].o = (jobject)SF_arc_math_Angles_rv;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[0].f));
	popStackFrame(ctx);
	return ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_Angles_mouseAngle_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Angles:mouseAngle", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Angles(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(83);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((func_arc_graphics_Camera_project_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_project_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[0].f), (frame[1].f));
	frame[2].o = sp[0].o;
	LINE_NUMBER(84);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp2 = (jint)((func_arc_Input_mouseX_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseX_R_int])(ctx, sp[0].o);
	jfloat temp3 = jfloat(temp2);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp4 = (jint)((func_arc_Input_mouseY_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseY_R_int])(ctx, sp[0].o);
	jfloat temp5 = (jfloat)SM_arc_math_Angles_angle_float_float_float_float_R_float(ctx, temp0, temp1, temp3, (jfloat(temp4)));
	popStackFrame(ctx);
	return temp5;
	}

	popStackFrame(ctx);
}

void SM_arc_math_Angles_circleVectors_int_float_arc_func_Floatc2(jcontext ctx, jint param0, jfloat param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Angles:circleVectors", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Angles(ctx);
	frame[0].i = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(88);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (frame[0].i)) goto label_2;
	}
	{
	LINE_NUMBER(89);
	frame[4].f = (((jfloat((frame[3].i))) * (jfloat(360.0f))) / (jfloat((frame[0].i))));
	LINE_NUMBER(90);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (frame[4].f), (frame[1].f));
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (frame[4].f), (frame[1].f));
	((func_arc_func_Floatc2_get_float_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatc2, INDEX_arc_func_Floatc2_get_float_float, sp[0].o))(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(88);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(92);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_math_Angles_circleVectors_int_float_float_arc_func_Floatc2(jcontext ctx, jint param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Angles:circleVectors", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Angles(ctx);
	frame[0].i = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(95);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[0].i)) goto label_2;
	}
	{
	LINE_NUMBER(96);
	frame[5].f = ((((jfloat((frame[4].i))) * (jfloat(360.0f))) / (jfloat((frame[0].i)))) + (frame[2].f));
	LINE_NUMBER(97);
	sp[0].o = frame[3].o;
	jfloat temp0 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (frame[5].f), (frame[1].f));
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (frame[5].f), (frame[1].f));
	((func_arc_func_Floatc2_get_float_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatc2, INDEX_arc_func_Floatc2_get_float_float, sp[0].o))(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(95);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(99);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_math_Angles_randVectors_long_int_float_arc_func_Floatc2(jcontext ctx, jlong param0, jint param1, jfloat param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Angles:randVectors", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Angles(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(102);
	clinit_arc_math_Angles(ctx);
	sp[0].o = (jobject)SF_arc_math_Angles_rand;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (frame[0].l));
	LINE_NUMBER(103);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(104);
	clinit_arc_math_Angles(ctx);
	sp[0].o = (jobject)SF_arc_math_Angles_rv;
	clinit_arc_math_Angles(ctx);
	sp[1].o = (jobject)SF_arc_math_Angles_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[1].o, (jfloat(360.0f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, (frame[3].f));
	LINE_NUMBER(105);
	sp[0].o = frame[4].o;
	clinit_arc_math_Angles(ctx);
	sp[1].o = (jobject)SF_arc_math_Angles_rv;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_math_Angles(ctx);
	sp[1].o = (jobject)SF_arc_math_Angles_rv;
	((func_arc_func_Floatc2_get_float_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatc2, INDEX_arc_func_Floatc2_get_float_float, sp[0].o))(ctx, sp[0].o, temp1, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(103);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(107);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_math_Angles_randLenVectors_long_int_float_arc_func_Floatc2(jcontext ctx, jlong param0, jint param1, jfloat param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Angles:randLenVectors", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Angles(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(110);
	clinit_arc_math_Angles(ctx);
	sp[0].o = (jobject)SF_arc_math_Angles_rand;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (frame[0].l));
	LINE_NUMBER(111);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(112);
	clinit_arc_math_Angles(ctx);
	sp[0].o = (jobject)SF_arc_math_Angles_rv;
	clinit_arc_math_Angles(ctx);
	sp[1].o = (jobject)SF_arc_math_Angles_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[1].o, (jfloat(360.0f)));
	clinit_arc_math_Angles(ctx);
	sp[1].o = (jobject)SF_arc_math_Angles_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[1].o, (frame[3].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(113);
	sp[0].o = frame[4].o;
	clinit_arc_math_Angles(ctx);
	sp[1].o = (jobject)SF_arc_math_Angles_rv;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_math_Angles(ctx);
	sp[1].o = (jobject)SF_arc_math_Angles_rv;
	((func_arc_func_Floatc2_get_float_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatc2, INDEX_arc_func_Floatc2_get_float_float, sp[0].o))(ctx, sp[0].o, temp2, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(111);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(115);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_math_Angles_randLenVectors_long_int_float_float_arc_func_Floatc2(jcontext ctx, jlong param0, jint param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Angles:randLenVectors", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Angles(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(118);
	clinit_arc_math_Angles(ctx);
	sp[0].o = (jobject)SF_arc_math_Angles_rand;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (frame[0].l));
	LINE_NUMBER(119);
	frame[6].i = (jint(0));
	}
label_2:;
	{
	if ((frame[6].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(120);
	clinit_arc_math_Angles(ctx);
	sp[0].o = (jobject)SF_arc_math_Angles_rv;
	clinit_arc_math_Angles(ctx);
	sp[1].o = (jobject)SF_arc_math_Angles_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[1].o, (jfloat(360.0f)));
	jfloat temp1 = frame[3].f;
	clinit_arc_math_Angles(ctx);
	sp[1].o = (jobject)SF_arc_math_Angles_rand;
	jfloat temp2 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[1].o, (frame[4].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, (temp1 + temp2));
	LINE_NUMBER(121);
	sp[0].o = frame[5].o;
	clinit_arc_math_Angles(ctx);
	sp[1].o = (jobject)SF_arc_math_Angles_rv;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_math_Angles(ctx);
	sp[1].o = (jobject)SF_arc_math_Angles_rv;
	((func_arc_func_Floatc2_get_float_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatc2, INDEX_arc_func_Floatc2_get_float_float, sp[0].o))(ctx, sp[0].o, temp3, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(119);
	INST_IINC(6, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(123);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_math_Angles_randLenVectors_long_int_float_float_float_arc_func_Floatc2(jcontext ctx, jlong param0, jint param1, jfloat param2, jfloat param3, jfloat param4, jobject param5) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Angles:randLenVectors", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Angles(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(126);
	clinit_arc_math_Angles(ctx);
	sp[0].o = (jobject)SF_arc_math_Angles_rand;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (frame[0].l));
	LINE_NUMBER(127);
	frame[7].i = (jint(0));
	}
label_2:;
	{
	if ((frame[7].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(128);
	clinit_arc_math_Angles(ctx);
	sp[0].o = (jobject)SF_arc_math_Angles_rv;
	jfloat temp0 = frame[4].f;
	clinit_arc_math_Angles(ctx);
	sp[1].o = (jobject)SF_arc_math_Angles_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_range_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_range_float_R_float])(ctx, sp[1].o, (frame[5].f));
	jfloat temp2 = temp0 + temp1;
	clinit_arc_math_Angles(ctx);
	sp[1].o = (jobject)SF_arc_math_Angles_rand;
	jfloat temp3 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[1].o, (frame[3].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp2, temp3);
	LINE_NUMBER(129);
	sp[0].o = frame[6].o;
	clinit_arc_math_Angles(ctx);
	sp[1].o = (jobject)SF_arc_math_Angles_rv;
	jfloat temp4 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_math_Angles(ctx);
	sp[1].o = (jobject)SF_arc_math_Angles_rv;
	((func_arc_func_Floatc2_get_float_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatc2, INDEX_arc_func_Floatc2_get_float_float, sp[0].o))(ctx, sp[0].o, temp4, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(127);
	INST_IINC(7, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(131);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_math_Angles_randLenVectors_long_int_float_float_float_float_arc_func_Floatc2(jcontext ctx, jlong param0, jint param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6) {
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Angles:randLenVectors", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Angles(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(134);
	clinit_arc_math_Angles(ctx);
	sp[0].o = (jobject)SF_arc_math_Angles_rand;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (frame[0].l));
	LINE_NUMBER(135);
	frame[8].i = (jint(0));
	}
label_2:;
	{
	if ((frame[8].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(136);
	clinit_arc_math_Angles(ctx);
	sp[0].o = (jobject)SF_arc_math_Angles_rv;
	jfloat temp0 = frame[4].f;
	clinit_arc_math_Angles(ctx);
	sp[1].o = (jobject)SF_arc_math_Angles_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_range_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_range_float_R_float])(ctx, sp[1].o, (frame[5].f));
	jfloat temp2 = temp0 + temp1;
	clinit_arc_math_Angles(ctx);
	sp[1].o = (jobject)SF_arc_math_Angles_rand;
	jfloat temp3 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[1].o, (frame[3].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp2, temp3);
	LINE_NUMBER(137);
	sp[0].o = frame[7].o;
	clinit_arc_math_Angles(ctx);
	sp[1].o = (jobject)SF_arc_math_Angles_rv;
	jfloat temp4 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_math_Angles(ctx);
	sp[1].o = (jobject)SF_arc_math_Angles_rand;
	jfloat temp5 = (jfloat)((func_arc_math_Rand_range_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_range_float_R_float])(ctx, sp[1].o, (frame[6].f));
	jfloat temp6 = temp4 + temp5;
	clinit_arc_math_Angles(ctx);
	sp[1].o = (jobject)SF_arc_math_Angles_rv;
	jfloat temp7 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	clinit_arc_math_Angles(ctx);
	sp[1].o = (jobject)SF_arc_math_Angles_rand;
	jfloat temp8 = (jfloat)((func_arc_math_Rand_range_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_range_float_R_float])(ctx, sp[1].o, (frame[6].f));
	((func_arc_func_Floatc2_get_float_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatc2, INDEX_arc_func_Floatc2_get_float_float, sp[0].o))(ctx, sp[0].o, temp6, (temp7 + temp8));
	LINE_NUMBER(135);
	INST_IINC(8, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(139);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_math_Angles_randLenVectors_long_float_int_float_arc_math_Angles$ParticleConsumer(jcontext ctx, jlong param0, jfloat param1, jint param2, jfloat param3, jobject param4) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Angles:randLenVectors", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Angles(ctx);
	frame[0].l = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(142);
	clinit_arc_math_Angles(ctx);
	sp[0].o = (jobject)SF_arc_math_Angles_rand;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (frame[0].l));
	LINE_NUMBER(143);
	frame[6].i = (jint(0));
	}
label_2:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(144);
	clinit_arc_math_Angles(ctx);
	sp[0].o = (jobject)SF_arc_math_Angles_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_nextFloat_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextFloat_R_float])(ctx, sp[0].o);
	frame[7].f = temp0;
	LINE_NUMBER(145);
	clinit_arc_math_Angles(ctx);
	sp[0].o = (jobject)SF_arc_math_Angles_rv;
	clinit_arc_math_Angles(ctx);
	sp[1].o = (jobject)SF_arc_math_Angles_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[1].o, (jfloat(360.0f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, (((frame[4].f) * (frame[7].f)) * (frame[2].f)));
	LINE_NUMBER(146);
	sp[0].o = frame[5].o;
	clinit_arc_math_Angles(ctx);
	sp[1].o = (jobject)SF_arc_math_Angles_rv;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_math_Angles(ctx);
	sp[1].o = (jobject)SF_arc_math_Angles_rv;
	((func_arc_math_Angles$ParticleConsumer_accept_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_math_Angles$ParticleConsumer, INDEX_arc_math_Angles$ParticleConsumer_accept_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp2, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y), ((frame[2].f) * (frame[7].f)), (((jfloat(1)) - (frame[2].f)) * (frame[7].f)));
	LINE_NUMBER(143);
	INST_IINC(6, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(148);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_math_Angles_randLenVectors_long_float_int_float_float_float_arc_math_Angles$ParticleConsumer(jcontext ctx, jlong param0, jfloat param1, jint param2, jfloat param3, jfloat param4, jfloat param5, jobject param6) {
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Angles:randLenVectors", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Angles(ctx);
	frame[0].l = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(151);
	clinit_arc_math_Angles(ctx);
	sp[0].o = (jobject)SF_arc_math_Angles_rand;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (frame[0].l));
	LINE_NUMBER(152);
	frame[8].i = (jint(0));
	}
label_2:;
	{
	if ((frame[8].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(153);
	clinit_arc_math_Angles(ctx);
	sp[0].o = (jobject)SF_arc_math_Angles_rv;
	jfloat temp0 = frame[5].f;
	clinit_arc_math_Angles(ctx);
	sp[1].o = (jobject)SF_arc_math_Angles_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_range_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_range_float_R_float])(ctx, sp[1].o, (frame[6].f));
	jfloat temp2 = temp0 + temp1;
	clinit_arc_math_Angles(ctx);
	sp[1].o = (jobject)SF_arc_math_Angles_rand;
	jfloat temp3 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[1].o, ((frame[4].f) * (frame[2].f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp2, temp3);
	LINE_NUMBER(154);
	sp[0].o = frame[7].o;
	clinit_arc_math_Angles(ctx);
	sp[1].o = (jobject)SF_arc_math_Angles_rv;
	jfloat temp4 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_math_Angles(ctx);
	sp[1].o = (jobject)SF_arc_math_Angles_rv;
	jfloat temp5 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	jfloat temp6 = frame[2].f;
	clinit_arc_math_Angles(ctx);
	sp[1].o = (jobject)SF_arc_math_Angles_rand;
	jfloat temp7 = (jfloat)((func_arc_math_Rand_nextFloat_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_nextFloat_R_float])(ctx, sp[1].o);
	((func_arc_math_Angles$ParticleConsumer_accept_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_math_Angles$ParticleConsumer, INDEX_arc_math_Angles$ParticleConsumer_accept_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp4, temp5, (temp6 * temp7), (jfloat(0)));
	LINE_NUMBER(152);
	INST_IINC(8, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(156);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_arc_math_Angles(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Angles:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Angles(ctx);
	{
	LINE_NUMBER(8);
	clinit_arc_math_Rand(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Rand);
	init_arc_math_Rand(ctx, sp[0].o);
	clinit_arc_math_Angles(ctx);
	SF_arc_math_Angles_rand = sp[0].o;
	LINE_NUMBER(9);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_math_Angles(ctx);
	SF_arc_math_Angles_rv = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_Angles[] {
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

static jclass innerClasses[] {
	&class_arc_math_Angles$ParticleConsumer,
};

static FieldMetadata fields[] {
	{ "rand", &class_arc_math_Rand, (intptr_t) &SF_arc_math_Angles_rand, "Larc/math/Rand;", 26 },
	{ "rv", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_math_Angles_rv, "Larc/math/geom/Vec2;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_Angles, 0, "()V", 1 },
	{ "forwardDistance", (intptr_t) SM_arc_math_Angles_forwardDistance_float_float_R_float, 0, "(FF)F", 9 },
	{ "backwardDistance", (intptr_t) SM_arc_math_Angles_backwardDistance_float_float_R_float, 0, "(FF)F", 9 },
	{ "within", (intptr_t) SM_arc_math_Angles_within_float_float_float_R_boolean, 0, "(FFF)Z", 9 },
	{ "angleDist", (intptr_t) SM_arc_math_Angles_angleDist_float_float_R_float, 0, "(FF)F", 9 },
	{ "near", (intptr_t) SM_arc_math_Angles_near_float_float_float_R_boolean, 0, "(FFF)Z", 9 },
	{ "clampRange", (intptr_t) SM_arc_math_Angles_clampRange_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "moveToward", (intptr_t) SM_arc_math_Angles_moveToward_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "angle", (intptr_t) SM_arc_math_Angles_angle_float_float_R_float, 0, "(FF)F", 9 },
	{ "angle", (intptr_t) SM_arc_math_Angles_angle_float_float_float_float_R_float, 0, "(FFFF)F", 9 },
	{ "angleRad", (intptr_t) SM_arc_math_Angles_angleRad_float_float_float_float_R_float, 0, "(FFFF)F", 9 },
	{ "trnsx", (intptr_t) SM_arc_math_Angles_trnsx_float_float_R_float, 0, "(FF)F", 9 },
	{ "trnsy", (intptr_t) SM_arc_math_Angles_trnsy_float_float_R_float, 0, "(FF)F", 9 },
	{ "trnsx", (intptr_t) SM_arc_math_Angles_trnsx_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "trnsy", (intptr_t) SM_arc_math_Angles_trnsy_float_float_float_R_float, 0, "(FFF)F", 9 },
	{ "mouseAngle", (intptr_t) SM_arc_math_Angles_mouseAngle_float_float_R_float, 0, "(FF)F", 9 },
	{ "circleVectors", (intptr_t) SM_arc_math_Angles_circleVectors_int_float_arc_func_Floatc2, 0, "(IFLarc/func/Floatc2;)V", 9 },
	{ "circleVectors", (intptr_t) SM_arc_math_Angles_circleVectors_int_float_float_arc_func_Floatc2, 0, "(IFFLarc/func/Floatc2;)V", 9 },
	{ "randVectors", (intptr_t) SM_arc_math_Angles_randVectors_long_int_float_arc_func_Floatc2, 0, "(JIFLarc/func/Floatc2;)V", 9 },
	{ "randLenVectors", (intptr_t) SM_arc_math_Angles_randLenVectors_long_int_float_arc_func_Floatc2, 0, "(JIFLarc/func/Floatc2;)V", 9 },
	{ "randLenVectors", (intptr_t) SM_arc_math_Angles_randLenVectors_long_int_float_float_arc_func_Floatc2, 0, "(JIFFLarc/func/Floatc2;)V", 9 },
	{ "randLenVectors", (intptr_t) SM_arc_math_Angles_randLenVectors_long_int_float_float_float_arc_func_Floatc2, 0, "(JIFFFLarc/func/Floatc2;)V", 9 },
	{ "randLenVectors", (intptr_t) SM_arc_math_Angles_randLenVectors_long_int_float_float_float_float_arc_func_Floatc2, 0, "(JIFFFFLarc/func/Floatc2;)V", 9 },
	{ "randLenVectors", (intptr_t) SM_arc_math_Angles_randLenVectors_long_float_int_float_arc_math_Angles$ParticleConsumer, 0, "(JFIFLarc/math/Angles$ParticleConsumer;)V", 9 },
	{ "randLenVectors", (intptr_t) SM_arc_math_Angles_randLenVectors_long_float_int_float_float_float_arc_math_Angles$ParticleConsumer, 0, "(JFIFFFLarc/math/Angles$ParticleConsumer;)V", 9 },
	{ "<clinit>", (intptr_t) clinit_arc_math_Angles, 0, "()V", 8 },
};

Class class_arc_math_Angles{
		.nativeName = (intptr_t) "arc/math/Angles",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_Angles),
		.classVtable = (intptr_t) vtable_arc_math_Angles,
		.staticInitializer = (intptr_t) clinit_arc_math_Angles,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_Angles,
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
		.methodCount = 26,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_Angles = registerClass(&class_arc_math_Angles);

}
