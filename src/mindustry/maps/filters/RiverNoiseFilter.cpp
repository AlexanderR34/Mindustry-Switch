#include "mindustry/maps/filters/RiverNoiseFilter.h"
#include "arc/func/Prov.h"
#include "mindustry/maps/filters/GenerateFilter.h"
#include "mindustry/world/Block.h"
#include "mindustry/maps/filters/RiverNoiseFilter_invoke_arc_func_Floatc_7.h"
#include "mindustry/maps/filters/RiverNoiseFilter_invoke_arc_func_Prov_5.h"
#include "mindustry/maps/filters/RiverNoiseFilter_invoke_arc_func_Floatc_6.h"
#include "mindustry/maps/filters/RiverNoiseFilter_invoke_arc_func_Prov_4.h"
#include "mindustry/maps/filters/RiverNoiseFilter_invoke_arc_func_Floatc_5.h"
#include "mindustry/maps/filters/RiverNoiseFilter_invoke_arc_func_Floatc_9.h"
#include "mindustry/maps/filters/RiverNoiseFilter_invoke_arc_func_Prov_7.h"
#include "mindustry/maps/filters/RiverNoiseFilter_invoke_arc_func_Floatc_8.h"
#include "mindustry/maps/filters/RiverNoiseFilter_invoke_arc_func_Prov_6.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "mindustry/maps/filters/FilterOption_BlockOption.h"
#include "mindustry/maps/filters/RiverNoiseFilter.h"
#include "mindustry/maps/filters/RiverNoiseFilter_invoke_arc_func_Cons_7.h"
#include "mindustry/maps/filters/RiverNoiseFilter_invoke_arc_func_Cons_6.h"
#include "arc/func/Floatp.h"
#include "arc/func/Boolf.h"
#include "mindustry/maps/filters/GenerateFilter_GenerateInput.h"
#include "mindustry/maps/filters/RiverNoiseFilter_invoke_arc_func_Cons_5.h"
#include "mindustry/maps/filters/FilterOption.h"
#include "mindustry/maps/filters/RiverNoiseFilter_invoke_arc_func_Cons_4.h"
#include "mindustry/maps/filters/FilterOption_SliderOption.h"
#include "arc/func/Floatc.h"
#include "mindustry/maps/filters/RiverNoiseFilter_invoke_arc_func_Floatp_6.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/maps/filters/RiverNoiseFilter_invoke_arc_func_Floatp_5.h"
#include "java/lang/Object.h"
#include "mindustry/maps/filters/RiverNoiseFilter_invoke_arc_func_Floatp_9.h"
#include "mindustry/maps/filters/RiverNoiseFilter_invoke_arc_func_Floatp_8.h"
#include "mindustry/maps/filters/RiverNoiseFilter_invoke_arc_func_Floatp_7.h"

extern "C" {


void mark_mindustry_maps_filters_RiverNoiseFilter(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_maps_filters_GenerateFilter(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_maps_filters_RiverNoiseFilter *) object;
	if (self->F_floor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_floor)->clazz)->markFunction)((jobject) self->F_floor, mark, depth + 1);
	if (self->F_floor2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_floor2)->clazz)->markFunction)((jobject) self->F_floor2, mark, depth + 1);
	if (self->F_block)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_block)->clazz)->markFunction)((jobject) self->F_block, mark, depth + 1);
	if (self->F_target)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_target)->clazz)->markFunction)((jobject) self->F_target, mark, depth + 1);
}

void clinit_mindustry_maps_filters_RiverNoiseFilter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_maps_filters_GenerateFilter(ctx);
}

