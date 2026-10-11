#include "mindustry/input/Placement.h"
#include "arc/func/Prov.h"
#include "mindustry/world/blocks/distribution/ItemBridge.h"
#include "arc/struct/PQueue.h"
#include "arc/math/geom/Point2.h"
#include "arc/func/Boolf2.h"
#include "arc/util/pooling/Pools.h"
#include "java/util/Arrays.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/Tile.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "arc/Settings.h"
#include "mindustry/input/DirectionBridgePlacer.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "mindustry/input/Placement_invoke_arc_func_Prov_14.h"
#include "mindustry/input/Placement_invoke_arc_func_Prov_13.h"
#include "arc/Core.h"
#include "mindustry/input/Placement_invoke_arc_func_Prov_12.h"
#include "mindustry/input/Placement_invoke_arc_func_Prov_11.h"
#include "mindustry/input/Placement_invoke_arc_func_Prov_10.h"
#include "mindustry/input/Placement.h"
#include "mindustry/input/Placement_NormalizeDrawResult.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/input/Placement_invoke_arc_func_Boolf_3.h"
#include "mindustry/input/Placement_invoke_arc_func_Boolf_4.h"
#include "arc/util/pooling/Pool.h"
#include "mindustry/input/BridgePlacer.h"
#include "mindustry/input/Placement_invoke_arc_func_Boolf_5.h"
#include "mindustry/input/Placement_invoke_arc_func_Prov_15.h"
#include "mindustry/world/Block.h"
#include "java/lang/Float.h"
#include "arc/struct/IntSeq.h"
#include "mindustry/world/blocks/distribution/DirectionBridge.h"
#include "arc/struct/IntSet.h"
#include "java/lang/String.h"
#include "java/util/Comparator.h"
#include "mindustry/core/Control.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/struct/IntIntMap.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "mindustry/input/Placement_invoke_arc_func_Prov_8.h"
#include "mindustry/input/Placement_invoke_java_util_Comparator_1.h"
#include "mindustry/input/Placement_invoke_arc_func_Prov_9.h"
#include "arc/struct/IntFloatMap.h"
#include "mindustry/input/ItemBridgePlacer.h"
#include "mindustry/world/blocks/distribution/ChainedBuilding.h"
#include "mindustry/input/Placement_NormalizeResult.h"
#include "mindustry/gen/Player.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/input/InputHandler.h"
#include "mindustry/world/Build.h"
#include "arc/math/geom/Bresenham2.h"

extern "C" {

jobject SF_mindustry_input_Placement_plans1;
jobject SF_mindustry_input_Placement_tmpPoints;
jobject SF_mindustry_input_Placement_tmpPoints2;
jobject SF_mindustry_input_Placement_result;
jobject SF_mindustry_input_Placement_drawResult;
jobject SF_mindustry_input_Placement_bres;
jobject SF_mindustry_input_Placement_points;
jobject SF_mindustry_input_Placement_tmpInts;
jobject SF_mindustry_input_Placement_tmpInts2;
jobject SF_mindustry_input_Placement_costs;
jobject SF_mindustry_input_Placement_parents;
jobject SF_mindustry_input_Placement_closed;

void mark_mindustry_input_Placement(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_input_Placement_plans1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Placement_plans1)->clazz)->markFunction)((jobject) SF_mindustry_input_Placement_plans1, mark, depth + 1);
		if (SF_mindustry_input_Placement_tmpPoints)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Placement_tmpPoints)->clazz)->markFunction)((jobject) SF_mindustry_input_Placement_tmpPoints, mark, depth + 1);
		if (SF_mindustry_input_Placement_tmpPoints2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Placement_tmpPoints2)->clazz)->markFunction)((jobject) SF_mindustry_input_Placement_tmpPoints2, mark, depth + 1);
		if (SF_mindustry_input_Placement_result)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Placement_result)->clazz)->markFunction)((jobject) SF_mindustry_input_Placement_result, mark, depth + 1);
		if (SF_mindustry_input_Placement_drawResult)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Placement_drawResult)->clazz)->markFunction)((jobject) SF_mindustry_input_Placement_drawResult, mark, depth + 1);
		if (SF_mindustry_input_Placement_bres)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Placement_bres)->clazz)->markFunction)((jobject) SF_mindustry_input_Placement_bres, mark, depth + 1);
		if (SF_mindustry_input_Placement_points)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Placement_points)->clazz)->markFunction)((jobject) SF_mindustry_input_Placement_points, mark, depth + 1);
		if (SF_mindustry_input_Placement_tmpInts)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Placement_tmpInts)->clazz)->markFunction)((jobject) SF_mindustry_input_Placement_tmpInts, mark, depth + 1);
		if (SF_mindustry_input_Placement_tmpInts2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Placement_tmpInts2)->clazz)->markFunction)((jobject) SF_mindustry_input_Placement_tmpInts2, mark, depth + 1);
		if (SF_mindustry_input_Placement_costs)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Placement_costs)->clazz)->markFunction)((jobject) SF_mindustry_input_Placement_costs, mark, depth + 1);
		if (SF_mindustry_input_Placement_parents)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Placement_parents)->clazz)->markFunction)((jobject) SF_mindustry_input_Placement_parents, mark, depth + 1);
		if (SF_mindustry_input_Placement_closed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Placement_closed)->clazz)->markFunction)((jobject) SF_mindustry_input_Placement_closed, mark, depth + 1);
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
	auto self = (mindustry_input_Placement *) object;
}

