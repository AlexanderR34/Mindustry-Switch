#include "mindustry/graphics/Trail.h"
#include "mindustry/graphics/Trail.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/math/Angles.h"
#include "arc/util/Time.h"
#include "arc/struct/FloatSeq.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/g2d/Fill.h"

extern "C" {


void mark_mindustry_graphics_Trail(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_Trail *) object;
	if (self->F_points)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_points)->clazz)->markFunction)((jobject) self->F_points, mark, depth + 1);
}

void clinit_mindustry_graphics_Trail(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_graphics_Trail_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Trail:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Trail(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(15);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(13);
	((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_lastX = (jfloat(-1.0f));
	((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_lastY = (jfloat(-1.0f));
	((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_lastAngle = (jfloat(-1.0f));
	((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_counter = (jfloat(0));
	((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_lastW = (jfloat(0));
	LINE_NUMBER(16);
	((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_length = (frame[1].i);
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_arc_struct_FloatSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_FloatSeq);
	init_arc_struct_FloatSeq_int(ctx, sp[1].o, ((frame[1].i) * (jint(3))));
	((mindustry_graphics_Trail *) NULL_CHECK(sp[0].o))->F_points = (jref) sp[1].o;
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_graphics_Trail_copy_R_mindustry_graphics_Trail(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Trail:copy", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(21);
	clinit_mindustry_graphics_Trail(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Trail);
	init_mindustry_graphics_Trail_int(ctx, sp[0].o, ((jint)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_length));
	frame[1].o = sp[0].o;
	LINE_NUMBER(22);
	sp[0].o = (jobject)((mindustry_graphics_Trail *) NULL_CHECK((frame[1].o)))->F_points;
	sp[1].o = (jobject)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_points;
	((func_arc_struct_FloatSeq_addAll_arc_struct_FloatSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_addAll_arc_struct_FloatSeq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(23);
	((mindustry_graphics_Trail *) NULL_CHECK((frame[1].o)))->F_lastX = ((jfloat)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_lastX);
	LINE_NUMBER(24);
	((mindustry_graphics_Trail *) NULL_CHECK((frame[1].o)))->F_lastY = ((jfloat)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_lastY);
	LINE_NUMBER(25);
	((mindustry_graphics_Trail *) NULL_CHECK((frame[1].o)))->F_lastAngle = ((jfloat)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_lastAngle);
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_graphics_Trail_width_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Trail:width", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_lastW);
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_Trail_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Trail:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_points;
	((func_arc_struct_FloatSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_graphics_Trail_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Trail:size", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_points;
	popStackFrame(ctx);
	return (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) / (jint(3)));
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_Trail_drawCap_arc_graphics_Color_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Trail:drawCap", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_points;
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(43);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, (frame[1].o));
	LINE_NUMBER(44);
	sp[0].o = (jobject)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_points;
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_points;
	frame[4].i = (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) - (jint(3)));
	LINE_NUMBER(46);
	frame[5].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[4].i)));
	frame[6].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[4].i) + (jint(1)))));
	frame[7].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[4].i) + (jint(2)))));
	jfloat temp0 = (frame[7].f) * (frame[2].f);
	sp[0].o = (jobject)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_points;
	frame[8].f = ((((temp0 / (jfloat((((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) / (jint(3)))))) * (jfloat((frame[4].i)))) / (jfloat(3.0f))) * (jfloat(2)));
	LINE_NUMBER(47);
	if ((floatCompare((frame[7].f), (jfloat(1,000000e-03f)), 1)) > 0) goto label_10;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	LINE_NUMBER(48);
	SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float_float_float_float(ctx, (((jobject) createStringLiteral(ctx, u8"hcircle"_j))), (frame[5].f), (frame[6].f), (frame[8].f), (frame[8].f), (((jfloat(-57.295776f)) * ((jfloat)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_lastAngle)) + (jfloat(180.0f))));
	LINE_NUMBER(49);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	}
label_1:;
	LINE_NUMBER(51);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_Trail_draw_arc_graphics_Color_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[28];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Trail:draw", 28 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(54);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, (frame[1].o));
	LINE_NUMBER(55);
	sp[0].o = (jobject)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_points;
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(56);
	frame[4].f = ((jfloat)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_lastAngle);
	LINE_NUMBER(57);
	jfloat temp0 = frame[2].f;
	sp[0].o = (jobject)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_points;
	frame[5].f = (temp0 / (jfloat((((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) / (jint(3))))));
	LINE_NUMBER(59);
	frame[6].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_points;
	if (temp0 >= ((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_6;
	}
	{
	LINE_NUMBER(60);
	frame[7].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[6].i)));
	frame[8].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[6].i) + (jint(1)))));
	frame[9].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[6].i) + (jint(2)))));
	LINE_NUMBER(64);
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_points;
	if (temp0 >= (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) - (jint(3)))) goto label_11;
	}
	{
	LINE_NUMBER(65);
	frame[10].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[6].i) + (jint(3)))));
	LINE_NUMBER(66);
	frame[11].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[6].i) + (jint(4)))));
	LINE_NUMBER(67);
	frame[12].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), ((frame[6].i) + (jint(5)))));
	LINE_NUMBER(69);
	if ((frame[6].i) != 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_points;
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) < ((((jint)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_length) - (jint(1))) * (jint(3)))) goto label_16;
	}
	{
	LINE_NUMBER(70);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, (frame[7].f), (frame[10].f), ((jfloat)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_counter));
	frame[7].f = temp0;
	LINE_NUMBER(71);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, (frame[8].f), (frame[11].f), ((jfloat)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_counter));
	frame[8].f = temp1;
	LINE_NUMBER(72);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, (frame[9].f), (frame[12].f), ((jfloat)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_counter));
	frame[9].f = temp2;
	goto label_16;
	}
