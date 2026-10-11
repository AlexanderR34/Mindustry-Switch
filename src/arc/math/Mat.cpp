#include "arc/math/Mat.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/math/Mat.h"
#include "arc/math/geom/Vec3.h"
#include "java/lang/System.h"
#include "arc/math/Affine2.h"

extern "C" {

jint SF_arc_math_Mat_M00;
jint SF_arc_math_Mat_M01;
jint SF_arc_math_Mat_M02;
jint SF_arc_math_Mat_M10;
jint SF_arc_math_Mat_M11;
jint SF_arc_math_Mat_M12;
jint SF_arc_math_Mat_M20;
jint SF_arc_math_Mat_M21;
jint SF_arc_math_Mat_M22;

void mark_arc_math_Mat(jobject object, jint mark, jint depth) {
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
	auto self = (arc_math_Mat *) object;
	if (self->F_val)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val)->clazz)->markFunction)((jobject) self->F_val, mark, depth + 1);
	if (self->F_tmp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmp)->clazz)->markFunction)((jobject) self->F_tmp, mark, depth + 1);
}

void clinit_arc_math_Mat(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_math_Mat_M00 = jint(0);
	SF_arc_math_Mat_M01 = jint(3);
	SF_arc_math_Mat_M02 = jint(6);
	SF_arc_math_Mat_M10 = jint(1);
	SF_arc_math_Mat_M11 = jint(4);
	SF_arc_math_Mat_M12 = jint(7);
	SF_arc_math_Mat_M20 = jint(2);
	SF_arc_math_Mat_M21 = jint(5);
	SF_arc_math_Mat_M22 = jint(8);
}