void init_mindustry_input_Placement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/Placement:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_Placement(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(74);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_input_Placement_pathfindLine_boolean_int_int_int_int_R_arc_struct_Seq(jcontext ctx, jbool param0, jint param1, jint param2, jint param3, jint param4) {
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/Placement:pathfindLine", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_Placement(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(90);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_points;
	SM_arc_util_pooling_Pools_freeAll_arc_struct_Seq(ctx, sp[0].o);
	LINE_NUMBER(91);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_points;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(92);
	if ((frame[0].i) == 0) goto label_3;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"conveyorpathfinding"_j))));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(93);
	jint temp0 = (jint)SM_mindustry_input_Placement_astar_int_int_int_int_R_boolean(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(94);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_points;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)SM_mindustry_input_Placement_normalizeLine_int_int_int_int_R_arc_struct_Seq(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(99);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_bres;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jint temp2 = frame[3].i;
	jint temp3 = frame[4].i;
	sp[1].o = ((jobject) &class_arc_math_geom_Point2);
	{ /* InvokeDynamic */
		clinit_mindustry_input_Placement_invoke_arc_func_Prov_8(ctx);
		auto proxy = (mindustry_input_Placement_invoke_arc_func_Prov_8 *) gcAlloc(ctx, &class_mindustry_input_Placement_invoke_arc_func_Prov_8);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_pooling_Pools_get_java_lang_Class_arc_func_Prov_R_arc_util_pooling_Pool(ctx, sp[1].o, sp[2].o);
	clinit_mindustry_input_Placement(ctx);
	sp[2].o = (jobject)SF_mindustry_input_Placement_points;
	sp[0].o = (jobject)((func_arc_math_geom_Bresenham2_lineNoDiagonal_int_int_int_int_arc_util_pooling_Pool_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Bresenham2_lineNoDiagonal_int_int_int_int_arc_util_pooling_Pool_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_input_Placement_normalizeLine_int_int_int_int_R_arc_struct_Seq(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/Placement:normalizeLine", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_Placement(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(105);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_points;
	SM_arc_util_pooling_Pools_freeAll_arc_struct_Seq(ctx, sp[0].o);
	LINE_NUMBER(106);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_points;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(107);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[0].i) - (frame[2].i)));
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[1].i) - (frame[3].i)));
	if (temp0 <= temp1) goto label_3;
	}
	{
	LINE_NUMBER(109);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[0].i) - (frame[2].i)));
	if (temp0 > temp1) goto label_6;
	}
	{
	LINE_NUMBER(110);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_points;
	sp[1].o = ((jobject) &class_arc_math_geom_Point2);
	{ /* InvokeDynamic */
		clinit_mindustry_input_Placement_invoke_arc_func_Prov_9(ctx);
		auto proxy = (mindustry_input_Placement_invoke_arc_func_Prov_9 *) gcAlloc(ctx, &class_mindustry_input_Placement_invoke_arc_func_Prov_9);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[1].o, sp[2].o);
	sp[1].o = checkCast(ctx, &class_arc_math_geom_Point2, sp[1].o);
	jint temp0 = frame[0].i;
	jint temp1 = frame[4].i;
	jint temp2 = (jint)SM_arc_math_Mathf_sign_float_R_int(ctx, (jfloat(((frame[2].i) - (frame[0].i)))));
	sp[1].o = (jobject)((func_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2])(ctx, sp[1].o, (temp0 + (temp1 * temp2)), (frame[1].i));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(109);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	goto label_9;
label_3:;
	{
	LINE_NUMBER(114);
	frame[4].i = (jint(0));
	}
label_10:;
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[1].i) - (frame[3].i)));
	if (temp0 > temp1) goto label_9;
	}
	{
	LINE_NUMBER(115);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_points;
	sp[1].o = ((jobject) &class_arc_math_geom_Point2);
	{ /* InvokeDynamic */
		clinit_mindustry_input_Placement_invoke_arc_func_Prov_10(ctx);
		auto proxy = (mindustry_input_Placement_invoke_arc_func_Prov_10 *) gcAlloc(ctx, &class_mindustry_input_Placement_invoke_arc_func_Prov_10);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[1].o, sp[2].o);
	sp[1].o = checkCast(ctx, &class_arc_math_geom_Point2, sp[1].o);
	jint temp0 = frame[0].i;
	jint temp1 = frame[1].i;
	jint temp2 = frame[4].i;
	jint temp3 = (jint)SM_arc_math_Mathf_sign_float_R_int(ctx, (jfloat(((frame[3].i) - (frame[1].i)))));
	sp[1].o = (jobject)((func_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2])(ctx, sp[1].o, temp0, (temp1 + (temp2 * temp3)));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(114);
	INST_IINC(4, 1);
	goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(118);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_points;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_input_Placement_normalizeRectangle_int_int_int_int_int_R_arc_struct_Seq(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4) {
	jtype frame[18];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/Placement:normalizeRectangle", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_Placement(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(123);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_points;
	SM_arc_util_pooling_Pools_freeAll_arc_struct_Seq(ctx, sp[0].o);
	LINE_NUMBER(124);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_points;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(126);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[0].i), (frame[2].i));
	frame[5].i = temp0;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[1].i), (frame[3].i));
	frame[6].i = temp1;
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[0].i), (frame[2].i));
	frame[7].i = temp2;
	jint temp3 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[1].i), (frame[3].i));
	frame[8].i = temp3;
	LINE_NUMBER(128);
	frame[9].i = (jint(0));
	}
label_7:;
	{
	if ((frame[9].i) > ((frame[8].i) - (frame[6].i))) goto label_8;
	}
	{
	LINE_NUMBER(129);
	frame[10].i = (jint(0));
	}
label_10:;
	{
	if ((frame[10].i) > ((frame[7].i) - (frame[5].i))) goto label_11;
	}
	{
	LINE_NUMBER(130);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_points;
	sp[1].o = ((jobject) &class_arc_math_geom_Point2);
	{ /* InvokeDynamic */
		clinit_mindustry_input_Placement_invoke_arc_func_Prov_11(ctx);
		auto proxy = (mindustry_input_Placement_invoke_arc_func_Prov_11 *) gcAlloc(ctx, &class_mindustry_input_Placement_invoke_arc_func_Prov_11);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[1].o, sp[2].o);
	sp[1].o = checkCast(ctx, &class_arc_math_geom_Point2, sp[1].o);
	jint temp0 = frame[0].i;
	jint temp1 = frame[10].i;
	jint temp2 = (jint)SM_arc_math_Mathf_sign_float_R_int(ctx, (jfloat(((frame[2].i) - (frame[0].i)))));
	jint temp3 = temp0 + (temp1 * temp2);
	jint temp4 = frame[1].i;
	jint temp5 = frame[9].i;
	jint temp6 = (jint)SM_arc_math_Mathf_sign_float_R_int(ctx, (jfloat(((frame[3].i) - (frame[1].i)))));
	sp[1].o = (jobject)((func_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2])(ctx, sp[1].o, temp3, (temp4 + (temp5 * temp6)));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(129);
	frame[10].i = ((frame[10].i) + (frame[4].i));
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(128);
	frame[9].i = ((frame[9].i) + (frame[4].i));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(134);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_points;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_input_Placement_upgradeLine_int_int_int_int_R_arc_struct_Seq(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/Placement:upgradeLine", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_Placement(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(138);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_closed;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(139);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_points;
	SM_arc_util_pooling_Pools_freeAll_arc_struct_Seq(ctx, sp[0].o);
	LINE_NUMBER(140);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_points;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(141);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[0].i), (frame[1].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(142);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_points;
	sp[1].o = ((jobject) &class_arc_math_geom_Point2);
	{ /* InvokeDynamic */
		clinit_mindustry_input_Placement_invoke_arc_func_Prov_12(ctx);
		auto proxy = (mindustry_input_Placement_invoke_arc_func_Prov_12 *) gcAlloc(ctx, &class_mindustry_input_Placement_invoke_arc_func_Prov_12);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_math_geom_Point2, sp[1].o)))->vtable)[VTABLE_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2])(ctx, (checkCast(ctx, &class_arc_math_geom_Point2, sp[1].o)), (frame[0].i), (frame[1].i));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	{
	LINE_NUMBER(143);
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_world_blocks_distribution_ChainedBuilding)) == 0) goto label_6;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_distribution_ChainedBuilding, (frame[4].o)));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_tile;
	if (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x) != (frame[2].i)) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_tile;
	if (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y) == (frame[3].i)) goto label_6;
	}
label_8:;
	{
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_closed;
	jint temp0 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_id));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((func_mindustry_world_blocks_distribution_ChainedBuilding_next_R_mindustry_gen_Building) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_distribution_ChainedBuilding, INDEX_mindustry_world_blocks_distribution_ChainedBuilding_next_R_mindustry_gen_Building, (frame[5].o)))(ctx, (frame[5].o));
	if (sp[0].o != nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)SM_mindustry_input_Placement_pathfindLine_boolean_int_int_int_int_R_arc_struct_Seq(ctx, (jint(1)), (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((func_mindustry_world_blocks_distribution_ChainedBuilding_next_R_mindustry_gen_Building) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_distribution_ChainedBuilding, INDEX_mindustry_world_blocks_distribution_ChainedBuilding_next_R_mindustry_gen_Building, (frame[5].o)))(ctx, (frame[5].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(146);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_points;
	sp[1].o = ((jobject) &class_arc_math_geom_Point2);
	{ /* InvokeDynamic */
		clinit_mindustry_input_Placement_invoke_arc_func_Prov_13(ctx);
		auto proxy = (mindustry_input_Placement_invoke_arc_func_Prov_13 *) gcAlloc(ctx, &class_mindustry_input_Placement_invoke_arc_func_Prov_13);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[1].o, sp[2].o);
	sp[1].o = checkCast(ctx, &class_arc_math_geom_Point2, sp[1].o);
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_tile;
	sp[1].o = (jobject)((func_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2])(ctx, sp[1].o, temp0, ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_y));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(148);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_points;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_Placement_calculateNodes_arc_struct_Seq_mindustry_world_Block_int_arc_func_Boolf2(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3) {
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/Placement:calculateNodes", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_Placement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(153);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_tmpPoints2;
	frame[4].o = sp[0].o;
	LINE_NUMBER(154);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_tmpPoints;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(156);
	sp[0].o = frame[4].o;
	sp[1].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_Placement_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_input_Placement_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_input_Placement_invoke_arc_func_Boolf_3);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_selectFrom_arc_struct_Seq_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_selectFrom_arc_struct_Seq_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(157);
	frame[6].i = (jint(0));
	LINE_NUMBER(160);
	frame[7].i = (jint(0));
	}
label_5:;
	{
	if ((frame[7].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[4].o)))->F_size)) goto label_6;
	}
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[4].o), (frame[7].i));
	frame[8].o = (checkCast(ctx, &class_arc_math_geom_Point2, sp[0].o));
	LINE_NUMBER(162);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[5].o), (frame[8].o));
	LINE_NUMBER(163);
	if ((frame[7].i) != (((jint)((arc_struct_Seq *) NULL_CHECK((frame[4].o)))->F_size) - (jint(1)))) goto label_10;
	}
	INST_ICONST(1);
	INST_ISTORE(6);
