#include "mindustry/entities/part/DrawPart_CompatFix.h"
#include "mindustry/entities/part/DrawPart_CompatFix_invoke_mindustry_entities_part_DrawPart_PartProgress_36.h"
#include "mindustry/entities/part/DrawPart_CompatFix_invoke_mindustry_entities_part_DrawPart_PartProgress_35.h"
#include "mindustry/entities/part/DrawPart_PartFunc.h"
#include "mindustry/entities/part/DrawPart_CompatFix_invoke_mindustry_entities_part_DrawPart_PartProgress_34.h"
#include "mindustry/entities/part/DrawPart_CompatFix_invoke_mindustry_entities_part_DrawPart_PartProgress_33.h"
#include "mindustry/entities/part/DrawPart_CompatFix_invoke_mindustry_entities_part_DrawPart_PartProgress_32.h"
#include "mindustry/entities/part/DrawPart_CompatFix_invoke_mindustry_entities_part_DrawPart_PartProgress_31.h"
#include "mindustry/entities/part/DrawPart_CompatFix_invoke_mindustry_entities_part_DrawPart_PartProgress_30.h"
#include "mindustry/entities/part/DrawPart_CompatFix_invoke_mindustry_entities_part_DrawPart_PartProgress_39.h"
#include "mindustry/entities/part/DrawPart_CompatFix_invoke_mindustry_entities_part_DrawPart_PartProgress_38.h"
#include "mindustry/entities/part/DrawPart_CompatFix_invoke_mindustry_entities_part_DrawPart_PartProgress_37.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "mindustry/entities/part/DrawPart_PartParams.h"
#include "arc/math/Interp.h"
#include "arc/util/Time.h"
#include "mindustry/entities/part/DrawPart.h"
#include "mindustry/entities/part/DrawPart_CompatFix_invoke_mindustry_entities_part_DrawPart_PartProgress_25.h"
#include "mindustry/entities/part/DrawPart_CompatFix_invoke_mindustry_entities_part_DrawPart_PartProgress_24.h"
#include "java/lang/Object.h"
#include "mindustry/entities/part/DrawPart_CompatFix_invoke_mindustry_entities_part_DrawPart_PartProgress_23.h"
#include "mindustry/entities/part/DrawPart_PartProgress.h"
#include "mindustry/entities/part/DrawPart_CompatFix_invoke_mindustry_entities_part_DrawPart_PartProgress_22.h"
#include "mindustry/entities/part/DrawPart_CompatFix_invoke_mindustry_entities_part_DrawPart_PartProgress_21.h"
#include "mindustry/entities/part/DrawPart_CompatFix_invoke_mindustry_entities_part_DrawPart_PartProgress_41.h"
#include "mindustry/entities/part/DrawPart_CompatFix_invoke_mindustry_entities_part_DrawPart_PartProgress_40.h"
#include "mindustry/entities/part/DrawPart_CompatFix_invoke_mindustry_entities_part_DrawPart_PartProgress_29.h"
#include "mindustry/entities/part/DrawPart_CompatFix_invoke_mindustry_entities_part_DrawPart_PartProgress_28.h"
#include "mindustry/entities/part/DrawPart_CompatFix_invoke_mindustry_entities_part_DrawPart_PartProgress_27.h"
#include "mindustry/entities/part/DrawPart_CompatFix_invoke_mindustry_entities_part_DrawPart_PartProgress_26.h"

extern "C" {


void mark_mindustry_entities_part_DrawPart$CompatFix(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_part_DrawPart$CompatFix *) object;
}