void init_mindustry_maps_filters_RiverNoiseFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/RiverNoiseFilter:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_RiverNoiseFilter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_mindustry_maps_filters_GenerateFilter(ctx, (frame[0].o));
	LINE_NUMBER(10);
	((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_scl = (jfloat(40.0f));
	((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_threshold = (jfloat(0));
	((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_threshold2 = (jfloat(0.1f));
	((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_octaves = (jfloat(1));
	((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_falloff = (jfloat(0.5f));
	LINE_NUMBER(11);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_water;
	((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_deepwater;
	((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK(sp[0].o))->F_floor2 = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_sandWall;
	((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK(sp[0].o))->F_target = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_filters_RiverNoiseFilter_options_R_Array1_mindustry_maps_filters_FilterOption(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/RiverNoiseFilter:options", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(15);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_maps_filters_FilterOption, (9));
	jint temp0 = jint(0);
	clinit_mindustry_maps_filters_FilterOption$SliderOption(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$SliderOption);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"scale"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_5(ctx);
		auto proxy = (mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_5 *) gcAlloc(ctx, &class_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatc_5(ctx);
		auto proxy = (mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatc_5 *) gcAlloc(ctx, &class_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatc_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_maps_filters_FilterOption$SliderOption_java_lang_String_arc_func_Floatp_arc_func_Floatc_float_float(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jfloat(1)), (jfloat(500.0f)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_maps_filters_FilterOption$SliderOption(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$SliderOption);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"threshold"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_6(ctx);
		auto proxy = (mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_6 *) gcAlloc(ctx, &class_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatc_6(ctx);
		auto proxy = (mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatc_6 *) gcAlloc(ctx, &class_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatc_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_maps_filters_FilterOption$SliderOption_java_lang_String_arc_func_Floatp_arc_func_Floatc_float_float(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jfloat(-1.0f)), (jfloat(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_maps_filters_FilterOption$SliderOption(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$SliderOption);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"threshold2"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_7(ctx);
		auto proxy = (mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_7 *) gcAlloc(ctx, &class_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatc_7(ctx);
		auto proxy = (mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatc_7 *) gcAlloc(ctx, &class_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatc_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_maps_filters_FilterOption$SliderOption_java_lang_String_arc_func_Floatp_arc_func_Floatc_float_float(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jfloat(-1.0f)), (jfloat(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_maps_filters_FilterOption$SliderOption(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$SliderOption);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"octaves"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_8(ctx);
		auto proxy = (mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_8 *) gcAlloc(ctx, &class_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatc_8(ctx);
		auto proxy = (mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatc_8 *) gcAlloc(ctx, &class_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatc_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_maps_filters_FilterOption$SliderOption_java_lang_String_arc_func_Floatp_arc_func_Floatc_float_float(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jfloat(1)), (jfloat(10.0f)));
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_maps_filters_FilterOption$SliderOption(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$SliderOption);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"falloff"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_9(ctx);
		auto proxy = (mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_9 *) gcAlloc(ctx, &class_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatc_9(ctx);
		auto proxy = (mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatc_9 *) gcAlloc(ctx, &class_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatc_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_maps_filters_FilterOption$SliderOption_java_lang_String_arc_func_Floatp_arc_func_Floatc_float_float(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jfloat(0)), (jfloat(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_maps_filters_FilterOption$BlockOption(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$BlockOption);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"target"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Prov_4(ctx);
		auto proxy = (mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Prov_4 *) gcAlloc(ctx, &class_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Prov_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Cons_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	clinit_mindustry_maps_filters_FilterOption(ctx);
	sp[5].o = (jobject)SF_mindustry_maps_filters_FilterOption_anyOptional;
	init_mindustry_maps_filters_FilterOption$BlockOption_java_lang_String_arc_func_Prov_arc_func_Cons_arc_func_Boolf(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_maps_filters_FilterOption$BlockOption(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$BlockOption);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"block"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Prov_5(ctx);
		auto proxy = (mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Prov_5 *) gcAlloc(ctx, &class_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Prov_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Cons_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	clinit_mindustry_maps_filters_FilterOption(ctx);
	sp[5].o = (jobject)SF_mindustry_maps_filters_FilterOption_wallsOptional;
	init_mindustry_maps_filters_FilterOption$BlockOption_java_lang_String_arc_func_Prov_arc_func_Cons_arc_func_Boolf(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_maps_filters_FilterOption$BlockOption(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$BlockOption);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"floor"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Prov_6(ctx);
		auto proxy = (mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Prov_6 *) gcAlloc(ctx, &class_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Prov_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Cons_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	clinit_mindustry_maps_filters_FilterOption(ctx);
	sp[5].o = (jobject)SF_mindustry_maps_filters_FilterOption_floorsOptional;
	init_mindustry_maps_filters_FilterOption$BlockOption_java_lang_String_arc_func_Prov_arc_func_Cons_arc_func_Boolf(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_mindustry_maps_filters_FilterOption$BlockOption(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$BlockOption);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"floor2"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Prov_7(ctx);
		auto proxy = (mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Prov_7 *) gcAlloc(ctx, &class_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Prov_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Cons_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	clinit_mindustry_maps_filters_FilterOption(ctx);
	sp[5].o = (jobject)SF_mindustry_maps_filters_FilterOption_floorsOptional;
	init_mindustry_maps_filters_FilterOption$BlockOption_java_lang_String_arc_func_Prov_arc_func_Cons_arc_func_Boolf(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jchar M_mindustry_maps_filters_RiverNoiseFilter_icon_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/RiverNoiseFilter:icon", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return (jint(63741));
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_RiverNoiseFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/RiverNoiseFilter:apply", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(35);
	jfloat temp0 = (jfloat)((func_mindustry_maps_filters_RiverNoiseFilter_rnoise_float_float_int_float_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_filters_RiverNoiseFilter_rnoise_float_float_int_float_float_float_R_float])(ctx, (frame[0].o), (jfloat(((jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_x))), (jfloat(((jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_y))), (jint(((jfloat)((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_octaves))), ((jfloat)((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_scl), ((jfloat)((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_falloff), (jfloat(1)));
	frame[2].f = temp0;
	LINE_NUMBER(37);
	if ((floatCompare((frame[2].f), ((jfloat)((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_threshold), -1)) < 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_target;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_floor;
	sp[1].o = (jobject)((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_block;
	sp[1].o = (jobject)((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_floor;
	((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(41);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_block;
	((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(44);
	if ((floatCompare((frame[2].f), ((jfloat)((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_threshold2), -1)) < 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_floor2;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(45);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_floor2;
	((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	}
label_2:;
	LINE_NUMBER(48);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$17_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/RiverNoiseFilter:lambda$options$17", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(24);
	((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_floor2 = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$16_R_mindustry_world_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/RiverNoiseFilter:lambda$options$16", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_floor2;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$15_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/RiverNoiseFilter:lambda$options$15", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(23);
	((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_floor = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$14_R_mindustry_world_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/RiverNoiseFilter:lambda$options$14", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(23);
	sp[0].o = (jobject)((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_floor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$13_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/RiverNoiseFilter:lambda$options$13", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(22);
	((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_block = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$12_R_mindustry_world_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/RiverNoiseFilter:lambda$options$12", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$11_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/RiverNoiseFilter:lambda$options$11", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(21);
	((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_target = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$10_R_mindustry_world_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/RiverNoiseFilter:lambda$options$10", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(21);
	sp[0].o = (jobject)((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_target;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$9_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/RiverNoiseFilter:lambda$options$9", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(20);
	((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_falloff = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$8_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/RiverNoiseFilter:lambda$options$8", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_falloff);
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$7_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/RiverNoiseFilter:lambda$options$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(19);
	((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_octaves = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$6_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/RiverNoiseFilter:lambda$options$6", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_octaves);
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$5_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/RiverNoiseFilter:lambda$options$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(18);
	((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_threshold2 = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$4_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/RiverNoiseFilter:lambda$options$4", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_threshold2);
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$3_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/RiverNoiseFilter:lambda$options$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(17);
	((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_threshold = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$2_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/RiverNoiseFilter:lambda$options$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_threshold);
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$1_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/RiverNoiseFilter:lambda$options$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(16);
	((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_scl = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$0_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/RiverNoiseFilter:lambda$options$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_maps_filters_RiverNoiseFilter *) NULL_CHECK((frame[0].o)))->F_scl);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_filters_RiverNoiseFilter[] {
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
	(void *) M_mindustry_maps_filters_GenerateFilter_apply_mindustry_world_Tiles_mindustry_maps_filters_GenerateFilter$GenerateInput,
	(void *) M_mindustry_maps_filters_RiverNoiseFilter_options_R_Array1_mindustry_maps_filters_FilterOption,
	(void *) M_mindustry_maps_filters_RiverNoiseFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput,
	(void *) M_mindustry_maps_filters_GenerateFilter_draw_arc_scene_ui_Image,
	(void *) M_mindustry_maps_filters_GenerateFilter_simpleName_R_java_lang_String,
	(void *) M_mindustry_maps_filters_GenerateFilter_name_R_java_lang_String,
	(void *) M_mindustry_maps_filters_RiverNoiseFilter_icon_R_char,
	(void *) M_mindustry_maps_filters_GenerateFilter_randomize,
	(void *) M_mindustry_maps_filters_GenerateFilter_isBuffered_R_boolean,
	(void *) M_mindustry_maps_filters_GenerateFilter_isPost_R_boolean,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_int_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_float_float_float_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_rnoise_float_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_rnoise_float_float_int_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_chance_int_int_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_copy_R_mindustry_maps_filters_GenerateFilter,
	(void *) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$17_mindustry_world_Block,
	(void *) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$16_R_mindustry_world_Block,
	(void *) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$15_mindustry_world_Block,
	(void *) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$14_R_mindustry_world_Block,
	(void *) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$13_mindustry_world_Block,
	(void *) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$12_R_mindustry_world_Block,
	(void *) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$11_mindustry_world_Block,
	(void *) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$10_R_mindustry_world_Block,
	(void *) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$9_float,
	(void *) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$8_R_float,
	(void *) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$7_float,
	(void *) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$6_R_float,
	(void *) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$5_float,
	(void *) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$4_R_float,
	(void *) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$3_float,
	(void *) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$2_R_float,
	(void *) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$1_float,
	(void *) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$0_R_float,
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
	{ "apply", "(Lmindustry/world/Tiles;Lmindustry/maps/filters/GenerateFilter$GenerateInput;)V" },
	{ "options", "()[Lmindustry/maps/filters/FilterOption;" },
	{ "apply", "(Lmindustry/maps/filters/GenerateFilter$GenerateInput;)V" },
	{ "draw", "(Larc/scene/ui/Image;)V" },
	{ "simpleName", "()Ljava/lang/String;" },
	{ "name", "()Ljava/lang/String;" },
	{ "icon", "()C" },
	{ "randomize", "()V" },
	{ "isBuffered", "()Z" },
	{ "isPost", "()Z" },
	{ "noise", "(ILmindustry/maps/filters/GenerateFilter$GenerateInput;FF)F" },
	{ "noise", "(Lmindustry/maps/filters/GenerateFilter$GenerateInput;FF)F" },
	{ "noise", "(Lmindustry/maps/filters/GenerateFilter$GenerateInput;FFFF)F" },
	{ "noise", "(FFFFFF)F" },
	{ "rnoise", "(FFFF)F" },
	{ "rnoise", "(FFIFFF)F" },
	{ "chance", "(II)F" },
	{ "copy", "()Lmindustry/maps/filters/GenerateFilter;" },
	{ "lambda$options$17", "(Lmindustry/world/Block;)V" },
	{ "lambda$options$16", "()Lmindustry/world/Block;" },
	{ "lambda$options$15", "(Lmindustry/world/Block;)V" },
	{ "lambda$options$14", "()Lmindustry/world/Block;" },
	{ "lambda$options$13", "(Lmindustry/world/Block;)V" },
	{ "lambda$options$12", "()Lmindustry/world/Block;" },
	{ "lambda$options$11", "(Lmindustry/world/Block;)V" },
	{ "lambda$options$10", "()Lmindustry/world/Block;" },
	{ "lambda$options$9", "(F)V" },
	{ "lambda$options$8", "()F" },
	{ "lambda$options$7", "(F)V" },
	{ "lambda$options$6", "()F" },
	{ "lambda$options$5", "(F)V" },
	{ "lambda$options$4", "()F" },
	{ "lambda$options$3", "(F)V" },
	{ "lambda$options$2", "()F" },
	{ "lambda$options$1", "(F)V" },
	{ "lambda$options$0", "()F" },
};

static FieldMetadata fields[] {
	{ "scl", &class_float, offsetof(mindustry_maps_filters_RiverNoiseFilter, F_scl), "F", 1 },
	{ "threshold", &class_float, offsetof(mindustry_maps_filters_RiverNoiseFilter, F_threshold), "F", 1 },
	{ "threshold2", &class_float, offsetof(mindustry_maps_filters_RiverNoiseFilter, F_threshold2), "F", 1 },
	{ "octaves", &class_float, offsetof(mindustry_maps_filters_RiverNoiseFilter, F_octaves), "F", 1 },
	{ "falloff", &class_float, offsetof(mindustry_maps_filters_RiverNoiseFilter, F_falloff), "F", 1 },
	{ "floor", &class_mindustry_world_Block, offsetof(mindustry_maps_filters_RiverNoiseFilter, F_floor), "Lmindustry/world/Block;", 1 },
	{ "floor2", &class_mindustry_world_Block, offsetof(mindustry_maps_filters_RiverNoiseFilter, F_floor2), "Lmindustry/world/Block;", 1 },
	{ "block", &class_mindustry_world_Block, offsetof(mindustry_maps_filters_RiverNoiseFilter, F_block), "Lmindustry/world/Block;", 1 },
	{ "target", &class_mindustry_world_Block, offsetof(mindustry_maps_filters_RiverNoiseFilter, F_target), "Lmindustry/world/Block;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_filters_RiverNoiseFilter, 0, "()V", 1 },
	{ "options", (intptr_t) M_mindustry_maps_filters_RiverNoiseFilter_options_R_Array1_mindustry_maps_filters_FilterOption, VTABLE_mindustry_maps_filters_RiverNoiseFilter_options_R_Array1_mindustry_maps_filters_FilterOption, "()[Lmindustry/maps/filters/FilterOption;", 1 },
	{ "icon", (intptr_t) M_mindustry_maps_filters_RiverNoiseFilter_icon_R_char, VTABLE_mindustry_maps_filters_RiverNoiseFilter_icon_R_char, "()C", 1 },
	{ "apply", (intptr_t) M_mindustry_maps_filters_RiverNoiseFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput, VTABLE_mindustry_maps_filters_RiverNoiseFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput, "(Lmindustry/maps/filters/GenerateFilter$GenerateInput;)V", 1 },
	{ "lambda$options$17", (intptr_t) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$17_mindustry_world_Block, VTABLE_mindustry_maps_filters_RiverNoiseFilter_lambda$options$17_mindustry_world_Block, "(Lmindustry/world/Block;)V", 4098 },
	{ "lambda$options$16", (intptr_t) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$16_R_mindustry_world_Block, VTABLE_mindustry_maps_filters_RiverNoiseFilter_lambda$options$16_R_mindustry_world_Block, "()Lmindustry/world/Block;", 4098 },
	{ "lambda$options$15", (intptr_t) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$15_mindustry_world_Block, VTABLE_mindustry_maps_filters_RiverNoiseFilter_lambda$options$15_mindustry_world_Block, "(Lmindustry/world/Block;)V", 4098 },
	{ "lambda$options$14", (intptr_t) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$14_R_mindustry_world_Block, VTABLE_mindustry_maps_filters_RiverNoiseFilter_lambda$options$14_R_mindustry_world_Block, "()Lmindustry/world/Block;", 4098 },
	{ "lambda$options$13", (intptr_t) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$13_mindustry_world_Block, VTABLE_mindustry_maps_filters_RiverNoiseFilter_lambda$options$13_mindustry_world_Block, "(Lmindustry/world/Block;)V", 4098 },
	{ "lambda$options$12", (intptr_t) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$12_R_mindustry_world_Block, VTABLE_mindustry_maps_filters_RiverNoiseFilter_lambda$options$12_R_mindustry_world_Block, "()Lmindustry/world/Block;", 4098 },
	{ "lambda$options$11", (intptr_t) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$11_mindustry_world_Block, VTABLE_mindustry_maps_filters_RiverNoiseFilter_lambda$options$11_mindustry_world_Block, "(Lmindustry/world/Block;)V", 4098 },
	{ "lambda$options$10", (intptr_t) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$10_R_mindustry_world_Block, VTABLE_mindustry_maps_filters_RiverNoiseFilter_lambda$options$10_R_mindustry_world_Block, "()Lmindustry/world/Block;", 4098 },
	{ "lambda$options$9", (intptr_t) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$9_float, VTABLE_mindustry_maps_filters_RiverNoiseFilter_lambda$options$9_float, "(F)V", 4098 },
	{ "lambda$options$8", (intptr_t) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$8_R_float, VTABLE_mindustry_maps_filters_RiverNoiseFilter_lambda$options$8_R_float, "()F", 4098 },
	{ "lambda$options$7", (intptr_t) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$7_float, VTABLE_mindustry_maps_filters_RiverNoiseFilter_lambda$options$7_float, "(F)V", 4098 },
	{ "lambda$options$6", (intptr_t) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$6_R_float, VTABLE_mindustry_maps_filters_RiverNoiseFilter_lambda$options$6_R_float, "()F", 4098 },
	{ "lambda$options$5", (intptr_t) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$5_float, VTABLE_mindustry_maps_filters_RiverNoiseFilter_lambda$options$5_float, "(F)V", 4098 },
	{ "lambda$options$4", (intptr_t) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$4_R_float, VTABLE_mindustry_maps_filters_RiverNoiseFilter_lambda$options$4_R_float, "()F", 4098 },
	{ "lambda$options$3", (intptr_t) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$3_float, VTABLE_mindustry_maps_filters_RiverNoiseFilter_lambda$options$3_float, "(F)V", 4098 },
	{ "lambda$options$2", (intptr_t) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$2_R_float, VTABLE_mindustry_maps_filters_RiverNoiseFilter_lambda$options$2_R_float, "()F", 4098 },
	{ "lambda$options$1", (intptr_t) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$1_float, VTABLE_mindustry_maps_filters_RiverNoiseFilter_lambda$options$1_float, "(F)V", 4098 },
	{ "lambda$options$0", (intptr_t) M_mindustry_maps_filters_RiverNoiseFilter_lambda$options$0_R_float, VTABLE_mindustry_maps_filters_RiverNoiseFilter_lambda$options$0_R_float, "()F", 4098 },
};

Class class_mindustry_maps_filters_RiverNoiseFilter{
		.nativeName = (intptr_t) "mindustry/maps/filters/RiverNoiseFilter",
		.parentClass = (intptr_t) &class_mindustry_maps_filters_GenerateFilter,
		.size = sizeof(mindustry_maps_filters_RiverNoiseFilter),
		.classVtable = (intptr_t) vtable_mindustry_maps_filters_RiverNoiseFilter,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_filters_RiverNoiseFilter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_filters_RiverNoiseFilter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 22,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 47,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_filters_RiverNoiseFilter = registerClass(&class_mindustry_maps_filters_RiverNoiseFilter);

}