label_11:;
	{
	LINE_NUMBER(75);
	frame[10].f = ((jfloat)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_lastX);
	LINE_NUMBER(76);
	frame[11].f = ((jfloat)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_lastY);
	LINE_NUMBER(77);
	frame[12].f = ((jfloat)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_lastW);
	}
label_16:;
	{
	LINE_NUMBER(80);
	jfloat temp0 = (jfloat)SM_arc_math_Angles_angleRad_float_float_float_float_R_float(ctx, (frame[7].f), (frame[8].f), (frame[10].f), (frame[11].f));
	frame[13].f = (-temp0);
	LINE_NUMBER(82);
	if ((frame[6].i) != 0) goto label_23;
	}
	INST_FLOAD(13);
	goto label_24;
label_23:;
	INST_FLOAD(4);
label_24:;
	{
	sp -= 1;
	frame[14].f = sp[0].f;
	LINE_NUMBER(83);
	if ((floatCompare((frame[9].f), (jfloat(1,000000e-03f)), 1)) <= 0) goto label_26;
	}
	{
	if ((floatCompare((frame[12].f), (jfloat(1,000000e-03f)), 1)) > 0) goto label_27;
	}
	goto label_26;
label_27:;
	{
	LINE_NUMBER(86);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_sin_float_R_float(ctx, (frame[14].f));
	frame[15].f = ((((temp0 * (jfloat((frame[6].i)))) / (jfloat(3.0f))) * (frame[5].f)) * (frame[9].f));
	LINE_NUMBER(87);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_cos_float_R_float(ctx, (frame[14].f));
	frame[16].f = ((((temp1 * (jfloat((frame[6].i)))) / (jfloat(3.0f))) * (frame[5].f)) * (frame[9].f));
	LINE_NUMBER(88);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_sin_float_R_float(ctx, (frame[13].f));
	frame[17].f = (((temp2 * (((jfloat((frame[6].i))) / (jfloat(3.0f))) + (jfloat(1)))) * (frame[5].f)) * (frame[12].f));
	LINE_NUMBER(89);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_cos_float_R_float(ctx, (frame[13].f));
	frame[18].f = (((temp3 * (((jfloat((frame[6].i))) / (jfloat(3.0f))) + (jfloat(1)))) * (frame[5].f)) * (frame[12].f));
	LINE_NUMBER(91);
	SM_arc_graphics_g2d_Fill_quad_float_float_float_float_float_float_float_float(ctx, ((frame[7].f) - (frame[15].f)), ((frame[8].f) - (frame[16].f)), ((frame[7].f) + (frame[15].f)), ((frame[8].f) + (frame[16].f)), ((frame[10].f) + (frame[17].f)), ((frame[11].f) + (frame[18].f)), ((frame[10].f) - (frame[17].f)), ((frame[11].f) - (frame[18].f)));
	LINE_NUMBER(98);
	frame[4].f = (frame[13].f);
	}
