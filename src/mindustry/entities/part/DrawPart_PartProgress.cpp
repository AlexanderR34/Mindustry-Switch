#include "mindustry/entities/part/DrawPart_PartProgress.h"
#include "arc/math/Mathf.h"
#include "mindustry/entities/part/DrawPart_PartProgress_invoke_mindustry_entities_part_DrawPart_PartProgress_15.h"
#include "mindustry/entities/part/DrawPart_PartProgress_invoke_mindustry_entities_part_DrawPart_PartProgress_14.h"
#include "mindustry/entities/part/DrawPart_PartProgress_invoke_mindustry_entities_part_DrawPart_PartProgress_13.h"
#include "mindustry/entities/part/DrawPart_PartProgress_invoke_mindustry_entities_part_DrawPart_PartProgress_12.h"
#include "mindustry/entities/part/DrawPart_PartParams.h"
#include "arc/math/Interp.h"
#include "mindustry/entities/part/DrawPart_CompatFix.h"
#include "mindustry/entities/part/DrawPart_PartProgress_invoke_mindustry_entities_part_DrawPart_PartProgress_17.h"
#include "mindustry/entities/part/DrawPart_PartProgress_invoke_mindustry_entities_part_DrawPart_PartProgress_16.h"
#include "arc/util/Time.h"
#include "mindustry/entities/part/DrawPart.h"
#include "mindustry/entities/part/DrawPart_PartProgress_invoke_mindustry_entities_part_DrawPart_PartProgress_11.h"
#include "mindustry/entities/part/DrawPart_PartProgress_invoke_mindustry_entities_part_DrawPart_PartProgress_10.h"
#include "mindustry/entities/part/DrawPart_PartFunc.h"
#include "java/lang/Object.h"
#include "mindustry/entities/part/DrawPart_PartProgress_invoke_mindustry_entities_part_DrawPart_PartProgress_9.h"
#include "mindustry/entities/part/DrawPart_PartProgress.h"

extern "C" {

jobject SF_mindustry_entities_part_DrawPart$PartProgress_reload;
jobject SF_mindustry_entities_part_DrawPart$PartProgress_smoothReload;
jobject SF_mindustry_entities_part_DrawPart$PartProgress_warmup;
jobject SF_mindustry_entities_part_DrawPart$PartProgress_charge;
jobject SF_mindustry_entities_part_DrawPart$PartProgress_recoil;
jobject SF_mindustry_entities_part_DrawPart$PartProgress_heat;
jobject SF_mindustry_entities_part_DrawPart$PartProgress_life;
jobject SF_mindustry_entities_part_DrawPart$PartProgress_time;

void mark_mindustry_entities_part_DrawPart$PartProgress(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_entities_part_DrawPart$PartProgress_reload)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_part_DrawPart$PartProgress_reload)->clazz)->markFunction)((jobject) SF_mindustry_entities_part_DrawPart$PartProgress_reload, mark, depth + 1);
		if (SF_mindustry_entities_part_DrawPart$PartProgress_smoothReload)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_part_DrawPart$PartProgress_smoothReload)->clazz)->markFunction)((jobject) SF_mindustry_entities_part_DrawPart$PartProgress_smoothReload, mark, depth + 1);
		if (SF_mindustry_entities_part_DrawPart$PartProgress_warmup)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_part_DrawPart$PartProgress_warmup)->clazz)->markFunction)((jobject) SF_mindustry_entities_part_DrawPart$PartProgress_warmup, mark, depth + 1);
		if (SF_mindustry_entities_part_DrawPart$PartProgress_charge)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_part_DrawPart$PartProgress_charge)->clazz)->markFunction)((jobject) SF_mindustry_entities_part_DrawPart$PartProgress_charge, mark, depth + 1);
		if (SF_mindustry_entities_part_DrawPart$PartProgress_recoil)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_part_DrawPart$PartProgress_recoil)->clazz)->markFunction)((jobject) SF_mindustry_entities_part_DrawPart$PartProgress_recoil, mark, depth + 1);
		if (SF_mindustry_entities_part_DrawPart$PartProgress_heat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_part_DrawPart$PartProgress_heat)->clazz)->markFunction)((jobject) SF_mindustry_entities_part_DrawPart$PartProgress_heat, mark, depth + 1);
		if (SF_mindustry_entities_part_DrawPart$PartProgress_life)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_part_DrawPart$PartProgress_life)->clazz)->markFunction)((jobject) SF_mindustry_entities_part_DrawPart$PartProgress_life, mark, depth + 1);
		if (SF_mindustry_entities_part_DrawPart$PartProgress_time)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_entities_part_DrawPart$PartProgress_time)->clazz)->markFunction)((jobject) SF_mindustry_entities_part_DrawPart$PartProgress_time, mark, depth + 1);
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
	auto self = (mindustry_entities_part_DrawPart$PartProgress *) object;
}

