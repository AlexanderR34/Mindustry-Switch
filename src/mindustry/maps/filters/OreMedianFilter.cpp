#include "mindustry/maps/filters/OreMedianFilter.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "mindustry/maps/filters/OreMedianFilter.h"
#include "mindustry/maps/filters/GenerateFilter.h"
#include "mindustry/world/Block.h"
#include "mindustry/maps/filters/OreMedianFilter_invoke_arc_func_Floatc_3.h"
#include "mindustry/maps/filters/OreMedianFilter_invoke_arc_func_Floatc_2.h"
#include "mindustry/maps/filters/FilterOption.h"
#include "mindustry/maps/filters/FilterOption_SliderOption.h"
#include "arc/func/Floatc.h"
#include "arc/struct/IntSeq.h"
#include "mindustry/maps/filters/OreMedianFilter_invoke_arc_func_Floatp_3.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "mindustry/maps/filters/OreMedianFilter_invoke_arc_func_Floatp_2.h"
#include "java/lang/String.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/world/Tile.h"
#include "arc/func/Floatp.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/Vars.h"
#include "mindustry/maps/filters/GenerateFilter_GenerateInput.h"

extern "C" {

jobject SF_mindustry_maps_filters_OreMedianFilter_blocks;

void mark_mindustry_maps_filters_OreMedianFilter(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_maps_filters_OreMedianFilter_blocks)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_maps_filters_OreMedianFilter_blocks)->clazz)->markFunction)((jobject) SF_mindustry_maps_filters_OreMedianFilter_blocks, mark, depth + 1);
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
	auto self = (mindustry_maps_filters_OreMedianFilter *) object;
}

void init_mindustry_maps_filters_OreMedianFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/OreMedianFilter:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_OreMedianFilter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_mindustry_maps_filters_GenerateFilter(ctx, (frame[0].o));
	LINE_NUMBER(14);
	((mindustry_maps_filters_OreMedianFilter *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(2));
	LINE_NUMBER(15);
	((mindustry_maps_filters_OreMedianFilter *) NULL_CHECK((frame[0].o)))->F_percentile = (jfloat(0.5f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_filters_OreMedianFilter_options_R_Array1_mindustry_maps_filters_FilterOption(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/OreMedianFilter:options", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(19);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_maps_filters_FilterOption$SliderOption, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_maps_filters_FilterOption$SliderOption(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$SliderOption);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"radius"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_OreMedianFilter_invoke_arc_func_Floatp_2(ctx);
		auto proxy = (mindustry_maps_filters_OreMedianFilter_invoke_arc_func_Floatp_2 *) gcAlloc(ctx, &class_mindustry_maps_filters_OreMedianFilter_invoke_arc_func_Floatp_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_OreMedianFilter_invoke_arc_func_Floatc_2(ctx);
		auto proxy = (mindustry_maps_filters_OreMedianFilter_invoke_arc_func_Floatc_2 *) gcAlloc(ctx, &class_mindustry_maps_filters_OreMedianFilter_invoke_arc_func_Floatc_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_maps_filters_FilterOption$SliderOption_java_lang_String_arc_func_Floatp_arc_func_Floatc_float_float(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jfloat(1)), (jfloat(12.0f)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_maps_filters_FilterOption$SliderOption(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$SliderOption);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"percentile"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_OreMedianFilter_invoke_arc_func_Floatp_3(ctx);
		auto proxy = (mindustry_maps_filters_OreMedianFilter_invoke_arc_func_Floatp_3 *) gcAlloc(ctx, &class_mindustry_maps_filters_OreMedianFilter_invoke_arc_func_Floatp_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_OreMedianFilter_invoke_arc_func_Floatc_3(ctx);
		auto proxy = (mindustry_maps_filters_OreMedianFilter_invoke_arc_func_Floatc_3 *) gcAlloc(ctx, &class_mindustry_maps_filters_OreMedianFilter_invoke_arc_func_Floatc_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_maps_filters_FilterOption$SliderOption_java_lang_String_arc_func_Floatp_arc_func_Floatc_float_float(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jfloat(0)), (jfloat(1)));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_maps_filters_OreMedianFilter_isBuffered_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/OreMedianFilter:isBuffered", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jchar M_mindustry_maps_filters_OreMedianFilter_icon_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/OreMedianFilter:icon", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return (jint(63683));
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_OreMedianFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/OreMedianFilter:apply", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_overlay;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_spawn;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(39);
	frame[2].i = ((((jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_x) / (jint(2))) * (jint(2)));
	LINE_NUMBER(40);
	frame[3].i = ((((jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_y) / (jint(2))) * (jint(2)));
	LINE_NUMBER(41);
	sp[0].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_overlay;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((func_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile])(ctx, (frame[1].o), (jfloat(((frame[2].i) + (jint(1))))), (jfloat((frame[3].i))));
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_overlay;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile])(ctx, (frame[1].o), (jfloat((frame[2].i))), (jfloat((frame[3].i))));
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_overlay;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile])(ctx, (frame[1].o), (jfloat(((frame[2].i) + (jint(1))))), (jfloat(((frame[3].i) + (jint(1))))));
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_overlay;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile])(ctx, (frame[1].o), (jfloat((frame[2].i))), (jfloat(((frame[3].i) + (jint(1))))));
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_overlay;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	sp[0].o = frame[1].o;
	jfloat temp0 = jfloat(((frame[2].i) + (jint(1))));
	jfloat temp1 = jfloat((frame[3].i));
	LINE_NUMBER(43);
	sp[0].o = (jobject)((func_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, temp0, temp1);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	jint temp2 = (jint)((func_mindustry_world_Block_isStatic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isStatic_R_boolean])(ctx, sp[0].o);
	if (temp2 != 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile])(ctx, (frame[1].o), (jfloat((frame[2].i))), (jfloat((frame[3].i))));
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_world_Block_isStatic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isStatic_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile])(ctx, (frame[1].o), (jfloat(((frame[2].i) + (jint(1))))), (jfloat(((frame[3].i) + (jint(1))))));
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_world_Block_isStatic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isStatic_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile])(ctx, (frame[1].o), (jfloat((frame[2].i))), (jfloat(((frame[3].i) + (jint(1))))));
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_world_Block_isStatic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isStatic_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(44);
	sp[0].o = frame[1].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK(sp[0].o))->F_overlay = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(48);
	frame[4].i = (jint(((jfloat)((mindustry_maps_filters_OreMedianFilter *) NULL_CHECK((frame[0].o)))->F_radius)));
	LINE_NUMBER(50);
	clinit_mindustry_maps_filters_OreMedianFilter(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_filters_OreMedianFilter_blocks;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(51);
	frame[5].i = (-(frame[4].i));
	}