void init_arc_math_Mat(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mat(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(24);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (9));
	((arc_math_Mat *) NULL_CHECK(sp[0].o))->F_val = (jref) sp[1].o;
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (9));
	((arc_math_Mat *) NULL_CHECK(sp[0].o))->F_tmp = (jref) sp[1].o;
	LINE_NUMBER(25);
	sp[0].o = (jobject)((func_arc_math_Mat_idt_R_arc_math_Mat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Mat_idt_R_arc_math_Mat])(ctx, (frame[0].o));
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_Mat_arc_math_Mat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mat(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (9));
	((arc_math_Mat *) NULL_CHECK(sp[0].o))->F_val = (jref) sp[1].o;
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (9));
	((arc_math_Mat *) NULL_CHECK(sp[0].o))->F_tmp = (jref) sp[1].o;
	LINE_NUMBER(29);
	sp[0].o = (jobject)((func_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_Mat_Array1_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mat(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(38);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (9));
	((arc_math_Mat *) NULL_CHECK(sp[0].o))->F_val = (jref) sp[1].o;
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (9));
	((arc_math_Mat *) NULL_CHECK(sp[0].o))->F_tmp = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = (jobject)((func_arc_math_Mat_set_Array1_float_R_arc_math_Mat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Mat_set_Array1_float_R_arc_math_Mat])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_math_Mat_mul_Array1_float_Array1_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:mul", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_Mat(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(52);
	frame[2].f = (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2))))));
	LINE_NUMBER(53);
	frame[3].f = (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(4)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5))))));
	LINE_NUMBER(54);
	frame[4].f = (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (6)))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (7))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (6))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (8)))));
	LINE_NUMBER(56);
	frame[5].f = (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2))))));
	LINE_NUMBER(57);
	frame[6].f = (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(4)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5))))));
	LINE_NUMBER(58);
	frame[7].f = (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (6)))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (7))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (7))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (8)))));
	LINE_NUMBER(60);
	frame[8].f = (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2))))));
	LINE_NUMBER(61);
	frame[9].f = (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(4)))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5))))));
	LINE_NUMBER(62);
	frame[10].f = (((((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (6)))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (7))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (8)))));
	LINE_NUMBER(64);
	ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0))) = (frame[2].f);
	LINE_NUMBER(65);
	ARRAY_ACCESS(jfloat, (frame[0].o), (jint(1))) = (frame[5].f);
	LINE_NUMBER(66);
	ARRAY_ACCESS(jfloat, (frame[0].o), (jint(2))) = (frame[8].f);
	LINE_NUMBER(67);
	ARRAY_ACCESS(jfloat, (frame[0].o), (jint(3))) = (frame[3].f);
	LINE_NUMBER(68);
	ARRAY_ACCESS(jfloat, (frame[0].o), (jint(4))) = (frame[6].f);
	LINE_NUMBER(69);
	ARRAY_ACCESS(jfloat, (frame[0].o), (jint(5))) = (frame[9].f);
	LINE_NUMBER(70);
	ARRAY_ACCESS(jfloat, (frame[0].o), (6)) = (frame[4].f);
	LINE_NUMBER(71);
	ARRAY_ACCESS(jfloat, (frame[0].o), (7)) = (frame[7].f);
	LINE_NUMBER(72);
	ARRAY_ACCESS(jfloat, (frame[0].o), (8)) = (frame[10].f);
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:setOrtho", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(77);
	frame[5].f = ((frame[1].f) + (frame[3].f));
	frame[6].f = ((frame[2].f) + (frame[4].f));
	LINE_NUMBER(79);
	frame[7].f = ((jfloat(2)) / ((frame[5].f) - (frame[1].f)));
	LINE_NUMBER(80);
	frame[8].f = ((jfloat(2)) / ((frame[6].f) - (frame[2].f)));
	LINE_NUMBER(82);
	frame[9].f = ((-((frame[5].f) + (frame[1].f))) / ((frame[5].f) - (frame[1].f)));
	LINE_NUMBER(83);
	frame[10].f = ((-((frame[6].f) + (frame[2].f))) / ((frame[6].f) - (frame[2].f)));
	LINE_NUMBER(85);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (frame[7].f);
	LINE_NUMBER(86);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (frame[8].f);
	LINE_NUMBER(88);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (frame[9].f);
	LINE_NUMBER(89);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (frame[10].f);
	LINE_NUMBER(90);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (jfloat(1));
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_idt_R_arc_math_Mat(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:idt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	frame[1].o = sp[0].o;
	LINE_NUMBER(101);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))) = (jfloat(1));
	LINE_NUMBER(102);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))) = (jfloat(0));
	LINE_NUMBER(103);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2))) = (jfloat(0));
	LINE_NUMBER(104);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3))) = (jfloat(0));
	LINE_NUMBER(105);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(4))) = (jfloat(1));
	LINE_NUMBER(106);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5))) = (jfloat(0));
	LINE_NUMBER(107);
	ARRAY_ACCESS(jfloat, (frame[1].o), (6)) = (jfloat(0));
	LINE_NUMBER(108);
	ARRAY_ACCESS(jfloat, (frame[1].o), (7)) = (jfloat(0));
	LINE_NUMBER(109);
	ARRAY_ACCESS(jfloat, (frame[1].o), (8)) = (jfloat(1));
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_mul_arc_math_Mat_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:mul", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(125);
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0)));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp1 = temp0 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))));
	jfloat temp2 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3)));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp3 = temp1 + (temp2 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)))));
	jfloat temp4 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (6));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	frame[3].f = (temp3 + (temp4 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))))));
	LINE_NUMBER(126);
	jfloat temp5 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0)));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp6 = temp5 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))));
	jfloat temp7 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3)));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp8 = temp6 + (temp7 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)))));
	jfloat temp9 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (6));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	frame[4].f = (temp8 + (temp9 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))))));
	LINE_NUMBER(127);
	jfloat temp10 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0)));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp11 = temp10 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	jfloat temp12 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3)));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp13 = temp11 + (temp12 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))));
	jfloat temp14 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (6));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	frame[5].f = (temp13 + (temp14 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)))));
	LINE_NUMBER(129);
	jfloat temp15 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1)));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp16 = temp15 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))));
	jfloat temp17 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4)));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp18 = temp16 + (temp17 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)))));
	jfloat temp19 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (7));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	frame[6].f = (temp18 + (temp19 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))))));
	LINE_NUMBER(130);
	jfloat temp20 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1)));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp21 = temp20 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))));
	jfloat temp22 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4)));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp23 = temp21 + (temp22 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)))));
	jfloat temp24 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (7));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	frame[7].f = (temp23 + (temp24 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))))));
	LINE_NUMBER(131);
	jfloat temp25 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1)));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp26 = temp25 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	jfloat temp27 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4)));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp28 = temp26 + (temp27 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))));
	jfloat temp29 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (7));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	frame[8].f = (temp28 + (temp29 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)))));
	LINE_NUMBER(133);
	jfloat temp30 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2)));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp31 = temp30 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))));
	jfloat temp32 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5)));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp33 = temp31 + (temp32 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)))));
	jfloat temp34 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (8));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	frame[9].f = (temp33 + (temp34 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))))));
	LINE_NUMBER(134);
	jfloat temp35 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2)));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp36 = temp35 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))));
	jfloat temp37 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5)));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp38 = temp36 + (temp37 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)))));
	jfloat temp39 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (8));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	frame[10].f = (temp38 + (temp39 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))))));
	LINE_NUMBER(135);
	jfloat temp40 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2)));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp41 = temp40 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6)));
	jfloat temp42 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5)));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp43 = temp41 + (temp42 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))));
	jfloat temp44 = (jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (8));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	frame[11].f = (temp43 + (temp44 * ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8)))));
	LINE_NUMBER(137);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))) = (frame[3].f);
	LINE_NUMBER(138);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1))) = (frame[6].f);
	LINE_NUMBER(139);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2))) = (frame[9].f);
	LINE_NUMBER(140);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))) = (frame[4].f);
	LINE_NUMBER(141);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4))) = (frame[7].f);
	LINE_NUMBER(142);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5))) = (frame[10].f);
	LINE_NUMBER(143);
	ARRAY_ACCESS(jfloat, (frame[2].o), (6)) = (frame[5].f);
	LINE_NUMBER(144);
	ARRAY_ACCESS(jfloat, (frame[2].o), (7)) = (frame[8].f);
	LINE_NUMBER(145);
	ARRAY_ACCESS(jfloat, (frame[2].o), (8)) = (frame[11].f);
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_mulLeft_arc_math_Mat_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:mulLeft", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(162);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp0 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp1 = temp0 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1)))));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	frame[3].f = (temp1 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2))))));
	LINE_NUMBER(163);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp2 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp3 = temp2 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4)))));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	frame[4].f = (temp3 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5))))));
	LINE_NUMBER(164);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp4 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (6)));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp5 = temp4 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (7))));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	frame[5].f = (temp5 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (6))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (8)))));
	LINE_NUMBER(166);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp6 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp7 = temp6 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1)))));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	frame[6].f = (temp7 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2))))));
	LINE_NUMBER(167);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp8 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp9 = temp8 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4)))));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	frame[7].f = (temp9 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5))))));
	LINE_NUMBER(168);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp10 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (6)));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp11 = temp10 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (7))));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	frame[8].f = (temp11 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (7))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (8)))));
	LINE_NUMBER(170);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp12 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp13 = temp12 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1)))));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	frame[9].f = (temp13 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2))))));
	LINE_NUMBER(171);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp14 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp15 = temp14 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4)))));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	frame[10].f = (temp15 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5))))));
	LINE_NUMBER(172);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp16 = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (6)));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jfloat temp17 = temp16 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (7))));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	frame[11].f = (temp17 + (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (8))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (8)))));
	LINE_NUMBER(174);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))) = (frame[3].f);
	LINE_NUMBER(175);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1))) = (frame[6].f);
	LINE_NUMBER(176);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2))) = (frame[9].f);
	LINE_NUMBER(177);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))) = (frame[4].f);
	LINE_NUMBER(178);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4))) = (frame[7].f);
	LINE_NUMBER(179);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5))) = (frame[10].f);
	LINE_NUMBER(180);
	ARRAY_ACCESS(jfloat, (frame[2].o), (6)) = (frame[5].f);
	LINE_NUMBER(181);
	ARRAY_ACCESS(jfloat, (frame[2].o), (7)) = (frame[8].f);
	LINE_NUMBER(182);
	ARRAY_ACCESS(jfloat, (frame[2].o), (8)) = (frame[11].f);
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_setToRotation_float_R_arc_math_Mat(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:setToRotation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((func_arc_math_Mat_setToRotationRad_float_R_arc_math_Mat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Mat_setToRotationRad_float_R_arc_math_Mat])(ctx, (frame[0].o), ((jfloat(0.017453292f)) * (frame[1].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_setToRotationRad_float_R_arc_math_Mat(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:setToRotationRad", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(202);
	jdouble temp0 = (jdouble)SM_java_lang_Math_cos_double_R_double(ctx, (jdouble((frame[1].f))));
	frame[2].f = (jfloat(temp0));
	LINE_NUMBER(203);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble((frame[1].f))));
	frame[3].f = (jfloat(temp1));
	LINE_NUMBER(204);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	frame[4].o = sp[0].o;
	LINE_NUMBER(206);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(0))) = (frame[2].f);
	LINE_NUMBER(207);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(1))) = (frame[3].f);
	LINE_NUMBER(208);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(2))) = (jfloat(0));
	LINE_NUMBER(210);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(3))) = (-(frame[3].f));
	LINE_NUMBER(211);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(4))) = (frame[2].f);
	LINE_NUMBER(212);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(5))) = (jfloat(0));
	LINE_NUMBER(214);
	ARRAY_ACCESS(jfloat, (frame[4].o), (6)) = (jfloat(0));
	LINE_NUMBER(215);
	ARRAY_ACCESS(jfloat, (frame[4].o), (7)) = (jfloat(0));
	LINE_NUMBER(216);
	ARRAY_ACCESS(jfloat, (frame[4].o), (8)) = (jfloat(1));
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_setToRotation_arc_math_geom_Vec3_float_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:setToRotation", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(222);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_cosDeg_float_R_float(ctx, (frame[2].f));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sinDeg_float_R_float(ctx, (frame[2].f));
	sp[0].o = (jobject)((func_arc_math_Mat_setToRotation_arc_math_geom_Vec3_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_setToRotation_arc_math_geom_Vec3_float_float_R_arc_math_Mat])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_setToRotation_arc_math_geom_Vec3_float_float_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:setToRotation", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	frame[4].o = sp[0].o;
	LINE_NUMBER(227);
	frame[5].f = ((jfloat(1)) - (frame[2].f));
	LINE_NUMBER(228);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(0))) = ((((frame[5].f) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x)) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x)) + (frame[2].f));
	LINE_NUMBER(229);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(1))) = ((((frame[5].f) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x)) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y)) - (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z) * (frame[3].f)));
	LINE_NUMBER(230);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(2))) = ((((frame[5].f) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z)) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x)) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) * (frame[3].f)));
	LINE_NUMBER(231);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(3))) = ((((frame[5].f) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x)) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y)) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z) * (frame[3].f)));
	LINE_NUMBER(232);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(4))) = ((((frame[5].f) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y)) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y)) + (frame[2].f));
	LINE_NUMBER(233);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(5))) = ((((frame[5].f) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y)) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z)) - (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x) * (frame[3].f)));
	LINE_NUMBER(234);
	ARRAY_ACCESS(jfloat, (frame[4].o), (6)) = ((((frame[5].f) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z)) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x)) - (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) * (frame[3].f)));
	LINE_NUMBER(235);
	ARRAY_ACCESS(jfloat, (frame[4].o), (7)) = ((((frame[5].f) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y)) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z)) + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x) * (frame[3].f)));
	LINE_NUMBER(236);
	ARRAY_ACCESS(jfloat, (frame[4].o), (8)) = ((((frame[5].f) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z)) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z)) + (frame[2].f));
	LINE_NUMBER(237);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_setToTranslation_float_float_R_arc_math_Mat(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:setToTranslation", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	frame[3].o = sp[0].o;
	LINE_NUMBER(249);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(0))) = (jfloat(1));
	LINE_NUMBER(250);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(1))) = (jfloat(0));
	LINE_NUMBER(251);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(2))) = (jfloat(0));
	LINE_NUMBER(253);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(3))) = (jfloat(0));
	LINE_NUMBER(254);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(4))) = (jfloat(1));
	LINE_NUMBER(255);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(5))) = (jfloat(0));
	LINE_NUMBER(257);
	ARRAY_ACCESS(jfloat, (frame[3].o), (6)) = (frame[1].f);
	LINE_NUMBER(258);
	ARRAY_ACCESS(jfloat, (frame[3].o), (7)) = (frame[2].f);
	LINE_NUMBER(259);
	ARRAY_ACCESS(jfloat, (frame[3].o), (8)) = (jfloat(1));
	LINE_NUMBER(261);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_setToTranslation_arc_math_geom_Vec2_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:setToTranslation", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(272);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))) = (jfloat(1));
	LINE_NUMBER(273);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1))) = (jfloat(0));
	LINE_NUMBER(274);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2))) = (jfloat(0));
	LINE_NUMBER(276);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))) = (jfloat(0));
	LINE_NUMBER(277);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4))) = (jfloat(1));
	LINE_NUMBER(278);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5))) = (jfloat(0));
	LINE_NUMBER(280);
	ARRAY_ACCESS(jfloat, (frame[2].o), (6)) = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(281);
	ARRAY_ACCESS(jfloat, (frame[2].o), (7)) = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(282);
	ARRAY_ACCESS(jfloat, (frame[2].o), (8)) = (jfloat(1));
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_setToScaling_float_float_R_arc_math_Mat(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:setToScaling", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	frame[3].o = sp[0].o;
	LINE_NUMBER(295);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(0))) = (frame[1].f);
	LINE_NUMBER(296);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(1))) = (jfloat(0));
	LINE_NUMBER(297);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(2))) = (jfloat(0));
	LINE_NUMBER(298);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(3))) = (jfloat(0));
	LINE_NUMBER(299);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(4))) = (frame[2].f);
	LINE_NUMBER(300);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(5))) = (jfloat(0));
	LINE_NUMBER(301);
	ARRAY_ACCESS(jfloat, (frame[3].o), (6)) = (jfloat(0));
	LINE_NUMBER(302);
	ARRAY_ACCESS(jfloat, (frame[3].o), (7)) = (jfloat(0));
	LINE_NUMBER(303);
	ARRAY_ACCESS(jfloat, (frame[3].o), (8)) = (jfloat(1));
	LINE_NUMBER(304);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_setToScaling_arc_math_geom_Vec2_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:setToScaling", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(314);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))) = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(315);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1))) = (jfloat(0));
	LINE_NUMBER(316);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2))) = (jfloat(0));
	LINE_NUMBER(317);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))) = (jfloat(0));
	LINE_NUMBER(318);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4))) = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(319);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5))) = (jfloat(0));
	LINE_NUMBER(320);
	ARRAY_ACCESS(jfloat, (frame[2].o), (6)) = (jfloat(0));
	LINE_NUMBER(321);
	ARRAY_ACCESS(jfloat, (frame[2].o), (7)) = (jfloat(0));
	LINE_NUMBER(322);
	ARRAY_ACCESS(jfloat, (frame[2].o), (8)) = (jfloat(1));
	LINE_NUMBER(323);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(327);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	frame[1].o = sp[0].o;
	LINE_NUMBER(328);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"["_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (6))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]\n["_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(4)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (7))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]\n["_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5)))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (8))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_Mat_det_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:det", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(335);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	frame[1].o = sp[0].o;
	LINE_NUMBER(336);
	popStackFrame(ctx);
	return (((((((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(4))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (8)))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (7)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2)))))) + ((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (6))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5)))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (7)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5)))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (8))))) - ((((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (6))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(4))))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2))))));
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_inv_R_arc_math_Mat(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:inv", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(346);
	jfloat temp0 = (jfloat)((func_arc_math_Mat_det_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Mat_det_R_float])(ctx, (frame[0].o));
	frame[1].f = temp0;
	LINE_NUMBER(347);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_2;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Can't invert a singular matrix"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(349);
	frame[2].f = ((jfloat(1)) / (frame[1].f));
	LINE_NUMBER(350);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_tmp;
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	frame[4].o = sp[0].o;
	LINE_NUMBER(352);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(0))) = ((((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (8)))) - (((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (7)))));
	LINE_NUMBER(353);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(1))) = ((((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (7)))) - (((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (8)))));
	LINE_NUMBER(354);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(2))) = ((((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (jint(5))))) - (((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (jint(4))))));
	LINE_NUMBER(355);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(3))) = ((((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (jint(5)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (6)))) - (((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (8)))));
	LINE_NUMBER(356);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(4))) = ((((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (8)))) - (((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (6)))));
	LINE_NUMBER(357);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(5))) = ((((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (jint(2)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (jint(3))))) - (((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (jint(5))))));
	LINE_NUMBER(358);
	ARRAY_ACCESS(jfloat, (frame[3].o), (6)) = ((((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (7)))) - (((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (6)))));
	LINE_NUMBER(359);
	ARRAY_ACCESS(jfloat, (frame[3].o), (7)) = ((((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (6)))) - (((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (7)))));
	LINE_NUMBER(360);
	ARRAY_ACCESS(jfloat, (frame[3].o), (8)) = ((((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (jint(4))))) - (((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[4].o), (jint(3))))));
	LINE_NUMBER(362);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(0))) = ((frame[2].f) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(0)))));
	LINE_NUMBER(363);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(1))) = ((frame[2].f) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(1)))));
	LINE_NUMBER(364);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(2))) = ((frame[2].f) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(2)))));
	LINE_NUMBER(365);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(3))) = ((frame[2].f) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(3)))));
	LINE_NUMBER(366);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(4))) = ((frame[2].f) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(4)))));
	LINE_NUMBER(367);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(5))) = ((frame[2].f) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (jint(5)))));
	LINE_NUMBER(368);
	ARRAY_ACCESS(jfloat, (frame[4].o), (6)) = ((frame[2].f) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (6))));
	LINE_NUMBER(369);
	ARRAY_ACCESS(jfloat, (frame[4].o), (7)) = ((frame[2].f) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (7))));
	LINE_NUMBER(370);
	ARRAY_ACCESS(jfloat, (frame[4].o), (8)) = ((frame[2].f) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (8))));
	LINE_NUMBER(372);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(381);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[1].o)))->F_val;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(382);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_set_arc_math_Affine2_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(391);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(393);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))) = ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m00);
	LINE_NUMBER(394);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1))) = ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m10);
	LINE_NUMBER(395);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2))) = (jfloat(0));
	LINE_NUMBER(396);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))) = ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m01);
	LINE_NUMBER(397);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4))) = ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m11);
	LINE_NUMBER(398);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5))) = (jfloat(0));
	LINE_NUMBER(399);
	ARRAY_ACCESS(jfloat, (frame[2].o), (6)) = ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m02);
	LINE_NUMBER(400);
	ARRAY_ACCESS(jfloat, (frame[2].o), (7)) = ((jfloat)((arc_math_Affine2 *) NULL_CHECK((frame[1].o)))->F_m12);
	LINE_NUMBER(401);
	ARRAY_ACCESS(jfloat, (frame[2].o), (8)) = (jfloat(1));
	LINE_NUMBER(403);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_set_Array1_float_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(414);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, temp1, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(415);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_trn_arc_math_geom_Vec2_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:trn", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(424);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = 6;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(425);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = 7;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(426);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_trn_float_float_R_arc_math_Mat(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:trn", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(436);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = 6;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (frame[1].f));
	LINE_NUMBER(437);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = 7;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) + (frame[2].f));
	LINE_NUMBER(438);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_trn_arc_math_geom_Vec3_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:trn", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(447);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = 6;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(448);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = 7;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) + ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(449);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_translate_float_float_R_arc_math_Mat(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:translate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(460);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	frame[3].o = sp[0].o;
	LINE_NUMBER(461);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(1));
	LINE_NUMBER(462);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (jfloat(0));
	LINE_NUMBER(463);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (jfloat(0));
	LINE_NUMBER(465);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(0));
	LINE_NUMBER(466);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (jfloat(1));
	LINE_NUMBER(467);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (jfloat(0));
	LINE_NUMBER(469);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (frame[1].f);
	LINE_NUMBER(470);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (frame[2].f);
	LINE_NUMBER(471);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (jfloat(1));
	LINE_NUMBER(472);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_tmp;
	SM_arc_math_Mat_mul_Array1_float_Array1_float(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(473);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_translate_arc_math_geom_Vec2_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:translate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(483);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(484);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(1));
	LINE_NUMBER(485);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (jfloat(0));
	LINE_NUMBER(486);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (jfloat(0));
	LINE_NUMBER(488);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(0));
	LINE_NUMBER(489);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (jfloat(1));
	LINE_NUMBER(490);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (jfloat(0));
	LINE_NUMBER(492);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(493);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(494);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_tmp;
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (jfloat(1));
	LINE_NUMBER(495);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_tmp;
	SM_arc_math_Mat_mul_Array1_float_Array1_float(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(496);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_rotate_float_R_arc_math_Mat(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:rotate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(506);
	sp[0].o = (jobject)((func_arc_math_Mat_rotateRad_float_R_arc_math_Mat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_Mat_rotateRad_float_R_arc_math_Mat])(ctx, (frame[0].o), ((jfloat(0.017453292f)) * (frame[1].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_rotateRad_float_R_arc_math_Mat(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:rotateRad", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(516);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(517);
	jdouble temp0 = (jdouble)SM_java_lang_Math_cos_double_R_double(ctx, (jdouble((frame[1].f))));
	frame[2].f = (jfloat(temp0));
	LINE_NUMBER(518);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble((frame[1].f))));
	frame[3].f = (jfloat(temp1));
	LINE_NUMBER(519);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_tmp;
	frame[4].o = sp[0].o;
	LINE_NUMBER(521);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(0))) = (frame[2].f);
	LINE_NUMBER(522);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(1))) = (frame[3].f);
	LINE_NUMBER(523);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(2))) = (jfloat(0));
	LINE_NUMBER(525);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(3))) = (-(frame[3].f));
	LINE_NUMBER(526);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(4))) = (frame[2].f);
	LINE_NUMBER(527);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(5))) = (jfloat(0));
	LINE_NUMBER(529);
	ARRAY_ACCESS(jfloat, (frame[4].o), (6)) = (jfloat(0));
	LINE_NUMBER(530);
	ARRAY_ACCESS(jfloat, (frame[4].o), (7)) = (jfloat(0));
	LINE_NUMBER(531);
	ARRAY_ACCESS(jfloat, (frame[4].o), (8)) = (jfloat(1));
	LINE_NUMBER(532);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	SM_arc_math_Mat_mul_Array1_float_Array1_float(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(533);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_scale_float_float_R_arc_math_Mat(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:scale", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(544);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_tmp;
	frame[3].o = sp[0].o;
	LINE_NUMBER(545);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(0))) = (frame[1].f);
	LINE_NUMBER(546);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(1))) = (jfloat(0));
	LINE_NUMBER(547);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(2))) = (jfloat(0));
	LINE_NUMBER(548);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(3))) = (jfloat(0));
	LINE_NUMBER(549);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(4))) = (frame[2].f);
	LINE_NUMBER(550);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(5))) = (jfloat(0));
	LINE_NUMBER(551);
	ARRAY_ACCESS(jfloat, (frame[3].o), (6)) = (jfloat(0));
	LINE_NUMBER(552);
	ARRAY_ACCESS(jfloat, (frame[3].o), (7)) = (jfloat(0));
	LINE_NUMBER(553);
	ARRAY_ACCESS(jfloat, (frame[3].o), (8)) = (jfloat(1));
	LINE_NUMBER(554);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	SM_arc_math_Mat_mul_Array1_float_Array1_float(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(555);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_scale_arc_math_geom_Vec2_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:scale", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(565);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_tmp;
	frame[2].o = sp[0].o;
	LINE_NUMBER(566);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))) = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(567);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1))) = (jfloat(0));
	LINE_NUMBER(568);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2))) = (jfloat(0));
	LINE_NUMBER(569);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))) = (jfloat(0));
	LINE_NUMBER(570);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4))) = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(571);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(5))) = (jfloat(0));
	LINE_NUMBER(572);
	ARRAY_ACCESS(jfloat, (frame[2].o), (6)) = (jfloat(0));
	LINE_NUMBER(573);
	ARRAY_ACCESS(jfloat, (frame[2].o), (7)) = (jfloat(0));
	LINE_NUMBER(574);
	ARRAY_ACCESS(jfloat, (frame[2].o), (8)) = (jfloat(1));
	LINE_NUMBER(575);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	SM_arc_math_Mat_mul_Array1_float_Array1_float(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(576);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_getValues_R_Array1_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:getValues", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(584);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_getTranslation_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:getTranslation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(588);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (6)));
	LINE_NUMBER(589);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (7)));
	LINE_NUMBER(590);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_getScale_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:getScale", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(594);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	frame[2].o = sp[0].o;
	LINE_NUMBER(595);
	sp[0].o = frame[1].o;
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3)))))))));
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (jfloat(temp0));
	LINE_NUMBER(596);
	sp[0].o = frame[1].o;
	jdouble temp1 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1))))) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4)))) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4)))))))));
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (jfloat(temp1));
	LINE_NUMBER(597);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_Mat_getRotation_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:getRotation", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(601);
	jfloat temp0 = jfloat(57.295776f);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	jdouble temp1 = jdouble(((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)))));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	jdouble temp2 = (jdouble)SM_java_lang_Math_atan2_double_double_R_double(ctx, temp1, (jdouble(((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)))))));
	popStackFrame(ctx);
	return (temp0 * (jfloat(temp2)));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_Mat_getRotationRad_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:getRotationRad", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(605);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	jdouble temp0 = jdouble(((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(1)))));
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	jdouble temp1 = (jdouble)SM_java_lang_Math_atan2_double_double_R_double(ctx, temp0, (jdouble(((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (jint(0)))))));
	popStackFrame(ctx);
	return (jfloat(temp1));
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_scl_float_R_arc_math_Mat(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:scl", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(614);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) * (frame[1].f));
	LINE_NUMBER(615);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = jint(4);
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) * (frame[1].f));
	LINE_NUMBER(616);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_scl_arc_math_geom_Vec2_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:scl", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(625);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(626);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = jint(4);
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(627);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_scl_arc_math_geom_Vec3_R_arc_math_Mat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:scl", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(636);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(637);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	jint temp3 = jint(4);
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) * ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(638);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_Mat_transpose_R_arc_math_Mat(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/Mat:transpose", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(647);
	sp[0].o = (jobject)((arc_math_Mat *) NULL_CHECK((frame[0].o)))->F_val;
	frame[1].o = sp[0].o;
	LINE_NUMBER(648);
	frame[2].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))));
	LINE_NUMBER(649);
	frame[3].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2))));
	LINE_NUMBER(650);
	frame[4].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3))));
	LINE_NUMBER(651);
	frame[5].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5))));
	LINE_NUMBER(652);
	frame[6].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (6)));
	LINE_NUMBER(653);
	frame[7].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (7)));
	LINE_NUMBER(654);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3))) = (frame[2].f);
	LINE_NUMBER(655);
	ARRAY_ACCESS(jfloat, (frame[1].o), (6)) = (frame[3].f);
	LINE_NUMBER(656);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))) = (frame[4].f);
	LINE_NUMBER(657);
	ARRAY_ACCESS(jfloat, (frame[1].o), (7)) = (frame[5].f);
	LINE_NUMBER(658);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2))) = (frame[6].f);
	LINE_NUMBER(659);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5))) = (frame[7].f);
	LINE_NUMBER(660);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_Mat[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_math_Mat_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat,
	(void *) M_arc_math_Mat_idt_R_arc_math_Mat,
	(void *) M_arc_math_Mat_mul_arc_math_Mat_R_arc_math_Mat,
	(void *) M_arc_math_Mat_mulLeft_arc_math_Mat_R_arc_math_Mat,
	(void *) M_arc_math_Mat_setToRotation_float_R_arc_math_Mat,
	(void *) M_arc_math_Mat_setToRotationRad_float_R_arc_math_Mat,
	(void *) M_arc_math_Mat_setToRotation_arc_math_geom_Vec3_float_R_arc_math_Mat,
	(void *) M_arc_math_Mat_setToRotation_arc_math_geom_Vec3_float_float_R_arc_math_Mat,
	(void *) M_arc_math_Mat_setToTranslation_float_float_R_arc_math_Mat,
	(void *) M_arc_math_Mat_setToTranslation_arc_math_geom_Vec2_R_arc_math_Mat,
	(void *) M_arc_math_Mat_setToScaling_float_float_R_arc_math_Mat,
	(void *) M_arc_math_Mat_setToScaling_arc_math_geom_Vec2_R_arc_math_Mat,
	(void *) M_arc_math_Mat_det_R_float,
	(void *) M_arc_math_Mat_inv_R_arc_math_Mat,
	(void *) M_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat,
	(void *) M_arc_math_Mat_set_arc_math_Affine2_R_arc_math_Mat,
	(void *) M_arc_math_Mat_set_Array1_float_R_arc_math_Mat,
	(void *) M_arc_math_Mat_trn_arc_math_geom_Vec2_R_arc_math_Mat,
	(void *) M_arc_math_Mat_trn_float_float_R_arc_math_Mat,
	(void *) M_arc_math_Mat_trn_arc_math_geom_Vec3_R_arc_math_Mat,
	(void *) M_arc_math_Mat_translate_float_float_R_arc_math_Mat,
	(void *) M_arc_math_Mat_translate_arc_math_geom_Vec2_R_arc_math_Mat,
	(void *) M_arc_math_Mat_rotate_float_R_arc_math_Mat,
	(void *) M_arc_math_Mat_rotateRad_float_R_arc_math_Mat,
	(void *) M_arc_math_Mat_scale_float_float_R_arc_math_Mat,
	(void *) M_arc_math_Mat_scale_arc_math_geom_Vec2_R_arc_math_Mat,
	(void *) M_arc_math_Mat_getValues_R_Array1_float,
	(void *) M_arc_math_Mat_getTranslation_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_math_Mat_getScale_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_math_Mat_getRotation_R_float,
	(void *) M_arc_math_Mat_getRotationRad_R_float,
	(void *) M_arc_math_Mat_scl_float_R_arc_math_Mat,
	(void *) M_arc_math_Mat_scl_arc_math_geom_Vec2_R_arc_math_Mat,
	(void *) M_arc_math_Mat_scl_arc_math_geom_Vec3_R_arc_math_Mat,
	(void *) M_arc_math_Mat_transpose_R_arc_math_Mat,
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
	{ "setOrtho", "(FFFF)Larc/math/Mat;" },
	{ "idt", "()Larc/math/Mat;" },
	{ "mul", "(Larc/math/Mat;)Larc/math/Mat;" },
	{ "mulLeft", "(Larc/math/Mat;)Larc/math/Mat;" },
	{ "setToRotation", "(F)Larc/math/Mat;" },
	{ "setToRotationRad", "(F)Larc/math/Mat;" },
	{ "setToRotation", "(Larc/math/geom/Vec3;F)Larc/math/Mat;" },
	{ "setToRotation", "(Larc/math/geom/Vec3;FF)Larc/math/Mat;" },
	{ "setToTranslation", "(FF)Larc/math/Mat;" },
	{ "setToTranslation", "(Larc/math/geom/Vec2;)Larc/math/Mat;" },
	{ "setToScaling", "(FF)Larc/math/Mat;" },
	{ "setToScaling", "(Larc/math/geom/Vec2;)Larc/math/Mat;" },
	{ "det", "()F" },
	{ "inv", "()Larc/math/Mat;" },
	{ "set", "(Larc/math/Mat;)Larc/math/Mat;" },
	{ "set", "(Larc/math/Affine2;)Larc/math/Mat;" },
	{ "set", "([F)Larc/math/Mat;" },
	{ "trn", "(Larc/math/geom/Vec2;)Larc/math/Mat;" },
	{ "trn", "(FF)Larc/math/Mat;" },
	{ "trn", "(Larc/math/geom/Vec3;)Larc/math/Mat;" },
	{ "translate", "(FF)Larc/math/Mat;" },
	{ "translate", "(Larc/math/geom/Vec2;)Larc/math/Mat;" },
	{ "rotate", "(F)Larc/math/Mat;" },
	{ "rotateRad", "(F)Larc/math/Mat;" },
	{ "scale", "(FF)Larc/math/Mat;" },
	{ "scale", "(Larc/math/geom/Vec2;)Larc/math/Mat;" },
	{ "getValues", "()[F" },
	{ "getTranslation", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "getScale", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "getRotation", "()F" },
	{ "getRotationRad", "()F" },
	{ "scl", "(F)Larc/math/Mat;" },
	{ "scl", "(Larc/math/geom/Vec2;)Larc/math/Mat;" },
	{ "scl", "(Larc/math/geom/Vec3;)Larc/math/Mat;" },
	{ "transpose", "()Larc/math/Mat;" },
};

