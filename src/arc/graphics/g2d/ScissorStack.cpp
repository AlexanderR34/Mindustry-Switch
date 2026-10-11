#include "arc/graphics/g2d/ScissorStack.h"
#include "java/lang/Math.h"
#include "arc/math/geom/Vec2.h"
#include "arc/Core.h"
#include "arc/math/geom/Rect.h"
#include "arc/math/Mat.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/gl/HdpiUtils.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "arc/graphics/Gl.h"
#include "arc/graphics/Camera.h"
#include "arc/graphics/g2d/ScissorStack.h"

extern "C" {

jobject SF_arc_graphics_g2d_ScissorStack_viewport;
jobject SF_arc_graphics_g2d_ScissorStack_tmp;
jobject SF_arc_graphics_g2d_ScissorStack_scissors;

void mark_arc_graphics_g2d_ScissorStack(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_graphics_g2d_ScissorStack_viewport)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_ScissorStack_viewport)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_ScissorStack_viewport, mark, depth + 1);
		if (SF_arc_graphics_g2d_ScissorStack_tmp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_ScissorStack_tmp)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_ScissorStack_tmp, mark, depth + 1);
		if (SF_arc_graphics_g2d_ScissorStack_scissors)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_graphics_g2d_ScissorStack_scissors)->clazz)->markFunction)((jobject) SF_arc_graphics_g2d_ScissorStack_scissors, mark, depth + 1);
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
	auto self = (arc_graphics_g2d_ScissorStack *) object;
}

void init_arc_graphics_g2d_ScissorStack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/ScissorStack:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_ScissorStack(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(17);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_arc_graphics_g2d_ScissorStack_push_arc_math_geom_Rect_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/ScissorStack:push", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_ScissorStack(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(33);
	SM_arc_graphics_g2d_ScissorStack_fix_arc_math_geom_Rect(ctx, (frame[0].o));
	LINE_NUMBER(35);
	clinit_arc_graphics_g2d_ScissorStack(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_ScissorStack_scissors;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_2;
	}
	{
	LINE_NUMBER(36);
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width), (jfloat(1)), 1)) < 0) goto label_4;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height), (jfloat(1)), 1)) >= 0) goto label_5;
	}
label_4:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(37);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(38);
	SM_arc_graphics_Gl_enable_int(ctx, (3089));
	goto label_7;
	}
label_2:;
	{
	LINE_NUMBER(41);
	clinit_arc_graphics_g2d_ScissorStack(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_ScissorStack_scissors;
	clinit_arc_graphics_g2d_ScissorStack(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_ScissorStack_scissors;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1))));
	frame[1].o = (checkCast(ctx, &class_arc_math_geom_Rect, sp[0].o));
	LINE_NUMBER(42);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x));
	frame[2].f = temp0;
	LINE_NUMBER(43);
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_width)), (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width)));
	frame[3].f = temp1;
	LINE_NUMBER(44);
	if ((floatCompare(((frame[3].f) - (frame[2].f)), (jfloat(1)), 1)) >= 0) goto label_11;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_11:;
	{
	LINE_NUMBER(46);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y));
	frame[4].f = temp0;
	LINE_NUMBER(47);
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_height)), (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height)));
	frame[5].f = temp1;
	LINE_NUMBER(48);
	if ((floatCompare(((frame[5].f) - (frame[4].f)), (jfloat(1)), 1)) >= 0) goto label_14;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_14:;
	{
	LINE_NUMBER(50);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(51);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x = (frame[2].f);
	LINE_NUMBER(52);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y = (frame[4].f);
	LINE_NUMBER(53);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width = ((frame[3].f) - (frame[2].f));
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(1)), ((frame[5].f) - (frame[4].f)));
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height = temp0;
	}
label_7:;
	{
	LINE_NUMBER(57);
	clinit_arc_graphics_g2d_ScissorStack(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_ScissorStack_scissors;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(58);
	SM_arc_graphics_gl_HdpiUtils_glScissor_int_int_int_int(ctx, (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x))), (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y))), (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width))), (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height))));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_g2d_ScissorStack_pop_R_arc_math_geom_Rect(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/ScissorStack:pop", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_ScissorStack(ctx);
	{
	LINE_NUMBER(69);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(70);
	clinit_arc_graphics_g2d_ScissorStack(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_ScissorStack_scissors;
	sp[0].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, sp[0].o);
	frame[0].o = (checkCast(ctx, &class_arc_math_geom_Rect, sp[0].o));
	LINE_NUMBER(71);
	clinit_arc_graphics_g2d_ScissorStack(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_ScissorStack_scissors;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_3;
	}
	{
	LINE_NUMBER(72);
	SM_arc_graphics_Gl_disable_int(ctx, (3089));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(74);
	clinit_arc_graphics_g2d_ScissorStack(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_ScissorStack_scissors;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	frame[1].o = (checkCast(ctx, &class_arc_math_geom_Rect, sp[0].o));
	LINE_NUMBER(75);
	SM_arc_graphics_gl_HdpiUtils_glScissor_int_int_int_int(ctx, (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x))), (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_y))), (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_width))), (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_height))));
	}
