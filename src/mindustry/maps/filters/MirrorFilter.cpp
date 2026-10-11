#include "mindustry/maps/filters/MirrorFilter.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/maps/filters/MirrorFilter_invoke_arc_func_Floatc_1.h"
#include "mindustry/maps/filters/GenerateFilter.h"
#include "mindustry/world/Block.h"
#include "arc/func/Boolp.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/math/geom/Rect.h"
#include "arc/graphics/Color.h"
#include "mindustry/maps/filters/MirrorFilter_invoke_arc_func_Floatp_1.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/g2d/Fill.h"
#include "arc/scene/ui/Image.h"
#include "java/lang/String.h"
#include "arc/util/Tmp.h"
#include "mindustry/maps/filters/MirrorFilter.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/world/Tile.h"
#include "arc/func/Floatp.h"
#include "arc/func/Boolc.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/scene/ui/layout/Scl.h"
#include "mindustry/maps/filters/GenerateFilter_GenerateInput.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "arc/util/Scaling.h"
#include "mindustry/maps/filters/FilterOption.h"
#include "mindustry/maps/filters/MirrorFilter_invoke_arc_func_Boolc_1.h"
#include "mindustry/maps/filters/FilterOption_SliderOption.h"
#include "arc/func/Floatc.h"
#include "mindustry/maps/filters/MirrorFilter_invoke_arc_func_Boolp_1.h"
#include "mindustry/graphics/Pal.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "mindustry/maps/filters/FilterOption_ToggleOption.h"

extern "C" {

jobject SF_mindustry_maps_filters_MirrorFilter_v1;
jobject SF_mindustry_maps_filters_MirrorFilter_v2;
jobject SF_mindustry_maps_filters_MirrorFilter_v3;

void mark_mindustry_maps_filters_MirrorFilter(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_maps_filters_MirrorFilter_v1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_maps_filters_MirrorFilter_v1)->clazz)->markFunction)((jobject) SF_mindustry_maps_filters_MirrorFilter_v1, mark, depth + 1);
		if (SF_mindustry_maps_filters_MirrorFilter_v2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_maps_filters_MirrorFilter_v2)->clazz)->markFunction)((jobject) SF_mindustry_maps_filters_MirrorFilter_v2, mark, depth + 1);
		if (SF_mindustry_maps_filters_MirrorFilter_v3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_maps_filters_MirrorFilter_v3)->clazz)->markFunction)((jobject) SF_mindustry_maps_filters_MirrorFilter_v3, mark, depth + 1);
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
	auto self = (mindustry_maps_filters_MirrorFilter *) object;
}