jobject SM_mindustry_entities_part_DrawPart$PartProgress_constant_float_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jfloat param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:constant", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(95);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$PartProgress_invoke_mindustry_entities_part_DrawPart$PartProgress_9(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$PartProgress_invoke_mindustry_entities_part_DrawPart$PartProgress_9 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$PartProgress_invoke_mindustry_entities_part_DrawPart$PartProgress_9);
		proxy->F_field0 = (frame[0].f);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:getClamp", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	jfloat temp0 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_boolean_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_boolean_R_float, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_boolean_R_float(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:getClamp", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(103);
	if ((frame[2].i) == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, temp0);
	sp[0].f = temp1;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jfloat temp0 = (jfloat)((func_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_entities_part_DrawPart$PartProgress_inv_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:inv", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)SM_mindustry_entities_part_DrawPart$CompatFix_inv_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_part_DrawPart$PartProgress_slope_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:slope", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)SM_mindustry_entities_part_DrawPart$CompatFix_slope_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_part_DrawPart$PartProgress_clamp_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:clamp", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)SM_mindustry_entities_part_DrawPart$CompatFix_clamp_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_part_DrawPart$PartProgress_add_float_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)SM_mindustry_entities_part_DrawPart$CompatFix_add_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_part_DrawPart$PartProgress_add_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)SM_mindustry_entities_part_DrawPart$CompatFix_add_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_part_DrawPart$PartProgress_delay_float_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:delay", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)SM_mindustry_entities_part_DrawPart$CompatFix_delay_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_part_DrawPart$PartProgress_curve_float_float_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:curve", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)SM_mindustry_entities_part_DrawPart$CompatFix_curve_mindustry_entities_part_DrawPart$PartProgress_float_float_R_mindustry_entities_part_DrawPart$PartProgress(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_part_DrawPart$PartProgress_sustain_float_float_float_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:sustain", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)SM_mindustry_entities_part_DrawPart$CompatFix_sustain_mindustry_entities_part_DrawPart$PartProgress_float_float_float_R_mindustry_entities_part_DrawPart$PartProgress(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_part_DrawPart$PartProgress_shorten_float_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:shorten", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)SM_mindustry_entities_part_DrawPart$CompatFix_shorten_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_part_DrawPart$PartProgress_compress_float_float_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:compress", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)SM_mindustry_entities_part_DrawPart$CompatFix_compress_mindustry_entities_part_DrawPart$PartProgress_float_float_R_mindustry_entities_part_DrawPart$PartProgress(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_part_DrawPart$PartProgress_blend_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:blend", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)SM_mindustry_entities_part_DrawPart$CompatFix_blend_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_part_DrawPart$PartProgress_mul_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:mul", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)SM_mindustry_entities_part_DrawPart$CompatFix_mul_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_part_DrawPart$PartProgress_mul_float_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:mul", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)SM_mindustry_entities_part_DrawPart$CompatFix_mul_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_part_DrawPart$PartProgress_min_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:min", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)SM_mindustry_entities_part_DrawPart$CompatFix_min_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_part_DrawPart$PartProgress_sin_float_float_float_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:sin", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)SM_mindustry_entities_part_DrawPart$CompatFix_sin_mindustry_entities_part_DrawPart$PartProgress_float_float_float_R_mindustry_entities_part_DrawPart$PartProgress(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_part_DrawPart$PartProgress_sin_float_float_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:sin", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)SM_mindustry_entities_part_DrawPart$CompatFix_sin_mindustry_entities_part_DrawPart$PartProgress_float_float_R_mindustry_entities_part_DrawPart$PartProgress(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_part_DrawPart$PartProgress_absin_float_float_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:absin", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)SM_mindustry_entities_part_DrawPart$CompatFix_absin_mindustry_entities_part_DrawPart$PartProgress_float_float_R_mindustry_entities_part_DrawPart$PartProgress(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_part_DrawPart$PartProgress_mod_float_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:mod", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)SM_mindustry_entities_part_DrawPart$CompatFix_mod_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_part_DrawPart$PartProgress_loop_float_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:loop", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)SM_mindustry_entities_part_DrawPart$CompatFix_loop_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress(ctx, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_part_DrawPart$PartProgress_apply_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartFunc_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:apply", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)SM_mindustry_entities_part_DrawPart$CompatFix_apply_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartFunc_R_mindustry_entities_part_DrawPart$PartProgress(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_part_DrawPart$PartProgress_curve_arc_math_Interp_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:curve", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)SM_mindustry_entities_part_DrawPart$CompatFix_curve_mindustry_entities_part_DrawPart$PartProgress_arc_math_Interp_R_mindustry_entities_part_DrawPart$PartProgress(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$PartProgress_lambda$constant$0_float_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jfloat param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:lambda$constant$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return (frame[0].f);
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$PartProgress_lambda$static$7_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:lambda$static$7", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time);
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$PartProgress_lambda$static$6_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:lambda$static$6", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[0].o)))->F_life);
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$PartProgress_lambda$static$5_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:lambda$static$5", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[0].o)))->F_heat);
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$PartProgress_lambda$static$4_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:lambda$static$4", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[0].o)))->F_recoil);
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$PartProgress_lambda$static$3_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:lambda$static$3", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[0].o)))->F_charge);
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$PartProgress_lambda$static$2_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:lambda$static$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[0].o)))->F_warmup);
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$PartProgress_lambda$static$1_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:lambda$static$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[0].o)))->F_smoothReload);
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_entities_part_DrawPart$PartProgress_lambda$static$0_mindustry_entities_part_DrawPart$PartParams_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:lambda$static$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK((frame[0].o)))->F_reload);
	}

	popStackFrame(ctx);
}

