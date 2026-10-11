#include "mindustry/maps/planet/SerpuloPlanetGenerator_1Room.h"
#include "mindustry/maps/planet/SerpuloPlanetGenerator_1Room_invoke_mindustry_ai_Astar_TileHeuristic_2.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/maps/planet/SerpuloPlanetGenerator.h"
#include "mindustry/maps/planet/SerpuloPlanetGenerator_1Room_invoke_mindustry_ai_Astar_TileHeuristic_3.h"
#include "mindustry/world/Block.h"
#include "arc/math/Rand.h"
#include "arc/math/Angles.h"
#include "mindustry/maps/planet/SerpuloPlanetGenerator_1Room.h"
#include "arc/util/Structs.h"
#include "mindustry/ai/Astar_TileHeuristic.h"
#include "mindustry/world/Tiles.h"
#include "mindustry/ai/Astar.h"
#include "arc/func/Cons.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "mindustry/maps/planet/SerpuloPlanetGenerator_1Room_invoke_arc_func_Cons_1.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/world/Tile.h"
#include "mindustry/ai/Astar_DistanceHeuristic.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/maps/generators/BasicGenerator.h"

extern "C" {


void mark_mindustry_maps_planet_SerpuloPlanetGenerator$1Room(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) object;
	if (self->F_connected)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_connected)->clazz)->markFunction)((jobject) self->F_connected, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_maps_planet_SerpuloPlanetGenerator$1Room(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_mindustry_maps_planet_SerpuloPlanetGenerator_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator$1Room:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator$1Room(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(249);
	((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(247);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK(sp[0].o))->F_connected = (jref) sp[1].o;
	LINE_NUMBER(250);
	((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_x = (frame[2].i);
	LINE_NUMBER(251);
	((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_y = (frame[3].i);
	LINE_NUMBER(252);
	((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_radius = (frame[4].i);
	LINE_NUMBER(253);
	sp[0].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_connected;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(254);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_join_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator$1Room:join", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$000_mindustry_maps_planet_SerpuloPlanetGenerator_R_arc_math_Rand(ctx, sp[0].o);
	jfloat temp0 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (jfloat(100.0f)), (jfloat(140.0f)));
	frame[5].f = (temp0 * (jfloat(6.0f)));
	LINE_NUMBER(258);
	sp[0].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$100_mindustry_maps_planet_SerpuloPlanetGenerator_R_arc_math_Rand(ctx, sp[0].o);
	jint temp1 = (jint)((func_arc_math_Rand_random_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_int_int_R_int])(ctx, sp[0].o, (jint(3)), (9));
	frame[6].i = temp1;
	LINE_NUMBER(259);
	sp[0].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp2 = frame[1].i;
	jint temp3 = frame[2].i;
	jint temp4 = frame[3].i;
	jint temp5 = frame[4].i;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_invoke_mindustry_ai_Astar$TileHeuristic_2(ctx);
		auto proxy = (mindustry_maps_planet_SerpuloPlanetGenerator$1Room_invoke_mindustry_ai_Astar$TileHeuristic_2 *) gcAlloc(ctx, &class_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_invoke_mindustry_ai_Astar$TileHeuristic_2);
		proxy->F_field1 = (frame[5].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	clinit_mindustry_ai_Astar(ctx);
	sp[3].o = (jobject)SF_mindustry_ai_Astar_manhattan;
	sp[1].o = (jobject)((func_mindustry_maps_planet_SerpuloPlanetGenerator_pathfind_int_int_int_int_mindustry_ai_Astar$TileHeuristic_mindustry_ai_Astar$DistanceHeuristic_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_pathfind_int_int_int_int_mindustry_ai_Astar$TileHeuristic_mindustry_ai_Astar$DistanceHeuristic_R_arc_struct_Seq])(ctx, sp[1].o, temp2, temp3, temp4, temp5, sp[2].o, sp[3].o);
	((func_mindustry_maps_planet_SerpuloPlanetGenerator_brush_arc_struct_Seq_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_brush_arc_struct_Seq_int])(ctx, sp[0].o, sp[1].o, (frame[6].i));
	LINE_NUMBER(260);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_connect_mindustry_maps_planet_SerpuloPlanetGenerator$1Room(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator$1Room:connect", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_connected;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	if ((frame[1].o) != (frame[0].o)) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(265);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[1].o)))->F_x))), (jfloat(((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[1].o)))->F_y))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_x))), (jfloat(((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_y))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(0.5f)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(266);
	sp[0].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$300_mindustry_maps_planet_SerpuloPlanetGenerator_R_arc_math_Rand(ctx, sp[0].o);
	jfloat temp0 = (jfloat)((func_arc_math_Rand_nextFloat_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextFloat_R_float])(ctx, sp[0].o);
	LINE_NUMBER(268);
	if ((clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx), (jint)SF_mindustry_maps_planet_SerpuloPlanetGenerator_indirectPaths) == 0) goto label_5;
	}
	{
	LINE_NUMBER(269);
	sp[0].o = frame[2].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v2;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (jfloat(1)), (jfloat(0)));
	jfloat temp0 = (jfloat)SM_arc_math_Angles_angle_float_float_float_float_R_float(ctx, (jfloat(((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[1].o)))->F_x))), (jfloat(((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[1].o)))->F_y))), (jfloat(((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_x))), (jfloat(((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_y))));
	jfloat temp1 = jfloat(90.0f);
	sp[2].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$400_mindustry_maps_planet_SerpuloPlanetGenerator_R_arc_math_Rand(ctx, sp[2].o);
	jint temp2 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[2].o, (jdouble(0.5)));
	sp[2].f = temp0;
	sp[3].f = temp1;
	sp += 4;
	if (temp2 == 0) goto label_7;
	}
	INST_FCONST(1);
	goto label_8;
label_7:;
	(sp++)->f = jfloat(-1.0f);
label_8:;
	{
	sp -= 5;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_setAngle_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (sp[2].f + (sp[3].f * sp[4].f)));
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_dst_float_float_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec2_dst_float_float_R_float])(ctx, sp[2].o, (jfloat(((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_x))), (jfloat(((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_y))));
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (temp0 * (jfloat(2))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	goto label_9;
	}
label_5:;
	{
	LINE_NUMBER(272);
	sp[0].o = frame[2].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v2;
	sp[2].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$500_mindustry_maps_planet_SerpuloPlanetGenerator_R_arc_math_Rand(ctx, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_setToRandomDirection_arc_math_Rand_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_setToRandomDirection_arc_math_Rand_R_arc_math_geom_Vec2])(ctx, sp[1].o, sp[2].o);
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_dst_float_float_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec2_dst_float_float_R_float])(ctx, sp[2].o, (jfloat(((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_x))), (jfloat(((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_y))));
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp0);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	{
	LINE_NUMBER(275);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$900_mindustry_maps_planet_SerpuloPlanetGenerator_R_int(ctx, sp[1].o);
	jfloat temp1 = (jfloat(temp0)) / (jfloat(2));
	sp[1].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp2 = (jint)SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1000_mindustry_maps_planet_SerpuloPlanetGenerator_R_int(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, ((jfloat(temp2)) / (jfloat(2))));
	sp[1].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp3 = (jint)SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$800_mindustry_maps_planet_SerpuloPlanetGenerator_R_int(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat(temp3)) / (jfloat(2))) / (clinit_arc_math_Mathf(ctx), (jfloat)SF_arc_math_Mathf_sqrt3)));
	sp[1].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp4 = (jint)SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$600_mindustry_maps_planet_SerpuloPlanetGenerator_R_int(ctx, sp[1].o);
	jfloat temp5 = (jfloat(temp4)) / (jfloat(2));
	sp[1].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp6 = (jint)SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$700_mindustry_maps_planet_SerpuloPlanetGenerator_R_int(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp5, ((jfloat(temp6)) / (jfloat(2))));
	LINE_NUMBER(277);
	frame[3].i = (jint(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x)));
	frame[4].i = (jint(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y)));
	LINE_NUMBER(279);
	((func_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_join_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_join_int_int_int_int])(ctx, (frame[0].o), ((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_y), (frame[3].i), (frame[4].i));
	LINE_NUMBER(280);
	((func_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_join_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_join_int_int_int_int])(ctx, (frame[0].o), (frame[3].i), (frame[4].i), ((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(281);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_joinLiquid_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator$1Room:joinLiquid", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(284);
	sp[0].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1100_mindustry_maps_planet_SerpuloPlanetGenerator_R_arc_math_Rand(ctx, sp[0].o);
	jfloat temp0 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (jfloat(100.0f)), (jfloat(140.0f)));
	frame[5].f = (temp0 * (jfloat(6.0f)));
	LINE_NUMBER(285);
	sp[0].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1200_mindustry_maps_planet_SerpuloPlanetGenerator_R_arc_math_Rand(ctx, sp[0].o);
	jint temp1 = (jint)((func_arc_math_Rand_random_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_int_int_R_int])(ctx, sp[0].o, (7), (11));
	frame[6].i = temp1;
	LINE_NUMBER(286);
	frame[7].i = ((jint(2)) + (frame[6].i));
	LINE_NUMBER(287);
	sp[0].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp2 = frame[1].i;
	jint temp3 = frame[2].i;
	jint temp4 = frame[3].i;
	jint temp5 = frame[4].i;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_invoke_mindustry_ai_Astar$TileHeuristic_3(ctx);
		auto proxy = (mindustry_maps_planet_SerpuloPlanetGenerator$1Room_invoke_mindustry_ai_Astar$TileHeuristic_3 *) gcAlloc(ctx, &class_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_invoke_mindustry_ai_Astar$TileHeuristic_3);
		proxy->F_field1 = (frame[5].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_ai_Astar(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_Astar_manhattan;
	sp[0].o = (jobject)((func_mindustry_maps_planet_SerpuloPlanetGenerator_pathfind_int_int_int_int_mindustry_ai_Astar$TileHeuristic_mindustry_ai_Astar$DistanceHeuristic_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_pathfind_int_int_int_int_mindustry_ai_Astar$TileHeuristic_mindustry_ai_Astar$DistanceHeuristic_R_arc_struct_Seq])(ctx, sp[0].o, temp2, temp3, temp4, temp5, sp[1].o, sp[2].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(288);
	sp[0].o = frame[8].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_maps_planet_SerpuloPlanetGenerator$1Room_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_invoke_arc_func_Cons_1);
		proxy->F_field4 = (frame[6].i);
		proxy->F_field3 = (frame[7].i);
		proxy->F_field2 = (frame[4].i);
		proxy->F_field1 = (frame[3].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(309);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_connectLiquid_mindustry_maps_planet_SerpuloPlanetGenerator$1Room(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator$1Room:connectLiquid", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(312);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(314);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[1].o)))->F_x))), (jfloat(((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[1].o)))->F_y))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_x))), (jfloat(((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_y))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(0.5f)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(315);
	sp[0].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1700_mindustry_maps_planet_SerpuloPlanetGenerator_R_arc_math_Rand(ctx, sp[0].o);
	jfloat temp0 = (jfloat)((func_arc_math_Rand_nextFloat_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextFloat_R_float])(ctx, sp[0].o);
	LINE_NUMBER(318);
	sp[0].o = frame[2].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v2;
	sp[2].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1800_mindustry_maps_planet_SerpuloPlanetGenerator_R_arc_math_Rand(ctx, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_setToRandomDirection_arc_math_Rand_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_setToRandomDirection_arc_math_Rand_R_arc_math_geom_Vec2])(ctx, sp[1].o, sp[2].o);
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vec2_dst_float_float_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec2_dst_float_float_R_float])(ctx, sp[2].o, (jfloat(((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_x))), (jfloat(((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_y))));
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp1);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(319);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp2 = (jint)SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$2200_mindustry_maps_planet_SerpuloPlanetGenerator_R_int(ctx, sp[1].o);
	jfloat temp3 = (jfloat(temp2)) / (jfloat(2));
	sp[1].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp4 = (jint)SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$2300_mindustry_maps_planet_SerpuloPlanetGenerator_R_int(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp3, ((jfloat(temp4)) / (jfloat(2))));
	sp[1].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp5 = (jint)SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$2100_mindustry_maps_planet_SerpuloPlanetGenerator_R_int(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat(temp5)) / (jfloat(2))) / (clinit_arc_math_Mathf(ctx), (jfloat)SF_arc_math_Mathf_sqrt3)));
	sp[1].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp6 = (jint)SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1900_mindustry_maps_planet_SerpuloPlanetGenerator_R_int(ctx, sp[1].o);
	jfloat temp7 = (jfloat(temp6)) / (jfloat(2));
	sp[1].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp8 = (jint)SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$2000_mindustry_maps_planet_SerpuloPlanetGenerator_R_int(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp7, ((jfloat(temp8)) / (jfloat(2))));
	LINE_NUMBER(321);
	frame[3].i = (jint(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x)));
	frame[4].i = (jint(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y)));
	LINE_NUMBER(323);
	((func_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_joinLiquid_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_joinLiquid_int_int_int_int])(ctx, (frame[0].o), ((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_y), (frame[3].i), (frame[4].i));
	LINE_NUMBER(324);
	((func_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_joinLiquid_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_joinLiquid_int_int_int_int])(ctx, (frame[0].o), (frame[3].i), (frame[4].i), ((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_lambda$joinLiquid$1_int_int_int_int_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator$1Room:lambda$joinLiquid$1", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(290);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_dst2_float_float_float_float_R_float(ctx, (jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_x))), (jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_y))), (jfloat((frame[1].i))), (jfloat((frame[2].i))));
	if ((floatCompare(temp0, (jfloat(((frame[3].i) * (frame[3].i)))), 1)) > 0) goto label_1;
	}
	LINE_NUMBER(291);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(294);
	frame[6].i = (-(frame[4].i));
	}
label_3:;
	{
	if ((frame[6].i) > (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(295);
	frame[7].i = (-(frame[4].i));
	}
label_6:;
	{
	if ((frame[7].i) > (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(296);
	frame[8].i = (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_x) + (frame[6].i));
	frame[9].i = (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_y) + (frame[7].i));
	LINE_NUMBER(297);
	jint temp0 = frame[8].i;
	jint temp1 = frame[9].i;
	sp[0].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp2 = (jint)SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1400_mindustry_maps_planet_SerpuloPlanetGenerator_R_int(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp3 = (jint)SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1500_mindustry_maps_planet_SerpuloPlanetGenerator_R_int(ctx, sp[0].o);
	jint temp4 = (jint)SM_arc_util_Structs_inBounds_int_int_int_int_R_boolean(ctx, temp0, temp1, temp2, temp3);
	if (temp4 == 0) goto label_11;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_within_float_float_float_R_boolean(ctx, (jfloat((frame[6].i))), (jfloat((frame[7].i))), (jfloat((frame[4].i))));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1600_mindustry_maps_planet_SerpuloPlanetGenerator_R_mindustry_world_Tiles(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[8].i), (frame[9].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(299);
	sp[0].o = frame[10].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(300);
	jint temp0 = (jint)SM_arc_math_Mathf_within_float_float_float_R_boolean(ctx, (jfloat((frame[6].i))), (jfloat((frame[7].i))), (jfloat(((frame[4].i) - (jint(1))))));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[10].o));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_isLiquid) != 0) goto label_11;
	}
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[10].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(303);
	sp[0].o = frame[10].o;
	sp[1].o = frame[11].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_sand;
	sp += 1;
	if (sp[0].o == sp[1].o) goto label_17;
	}
	{
	sp[0].o = frame[11].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_salt;
	if (sp[0].o != sp[1].o) goto label_18;
	}
label_17:;
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_sandWater;
	goto label_19;
label_18:;
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_darksandTaintedWater;
label_19:;
	INST_CHECKCAST(&class_mindustry_world_blocks_environment_Floor);
	POP_N(2); // Pop method args
	((func_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o, sp[1].o);
label_11:;
	{
	LINE_NUMBER(295);
	INST_IINC(7, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(294);
	INST_IINC(6, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(308);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_lambda$joinLiquid$0_float_mindustry_world_Tile_R_float(jcontext ctx, jobject self, jfloat param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator$1Room:lambda$joinLiquid$0", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(287);
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[2].o));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_isLiquid) != 0) goto label_2;
	}
label_1:;
	(sp++)->f = jfloat(70.0f);
	goto label_3;
label_2:;
	INST_FCONST(0);
label_3:;
	{
	sp -= 1;
	sp[1].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1300_mindustry_maps_planet_SerpuloPlanetGenerator_float_float_double_double_double_R_float(ctx, sp[1].o, (jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_x))), (jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_y))), (jdouble(2.0)), (jdouble(0.4000000059604645)), (jdouble(((jfloat(1)) / (frame[1].f)))));
	popStackFrame(ctx);
	return (sp[0].f + (temp0 * (jfloat(500.0f))));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_lambda$join$0_float_mindustry_world_Tile_R_float(jcontext ctx, jobject self, jfloat param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator$1Room:lambda$join$0", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(259);
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	(sp++)->f = jfloat(50.0f);
	goto label_2;
label_1:;
	INST_FCONST(0);
label_2:;
	{
	sp -= 1;
	sp[1].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$200_mindustry_maps_planet_SerpuloPlanetGenerator_float_float_double_double_double_R_float(ctx, sp[1].o, (jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_x))), (jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_y))), (jdouble(2.0)), (jdouble(0.4000000059604645)), (jdouble(((jfloat(1)) / (frame[1].f)))));
	popStackFrame(ctx);
	return (sp[0].f + (temp0 * (jfloat(500.0f))));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_planet_SerpuloPlanetGenerator$1Room[] {
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
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_join_int_int_int_int,
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_connect_mindustry_maps_planet_SerpuloPlanetGenerator$1Room,
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_joinLiquid_int_int_int_int,
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_connectLiquid_mindustry_maps_planet_SerpuloPlanetGenerator$1Room,
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_lambda$joinLiquid$1_int_int_int_int_mindustry_world_Tile,
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_lambda$joinLiquid$0_float_mindustry_world_Tile_R_float,
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_lambda$join$0_float_mindustry_world_Tile_R_float,
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
	{ "join", "(IIII)V" },
	{ "connect", "(Lmindustry/maps/planet/SerpuloPlanetGenerator$1Room;)V" },
	{ "joinLiquid", "(IIII)V" },
	{ "connectLiquid", "(Lmindustry/maps/planet/SerpuloPlanetGenerator$1Room;)V" },
	{ "lambda$joinLiquid$1", "(IIIILmindustry/world/Tile;)V" },
	{ "lambda$joinLiquid$0", "(FLmindustry/world/Tile;)F" },
	{ "lambda$join$0", "(FLmindustry/world/Tile;)F" },
};