void init_mindustry_maps_filters_MirrorFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/MirrorFilter:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_MirrorFilter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(14);
	init_mindustry_maps_filters_GenerateFilter(ctx, (frame[0].o));
	LINE_NUMBER(17);
	((mindustry_maps_filters_MirrorFilter *) NULL_CHECK((frame[0].o)))->F_angle = (45);
	LINE_NUMBER(18);
	((mindustry_maps_filters_MirrorFilter *) NULL_CHECK((frame[0].o)))->F_rotate = (jint(0));
	LINE_NUMBER(19);
	((mindustry_maps_filters_MirrorFilter *) NULL_CHECK((frame[0].o)))->F_axisX = (jfloat(0.5f));
	((mindustry_maps_filters_MirrorFilter *) NULL_CHECK((frame[0].o)))->F_axisY = (jfloat(0.5f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_filters_MirrorFilter_options_R_Array1_mindustry_maps_filters_FilterOption(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/MirrorFilter:options", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(23);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_maps_filters_FilterOption, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_maps_filters_FilterOption$SliderOption(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$SliderOption);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"angle"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_MirrorFilter_invoke_arc_func_Floatp_1(ctx);
		auto proxy = (mindustry_maps_filters_MirrorFilter_invoke_arc_func_Floatp_1 *) gcAlloc(ctx, &class_mindustry_maps_filters_MirrorFilter_invoke_arc_func_Floatp_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_MirrorFilter_invoke_arc_func_Floatc_1(ctx);
		auto proxy = (mindustry_maps_filters_MirrorFilter_invoke_arc_func_Floatc_1 *) gcAlloc(ctx, &class_mindustry_maps_filters_MirrorFilter_invoke_arc_func_Floatc_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_maps_filters_FilterOption$SliderOption_java_lang_String_arc_func_Floatp_arc_func_Floatc_float_float_float(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jfloat(0)), (jfloat(360.0f)), (jfloat(15.0f)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_maps_filters_FilterOption$ToggleOption(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$ToggleOption);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"rotate"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_MirrorFilter_invoke_arc_func_Boolp_1(ctx);
		auto proxy = (mindustry_maps_filters_MirrorFilter_invoke_arc_func_Boolp_1 *) gcAlloc(ctx, &class_mindustry_maps_filters_MirrorFilter_invoke_arc_func_Boolp_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_MirrorFilter_invoke_arc_func_Boolc_1(ctx);
		auto proxy = (mindustry_maps_filters_MirrorFilter_invoke_arc_func_Boolc_1 *) gcAlloc(ctx, &class_mindustry_maps_filters_MirrorFilter_invoke_arc_func_Boolc_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_maps_filters_FilterOption$ToggleOption_java_lang_String_arc_func_Boolp_arc_func_Boolc(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jchar M_mindustry_maps_filters_MirrorFilter_icon_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/MirrorFilter:icon", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return (jint(63694));
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_MirrorFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/MirrorFilter:apply", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	clinit_mindustry_maps_filters_MirrorFilter(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_filters_MirrorFilter_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trnsExact_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trnsExact_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat((((jint)((mindustry_maps_filters_MirrorFilter *) NULL_CHECK((frame[0].o)))->F_angle) - (90)))), (jfloat(1)));
	LINE_NUMBER(37);
	clinit_mindustry_maps_filters_MirrorFilter(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_filters_MirrorFilter_v2;
	clinit_mindustry_maps_filters_MirrorFilter(ctx);
	sp[1].o = (jobject)SF_mindustry_maps_filters_MirrorFilter_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(-1.0f)));
	LINE_NUMBER(40);
	clinit_mindustry_maps_filters_MirrorFilter(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_filters_MirrorFilter_v1;
	jfloat temp0 = (jfloat)((func_mindustry_maps_filters_MirrorFilter_coord_float_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_filters_MirrorFilter_coord_float_int_R_float])(ctx, (frame[0].o), ((jfloat)((mindustry_maps_filters_MirrorFilter *) NULL_CHECK((frame[0].o)))->F_axisX), ((jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_width));
	jfloat temp1 = (jfloat)((func_mindustry_maps_filters_MirrorFilter_coord_float_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_filters_MirrorFilter_coord_float_int_R_float])(ctx, (frame[0].o), ((jfloat)((mindustry_maps_filters_MirrorFilter *) NULL_CHECK((frame[0].o)))->F_axisY), ((jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_height));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(41);
	clinit_mindustry_maps_filters_MirrorFilter(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_filters_MirrorFilter_v2;
	jfloat temp2 = (jfloat)((func_mindustry_maps_filters_MirrorFilter_coord_float_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_filters_MirrorFilter_coord_float_int_R_float])(ctx, (frame[0].o), ((jfloat)((mindustry_maps_filters_MirrorFilter *) NULL_CHECK((frame[0].o)))->F_axisX), ((jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_width));
	jfloat temp3 = (jfloat)((func_mindustry_maps_filters_MirrorFilter_coord_float_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_filters_MirrorFilter_coord_float_int_R_float])(ctx, (frame[0].o), ((jfloat)((mindustry_maps_filters_MirrorFilter *) NULL_CHECK((frame[0].o)))->F_axisY), ((jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_height));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp2, temp3);
	LINE_NUMBER(43);
	clinit_mindustry_maps_filters_MirrorFilter(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_filters_MirrorFilter_v3;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(((jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_x))), (jfloat(((jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_y))));
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	clinit_mindustry_maps_filters_MirrorFilter(ctx);
	sp[1].o = (jobject)SF_mindustry_maps_filters_MirrorFilter_v1;
	clinit_mindustry_maps_filters_MirrorFilter(ctx);
	sp[2].o = (jobject)SF_mindustry_maps_filters_MirrorFilter_v2;
	clinit_mindustry_maps_filters_MirrorFilter(ctx);
	sp[3].o = (jobject)SF_mindustry_maps_filters_MirrorFilter_v3;
	jint temp4 = (jint)((func_mindustry_maps_filters_MirrorFilter_left_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_filters_MirrorFilter_left_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp4 != 0) goto label_6;
	}
	{
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_width;
	jint temp1 = (jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_height;
	clinit_mindustry_maps_filters_MirrorFilter(ctx);
	sp[1].o = (jobject)SF_mindustry_maps_filters_MirrorFilter_v3;
	clinit_mindustry_maps_filters_MirrorFilter(ctx);
	sp[2].o = (jobject)SF_mindustry_maps_filters_MirrorFilter_v1;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_mindustry_maps_filters_MirrorFilter(ctx);
	sp[2].o = (jobject)SF_mindustry_maps_filters_MirrorFilter_v1;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y;
	clinit_mindustry_maps_filters_MirrorFilter(ctx);
	sp[2].o = (jobject)SF_mindustry_maps_filters_MirrorFilter_v2;
	jfloat temp4 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x;
	clinit_mindustry_maps_filters_MirrorFilter(ctx);
	sp[2].o = (jobject)SF_mindustry_maps_filters_MirrorFilter_v2;
	((func_mindustry_maps_filters_MirrorFilter_mirror_int_int_arc_math_geom_Vec2_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_filters_MirrorFilter_mirror_int_int_arc_math_geom_Vec2_float_float_float_float])(ctx, sp[0].o, temp0, temp1, sp[1].o, temp2, temp3, temp4, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y));
	LINE_NUMBER(47);
	sp[0].o = frame[1].o;
	clinit_mindustry_maps_filters_MirrorFilter(ctx);
	sp[1].o = (jobject)SF_mindustry_maps_filters_MirrorFilter_v3;
	jfloat temp5 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_mindustry_maps_filters_MirrorFilter(ctx);
	sp[1].o = (jobject)SF_mindustry_maps_filters_MirrorFilter_v3;
	sp[0].o = (jobject)((func_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_tile_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, temp5, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	frame[2].o = sp[0].o;
	LINE_NUMBER(48);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[2].o));
	((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	jint temp6 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, sp[0].o);
	if (temp6 != 0) goto label_11;
	}
	{
	LINE_NUMBER(50);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	}
label_11:;
	{
	LINE_NUMBER(52);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[2].o));
	((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK(sp[0].o))->F_overlay = (jref) sp[1].o;
	LINE_NUMBER(53);
	sp[0].o = frame[1].o;
	jlong temp0 = (jlong)((func_mindustry_world_Tile_getPackedData_R_long) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_getPackedData_R_long])(ctx, (frame[2].o));
	((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK(sp[0].o))->F_packedData = temp0;
	}
label_6:;
	LINE_NUMBER(55);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_MirrorFilter_draw_arc_scene_ui_Image(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/MirrorFilter:draw", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(59);
	M_mindustry_maps_filters_GenerateFilter_draw_arc_scene_ui_Image(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(60);
	sp[0].o = frame[1].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	SM_mindustry_maps_filters_MirrorFilter_getDrawRect_arc_scene_ui_Image_arc_math_geom_Rect(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(61);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width), (jfloat(0)), 1)) <= 0) goto label_3;
	}
	{
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height), (jfloat(0)), 1)) > 0) goto label_4;
	}
label_3:;
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(63);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp0 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((mindustry_maps_filters_MirrorFilter *) NULL_CHECK((frame[0].o)))->F_axisX), (jfloat(0)), (jfloat(1)));
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	frame[2].f = (temp0 + (temp1 * ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width)));
	LINE_NUMBER(64);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp2 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((mindustry_maps_filters_MirrorFilter *) NULL_CHECK((frame[0].o)))->F_axisY), (jfloat(0)), (jfloat(1)));
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	frame[3].f = (temp2 + (temp3 * ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height)));
	LINE_NUMBER(66);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat((((jint)((mindustry_maps_filters_MirrorFilter *) NULL_CHECK((frame[0].o)))->F_angle) - (90)))), (jfloat(99999.0f)));
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp4 = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[2].o))->F_x) - (frame[2].f);
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp5 = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[2].o))->F_y) - (frame[3].f);
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp6 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[2].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp7 = (temp6 + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[2].o))->F_width)) - (frame[2].f);
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp8 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[2].o))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r1;
	((func_mindustry_maps_filters_MirrorFilter_clipHalfLine_arc_math_geom_Vec2_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_filters_MirrorFilter_clipHalfLine_arc_math_geom_Vec2_float_float_float_float])(ctx, sp[0].o, sp[1].o, temp4, temp5, temp7, ((temp8 + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[2].o))->F_height)) - (frame[3].f)));
	LINE_NUMBER(68);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(-1.0f)));
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v2;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp9 = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[2].o))->F_x) - (frame[2].f);
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp10 = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[2].o))->F_y) - (frame[3].f);
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp11 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[2].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp12 = (temp11 + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[2].o))->F_width)) - (frame[2].f);
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp13 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[2].o))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r1;
	((func_mindustry_maps_filters_MirrorFilter_clipHalfLine_arc_math_geom_Vec2_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_filters_MirrorFilter_clipHalfLine_arc_math_geom_Vec2_float_float_float_float])(ctx, sp[0].o, sp[1].o, temp9, temp10, temp12, ((temp13 + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[2].o))->F_height)) - (frame[3].f)));
	LINE_NUMBER(71);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((frame[2].f) + ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_x)), ((frame[3].f) + ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_y)));
	LINE_NUMBER(72);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((frame[2].f) + ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_x)), ((frame[3].f) + ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_y)));
	LINE_NUMBER(74);
	jfloat temp14 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(8.0f)));
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_darkerGray;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp14, sp[0].o);
	LINE_NUMBER(75);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp15 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp16 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	jfloat temp17 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, temp15, temp16, temp17, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(76);
	jfloat temp18 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(3.0f)));
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp18, sp[0].o);
	LINE_NUMBER(77);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp19 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp20 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	jfloat temp21 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, temp19, temp20, temp21, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(79);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(80);
	jfloat temp22 = (frame[2].f) + ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_x);
	jfloat temp23 = (frame[3].f) + ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_y);
	jfloat temp24 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(6.0f)));
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, temp22, temp23, temp24);
	LINE_NUMBER(81);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_darkerGray;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(82);
	jfloat temp25 = (frame[2].f) + ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_x);
	jfloat temp26 = (frame[3].f) + ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_y);
	jfloat temp27 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(4.0f)));
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, temp25, temp26, temp27);
	LINE_NUMBER(83);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_maps_filters_MirrorFilter_getDrawRect_arc_scene_ui_Image_arc_math_geom_Rect(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/MirrorFilter:getDrawRect", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_MirrorFilter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(87);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_Image_getDrawable_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Image_getDrawable_R_arc_scene_style_Drawable])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	{
	LINE_NUMBER(88);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, (frame[1].o), (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)));
	}