label_10:;
	{
	LINE_NUMBER(166);
	frame[9].i = (((jint)((arc_struct_Seq *) NULL_CHECK((frame[4].o)))->F_size) - (jint(1)));
	}
label_11:;
	{
	if ((frame[9].i) <= (frame[7].i)) goto label_12;
	}
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[4].o), (frame[9].i));
	frame[10].o = (checkCast(ctx, &class_arc_math_geom_Point2, sp[0].o));
	LINE_NUMBER(168);
	jint temp0 = (jint)((func_arc_func_Boolf2_get_java_lang_Object_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf2, INDEX_arc_func_Boolf2_get_java_lang_Object_java_lang_Object_R_boolean, (frame[3].o)))(ctx, (frame[3].o), (frame[8].o), (frame[10].o));
	frame[11].i = temp0;
	LINE_NUMBER(170);
	if ((frame[11].i) == 0) goto label_16;
	}
	{
	LINE_NUMBER(172);
	frame[7].i = (frame[9].i);
	LINE_NUMBER(173);
	goto label_5;
	}
label_16:;
	{
	LINE_NUMBER(166);
	INST_IINC(9, -1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(178);
	INST_IINC(7, 1);
	LINE_NUMBER(179);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(181);
	if ((frame[6].i) != 0) goto label_20;
	}
	{
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_20;
	}
	{
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (checkCast(ctx, &class_arc_math_geom_Point2, sp[1].o)));
	}
label_20:;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[0].o));
	LINE_NUMBER(184);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_input_Placement_isSidePlace_arc_struct_Seq_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/Placement:isSidePlace", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_Placement(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(188);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) <= (jint(1))) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, (frame[0].o));
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o))))->F_x;
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, (frame[0].o));
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o))))->F_y;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[0].o), (jint(1)));
	jint temp2 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o))))->F_x;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[0].o), (jint(1)));
	jint temp3 = (jint)SM_mindustry_world_Tile_relativeTo_int_int_int_int_R_byte(ctx, temp0, temp1, temp2, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o))))->F_y));
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, (frame[0].o));
	jint temp4 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, (temp3 - ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o))))->F_rotation)), (jint(2)));
	if (temp4 != (jint(1))) goto label_1;
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

void SM_mindustry_input_Placement_calculateBridges_arc_struct_Seq_mindustry_world_blocks_distribution_ItemBridge(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/Placement:calculateBridges", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_Placement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(192);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_input_Placement_invoke_arc_func_Boolf_4(ctx);
		auto proxy = (mindustry_input_Placement_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_input_Placement_invoke_arc_func_Boolf_4);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_input_Placement_calculateBridges_arc_struct_Seq_mindustry_world_blocks_distribution_ItemBridge_boolean_arc_func_Boolf(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(193);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_Placement_calculateBridges_arc_struct_Seq_mindustry_input_BridgePlacer_boolean_arc_func_Boolf(jcontext ctx, jobject param0, jobject param1, jbool param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/Placement:calculateBridges", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_Placement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(197);
	jint temp0 = (jint)SM_mindustry_input_Placement_isSidePlace_arc_struct_Seq_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size) != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, (frame[0].o));
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o))))->F_x;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, (frame[0].o));
	if (temp0 == ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o))))->F_x)) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, (frame[0].o));
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o))))->F_y;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, (frame[0].o));
	if (temp0 != ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o))))->F_y)) goto label_4;
	}
label_3:;
	{
	jint temp0 = (jint)((func_mindustry_input_BridgePlacer_unlockedNow_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_input_BridgePlacer, INDEX_mindustry_input_BridgePlacer_unlockedNow_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 != 0) goto label_5;
	}
label_4:;
	LINE_NUMBER(201);
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(204);
	SM_mindustry_input_Placement_smartCalculateBridges_arc_struct_Seq_mindustry_input_BridgePlacer_boolean_arc_func_Boolf(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o));
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_Placement_smartCalculateBridges_arc_struct_Seq_mindustry_input_BridgePlacer_boolean_arc_func_Boolf(jcontext ctx, jobject param0, jobject param1, jbool param2, jobject param3) {
	jtype frame[27];
	auto stack = &frame[22];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/Placement:smartCalculateBridges", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_Placement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(208);
	{ /* InvokeDynamic */
		clinit_mindustry_input_Placement_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_input_Placement_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_input_Placement_invoke_arc_func_Boolf_5);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	frame[4].o = sp[0].o;
	LINE_NUMBER(212);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_plans1;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(215);
	frame[6].i = (jint(3));
	LINE_NUMBER(216);
	frame[7].i = (30);
	LINE_NUMBER(217);
	frame[8].i = (200);
	LINE_NUMBER(218);
	frame[9].i = (jint(5));
	LINE_NUMBER(219);
	frame[10].i = (jint(1073741823));
	LINE_NUMBER(221);
	frame[11].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(222);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_tmpInts;
	sp[0].o = (jobject)((func_arc_struct_IntSeq_setSize_int_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_setSize_int_R_Array1_int])(ctx, sp[0].o, ((jint(2)) * (frame[11].i)));
	frame[12].o = sp[0].o;
	LINE_NUMBER(223);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_tmpInts2;
	sp[0].o = (jobject)((func_arc_struct_IntSeq_setSize_int_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_setSize_int_R_Array1_int])(ctx, sp[0].o, ((jint(2)) * (frame[11].i)));
	frame[13].o = sp[0].o;
	LINE_NUMBER(224);
	SM_java_util_Arrays_fill_Array1_int_int_int_int(ctx, (frame[12].o), (jint(0)), ((jint(2)) * (frame[11].i)), (jint(1073741823)));
	LINE_NUMBER(225);
	SM_java_util_Arrays_fill_Array1_int_int_int_int(ctx, (frame[13].o), (jint(0)), ((jint(2)) * (frame[11].i)), (jint(-1)));
	LINE_NUMBER(226);
	ARRAY_ACCESS(jint, (frame[12].o), (jint(0))) = (jint(0));
	LINE_NUMBER(227);
	ARRAY_ACCESS(jint, (frame[12].o), (frame[11].i)) = (200);
	LINE_NUMBER(229);
	frame[14].i = (jint(1));
	}
label_15:;
	{
	if ((frame[14].i) >= (frame[11].i)) goto label_16;
	}
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[14].i));
	frame[15].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(231);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[4].o)))(ctx, (frame[4].o), (frame[15].o));
	frame[16].i = temp0;
	LINE_NUMBER(232);
	if ((frame[2].i) == 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[15].o));
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[15].o));
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_20;
	}
label_21:;
	INST_ICONST(1);
	goto label_22;
label_20:;
	INST_ICONST(0);
label_22:;
	{
	sp -= 1;
	frame[17].i = sp[0].i;
	LINE_NUMBER(234);
	if ((frame[16].i) != 0) goto label_24;
	}
	INST_ILOAD(17);
	if ((--sp)->i != 0) goto label_24;
	LINE_NUMBER(235);
	goto label_26;
label_24:;
	{
	LINE_NUMBER(238);
	if ((frame[16].i) == 0) goto label_27;
	}
	{
	LINE_NUMBER(239);
	ARRAY_ACCESS(jint, (frame[12].o), (frame[14].i)) = (((jint)ARRAY_ACCESS(jint, (frame[12].o), ((frame[14].i) - (jint(1))))) + (jint(3)));
	goto label_29;
	}
