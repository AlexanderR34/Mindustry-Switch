#include "mindustry/maps/filters/ScatterFilter.h"
#include "mindustry/maps/filters/ScatterFilter_invoke_arc_func_Prov_3.h"
#include "arc/func/Prov.h"
#include "mindustry/maps/filters/ScatterFilter_invoke_arc_func_Prov_5.h"
#include "mindustry/maps/filters/GenerateFilter.h"
#include "mindustry/world/Block.h"
#include "mindustry/maps/filters/ScatterFilter_invoke_arc_func_Prov_4.h"
#include "mindustry/maps/filters/ScatterFilter_invoke_arc_func_Cons_5.h"
#include "mindustry/maps/filters/ScatterFilter_invoke_arc_func_Cons_4.h"
#include "mindustry/maps/filters/ScatterFilter_invoke_arc_func_Floatp_1.h"
#include "mindustry/maps/filters/ScatterFilter_invoke_arc_func_Cons_3.h"
#include "mindustry/maps/filters/FilterOption.h"
#include "mindustry/maps/filters/ScatterFilter_invoke_arc_func_Floatc_1.h"
#include "mindustry/maps/filters/FilterOption_SliderOption.h"
#include "arc/func/Floatc.h"
#include "arc/func/Cons.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/maps/filters/FilterOption_BlockOption.h"
#include "arc/func/Floatp.h"
#include "mindustry/maps/filters/ScatterFilter.h"
#include "arc/func/Boolf.h"
#include "mindustry/maps/filters/GenerateFilter_GenerateInput.h"

extern "C" {


void mark_mindustry_maps_filters_ScatterFilter(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_maps_filters_ScatterFilter *) object;
	if (self->F_flooronto)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_flooronto)->clazz)->markFunction)((jobject) self->F_flooronto, mark, depth + 1);
	if (self->F_floor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_floor)->clazz)->markFunction)((jobject) self->F_floor, mark, depth + 1);
	if (self->F_block)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_block)->clazz)->markFunction)((jobject) self->F_block, mark, depth + 1);
}

void clinit_mindustry_maps_filters_ScatterFilter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_maps_filters_GenerateFilter(ctx);
}