label_3:;
	LINE_NUMBER(89);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(92);
	clinit_arc_util_Scaling(ctx);
	sp[0].o = (jobject)SF_arc_util_Scaling_fit;
	sp[1].o = (jobject)((func_arc_scene_ui_Image_getDrawable_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Image_getDrawable_R_arc_scene_style_Drawable])(ctx, (frame[0].o));
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, sp[1].o))(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_scene_ui_Image_getDrawable_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Image_getDrawable_R_arc_scene_style_Drawable])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, sp[1].o))(ctx, sp[1].o);
	jfloat temp2 = (jfloat)((func_arc_scene_ui_Image_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Image_getWidth_R_float])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)((func_arc_scene_ui_Image_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Image_getHeight_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_util_Scaling_apply_float_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Scaling_apply_float_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	frame[2].o = sp[0].o;
	LINE_NUMBER(94);
	sp[0].o = frame[1].o;
	jfloat temp4 = (jfloat)((func_arc_scene_ui_Image_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Image_getWidth_R_float])(ctx, (frame[0].o));
	jfloat temp5 = (temp4 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x)) / (jfloat(2));
	jfloat temp6 = (jfloat)((func_arc_scene_ui_Image_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Image_getHeight_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp5, ((temp6 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y)) / (jfloat(2))), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y));
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_filters_MirrorFilter_coord_float_int_R_float(jcontext ctx, jobject self, jfloat param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/MirrorFilter:coord", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(98);
	if ((frame[2].i) > (jint(1))) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(99);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (frame[1].f), (jfloat(0)), (jfloat(1)));
	popStackFrame(ctx);
	return (temp0 * ((jfloat((frame[2].i))) - (jfloat(1))));
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_MirrorFilter_mirror_int_int_arc_math_geom_Vec2_float_float_float_float(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/MirrorFilter:mirror", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	{
	LINE_NUMBER(104);
	if ((frame[1].i) == (frame[2].i)) goto label_1;
	}
	{
	if ((((jint)((mindustry_maps_filters_MirrorFilter *) NULL_CHECK((frame[0].o)))->F_angle) % (90)) != 0) goto label_2;
	}