label_5:;
	{
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool SM_arc_graphics_g2d_ScissorStack_pushWorld_arc_math_geom_Rect_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/ScissorStack:pushWorld", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_ScissorStack(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(81);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_m1;
	sp[1].o = (jobject)((func_arc_math_Mat_idt_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Mat_idt_R_arc_math_Mat])(ctx, sp[1].o);
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r1;
	sp[2].o = (jobject)((func_arc_math_geom_Rect_set_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Rect_set_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[2].o, (frame[0].o));
	SM_arc_graphics_g2d_ScissorStack_calculateScissors_arc_graphics_Camera_arc_math_Mat_arc_math_geom_Rect_arc_math_geom_Rect(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[0].o));
	LINE_NUMBER(82);
	jint temp0 = (jint)SM_arc_graphics_g2d_ScissorStack_push_arc_math_geom_Rect_R_boolean(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_g2d_ScissorStack_peek_R_arc_math_geom_Rect(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/ScissorStack:peek", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_ScissorStack(ctx);
	{
	LINE_NUMBER(86);
	clinit_arc_graphics_g2d_ScissorStack(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_ScissorStack_scissors;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_math_geom_Rect, sp[0].o));
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_ScissorStack_fix_arc_math_geom_Rect(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/ScissorStack:fix", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_ScissorStack(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_x));
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x = (jfloat(temp0));
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_y));
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y = (jfloat(temp1));
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width));
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width = (jfloat(temp2));
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	jint temp3 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height));
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height = (jfloat(temp3));
	LINE_NUMBER(94);
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width), (jfloat(0)), 1)) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(95);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width = (-((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width));
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x) - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_width));
	}
label_5:;
	{
	LINE_NUMBER(98);
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height), (jfloat(0)), 1)) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(99);
	((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height = (-((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height));
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y) - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[0].o)))->F_height));
	}