label_26:;
	{
	LINE_NUMBER(59);
	INST_IINC(6, 3);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(101);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_Trail_shorten(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Trail:shorten", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(106);
	sp[0].o = frame[0].o;
	jfloat temp0 = ((jfloat)((mindustry_graphics_Trail *) NULL_CHECK(sp[0].o))->F_counter) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	((mindustry_graphics_Trail *) NULL_CHECK(sp[0].o))->F_counter = temp0;
	frame[1].i = (jint(temp0));
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	((mindustry_graphics_Trail *) NULL_CHECK(sp[0].o))->F_counter = (((jfloat)((mindustry_graphics_Trail *) NULL_CHECK(sp[0].o))->F_counter) - (jfloat((frame[1].i))));
	LINE_NUMBER(109);
	if ((frame[1].i) <= 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_points;
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_points;
	jint temp0 = jint(0);
	jint temp1 = ((frame[1].i) * (jint(3))) - (jint(1));
	sp[1].o = (jobject)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_points;
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp1, (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1))));
	((func_arc_struct_FloatSeq_removeRange_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_removeRange_int_int])(ctx, sp[0].o, temp0, temp2);
	}
label_3:;
	LINE_NUMBER(112);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_Trail_update_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Trail:update", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(116);
	((func_mindustry_graphics_Trail_update_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Trail_update_float_float_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (jfloat(1)));
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_Trail_update_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Trail:update", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	jfloat temp0 = ((jfloat)((mindustry_graphics_Trail *) NULL_CHECK(sp[0].o))->F_counter) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	((mindustry_graphics_Trail *) NULL_CHECK(sp[0].o))->F_counter = temp0;
	frame[4].i = (jint(temp0));
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	((mindustry_graphics_Trail *) NULL_CHECK(sp[0].o))->F_counter = (((jfloat)((mindustry_graphics_Trail *) NULL_CHECK(sp[0].o))->F_counter) - (jfloat((frame[4].i))));
	LINE_NUMBER(124);
	if ((frame[4].i) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_points;
	frame[5].i = (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) + ((((frame[4].i) - (jint(1))) - ((jint)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_length)) * (jint(3))));
	LINE_NUMBER(126);
	if ((frame[5].i) <= 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_points;
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_points;
	jint temp0 = jint(0);
	jint temp1 = (frame[5].i) - (jint(1));
	sp[1].o = (jobject)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_points;
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp1, (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1))));
	((func_arc_struct_FloatSeq_removeRange_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_removeRange_int_int])(ctx, sp[0].o, temp0, temp2);
	}
label_6:;
	{
	LINE_NUMBER(131);
	if ((frame[4].i) == (jint(1))) goto label_8;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_lastX), (jfloat(-1.0f)), -1)) != 0) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_points;
	((func_arc_struct_FloatSeq_add_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float_float_float])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	goto label_3;
	}
label_9:;
	{
	LINE_NUMBER(134);
	frame[6].i = (jint(0));
	}
label_10:;
	{
	if ((frame[6].i) >= (frame[4].i)) goto label_3;
	}
	{
	LINE_NUMBER(135);
	frame[7].f = (((jfloat((frame[6].i))) + (jfloat(1))) / (jfloat((frame[4].i))));
	LINE_NUMBER(136);
	sp[0].o = (jobject)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_points;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_lastX), (frame[1].f), (frame[7].f));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_lastY), (frame[2].f), (frame[7].f));
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_lastW), (frame[3].f), (frame[7].f));
	((func_arc_struct_FloatSeq_add_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float_float_float])(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(134);
	INST_IINC(6, 1);
	goto label_10;
	}