label_1:;
	{
	if (((jint)((mindustry_maps_filters_MirrorFilter *) NULL_CHECK((frame[0].o)))->F_rotate) == 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(105);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x = (((jfloat((frame[1].i))) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x)) - (jfloat(1)));
	LINE_NUMBER(106);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y = (((jfloat((frame[2].i))) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y)) - (jfloat(1)));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(108);
	frame[8].f = ((frame[6].f) - (frame[4].f));
	LINE_NUMBER(109);
	frame[9].f = ((frame[7].f) - (frame[5].f));
	LINE_NUMBER(111);
	frame[10].f = ((((frame[8].f) * (frame[8].f)) - ((frame[9].f) * (frame[9].f))) / (((frame[8].f) * (frame[8].f)) + ((frame[9].f) * (frame[9].f))));
	LINE_NUMBER(112);
	frame[11].f = ((((jfloat(2)) * (frame[8].f)) * (frame[9].f)) / (((frame[8].f) * (frame[8].f)) + ((frame[9].f) * (frame[9].f))));
	LINE_NUMBER(114);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, (frame[3].o), ((((frame[10].f) * (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x) - (frame[4].f))) + ((frame[11].f) * (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y) - (frame[5].f)))) + (frame[4].f)), ((((frame[11].f) * (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x) - (frame[4].f))) - ((frame[10].f) * (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y) - (frame[5].f)))) + (frame[5].f)));
	}