label_27:;
	{
	LINE_NUMBER(241);
	ARRAY_ACCESS(jint, (frame[12].o), (frame[14].i)) = (((jint)ARRAY_ACCESS(jint, (frame[12].o), ((frame[14].i) - (jint(1))))) + (30));
	}
label_29:;
	{
	LINE_NUMBER(243);
	ARRAY_ACCESS(jint, (frame[13].o), (frame[14].i)) = ((frame[14].i) - (jint(1)));
	LINE_NUMBER(245);
	if (((jint)ARRAY_ACCESS(jint, (frame[12].o), (frame[14].i))) >= (jint(1073741823))) goto label_31;
	}
	INST_ILOAD(16);
	if ((--sp)->i == 0) goto label_31;
	{
	LINE_NUMBER(246);
	ARRAY_ACCESS(jint, (frame[12].o), ((frame[11].i) + (frame[14].i))) = (((jint)ARRAY_ACCESS(jint, (frame[12].o), (frame[14].i))) + (200));
	LINE_NUMBER(247);
	ARRAY_ACCESS(jint, (frame[13].o), ((frame[11].i) + (frame[14].i))) = ((frame[14].i) - (jint(1)));
	}
label_31:;
	{
	LINE_NUMBER(251);
	if ((frame[14].i) < (jint(2))) goto label_34;
	}
	INST_ILOAD(16);
	if ((--sp)->i == 0) goto label_34;
	{
	LINE_NUMBER(252);
	frame[18].i = (jint(0));
	LINE_NUMBER(253);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[0].o), ((frame[14].i) - (jint(1))));
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[1].o)));
	if (temp0 == 0) goto label_37;
	}
	LINE_NUMBER(254);
	INST_IINC(18, 5);
label_37:;
	{
	LINE_NUMBER(257);
	frame[19].i = ((frame[14].i) - (jint(2)));
	}
label_39:;
	INST_ILOAD(19);
	if ((--sp)->i < 0) goto label_34;
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[19].i));
	frame[20].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(259);
	jint temp0 = (jint)((func_mindustry_input_BridgePlacer_positionsValid_int_int_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_input_BridgePlacer, INDEX_mindustry_input_BridgePlacer_positionsValid_int_int_int_int_R_boolean, (frame[1].o)))(ctx, (frame[1].o), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[15].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[15].o)))->F_y), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[20].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[20].o)))->F_y));
	if (temp0 != 0) goto label_42;
	}
	LINE_NUMBER(260);
	goto label_34;
label_42:;
	{
	LINE_NUMBER(263);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[4].o)))(ctx, (frame[4].o), (frame[20].o));
	if (temp0 == 0) goto label_44;
	}
	{
	LINE_NUMBER(264);
	frame[21].i = ((((jint)ARRAY_ACCESS(jint, (frame[12].o), ((frame[11].i) + (frame[19].i)))) + (200)) + (frame[18].i));
	LINE_NUMBER(265);
	if (((jint)ARRAY_ACCESS(jint, (frame[12].o), ((frame[11].i) + (frame[14].i)))) <= (frame[21].i)) goto label_47;
	}
	{
	LINE_NUMBER(266);
	ARRAY_ACCESS(jint, (frame[12].o), ((frame[11].i) + (frame[14].i))) = (frame[21].i);
	LINE_NUMBER(267);
	ARRAY_ACCESS(jint, (frame[13].o), ((frame[11].i) + (frame[14].i))) = (frame[19].i);
	}
label_47:;
	LINE_NUMBER(269);
	INST_IINC(18, 5);
label_44:;
	{
	LINE_NUMBER(257);
	INST_IINC(19, -1);
	goto label_39;
	}
label_34:;
	{
	LINE_NUMBER(274);
	if (((jint)ARRAY_ACCESS(jint, (frame[12].o), ((frame[11].i) + (frame[14].i)))) >= ((jint)ARRAY_ACCESS(jint, (frame[12].o), (frame[14].i)))) goto label_50;
	}
	{
	LINE_NUMBER(275);
	ARRAY_ACCESS(jint, (frame[12].o), (frame[14].i)) = ((jint)ARRAY_ACCESS(jint, (frame[12].o), ((frame[11].i) + (frame[14].i))));
	LINE_NUMBER(276);
	ARRAY_ACCESS(jint, (frame[13].o), (frame[14].i)) = ((jint)ARRAY_ACCESS(jint, (frame[13].o), ((frame[11].i) + (frame[14].i))));
	}
label_50:;
	{
	LINE_NUMBER(279);
	if ((frame[16].i) == 0) goto label_26;
	}
	{
	if (((jint)ARRAY_ACCESS(jint, (frame[12].o), (frame[14].i))) < (jint(1073741823))) goto label_26;
	}
	{
	LINE_NUMBER(281);
	ARRAY_ACCESS(jint, (frame[12].o), (frame[14].i)) = (jint(0));
	LINE_NUMBER(282);
	ARRAY_ACCESS(jint, (frame[12].o), ((frame[11].i) + (frame[14].i))) = (200);
	}
label_26:;
	{
	LINE_NUMBER(229);
	INST_IINC(14, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(287);
	frame[14].i = (jint(0));
	LINE_NUMBER(288);
	frame[15].i = ((frame[11].i) - (jint(1)));
	}
label_56:;
	INST_ILOAD(15);
	if ((--sp)->i < 0) goto label_57;
	{
	LINE_NUMBER(289);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[15].i));
	frame[16].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(290);
	frame[17].i = ((jint)ARRAY_ACCESS(jint, (frame[13].o), ((frame[14].i) + (frame[15].i))));
	LINE_NUMBER(292);
	if ((frame[17].i) == (jint(-1))) goto label_61;
	}
	{
	if ((frame[17].i) != ((frame[15].i) - (jint(1)))) goto label_62;
	}
label_61:;
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[5].o), (frame[16].o));
	LINE_NUMBER(295);
	frame[14].i = (jint(0));
	LINE_NUMBER(296);
	INST_IINC(15, -1);
	goto label_65;
	}
label_62:;
	{
	LINE_NUMBER(299);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[17].i));
	frame[18].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(300);
	((func_mindustry_input_BridgePlacer_applyToPlans_mindustry_entities_units_BuildPlan_mindustry_entities_units_BuildPlan) resolveInterfaceMethod(ctx, &class_mindustry_input_BridgePlacer, INDEX_mindustry_input_BridgePlacer_applyToPlans_mindustry_entities_units_BuildPlan_mindustry_entities_units_BuildPlan, (frame[1].o)))(ctx, (frame[1].o), (frame[16].o), (frame[18].o));
	LINE_NUMBER(301);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[5].o), (frame[16].o));
	LINE_NUMBER(302);
	frame[15].i = (frame[17].i);
	LINE_NUMBER(303);
	frame[14].i = (frame[11].i);
	}
label_65:;
	LINE_NUMBER(305);
	goto label_56;
