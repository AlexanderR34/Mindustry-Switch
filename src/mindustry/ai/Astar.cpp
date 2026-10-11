#include "mindustry/ai/Astar.h"
#include "mindustry/ai/Astar_invoke_arc_func_Floatf_1.h"
#include "java/lang/Math.h"
#include "arc/struct/GridBits.h"
#include "arc/func/Floatf.h"
#include "arc/struct/PQueue.h"
#include "arc/util/Structs.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/ai/Astar_TileHeuristic.h"
#include "mindustry/world/Tiles.h"
#include "mindustry/ai/Astar_invoke_mindustry_ai_Astar_DistanceHeuristic_1.h"
#include "mindustry/ai/Astar.h"
#include "java/lang/Object.h"
#include "mindustry/ai/Astar_invoke_java_util_Comparator_1.h"
#include "java/util/Arrays.h"
#include "java/util/Comparator.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/Tile.h"
#include "mindustry/ai/Astar_DistanceHeuristic.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "arc/func/Boolf.h"
#include "arc/math/geom/Geometry.h"

extern "C" {

jobject SF_mindustry_ai_Astar_manhattan;
jobject SF_mindustry_ai_Astar_out;
jobject SF_mindustry_ai_Astar_queue;
jobject SF_mindustry_ai_Astar_costs;
jobject SF_mindustry_ai_Astar_rotations;

void mark_mindustry_ai_Astar(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ai_Astar_manhattan)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_Astar_manhattan)->clazz)->markFunction)((jobject) SF_mindustry_ai_Astar_manhattan, mark, depth + 1);
		if (SF_mindustry_ai_Astar_out)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_Astar_out)->clazz)->markFunction)((jobject) SF_mindustry_ai_Astar_out, mark, depth + 1);
		if (SF_mindustry_ai_Astar_queue)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_Astar_queue)->clazz)->markFunction)((jobject) SF_mindustry_ai_Astar_queue, mark, depth + 1);
		if (SF_mindustry_ai_Astar_costs)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_Astar_costs)->clazz)->markFunction)((jobject) SF_mindustry_ai_Astar_costs, mark, depth + 1);
		if (SF_mindustry_ai_Astar_rotations)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_Astar_rotations)->clazz)->markFunction)((jobject) SF_mindustry_ai_Astar_rotations, mark, depth + 1);
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
	auto self = (mindustry_ai_Astar *) object;
}

