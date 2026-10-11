#include "arc/fx/filters/GaussianBlurFilter.h"
#include "java/lang/Math.h"
#include "arc/fx/filters/Convolve2dFilter.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "java/lang/String.h"
#include "arc/fx/util/PingPongBuffer.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/fx/filters/GaussianBlurFilter.h"
#include "arc/fx/filters/GaussianBlurFilter_BlurType.h"
#include "arc/fx/filters/MultipassVfxFilter.h"
#include "java/lang/Enum.h"
#include "arc/fx/filters/GaussianBlurFilter_Tap.h"

extern "C" {


void mark_arc_fx_filters_GaussianBlurFilter(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_fx_filters_MultipassVfxFilter(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_fx_filters_GaussianBlurFilter *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_convolve)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_convolve)->clazz)->markFunction)((jobject) self->F_convolve, mark, depth + 1);
}

void clinit_arc_fx_filters_GaussianBlurFilter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_fx_filters_MultipassVfxFilter(ctx);
}

void init_arc_fx_filters_GaussianBlurFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/GaussianBlurFilter:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_filters_GaussianBlurFilter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	clinit_arc_fx_filters_GaussianBlurFilter$BlurType(ctx);
	sp[1].o = (jobject)SF_arc_fx_filters_GaussianBlurFilter$BlurType_gaussian5x5;
	init_arc_fx_filters_GaussianBlurFilter_arc_fx_filters_GaussianBlurFilter$BlurType(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_fx_filters_GaussianBlurFilter_arc_fx_filters_GaussianBlurFilter$BlurType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/GaussianBlurFilter:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_filters_GaussianBlurFilter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(17);
	init_arc_fx_filters_MultipassVfxFilter(ctx, (frame[0].o));
	LINE_NUMBER(7);
	((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_amount = (jfloat(1));
	LINE_NUMBER(8);
	((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_passes = (jint(1));
	LINE_NUMBER(18);
	((func_arc_fx_filters_GaussianBlurFilter_setType_arc_fx_filters_GaussianBlurFilter$BlurType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_fx_filters_GaussianBlurFilter_setType_arc_fx_filters_GaussianBlurFilter$BlurType])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_filters_GaussianBlurFilter_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/GaussianBlurFilter:dispose", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(23);
	sp[0].o = (jobject)((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_convolve;
	((func_arc_fx_filters_Convolve2dFilter_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_filters_Convolve2dFilter_dispose])(ctx, sp[0].o);
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_filters_GaussianBlurFilter_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/GaussianBlurFilter:resize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(28);
	((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_invWidth = ((jfloat(1)) / (jfloat((frame[1].i))));
	LINE_NUMBER(29);
	((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_invHeight = ((jfloat(1)) / (jfloat((frame[2].i))));
	LINE_NUMBER(31);
	sp[0].o = (jobject)((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_convolve;
	((func_arc_fx_filters_Convolve2dFilter_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_filters_Convolve2dFilter_resize_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	LINE_NUMBER(32);
	M_arc_fx_filters_GaussianBlurFilter_computeBlurWeightings(ctx, (frame[0].o));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_filters_GaussianBlurFilter_setParams(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/GaussianBlurFilter:setParams", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_convolve;
	((func_arc_fx_filters_Convolve2dFilter_setParams) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_filters_Convolve2dFilter_setParams])(ctx, sp[0].o);
	LINE_NUMBER(38);
	M_arc_fx_filters_GaussianBlurFilter_computeBlurWeightings(ctx, (frame[0].o));
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_filters_GaussianBlurFilter_render_arc_fx_util_PingPongBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/GaussianBlurFilter:render", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(43);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= ((jint)((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_passes)) goto label_2;
	}
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_convolve;
	((func_arc_fx_filters_Convolve2dFilter_render_arc_fx_util_PingPongBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_filters_Convolve2dFilter_render_arc_fx_util_PingPongBuffer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(46);
	if ((frame[2].i) >= (((jint)((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_passes) - (jint(1)))) goto label_5;
	}
	{
	LINE_NUMBER(47);
	((func_arc_fx_util_PingPongBuffer_swap) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_fx_util_PingPongBuffer_swap])(ctx, (frame[1].o));
	}
label_5:;
	{
	LINE_NUMBER(43);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(50);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_fx_filters_GaussianBlurFilter_getType_R_arc_fx_filters_GaussianBlurFilter$BlurType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/GaussianBlurFilter:getType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_fx_filters_GaussianBlurFilter_setType_arc_fx_filters_GaussianBlurFilter$BlurType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/GaussianBlurFilter:setType", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(57);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(58);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Blur type cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_type;
	if (sp[0].o == (frame[1].o)) goto label_3;
	}
	{
	LINE_NUMBER(61);
	((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(64);
	sp[0].o = (jobject)((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_convolve;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_convolve;
	((func_arc_fx_filters_Convolve2dFilter_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_filters_Convolve2dFilter_dispose])(ctx, sp[0].o);
	}
label_6:;
	{
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	clinit_arc_fx_filters_Convolve2dFilter(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_fx_filters_Convolve2dFilter);
	sp[2].o = (jobject)((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_type;
	sp[2].o = (jobject)((arc_fx_filters_GaussianBlurFilter$BlurType *) NULL_CHECK(sp[2].o))->F_tap;
	init_arc_fx_filters_Convolve2dFilter_int(ctx, sp[1].o, ((jint)((arc_fx_filters_GaussianBlurFilter$Tap *) NULL_CHECK(sp[2].o))->F_radius));
	((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK(sp[0].o))->F_convolve = (jref) sp[1].o;
	LINE_NUMBER(69);
	M_arc_fx_filters_GaussianBlurFilter_computeBlurWeightings(ctx, (frame[0].o));
	}
label_3:;
	LINE_NUMBER(71);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_arc_fx_filters_GaussianBlurFilter_getAmount_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/GaussianBlurFilter:getAmount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return ((jfloat)((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_amount);
	}

	popStackFrame(ctx);
}

void M_arc_fx_filters_GaussianBlurFilter_setAmount_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/GaussianBlurFilter:setAmount", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(80);
	((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_amount = (frame[1].f);
	LINE_NUMBER(81);
	M_arc_fx_filters_GaussianBlurFilter_computeBlurWeightings(ctx, (frame[0].o));
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_fx_filters_GaussianBlurFilter_getPasses_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/GaussianBlurFilter:getPasses", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return ((jint)((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_passes);
	}

	popStackFrame(ctx);
}

void M_arc_fx_filters_GaussianBlurFilter_setPasses_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/GaussianBlurFilter:setPasses", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(89);
	((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_passes = (frame[1].i);
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_filters_GaussianBlurFilter_computeBlurWeightings(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/GaussianBlurFilter:computeBlurWeightings", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(93);
	frame[1].i = (jint(1));
	LINE_NUMBER(95);
	sp[0].o = (jobject)((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_convolve;
	sp[0].o = (jobject)((arc_fx_filters_Convolve2dFilter *) NULL_CHECK(sp[0].o))->F_weights;
	frame[2].o = sp[0].o;
	LINE_NUMBER(96);
	sp[0].o = (jobject)((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_convolve;
	sp[0].o = (jobject)((arc_fx_filters_Convolve2dFilter *) NULL_CHECK(sp[0].o))->F_offsetsHor;
	frame[3].o = sp[0].o;
	LINE_NUMBER(97);
	sp[0].o = (jobject)((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_convolve;
	sp[0].o = (jobject)((arc_fx_filters_Convolve2dFilter *) NULL_CHECK(sp[0].o))->F_offsetsVert;
	frame[4].o = sp[0].o;
	LINE_NUMBER(99);
	frame[5].f = ((jfloat)((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_invWidth);
	LINE_NUMBER(100);
	frame[6].f = ((jfloat)((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_invHeight);
	LINE_NUMBER(102);
	sp[0].o = (jobject)((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_arc_fx_filters_GaussianBlurFilter$BlurType_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_filters_GaussianBlurFilter$BlurType_ordinal_R_int])(ctx, sp[0].o);
	switch(temp0) {
		case 0: goto label_7;
		case 1: goto label_8;
		case 2: goto label_7;
		case 3: goto label_9;
		default: goto label_10;
	}
	}
label_7:;
	{
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((arc_fx_filters_GaussianBlurFilter$BlurType *) NULL_CHECK(sp[1].o))->F_tap;
	M_arc_fx_filters_GaussianBlurFilter_computeKernel_int_float_Array1_float(ctx, sp[0].o, ((jint)((arc_fx_filters_GaussianBlurFilter$Tap *) NULL_CHECK(sp[1].o))->F_radius), ((jfloat)((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_amount), (frame[2].o));
	LINE_NUMBER(106);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((arc_fx_filters_GaussianBlurFilter$BlurType *) NULL_CHECK(sp[1].o))->F_tap;
	M_arc_fx_filters_GaussianBlurFilter_computeOffsets_int_float_float_Array1_float_Array1_float(ctx, sp[0].o, ((jint)((arc_fx_filters_GaussianBlurFilter$Tap *) NULL_CHECK(sp[1].o))->F_radius), ((jfloat)((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_invWidth), ((jfloat)((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_invHeight), (frame[3].o), (frame[4].o));
	LINE_NUMBER(107);
	goto label_13;
	}
label_8:;
	{
	LINE_NUMBER(115);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))) = (jfloat(0.352941f));
	LINE_NUMBER(116);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1))) = (jfloat(0.294118f));
	LINE_NUMBER(117);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2))) = (jfloat(0.352941f));
	LINE_NUMBER(120);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(0))) = (jfloat(-1.33333f));
	LINE_NUMBER(121);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(1))) = (jfloat(0));
	LINE_NUMBER(122);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(2))) = (jfloat(0));
	LINE_NUMBER(123);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(3))) = (jfloat(0));
	LINE_NUMBER(124);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(4))) = (jfloat(1.33333f));
	LINE_NUMBER(125);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(5))) = (jfloat(0));
	LINE_NUMBER(128);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(0))) = (jfloat(0));
	LINE_NUMBER(129);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(1))) = (jfloat(-1.33333f));
	LINE_NUMBER(130);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(2))) = (jfloat(0));
	LINE_NUMBER(131);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(3))) = (jfloat(0));
	LINE_NUMBER(132);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(4))) = (jfloat(0));
	LINE_NUMBER(133);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(5))) = (jfloat(1.33333f));
	LINE_NUMBER(136);
	frame[7].i = (jint(0));
	}
label_29:;
	{
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_convolve;
	if (temp0 >= (((jint)((arc_fx_filters_Convolve2dFilter *) NULL_CHECK(sp[0].o))->F_length) * (jint(2)))) goto label_30;
	}
	{
	LINE_NUMBER(137);
	sp[0].o = frame[3].o;
	jint temp0 = frame[7].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) * (frame[5].f));
	LINE_NUMBER(138);
	sp[0].o = frame[4].o;
	jint temp3 = frame[7].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) * (frame[6].f));
	LINE_NUMBER(136);
	INST_IINC(7, 1);
	goto label_29;
	}
label_30:;
	LINE_NUMBER(141);
	goto label_13;
label_9:;
	{
	LINE_NUMBER(150);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))) = (jfloat(0.0702703f));
	LINE_NUMBER(151);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(1))) = (jfloat(0.316216f));
	LINE_NUMBER(152);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(2))) = (jfloat(0.227027f));
	LINE_NUMBER(153);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(3))) = (jfloat(0.316216f));
	LINE_NUMBER(154);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(4))) = (jfloat(0.0702703f));
	LINE_NUMBER(157);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(0))) = (jfloat(-3.23077f));
	LINE_NUMBER(158);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(1))) = (jfloat(0));
	LINE_NUMBER(159);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(2))) = (jfloat(-1.38462f));
	LINE_NUMBER(160);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(3))) = (jfloat(0));
	LINE_NUMBER(161);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(4))) = (jfloat(0));
	LINE_NUMBER(162);
	ARRAY_ACCESS(jfloat, (frame[3].o), (jint(5))) = (jfloat(0));
	LINE_NUMBER(163);
	ARRAY_ACCESS(jfloat, (frame[3].o), (6)) = (jfloat(1.38462f));
	LINE_NUMBER(164);
	ARRAY_ACCESS(jfloat, (frame[3].o), (7)) = (jfloat(0));
	LINE_NUMBER(165);
	ARRAY_ACCESS(jfloat, (frame[3].o), (8)) = (jfloat(3.23077f));
	LINE_NUMBER(166);
	ARRAY_ACCESS(jfloat, (frame[3].o), (9)) = (jfloat(0));
	LINE_NUMBER(169);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(0))) = (jfloat(0));
	LINE_NUMBER(170);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(1))) = (jfloat(-3.23077f));
	LINE_NUMBER(171);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(2))) = (jfloat(0));
	LINE_NUMBER(172);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(3))) = (jfloat(-1.38462f));
	LINE_NUMBER(173);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(4))) = (jfloat(0));
	LINE_NUMBER(174);
	ARRAY_ACCESS(jfloat, (frame[4].o), (jint(5))) = (jfloat(0));
	LINE_NUMBER(175);
	ARRAY_ACCESS(jfloat, (frame[4].o), (6)) = (jfloat(0));
	LINE_NUMBER(176);
	ARRAY_ACCESS(jfloat, (frame[4].o), (7)) = (jfloat(1.38462f));
	LINE_NUMBER(177);
	ARRAY_ACCESS(jfloat, (frame[4].o), (8)) = (jfloat(0));
	LINE_NUMBER(178);
	ARRAY_ACCESS(jfloat, (frame[4].o), (9)) = (jfloat(3.23077f));
	LINE_NUMBER(181);
	frame[7].i = (jint(0));
	}