label_57:;
	{
	LINE_NUMBER(307);
	sp[0].o = (jobject)((func_arc_struct_Seq_reverse_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_reverse_R_arc_struct_Seq])(ctx, (frame[5].o));
	LINE_NUMBER(308);
	((func_arc_struct_Seq_set_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_set_arc_struct_Seq])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(309);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_Placement_calculateBridges_arc_struct_Seq_mindustry_world_blocks_distribution_ItemBridge_boolean_arc_func_Boolf(jcontext ctx, jobject param0, jobject param1, jbool param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/Placement:calculateBridges", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_Placement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(312);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_ItemBridgePlacer(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_input_ItemBridgePlacer);
	init_mindustry_input_ItemBridgePlacer_mindustry_world_blocks_distribution_ItemBridge(ctx, sp[1].o, (frame[1].o));
	SM_mindustry_input_Placement_calculateBridges_arc_struct_Seq_mindustry_input_BridgePlacer_boolean_arc_func_Boolf(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].o));
	LINE_NUMBER(313);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_Placement_calculateBridges_arc_struct_Seq_mindustry_world_blocks_distribution_DirectionBridge_boolean_arc_func_Boolf(jcontext ctx, jobject param0, jobject param1, jbool param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/Placement:calculateBridges", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_Placement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(316);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_DirectionBridgePlacer(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_input_DirectionBridgePlacer);
	init_mindustry_input_DirectionBridgePlacer_mindustry_world_blocks_distribution_DirectionBridge(ctx, sp[1].o, (frame[1].o));
	SM_mindustry_input_Placement_calculateBridges_arc_struct_Seq_mindustry_input_BridgePlacer_boolean_arc_func_Boolf(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].o));
	LINE_NUMBER(317);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_input_Placement_tileHeuristic_mindustry_world_Tile_mindustry_world_Tile_R_float(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/Placement:tileHeuristic", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_Placement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(320);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_block;
	frame[2].o = sp[0].o;
	LINE_NUMBER(322);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_alwaysReplace) != 0) goto label_2;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_3;
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_isDeep_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_isDeep_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(323);
	popStackFrame(ctx);
	return (jfloat(20.0f));
	}
label_4:;
	{
	LINE_NUMBER(325);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_parents;
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_arc_struct_IntIntMap_containsKey_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntIntMap_containsKey_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 == 0) goto label_5;
	}
	{
	LINE_NUMBER(326);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	clinit_mindustry_input_Placement(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Placement_parents;
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_arc_struct_IntIntMap_get_int_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_IntIntMap_get_int_int_R_int])(ctx, sp[1].o, temp0, (jint(0)));
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp1);
	frame[3].o = sp[0].o;
	LINE_NUMBER(327);
	jint temp2 = (jint)((func_mindustry_world_Tile_relativeTo_mindustry_world_Tile_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_relativeTo_mindustry_world_Tile_R_byte])(ctx, (frame[0].o), (frame[3].o));
	jint temp3 = (jint)((func_mindustry_world_Tile_relativeTo_mindustry_world_Tile_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_relativeTo_mindustry_world_Tile_R_byte])(ctx, (frame[1].o), (frame[0].o));
	if (temp2 == temp3) goto label_5;
	}
	{
	LINE_NUMBER(328);
	popStackFrame(ctx);
	return (jfloat(8.0f));
	}
label_5:;
	{
	LINE_NUMBER(332);
	popStackFrame(ctx);
	return (jfloat(1));
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_input_Placement_distanceHeuristic_int_int_int_int_R_float(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/Placement:distanceHeuristic", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_Placement(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(336);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[0].i) - (frame[2].i)));
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[1].i) - (frame[3].i)));
	popStackFrame(ctx);
	return (jfloat((temp0 + temp1)));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_input_Placement_validNode_mindustry_world_Tile_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/Placement:validNode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_Placement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(340);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_block;
	frame[2].o = sp[0].o;
	LINE_NUMBER(341);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(342);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(344);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_alwaysReplace);
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_input_Placement_astar_int_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[23];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/Placement:astar", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_Placement(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(349);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[0].i), (frame[1].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(350);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[2].i), (frame[3].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(351);
	if ((frame[4].o) == (frame[5].o)) goto label_3;
	}
	INST_ALOAD(4);
	if ((--sp)->o == nullptr) goto label_3;
	INST_ALOAD(5);
	if ((--sp)->o != nullptr) goto label_4;
label_3:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(353);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_costs;
	((func_arc_struct_IntFloatMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntFloatMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(354);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_closed;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(355);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_parents;
	((func_arc_struct_IntIntMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntIntMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(357);
	frame[6].i = (1000);
	LINE_NUMBER(358);
	frame[7].i = (jint(0));
	LINE_NUMBER(360);
	clinit_arc_struct_PQueue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_PQueue);
	jint temp0 = 10;
	{ /* InvokeDynamic */
		clinit_mindustry_input_Placement_invoke_java_util_Comparator_1(ctx);
		auto proxy = (mindustry_input_Placement_invoke_java_util_Comparator_1 *) gcAlloc(ctx, &class_mindustry_input_Placement_invoke_java_util_Comparator_1);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	init_arc_struct_PQueue_int_java_util_Comparator(ctx, sp[0].o, temp0, sp[1].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(361);
	jint temp1 = (jint)((func_arc_struct_PQueue_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_PQueue_add_java_lang_Object_R_boolean])(ctx, (frame[8].o), (frame[4].o));
	LINE_NUMBER(362);
	frame[9].i = (jint(0));
	}
label_12:;
	{
	LINE_NUMBER(363);
	jint temp0 = (jint)((func_arc_struct_PQueue_empty_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_PQueue_empty_R_boolean])(ctx, (frame[8].o));
	if (temp0 != 0) goto label_13;
	}
	{
	jint temp0 = frame[7].i;
	INST_IINC(7, 1);
	if (temp0 >= (frame[6].i)) goto label_13;
	}
	{
	LINE_NUMBER(364);
	sp[0].o = (jobject)((func_arc_struct_PQueue_poll_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_PQueue_poll_R_java_lang_Object])(ctx, (frame[8].o));
	frame[10].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(365);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_costs;
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[10].o));
	jfloat temp1 = (jfloat)((func_arc_struct_IntFloatMap_get_int_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntFloatMap_get_int_float_R_float])(ctx, sp[0].o, temp0, (jfloat(0)));
	frame[11].f = temp1;
	LINE_NUMBER(366);
	if ((frame[10].o) != (frame[5].o)) goto label_17;
	}
	{
	LINE_NUMBER(367);
	frame[9].i = (jint(1));
	LINE_NUMBER(368);
	goto label_13;
	}
label_17:;
	{
	LINE_NUMBER(370);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_closed;
	jint temp0 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[10].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[10].o)))->F_y));
	jint temp1 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp0);
	LINE_NUMBER(371);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[12].o = sp[0].o;
	frame[13].i = (((jarray) nullCheck(ctx, (frame[12].o)))->length);
	frame[14].i = (jint(0));
	}
label_21:;
	{
	if ((frame[14].i) >= (frame[13].i)) goto label_22;
	}
	{
	frame[15].o = ((jobject)ARRAY_ACCESS(jobject, (frame[12].o), (frame[14].i)));
	LINE_NUMBER(372);
	frame[16].i = (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[10].o)))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[15].o)))->F_x));
	frame[17].i = (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[10].o)))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[15].o)))->F_y));
	LINE_NUMBER(373);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[16].i), (frame[17].i));
	frame[18].o = sp[0].o;
	LINE_NUMBER(374);
	if ((frame[18].o) == nullptr) goto label_27;
	}
	{
	jint temp0 = (jint)SM_mindustry_input_Placement_validNode_mindustry_world_Tile_mindustry_world_Tile_R_boolean(ctx, (frame[10].o), (frame[18].o));
	if (temp0 == 0) goto label_27;
	}
	{
	LINE_NUMBER(375);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_closed;
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[18].o));
	jint temp1 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 == 0) goto label_27;
	}
	{
	LINE_NUMBER(376);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_parents;
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[18].o));
	jint temp1 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[10].o));
	((func_arc_struct_IntIntMap_put_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntIntMap_put_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(377);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_costs;
	jint temp2 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[18].o));
	jfloat temp3 = (jfloat)SM_mindustry_input_Placement_tileHeuristic_mindustry_world_Tile_mindustry_world_Tile_R_float(ctx, (frame[10].o), (frame[18].o));
	((func_arc_struct_IntFloatMap_put_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntFloatMap_put_int_float])(ctx, sp[0].o, temp2, (temp3 + (frame[11].f)));
	LINE_NUMBER(378);
	jint temp4 = (jint)((func_arc_struct_PQueue_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_PQueue_add_java_lang_Object_R_boolean])(ctx, (frame[8].o), (frame[18].o));
	}
label_27:;
	{
	LINE_NUMBER(371);
	INST_IINC(14, 1);
	goto label_21;
	}