void init_mindustry_ai_Astar(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Astar:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_Astar(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ai_Astar_pathfind_mindustry_world_Tile_mindustry_world_Tile_mindustry_ai_Astar$TileHeuristic_arc_func_Boolf_R_arc_struct_Seq(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Astar:pathfind", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_Astar(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(22);
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp2 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp3 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y;
	sp[0].o = frame[2].o;
	clinit_mindustry_ai_Astar(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_Astar_manhattan;
	sp[0].o = (jobject)SM_mindustry_ai_Astar_pathfind_int_int_int_int_mindustry_ai_Astar$TileHeuristic_mindustry_ai_Astar$DistanceHeuristic_arc_func_Boolf_R_arc_struct_Seq(ctx, temp0, temp1, temp2, temp3, sp[0].o, sp[1].o, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ai_Astar_pathfind_int_int_int_int_mindustry_ai_Astar$TileHeuristic_arc_func_Boolf_R_arc_struct_Seq(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4, jobject param5) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Astar:pathfind", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_Astar(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(26);
	jint temp0 = frame[0].i;
	jint temp1 = frame[1].i;
	jint temp2 = frame[2].i;
	jint temp3 = frame[3].i;
	sp[0].o = frame[4].o;
	clinit_mindustry_ai_Astar(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_Astar_manhattan;
	sp[0].o = (jobject)SM_mindustry_ai_Astar_pathfind_int_int_int_int_mindustry_ai_Astar$TileHeuristic_mindustry_ai_Astar$DistanceHeuristic_arc_func_Boolf_R_arc_struct_Seq(ctx, temp0, temp1, temp2, temp3, sp[0].o, sp[1].o, (frame[5].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ai_Astar_pathfind_int_int_int_int_mindustry_ai_Astar$TileHeuristic_mindustry_ai_Astar$DistanceHeuristic_arc_func_Boolf_R_arc_struct_Seq(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4, jobject param5, jobject param6) {
	jtype frame[27];
	auto stack = &frame[22];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Astar:pathfind", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_Astar(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(30);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	frame[7].o = sp[0].o;
	LINE_NUMBER(32);
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, (frame[7].o), (frame[0].i), (frame[1].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(33);
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, (frame[7].o), (frame[2].i), (frame[3].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(35);
	clinit_arc_struct_GridBits(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_GridBits);
	init_arc_struct_GridBits_int_int(ctx, sp[0].o, ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[7].o)))->F_width), ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[7].o)))->F_height));
	frame[10].o = sp[0].o;
	LINE_NUMBER(37);
	clinit_mindustry_ai_Astar(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_Astar_costs;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	clinit_mindustry_ai_Astar(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_Astar_costs;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == (((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[7].o)))->F_width) * ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[7].o)))->F_height))) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject) createArray(ctx, &class_float, (((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[7].o)))->F_width) * ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[7].o)))->F_height)));
	clinit_mindustry_ai_Astar(ctx);
	SF_mindustry_ai_Astar_costs = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(41);
	clinit_mindustry_ai_Astar(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_Astar_costs;
	SM_java_util_Arrays_fill_Array1_float_float(ctx, sp[0].o, (jfloat(0)));
	LINE_NUMBER(43);
	clinit_mindustry_ai_Astar(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_Astar_queue;
	((func_arc_struct_PQueue_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_PQueue_clear])(ctx, sp[0].o);
	LINE_NUMBER(44);
	clinit_mindustry_ai_Astar(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_Astar_queue;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_Astar_invoke_arc_func_Floatf_1(ctx);
		auto proxy = (mindustry_ai_Astar_invoke_arc_func_Floatf_1 *) gcAlloc(ctx, &class_mindustry_ai_Astar_invoke_arc_func_Floatf_1);
		proxy->F_field1 = (jref) (frame[9].o);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_Structs_comparingFloat_arc_func_Floatf_R_java_util_Comparator(ctx, sp[1].o);
	((arc_struct_PQueue *) NULL_CHECK(sp[0].o))->F_comparator = (jref) sp[1].o;
	LINE_NUMBER(45);
	clinit_mindustry_ai_Astar(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_Astar_queue;
	jint temp0 = (jint)((func_arc_struct_PQueue_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_PQueue_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[8].o));
	LINE_NUMBER(46);
	clinit_mindustry_ai_Astar(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_Astar_rotations;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	clinit_mindustry_ai_Astar(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_Astar_rotations;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	if (temp0 != temp1) goto label_11;
	}
	{
	clinit_mindustry_ai_Astar(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_Astar_rotations;
	jint temp0 = ((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->length;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	if (temp0 == temp1) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(47);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)createMultiArray(ctx, &class_byte, {temp0, temp1});
	clinit_mindustry_ai_Astar(ctx);
	SF_mindustry_ai_Astar_rotations = sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(50);
	frame[11].i = (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(51);
	clinit_mindustry_ai_Astar(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_Astar_queue;
	jint temp0 = (jint)((func_arc_struct_PQueue_empty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_PQueue_empty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_14;
	}
	{
	LINE_NUMBER(52);
	clinit_mindustry_ai_Astar(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_Astar_queue;
	sp[0].o = (jobject)((func_arc_struct_PQueue_poll_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_PQueue_poll_R_java_lang_Object])(ctx, sp[0].o);
	frame[12].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(53);
	clinit_mindustry_ai_Astar(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_Astar_costs;
	jint temp0 = (jint)((func_mindustry_world_Tile_array_R_int) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_world_Tile_array_R_int])(ctx, (frame[12].o));
	frame[13].f = ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0));
	LINE_NUMBER(54);
	if ((frame[12].o) != (frame[9].o)) goto label_18;
	}
	{
	LINE_NUMBER(55);
	frame[11].i = (jint(1));
	LINE_NUMBER(56);
	goto label_14;
	}
label_18:;
	{
	LINE_NUMBER(58);
	((func_arc_struct_GridBits_set_int_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_struct_GridBits_set_int_int])(ctx, (frame[10].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[12].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[12].o)))->F_y));
	LINE_NUMBER(59);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[14].o = sp[0].o;
	frame[15].i = (((jarray) nullCheck(ctx, (frame[14].o)))->length);
	frame[16].i = (jint(0));
	}
label_22:;
	{
	if ((frame[16].i) >= (frame[15].i)) goto label_23;
	}
	{
	frame[17].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[16].i)));
	LINE_NUMBER(60);
	frame[18].i = (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[12].o)))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[17].o)))->F_x));
	frame[19].i = (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[12].o)))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[17].o)))->F_y));
	LINE_NUMBER(61);
	jint temp0 = (jint)SM_arc_util_Structs_inBounds_int_int_int_int_R_boolean(ctx, (frame[18].i), (frame[19].i), ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[7].o)))->F_width), ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[7].o)))->F_height));
	if (temp0 == 0) goto label_27;
	}
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, (frame[7].o), (frame[18].i), (frame[19].i));
	frame[20].o = sp[0].o;
	LINE_NUMBER(63);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[6].o)))(ctx, (frame[6].o), (frame[20].o));
	if (temp0 == 0) goto label_27;
	}
	{
	LINE_NUMBER(64);
	jfloat temp0 = (jfloat)((func_mindustry_ai_Astar$TileHeuristic_cost_mindustry_world_Tile_mindustry_world_Tile_R_float) resolveInterfaceMethod(ctx, &class_mindustry_ai_Astar$TileHeuristic, INDEX_mindustry_ai_Astar$TileHeuristic_cost_mindustry_world_Tile_mindustry_world_Tile_R_float, (frame[4].o)))(ctx, (frame[4].o), (frame[12].o), (frame[20].o));
	frame[21].f = (temp0 + (frame[13].f));
	LINE_NUMBER(65);
	jint temp1 = (jint)((func_arc_struct_GridBits_get_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_struct_GridBits_get_int_int_R_boolean])(ctx, (frame[10].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[20].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[20].o)))->F_y));
	if (temp1 != 0) goto label_27;
	}
	{
	LINE_NUMBER(66);
	((func_arc_struct_GridBits_set_int_int) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_struct_GridBits_set_int_int])(ctx, (frame[10].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[20].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[20].o)))->F_y));
	LINE_NUMBER(67);
	clinit_mindustry_ai_Astar(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_Astar_rotations;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[20].o)))->F_x));
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[20].o)))->F_y;
	jint temp1 = (jint)((func_mindustry_world_Tile_relativeTo_int_int_R_byte) ((void **) nullCheck(ctx, (frame[20].o))->vtable)[VTABLE_mindustry_world_Tile_relativeTo_int_int_R_byte])(ctx, (frame[20].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[12].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[12].o)))->F_y));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = temp1;
	LINE_NUMBER(68);
	clinit_mindustry_ai_Astar(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_Astar_costs;
	jint temp2 = (jint)((func_mindustry_world_Tile_array_R_int) ((void **) nullCheck(ctx, (frame[20].o))->vtable)[VTABLE_mindustry_world_Tile_array_R_int])(ctx, (frame[20].o));
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = (frame[21].f);
	LINE_NUMBER(69);
	clinit_mindustry_ai_Astar(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_Astar_queue;
	jint temp3 = (jint)((func_arc_struct_PQueue_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_PQueue_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[20].o));
	}
label_27:;
	{
	LINE_NUMBER(59);
	INST_IINC(16, 1);
	goto label_22;
	}
label_23:;
	LINE_NUMBER(74);
	goto label_13;
label_14:;
	{
	LINE_NUMBER(76);
	clinit_mindustry_ai_Astar(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_Astar_out;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(78);
	if ((frame[11].i) != 0) goto label_37;
	}
	clinit_mindustry_ai_Astar(ctx);
	(sp++)->o = SF_mindustry_ai_Astar_out;
	popStackFrame(ctx);
	INST_ARETURN();
label_37:;
	{
	LINE_NUMBER(80);
	frame[12].o = (frame[9].o);
	}
label_38:;
	{
	LINE_NUMBER(81);
	if ((frame[12].o) == (frame[8].o)) goto label_39;
	}
	{
	LINE_NUMBER(82);
	clinit_mindustry_ai_Astar(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_Astar_out;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[12].o));
	LINE_NUMBER(84);
	clinit_mindustry_ai_Astar(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_Astar_rotations;
	frame[13].i = ((jint)ARRAY_ACCESS(jbyte, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[12].o)))->F_x))), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[12].o)))->F_y)));
	LINE_NUMBER(85);
	sp[0].o = frame[7].o;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[12].o)))->F_x;
	clinit_arc_math_geom_Geometry(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Geometry_d4x;
	jint temp1 = temp0 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[13].i)));
	jint temp2 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[12].o)))->F_y;
	clinit_arc_math_geom_Geometry(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Geometry_d4y;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp1, (temp2 + ((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[13].i)))));
	frame[12].o = sp[0].o;
	LINE_NUMBER(86);
	goto label_38;
	}
