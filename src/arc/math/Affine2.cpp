#include "arc/math/Affine2.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/math/Mat.h"
#include "arc/math/Affine2.h"

extern "C" {


void mark_arc_math_Affine2(jobject object, jint mark, jint depth) {
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
	auto self = (arc_math_Affine2 *) object;
}

void clinit_arc_math_Affine2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_math_Affine2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Affine2(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(14);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (jfloat(1));
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (jfloat(0));
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (jfloat(0));
	LINE_NUMBER(15);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (jfloat(0));
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (jfloat(1));
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (jfloat(0));
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_Affine2_arc_math_Affine2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Affine2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(27);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(14);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (jfloat(1));
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (jfloat(0));
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (jfloat(0));
	LINE_NUMBER(15);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (jfloat(0));
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (jfloat(1));
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (jfloat(0));
	LINE_NUMBER(28);
	sp[0].o = (jobject)((func_arc_math_Affine2_set_arc_math_Affine2_R_arc_math_Affine2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Affine2_set_arc_math_Affine2_R_arc_math_Affine2])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_idt_R_arc_math_Affine2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:idt", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(36);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (jfloat(1));
	LINE_NUMBER(37);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (jfloat(0));
	LINE_NUMBER(38);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (jfloat(0));
	LINE_NUMBER(39);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (jfloat(0));
	LINE_NUMBER(40);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (jfloat(1));
	LINE_NUMBER(41);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (jfloat(0));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_set_arc_math_Affine2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(51);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m00);
	LINE_NUMBER(52);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m01);
	LINE_NUMBER(53);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m02);
	LINE_NUMBER(54);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m10);
	LINE_NUMBER(55);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m11);
	LINE_NUMBER(56);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m12);
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_set_arc_math_Mat_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(68);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))));
	LINE_NUMBER(69);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))));
	LINE_NUMBER(70);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (6)));
	LINE_NUMBER(71);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1))));
	LINE_NUMBER(72);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4))));
	LINE_NUMBER(73);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (7)));
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_setToTranslation_float_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:setToTranslation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(84);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (jfloat(1));
	LINE_NUMBER(85);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (jfloat(0));
	LINE_NUMBER(86);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (frame[1].f);
	LINE_NUMBER(87);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (jfloat(0));
	LINE_NUMBER(88);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (jfloat(1));
	LINE_NUMBER(89);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (frame[2].f);
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_setToTranslation_arc_math_geom_Vec2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:setToTranslation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((func_arc_math_Affine2_setToTranslation_float_float_R_arc_math_Affine2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Affine2_setToTranslation_float_float_R_arc_math_Affine2])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_setToScaling_float_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:setToScaling", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(109);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[1].f);
	LINE_NUMBER(110);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (jfloat(0));
	LINE_NUMBER(111);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (jfloat(0));
	LINE_NUMBER(112);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (jfloat(0));
	LINE_NUMBER(113);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[2].f);
	LINE_NUMBER(114);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (jfloat(0));
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_setToScaling_arc_math_geom_Vec2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:setToScaling", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((func_arc_math_Affine2_setToScaling_float_float_R_arc_math_Affine2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Affine2_setToScaling_float_float_R_arc_math_Affine2])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_setToRotation_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:setToRotation", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(133);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_cosDeg_float_R_float(ctx, (frame[1].f));
	frame[2].f = temp0;
	LINE_NUMBER(134);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sinDeg_float_R_float(ctx, (frame[1].f));
	frame[3].f = temp1;
	LINE_NUMBER(136);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[2].f);
	LINE_NUMBER(137);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (-(frame[3].f));
	LINE_NUMBER(138);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (jfloat(0));
	LINE_NUMBER(139);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (frame[3].f);
	LINE_NUMBER(140);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[2].f);
	LINE_NUMBER(141);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (jfloat(0));
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_setToRotationRad_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:setToRotationRad", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(151);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_cos_float_R_float(ctx, (frame[1].f));
	frame[2].f = temp0;
	LINE_NUMBER(152);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sin_float_R_float(ctx, (frame[1].f));
	frame[3].f = temp1;
	LINE_NUMBER(154);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[2].f);
	LINE_NUMBER(155);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (-(frame[3].f));
	LINE_NUMBER(156);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (jfloat(0));
	LINE_NUMBER(157);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (frame[3].f);
	LINE_NUMBER(158);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[2].f);
	LINE_NUMBER(159);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (jfloat(0));
	LINE_NUMBER(160);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_setToRotation_float_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:setToRotation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(170);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[1].f);
	LINE_NUMBER(171);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (-(frame[2].f));
	LINE_NUMBER(172);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (jfloat(0));
	LINE_NUMBER(173);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (frame[2].f);
	LINE_NUMBER(174);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[1].f);
	LINE_NUMBER(175);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (jfloat(0));
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_setToShearing_float_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:setToShearing", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(186);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (jfloat(1));
	LINE_NUMBER(187);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (frame[1].f);
	LINE_NUMBER(188);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (jfloat(0));
	LINE_NUMBER(189);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (frame[2].f);
	LINE_NUMBER(190);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (jfloat(1));
	LINE_NUMBER(191);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (jfloat(0));
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_setToShearing_arc_math_geom_Vec2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:setToShearing", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((func_arc_math_Affine2_setToShearing_float_float_R_arc_math_Affine2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Affine2_setToShearing_float_float_R_arc_math_Affine2])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_setToTrnRotScl_float_float_float_float_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:setToTrnRotScl", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(215);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (frame[1].f);
	LINE_NUMBER(216);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (frame[2].f);
	LINE_NUMBER(218);
	if ((floatCompare((frame[3].f), (jfloat(0)), -1)) != 0) goto label_3;
	}
	{
	LINE_NUMBER(219);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[4].f);
	LINE_NUMBER(220);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (jfloat(0));
	LINE_NUMBER(221);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (jfloat(0));
	LINE_NUMBER(222);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[5].f);
	goto label_8;
	}
