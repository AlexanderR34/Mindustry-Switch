#include "mindustry/maps/filters/BlendFilter.h"
#include "mindustry/maps/filters/BlendFilter_invoke_arc_func_Floatc_1.h"
#include "arc/func/Prov.h"
#include "mindustry/maps/filters/GenerateFilter.h"
#include "mindustry/world/Block.h"
#include "arc/func/Cons.h"
#include "mindustry/maps/filters/BlendFilter_invoke_arc_func_Cons_5.h"
#include "java/lang/String.h"
#include "mindustry/maps/filters/FilterOption_BlockOption.h"
#include "mindustry/maps/filters/BlendFilter_invoke_arc_func_Cons_3.h"
#include "mindustry/maps/filters/BlendFilter_invoke_arc_func_Cons_4.h"
#include "mindustry/world/Tile.h"
#include "arc/func/Floatp.h"
#include "mindustry/maps/filters/BlendFilter.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/func/Boolf.h"
#include "mindustry/maps/filters/GenerateFilter_GenerateInput.h"
#include "mindustry/maps/filters/FilterOption.h"
#include "mindustry/maps/filters/FilterOption_SliderOption.h"
#include "arc/func/Floatc.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "mindustry/maps/filters/BlendFilter_invoke_arc_func_Floatp_1.h"
#include "mindustry/maps/filters/BlendFilter_invoke_arc_func_Prov_3.h"
#include "mindustry/maps/filters/BlendFilter_invoke_arc_func_Prov_4.h"
#include "mindustry/maps/filters/BlendFilter_invoke_arc_func_Prov_5.h"

extern "C" {


void mark_mindustry_maps_filters_BlendFilter(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_maps_filters_BlendFilter *) object;
	if (self->F_block)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_block)->clazz)->markFunction)((jobject) self->F_block, mark, depth + 1);
	if (self->F_floor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_floor)->clazz)->markFunction)((jobject) self->F_floor, mark, depth + 1);
	if (self->F_ignore)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ignore)->clazz)->markFunction)((jobject) self->F_ignore, mark, depth + 1);
}

void clinit_mindustry_maps_filters_BlendFilter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_maps_filters_GenerateFilter(ctx);
}