static FieldMetadata fields[] {
	{ "x", &class_int, offsetof(mindustry_maps_planet_SerpuloPlanetGenerator$1Room, F_x), "I", 0 },
	{ "y", &class_int, offsetof(mindustry_maps_planet_SerpuloPlanetGenerator$1Room, F_y), "I", 0 },
	{ "radius", &class_int, offsetof(mindustry_maps_planet_SerpuloPlanetGenerator$1Room, F_radius), "I", 0 },
	{ "connected", &class_arc_struct_ObjectSet, offsetof(mindustry_maps_planet_SerpuloPlanetGenerator$1Room, F_connected), "Larc/struct/ObjectSet;", 0 },
	{ "this$0", &class_mindustry_maps_planet_SerpuloPlanetGenerator, offsetof(mindustry_maps_planet_SerpuloPlanetGenerator$1Room, F_this$0), "Lmindustry/maps/planet/SerpuloPlanetGenerator;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_mindustry_maps_planet_SerpuloPlanetGenerator_int_int_int, 0, "(Lmindustry/maps/planet/SerpuloPlanetGenerator;III)V", 0 },
	{ "join", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_join_int_int_int_int, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_join_int_int_int_int, "(IIII)V", 0 },
	{ "connect", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_connect_mindustry_maps_planet_SerpuloPlanetGenerator$1Room, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_connect_mindustry_maps_planet_SerpuloPlanetGenerator$1Room, "(Lmindustry/maps/planet/SerpuloPlanetGenerator$1Room;)V", 0 },
	{ "joinLiquid", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_joinLiquid_int_int_int_int, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_joinLiquid_int_int_int_int, "(IIII)V", 0 },
	{ "connectLiquid", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_connectLiquid_mindustry_maps_planet_SerpuloPlanetGenerator$1Room, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_connectLiquid_mindustry_maps_planet_SerpuloPlanetGenerator$1Room, "(Lmindustry/maps/planet/SerpuloPlanetGenerator$1Room;)V", 0 },
	{ "lambda$joinLiquid$1", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_lambda$joinLiquid$1_int_int_int_int_mindustry_world_Tile, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_lambda$joinLiquid$1_int_int_int_int_mindustry_world_Tile, "(IIIILmindustry/world/Tile;)V", 4098 },
	{ "lambda$joinLiquid$0", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_lambda$joinLiquid$0_float_mindustry_world_Tile_R_float, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_lambda$joinLiquid$0_float_mindustry_world_Tile_R_float, "(FLmindustry/world/Tile;)F", 4098 },
	{ "lambda$join$0", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_lambda$join$0_float_mindustry_world_Tile_R_float, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_lambda$join$0_float_mindustry_world_Tile_R_float, "(FLmindustry/world/Tile;)F", 4098 },
};

Class class_mindustry_maps_planet_SerpuloPlanetGenerator$1Room{
		.nativeName = (intptr_t) "mindustry/maps/planet/SerpuloPlanetGenerator$1Room",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_maps_planet_SerpuloPlanetGenerator$1Room),
		.classVtable = (intptr_t) vtable_mindustry_maps_planet_SerpuloPlanetGenerator$1Room,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_planet_SerpuloPlanetGenerator$1Room,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_planet_SerpuloPlanetGenerator$1Room,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_planet_SerpuloPlanetGenerator$1Room = registerClass(&class_mindustry_maps_planet_SerpuloPlanetGenerator$1Room);

}