void clinit_mindustry_entities_part_DrawPart$CompatFix(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_part_DrawPart$CompatFix(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(196);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_part_DrawPart$CompatFix_inv_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:inv", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(199);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_21(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_21 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_21);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_part_DrawPart$CompatFix_slope_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:slope", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(203);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_22(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_22 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_22);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_part_DrawPart$CompatFix_clamp_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:clamp", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(207);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_23(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_23 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_23);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_part_DrawPart$CompatFix_add_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(211);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_24(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_24 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_24);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_part_DrawPart$CompatFix_add_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(215);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_25(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_25 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_25);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_part_DrawPart$CompatFix_delay_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:delay", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(219);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_26(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_26 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_26);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_part_DrawPart$CompatFix_curve_mindustry_entities_part_DrawPart$PartProgress_float_float_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:curve", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(223);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_27(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_27 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_27);
		proxy->F_field2 = (frame[2].f);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_part_DrawPart$CompatFix_sustain_mindustry_entities_part_DrawPart$PartProgress_float_float_float_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:sustain", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(227);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_28(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_28 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_28);
		proxy->F_field3 = (frame[3].f);
		proxy->F_field2 = (frame[2].f);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_part_DrawPart$CompatFix_shorten_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:shorten", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(234);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_29(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_29 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_29);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_part_DrawPart$CompatFix_compress_mindustry_entities_part_DrawPart$PartProgress_float_float_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:compress", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(238);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_30(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_30 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_30);
		proxy->F_field2 = (frame[2].f);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_part_DrawPart$CompatFix_blend_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject param0, jobject param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:blend", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(242);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_31(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_31 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_31);
		proxy->F_field2 = (frame[2].f);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_part_DrawPart$CompatFix_mul_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:mul", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(246);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_32(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_32 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_32);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_part_DrawPart$CompatFix_mul_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:mul", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(250);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_33(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_33 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_33);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_part_DrawPart$CompatFix_min_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:min", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(254);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_34(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_34 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_34);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_part_DrawPart$CompatFix_sin_mindustry_entities_part_DrawPart$PartProgress_float_float_float_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:sin", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(258);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_35(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_35 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_35);
		proxy->F_field3 = (frame[3].f);
		proxy->F_field2 = (frame[2].f);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_part_DrawPart$CompatFix_sin_mindustry_entities_part_DrawPart$PartProgress_float_float_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:sin", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(262);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_36(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_36 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_36);
		proxy->F_field2 = (frame[2].f);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_part_DrawPart$CompatFix_absin_mindustry_entities_part_DrawPart$PartProgress_float_float_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:absin", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(266);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_37(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_37 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_37);
		proxy->F_field2 = (frame[2].f);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_part_DrawPart$CompatFix_mod_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:mod", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(270);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_38(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_38 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_38);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_part_DrawPart$CompatFix_loop_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:loop", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(274);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_39(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_39 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_39);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_part_DrawPart$CompatFix_apply_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartFunc_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:apply", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(278);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_40(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_40 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_40);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[0].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_entities_part_DrawPart$CompatFix_curve_mindustry_entities_part_DrawPart$PartProgress_arc_math_Interp_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:curve", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(282);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_41(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_41 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$CompatFix_invoke_mindustry_entities_part_DrawPart$PartProgress_41);
		proxy->F_field1 = (jref) (frame[0].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$CompatFix_lambda$curve$1_arc_math_Interp_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:lambda$curve$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	jfloat temp1 = (jfloat)((func_arc_math_Interp_apply_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_R_float, sp[0].o))(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$CompatFix_lambda$apply$0_mindustry_entities_part_DrawPart$PartFunc_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:lambda$apply$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(278);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float, (frame[1].o)))(ctx, (frame[1].o), (frame[3].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float, (frame[2].o)))(ctx, (frame[2].o), (frame[3].o));
	jfloat temp2 = (jfloat)((func_mindustry_entities_part_DrawPart$PartFunc_get_float_float_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartFunc, INDEX_mindustry_entities_part_DrawPart$PartFunc_get_float_float_R_float, sp[0].o))(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$CompatFix_lambda$loop$0_mindustry_entities_part_DrawPart$PartProgress_float_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0, jfloat param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:lambda$loop$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(274);
	jfloat temp0 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_mod_float_float_R_float(ctx, (temp0 / (frame[1].f)), (jfloat(1)));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$CompatFix_lambda$mod$0_mindustry_entities_part_DrawPart$PartProgress_float_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0, jfloat param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:lambda$mod$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(270);
	jfloat temp0 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_mod_float_float_R_float(ctx, temp0, (frame[1].f));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$CompatFix_lambda$absin$0_mindustry_entities_part_DrawPart$PartProgress_float_float_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:lambda$absin$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(266);
	jfloat temp0 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float, (frame[0].o)))(ctx, (frame[0].o), (frame[3].o));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return (temp0 + temp1);
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$CompatFix_lambda$sin$1_mindustry_entities_part_DrawPart$PartProgress_float_float_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:lambda$sin$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(262);
	jfloat temp0 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float, (frame[0].o)))(ctx, (frame[0].o), (frame[3].o));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sin_float_float_R_float(ctx, (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return (temp0 + temp1);
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$CompatFix_lambda$sin$0_mindustry_entities_part_DrawPart$PartProgress_float_float_float_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:lambda$sin$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(258);
	jfloat temp0 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float, (frame[0].o)))(ctx, (frame[0].o), (frame[4].o));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sin_float_float_float_R_float(ctx, ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) + (frame[1].f)), (frame[2].f), (frame[3].f));
	popStackFrame(ctx);
	return (temp0 + temp1);
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$CompatFix_lambda$min$0_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:lambda$min$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(254);
	jfloat temp0 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$CompatFix_lambda$mul$1_mindustry_entities_part_DrawPart$PartProgress_float_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0, jfloat param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:lambda$mul$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(250);
	jfloat temp0 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return (temp0 * (frame[1].f));
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$CompatFix_lambda$mul$0_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:lambda$mul$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(246);
	jfloat temp0 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return (temp0 * temp1);
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$CompatFix_lambda$blend$0_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartProgress_float_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jobject param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:lambda$blend$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(242);
	jfloat temp0 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float, (frame[0].o)))(ctx, (frame[0].o), (frame[3].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float, (frame[1].o)))(ctx, (frame[1].o), (frame[3].o));
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, temp0, temp1, (frame[2].f));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$CompatFix_lambda$compress$0_mindustry_entities_part_DrawPart$PartProgress_float_float_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:lambda$compress$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(238);
	jfloat temp0 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float, (frame[0].o)))(ctx, (frame[0].o), (frame[3].o));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_curve_float_float_float_R_float(ctx, temp0, (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$CompatFix_lambda$shorten$0_mindustry_entities_part_DrawPart$PartProgress_float_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0, jfloat param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:lambda$shorten$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(234);
	jfloat temp0 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return (temp0 / ((jfloat(1)) - (frame[1].f)));
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$CompatFix_lambda$sustain$0_mindustry_entities_part_DrawPart$PartProgress_float_float_float_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:lambda$sustain$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(228);
	jfloat temp0 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float, (frame[0].o)))(ctx, (frame[0].o), (frame[4].o));
	frame[5].f = (temp0 - (frame[1].f));
	LINE_NUMBER(229);
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[5].f), (jfloat(0)));
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (temp1 / (frame[2].f)), (((((frame[2].f) + (frame[3].f)) + (frame[2].f)) - (frame[5].f)) / (frame[2].f)));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$CompatFix_lambda$curve$0_mindustry_entities_part_DrawPart$PartProgress_float_float_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:lambda$curve$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(223);
	jfloat temp0 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float, (frame[0].o)))(ctx, (frame[0].o), (frame[3].o));
	popStackFrame(ctx);
	return ((temp0 - (frame[1].f)) / (frame[2].f));
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$CompatFix_lambda$delay$0_mindustry_entities_part_DrawPart$PartProgress_float_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0, jfloat param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:lambda$delay$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(219);
	jfloat temp0 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return ((temp0 - (frame[1].f)) / ((jfloat(1)) - (frame[1].f)));
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$CompatFix_lambda$add$1_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:lambda$add$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(215);
	jfloat temp0 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return (temp0 + temp1);
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$CompatFix_lambda$add$0_mindustry_entities_part_DrawPart$PartProgress_float_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0, jfloat param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:lambda$add$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(211);
	jfloat temp0 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return (temp0 + (frame[1].f));
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$CompatFix_lambda$clamp$0_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:lambda$clamp$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(207);
	jfloat temp0 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$CompatFix_lambda$slope$0_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:lambda$slope$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(203);
	jfloat temp0 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_slope_float_R_float(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$CompatFix_lambda$inv$0_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$CompatFix:lambda$inv$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$CompatFix(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(199);
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return (temp0 - temp1);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_part_DrawPart$CompatFix[] {
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_part_DrawPart$CompatFix, 0, "()V", 2 },
	{ "inv", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_inv_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;)Lmindustry/entities/part/DrawPart$PartProgress;", 8 },
	{ "slope", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_slope_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;)Lmindustry/entities/part/DrawPart$PartProgress;", 8 },
	{ "clamp", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_clamp_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;)Lmindustry/entities/part/DrawPart$PartProgress;", 8 },
	{ "add", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_add_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;F)Lmindustry/entities/part/DrawPart$PartProgress;", 8 },
	{ "add", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_add_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;Lmindustry/entities/part/DrawPart$PartProgress;)Lmindustry/entities/part/DrawPart$PartProgress;", 8 },
	{ "delay", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_delay_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;F)Lmindustry/entities/part/DrawPart$PartProgress;", 8 },
	{ "curve", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_curve_mindustry_entities_part_DrawPart$PartProgress_float_float_R_mindustry_entities_part_DrawPart$PartProgress, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;FF)Lmindustry/entities/part/DrawPart$PartProgress;", 8 },
	{ "sustain", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_sustain_mindustry_entities_part_DrawPart$PartProgress_float_float_float_R_mindustry_entities_part_DrawPart$PartProgress, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;FFF)Lmindustry/entities/part/DrawPart$PartProgress;", 8 },
	{ "shorten", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_shorten_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;F)Lmindustry/entities/part/DrawPart$PartProgress;", 8 },
	{ "compress", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_compress_mindustry_entities_part_DrawPart$PartProgress_float_float_R_mindustry_entities_part_DrawPart$PartProgress, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;FF)Lmindustry/entities/part/DrawPart$PartProgress;", 8 },
	{ "blend", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_blend_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;Lmindustry/entities/part/DrawPart$PartProgress;F)Lmindustry/entities/part/DrawPart$PartProgress;", 8 },
	{ "mul", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_mul_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;Lmindustry/entities/part/DrawPart$PartProgress;)Lmindustry/entities/part/DrawPart$PartProgress;", 8 },
	{ "mul", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_mul_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;F)Lmindustry/entities/part/DrawPart$PartProgress;", 8 },
	{ "min", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_min_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;Lmindustry/entities/part/DrawPart$PartProgress;)Lmindustry/entities/part/DrawPart$PartProgress;", 8 },
	{ "sin", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_sin_mindustry_entities_part_DrawPart$PartProgress_float_float_float_R_mindustry_entities_part_DrawPart$PartProgress, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;FFF)Lmindustry/entities/part/DrawPart$PartProgress;", 8 },
	{ "sin", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_sin_mindustry_entities_part_DrawPart$PartProgress_float_float_R_mindustry_entities_part_DrawPart$PartProgress, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;FF)Lmindustry/entities/part/DrawPart$PartProgress;", 8 },
	{ "absin", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_absin_mindustry_entities_part_DrawPart$PartProgress_float_float_R_mindustry_entities_part_DrawPart$PartProgress, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;FF)Lmindustry/entities/part/DrawPart$PartProgress;", 8 },
	{ "mod", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_mod_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;F)Lmindustry/entities/part/DrawPart$PartProgress;", 8 },
	{ "loop", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_loop_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;F)Lmindustry/entities/part/DrawPart$PartProgress;", 8 },
	{ "apply", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_apply_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartFunc_R_mindustry_entities_part_DrawPart$PartProgress, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;Lmindustry/entities/part/DrawPart$PartProgress;Lmindustry/entities/part/DrawPart$PartFunc;)Lmindustry/entities/part/DrawPart$PartProgress;", 8 },
	{ "curve", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_curve_mindustry_entities_part_DrawPart$PartProgress_arc_math_Interp_R_mindustry_entities_part_DrawPart$PartProgress, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;Larc/math/Interp;)Lmindustry/entities/part/DrawPart$PartProgress;", 8 },
	{ "lambda$curve$1", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_lambda$curve$1_arc_math_Interp_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Larc/math/Interp;Lmindustry/entities/part/DrawPart$PartProgress;Lmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
	{ "lambda$apply$0", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_lambda$apply$0_mindustry_entities_part_DrawPart$PartFunc_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Lmindustry/entities/part/DrawPart$PartFunc;Lmindustry/entities/part/DrawPart$PartProgress;Lmindustry/entities/part/DrawPart$PartProgress;Lmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
	{ "lambda$loop$0", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_lambda$loop$0_mindustry_entities_part_DrawPart$PartProgress_float_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;FLmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
	{ "lambda$mod$0", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_lambda$mod$0_mindustry_entities_part_DrawPart$PartProgress_float_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;FLmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
	{ "lambda$absin$0", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_lambda$absin$0_mindustry_entities_part_DrawPart$PartProgress_float_float_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;FFLmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
	{ "lambda$sin$1", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_lambda$sin$1_mindustry_entities_part_DrawPart$PartProgress_float_float_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;FFLmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
	{ "lambda$sin$0", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_lambda$sin$0_mindustry_entities_part_DrawPart$PartProgress_float_float_float_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;FFFLmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
	{ "lambda$min$0", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_lambda$min$0_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;Lmindustry/entities/part/DrawPart$PartProgress;Lmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
	{ "lambda$mul$1", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_lambda$mul$1_mindustry_entities_part_DrawPart$PartProgress_float_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;FLmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
	{ "lambda$mul$0", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_lambda$mul$0_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;Lmindustry/entities/part/DrawPart$PartProgress;Lmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
	{ "lambda$blend$0", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_lambda$blend$0_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartProgress_float_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;Lmindustry/entities/part/DrawPart$PartProgress;FLmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
	{ "lambda$compress$0", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_lambda$compress$0_mindustry_entities_part_DrawPart$PartProgress_float_float_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;FFLmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
	{ "lambda$shorten$0", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_lambda$shorten$0_mindustry_entities_part_DrawPart$PartProgress_float_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;FLmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
	{ "lambda$sustain$0", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_lambda$sustain$0_mindustry_entities_part_DrawPart$PartProgress_float_float_float_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;FFFLmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
	{ "lambda$curve$0", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_lambda$curve$0_mindustry_entities_part_DrawPart$PartProgress_float_float_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;FFLmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
	{ "lambda$delay$0", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_lambda$delay$0_mindustry_entities_part_DrawPart$PartProgress_float_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;FLmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
	{ "lambda$add$1", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_lambda$add$1_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;Lmindustry/entities/part/DrawPart$PartProgress;Lmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
	{ "lambda$add$0", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_lambda$add$0_mindustry_entities_part_DrawPart$PartProgress_float_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;FLmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
	{ "lambda$clamp$0", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_lambda$clamp$0_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;Lmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
	{ "lambda$slope$0", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_lambda$slope$0_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;Lmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
	{ "lambda$inv$0", (intptr_t) SM_mindustry_entities_part_DrawPart$CompatFix_lambda$inv$0_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Lmindustry/entities/part/DrawPart$PartProgress;Lmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
};

Class class_mindustry_entities_part_DrawPart$CompatFix{
		.nativeName = (intptr_t) "mindustry/entities/part/DrawPart$CompatFix",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_part_DrawPart$CompatFix),
		.classVtable = (intptr_t) vtable_mindustry_entities_part_DrawPart$CompatFix,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_part_DrawPart$CompatFix,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_part_DrawPart$CompatFix,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_entities_part_DrawPart,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 43,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_part_DrawPart$CompatFix = registerClass(&class_mindustry_entities_part_DrawPart$CompatFix);

}