label_3:;
	{
	LINE_NUMBER(142);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Angles_angleRad_float_float_float_float_R_float(ctx, (frame[1].f), (frame[2].f), ((jfloat)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_lastX), ((jfloat)((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_lastY));
	((mindustry_graphics_Trail *) NULL_CHECK(sp[0].o))->F_lastAngle = (-temp0);
	LINE_NUMBER(143);
	((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_lastX = (frame[1].f);
	LINE_NUMBER(144);
	((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_lastY = (frame[2].f);
	LINE_NUMBER(145);
	((mindustry_graphics_Trail *) NULL_CHECK((frame[0].o)))->F_lastW = (frame[3].f);
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_Trail[] {
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
	(void *) M_mindustry_graphics_Trail_copy_R_mindustry_graphics_Trail,
	(void *) M_mindustry_graphics_Trail_width_R_float,
	(void *) M_mindustry_graphics_Trail_clear,
	(void *) M_mindustry_graphics_Trail_size_R_int,
	(void *) M_mindustry_graphics_Trail_drawCap_arc_graphics_Color_float,
	(void *) M_mindustry_graphics_Trail_draw_arc_graphics_Color_float,
	(void *) M_mindustry_graphics_Trail_shorten,
	(void *) M_mindustry_graphics_Trail_update_float_float,
	(void *) M_mindustry_graphics_Trail_update_float_float_float,
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
	{ "copy", "()Lmindustry/graphics/Trail;" },
	{ "width", "()F" },
	{ "clear", "()V" },
	{ "size", "()I" },
	{ "drawCap", "(Larc/graphics/Color;F)V" },
	{ "draw", "(Larc/graphics/Color;F)V" },
	{ "shorten", "()V" },
	{ "update", "(FF)V" },
	{ "update", "(FFF)V" },
};

static FieldMetadata fields[] {
	{ "length", &class_int, offsetof(mindustry_graphics_Trail, F_length), "I", 1 },
	{ "points", &class_arc_struct_FloatSeq, offsetof(mindustry_graphics_Trail, F_points), "Larc/struct/FloatSeq;", 4 },
	{ "lastX", &class_float, offsetof(mindustry_graphics_Trail, F_lastX), "F", 4 },
	{ "lastY", &class_float, offsetof(mindustry_graphics_Trail, F_lastY), "F", 4 },
	{ "lastAngle", &class_float, offsetof(mindustry_graphics_Trail, F_lastAngle), "F", 4 },
	{ "counter", &class_float, offsetof(mindustry_graphics_Trail, F_counter), "F", 4 },
	{ "lastW", &class_float, offsetof(mindustry_graphics_Trail, F_lastW), "F", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_Trail_int, 0, "(I)V", 1 },
	{ "copy", (intptr_t) M_mindustry_graphics_Trail_copy_R_mindustry_graphics_Trail, VTABLE_mindustry_graphics_Trail_copy_R_mindustry_graphics_Trail, "()Lmindustry/graphics/Trail;", 1 },
	{ "width", (intptr_t) M_mindustry_graphics_Trail_width_R_float, VTABLE_mindustry_graphics_Trail_width_R_float, "()F", 1 },
	{ "clear", (intptr_t) M_mindustry_graphics_Trail_clear, VTABLE_mindustry_graphics_Trail_clear, "()V", 1 },
	{ "size", (intptr_t) M_mindustry_graphics_Trail_size_R_int, VTABLE_mindustry_graphics_Trail_size_R_int, "()I", 1 },
	{ "drawCap", (intptr_t) M_mindustry_graphics_Trail_drawCap_arc_graphics_Color_float, VTABLE_mindustry_graphics_Trail_drawCap_arc_graphics_Color_float, "(Larc/graphics/Color;F)V", 1 },
	{ "draw", (intptr_t) M_mindustry_graphics_Trail_draw_arc_graphics_Color_float, VTABLE_mindustry_graphics_Trail_draw_arc_graphics_Color_float, "(Larc/graphics/Color;F)V", 1 },
	{ "shorten", (intptr_t) M_mindustry_graphics_Trail_shorten, VTABLE_mindustry_graphics_Trail_shorten, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_graphics_Trail_update_float_float, VTABLE_mindustry_graphics_Trail_update_float_float, "(FF)V", 1 },
	{ "update", (intptr_t) M_mindustry_graphics_Trail_update_float_float_float, VTABLE_mindustry_graphics_Trail_update_float_float_float, "(FFF)V", 1 },
};

Class class_mindustry_graphics_Trail{
		.nativeName = (intptr_t) "mindustry/graphics/Trail",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_Trail),
		.classVtable = (intptr_t) vtable_mindustry_graphics_Trail,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_Trail,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_Trail,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_Trail = registerClass(&class_mindustry_graphics_Trail);

}