label_39:;
	{
	LINE_NUMBER(88);
	clinit_mindustry_ai_Astar(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_Astar_out;
	sp[0].o = (jobject)((func_arc_struct_Seq_reverse_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_reverse_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(90);
	clinit_mindustry_ai_Astar(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_Astar_out;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_ai_Astar_lambda$pathfind$0_mindustry_ai_Astar$DistanceHeuristic_mindustry_world_Tile_mindustry_world_Tile_R_float(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Astar:lambda$pathfind$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_Astar(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(44);
	clinit_mindustry_ai_Astar(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_Astar_costs;
	jint temp0 = (jint)((func_mindustry_world_Tile_array_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_array_R_int])(ctx, (frame[2].o));
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0);
	jfloat temp2 = (jfloat)((func_mindustry_ai_Astar$DistanceHeuristic_cost_int_int_int_int_R_float) resolveInterfaceMethod(ctx, &class_mindustry_ai_Astar$DistanceHeuristic, INDEX_mindustry_ai_Astar$DistanceHeuristic_cost_int_int_int_int_R_float, (frame[0].o)))(ctx, (frame[0].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_y), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return (temp1 + temp2);
	}

	popStackFrame(ctx);
}

jint SM_mindustry_ai_Astar_lambda$static$1_mindustry_world_Tile_mindustry_world_Tile_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Astar:lambda$static$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_Astar(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_ai_Astar_lambda$static$0_int_int_int_int_R_float(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Astar:lambda$static$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_Astar(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(14);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[0].i) - (frame[2].i)));
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[1].i) - (frame[3].i)));
	popStackFrame(ctx);
	return (jfloat((temp0 + temp1)));
	}

	popStackFrame(ctx);
}

void clinit_mindustry_ai_Astar(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Astar:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_Astar(ctx);
	{
	LINE_NUMBER(14);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_Astar_invoke_mindustry_ai_Astar$DistanceHeuristic_1(ctx);
		auto proxy = (mindustry_ai_Astar_invoke_mindustry_ai_Astar$DistanceHeuristic_1 *) gcAlloc(ctx, &class_mindustry_ai_Astar_invoke_mindustry_ai_Astar$DistanceHeuristic_1);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_ai_Astar(ctx);
	SF_mindustry_ai_Astar_manhattan = sp[0].o;
	LINE_NUMBER(16);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_ai_Astar(ctx);
	SF_mindustry_ai_Astar_out = sp[0].o;
	LINE_NUMBER(17);
	clinit_arc_struct_PQueue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_PQueue);
	jint temp0 = 10000;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_Astar_invoke_java_util_Comparator_1(ctx);
		auto proxy = (mindustry_ai_Astar_invoke_java_util_Comparator_1 *) gcAlloc(ctx, &class_mindustry_ai_Astar_invoke_java_util_Comparator_1);
		sp[1].o = (jobject) proxy;
	}
	init_arc_struct_PQueue_int_java_util_Comparator(ctx, sp[0].o, temp0, sp[1].o);
	clinit_mindustry_ai_Astar(ctx);
	SF_mindustry_ai_Astar_queue = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ai_Astar[] {
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
	&class_mindustry_ai_Astar$DistanceHeuristic,
	&class_mindustry_ai_Astar$TileHeuristic,
};

static FieldMetadata fields[] {
	{ "manhattan", &class_mindustry_ai_Astar$DistanceHeuristic, (intptr_t) &SF_mindustry_ai_Astar_manhattan, "Lmindustry/ai/Astar$DistanceHeuristic;", 25 },
	{ "out", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_ai_Astar_out, "Larc/struct/Seq;", 26 },
	{ "queue", &class_arc_struct_PQueue, (intptr_t) &SF_mindustry_ai_Astar_queue, "Larc/struct/PQueue;", 26 },
	{ "costs", getArrayClass(&class_float, 1), (intptr_t) &SF_mindustry_ai_Astar_costs, "[F", 10 },
	{ "rotations", getArrayClass(&class_byte, 2), (intptr_t) &SF_mindustry_ai_Astar_rotations, "[[B", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_Astar, 0, "()V", 1 },
	{ "pathfind", (intptr_t) SM_mindustry_ai_Astar_pathfind_mindustry_world_Tile_mindustry_world_Tile_mindustry_ai_Astar$TileHeuristic_arc_func_Boolf_R_arc_struct_Seq, 0, "(Lmindustry/world/Tile;Lmindustry/world/Tile;Lmindustry/ai/Astar$TileHeuristic;Larc/func/Boolf;)Larc/struct/Seq;", 9 },
	{ "pathfind", (intptr_t) SM_mindustry_ai_Astar_pathfind_int_int_int_int_mindustry_ai_Astar$TileHeuristic_arc_func_Boolf_R_arc_struct_Seq, 0, "(IIIILmindustry/ai/Astar$TileHeuristic;Larc/func/Boolf;)Larc/struct/Seq;", 9 },
	{ "pathfind", (intptr_t) SM_mindustry_ai_Astar_pathfind_int_int_int_int_mindustry_ai_Astar$TileHeuristic_mindustry_ai_Astar$DistanceHeuristic_arc_func_Boolf_R_arc_struct_Seq, 0, "(IIIILmindustry/ai/Astar$TileHeuristic;Lmindustry/ai/Astar$DistanceHeuristic;Larc/func/Boolf;)Larc/struct/Seq;", 9 },
	{ "lambda$pathfind$0", (intptr_t) SM_mindustry_ai_Astar_lambda$pathfind$0_mindustry_ai_Astar$DistanceHeuristic_mindustry_world_Tile_mindustry_world_Tile_R_float, 0, "(Lmindustry/ai/Astar$DistanceHeuristic;Lmindustry/world/Tile;Lmindustry/world/Tile;)F", 4106 },
	{ "lambda$static$1", (intptr_t) SM_mindustry_ai_Astar_lambda$static$1_mindustry_world_Tile_mindustry_world_Tile_R_int, 0, "(Lmindustry/world/Tile;Lmindustry/world/Tile;)I", 4106 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_ai_Astar_lambda$static$0_int_int_int_int_R_float, 0, "(IIII)F", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ai_Astar, 0, "()V", 8 },
};

Class class_mindustry_ai_Astar{
		.nativeName = (intptr_t) "mindustry/ai/Astar",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ai_Astar),
		.classVtable = (intptr_t) vtable_mindustry_ai_Astar,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_Astar,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ai_Astar,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_Astar = registerClass(&class_mindustry_ai_Astar);

}