label_8:;
	LINE_NUMBER(102);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_ScissorStack_calculateScissors_arc_graphics_Camera_arc_math_Mat_arc_math_geom_Rect_arc_math_geom_Rect(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/ScissorStack:calculateScissors", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_ScissorStack(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp3 = jfloat(temp2);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp4 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	SM_arc_graphics_g2d_ScissorStack_calculateScissors_arc_graphics_Camera_float_float_float_float_arc_math_Mat_arc_math_geom_Rect_arc_math_geom_Rect(ctx, sp[0].o, temp0, temp1, temp3, (jfloat(temp4)), (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_graphics_g2d_ScissorStack_calculateScissors_arc_graphics_Camera_float_float_float_float_arc_math_Mat_arc_math_geom_Rect_arc_math_geom_Rect(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5, jobject param6, jobject param7) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/ScissorStack:calculateScissors", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_ScissorStack(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(125);
	clinit_arc_graphics_g2d_ScissorStack(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_ScissorStack_tmp;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[6].o)))->F_x), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[6].o)))->F_y));
	LINE_NUMBER(126);
	clinit_arc_graphics_g2d_ScissorStack(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_ScissorStack_tmp;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_mul_arc_math_Mat_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_mul_arc_math_Mat_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_ScissorStack(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_ScissorStack_tmp;
	sp[0].o = (jobject)((func_arc_graphics_Camera_project_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_project_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(128);
	sp[0].o = frame[7].o;
	clinit_arc_graphics_g2d_ScissorStack(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_ScissorStack_tmp;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(129);
	sp[0].o = frame[7].o;
	clinit_arc_graphics_g2d_ScissorStack(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_ScissorStack_tmp;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(131);
	clinit_arc_graphics_g2d_ScissorStack(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_ScissorStack_tmp;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[6].o)))->F_x) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[6].o)))->F_width)), (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[6].o)))->F_y) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[6].o)))->F_height)));
	LINE_NUMBER(132);
	clinit_arc_graphics_g2d_ScissorStack(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_ScissorStack_tmp;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_mul_arc_math_Mat_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_mul_arc_math_Mat_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(133);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_ScissorStack(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_ScissorStack_tmp;
	sp[0].o = (jobject)((func_arc_graphics_Camera_project_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_project_arc_math_geom_Vec2_float_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(134);
	sp[0].o = frame[7].o;
	clinit_arc_graphics_g2d_ScissorStack(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_ScissorStack_tmp;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x) - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[7].o)))->F_x));
	LINE_NUMBER(135);
	sp[0].o = frame[7].o;
	clinit_arc_graphics_g2d_ScissorStack(ctx);
	sp[1].o = (jobject)SF_arc_graphics_g2d_ScissorStack_tmp;
	((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y) - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[7].o)))->F_y));
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_graphics_g2d_ScissorStack_getViewport_R_arc_math_geom_Rect(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/ScissorStack:getViewport", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_ScissorStack(ctx);
	{
	LINE_NUMBER(140);
	clinit_arc_graphics_g2d_ScissorStack(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_ScissorStack_scissors;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(141);
	clinit_arc_graphics_g2d_ScissorStack(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_ScissorStack_viewport;
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp3 = jfloat(temp2);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp4 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp0, temp1, temp3, (jfloat(temp4)));
	LINE_NUMBER(142);
	clinit_arc_graphics_g2d_ScissorStack(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_ScissorStack_viewport;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(144);
	clinit_arc_graphics_g2d_ScissorStack(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_ScissorStack_scissors;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	frame[0].o = (checkCast(ctx, &class_arc_math_geom_Rect, sp[0].o));
	LINE_NUMBER(145);
	clinit_arc_graphics_g2d_ScissorStack(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_ScissorStack_viewport;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(146);
	clinit_arc_graphics_g2d_ScissorStack(ctx);
	sp[0].o = (jobject)SF_arc_graphics_g2d_ScissorStack_viewport;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_graphics_g2d_ScissorStack(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/ScissorStack:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_ScissorStack(ctx);
	{
	LINE_NUMBER(18);
	clinit_arc_math_geom_Rect(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[0].o);
	clinit_arc_graphics_g2d_ScissorStack(ctx);
	SF_arc_graphics_g2d_ScissorStack_viewport = sp[0].o;
	LINE_NUMBER(19);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_graphics_g2d_ScissorStack(ctx);
	SF_arc_graphics_g2d_ScissorStack_tmp = sp[0].o;
	LINE_NUMBER(20);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_arc_graphics_g2d_ScissorStack(ctx);
	SF_arc_graphics_g2d_ScissorStack_scissors = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_ScissorStack[] {
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

static FieldMetadata fields[] {
	{ "viewport", &class_arc_math_geom_Rect, (intptr_t) &SF_arc_graphics_g2d_ScissorStack_viewport, "Larc/math/geom/Rect;", 24 },
	{ "tmp", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_graphics_g2d_ScissorStack_tmp, "Larc/math/geom/Vec2;", 8 },
	{ "scissors", &class_arc_struct_Seq, (intptr_t) &SF_arc_graphics_g2d_ScissorStack_scissors, "Larc/struct/Seq;", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_ScissorStack, 0, "()V", 1 },
	{ "push", (intptr_t) SM_arc_graphics_g2d_ScissorStack_push_arc_math_geom_Rect_R_boolean, 0, "(Larc/math/geom/Rect;)Z", 9 },
	{ "pop", (intptr_t) SM_arc_graphics_g2d_ScissorStack_pop_R_arc_math_geom_Rect, 0, "()Larc/math/geom/Rect;", 9 },
	{ "pushWorld", (intptr_t) SM_arc_graphics_g2d_ScissorStack_pushWorld_arc_math_geom_Rect_R_boolean, 0, "(Larc/math/geom/Rect;)Z", 9 },
	{ "peek", (intptr_t) SM_arc_graphics_g2d_ScissorStack_peek_R_arc_math_geom_Rect, 0, "()Larc/math/geom/Rect;", 9 },
	{ "fix", (intptr_t) SM_arc_graphics_g2d_ScissorStack_fix_arc_math_geom_Rect, 0, "(Larc/math/geom/Rect;)V", 10 },
	{ "calculateScissors", (intptr_t) SM_arc_graphics_g2d_ScissorStack_calculateScissors_arc_graphics_Camera_arc_math_Mat_arc_math_geom_Rect_arc_math_geom_Rect, 0, "(Larc/graphics/Camera;Larc/math/Mat;Larc/math/geom/Rect;Larc/math/geom/Rect;)V", 9 },
	{ "calculateScissors", (intptr_t) SM_arc_graphics_g2d_ScissorStack_calculateScissors_arc_graphics_Camera_float_float_float_float_arc_math_Mat_arc_math_geom_Rect_arc_math_geom_Rect, 0, "(Larc/graphics/Camera;FFFFLarc/math/Mat;Larc/math/geom/Rect;Larc/math/geom/Rect;)V", 9 },
	{ "getViewport", (intptr_t) SM_arc_graphics_g2d_ScissorStack_getViewport_R_arc_math_geom_Rect, 0, "()Larc/math/geom/Rect;", 9 },
	{ "<clinit>", (intptr_t) clinit_arc_graphics_g2d_ScissorStack, 0, "()V", 8 },
};

Class class_arc_graphics_g2d_ScissorStack{
		.nativeName = (intptr_t) "arc/graphics/g2d/ScissorStack",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_ScissorStack),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_ScissorStack,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_ScissorStack,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_ScissorStack,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_ScissorStack = registerClass(&class_arc_graphics_g2d_ScissorStack);

}