label_59:;
	{
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_convolve;
	if (temp0 >= (((jint)((arc_fx_filters_Convolve2dFilter *) NULL_CHECK(sp[0].o))->F_length) * (jint(2)))) goto label_60;
	}
	{
	LINE_NUMBER(182);
	sp[0].o = frame[3].o;
	jint temp0 = frame[7].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) * (frame[5].f));
	LINE_NUMBER(183);
	sp[0].o = frame[4].o;
	jint temp3 = frame[7].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) * (frame[6].f));
	LINE_NUMBER(181);
	INST_IINC(7, 1);
	goto label_59;
	}
label_60:;
	LINE_NUMBER(186);
	goto label_13;
label_10:;
	{
	LINE_NUMBER(188);
	frame[1].i = (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(192);
	if ((frame[1].i) == 0) goto label_64;
	}
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((arc_fx_filters_GaussianBlurFilter *) NULL_CHECK((frame[0].o)))->F_convolve;
	((func_arc_fx_filters_Convolve2dFilter_setParams) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_fx_filters_Convolve2dFilter_setParams])(ctx, sp[0].o);
	}
label_64:;
	LINE_NUMBER(195);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_fx_filters_GaussianBlurFilter_computeKernel_int_float_Array1_float(jcontext ctx, jobject self, jint param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/GaussianBlurFilter:computeKernel", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(198);
	frame[4].i = (frame[1].i);
	LINE_NUMBER(201);
	frame[5].f = (frame[2].f);
	LINE_NUMBER(203);
	frame[6].f = (((jfloat(2)) * (frame[5].f)) * (frame[5].f));
	LINE_NUMBER(204);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, ((jdouble((frame[6].f))) * (jdouble(3.141592653589793))));
	frame[7].f = (jfloat(temp0));
	LINE_NUMBER(205);
	frame[8].f = (jfloat(0));
	LINE_NUMBER(206);
	frame[9].f = (jfloat(0));
	LINE_NUMBER(207);
	frame[10].i = (jint(0));
	LINE_NUMBER(209);
	frame[11].i = (-(frame[4].i));
	}