label_22:;
	LINE_NUMBER(382);
	goto label_12;
label_13:;
	{
	LINE_NUMBER(384);
	if ((frame[9].i) != 0) goto label_32;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_32:;
	{
	LINE_NUMBER(385);
	frame[10].i = (jint(0));
	LINE_NUMBER(387);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_points;
	sp[1].o = ((jobject) &class_arc_math_geom_Point2);
	{ /* InvokeDynamic */
		clinit_mindustry_input_Placement_invoke_arc_func_Prov_14(ctx);
		auto proxy = (mindustry_input_Placement_invoke_arc_func_Prov_14 *) gcAlloc(ctx, &class_mindustry_input_Placement_invoke_arc_func_Prov_14);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_math_geom_Point2, sp[1].o)))->vtable)[VTABLE_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2])(ctx, (checkCast(ctx, &class_arc_math_geom_Point2, sp[1].o)), (frame[2].i), (frame[3].i));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(389);
	frame[11].o = (frame[5].o);
	}
label_35:;
	{
	LINE_NUMBER(390);
	if ((frame[11].o) == (frame[4].o)) goto label_36;
	}
	{
	jint temp0 = frame[10].i;
	INST_IINC(10, 1);
	if (temp0 >= (frame[6].i)) goto label_36;
	}
	{
	LINE_NUMBER(391);
	if ((frame[11].o) != nullptr) goto label_38;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_38:;
	{
	LINE_NUMBER(392);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_parents;
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[11].o));
	jint temp1 = (jint)((func_arc_struct_IntIntMap_get_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntIntMap_get_int_int_R_int])(ctx, sp[0].o, temp0, (jint(-1)));
	frame[12].i = temp1;
	LINE_NUMBER(394);
	if ((frame[12].i) != (jint(-1))) goto label_40;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_40:;
	{
	LINE_NUMBER(396);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_points;
	sp[1].o = ((jobject) &class_arc_math_geom_Point2);
	{ /* InvokeDynamic */
		clinit_mindustry_input_Placement_invoke_arc_func_Prov_15(ctx);
		auto proxy = (mindustry_input_Placement_invoke_arc_func_Prov_15 *) gcAlloc(ctx, &class_mindustry_input_Placement_invoke_arc_func_Prov_15);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[1].o, sp[2].o);
	sp[1].o = checkCast(ctx, &class_arc_math_geom_Point2, sp[1].o);
	jint temp0 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, (frame[12].i));
	jint temp1 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, (frame[12].i));
	sp[1].o = (jobject)((func_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2])(ctx, sp[1].o, temp0, temp1);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(397);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[12].i));
	frame[11].o = sp[0].o;
	LINE_NUMBER(398);
	goto label_35;
	}
label_36:;
	{
	LINE_NUMBER(400);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_points;
	sp[0].o = (jobject)((func_arc_struct_Seq_reverse_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_reverse_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(402);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_input_Placement_normalizeDrawArea_mindustry_world_Block_int_int_int_int_boolean_int_float_R_mindustry_input_Placement$NormalizeDrawResult(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jbool param5, jint param6, jfloat param7) {
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/Placement:normalizeDrawArea", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_Placement(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].f = param7;
	{
	LINE_NUMBER(417);
	sp[0].o = (jobject)SM_mindustry_input_Placement_normalizeArea_int_int_int_int_int_boolean_int_R_mindustry_input_Placement$NormalizeResult(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (jint(0)), (frame[5].i), (frame[6].i));
	LINE_NUMBER(419);
	frame[8].f = ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset);
	LINE_NUMBER(421);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_drawResult;
	clinit_mindustry_input_Placement(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Placement_result;
	((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK(sp[0].o))->F_x = (jfloat((((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK(sp[1].o))->F_x) * (8))));
	LINE_NUMBER(422);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_drawResult;
	clinit_mindustry_input_Placement(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Placement_result;
	((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK(sp[0].o))->F_y = (jfloat((((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK(sp[1].o))->F_y) * (8))));
	LINE_NUMBER(423);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_drawResult;
	clinit_mindustry_input_Placement(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Placement_result;
	((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK(sp[0].o))->F_x2 = (jfloat((((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK(sp[1].o))->F_x2) * (8))));
	LINE_NUMBER(424);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_drawResult;
	clinit_mindustry_input_Placement(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Placement_result;
	((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK(sp[0].o))->F_y2 = (jfloat((((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK(sp[1].o))->F_y2) * (8))));
	LINE_NUMBER(426);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_drawResult;
	((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK(sp[0].o))->F_x) - ((((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size))) * (frame[7].f)) * (jfloat(8.0f))) / (jfloat(2))));
	LINE_NUMBER(427);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_drawResult;
	((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK(sp[0].o))->F_x2 = (((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK(sp[0].o))->F_x2) + ((((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size))) * (frame[7].f)) * (jfloat(8.0f))) / (jfloat(2))));
	LINE_NUMBER(430);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_drawResult;
	((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK(sp[0].o))->F_y) - ((((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size))) * (frame[7].f)) * (jfloat(8.0f))) / (jfloat(2))));
	LINE_NUMBER(431);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_drawResult;
	((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK(sp[0].o))->F_y2 = (((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK(sp[0].o))->F_y2) + ((((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size))) * (frame[7].f)) * (jfloat(8.0f))) / (jfloat(2))));
	LINE_NUMBER(433);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_drawResult;
	((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK(sp[0].o))->F_x) + (frame[8].f));
	LINE_NUMBER(434);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_drawResult;
	((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK(sp[0].o))->F_y) + (frame[8].f));
	LINE_NUMBER(435);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_drawResult;
	((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK(sp[0].o))->F_x2 = (((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK(sp[0].o))->F_x2) + (frame[8].f));
	LINE_NUMBER(436);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_drawResult;
	((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK(sp[0].o))->F_y2 = (((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK(sp[0].o))->F_y2) + (frame[8].f));
	LINE_NUMBER(438);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_drawResult;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_input_Placement_normalizeArea_int_int_int_int_int_boolean_int_R_mindustry_input_Placement$NormalizeResult(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jbool param5, jint param6) {
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/Placement:normalizeArea", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_Placement(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(453);
	if ((frame[5].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(454);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[0].i) - (frame[2].i)));
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[1].i) - (frame[3].i)));
	if (temp0 <= temp1) goto label_3;
	}
	{
	LINE_NUMBER(455);
	frame[3].i = (frame[1].i);
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(457);
	frame[2].i = (frame[0].i);
	}
label_1:;
	{
	LINE_NUMBER(461);
	if ((frame[6].i) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(462);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[2].i) - (frame[0].i)));
	if (temp0 <= (frame[6].i)) goto label_7;
	}
	{
	LINE_NUMBER(463);
	jint temp0 = (jint)SM_arc_math_Mathf_sign_float_R_int(ctx, (jfloat(((frame[2].i) - (frame[0].i)))));
	frame[2].i = ((temp0 * (frame[6].i)) + (frame[0].i));
	}
label_7:;
	{
	LINE_NUMBER(466);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[3].i) - (frame[1].i)));
	if (temp0 <= (frame[6].i)) goto label_5;
	}
	{
	LINE_NUMBER(467);
	jint temp0 = (jint)SM_arc_math_Mathf_sign_float_R_int(ctx, (jfloat(((frame[3].i) - (frame[1].i)))));
	frame[3].i = ((temp0 * (frame[6].i)) + (frame[1].i));
	}
label_5:;
	{
	LINE_NUMBER(471);
	frame[7].i = ((frame[2].i) - (frame[0].i));
	frame[8].i = ((frame[3].i) - (frame[1].i));
	LINE_NUMBER(473);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (frame[7].i));
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (frame[8].i));
	if (temp0 <= temp1) goto label_12;
	}
	{
	LINE_NUMBER(474);
	if ((frame[7].i) < 0) goto label_14;
	}
	{
	LINE_NUMBER(475);
	frame[4].i = (jint(0));
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(477);
	frame[4].i = (jint(2));
	goto label_16;
	}