void init_mindustry_maps_filters_BlendFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/BlendFilter:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_BlendFilter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_mindustry_maps_filters_GenerateFilter(ctx, (frame[0].o));
	LINE_NUMBER(10);
	((mindustry_maps_filters_BlendFilter *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(2));
	LINE_NUMBER(11);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_sand;
	((mindustry_maps_filters_BlendFilter *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_sandWater;
	((mindustry_maps_filters_BlendFilter *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((mindustry_maps_filters_BlendFilter *) NULL_CHECK(sp[0].o))->F_ignore = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_filters_BlendFilter_options_R_Array1_mindustry_maps_filters_FilterOption(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/BlendFilter:options", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(15);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_maps_filters_FilterOption, (jint(4)));
	jint temp0 = jint(0);
	clinit_mindustry_maps_filters_FilterOption$SliderOption(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$SliderOption);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"radius"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_BlendFilter_invoke_arc_func_Floatp_1(ctx);
		auto proxy = (mindustry_maps_filters_BlendFilter_invoke_arc_func_Floatp_1 *) gcAlloc(ctx, &class_mindustry_maps_filters_BlendFilter_invoke_arc_func_Floatp_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_BlendFilter_invoke_arc_func_Floatc_1(ctx);
		auto proxy = (mindustry_maps_filters_BlendFilter_invoke_arc_func_Floatc_1 *) gcAlloc(ctx, &class_mindustry_maps_filters_BlendFilter_invoke_arc_func_Floatc_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_maps_filters_FilterOption$SliderOption_java_lang_String_arc_func_Floatp_arc_func_Floatc_float_float(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jfloat(1)), (jfloat(10.0f)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_maps_filters_FilterOption$BlockOption(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$BlockOption);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"block"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_BlendFilter_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_maps_filters_BlendFilter_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_maps_filters_BlendFilter_invoke_arc_func_Prov_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_BlendFilter_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_maps_filters_BlendFilter_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_maps_filters_BlendFilter_invoke_arc_func_Cons_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	clinit_mindustry_maps_filters_FilterOption(ctx);
	sp[5].o = (jobject)SF_mindustry_maps_filters_FilterOption_anyOptional;
	init_mindustry_maps_filters_FilterOption$BlockOption_java_lang_String_arc_func_Prov_arc_func_Cons_arc_func_Boolf(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_maps_filters_FilterOption$BlockOption(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$BlockOption);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"floor"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_BlendFilter_invoke_arc_func_Prov_4(ctx);
		auto proxy = (mindustry_maps_filters_BlendFilter_invoke_arc_func_Prov_4 *) gcAlloc(ctx, &class_mindustry_maps_filters_BlendFilter_invoke_arc_func_Prov_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_BlendFilter_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_maps_filters_BlendFilter_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_maps_filters_BlendFilter_invoke_arc_func_Cons_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	clinit_mindustry_maps_filters_FilterOption(ctx);
	sp[5].o = (jobject)SF_mindustry_maps_filters_FilterOption_anyOptional;
	init_mindustry_maps_filters_FilterOption$BlockOption_java_lang_String_arc_func_Prov_arc_func_Cons_arc_func_Boolf(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_maps_filters_FilterOption$BlockOption(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$BlockOption);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"ignore"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_BlendFilter_invoke_arc_func_Prov_5(ctx);
		auto proxy = (mindustry_maps_filters_BlendFilter_invoke_arc_func_Prov_5 *) gcAlloc(ctx, &class_mindustry_maps_filters_BlendFilter_invoke_arc_func_Prov_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_BlendFilter_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_maps_filters_BlendFilter_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_maps_filters_BlendFilter_invoke_arc_func_Cons_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	clinit_mindustry_maps_filters_FilterOption(ctx);
	sp[5].o = (jobject)SF_mindustry_maps_filters_FilterOption_anyOptional;
	init_mindustry_maps_filters_FilterOption$BlockOption_java_lang_String_arc_func_Prov_arc_func_Cons_arc_func_Boolf(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_maps_filters_BlendFilter_isBuffered_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/BlendFilter:isBuffered", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jchar M_mindustry_maps_filters_BlendFilter_icon_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/BlendFilter:icon", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return (jint(63102));
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_BlendFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/BlendFilter:apply", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_floor;
	sp[1].o = (jobject)((mindustry_maps_filters_BlendFilter *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_filters_BlendFilter *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_floor;
	sp[1].o = (jobject)((mindustry_maps_filters_BlendFilter *) NULL_CHECK((frame[0].o)))->F_ignore;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_filters_BlendFilter *) NULL_CHECK((frame[0].o)))->F_floor;
	jint temp0 = (jint)((func_mindustry_world_Block_isFloor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isFloor_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_block;
	sp[1].o = (jobject)((mindustry_maps_filters_BlendFilter *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_block;
	sp[1].o = (jobject)((mindustry_maps_filters_BlendFilter *) NULL_CHECK((frame[0].o)))->F_ignore;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(37);
	frame[2].i = (jint(((jfloat)((mindustry_maps_filters_BlendFilter *) NULL_CHECK((frame[0].o)))->F_radius)));
	LINE_NUMBER(38);
	frame[3].i = (jint(0));
	LINE_NUMBER(41);
	frame[4].i = (-(frame[2].i));
	}
label_5:;
	{
	if ((frame[4].i) > (frame[2].i)) goto label_6;
	}
	{
	LINE_NUMBER(42);
	frame[5].i = (-(frame[2].i));
	}
label_8:;
	{
	if ((frame[5].i) > (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(43);
	if ((((frame[4].i) * (frame[4].i)) + ((frame[5].i) * (frame[5].i))) <= ((frame[2].i) * (frame[2].i))) goto label_11;
	}
	goto label_12;
label_11:;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((func_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile])(ctx, (frame[1].o), (jfloat((((jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_x) + (frame[4].i)))), (jfloat((((jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_y) + (frame[5].i)))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(46);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[6].o));
	sp[1].o = (jobject)((mindustry_maps_filters_BlendFilter *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o == sp[1].o) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[6].o));
	sp[1].o = (jobject)((mindustry_maps_filters_BlendFilter *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o == sp[1].o) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[6].o));
	sp[1].o = (jobject)((mindustry_maps_filters_BlendFilter *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o != sp[1].o) goto label_12;
	}
label_14:;
	{
	LINE_NUMBER(47);
	frame[3].i = (jint(1));
	LINE_NUMBER(48);
	goto label_6;
	}
label_12:;
	{
	LINE_NUMBER(42);
	INST_IINC(5, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(41);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(53);
	if ((frame[3].i) == 0) goto label_16;
	}
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((mindustry_maps_filters_BlendFilter *) NULL_CHECK((frame[0].o)))->F_floor;
	jint temp0 = (jint)((func_mindustry_world_Block_isFloor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isFloor_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_18;
	}
	{
	LINE_NUMBER(55);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_maps_filters_BlendFilter *) NULL_CHECK((frame[0].o)))->F_floor;
	((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	goto label_16;
	}
label_18:;
	{
	LINE_NUMBER(57);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_maps_filters_BlendFilter *) NULL_CHECK((frame[0].o)))->F_floor;
	((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	}
label_16:;
	LINE_NUMBER(60);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_BlendFilter_lambda$options$7_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/BlendFilter:lambda$options$7", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(19);
	((mindustry_maps_filters_BlendFilter *) NULL_CHECK((frame[0].o)))->F_ignore = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_filters_BlendFilter_lambda$options$6_R_mindustry_world_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/BlendFilter:lambda$options$6", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(19);
	sp[0].o = (jobject)((mindustry_maps_filters_BlendFilter *) NULL_CHECK((frame[0].o)))->F_ignore;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_BlendFilter_lambda$options$5_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/BlendFilter:lambda$options$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(18);
	((mindustry_maps_filters_BlendFilter *) NULL_CHECK((frame[0].o)))->F_floor = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_filters_BlendFilter_lambda$options$4_R_mindustry_world_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/BlendFilter:lambda$options$4", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(18);
	sp[0].o = (jobject)((mindustry_maps_filters_BlendFilter *) NULL_CHECK((frame[0].o)))->F_floor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_BlendFilter_lambda$options$3_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/BlendFilter:lambda$options$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(17);
	((mindustry_maps_filters_BlendFilter *) NULL_CHECK((frame[0].o)))->F_block = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_filters_BlendFilter_lambda$options$2_R_mindustry_world_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/BlendFilter:lambda$options$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(17);
	sp[0].o = (jobject)((mindustry_maps_filters_BlendFilter *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_BlendFilter_lambda$options$1_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/BlendFilter:lambda$options$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(16);
	((mindustry_maps_filters_BlendFilter *) NULL_CHECK((frame[0].o)))->F_radius = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_filters_BlendFilter_lambda$options$0_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/BlendFilter:lambda$options$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_maps_filters_BlendFilter *) NULL_CHECK((frame[0].o)))->F_radius);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_filters_BlendFilter[] {
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
	(void *) M_mindustry_maps_filters_BlendFilter_options_R_Array1_mindustry_maps_filters_FilterOption,
	(void *) M_mindustry_maps_filters_BlendFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput,
	(void *) M_mindustry_maps_filters_GenerateFilter_draw_arc_scene_ui_Image,
	(void *) M_mindustry_maps_filters_GenerateFilter_simpleName_R_java_lang_String,
	(void *) M_mindustry_maps_filters_GenerateFilter_name_R_java_lang_String,
	(void *) M_mindustry_maps_filters_BlendFilter_icon_R_char,
	(void *) M_mindustry_maps_filters_GenerateFilter_randomize,
	(void *) M_mindustry_maps_filters_BlendFilter_isBuffered_R_boolean,
	(void *) M_mindustry_maps_filters_GenerateFilter_isPost_R_boolean,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_int_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_float_float_float_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_rnoise_float_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_rnoise_float_float_int_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_chance_int_int_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_copy_R_mindustry_maps_filters_GenerateFilter,
	(void *) M_mindustry_maps_filters_BlendFilter_lambda$options$7_mindustry_world_Block,
	(void *) M_mindustry_maps_filters_BlendFilter_lambda$options$6_R_mindustry_world_Block,
	(void *) M_mindustry_maps_filters_BlendFilter_lambda$options$5_mindustry_world_Block,
	(void *) M_mindustry_maps_filters_BlendFilter_lambda$options$4_R_mindustry_world_Block,
	(void *) M_mindustry_maps_filters_BlendFilter_lambda$options$3_mindustry_world_Block,
	(void *) M_mindustry_maps_filters_BlendFilter_lambda$options$2_R_mindustry_world_Block,
	(void *) M_mindustry_maps_filters_BlendFilter_lambda$options$1_float,
	(void *) M_mindustry_maps_filters_BlendFilter_lambda$options$0_R_float,
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
	{ "radius", &class_float, offsetof(mindustry_maps_filters_BlendFilter, F_radius), "F", 1 },
	{ "block", &class_mindustry_world_Block, offsetof(mindustry_maps_filters_BlendFilter, F_block), "Lmindustry/world/Block;", 1 },
	{ "floor", &class_mindustry_world_Block, offsetof(mindustry_maps_filters_BlendFilter, F_floor), "Lmindustry/world/Block;", 1 },
	{ "ignore", &class_mindustry_world_Block, offsetof(mindustry_maps_filters_BlendFilter, F_ignore), "Lmindustry/world/Block;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_filters_BlendFilter, 0, "()V", 1 },
	{ "options", (intptr_t) M_mindustry_maps_filters_BlendFilter_options_R_Array1_mindustry_maps_filters_FilterOption, VTABLE_mindustry_maps_filters_BlendFilter_options_R_Array1_mindustry_maps_filters_FilterOption, "()[Lmindustry/maps/filters/FilterOption;", 1 },
	{ "isBuffered", (intptr_t) M_mindustry_maps_filters_BlendFilter_isBuffered_R_boolean, VTABLE_mindustry_maps_filters_BlendFilter_isBuffered_R_boolean, "()Z", 1 },
	{ "icon", (intptr_t) M_mindustry_maps_filters_BlendFilter_icon_R_char, VTABLE_mindustry_maps_filters_BlendFilter_icon_R_char, "()C", 1 },
	{ "apply", (intptr_t) M_mindustry_maps_filters_BlendFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput, VTABLE_mindustry_maps_filters_BlendFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput, "(Lmindustry/maps/filters/GenerateFilter$GenerateInput;)V", 1 },
	{ "lambda$options$7", (intptr_t) M_mindustry_maps_filters_BlendFilter_lambda$options$7_mindustry_world_Block, VTABLE_mindustry_maps_filters_BlendFilter_lambda$options$7_mindustry_world_Block, "(Lmindustry/world/Block;)V", 4098 },
	{ "lambda$options$6", (intptr_t) M_mindustry_maps_filters_BlendFilter_lambda$options$6_R_mindustry_world_Block, VTABLE_mindustry_maps_filters_BlendFilter_lambda$options$6_R_mindustry_world_Block, "()Lmindustry/world/Block;", 4098 },
	{ "lambda$options$5", (intptr_t) M_mindustry_maps_filters_BlendFilter_lambda$options$5_mindustry_world_Block, VTABLE_mindustry_maps_filters_BlendFilter_lambda$options$5_mindustry_world_Block, "(Lmindustry/world/Block;)V", 4098 },
	{ "lambda$options$4", (intptr_t) M_mindustry_maps_filters_BlendFilter_lambda$options$4_R_mindustry_world_Block, VTABLE_mindustry_maps_filters_BlendFilter_lambda$options$4_R_mindustry_world_Block, "()Lmindustry/world/Block;", 4098 },
	{ "lambda$options$3", (intptr_t) M_mindustry_maps_filters_BlendFilter_lambda$options$3_mindustry_world_Block, VTABLE_mindustry_maps_filters_BlendFilter_lambda$options$3_mindustry_world_Block, "(Lmindustry/world/Block;)V", 4098 },
	{ "lambda$options$2", (intptr_t) M_mindustry_maps_filters_BlendFilter_lambda$options$2_R_mindustry_world_Block, VTABLE_mindustry_maps_filters_BlendFilter_lambda$options$2_R_mindustry_world_Block, "()Lmindustry/world/Block;", 4098 },
	{ "lambda$options$1", (intptr_t) M_mindustry_maps_filters_BlendFilter_lambda$options$1_float, VTABLE_mindustry_maps_filters_BlendFilter_lambda$options$1_float, "(F)V", 4098 },
	{ "lambda$options$0", (intptr_t) M_mindustry_maps_filters_BlendFilter_lambda$options$0_R_float, VTABLE_mindustry_maps_filters_BlendFilter_lambda$options$0_R_float, "()F", 4098 },
};

Class class_mindustry_maps_filters_BlendFilter{
		.nativeName = (intptr_t) "mindustry/maps/filters/BlendFilter",
		.parentClass = (intptr_t) &class_mindustry_maps_filters_GenerateFilter,
		.size = sizeof(mindustry_maps_filters_BlendFilter),
		.classVtable = (intptr_t) vtable_mindustry_maps_filters_BlendFilter,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_filters_BlendFilter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_filters_BlendFilter,
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
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 37,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_filters_BlendFilter = registerClass(&class_mindustry_maps_filters_BlendFilter);

}