void init_mindustry_maps_filters_ScatterFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/ScatterFilter:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_ScatterFilter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_mindustry_maps_filters_GenerateFilter(ctx, (frame[0].o));
	LINE_NUMBER(10);
	((mindustry_maps_filters_ScatterFilter *) NULL_CHECK((frame[0].o)))->F_chance = (jfloat(0.013f));
	LINE_NUMBER(11);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((mindustry_maps_filters_ScatterFilter *) NULL_CHECK(sp[0].o))->F_flooronto = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((mindustry_maps_filters_ScatterFilter *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((mindustry_maps_filters_ScatterFilter *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_filters_ScatterFilter_options_R_Array1_mindustry_maps_filters_FilterOption(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/ScatterFilter:options", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(15);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_maps_filters_FilterOption, (jint(4)));
	jint temp0 = jint(0);
	clinit_mindustry_maps_filters_FilterOption$SliderOption(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$SliderOption);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"chance"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_ScatterFilter_invoke_arc_func_Floatp_1(ctx);
		auto proxy = (mindustry_maps_filters_ScatterFilter_invoke_arc_func_Floatp_1 *) gcAlloc(ctx, &class_mindustry_maps_filters_ScatterFilter_invoke_arc_func_Floatp_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_ScatterFilter_invoke_arc_func_Floatc_1(ctx);
		auto proxy = (mindustry_maps_filters_ScatterFilter_invoke_arc_func_Floatc_1 *) gcAlloc(ctx, &class_mindustry_maps_filters_ScatterFilter_invoke_arc_func_Floatc_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_maps_filters_FilterOption$SliderOption_java_lang_String_arc_func_Floatp_arc_func_Floatc_float_float(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jfloat(0)), (jfloat(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_maps_filters_FilterOption$BlockOption(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$BlockOption);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"flooronto"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_ScatterFilter_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_maps_filters_ScatterFilter_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_maps_filters_ScatterFilter_invoke_arc_func_Prov_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_ScatterFilter_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_maps_filters_ScatterFilter_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_maps_filters_ScatterFilter_invoke_arc_func_Cons_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	clinit_mindustry_maps_filters_FilterOption(ctx);
	sp[5].o = (jobject)SF_mindustry_maps_filters_FilterOption_floorsOptional;
	init_mindustry_maps_filters_FilterOption$BlockOption_java_lang_String_arc_func_Prov_arc_func_Cons_arc_func_Boolf(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_maps_filters_FilterOption$BlockOption(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$BlockOption);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"floor"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_ScatterFilter_invoke_arc_func_Prov_4(ctx);
		auto proxy = (mindustry_maps_filters_ScatterFilter_invoke_arc_func_Prov_4 *) gcAlloc(ctx, &class_mindustry_maps_filters_ScatterFilter_invoke_arc_func_Prov_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_ScatterFilter_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_maps_filters_ScatterFilter_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_maps_filters_ScatterFilter_invoke_arc_func_Cons_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	clinit_mindustry_maps_filters_FilterOption(ctx);
	sp[5].o = (jobject)SF_mindustry_maps_filters_FilterOption_floorsOptional;
	init_mindustry_maps_filters_FilterOption$BlockOption_java_lang_String_arc_func_Prov_arc_func_Cons_arc_func_Boolf(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_maps_filters_FilterOption$BlockOption(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$BlockOption);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"block"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_ScatterFilter_invoke_arc_func_Prov_5(ctx);
		auto proxy = (mindustry_maps_filters_ScatterFilter_invoke_arc_func_Prov_5 *) gcAlloc(ctx, &class_mindustry_maps_filters_ScatterFilter_invoke_arc_func_Prov_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_ScatterFilter_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_maps_filters_ScatterFilter_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_maps_filters_ScatterFilter_invoke_arc_func_Cons_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	clinit_mindustry_maps_filters_FilterOption(ctx);
	sp[5].o = (jobject)SF_mindustry_maps_filters_FilterOption_wallsOresOptional;
	init_mindustry_maps_filters_FilterOption$BlockOption_java_lang_String_arc_func_Prov_arc_func_Cons_arc_func_Boolf(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jchar M_mindustry_maps_filters_ScatterFilter_icon_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/ScatterFilter:icon", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return (jint(63435));
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_ScatterFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/ScatterFilter:apply", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((mindustry_maps_filters_ScatterFilter *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_floor;
	sp[1].o = (jobject)((mindustry_maps_filters_ScatterFilter *) NULL_CHECK((frame[0].o)))->F_flooronto;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_filters_ScatterFilter *) NULL_CHECK((frame[0].o)))->F_flooronto;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_1;
	}
label_2:;
	{
	sp[0].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_maps_filters_ScatterFilter_chance_int_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_filters_ScatterFilter_chance_int_int_R_float])(ctx, (frame[0].o), ((jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_y));
	if ((floatCompare(temp0, ((jfloat)((mindustry_maps_filters_ScatterFilter *) NULL_CHECK((frame[0].o)))->F_chance), 1)) > 0) goto label_1;
	}
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((mindustry_maps_filters_ScatterFilter *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_isOverlay_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isOverlay_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(33);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_maps_filters_ScatterFilter *) NULL_CHECK((frame[0].o)))->F_block;
	((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	goto label_1;
	}
label_4:;
	{
	LINE_NUMBER(35);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_maps_filters_ScatterFilter *) NULL_CHECK((frame[0].o)))->F_block;
	((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK(sp[0].o))->F_overlay = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((mindustry_maps_filters_ScatterFilter *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_floor;
	sp[1].o = (jobject)((mindustry_maps_filters_ScatterFilter *) NULL_CHECK((frame[0].o)))->F_flooronto;
	if (sp[0].o == sp[1].o) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_filters_ScatterFilter *) NULL_CHECK((frame[0].o)))->F_flooronto;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_6;
	}
label_7:;
	{
	jfloat temp0 = (jfloat)((func_mindustry_maps_filters_ScatterFilter_chance_int_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_filters_ScatterFilter_chance_int_int_R_float])(ctx, (frame[0].o), ((jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_y));
	if ((floatCompare(temp0, ((jfloat)((mindustry_maps_filters_ScatterFilter *) NULL_CHECK((frame[0].o)))->F_chance), 1)) > 0) goto label_6;
	}
	{
	LINE_NUMBER(40);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_maps_filters_ScatterFilter *) NULL_CHECK((frame[0].o)))->F_floor;
	((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	}
label_6:;
	LINE_NUMBER(42);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_ScatterFilter_lambda$options$7_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/ScatterFilter:lambda$options$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(19);
	((mindustry_maps_filters_ScatterFilter *) NULL_CHECK((frame[0].o)))->F_block = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_filters_ScatterFilter_lambda$options$6_R_mindustry_world_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/ScatterFilter:lambda$options$6", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(19);
	sp[0].o = (jobject)((mindustry_maps_filters_ScatterFilter *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_ScatterFilter_lambda$options$5_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/ScatterFilter:lambda$options$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(18);
	((mindustry_maps_filters_ScatterFilter *) NULL_CHECK((frame[0].o)))->F_floor = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_filters_ScatterFilter_lambda$options$4_R_mindustry_world_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/ScatterFilter:lambda$options$4", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(18);
	sp[0].o = (jobject)((mindustry_maps_filters_ScatterFilter *) NULL_CHECK((frame[0].o)))->F_floor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_ScatterFilter_lambda$options$3_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/ScatterFilter:lambda$options$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(17);
	((mindustry_maps_filters_ScatterFilter *) NULL_CHECK((frame[0].o)))->F_flooronto = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_filters_ScatterFilter_lambda$options$2_R_mindustry_world_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/ScatterFilter:lambda$options$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(17);
	sp[0].o = (jobject)((mindustry_maps_filters_ScatterFilter *) NULL_CHECK((frame[0].o)))->F_flooronto;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_ScatterFilter_lambda$options$1_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/ScatterFilter:lambda$options$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(16);
	((mindustry_maps_filters_ScatterFilter *) NULL_CHECK((frame[0].o)))->F_chance = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_filters_ScatterFilter_lambda$options$0_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/ScatterFilter:lambda$options$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_maps_filters_ScatterFilter *) NULL_CHECK((frame[0].o)))->F_chance);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_filters_ScatterFilter[] {
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
	(void *) M_mindustry_maps_filters_ScatterFilter_options_R_Array1_mindustry_maps_filters_FilterOption,
	(void *) M_mindustry_maps_filters_ScatterFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput,
	(void *) M_mindustry_maps_filters_GenerateFilter_draw_arc_scene_ui_Image,
	(void *) M_mindustry_maps_filters_GenerateFilter_simpleName_R_java_lang_String,
	(void *) M_mindustry_maps_filters_GenerateFilter_name_R_java_lang_String,
	(void *) M_mindustry_maps_filters_ScatterFilter_icon_R_char,
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
	(void *) M_mindustry_maps_filters_ScatterFilter_lambda$options$7_mindustry_world_Block,
	(void *) M_mindustry_maps_filters_ScatterFilter_lambda$options$6_R_mindustry_world_Block,
	(void *) M_mindustry_maps_filters_ScatterFilter_lambda$options$5_mindustry_world_Block,
	(void *) M_mindustry_maps_filters_ScatterFilter_lambda$options$4_R_mindustry_world_Block,
	(void *) M_mindustry_maps_filters_ScatterFilter_lambda$options$3_mindustry_world_Block,
	(void *) M_mindustry_maps_filters_ScatterFilter_lambda$options$2_R_mindustry_world_Block,
	(void *) M_mindustry_maps_filters_ScatterFilter_lambda$options$1_float,
	(void *) M_mindustry_maps_filters_ScatterFilter_lambda$options$0_R_float,
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
	{ "lambda$options$7", "(Lmindustry/world/Block;)V" },
	{ "lambda$options$6", "()Lmindustry/world/Block;" },
	{ "lambda$options$5", "(Lmindustry/world/Block;)V" },
	{ "lambda$options$4", "()Lmindustry/world/Block;" },
	{ "lambda$options$3", "(Lmindustry/world/Block;)V" },
	{ "lambda$options$2", "()Lmindustry/world/Block;" },
	{ "lambda$options$1", "(F)V" },
	{ "lambda$options$0", "()F" },
};

static FieldMetadata fields[] {
	{ "chance", &class_float, offsetof(mindustry_maps_filters_ScatterFilter, F_chance), "F", 1 },
	{ "flooronto", &class_mindustry_world_Block, offsetof(mindustry_maps_filters_ScatterFilter, F_flooronto), "Lmindustry/world/Block;", 1 },
	{ "floor", &class_mindustry_world_Block, offsetof(mindustry_maps_filters_ScatterFilter, F_floor), "Lmindustry/world/Block;", 1 },
	{ "block", &class_mindustry_world_Block, offsetof(mindustry_maps_filters_ScatterFilter, F_block), "Lmindustry/world/Block;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_filters_ScatterFilter, 0, "()V", 1 },
	{ "options", (intptr_t) M_mindustry_maps_filters_ScatterFilter_options_R_Array1_mindustry_maps_filters_FilterOption, VTABLE_mindustry_maps_filters_ScatterFilter_options_R_Array1_mindustry_maps_filters_FilterOption, "()[Lmindustry/maps/filters/FilterOption;", 1 },
	{ "icon", (intptr_t) M_mindustry_maps_filters_ScatterFilter_icon_R_char, VTABLE_mindustry_maps_filters_ScatterFilter_icon_R_char, "()C", 1 },
	{ "apply", (intptr_t) M_mindustry_maps_filters_ScatterFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput, VTABLE_mindustry_maps_filters_ScatterFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput, "(Lmindustry/maps/filters/GenerateFilter$GenerateInput;)V", 1 },
	{ "lambda$options$7", (intptr_t) M_mindustry_maps_filters_ScatterFilter_lambda$options$7_mindustry_world_Block, VTABLE_mindustry_maps_filters_ScatterFilter_lambda$options$7_mindustry_world_Block, "(Lmindustry/world/Block;)V", 4098 },
	{ "lambda$options$6", (intptr_t) M_mindustry_maps_filters_ScatterFilter_lambda$options$6_R_mindustry_world_Block, VTABLE_mindustry_maps_filters_ScatterFilter_lambda$options$6_R_mindustry_world_Block, "()Lmindustry/world/Block;", 4098 },
	{ "lambda$options$5", (intptr_t) M_mindustry_maps_filters_ScatterFilter_lambda$options$5_mindustry_world_Block, VTABLE_mindustry_maps_filters_ScatterFilter_lambda$options$5_mindustry_world_Block, "(Lmindustry/world/Block;)V", 4098 },
	{ "lambda$options$4", (intptr_t) M_mindustry_maps_filters_ScatterFilter_lambda$options$4_R_mindustry_world_Block, VTABLE_mindustry_maps_filters_ScatterFilter_lambda$options$4_R_mindustry_world_Block, "()Lmindustry/world/Block;", 4098 },
	{ "lambda$options$3", (intptr_t) M_mindustry_maps_filters_ScatterFilter_lambda$options$3_mindustry_world_Block, VTABLE_mindustry_maps_filters_ScatterFilter_lambda$options$3_mindustry_world_Block, "(Lmindustry/world/Block;)V", 4098 },
	{ "lambda$options$2", (intptr_t) M_mindustry_maps_filters_ScatterFilter_lambda$options$2_R_mindustry_world_Block, VTABLE_mindustry_maps_filters_ScatterFilter_lambda$options$2_R_mindustry_world_Block, "()Lmindustry/world/Block;", 4098 },
	{ "lambda$options$1", (intptr_t) M_mindustry_maps_filters_ScatterFilter_lambda$options$1_float, VTABLE_mindustry_maps_filters_ScatterFilter_lambda$options$1_float, "(F)V", 4098 },
	{ "lambda$options$0", (intptr_t) M_mindustry_maps_filters_ScatterFilter_lambda$options$0_R_float, VTABLE_mindustry_maps_filters_ScatterFilter_lambda$options$0_R_float, "()F", 4098 },
};

Class class_mindustry_maps_filters_ScatterFilter{
		.nativeName = (intptr_t) "mindustry/maps/filters/ScatterFilter",
		.parentClass = (intptr_t) &class_mindustry_maps_filters_GenerateFilter,
		.size = sizeof(mindustry_maps_filters_ScatterFilter),
		.classVtable = (intptr_t) vtable_mindustry_maps_filters_ScatterFilter,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_filters_ScatterFilter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_filters_ScatterFilter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 37,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_filters_ScatterFilter = registerClass(&class_mindustry_maps_filters_ScatterFilter);

}