label_8:;
	{
	if ((frame[11].i) > (frame[4].i)) goto label_9;
	}
	{
	LINE_NUMBER(210);
	frame[9].f = (jfloat(((frame[11].i) * (frame[11].i))));
	LINE_NUMBER(211);
	frame[10].i = ((frame[11].i) + (frame[4].i));
	LINE_NUMBER(212);
	sp[0].o = frame[3].o;
	jint temp0 = frame[10].i;
	jdouble temp1 = (jdouble)SM_java_lang_Math_exp_double_R_double(ctx, (jdouble(((-(frame[9].f)) / (frame[6].f)))));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = ((jfloat(temp1)) / (frame[7].f));
	LINE_NUMBER(213);
	frame[8].f = ((frame[8].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[3].o), (frame[10].i))));
	LINE_NUMBER(209);
	INST_IINC(11, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(216);
	frame[11].i = (((frame[4].i) * (jint(2))) + (jint(1)));
	LINE_NUMBER(217);
	frame[12].i = (jint(0));
	}
label_16:;
	{
	if ((frame[12].i) >= (frame[11].i)) goto label_17;
	}
	{
	LINE_NUMBER(218);
	sp[0].o = frame[3].o;
	jint temp0 = frame[12].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) / (frame[8].f));
	LINE_NUMBER(217);
	INST_IINC(12, 1);
	goto label_16;
	}