static FieldMetadata fields[] {
	{ "M00", &class_int, (intptr_t) &SF_arc_math_Mat_M00, "I", 25 },
	{ "M01", &class_int, (intptr_t) &SF_arc_math_Mat_M01, "I", 25 },
	{ "M02", &class_int, (intptr_t) &SF_arc_math_Mat_M02, "I", 25 },
	{ "M10", &class_int, (intptr_t) &SF_arc_math_Mat_M10, "I", 25 },
	{ "M11", &class_int, (intptr_t) &SF_arc_math_Mat_M11, "I", 25 },
	{ "M12", &class_int, (intptr_t) &SF_arc_math_Mat_M12, "I", 25 },
	{ "M20", &class_int, (intptr_t) &SF_arc_math_Mat_M20, "I", 25 },
	{ "M21", &class_int, (intptr_t) &SF_arc_math_Mat_M21, "I", 25 },
	{ "M22", &class_int, (intptr_t) &SF_arc_math_Mat_M22, "I", 25 },
	{ "val", getArrayClass(&class_float, 1), offsetof(arc_math_Mat, F_val), "[F", 1 },
	{ "tmp", getArrayClass(&class_float, 1), offsetof(arc_math_Mat, F_tmp), "[F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_Mat, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_math_Mat_arc_math_Mat, 0, "(Larc/math/Mat;)V", 1 },
	{ "<init>", (intptr_t) init_arc_math_Mat_Array1_float, 0, "([F)V", 1 },
	{ "mul", (intptr_t) SM_arc_math_Mat_mul_Array1_float_Array1_float, 0, "([F[F)V", 10 },
	{ "setOrtho", (intptr_t) M_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat, VTABLE_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat, "(FFFF)Larc/math/Mat;", 1 },
	{ "idt", (intptr_t) M_arc_math_Mat_idt_R_arc_math_Mat, VTABLE_arc_math_Mat_idt_R_arc_math_Mat, "()Larc/math/Mat;", 1 },
	{ "mul", (intptr_t) M_arc_math_Mat_mul_arc_math_Mat_R_arc_math_Mat, VTABLE_arc_math_Mat_mul_arc_math_Mat_R_arc_math_Mat, "(Larc/math/Mat;)Larc/math/Mat;", 1 },
	{ "mulLeft", (intptr_t) M_arc_math_Mat_mulLeft_arc_math_Mat_R_arc_math_Mat, VTABLE_arc_math_Mat_mulLeft_arc_math_Mat_R_arc_math_Mat, "(Larc/math/Mat;)Larc/math/Mat;", 1 },
	{ "setToRotation", (intptr_t) M_arc_math_Mat_setToRotation_float_R_arc_math_Mat, VTABLE_arc_math_Mat_setToRotation_float_R_arc_math_Mat, "(F)Larc/math/Mat;", 1 },
	{ "setToRotationRad", (intptr_t) M_arc_math_Mat_setToRotationRad_float_R_arc_math_Mat, VTABLE_arc_math_Mat_setToRotationRad_float_R_arc_math_Mat, "(F)Larc/math/Mat;", 1 },
	{ "setToRotation", (intptr_t) M_arc_math_Mat_setToRotation_arc_math_geom_Vec3_float_R_arc_math_Mat, VTABLE_arc_math_Mat_setToRotation_arc_math_geom_Vec3_float_R_arc_math_Mat, "(Larc/math/geom/Vec3;F)Larc/math/Mat;", 1 },
	{ "setToRotation", (intptr_t) M_arc_math_Mat_setToRotation_arc_math_geom_Vec3_float_float_R_arc_math_Mat, VTABLE_arc_math_Mat_setToRotation_arc_math_geom_Vec3_float_float_R_arc_math_Mat, "(Larc/math/geom/Vec3;FF)Larc/math/Mat;", 1 },
	{ "setToTranslation", (intptr_t) M_arc_math_Mat_setToTranslation_float_float_R_arc_math_Mat, VTABLE_arc_math_Mat_setToTranslation_float_float_R_arc_math_Mat, "(FF)Larc/math/Mat;", 1 },
	{ "setToTranslation", (intptr_t) M_arc_math_Mat_setToTranslation_arc_math_geom_Vec2_R_arc_math_Mat, VTABLE_arc_math_Mat_setToTranslation_arc_math_geom_Vec2_R_arc_math_Mat, "(Larc/math/geom/Vec2;)Larc/math/Mat;", 1 },
	{ "setToScaling", (intptr_t) M_arc_math_Mat_setToScaling_float_float_R_arc_math_Mat, VTABLE_arc_math_Mat_setToScaling_float_float_R_arc_math_Mat, "(FF)Larc/math/Mat;", 1 },
	{ "setToScaling", (intptr_t) M_arc_math_Mat_setToScaling_arc_math_geom_Vec2_R_arc_math_Mat, VTABLE_arc_math_Mat_setToScaling_arc_math_geom_Vec2_R_arc_math_Mat, "(Larc/math/geom/Vec2;)Larc/math/Mat;", 1 },
	{ "toString", (intptr_t) M_arc_math_Mat_toString_R_java_lang_String, VTABLE_arc_math_Mat_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "det", (intptr_t) M_arc_math_Mat_det_R_float, VTABLE_arc_math_Mat_det_R_float, "()F", 1 },
	{ "inv", (intptr_t) M_arc_math_Mat_inv_R_arc_math_Mat, VTABLE_arc_math_Mat_inv_R_arc_math_Mat, "()Larc/math/Mat;", 1 },
	{ "set", (intptr_t) M_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat, VTABLE_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat, "(Larc/math/Mat;)Larc/math/Mat;", 1 },
	{ "set", (intptr_t) M_arc_math_Mat_set_arc_math_Affine2_R_arc_math_Mat, VTABLE_arc_math_Mat_set_arc_math_Affine2_R_arc_math_Mat, "(Larc/math/Affine2;)Larc/math/Mat;", 1 },
	{ "set", (intptr_t) M_arc_math_Mat_set_Array1_float_R_arc_math_Mat, VTABLE_arc_math_Mat_set_Array1_float_R_arc_math_Mat, "([F)Larc/math/Mat;", 1 },
	{ "trn", (intptr_t) M_arc_math_Mat_trn_arc_math_geom_Vec2_R_arc_math_Mat, VTABLE_arc_math_Mat_trn_arc_math_geom_Vec2_R_arc_math_Mat, "(Larc/math/geom/Vec2;)Larc/math/Mat;", 1 },
	{ "trn", (intptr_t) M_arc_math_Mat_trn_float_float_R_arc_math_Mat, VTABLE_arc_math_Mat_trn_float_float_R_arc_math_Mat, "(FF)Larc/math/Mat;", 1 },
	{ "trn", (intptr_t) M_arc_math_Mat_trn_arc_math_geom_Vec3_R_arc_math_Mat, VTABLE_arc_math_Mat_trn_arc_math_geom_Vec3_R_arc_math_Mat, "(Larc/math/geom/Vec3;)Larc/math/Mat;", 1 },
	{ "translate", (intptr_t) M_arc_math_Mat_translate_float_float_R_arc_math_Mat, VTABLE_arc_math_Mat_translate_float_float_R_arc_math_Mat, "(FF)Larc/math/Mat;", 1 },
	{ "translate", (intptr_t) M_arc_math_Mat_translate_arc_math_geom_Vec2_R_arc_math_Mat, VTABLE_arc_math_Mat_translate_arc_math_geom_Vec2_R_arc_math_Mat, "(Larc/math/geom/Vec2;)Larc/math/Mat;", 1 },
	{ "rotate", (intptr_t) M_arc_math_Mat_rotate_float_R_arc_math_Mat, VTABLE_arc_math_Mat_rotate_float_R_arc_math_Mat, "(F)Larc/math/Mat;", 1 },
	{ "rotateRad", (intptr_t) M_arc_math_Mat_rotateRad_float_R_arc_math_Mat, VTABLE_arc_math_Mat_rotateRad_float_R_arc_math_Mat, "(F)Larc/math/Mat;", 1 },
	{ "scale", (intptr_t) M_arc_math_Mat_scale_float_float_R_arc_math_Mat, VTABLE_arc_math_Mat_scale_float_float_R_arc_math_Mat, "(FF)Larc/math/Mat;", 1 },
	{ "scale", (intptr_t) M_arc_math_Mat_scale_arc_math_geom_Vec2_R_arc_math_Mat, VTABLE_arc_math_Mat_scale_arc_math_geom_Vec2_R_arc_math_Mat, "(Larc/math/geom/Vec2;)Larc/math/Mat;", 1 },
	{ "getValues", (intptr_t) M_arc_math_Mat_getValues_R_Array1_float, VTABLE_arc_math_Mat_getValues_R_Array1_float, "()[F", 1 },
	{ "getTranslation", (intptr_t) M_arc_math_Mat_getTranslation_arc_math_geom_Vec2_R_arc_math_geom_Vec2, VTABLE_arc_math_Mat_getTranslation_arc_math_geom_Vec2_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 1 },
	{ "getScale", (intptr_t) M_arc_math_Mat_getScale_arc_math_geom_Vec2_R_arc_math_geom_Vec2, VTABLE_arc_math_Mat_getScale_arc_math_geom_Vec2_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 1 },
	{ "getRotation", (intptr_t) M_arc_math_Mat_getRotation_R_float, VTABLE_arc_math_Mat_getRotation_R_float, "()F", 1 },
	{ "getRotationRad", (intptr_t) M_arc_math_Mat_getRotationRad_R_float, VTABLE_arc_math_Mat_getRotationRad_R_float, "()F", 1 },
	{ "scl", (intptr_t) M_arc_math_Mat_scl_float_R_arc_math_Mat, VTABLE_arc_math_Mat_scl_float_R_arc_math_Mat, "(F)Larc/math/Mat;", 1 },
	{ "scl", (intptr_t) M_arc_math_Mat_scl_arc_math_geom_Vec2_R_arc_math_Mat, VTABLE_arc_math_Mat_scl_arc_math_geom_Vec2_R_arc_math_Mat, "(Larc/math/geom/Vec2;)Larc/math/Mat;", 1 },
	{ "scl", (intptr_t) M_arc_math_Mat_scl_arc_math_geom_Vec3_R_arc_math_Mat, VTABLE_arc_math_Mat_scl_arc_math_geom_Vec3_R_arc_math_Mat, "(Larc/math/geom/Vec3;)Larc/math/Mat;", 1 },
	{ "transpose", (intptr_t) M_arc_math_Mat_transpose_R_arc_math_Mat, VTABLE_arc_math_Mat_transpose_R_arc_math_Mat, "()Larc/math/Mat;", 1 },
};

Class class_arc_math_Mat{
		.nativeName = (intptr_t) "arc/math/Mat",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_Mat),
		.classVtable = (intptr_t) vtable_arc_math_Mat,
		.staticInitializer = (intptr_t) clinit_arc_math_Mat,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_Mat,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 40,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 46,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_Mat = registerClass(&class_arc_math_Mat);

}