label_10:;
	{
	if ((frame[5].i) > (frame[4].i)) goto label_11;
	}
	{
	LINE_NUMBER(52);
	frame[6].i = (-(frame[4].i));
	}
label_13:;
	{
	if ((frame[6].i) > (frame[4].i)) goto label_14;
	}
	{
	LINE_NUMBER(53);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_dst2_float_float_R_float(ctx, (jfloat((frame[5].i))), (jfloat((frame[6].i))));
	if ((floatCompare(temp0, (jfloat(((frame[4].i) * (frame[4].i)))), -1)) <= 0) goto label_16;
	}
	goto label_17;
label_16:;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((func_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile])(ctx, (frame[1].o), (jfloat((((jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_x) + (frame[5].i)))), (jfloat((((jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_y) + (frame[6].i)))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(56);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[7].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_spawn;
	if (sp[0].o == sp[1].o) goto label_17;
	}
	{
	LINE_NUMBER(57);
	clinit_mindustry_maps_filters_OreMedianFilter(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_filters_OreMedianFilter_blocks;
	sp[1].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[7].o));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id));
	}
label_17:;
	{
	LINE_NUMBER(52);
	INST_IINC(6, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(51);
	INST_IINC(5, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(61);
	clinit_mindustry_maps_filters_OreMedianFilter(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_filters_OreMedianFilter_blocks;
	((func_arc_struct_IntSeq_sort) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_sort])(ctx, sp[0].o);
	LINE_NUMBER(63);
	clinit_mindustry_maps_filters_OreMedianFilter(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_filters_OreMedianFilter_blocks;
	jint temp0 = jint(((jfloat(((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size))) * ((jfloat)((mindustry_maps_filters_OreMedianFilter *) NULL_CHECK((frame[0].o)))->F_percentile)));
	clinit_mindustry_maps_filters_OreMedianFilter(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_filters_OreMedianFilter_blocks;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1))));
	frame[5].i = temp1;
	LINE_NUMBER(64);
	clinit_mindustry_maps_filters_OreMedianFilter(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_filters_OreMedianFilter_blocks;
	jint temp2 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[0].o, (frame[5].i));
	frame[6].i = temp2;
	LINE_NUMBER(66);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[1].o, (frame[6].i));
	((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK(sp[0].o))->F_overlay = (jref) sp[1].o;
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_OreMedianFilter_lambda$options$3_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/OreMedianFilter:lambda$options$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(21);
	((mindustry_maps_filters_OreMedianFilter *) NULL_CHECK((frame[0].o)))->F_percentile = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_filters_OreMedianFilter_lambda$options$2_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/OreMedianFilter:lambda$options$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_maps_filters_OreMedianFilter *) NULL_CHECK((frame[0].o)))->F_percentile);
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_OreMedianFilter_lambda$options$1_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/OreMedianFilter:lambda$options$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(20);
	((mindustry_maps_filters_OreMedianFilter *) NULL_CHECK((frame[0].o)))->F_radius = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_filters_OreMedianFilter_lambda$options$0_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/OreMedianFilter:lambda$options$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_maps_filters_OreMedianFilter *) NULL_CHECK((frame[0].o)))->F_radius);
	}

	popStackFrame(ctx);
}