label_3:;
	{
	LINE_NUMBER(224);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_sinDeg_float_R_float(ctx, (frame[3].f));
	frame[6].f = temp0;
	LINE_NUMBER(225);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_cosDeg_float_R_float(ctx, (frame[3].f));
	frame[7].f = temp1;
	LINE_NUMBER(227);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = ((frame[7].f) * (frame[4].f));
	LINE_NUMBER(228);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = ((-(frame[6].f)) * (frame[5].f));
	LINE_NUMBER(229);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = ((frame[6].f) * (frame[4].f));
	LINE_NUMBER(230);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = ((frame[7].f) * (frame[5].f));
	}
label_8:;
	{
	LINE_NUMBER(232);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_setToTrnRotScl_arc_math_geom_Vec2_float_arc_math_geom_Vec2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:setToTrnRotScl", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)((func_arc_math_Affine2_setToTrnRotScl_float_float_float_float_float_R_arc_math_Affine2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Affine2_setToTrnRotScl_float_float_float_float_float_R_arc_math_Affine2])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y), (frame[2].f), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_setToTrnRotRadScl_float_float_float_float_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:setToTrnRotRadScl", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(258);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (frame[1].f);
	LINE_NUMBER(259);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (frame[2].f);
	LINE_NUMBER(261);
	if ((floatCompare((frame[3].f), (jfloat(0)), -1)) != 0) goto label_3;
	}
	{
	LINE_NUMBER(262);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[4].f);
	LINE_NUMBER(263);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (jfloat(0));
	LINE_NUMBER(264);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (jfloat(0));
	LINE_NUMBER(265);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[5].f);
	goto label_8;
	}
label_3:;
	{
	LINE_NUMBER(267);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_sin_float_R_float(ctx, (frame[3].f));
	frame[6].f = temp0;
	LINE_NUMBER(268);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_cos_float_R_float(ctx, (frame[3].f));
	frame[7].f = temp1;
	LINE_NUMBER(270);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = ((frame[7].f) * (frame[4].f));
	LINE_NUMBER(271);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = ((-(frame[6].f)) * (frame[5].f));
	LINE_NUMBER(272);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = ((frame[6].f) * (frame[4].f));
	LINE_NUMBER(273);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = ((frame[7].f) * (frame[5].f));
	}