label_12:;
	{
	LINE_NUMBER(479);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (frame[7].i));
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (frame[8].i));
	if (temp0 >= temp1) goto label_16;
	}
	{
	LINE_NUMBER(480);
	if ((frame[8].i) < 0) goto label_18;
	}
	{
	LINE_NUMBER(481);
	frame[4].i = (jint(1));
	goto label_16;
	}
label_18:;
	{
	LINE_NUMBER(483);
	frame[4].i = (jint(3));
	}
label_16:;
	{
	LINE_NUMBER(487);
	if ((frame[2].i) >= (frame[0].i)) goto label_20;
	}
	{
	LINE_NUMBER(488);
	frame[9].i = (frame[2].i);
	LINE_NUMBER(489);
	frame[2].i = (frame[0].i);
	LINE_NUMBER(490);
	frame[0].i = (frame[9].i);
	}
label_20:;
	{
	LINE_NUMBER(492);
	if ((frame[3].i) >= (frame[1].i)) goto label_24;
	}
	{
	LINE_NUMBER(493);
	frame[9].i = (frame[3].i);
	LINE_NUMBER(494);
	frame[3].i = (frame[1].i);
	LINE_NUMBER(495);
	frame[1].i = (frame[9].i);
	}
label_24:;
	{
	LINE_NUMBER(498);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_result;
	((mindustry_input_Placement$NormalizeResult *) NULL_CHECK(sp[0].o))->F_x2 = (frame[2].i);
	LINE_NUMBER(499);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_result;
	((mindustry_input_Placement$NormalizeResult *) NULL_CHECK(sp[0].o))->F_y2 = (frame[3].i);
	LINE_NUMBER(500);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_result;
	((mindustry_input_Placement$NormalizeResult *) NULL_CHECK(sp[0].o))->F_x = (frame[0].i);
	LINE_NUMBER(501);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_result;
	((mindustry_input_Placement$NormalizeResult *) NULL_CHECK(sp[0].o))->F_y = (frame[1].i);
	LINE_NUMBER(502);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_result;
	((mindustry_input_Placement$NormalizeResult *) NULL_CHECK(sp[0].o))->F_rotation = (frame[4].i);
	LINE_NUMBER(504);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_result;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_input_Placement_lambda$astar$0_mindustry_world_Tile_mindustry_world_Tile_mindustry_world_Tile_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/Placement:lambda$astar$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_Placement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(360);
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_costs;
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_struct_IntFloatMap_get_int_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntFloatMap_get_int_float_R_float])(ctx, sp[0].o, temp0, (jfloat(0)));
	jfloat temp2 = (jfloat)SM_mindustry_input_Placement_distanceHeuristic_int_int_int_int_R_float(ctx, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y));
	jfloat temp3 = temp1 + temp2;
	clinit_mindustry_input_Placement(ctx);
	sp[0].o = (jobject)SF_mindustry_input_Placement_costs;
	jint temp4 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[2].o));
	jfloat temp5 = (jfloat)((func_arc_struct_IntFloatMap_get_int_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntFloatMap_get_int_float_R_float])(ctx, sp[0].o, temp4, (jfloat(0)));
	jfloat temp6 = (jfloat)SM_mindustry_input_Placement_distanceHeuristic_int_int_int_int_R_float(ctx, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_y), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y));
	jint temp7 = (jint)SM_java_lang_Float_compare_float_float_R_int(ctx, temp3, (temp5 + temp6));
	popStackFrame(ctx);
	return temp7;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_input_Placement_lambda$smartCalculateBridges$0_arc_struct_Seq_arc_func_Boolf_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/Placement:lambda$smartCalculateBridges$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_Placement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(209);
	sp[0].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_entities_units_BuildPlan_placeable_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_placeable_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[2].o));
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	{
	sp[0].o = frame[2].o;
	sp[1].o = frame[0].o;
	LINE_NUMBER(210);
	sp[1].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_build_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_build_R_mindustry_gen_Building])(ctx, (frame[2].o));
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_build_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_build_R_mindustry_gen_Building])(ctx, (frame[2].o));
	if (((jint)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_rotation) == ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_rotation)) goto label_4;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
label_4:;
	INST_ICONST(1);
	goto label_5;
label_2:;
	INST_ICONST(0);