label_17:;
	LINE_NUMBER(220);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_fx_filters_GaussianBlurFilter_computeOffsets_int_float_float_Array1_float_Array1_float(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/GaussianBlurFilter:computeOffsets", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(223);
	frame[6].i = (frame[1].i);
	LINE_NUMBER(225);
	frame[7].i = (jint(0));
	frame[8].i = (jint(1));
	LINE_NUMBER(226);
	frame[9].i = (-(frame[6].i));
	frame[10].i = (jint(0));
	}
label_5:;
	{
	if ((frame[9].i) > (frame[6].i)) goto label_6;
	}
	{
	LINE_NUMBER(227);
	ARRAY_ACCESS(jfloat, (frame[4].o), ((frame[10].i) + (jint(0)))) = ((jfloat((frame[9].i))) * (frame[2].f));
	LINE_NUMBER(228);
	ARRAY_ACCESS(jfloat, (frame[4].o), ((frame[10].i) + (jint(1)))) = (jfloat(0));
	LINE_NUMBER(230);
	ARRAY_ACCESS(jfloat, (frame[5].o), ((frame[10].i) + (jint(0)))) = (jfloat(0));
	LINE_NUMBER(231);
	ARRAY_ACCESS(jfloat, (frame[5].o), ((frame[10].i) + (jint(1)))) = ((jfloat((frame[9].i))) * (frame[3].f));
	LINE_NUMBER(226);
	INST_IINC(9, 1);
	INST_IINC(10, 2);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(233);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_fx_filters_GaussianBlurFilter[] {
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
	(void *) M_arc_fx_filters_GaussianBlurFilter_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_fx_filters_GaussianBlurFilter_resize_int_int,
	(void *) M_arc_fx_filters_GaussianBlurFilter_setParams,
	(void *) M_arc_fx_filters_GaussianBlurFilter_render_arc_fx_util_PingPongBuffer,
	(void *) M_arc_fx_filters_GaussianBlurFilter_getType_R_arc_fx_filters_GaussianBlurFilter$BlurType,
	(void *) M_arc_fx_filters_GaussianBlurFilter_setType_arc_fx_filters_GaussianBlurFilter$BlurType,
	(void *) M_arc_fx_filters_GaussianBlurFilter_getAmount_R_float,
	(void *) M_arc_fx_filters_GaussianBlurFilter_setAmount_float,
	(void *) M_arc_fx_filters_GaussianBlurFilter_getPasses_R_int,
	(void *) M_arc_fx_filters_GaussianBlurFilter_setPasses_int,
	(void *) M_arc_fx_filters_GaussianBlurFilter_computeBlurWeightings,
	(void *) M_arc_fx_filters_GaussianBlurFilter_computeKernel_int_float_Array1_float,
	(void *) M_arc_fx_filters_GaussianBlurFilter_computeOffsets_int_float_float_Array1_float_Array1_float,
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
	{ "dispose", "()V" },
	{ "isDisposed", "()Z" },
	{ "resize", "(II)V" },
	{ "setParams", "()V" },
	{ "render", "(Larc/fx/util/PingPongBuffer;)V" },
	{ "getType", "()Larc/fx/filters/GaussianBlurFilter$BlurType;" },
	{ "setType", "(Larc/fx/filters/GaussianBlurFilter$BlurType;)V" },
	{ "getAmount", "()F" },
	{ "setAmount", "(F)V" },
	{ "getPasses", "()I" },
	{ "setPasses", "(I)V" },
	{ "computeBlurWeightings", "()V" },
	{ "computeKernel", "(IF[F)V" },
	{ "computeOffsets", "(IFF[F[F)V" },
};

static jclass innerClasses[] {
	&class_arc_fx_filters_GaussianBlurFilter$BlurType,
	&class_arc_fx_filters_GaussianBlurFilter$Tap,
};

static FieldMetadata fields[] {
	{ "type", &class_arc_fx_filters_GaussianBlurFilter$BlurType, offsetof(arc_fx_filters_GaussianBlurFilter, F_type), "Larc/fx/filters/GaussianBlurFilter$BlurType;", 2 },
	{ "amount", &class_float, offsetof(arc_fx_filters_GaussianBlurFilter, F_amount), "F", 2 },
	{ "passes", &class_int, offsetof(arc_fx_filters_GaussianBlurFilter, F_passes), "I", 2 },
	{ "invWidth", &class_float, offsetof(arc_fx_filters_GaussianBlurFilter, F_invWidth), "F", 2 },
	{ "invHeight", &class_float, offsetof(arc_fx_filters_GaussianBlurFilter, F_invHeight), "F", 2 },
	{ "convolve", &class_arc_fx_filters_Convolve2dFilter, offsetof(arc_fx_filters_GaussianBlurFilter, F_convolve), "Larc/fx/filters/Convolve2dFilter;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_fx_filters_GaussianBlurFilter, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_fx_filters_GaussianBlurFilter_arc_fx_filters_GaussianBlurFilter$BlurType, 0, "(Larc/fx/filters/GaussianBlurFilter$BlurType;)V", 1 },
	{ "dispose", (intptr_t) M_arc_fx_filters_GaussianBlurFilter_dispose, VTABLE_arc_fx_filters_GaussianBlurFilter_dispose, "()V", 1 },
	{ "resize", (intptr_t) M_arc_fx_filters_GaussianBlurFilter_resize_int_int, VTABLE_arc_fx_filters_GaussianBlurFilter_resize_int_int, "(II)V", 1 },
	{ "setParams", (intptr_t) M_arc_fx_filters_GaussianBlurFilter_setParams, VTABLE_arc_fx_filters_GaussianBlurFilter_setParams, "()V", 1 },
	{ "render", (intptr_t) M_arc_fx_filters_GaussianBlurFilter_render_arc_fx_util_PingPongBuffer, VTABLE_arc_fx_filters_GaussianBlurFilter_render_arc_fx_util_PingPongBuffer, "(Larc/fx/util/PingPongBuffer;)V", 1 },
	{ "getType", (intptr_t) M_arc_fx_filters_GaussianBlurFilter_getType_R_arc_fx_filters_GaussianBlurFilter$BlurType, VTABLE_arc_fx_filters_GaussianBlurFilter_getType_R_arc_fx_filters_GaussianBlurFilter$BlurType, "()Larc/fx/filters/GaussianBlurFilter$BlurType;", 1 },
	{ "setType", (intptr_t) M_arc_fx_filters_GaussianBlurFilter_setType_arc_fx_filters_GaussianBlurFilter$BlurType, VTABLE_arc_fx_filters_GaussianBlurFilter_setType_arc_fx_filters_GaussianBlurFilter$BlurType, "(Larc/fx/filters/GaussianBlurFilter$BlurType;)V", 1 },
	{ "getAmount", (intptr_t) M_arc_fx_filters_GaussianBlurFilter_getAmount_R_float, VTABLE_arc_fx_filters_GaussianBlurFilter_getAmount_R_float, "()F", 1 },
	{ "setAmount", (intptr_t) M_arc_fx_filters_GaussianBlurFilter_setAmount_float, VTABLE_arc_fx_filters_GaussianBlurFilter_setAmount_float, "(F)V", 1 },
	{ "getPasses", (intptr_t) M_arc_fx_filters_GaussianBlurFilter_getPasses_R_int, VTABLE_arc_fx_filters_GaussianBlurFilter_getPasses_R_int, "()I", 1 },
	{ "setPasses", (intptr_t) M_arc_fx_filters_GaussianBlurFilter_setPasses_int, VTABLE_arc_fx_filters_GaussianBlurFilter_setPasses_int, "(I)V", 1 },
	{ "computeBlurWeightings", (intptr_t) M_arc_fx_filters_GaussianBlurFilter_computeBlurWeightings, VTABLE_arc_fx_filters_GaussianBlurFilter_computeBlurWeightings, "()V", 2 },
	{ "computeKernel", (intptr_t) M_arc_fx_filters_GaussianBlurFilter_computeKernel_int_float_Array1_float, VTABLE_arc_fx_filters_GaussianBlurFilter_computeKernel_int_float_Array1_float, "(IF[F)V", 2 },
	{ "computeOffsets", (intptr_t) M_arc_fx_filters_GaussianBlurFilter_computeOffsets_int_float_float_Array1_float_Array1_float, VTABLE_arc_fx_filters_GaussianBlurFilter_computeOffsets_int_float_float_Array1_float_Array1_float, "(IFF[F[F)V", 2 },
};

Class class_arc_fx_filters_GaussianBlurFilter{
		.nativeName = (intptr_t) "arc/fx/filters/GaussianBlurFilter",
		.parentClass = (intptr_t) &class_arc_fx_filters_MultipassVfxFilter,
		.size = sizeof(arc_fx_filters_GaussianBlurFilter),
		.classVtable = (intptr_t) vtable_arc_fx_filters_GaussianBlurFilter,
		.staticInitializer = (intptr_t) clinit_arc_fx_filters_GaussianBlurFilter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_fx_filters_GaussianBlurFilter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_fx_filters_GaussianBlurFilter = registerClass(&class_arc_fx_filters_GaussianBlurFilter);

}