label_8:;
	{
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_setToTrnRotRadScl_arc_math_geom_Vec2_float_arc_math_geom_Vec2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:setToTrnRotRadScl", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((func_arc_math_Affine2_setToTrnRotRadScl_float_float_float_float_float_R_arc_math_Affine2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Affine2_setToTrnRotRadScl_float_float_float_float_float_R_arc_math_Affine2])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y), (frame[2].f), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_setToTrnScl_float_float_float_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:setToTrnScl", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(300);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[3].f);
	LINE_NUMBER(301);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (jfloat(0));
	LINE_NUMBER(302);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (frame[1].f);
	LINE_NUMBER(303);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (jfloat(0));
	LINE_NUMBER(304);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[4].f);
	LINE_NUMBER(305);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (frame[2].f);
	LINE_NUMBER(306);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_setToTrnScl_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:setToTrnScl", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)((func_arc_math_Affine2_setToTrnScl_float_float_float_float_R_arc_math_Affine2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Affine2_setToTrnScl_float_float_float_float_R_arc_math_Affine2])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_setToProduct_arc_math_Affine2_arc_math_Affine2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:setToProduct", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(327);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = ((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m00) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[2].o)))->F_m00)) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m01) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[2].o)))->F_m10)));
	LINE_NUMBER(328);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = ((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m00) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[2].o)))->F_m01)) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m01) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[2].o)))->F_m11)));
	LINE_NUMBER(329);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m00) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[2].o)))->F_m02)) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m01) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[2].o)))->F_m12))) + ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m02));
	LINE_NUMBER(330);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = ((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m10) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[2].o)))->F_m00)) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m11) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[2].o)))->F_m10)));
	LINE_NUMBER(331);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = ((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m10) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[2].o)))->F_m01)) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m11) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[2].o)))->F_m11)));
	LINE_NUMBER(332);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m10) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[2].o)))->F_m02)) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m11) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[2].o)))->F_m12))) + ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m12));
	LINE_NUMBER(333);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_inv_R_arc_math_Affine2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:inv", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(342);
	jfloat temp0 = (jfloat)((func_arc_math_Affine2_det_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Affine2_det_R_float])(ctx, (frame[0].o));
	frame[1].f = temp0;
	LINE_NUMBER(343);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_2;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Can't invert a singular affine matrix"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(345);
	frame[2].f = ((jfloat(1)) / (frame[1].f));
	LINE_NUMBER(347);
	frame[3].f = ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11);
	LINE_NUMBER(348);
	frame[4].f = (-((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01));
	LINE_NUMBER(349);
	frame[5].f = ((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12)) - (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02)));
	LINE_NUMBER(350);
	frame[6].f = (-((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10));
	LINE_NUMBER(351);
	frame[7].f = ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00);
	LINE_NUMBER(352);
	frame[8].f = ((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02)) - (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12)));
	LINE_NUMBER(354);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = ((frame[2].f) * (frame[3].f));
	LINE_NUMBER(355);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = ((frame[2].f) * (frame[4].f));
	LINE_NUMBER(356);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = ((frame[2].f) * (frame[5].f));
	LINE_NUMBER(357);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = ((frame[2].f) * (frame[6].f));
	LINE_NUMBER(358);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = ((frame[2].f) * (frame[7].f));
	LINE_NUMBER(359);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = ((frame[2].f) * (frame[8].f));
	LINE_NUMBER(360);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_mul_arc_math_Affine2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:mul", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(373);
	frame[2].f = ((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m00)) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m10)));
	LINE_NUMBER(374);
	frame[3].f = ((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m01)) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m11)));
	LINE_NUMBER(375);
	frame[4].f = (((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m02)) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m12))) + ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02));
	LINE_NUMBER(376);
	frame[5].f = ((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m00)) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m10)));
	LINE_NUMBER(377);
	frame[6].f = ((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m01)) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m11)));
	LINE_NUMBER(378);
	frame[7].f = (((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m02)) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m12))) + ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12));
	LINE_NUMBER(380);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[2].f);
	LINE_NUMBER(381);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (frame[3].f);
	LINE_NUMBER(382);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (frame[4].f);
	LINE_NUMBER(383);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (frame[5].f);
	LINE_NUMBER(384);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[6].f);
	LINE_NUMBER(385);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (frame[7].f);
	LINE_NUMBER(386);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_preMul_arc_math_Affine2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:preMul", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(399);
	frame[2].f = ((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m00) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00)) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m01) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10)));
	LINE_NUMBER(400);
	frame[3].f = ((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m00) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01)) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m01) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11)));
	LINE_NUMBER(401);
	frame[4].f = (((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m00) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02)) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m01) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12))) + ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m02));
	LINE_NUMBER(402);
	frame[5].f = ((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m10) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00)) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m11) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10)));
	LINE_NUMBER(403);
	frame[6].f = ((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m10) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01)) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m11) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11)));
	LINE_NUMBER(404);
	frame[7].f = (((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m10) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02)) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m11) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12))) + ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m12));
	LINE_NUMBER(406);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[2].f);
	LINE_NUMBER(407);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (frame[3].f);
	LINE_NUMBER(408);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (frame[4].f);
	LINE_NUMBER(409);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (frame[5].f);
	LINE_NUMBER(410);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[6].f);
	LINE_NUMBER(411);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (frame[7].f);
	LINE_NUMBER(412);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_translate_float_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:translate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(422);
	sp[0].o = frame[0].o;
	((arc_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m02 = (((jfloat)((arc_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m02) + ((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00) * (frame[1].f)) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01) * (frame[2].f))));
	LINE_NUMBER(423);
	sp[0].o = frame[0].o;
	((arc_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m12 = (((jfloat)((arc_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m12) + ((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10) * (frame[1].f)) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11) * (frame[2].f))));
	LINE_NUMBER(424);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_translate_arc_math_geom_Vec2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:translate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(433);
	sp[0].o = (jobject)((func_arc_math_Affine2_translate_float_float_R_arc_math_Affine2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Affine2_translate_float_float_R_arc_math_Affine2])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_preTranslate_float_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:preTranslate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(443);
	sp[0].o = frame[0].o;
	((arc_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m02 = (((jfloat)((arc_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m02) + (frame[1].f));
	LINE_NUMBER(444);
	sp[0].o = frame[0].o;
	((arc_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m12 = (((jfloat)((arc_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m12) + (frame[2].f));
	LINE_NUMBER(445);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_preTranslate_arc_math_geom_Vec2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:preTranslate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(454);
	sp[0].o = (jobject)((func_arc_math_Affine2_preTranslate_float_float_R_arc_math_Affine2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Affine2_preTranslate_float_float_R_arc_math_Affine2])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_scale_float_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:scale", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(464);
	sp[0].o = frame[0].o;
	((arc_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m00 = (((jfloat)((arc_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m00) * (frame[1].f));
	LINE_NUMBER(465);
	sp[0].o = frame[0].o;
	((arc_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m01 = (((jfloat)((arc_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m01) * (frame[2].f));
	LINE_NUMBER(466);
	sp[0].o = frame[0].o;
	((arc_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m10 = (((jfloat)((arc_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m10) * (frame[1].f));
	LINE_NUMBER(467);
	sp[0].o = frame[0].o;
	((arc_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m11 = (((jfloat)((arc_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m11) * (frame[2].f));
	LINE_NUMBER(468);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_scale_arc_math_geom_Vec2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:scale", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(477);
	sp[0].o = (jobject)((func_arc_math_Affine2_scale_float_float_R_arc_math_Affine2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Affine2_scale_float_float_R_arc_math_Affine2])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_preScale_float_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:preScale", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(487);
	sp[0].o = frame[0].o;
	((arc_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m00 = (((jfloat)((arc_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m00) * (frame[1].f));
	LINE_NUMBER(488);
	sp[0].o = frame[0].o;
	((arc_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m01 = (((jfloat)((arc_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m01) * (frame[1].f));
	LINE_NUMBER(489);
	sp[0].o = frame[0].o;
	((arc_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m02 = (((jfloat)((arc_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m02) * (frame[1].f));
	LINE_NUMBER(490);
	sp[0].o = frame[0].o;
	((arc_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m10 = (((jfloat)((arc_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m10) * (frame[2].f));
	LINE_NUMBER(491);
	sp[0].o = frame[0].o;
	((arc_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m11 = (((jfloat)((arc_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m11) * (frame[2].f));
	LINE_NUMBER(492);
	sp[0].o = frame[0].o;
	((arc_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m12 = (((jfloat)((arc_math_Affine2 *) NULL_CHECK(sp[0].o))->F_m12) * (frame[2].f));
	LINE_NUMBER(493);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_preScale_arc_math_geom_Vec2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:preScale", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(502);
	sp[0].o = (jobject)((func_arc_math_Affine2_preScale_float_float_R_arc_math_Affine2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Affine2_preScale_float_float_R_arc_math_Affine2])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_rotate_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:rotate", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(511);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(513);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_cosDeg_float_R_float(ctx, (frame[1].f));
	frame[2].f = temp0;
	LINE_NUMBER(514);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sinDeg_float_R_float(ctx, (frame[1].f));
	frame[3].f = temp1;
	LINE_NUMBER(516);
	frame[4].f = ((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00) * (frame[2].f)) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01) * (frame[3].f)));
	LINE_NUMBER(517);
	frame[5].f = ((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00) * (-(frame[3].f))) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01) * (frame[2].f)));
	LINE_NUMBER(518);
	frame[6].f = ((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10) * (frame[2].f)) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11) * (frame[3].f)));
	LINE_NUMBER(519);
	frame[7].f = ((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10) * (-(frame[3].f))) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11) * (frame[2].f)));
	LINE_NUMBER(521);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[4].f);
	LINE_NUMBER(522);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (frame[5].f);
	LINE_NUMBER(523);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (frame[6].f);
	LINE_NUMBER(524);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[7].f);
	LINE_NUMBER(525);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_rotateRad_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:rotateRad", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(534);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(536);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_cos_float_R_float(ctx, (frame[1].f));
	frame[2].f = temp0;
	LINE_NUMBER(537);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sin_float_R_float(ctx, (frame[1].f));
	frame[3].f = temp1;
	LINE_NUMBER(539);
	frame[4].f = ((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00) * (frame[2].f)) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01) * (frame[3].f)));
	LINE_NUMBER(540);
	frame[5].f = ((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00) * (-(frame[3].f))) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01) * (frame[2].f)));
	LINE_NUMBER(541);
	frame[6].f = ((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10) * (frame[2].f)) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11) * (frame[3].f)));
	LINE_NUMBER(542);
	frame[7].f = ((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10) * (-(frame[3].f))) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11) * (frame[2].f)));
	LINE_NUMBER(544);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[4].f);
	LINE_NUMBER(545);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (frame[5].f);
	LINE_NUMBER(546);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (frame[6].f);
	LINE_NUMBER(547);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[7].f);
	LINE_NUMBER(548);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_preRotate_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:preRotate", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(557);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(559);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_cosDeg_float_R_float(ctx, (frame[1].f));
	frame[2].f = temp0;
	LINE_NUMBER(560);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sinDeg_float_R_float(ctx, (frame[1].f));
	frame[3].f = temp1;
	LINE_NUMBER(562);
	frame[4].f = (((frame[2].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00)) - ((frame[3].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10)));
	LINE_NUMBER(563);
	frame[5].f = (((frame[2].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01)) - ((frame[3].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11)));
	LINE_NUMBER(564);
	frame[6].f = (((frame[2].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02)) - ((frame[3].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12)));
	LINE_NUMBER(565);
	frame[7].f = (((frame[3].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00)) + ((frame[2].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10)));
	LINE_NUMBER(566);
	frame[8].f = (((frame[3].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01)) + ((frame[2].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11)));
	LINE_NUMBER(567);
	frame[9].f = (((frame[3].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02)) + ((frame[2].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12)));
	LINE_NUMBER(569);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[4].f);
	LINE_NUMBER(570);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (frame[5].f);
	LINE_NUMBER(571);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (frame[6].f);
	LINE_NUMBER(572);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (frame[7].f);
	LINE_NUMBER(573);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[8].f);
	LINE_NUMBER(574);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (frame[9].f);
	LINE_NUMBER(575);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_preRotateRad_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:preRotateRad", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(584);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(586);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_cos_float_R_float(ctx, (frame[1].f));
	frame[2].f = temp0;
	LINE_NUMBER(587);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sin_float_R_float(ctx, (frame[1].f));
	frame[3].f = temp1;
	LINE_NUMBER(589);
	frame[4].f = (((frame[2].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00)) - ((frame[3].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10)));
	LINE_NUMBER(590);
	frame[5].f = (((frame[2].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01)) - ((frame[3].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11)));
	LINE_NUMBER(591);
	frame[6].f = (((frame[2].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02)) - ((frame[3].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12)));
	LINE_NUMBER(592);
	frame[7].f = (((frame[3].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00)) + ((frame[2].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10)));
	LINE_NUMBER(593);
	frame[8].f = (((frame[3].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01)) + ((frame[2].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11)));
	LINE_NUMBER(594);
	frame[9].f = (((frame[3].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02)) + ((frame[2].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12)));
	LINE_NUMBER(596);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[4].f);
	LINE_NUMBER(597);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (frame[5].f);
	LINE_NUMBER(598);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (frame[6].f);
	LINE_NUMBER(599);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (frame[7].f);
	LINE_NUMBER(600);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[8].f);
	LINE_NUMBER(601);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (frame[9].f);
	LINE_NUMBER(602);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_shear_float_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:shear", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(612);
	frame[3].f = (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00) + ((frame[2].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01)));
	LINE_NUMBER(613);
	frame[4].f = (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01) + ((frame[1].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00)));
	LINE_NUMBER(614);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[3].f);
	LINE_NUMBER(615);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (frame[4].f);
	LINE_NUMBER(617);
	frame[3].f = (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10) + ((frame[2].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11)));
	LINE_NUMBER(618);
	frame[4].f = (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11) + ((frame[1].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10)));
	LINE_NUMBER(619);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (frame[3].f);
	LINE_NUMBER(620);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[4].f);
	LINE_NUMBER(621);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_shear_arc_math_geom_Vec2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:shear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(630);
	sp[0].o = (jobject)((func_arc_math_Affine2_shear_float_float_R_arc_math_Affine2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Affine2_shear_float_float_R_arc_math_Affine2])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_preShear_float_float_R_arc_math_Affine2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:preShear", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(640);
	frame[3].f = (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00) + ((frame[1].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10)));
	LINE_NUMBER(641);
	frame[4].f = (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01) + ((frame[1].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11)));
	LINE_NUMBER(642);
	frame[5].f = (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02) + ((frame[1].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12)));
	LINE_NUMBER(643);
	frame[6].f = (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10) + ((frame[2].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00)));
	LINE_NUMBER(644);
	frame[7].f = (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11) + ((frame[2].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01)));
	LINE_NUMBER(645);
	frame[8].f = (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12) + ((frame[2].f) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02)));
	LINE_NUMBER(647);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00 = (frame[3].f);
	LINE_NUMBER(648);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01 = (frame[4].f);
	LINE_NUMBER(649);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02 = (frame[5].f);
	LINE_NUMBER(650);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10 = (frame[6].f);
	LINE_NUMBER(651);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11 = (frame[7].f);
	LINE_NUMBER(652);
	((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12 = (frame[8].f);
	LINE_NUMBER(653);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_preShear_arc_math_geom_Vec2_R_arc_math_Affine2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:preShear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(662);
	sp[0].o = (jobject)((func_arc_math_Affine2_preShear_float_float_R_arc_math_Affine2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Affine2_preShear_float_float_R_arc_math_Affine2])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_Affine2_det_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:det", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(670);
	popStackFrame(ctx);
	return ((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11)) - (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01) * ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10)));
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_getTranslation_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:getTranslation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(679);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x = ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02);
	LINE_NUMBER(680);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y = ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12);
	LINE_NUMBER(681);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jbool M_arc_math_Affine2_isTranslation_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:isTranslation", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(689);
	if ((floatCompare(((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00), (jfloat(1)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11), (jfloat(1)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10), (jfloat(0)), -1)) != 0) goto label_1;
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

jbool M_arc_math_Affine2_isIdt_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:isIdt", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(697);
	if ((floatCompare(((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00), (jfloat(1)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11), (jfloat(1)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10), (jfloat(0)), -1)) != 0) goto label_1;
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

void M_arc_math_Affine2_applyTo_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:applyTo", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(702);
	frame[2].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(703);
	frame[3].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(704);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x = (((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00) * (frame[2].f)) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01) * (frame[3].f))) + ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02));
	LINE_NUMBER(705);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y = (((((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10) * (frame[2].f)) + (((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11) * (frame[3].f))) + ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12));
	LINE_NUMBER(706);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Affine2_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Affine2:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(710);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"["_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m00));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m01));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m02));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]\n["_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m10));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m11));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[0].o)))->F_m12));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]\n[0.0|0.0|0.1]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_Affine2[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_math_Affine2_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_math_Affine2_idt_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_set_arc_math_Affine2_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_set_arc_math_Mat_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_setToTranslation_float_float_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_setToTranslation_arc_math_geom_Vec2_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_setToScaling_float_float_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_setToScaling_arc_math_geom_Vec2_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_setToRotation_float_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_setToRotationRad_float_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_setToRotation_float_float_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_setToShearing_float_float_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_setToShearing_arc_math_geom_Vec2_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_setToTrnRotScl_float_float_float_float_float_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_setToTrnRotScl_arc_math_geom_Vec2_float_arc_math_geom_Vec2_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_setToTrnRotRadScl_float_float_float_float_float_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_setToTrnRotRadScl_arc_math_geom_Vec2_float_arc_math_geom_Vec2_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_setToTrnScl_float_float_float_float_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_setToTrnScl_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_setToProduct_arc_math_Affine2_arc_math_Affine2_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_inv_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_mul_arc_math_Affine2_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_preMul_arc_math_Affine2_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_translate_float_float_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_translate_arc_math_geom_Vec2_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_preTranslate_float_float_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_preTranslate_arc_math_geom_Vec2_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_scale_float_float_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_scale_arc_math_geom_Vec2_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_preScale_float_float_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_preScale_arc_math_geom_Vec2_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_rotate_float_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_rotateRad_float_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_preRotate_float_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_preRotateRad_float_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_shear_float_float_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_shear_arc_math_geom_Vec2_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_preShear_float_float_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_preShear_arc_math_geom_Vec2_R_arc_math_Affine2,
	(void *) M_arc_math_Affine2_det_R_float,
	(void *) M_arc_math_Affine2_getTranslation_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_math_Affine2_isTranslation_R_boolean,
	(void *) M_arc_math_Affine2_isIdt_R_boolean,
	(void *) M_arc_math_Affine2_applyTo_arc_math_geom_Vec2,
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
	{ "idt", "()Larc/math/Affine2;" },
	{ "set", "(Larc/math/Affine2;)Larc/math/Affine2;" },
	{ "set", "(Larc/math/Mat;)Larc/math/Affine2;" },
	{ "setToTranslation", "(FF)Larc/math/Affine2;" },
	{ "setToTranslation", "(Larc/math/geom/Vec2;)Larc/math/Affine2;" },
	{ "setToScaling", "(FF)Larc/math/Affine2;" },
	{ "setToScaling", "(Larc/math/geom/Vec2;)Larc/math/Affine2;" },
	{ "setToRotation", "(F)Larc/math/Affine2;" },
	{ "setToRotationRad", "(F)Larc/math/Affine2;" },
	{ "setToRotation", "(FF)Larc/math/Affine2;" },
	{ "setToShearing", "(FF)Larc/math/Affine2;" },
	{ "setToShearing", "(Larc/math/geom/Vec2;)Larc/math/Affine2;" },
	{ "setToTrnRotScl", "(FFFFF)Larc/math/Affine2;" },
	{ "setToTrnRotScl", "(Larc/math/geom/Vec2;FLarc/math/geom/Vec2;)Larc/math/Affine2;" },
	{ "setToTrnRotRadScl", "(FFFFF)Larc/math/Affine2;" },
	{ "setToTrnRotRadScl", "(Larc/math/geom/Vec2;FLarc/math/geom/Vec2;)Larc/math/Affine2;" },
	{ "setToTrnScl", "(FFFF)Larc/math/Affine2;" },
	{ "setToTrnScl", "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;)Larc/math/Affine2;" },
	{ "setToProduct", "(Larc/math/Affine2;Larc/math/Affine2;)Larc/math/Affine2;" },
	{ "inv", "()Larc/math/Affine2;" },
	{ "mul", "(Larc/math/Affine2;)Larc/math/Affine2;" },
	{ "preMul", "(Larc/math/Affine2;)Larc/math/Affine2;" },
	{ "translate", "(FF)Larc/math/Affine2;" },
	{ "translate", "(Larc/math/geom/Vec2;)Larc/math/Affine2;" },
	{ "preTranslate", "(FF)Larc/math/Affine2;" },
	{ "preTranslate", "(Larc/math/geom/Vec2;)Larc/math/Affine2;" },
	{ "scale", "(FF)Larc/math/Affine2;" },
	{ "scale", "(Larc/math/geom/Vec2;)Larc/math/Affine2;" },
	{ "preScale", "(FF)Larc/math/Affine2;" },
	{ "preScale", "(Larc/math/geom/Vec2;)Larc/math/Affine2;" },
	{ "rotate", "(F)Larc/math/Affine2;" },
	{ "rotateRad", "(F)Larc/math/Affine2;" },
	{ "preRotate", "(F)Larc/math/Affine2;" },
	{ "preRotateRad", "(F)Larc/math/Affine2;" },
	{ "shear", "(FF)Larc/math/Affine2;" },
	{ "shear", "(Larc/math/geom/Vec2;)Larc/math/Affine2;" },
	{ "preShear", "(FF)Larc/math/Affine2;" },
	{ "preShear", "(Larc/math/geom/Vec2;)Larc/math/Affine2;" },
	{ "det", "()F" },
	{ "getTranslation", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "isTranslation", "()Z" },
	{ "isIdt", "()Z" },
	{ "applyTo", "(Larc/math/geom/Vec2;)V" },
};