label_5:;
	LINE_NUMBER(116);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_maps_filters_MirrorFilter_left_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/MirrorFilter:left", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(119);
	if ((floatCompare(((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x)) * (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y))), ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y)) * (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x) - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x))), -1)) <= 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_MirrorFilter_clipHalfLine_arc_math_geom_Vec2_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/MirrorFilter:clipHalfLine", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(124);
	sp[0].o = frame[1].o;
	jfloat temp0 = jfloat(1);
	sp[1].f = temp0;
	sp += 2;
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), (jfloat(0)), 1)) >= 0) goto label_1;
	}
	{
	jfloat temp0 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) / (frame[2].f);
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jfloat temp0 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) / (frame[4].f);
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, sp[0].f);
	sp[0].f = temp0;
	sp += 1;
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y), (jfloat(0)), 1)) >= 0) goto label_3;
	}
	{
	jfloat temp0 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) / (frame[3].f);
	sp[0].f = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	jfloat temp0 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) / (frame[5].f);
	sp[0].f = temp0;
	sp += 1;
	}
label_4:;
	{
	sp -= 4;
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, sp[3].f);
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, sp[2].f, temp0);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (sp[1].f / temp1));
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_MirrorFilter_lambda$options$3_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/MirrorFilter:lambda$options$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(25);
	((mindustry_maps_filters_MirrorFilter *) NULL_CHECK((frame[0].o)))->F_rotate = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_maps_filters_MirrorFilter_lambda$options$2_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/MirrorFilter:lambda$options$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return ((jint)((mindustry_maps_filters_MirrorFilter *) NULL_CHECK((frame[0].o)))->F_rotate);
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_MirrorFilter_lambda$options$1_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/MirrorFilter:lambda$options$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(24);
	((mindustry_maps_filters_MirrorFilter *) NULL_CHECK((frame[0].o)))->F_angle = (jint((frame[1].f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_filters_MirrorFilter_lambda$options$0_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/MirrorFilter:lambda$options$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return (jfloat(((jint)((mindustry_maps_filters_MirrorFilter *) NULL_CHECK((frame[0].o)))->F_angle)));
	}

	popStackFrame(ctx);
}

void clinit_mindustry_maps_filters_MirrorFilter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_maps_filters_GenerateFilter(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/MirrorFilter:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_MirrorFilter(ctx);
	{
	LINE_NUMBER(15);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_maps_filters_MirrorFilter(ctx);
	SF_mindustry_maps_filters_MirrorFilter_v1 = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_maps_filters_MirrorFilter(ctx);
	SF_mindustry_maps_filters_MirrorFilter_v2 = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_maps_filters_MirrorFilter(ctx);
	SF_mindustry_maps_filters_MirrorFilter_v3 = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_filters_MirrorFilter[] {
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
	(void *) M_mindustry_maps_filters_MirrorFilter_options_R_Array1_mindustry_maps_filters_FilterOption,
	(void *) M_mindustry_maps_filters_MirrorFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput,
	(void *) M_mindustry_maps_filters_MirrorFilter_draw_arc_scene_ui_Image,
	(void *) M_mindustry_maps_filters_GenerateFilter_simpleName_R_java_lang_String,
	(void *) M_mindustry_maps_filters_GenerateFilter_name_R_java_lang_String,
	(void *) M_mindustry_maps_filters_MirrorFilter_icon_R_char,
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
	(void *) M_mindustry_maps_filters_MirrorFilter_coord_float_int_R_float,
	(void *) M_mindustry_maps_filters_MirrorFilter_mirror_int_int_arc_math_geom_Vec2_float_float_float_float,
	(void *) M_mindustry_maps_filters_MirrorFilter_left_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean,
	(void *) M_mindustry_maps_filters_MirrorFilter_clipHalfLine_arc_math_geom_Vec2_float_float_float_float,
	(void *) M_mindustry_maps_filters_MirrorFilter_lambda$options$3_boolean,
	(void *) M_mindustry_maps_filters_MirrorFilter_lambda$options$2_R_boolean,
	(void *) M_mindustry_maps_filters_MirrorFilter_lambda$options$1_float,
	(void *) M_mindustry_maps_filters_MirrorFilter_lambda$options$0_R_float,
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
	{ "coord", "(FI)F" },
	{ "mirror", "(IILarc/math/geom/Vec2;FFFF)V" },
	{ "left", "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)Z" },
	{ "clipHalfLine", "(Larc/math/geom/Vec2;FFFF)V" },
	{ "lambda$options$3", "(Z)V" },
	{ "lambda$options$2", "()Z" },
	{ "lambda$options$1", "(F)V" },
	{ "lambda$options$0", "()F" },
};

static FieldMetadata fields[] {
	{ "v1", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_maps_filters_MirrorFilter_v1, "Larc/math/geom/Vec2;", 26 },
	{ "v2", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_maps_filters_MirrorFilter_v2, "Larc/math/geom/Vec2;", 26 },
	{ "v3", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_maps_filters_MirrorFilter_v3, "Larc/math/geom/Vec2;", 26 },
	{ "angle", &class_int, offsetof(mindustry_maps_filters_MirrorFilter, F_angle), "I", 1 },
	{ "rotate", &class_boolean, offsetof(mindustry_maps_filters_MirrorFilter, F_rotate), "Z", 1 },
	{ "axisX", &class_float, offsetof(mindustry_maps_filters_MirrorFilter, F_axisX), "F", 1 },
	{ "axisY", &class_float, offsetof(mindustry_maps_filters_MirrorFilter, F_axisY), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_filters_MirrorFilter, 0, "()V", 1 },
	{ "options", (intptr_t) M_mindustry_maps_filters_MirrorFilter_options_R_Array1_mindustry_maps_filters_FilterOption, VTABLE_mindustry_maps_filters_MirrorFilter_options_R_Array1_mindustry_maps_filters_FilterOption, "()[Lmindustry/maps/filters/FilterOption;", 1 },
	{ "icon", (intptr_t) M_mindustry_maps_filters_MirrorFilter_icon_R_char, VTABLE_mindustry_maps_filters_MirrorFilter_icon_R_char, "()C", 1 },
	{ "apply", (intptr_t) M_mindustry_maps_filters_MirrorFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput, VTABLE_mindustry_maps_filters_MirrorFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput, "(Lmindustry/maps/filters/GenerateFilter$GenerateInput;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_maps_filters_MirrorFilter_draw_arc_scene_ui_Image, VTABLE_mindustry_maps_filters_MirrorFilter_draw_arc_scene_ui_Image, "(Larc/scene/ui/Image;)V", 1 },
	{ "getDrawRect", (intptr_t) SM_mindustry_maps_filters_MirrorFilter_getDrawRect_arc_scene_ui_Image_arc_math_geom_Rect, 0, "(Larc/scene/ui/Image;Larc/math/geom/Rect;)V", 9 },
	{ "coord", (intptr_t) M_mindustry_maps_filters_MirrorFilter_coord_float_int_R_float, VTABLE_mindustry_maps_filters_MirrorFilter_coord_float_int_R_float, "(FI)F", 0 },
	{ "mirror", (intptr_t) M_mindustry_maps_filters_MirrorFilter_mirror_int_int_arc_math_geom_Vec2_float_float_float_float, VTABLE_mindustry_maps_filters_MirrorFilter_mirror_int_int_arc_math_geom_Vec2_float_float_float_float, "(IILarc/math/geom/Vec2;FFFF)V", 0 },
	{ "left", (intptr_t) M_mindustry_maps_filters_MirrorFilter_left_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean, VTABLE_mindustry_maps_filters_MirrorFilter_left_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean, "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)Z", 0 },
	{ "clipHalfLine", (intptr_t) M_mindustry_maps_filters_MirrorFilter_clipHalfLine_arc_math_geom_Vec2_float_float_float_float, VTABLE_mindustry_maps_filters_MirrorFilter_clipHalfLine_arc_math_geom_Vec2_float_float_float_float, "(Larc/math/geom/Vec2;FFFF)V", 0 },
	{ "lambda$options$3", (intptr_t) M_mindustry_maps_filters_MirrorFilter_lambda$options$3_boolean, VTABLE_mindustry_maps_filters_MirrorFilter_lambda$options$3_boolean, "(Z)V", 4098 },
	{ "lambda$options$2", (intptr_t) M_mindustry_maps_filters_MirrorFilter_lambda$options$2_R_boolean, VTABLE_mindustry_maps_filters_MirrorFilter_lambda$options$2_R_boolean, "()Z", 4098 },
	{ "lambda$options$1", (intptr_t) M_mindustry_maps_filters_MirrorFilter_lambda$options$1_float, VTABLE_mindustry_maps_filters_MirrorFilter_lambda$options$1_float, "(F)V", 4098 },
	{ "lambda$options$0", (intptr_t) M_mindustry_maps_filters_MirrorFilter_lambda$options$0_R_float, VTABLE_mindustry_maps_filters_MirrorFilter_lambda$options$0_R_float, "()F", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_maps_filters_MirrorFilter, 0, "()V", 8 },
};

Class class_mindustry_maps_filters_MirrorFilter{
		.nativeName = (intptr_t) "mindustry/maps/filters/MirrorFilter",
		.parentClass = (intptr_t) &class_mindustry_maps_filters_GenerateFilter,
		.size = sizeof(mindustry_maps_filters_MirrorFilter),
		.classVtable = (intptr_t) vtable_mindustry_maps_filters_MirrorFilter,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_filters_MirrorFilter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_filters_MirrorFilter,
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
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 37,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_filters_MirrorFilter = registerClass(&class_mindustry_maps_filters_MirrorFilter);

}