void clinit_mindustry_maps_filters_OreMedianFilter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_maps_filters_GenerateFilter(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/OreMedianFilter:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_OreMedianFilter(ctx);
	{
	LINE_NUMBER(12);
	clinit_arc_struct_IntSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[0].o);
	clinit_mindustry_maps_filters_OreMedianFilter(ctx);
	SF_mindustry_maps_filters_OreMedianFilter_blocks = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_filters_OreMedianFilter[] {
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
	(void *) M_mindustry_maps_filters_OreMedianFilter_options_R_Array1_mindustry_maps_filters_FilterOption,
	(void *) M_mindustry_maps_filters_OreMedianFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput,
	(void *) M_mindustry_maps_filters_GenerateFilter_draw_arc_scene_ui_Image,
	(void *) M_mindustry_maps_filters_GenerateFilter_simpleName_R_java_lang_String,
	(void *) M_mindustry_maps_filters_GenerateFilter_name_R_java_lang_String,
	(void *) M_mindustry_maps_filters_OreMedianFilter_icon_R_char,
	(void *) M_mindustry_maps_filters_GenerateFilter_randomize,
	(void *) M_mindustry_maps_filters_OreMedianFilter_isBuffered_R_boolean,
	(void *) M_mindustry_maps_filters_GenerateFilter_isPost_R_boolean,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_int_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_float_float_float_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_rnoise_float_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_rnoise_float_float_int_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_chance_int_int_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_copy_R_mindustry_maps_filters_GenerateFilter,
	(void *) M_mindustry_maps_filters_OreMedianFilter_lambda$options$3_float,
	(void *) M_mindustry_maps_filters_OreMedianFilter_lambda$options$2_R_float,
	(void *) M_mindustry_maps_filters_OreMedianFilter_lambda$options$1_float,
	(void *) M_mindustry_maps_filters_OreMedianFilter_lambda$options$0_R_float,
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
	{ "lambda$options$3", "(F)V" },
	{ "lambda$options$2", "()F" },
	{ "lambda$options$1", "(F)V" },
	{ "lambda$options$0", "()F" },
};

static FieldMetadata fields[] {
	{ "blocks", &class_arc_struct_IntSeq, (intptr_t) &SF_mindustry_maps_filters_OreMedianFilter_blocks, "Larc/struct/IntSeq;", 10 },
	{ "radius", &class_float, offsetof(mindustry_maps_filters_OreMedianFilter, F_radius), "F", 1 },
	{ "percentile", &class_float, offsetof(mindustry_maps_filters_OreMedianFilter, F_percentile), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_filters_OreMedianFilter, 0, "()V", 1 },
	{ "options", (intptr_t) M_mindustry_maps_filters_OreMedianFilter_options_R_Array1_mindustry_maps_filters_FilterOption, VTABLE_mindustry_maps_filters_OreMedianFilter_options_R_Array1_mindustry_maps_filters_FilterOption, "()[Lmindustry/maps/filters/FilterOption;", 1 },
	{ "isBuffered", (intptr_t) M_mindustry_maps_filters_OreMedianFilter_isBuffered_R_boolean, VTABLE_mindustry_maps_filters_OreMedianFilter_isBuffered_R_boolean, "()Z", 1 },
	{ "icon", (intptr_t) M_mindustry_maps_filters_OreMedianFilter_icon_R_char, VTABLE_mindustry_maps_filters_OreMedianFilter_icon_R_char, "()C", 1 },
	{ "apply", (intptr_t) M_mindustry_maps_filters_OreMedianFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput, VTABLE_mindustry_maps_filters_OreMedianFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput, "(Lmindustry/maps/filters/GenerateFilter$GenerateInput;)V", 1 },
	{ "lambda$options$3", (intptr_t) M_mindustry_maps_filters_OreMedianFilter_lambda$options$3_float, VTABLE_mindustry_maps_filters_OreMedianFilter_lambda$options$3_float, "(F)V", 4098 },
	{ "lambda$options$2", (intptr_t) M_mindustry_maps_filters_OreMedianFilter_lambda$options$2_R_float, VTABLE_mindustry_maps_filters_OreMedianFilter_lambda$options$2_R_float, "()F", 4098 },
	{ "lambda$options$1", (intptr_t) M_mindustry_maps_filters_OreMedianFilter_lambda$options$1_float, VTABLE_mindustry_maps_filters_OreMedianFilter_lambda$options$1_float, "(F)V", 4098 },
	{ "lambda$options$0", (intptr_t) M_mindustry_maps_filters_OreMedianFilter_lambda$options$0_R_float, VTABLE_mindustry_maps_filters_OreMedianFilter_lambda$options$0_R_float, "()F", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_maps_filters_OreMedianFilter, 0, "()V", 8 },
};

Class class_mindustry_maps_filters_OreMedianFilter{
		.nativeName = (intptr_t) "mindustry/maps/filters/OreMedianFilter",
		.parentClass = (intptr_t) &class_mindustry_maps_filters_GenerateFilter,
		.size = sizeof(mindustry_maps_filters_OreMedianFilter),
		.classVtable = (intptr_t) vtable_mindustry_maps_filters_OreMedianFilter,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_filters_OreMedianFilter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_filters_OreMedianFilter,
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
		.vtableSize = 33,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_filters_OreMedianFilter = registerClass(&class_mindustry_maps_filters_OreMedianFilter);

}