static FieldMetadata fields[] {
	{ "m00", &class_float, offsetof(arc_math_Affine2, F_m00), "F", 1 },
	{ "m01", &class_float, offsetof(arc_math_Affine2, F_m01), "F", 1 },
	{ "m02", &class_float, offsetof(arc_math_Affine2, F_m02), "F", 1 },
	{ "m10", &class_float, offsetof(arc_math_Affine2, F_m10), "F", 1 },
	{ "m11", &class_float, offsetof(arc_math_Affine2, F_m11), "F", 1 },
	{ "m12", &class_float, offsetof(arc_math_Affine2, F_m12), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_Affine2, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_math_Affine2_arc_math_Affine2, 0, "(Larc/math/Affine2;)V", 1 },
	{ "idt", (intptr_t) M_arc_math_Affine2_idt_R_arc_math_Affine2, VTABLE_arc_math_Affine2_idt_R_arc_math_Affine2, "()Larc/math/Affine2;", 1 },
	{ "set", (intptr_t) M_arc_math_Affine2_set_arc_math_Affine2_R_arc_math_Affine2, VTABLE_arc_math_Affine2_set_arc_math_Affine2_R_arc_math_Affine2, "(Larc/math/Affine2;)Larc/math/Affine2;", 1 },
	{ "set", (intptr_t) M_arc_math_Affine2_set_arc_math_Mat_R_arc_math_Affine2, VTABLE_arc_math_Affine2_set_arc_math_Mat_R_arc_math_Affine2, "(Larc/math/Mat;)Larc/math/Affine2;", 1 },
	{ "setToTranslation", (intptr_t) M_arc_math_Affine2_setToTranslation_float_float_R_arc_math_Affine2, VTABLE_arc_math_Affine2_setToTranslation_float_float_R_arc_math_Affine2, "(FF)Larc/math/Affine2;", 1 },
	{ "setToTranslation", (intptr_t) M_arc_math_Affine2_setToTranslation_arc_math_geom_Vec2_R_arc_math_Affine2, VTABLE_arc_math_Affine2_setToTranslation_arc_math_geom_Vec2_R_arc_math_Affine2, "(Larc/math/geom/Vec2;)Larc/math/Affine2;", 1 },
	{ "setToScaling", (intptr_t) M_arc_math_Affine2_setToScaling_float_float_R_arc_math_Affine2, VTABLE_arc_math_Affine2_setToScaling_float_float_R_arc_math_Affine2, "(FF)Larc/math/Affine2;", 1 },
	{ "setToScaling", (intptr_t) M_arc_math_Affine2_setToScaling_arc_math_geom_Vec2_R_arc_math_Affine2, VTABLE_arc_math_Affine2_setToScaling_arc_math_geom_Vec2_R_arc_math_Affine2, "(Larc/math/geom/Vec2;)Larc/math/Affine2;", 1 },
	{ "setToRotation", (intptr_t) M_arc_math_Affine2_setToRotation_float_R_arc_math_Affine2, VTABLE_arc_math_Affine2_setToRotation_float_R_arc_math_Affine2, "(F)Larc/math/Affine2;", 1 },
	{ "setToRotationRad", (intptr_t) M_arc_math_Affine2_setToRotationRad_float_R_arc_math_Affine2, VTABLE_arc_math_Affine2_setToRotationRad_float_R_arc_math_Affine2, "(F)Larc/math/Affine2;", 1 },
	{ "setToRotation", (intptr_t) M_arc_math_Affine2_setToRotation_float_float_R_arc_math_Affine2, VTABLE_arc_math_Affine2_setToRotation_float_float_R_arc_math_Affine2, "(FF)Larc/math/Affine2;", 1 },
	{ "setToShearing", (intptr_t) M_arc_math_Affine2_setToShearing_float_float_R_arc_math_Affine2, VTABLE_arc_math_Affine2_setToShearing_float_float_R_arc_math_Affine2, "(FF)Larc/math/Affine2;", 1 },
	{ "setToShearing", (intptr_t) M_arc_math_Affine2_setToShearing_arc_math_geom_Vec2_R_arc_math_Affine2, VTABLE_arc_math_Affine2_setToShearing_arc_math_geom_Vec2_R_arc_math_Affine2, "(Larc/math/geom/Vec2;)Larc/math/Affine2;", 1 },
	{ "setToTrnRotScl", (intptr_t) M_arc_math_Affine2_setToTrnRotScl_float_float_float_float_float_R_arc_math_Affine2, VTABLE_arc_math_Affine2_setToTrnRotScl_float_float_float_float_float_R_arc_math_Affine2, "(FFFFF)Larc/math/Affine2;", 1 },
	{ "setToTrnRotScl", (intptr_t) M_arc_math_Affine2_setToTrnRotScl_arc_math_geom_Vec2_float_arc_math_geom_Vec2_R_arc_math_Affine2, VTABLE_arc_math_Affine2_setToTrnRotScl_arc_math_geom_Vec2_float_arc_math_geom_Vec2_R_arc_math_Affine2, "(Larc/math/geom/Vec2;FLarc/math/geom/Vec2;)Larc/math/Affine2;", 1 },
	{ "setToTrnRotRadScl", (intptr_t) M_arc_math_Affine2_setToTrnRotRadScl_float_float_float_float_float_R_arc_math_Affine2, VTABLE_arc_math_Affine2_setToTrnRotRadScl_float_float_float_float_float_R_arc_math_Affine2, "(FFFFF)Larc/math/Affine2;", 1 },
	{ "setToTrnRotRadScl", (intptr_t) M_arc_math_Affine2_setToTrnRotRadScl_arc_math_geom_Vec2_float_arc_math_geom_Vec2_R_arc_math_Affine2, VTABLE_arc_math_Affine2_setToTrnRotRadScl_arc_math_geom_Vec2_float_arc_math_geom_Vec2_R_arc_math_Affine2, "(Larc/math/geom/Vec2;FLarc/math/geom/Vec2;)Larc/math/Affine2;", 1 },
	{ "setToTrnScl", (intptr_t) M_arc_math_Affine2_setToTrnScl_float_float_float_float_R_arc_math_Affine2, VTABLE_arc_math_Affine2_setToTrnScl_float_float_float_float_R_arc_math_Affine2, "(FFFF)Larc/math/Affine2;", 1 },
	{ "setToTrnScl", (intptr_t) M_arc_math_Affine2_setToTrnScl_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_Affine2, VTABLE_arc_math_Affine2_setToTrnScl_arc_math_geom_Vec2_arc_math_geom_Vec2_R_arc_math_Affine2, "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;)Larc/math/Affine2;", 1 },
	{ "setToProduct", (intptr_t) M_arc_math_Affine2_setToProduct_arc_math_Affine2_arc_math_Affine2_R_arc_math_Affine2, VTABLE_arc_math_Affine2_setToProduct_arc_math_Affine2_arc_math_Affine2_R_arc_math_Affine2, "(Larc/math/Affine2;Larc/math/Affine2;)Larc/math/Affine2;", 1 },
	{ "inv", (intptr_t) M_arc_math_Affine2_inv_R_arc_math_Affine2, VTABLE_arc_math_Affine2_inv_R_arc_math_Affine2, "()Larc/math/Affine2;", 1 },
	{ "mul", (intptr_t) M_arc_math_Affine2_mul_arc_math_Affine2_R_arc_math_Affine2, VTABLE_arc_math_Affine2_mul_arc_math_Affine2_R_arc_math_Affine2, "(Larc/math/Affine2;)Larc/math/Affine2;", 1 },
	{ "preMul", (intptr_t) M_arc_math_Affine2_preMul_arc_math_Affine2_R_arc_math_Affine2, VTABLE_arc_math_Affine2_preMul_arc_math_Affine2_R_arc_math_Affine2, "(Larc/math/Affine2;)Larc/math/Affine2;", 1 },
	{ "translate", (intptr_t) M_arc_math_Affine2_translate_float_float_R_arc_math_Affine2, VTABLE_arc_math_Affine2_translate_float_float_R_arc_math_Affine2, "(FF)Larc/math/Affine2;", 1 },
	{ "translate", (intptr_t) M_arc_math_Affine2_translate_arc_math_geom_Vec2_R_arc_math_Affine2, VTABLE_arc_math_Affine2_translate_arc_math_geom_Vec2_R_arc_math_Affine2, "(Larc/math/geom/Vec2;)Larc/math/Affine2;", 1 },
	{ "preTranslate", (intptr_t) M_arc_math_Affine2_preTranslate_float_float_R_arc_math_Affine2, VTABLE_arc_math_Affine2_preTranslate_float_float_R_arc_math_Affine2, "(FF)Larc/math/Affine2;", 1 },
	{ "preTranslate", (intptr_t) M_arc_math_Affine2_preTranslate_arc_math_geom_Vec2_R_arc_math_Affine2, VTABLE_arc_math_Affine2_preTranslate_arc_math_geom_Vec2_R_arc_math_Affine2, "(Larc/math/geom/Vec2;)Larc/math/Affine2;", 1 },
	{ "scale", (intptr_t) M_arc_math_Affine2_scale_float_float_R_arc_math_Affine2, VTABLE_arc_math_Affine2_scale_float_float_R_arc_math_Affine2, "(FF)Larc/math/Affine2;", 1 },
	{ "scale", (intptr_t) M_arc_math_Affine2_scale_arc_math_geom_Vec2_R_arc_math_Affine2, VTABLE_arc_math_Affine2_scale_arc_math_geom_Vec2_R_arc_math_Affine2, "(Larc/math/geom/Vec2;)Larc/math/Affine2;", 1 },
	{ "preScale", (intptr_t) M_arc_math_Affine2_preScale_float_float_R_arc_math_Affine2, VTABLE_arc_math_Affine2_preScale_float_float_R_arc_math_Affine2, "(FF)Larc/math/Affine2;", 1 },
	{ "preScale", (intptr_t) M_arc_math_Affine2_preScale_arc_math_geom_Vec2_R_arc_math_Affine2, VTABLE_arc_math_Affine2_preScale_arc_math_geom_Vec2_R_arc_math_Affine2, "(Larc/math/geom/Vec2;)Larc/math/Affine2;", 1 },
	{ "rotate", (intptr_t) M_arc_math_Affine2_rotate_float_R_arc_math_Affine2, VTABLE_arc_math_Affine2_rotate_float_R_arc_math_Affine2, "(F)Larc/math/Affine2;", 1 },
	{ "rotateRad", (intptr_t) M_arc_math_Affine2_rotateRad_float_R_arc_math_Affine2, VTABLE_arc_math_Affine2_rotateRad_float_R_arc_math_Affine2, "(F)Larc/math/Affine2;", 1 },
	{ "preRotate", (intptr_t) M_arc_math_Affine2_preRotate_float_R_arc_math_Affine2, VTABLE_arc_math_Affine2_preRotate_float_R_arc_math_Affine2, "(F)Larc/math/Affine2;", 1 },
	{ "preRotateRad", (intptr_t) M_arc_math_Affine2_preRotateRad_float_R_arc_math_Affine2, VTABLE_arc_math_Affine2_preRotateRad_float_R_arc_math_Affine2, "(F)Larc/math/Affine2;", 1 },
	{ "shear", (intptr_t) M_arc_math_Affine2_shear_float_float_R_arc_math_Affine2, VTABLE_arc_math_Affine2_shear_float_float_R_arc_math_Affine2, "(FF)Larc/math/Affine2;", 1 },
	{ "shear", (intptr_t) M_arc_math_Affine2_shear_arc_math_geom_Vec2_R_arc_math_Affine2, VTABLE_arc_math_Affine2_shear_arc_math_geom_Vec2_R_arc_math_Affine2, "(Larc/math/geom/Vec2;)Larc/math/Affine2;", 1 },
	{ "preShear", (intptr_t) M_arc_math_Affine2_preShear_float_float_R_arc_math_Affine2, VTABLE_arc_math_Affine2_preShear_float_float_R_arc_math_Affine2, "(FF)Larc/math/Affine2;", 1 },
	{ "preShear", (intptr_t) M_arc_math_Affine2_preShear_arc_math_geom_Vec2_R_arc_math_Affine2, VTABLE_arc_math_Affine2_preShear_arc_math_geom_Vec2_R_arc_math_Affine2, "(Larc/math/geom/Vec2;)Larc/math/Affine2;", 1 },
	{ "det", (intptr_t) M_arc_math_Affine2_det_R_float, VTABLE_arc_math_Affine2_det_R_float, "()F", 1 },
	{ "getTranslation", (intptr_t) M_arc_math_Affine2_getTranslation_arc_math_geom_Vec2_R_arc_math_geom_Vec2, VTABLE_arc_math_Affine2_getTranslation_arc_math_geom_Vec2_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 1 },
	{ "isTranslation", (intptr_t) M_arc_math_Affine2_isTranslation_R_boolean, VTABLE_arc_math_Affine2_isTranslation_R_boolean, "()Z", 1 },
	{ "isIdt", (intptr_t) M_arc_math_Affine2_isIdt_R_boolean, VTABLE_arc_math_Affine2_isIdt_R_boolean, "()Z", 1 },
	{ "applyTo", (intptr_t) M_arc_math_Affine2_applyTo_arc_math_geom_Vec2, VTABLE_arc_math_Affine2_applyTo_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "toString", (intptr_t) M_arc_math_Affine2_toString_R_java_lang_String, VTABLE_arc_math_Affine2_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_arc_math_Affine2{
		.nativeName = (intptr_t) "arc/math/Affine2",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_Affine2),
		.classVtable = (intptr_t) vtable_arc_math_Affine2,
		.staticInitializer = (intptr_t) clinit_arc_math_Affine2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_Affine2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 46,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 54,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_Affine2 = registerClass(&class_arc_math_Affine2);

}