void clinit_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/part/DrawPart$PartProgress:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	{
	LINE_NUMBER(76);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$PartProgress_invoke_mindustry_entities_part_DrawPart$PartProgress_10(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$PartProgress_invoke_mindustry_entities_part_DrawPart$PartProgress_10 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$PartProgress_invoke_mindustry_entities_part_DrawPart$PartProgress_10);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	SF_mindustry_entities_part_DrawPart$PartProgress_reload = sp[0].o;
	LINE_NUMBER(78);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$PartProgress_invoke_mindustry_entities_part_DrawPart$PartProgress_11(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$PartProgress_invoke_mindustry_entities_part_DrawPart$PartProgress_11 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$PartProgress_invoke_mindustry_entities_part_DrawPart$PartProgress_11);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	SF_mindustry_entities_part_DrawPart$PartProgress_smoothReload = sp[0].o;
	LINE_NUMBER(80);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$PartProgress_invoke_mindustry_entities_part_DrawPart$PartProgress_12(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$PartProgress_invoke_mindustry_entities_part_DrawPart$PartProgress_12 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$PartProgress_invoke_mindustry_entities_part_DrawPart$PartProgress_12);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	SF_mindustry_entities_part_DrawPart$PartProgress_warmup = sp[0].o;
	LINE_NUMBER(82);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$PartProgress_invoke_mindustry_entities_part_DrawPart$PartProgress_13(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$PartProgress_invoke_mindustry_entities_part_DrawPart$PartProgress_13 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$PartProgress_invoke_mindustry_entities_part_DrawPart$PartProgress_13);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	SF_mindustry_entities_part_DrawPart$PartProgress_charge = sp[0].o;
	LINE_NUMBER(84);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$PartProgress_invoke_mindustry_entities_part_DrawPart$PartProgress_14(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$PartProgress_invoke_mindustry_entities_part_DrawPart$PartProgress_14 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$PartProgress_invoke_mindustry_entities_part_DrawPart$PartProgress_14);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	SF_mindustry_entities_part_DrawPart$PartProgress_recoil = sp[0].o;
	LINE_NUMBER(86);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$PartProgress_invoke_mindustry_entities_part_DrawPart$PartProgress_15(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$PartProgress_invoke_mindustry_entities_part_DrawPart$PartProgress_15 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$PartProgress_invoke_mindustry_entities_part_DrawPart$PartProgress_15);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	SF_mindustry_entities_part_DrawPart$PartProgress_heat = sp[0].o;
	LINE_NUMBER(88);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$PartProgress_invoke_mindustry_entities_part_DrawPart$PartProgress_16(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$PartProgress_invoke_mindustry_entities_part_DrawPart$PartProgress_16 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$PartProgress_invoke_mindustry_entities_part_DrawPart$PartProgress_16);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	SF_mindustry_entities_part_DrawPart$PartProgress_life = sp[0].o;
	LINE_NUMBER(90);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_part_DrawPart$PartProgress_invoke_mindustry_entities_part_DrawPart$PartProgress_17(ctx);
		auto proxy = (mindustry_entities_part_DrawPart$PartProgress_invoke_mindustry_entities_part_DrawPart$PartProgress_17 *) gcAlloc(ctx, &class_mindustry_entities_part_DrawPart$PartProgress_invoke_mindustry_entities_part_DrawPart$PartProgress_17);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_entities_part_DrawPart$PartProgress(ctx);
	SF_mindustry_entities_part_DrawPart$PartProgress_time = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_part_DrawPart$PartProgress[] {
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
	(void *) nullptr,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_R_float,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_boolean_R_float,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_inv_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_slope_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_clamp_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_add_float_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_add_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_delay_float_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_curve_float_float_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_sustain_float_float_float_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_shorten_float_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_compress_float_float_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_blend_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_mul_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_mul_float_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_min_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_sin_float_float_float_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_sin_float_float_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_absin_float_float_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_mod_float_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_loop_float_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_apply_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartFunc_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_entities_part_DrawPart$PartProgress_curve_arc_math_Interp_R_mindustry_entities_part_DrawPart$PartProgress,
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
	{ "get", "(Lmindustry/entities/part/DrawPart$PartParams;)F" },
	{ "getClamp", "(Lmindustry/entities/part/DrawPart$PartParams;)F" },
	{ "getClamp", "(Lmindustry/entities/part/DrawPart$PartParams;Z)F" },
	{ "inv", "()Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "slope", "()Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "clamp", "()Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "add", "(F)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "add", "(Lmindustry/entities/part/DrawPart$PartProgress;)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "delay", "(F)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "curve", "(FF)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "sustain", "(FFF)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "shorten", "(F)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "compress", "(FF)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "blend", "(Lmindustry/entities/part/DrawPart$PartProgress;F)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "mul", "(Lmindustry/entities/part/DrawPart$PartProgress;)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "mul", "(F)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "min", "(Lmindustry/entities/part/DrawPart$PartProgress;)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "sin", "(FFF)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "sin", "(FF)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "absin", "(FF)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "mod", "(F)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "loop", "(F)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "apply", "(Lmindustry/entities/part/DrawPart$PartProgress;Lmindustry/entities/part/DrawPart$PartFunc;)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "curve", "(Larc/math/Interp;)Lmindustry/entities/part/DrawPart$PartProgress;" },
};

static FieldMetadata fields[] {
	{ "reload", &class_mindustry_entities_part_DrawPart$PartProgress, (intptr_t) &SF_mindustry_entities_part_DrawPart$PartProgress_reload, "Lmindustry/entities/part/DrawPart$PartProgress;", 25 },
	{ "smoothReload", &class_mindustry_entities_part_DrawPart$PartProgress, (intptr_t) &SF_mindustry_entities_part_DrawPart$PartProgress_smoothReload, "Lmindustry/entities/part/DrawPart$PartProgress;", 25 },
	{ "warmup", &class_mindustry_entities_part_DrawPart$PartProgress, (intptr_t) &SF_mindustry_entities_part_DrawPart$PartProgress_warmup, "Lmindustry/entities/part/DrawPart$PartProgress;", 25 },
	{ "charge", &class_mindustry_entities_part_DrawPart$PartProgress, (intptr_t) &SF_mindustry_entities_part_DrawPart$PartProgress_charge, "Lmindustry/entities/part/DrawPart$PartProgress;", 25 },
	{ "recoil", &class_mindustry_entities_part_DrawPart$PartProgress, (intptr_t) &SF_mindustry_entities_part_DrawPart$PartProgress_recoil, "Lmindustry/entities/part/DrawPart$PartProgress;", 25 },
	{ "heat", &class_mindustry_entities_part_DrawPart$PartProgress, (intptr_t) &SF_mindustry_entities_part_DrawPart$PartProgress_heat, "Lmindustry/entities/part/DrawPart$PartProgress;", 25 },
	{ "life", &class_mindustry_entities_part_DrawPart$PartProgress, (intptr_t) &SF_mindustry_entities_part_DrawPart$PartProgress_life, "Lmindustry/entities/part/DrawPart$PartProgress;", 25 },
	{ "time", &class_mindustry_entities_part_DrawPart$PartProgress, (intptr_t) &SF_mindustry_entities_part_DrawPart$PartProgress_time, "Lmindustry/entities/part/DrawPart$PartProgress;", 25 },
};

static MethodMetadata methods[] {
	{ "get", 0, INDEX_mindustry_entities_part_DrawPart$PartProgress_get_mindustry_entities_part_DrawPart$PartParams_R_float, "(Lmindustry/entities/part/DrawPart$PartParams;)F", 1025 },
	{ "constant", (intptr_t) SM_mindustry_entities_part_DrawPart$PartProgress_constant_float_R_mindustry_entities_part_DrawPart$PartProgress, 0, "(F)Lmindustry/entities/part/DrawPart$PartProgress;", 9 },
	{ "getClamp", (intptr_t) M_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_R_float, INDEX_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_R_float, "(Lmindustry/entities/part/DrawPart$PartParams;)F", 1 },
	{ "getClamp", (intptr_t) M_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_boolean_R_float, INDEX_mindustry_entities_part_DrawPart$PartProgress_getClamp_mindustry_entities_part_DrawPart$PartParams_boolean_R_float, "(Lmindustry/entities/part/DrawPart$PartParams;Z)F", 1 },
	{ "inv", (intptr_t) M_mindustry_entities_part_DrawPart$PartProgress_inv_R_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_inv_R_mindustry_entities_part_DrawPart$PartProgress, "()Lmindustry/entities/part/DrawPart$PartProgress;", 1 },
	{ "slope", (intptr_t) M_mindustry_entities_part_DrawPart$PartProgress_slope_R_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_slope_R_mindustry_entities_part_DrawPart$PartProgress, "()Lmindustry/entities/part/DrawPart$PartProgress;", 1 },
	{ "clamp", (intptr_t) M_mindustry_entities_part_DrawPart$PartProgress_clamp_R_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_clamp_R_mindustry_entities_part_DrawPart$PartProgress, "()Lmindustry/entities/part/DrawPart$PartProgress;", 1 },
	{ "add", (intptr_t) M_mindustry_entities_part_DrawPart$PartProgress_add_float_R_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_add_float_R_mindustry_entities_part_DrawPart$PartProgress, "(F)Lmindustry/entities/part/DrawPart$PartProgress;", 1 },
	{ "add", (intptr_t) M_mindustry_entities_part_DrawPart$PartProgress_add_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_add_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress, "(Lmindustry/entities/part/DrawPart$PartProgress;)Lmindustry/entities/part/DrawPart$PartProgress;", 1 },
	{ "delay", (intptr_t) M_mindustry_entities_part_DrawPart$PartProgress_delay_float_R_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_delay_float_R_mindustry_entities_part_DrawPart$PartProgress, "(F)Lmindustry/entities/part/DrawPart$PartProgress;", 1 },
	{ "curve", (intptr_t) M_mindustry_entities_part_DrawPart$PartProgress_curve_float_float_R_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_curve_float_float_R_mindustry_entities_part_DrawPart$PartProgress, "(FF)Lmindustry/entities/part/DrawPart$PartProgress;", 1 },
	{ "sustain", (intptr_t) M_mindustry_entities_part_DrawPart$PartProgress_sustain_float_float_float_R_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_sustain_float_float_float_R_mindustry_entities_part_DrawPart$PartProgress, "(FFF)Lmindustry/entities/part/DrawPart$PartProgress;", 1 },
	{ "shorten", (intptr_t) M_mindustry_entities_part_DrawPart$PartProgress_shorten_float_R_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_shorten_float_R_mindustry_entities_part_DrawPart$PartProgress, "(F)Lmindustry/entities/part/DrawPart$PartProgress;", 1 },
	{ "compress", (intptr_t) M_mindustry_entities_part_DrawPart$PartProgress_compress_float_float_R_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_compress_float_float_R_mindustry_entities_part_DrawPart$PartProgress, "(FF)Lmindustry/entities/part/DrawPart$PartProgress;", 1 },
	{ "blend", (intptr_t) M_mindustry_entities_part_DrawPart$PartProgress_blend_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_blend_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress, "(Lmindustry/entities/part/DrawPart$PartProgress;F)Lmindustry/entities/part/DrawPart$PartProgress;", 1 },
	{ "mul", (intptr_t) M_mindustry_entities_part_DrawPart$PartProgress_mul_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_mul_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress, "(Lmindustry/entities/part/DrawPart$PartProgress;)Lmindustry/entities/part/DrawPart$PartProgress;", 1 },
	{ "mul", (intptr_t) M_mindustry_entities_part_DrawPart$PartProgress_mul_float_R_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_mul_float_R_mindustry_entities_part_DrawPart$PartProgress, "(F)Lmindustry/entities/part/DrawPart$PartProgress;", 1 },
	{ "min", (intptr_t) M_mindustry_entities_part_DrawPart$PartProgress_min_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_min_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress, "(Lmindustry/entities/part/DrawPart$PartProgress;)Lmindustry/entities/part/DrawPart$PartProgress;", 1 },
	{ "sin", (intptr_t) M_mindustry_entities_part_DrawPart$PartProgress_sin_float_float_float_R_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_sin_float_float_float_R_mindustry_entities_part_DrawPart$PartProgress, "(FFF)Lmindustry/entities/part/DrawPart$PartProgress;", 1 },
	{ "sin", (intptr_t) M_mindustry_entities_part_DrawPart$PartProgress_sin_float_float_R_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_sin_float_float_R_mindustry_entities_part_DrawPart$PartProgress, "(FF)Lmindustry/entities/part/DrawPart$PartProgress;", 1 },
	{ "absin", (intptr_t) M_mindustry_entities_part_DrawPart$PartProgress_absin_float_float_R_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_absin_float_float_R_mindustry_entities_part_DrawPart$PartProgress, "(FF)Lmindustry/entities/part/DrawPart$PartProgress;", 1 },
	{ "mod", (intptr_t) M_mindustry_entities_part_DrawPart$PartProgress_mod_float_R_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_mod_float_R_mindustry_entities_part_DrawPart$PartProgress, "(F)Lmindustry/entities/part/DrawPart$PartProgress;", 1 },
	{ "loop", (intptr_t) M_mindustry_entities_part_DrawPart$PartProgress_loop_float_R_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_loop_float_R_mindustry_entities_part_DrawPart$PartProgress, "(F)Lmindustry/entities/part/DrawPart$PartProgress;", 1 },
	{ "apply", (intptr_t) M_mindustry_entities_part_DrawPart$PartProgress_apply_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartFunc_R_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_apply_mindustry_entities_part_DrawPart$PartProgress_mindustry_entities_part_DrawPart$PartFunc_R_mindustry_entities_part_DrawPart$PartProgress, "(Lmindustry/entities/part/DrawPart$PartProgress;Lmindustry/entities/part/DrawPart$PartFunc;)Lmindustry/entities/part/DrawPart$PartProgress;", 1 },
	{ "curve", (intptr_t) M_mindustry_entities_part_DrawPart$PartProgress_curve_arc_math_Interp_R_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_curve_arc_math_Interp_R_mindustry_entities_part_DrawPart$PartProgress, "(Larc/math/Interp;)Lmindustry/entities/part/DrawPart$PartProgress;", 1 },
	{ "lambda$constant$0", (intptr_t) SM_mindustry_entities_part_DrawPart$PartProgress_lambda$constant$0_float_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(FLmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
	{ "lambda$static$7", (intptr_t) SM_mindustry_entities_part_DrawPart$PartProgress_lambda$static$7_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Lmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
	{ "lambda$static$6", (intptr_t) SM_mindustry_entities_part_DrawPart$PartProgress_lambda$static$6_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Lmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
	{ "lambda$static$5", (intptr_t) SM_mindustry_entities_part_DrawPart$PartProgress_lambda$static$5_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Lmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
	{ "lambda$static$4", (intptr_t) SM_mindustry_entities_part_DrawPart$PartProgress_lambda$static$4_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Lmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
	{ "lambda$static$3", (intptr_t) SM_mindustry_entities_part_DrawPart$PartProgress_lambda$static$3_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Lmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
	{ "lambda$static$2", (intptr_t) SM_mindustry_entities_part_DrawPart$PartProgress_lambda$static$2_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Lmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
	{ "lambda$static$1", (intptr_t) SM_mindustry_entities_part_DrawPart$PartProgress_lambda$static$1_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Lmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_entities_part_DrawPart$PartProgress_lambda$static$0_mindustry_entities_part_DrawPart$PartParams_R_float, 0, "(Lmindustry/entities/part/DrawPart$PartParams;)F", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_entities_part_DrawPart$PartProgress, 0, "()V", 8 },
};

Class class_mindustry_entities_part_DrawPart$PartProgress{
		.nativeName = (intptr_t) "mindustry/entities/part/DrawPart$PartProgress",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_part_DrawPart$PartProgress),
		.classVtable = (intptr_t) vtable_mindustry_entities_part_DrawPart$PartProgress,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_part_DrawPart$PartProgress,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_part_DrawPart$PartProgress,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_entities_part_DrawPart,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1545,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 35,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 35,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_part_DrawPart$PartProgress = registerClass(&class_mindustry_entities_part_DrawPart$PartProgress);

}