label_5:;
	LINE_NUMBER(209);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_input_Placement_lambda$calculateBridges$0_mindustry_world_Block_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/Placement:lambda$calculateBridges$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_Placement(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_input_Placement_lambda$calculateNodes$0_arc_struct_Seq_mindustry_world_Block_int_arc_math_geom_Point2_R_boolean(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/Placement:lambda$calculateNodes$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_Placement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(156);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_R_boolean(ctx, sp[0].o, sp[1].o, ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[3].o)))->F_x), ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[3].o)))->F_y), (frame[2].i));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_input_Placement(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/Placement:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_Placement(ctx);
	{
	LINE_NUMBER(75);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_input_Placement(ctx);
	SF_mindustry_input_Placement_plans1 = sp[0].o;
	LINE_NUMBER(76);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_input_Placement(ctx);
	SF_mindustry_input_Placement_tmpPoints = sp[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_input_Placement(ctx);
	SF_mindustry_input_Placement_tmpPoints2 = sp[0].o;
	LINE_NUMBER(77);
	clinit_mindustry_input_Placement$NormalizeResult(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_input_Placement$NormalizeResult);
	init_mindustry_input_Placement$NormalizeResult(ctx, sp[0].o);
	clinit_mindustry_input_Placement(ctx);
	SF_mindustry_input_Placement_result = sp[0].o;
	LINE_NUMBER(78);
	clinit_mindustry_input_Placement$NormalizeDrawResult(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_input_Placement$NormalizeDrawResult);
	init_mindustry_input_Placement$NormalizeDrawResult(ctx, sp[0].o);
	clinit_mindustry_input_Placement(ctx);
	SF_mindustry_input_Placement_drawResult = sp[0].o;
	LINE_NUMBER(79);
	clinit_arc_math_geom_Bresenham2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Bresenham2);
	init_arc_math_geom_Bresenham2(ctx, sp[0].o);
	clinit_mindustry_input_Placement(ctx);
	SF_mindustry_input_Placement_bres = sp[0].o;
	LINE_NUMBER(80);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_input_Placement(ctx);
	SF_mindustry_input_Placement_points = sp[0].o;
	LINE_NUMBER(81);
	clinit_arc_struct_IntSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[0].o);
	clinit_mindustry_input_Placement(ctx);
	SF_mindustry_input_Placement_tmpInts = sp[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[0].o);
	clinit_mindustry_input_Placement(ctx);
	SF_mindustry_input_Placement_tmpInts2 = sp[0].o;
	LINE_NUMBER(84);
	clinit_arc_struct_IntFloatMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntFloatMap);
	init_arc_struct_IntFloatMap(ctx, sp[0].o);
	clinit_mindustry_input_Placement(ctx);
	SF_mindustry_input_Placement_costs = sp[0].o;
	LINE_NUMBER(85);
	clinit_arc_struct_IntIntMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntIntMap);
	init_arc_struct_IntIntMap(ctx, sp[0].o);
	clinit_mindustry_input_Placement(ctx);
	SF_mindustry_input_Placement_parents = sp[0].o;
	LINE_NUMBER(86);
	clinit_arc_struct_IntSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[0].o);
	clinit_mindustry_input_Placement(ctx);
	SF_mindustry_input_Placement_closed = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_input_Placement[] {
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

static jclass innerClasses[] {
	&class_mindustry_input_Placement$NormalizeResult,
	&class_mindustry_input_Placement$NormalizeDrawResult,
};

static FieldMetadata fields[] {
	{ "plans1", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_input_Placement_plans1, "Larc/struct/Seq;", 26 },
	{ "tmpPoints", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_input_Placement_tmpPoints, "Larc/struct/Seq;", 26 },
	{ "tmpPoints2", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_input_Placement_tmpPoints2, "Larc/struct/Seq;", 26 },
	{ "result", &class_mindustry_input_Placement$NormalizeResult, (intptr_t) &SF_mindustry_input_Placement_result, "Lmindustry/input/Placement$NormalizeResult;", 26 },
	{ "drawResult", &class_mindustry_input_Placement$NormalizeDrawResult, (intptr_t) &SF_mindustry_input_Placement_drawResult, "Lmindustry/input/Placement$NormalizeDrawResult;", 26 },
	{ "bres", &class_arc_math_geom_Bresenham2, (intptr_t) &SF_mindustry_input_Placement_bres, "Larc/math/geom/Bresenham2;", 26 },
	{ "points", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_input_Placement_points, "Larc/struct/Seq;", 26 },
	{ "tmpInts", &class_arc_struct_IntSeq, (intptr_t) &SF_mindustry_input_Placement_tmpInts, "Larc/struct/IntSeq;", 26 },
	{ "tmpInts2", &class_arc_struct_IntSeq, (intptr_t) &SF_mindustry_input_Placement_tmpInts2, "Larc/struct/IntSeq;", 26 },
	{ "costs", &class_arc_struct_IntFloatMap, (intptr_t) &SF_mindustry_input_Placement_costs, "Larc/struct/IntFloatMap;", 26 },
	{ "parents", &class_arc_struct_IntIntMap, (intptr_t) &SF_mindustry_input_Placement_parents, "Larc/struct/IntIntMap;", 26 },
	{ "closed", &class_arc_struct_IntSet, (intptr_t) &SF_mindustry_input_Placement_closed, "Larc/struct/IntSet;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_input_Placement, 0, "()V", 1 },
	{ "pathfindLine", (intptr_t) SM_mindustry_input_Placement_pathfindLine_boolean_int_int_int_int_R_arc_struct_Seq, 0, "(ZIIII)Larc/struct/Seq;", 9 },
	{ "normalizeLine", (intptr_t) SM_mindustry_input_Placement_normalizeLine_int_int_int_int_R_arc_struct_Seq, 0, "(IIII)Larc/struct/Seq;", 9 },
	{ "normalizeRectangle", (intptr_t) SM_mindustry_input_Placement_normalizeRectangle_int_int_int_int_int_R_arc_struct_Seq, 0, "(IIIII)Larc/struct/Seq;", 9 },
	{ "upgradeLine", (intptr_t) SM_mindustry_input_Placement_upgradeLine_int_int_int_int_R_arc_struct_Seq, 0, "(IIII)Larc/struct/Seq;", 9 },
	{ "calculateNodes", (intptr_t) SM_mindustry_input_Placement_calculateNodes_arc_struct_Seq_mindustry_world_Block_int_arc_func_Boolf2, 0, "(Larc/struct/Seq;Lmindustry/world/Block;ILarc/func/Boolf2;)V", 9 },
	{ "isSidePlace", (intptr_t) SM_mindustry_input_Placement_isSidePlace_arc_struct_Seq_R_boolean, 0, "(Larc/struct/Seq;)Z", 9 },
	{ "calculateBridges", (intptr_t) SM_mindustry_input_Placement_calculateBridges_arc_struct_Seq_mindustry_world_blocks_distribution_ItemBridge, 0, "(Larc/struct/Seq;Lmindustry/world/blocks/distribution/ItemBridge;)V", 9 },
	{ "calculateBridges", (intptr_t) SM_mindustry_input_Placement_calculateBridges_arc_struct_Seq_mindustry_input_BridgePlacer_boolean_arc_func_Boolf, 0, "(Larc/struct/Seq;Lmindustry/input/BridgePlacer;ZLarc/func/Boolf;)V", 10 },
	{ "smartCalculateBridges", (intptr_t) SM_mindustry_input_Placement_smartCalculateBridges_arc_struct_Seq_mindustry_input_BridgePlacer_boolean_arc_func_Boolf, 0, "(Larc/struct/Seq;Lmindustry/input/BridgePlacer;ZLarc/func/Boolf;)V", 10 },
	{ "calculateBridges", (intptr_t) SM_mindustry_input_Placement_calculateBridges_arc_struct_Seq_mindustry_world_blocks_distribution_ItemBridge_boolean_arc_func_Boolf, 0, "(Larc/struct/Seq;Lmindustry/world/blocks/distribution/ItemBridge;ZLarc/func/Boolf;)V", 9 },
	{ "calculateBridges", (intptr_t) SM_mindustry_input_Placement_calculateBridges_arc_struct_Seq_mindustry_world_blocks_distribution_DirectionBridge_boolean_arc_func_Boolf, 0, "(Larc/struct/Seq;Lmindustry/world/blocks/distribution/DirectionBridge;ZLarc/func/Boolf;)V", 9 },
	{ "tileHeuristic", (intptr_t) SM_mindustry_input_Placement_tileHeuristic_mindustry_world_Tile_mindustry_world_Tile_R_float, 0, "(Lmindustry/world/Tile;Lmindustry/world/Tile;)F", 10 },
	{ "distanceHeuristic", (intptr_t) SM_mindustry_input_Placement_distanceHeuristic_int_int_int_int_R_float, 0, "(IIII)F", 10 },
	{ "validNode", (intptr_t) SM_mindustry_input_Placement_validNode_mindustry_world_Tile_mindustry_world_Tile_R_boolean, 0, "(Lmindustry/world/Tile;Lmindustry/world/Tile;)Z", 10 },
	{ "astar", (intptr_t) SM_mindustry_input_Placement_astar_int_int_int_int_R_boolean, 0, "(IIII)Z", 10 },
	{ "normalizeDrawArea", (intptr_t) SM_mindustry_input_Placement_normalizeDrawArea_mindustry_world_Block_int_int_int_int_boolean_int_float_R_mindustry_input_Placement$NormalizeDrawResult, 0, "(Lmindustry/world/Block;IIIIZIF)Lmindustry/input/Placement$NormalizeDrawResult;", 9 },
	{ "normalizeArea", (intptr_t) SM_mindustry_input_Placement_normalizeArea_int_int_int_int_int_boolean_int_R_mindustry_input_Placement$NormalizeResult, 0, "(IIIIIZI)Lmindustry/input/Placement$NormalizeResult;", 9 },
	{ "lambda$astar$0", (intptr_t) SM_mindustry_input_Placement_lambda$astar$0_mindustry_world_Tile_mindustry_world_Tile_mindustry_world_Tile_R_int, 0, "(Lmindustry/world/Tile;Lmindustry/world/Tile;Lmindustry/world/Tile;)I", 4106 },
	{ "lambda$smartCalculateBridges$0", (intptr_t) SM_mindustry_input_Placement_lambda$smartCalculateBridges$0_arc_struct_Seq_arc_func_Boolf_mindustry_entities_units_BuildPlan_R_boolean, 0, "(Larc/struct/Seq;Larc/func/Boolf;Lmindustry/entities/units/BuildPlan;)Z", 4106 },
	{ "lambda$calculateBridges$0", (intptr_t) SM_mindustry_input_Placement_lambda$calculateBridges$0_mindustry_world_Block_R_boolean, 0, "(Lmindustry/world/Block;)Z", 4106 },
	{ "lambda$calculateNodes$0", (intptr_t) SM_mindustry_input_Placement_lambda$calculateNodes$0_arc_struct_Seq_mindustry_world_Block_int_arc_math_geom_Point2_R_boolean, 0, "(Larc/struct/Seq;Lmindustry/world/Block;ILarc/math/geom/Point2;)Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_input_Placement, 0, "()V", 8 },
};

Class class_mindustry_input_Placement{
		.nativeName = (intptr_t) "mindustry/input/Placement",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_input_Placement),
		.classVtable = (intptr_t) vtable_mindustry_input_Placement,
		.staticInitializer = (intptr_t) clinit_mindustry_input_Placement,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_input_Placement,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 23,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_input_Placement = registerClass(&class_mindustry_input_Placement);

}
