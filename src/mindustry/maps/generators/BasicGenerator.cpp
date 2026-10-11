#include "mindustry/maps/generators/BasicGenerator.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/ai/Astar_TileHeuristic.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/world/WorldParams.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/maps/generators/BasicGenerator_invoke_arc_func_Intc2_15.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/maps/generators/BasicGenerator_invoke_arc_func_Intc2_19.h"
#include "mindustry/maps/generators/BasicGenerator_invoke_arc_func_Intc2_18.h"
#include "mindustry/maps/generators/BasicGenerator_invoke_arc_func_Cons_1.h"
#include "mindustry/maps/generators/BasicGenerator_invoke_arc_func_Intc2_17.h"
#include "arc/func/Boolf.h"
#include "mindustry/maps/generators/BasicGenerator_invoke_arc_func_Intc2_16.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "arc/util/Structs.h"
#include "mindustry/maps/generators/BasicGenerator_invoke_arc_func_Boolf_1.h"
#include "arc/util/Nullable.h"
#include "java/lang/Object.h"
#include "mindustry/ai/Astar_DistanceHeuristic.h"
#include "mindustry/maps/generators/WorldGenerator.h"
#include "arc/func/Intc2.h"
#include "mindustry/world/Block.h"
#include "arc/math/Rand.h"
#include "arc/struct/IntSeq.h"
#include "mindustry/world/Tiles.h"
#include "arc/func/Cons.h"
#include "mindustry/game/Schematic.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "arc/struct/GridBits.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/content/Loadouts.h"
#include "mindustry/ai/Astar.h"
#include "arc/struct/ShortSeq.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/maps/generators/BasicGenerator_invoke_arc_func_Intc2_22.h"
#include "mindustry/maps/generators/BasicGenerator_invoke_arc_func_Intc2_21.h"
#include "mindustry/maps/generators/BasicGenerator_invoke_arc_func_Intc2_20.h"
#include "mindustry/maps/generators/BasicGenerator_invoke_arc_func_Intc2_26.h"
#include "mindustry/maps/generators/BasicGenerator_invoke_arc_func_Intc2_25.h"
#include "mindustry/maps/generators/BasicGenerator_invoke_arc_func_Intc2_24.h"
#include "mindustry/maps/generators/BasicGenerator_invoke_arc_func_Intc2_23.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/maps/generators/BasicGenerator_invoke_arc_func_Intc2_29.h"
#include "mindustry/maps/generators/BasicGenerator_invoke_arc_func_Intc2_28.h"
#include "mindustry/maps/generators/BasicGenerator.h"
#include "mindustry/maps/generators/BasicGenerator_invoke_arc_func_Intc2_27.h"

extern "C" {

jobject SF_mindustry_maps_generators_BasicGenerator_ints1;
jobject SF_mindustry_maps_generators_BasicGenerator_ints2;

void mark_mindustry_maps_generators_BasicGenerator(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_maps_generators_BasicGenerator_ints1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_maps_generators_BasicGenerator_ints1)->clazz)->markFunction)((jobject) SF_mindustry_maps_generators_BasicGenerator_ints1, mark, depth + 1);
		if (SF_mindustry_maps_generators_BasicGenerator_ints2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_maps_generators_BasicGenerator_ints2)->clazz)->markFunction)((jobject) SF_mindustry_maps_generators_BasicGenerator_ints2, mark, depth + 1);
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
	auto self = (mindustry_maps_generators_BasicGenerator *) object;
	if (self->F_rand)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rand)->clazz)->markFunction)((jobject) self->F_rand, mark, depth + 1);
	if (self->F_tiles)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tiles)->clazz)->markFunction)((jobject) self->F_tiles, mark, depth + 1);
	if (self->F_floor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_floor)->clazz)->markFunction)((jobject) self->F_floor, mark, depth + 1);
	if (self->F_block)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_block)->clazz)->markFunction)((jobject) self->F_block, mark, depth + 1);
	if (self->F_ore)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ore)->clazz)->markFunction)((jobject) self->F_ore, mark, depth + 1);
	if (self->F_defaultLoadout)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_defaultLoadout)->clazz)->markFunction)((jobject) self->F_defaultLoadout, mark, depth + 1);
}

void init_mindustry_maps_generators_BasicGenerator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_BasicGenerator(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(18);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_math_Rand(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_Rand);
	init_arc_math_Rand(ctx, sp[1].o);
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_rand = (jref) sp[1].o;
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Loadouts(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Loadouts_basicShard;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_defaultLoadout = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_generate_mindustry_world_Tiles_mindustry_world_WorldParams(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:generate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(33);
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles = (jref) (frame[1].o);
	LINE_NUMBER(34);
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width = ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[1].o)))->F_width);
	LINE_NUMBER(35);
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height = ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[1].o)))->F_height);
	LINE_NUMBER(37);
	((func_mindustry_maps_generators_BasicGenerator_generate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_generate])(ctx, (frame[0].o));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_generate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:generate", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(42);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_median_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:median", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(45);
	((func_mindustry_maps_generators_BasicGenerator_median_int_double) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_median_int_double])(ctx, (frame[0].o), (frame[1].i), (jdouble(0.5)));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_median_int_double(jcontext ctx, jobject self, jint param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:median", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(49);
	((func_mindustry_maps_generators_BasicGenerator_median_int_double_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_median_int_double_mindustry_world_Block])(ctx, (frame[0].o), (frame[1].i), (frame[2].d), (jobject(nullptr)));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_median_int_double_mindustry_world_Block(jcontext ctx, jobject self, jint param0, jdouble param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:median", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].d = param1;
	frame[4].o = param2;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp0 = (jint)((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_width;
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject) createArray(ctx, &class_short, (temp0 * ((jint)((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_height)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(54);
	sp[0].o = (jobject) createArray(ctx, &class_short, (((jarray) nullCheck(ctx, (frame[5].o)))->length));
	frame[6].o = sp[0].o;
	LINE_NUMBER(56);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_15(ctx);
		auto proxy = (mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_15 *) gcAlloc(ctx, &class_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_15);
		proxy->F_field5 = (jref) (frame[5].o);
		proxy->F_field4 = (frame[2].d);
		proxy->F_field3 = (jref) (frame[6].o);
		proxy->F_field2 = (frame[1].i);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_Tiles_each_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_each_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_16(ctx);
		auto proxy = (mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_16 *) gcAlloc(ctx, &class_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_16);
		proxy->F_field3 = (jref) (frame[6].o);
		proxy->F_field2 = (jref) (frame[5].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_generators_BasicGenerator_pass_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_pass_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_ores_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:ores", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_17(ctx);
		auto proxy = (mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_17 *) gcAlloc(ctx, &class_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_17);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_generators_BasicGenerator_pass_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_pass_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_ore_mindustry_world_Block_mindustry_world_Block_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:ore", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_18(ctx);
		auto proxy = (mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_18 *) gcAlloc(ctx, &class_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_18);
		proxy->F_field4 = (jref) (frame[1].o);
		proxy->F_field3 = (frame[4].f);
		proxy->F_field2 = (frame[3].f);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_generators_BasicGenerator_pass_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_pass_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_oreAround_mindustry_world_Block_mindustry_world_Block_int_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:oreAround", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(109);
	frame[8].i = ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_x);
	frame[9].i = ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_y);
	LINE_NUMBER(111);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[7].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[7].o));
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_R_float])(ctx, (frame[0].o), (jfloat((frame[8].i))), (jfloat(((frame[9].i) + (((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id) * (999))))), (jdouble((frame[4].f))), (jdouble(1)));
	if ((floatCompare(temp0, (frame[5].f), -1)) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(112);
	frame[10].i = (jint(0));
	LINE_NUMBER(115);
	frame[11].i = ((frame[8].i) - (frame[3].i));
	}
label_9:;
	{
	if ((frame[11].i) > ((frame[8].i) + (frame[3].i))) goto label_10;
	}
	{
	LINE_NUMBER(116);
	frame[12].i = ((frame[9].i) - (frame[3].i));
	}
label_12:;
	{
	if ((frame[12].i) > ((frame[9].i) + (frame[3].i))) goto label_13;
	}
	{
	LINE_NUMBER(117);
	jint temp0 = (jint)SM_arc_math_Mathf_within_float_float_float_float_float_R_boolean(ctx, (jfloat((frame[11].i))), (jfloat((frame[12].i))), (jfloat((frame[8].i))), (jfloat((frame[9].i))), ((jfloat((frame[3].i))) + (jfloat(1,000000e-03f))));
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp0 = (jint)((func_mindustry_world_Tiles_in_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_in_int_int_R_boolean])(ctx, sp[0].o, (frame[11].i), (frame[12].i));
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[11].i), (frame[12].i));
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	if (sp[0].o != (frame[2].o)) goto label_15;
	}
	{
	LINE_NUMBER(118);
	frame[10].i = (jint(1));
	LINE_NUMBER(119);
	goto label_10;
	}
label_15:;
	{
	LINE_NUMBER(116);
	INST_IINC(12, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(115);
	INST_IINC(11, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(124);
	if ((frame[10].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(125);
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, (frame[7].o), (frame[1].o));
	}
label_6:;
	LINE_NUMBER(128);
	goto label_1;
label_2:;
	LINE_NUMBER(129);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_wallOre_mindustry_world_Block_mindustry_world_Block_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:wallOre", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(132);
	jint temp0 = (jint)((func_mindustry_world_Block_isOverlay_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Block_isOverlay_R_boolean])(ctx, (frame[2].o));
	frame[5].i = temp0;
	LINE_NUMBER(133);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_19(ctx);
		auto proxy = (mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_19 *) gcAlloc(ctx, &class_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_19);
		proxy->F_field5 = (jref) (frame[2].o);
		proxy->F_field4 = (frame[5].i);
		proxy->F_field3 = (jref) (frame[1].o);
		proxy->F_field2 = (frame[4].f);
		proxy->F_field1 = (frame[3].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_generators_BasicGenerator_pass_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_pass_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_cliffs(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:cliffs", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(157);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_mindustry_world_Block_isStatic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isStatic_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_cliff;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	goto label_1;
label_4:;
	{
	LINE_NUMBER(159);
	frame[3].i = (jint(0));
	LINE_NUMBER(160);
	frame[4].i = (jint(0));
	}
label_6:;
	{
	if ((frame[4].i) >= (8)) goto label_7;
	}
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_x;
	clinit_arc_math_geom_Geometry(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Geometry_d8;
	jint temp1 = temp0 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i)))))->F_x);
	jint temp2 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_y;
	clinit_arc_math_geom_Geometry(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Geometry_d8;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp1, (temp2 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i)))))->F_y)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(162);
	if ((frame[5].o) == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[5].o));
	jint temp0 = (jint)((func_mindustry_world_Block_isStatic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isStatic_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(163);
	frame[3].i = ((frame[3].i) | ((jint(1)) << (frame[4].i)));
	}
label_10:;
	{
	LINE_NUMBER(160);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(167);
	if ((frame[3].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(168);
	sp[0].o = frame[2].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_cliff;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	}
label_12:;
	{
	LINE_NUMBER(171);
	((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_data = (jbyte((frame[3].i)));
	LINE_NUMBER(172);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_15:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(175);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_cliff;
	if (sp[0].o == sp[1].o) goto label_18;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_mindustry_world_Block_isStatic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isStatic_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(176);
	sp[0].o = frame[2].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	}
label_18:;
	LINE_NUMBER(178);
	goto label_15;
label_16:;
	LINE_NUMBER(179);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_terrain_mindustry_world_Block_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:terrain", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(182);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_20(ctx);
		auto proxy = (mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_20 *) gcAlloc(ctx, &class_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_20);
		proxy->F_field4 = (jref) (frame[1].o);
		proxy->F_field3 = (frame[4].f);
		proxy->F_field2 = (frame[3].f);
		proxy->F_field1 = (frame[2].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_generators_BasicGenerator_pass_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_pass_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_noise_mindustry_world_Block_mindustry_world_Block_int_float_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:noise", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_21(ctx);
		auto proxy = (mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_21 *) gcAlloc(ctx, &class_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_21);
		proxy->F_field6 = (jref) (frame[2].o);
		proxy->F_field5 = (jref) (frame[1].o);
		proxy->F_field4 = (frame[6].f);
		proxy->F_field3 = (frame[5].f);
		proxy->F_field2 = (frame[4].f);
		proxy->F_field1 = (frame[3].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_generators_BasicGenerator_pass_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_pass_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_overlay_mindustry_world_Block_mindustry_world_Block_float_int_float_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jint param3, jfloat param4, jfloat param5, jfloat param6) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:overlay", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	{
	LINE_NUMBER(211);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_22(ctx);
		auto proxy = (mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_22 *) gcAlloc(ctx, &class_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_22);
		proxy->F_field7 = (jref) (frame[2].o);
		proxy->F_field6 = (jref) (frame[1].o);
		proxy->F_field5 = (frame[3].f);
		proxy->F_field4 = (frame[7].f);
		proxy->F_field3 = (frame[6].f);
		proxy->F_field2 = (frame[5].f);
		proxy->F_field1 = (frame[4].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_generators_BasicGenerator_pass_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_pass_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(216);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_tech(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:tech", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(219);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_darkPanel3;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_darkPanel4;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darkMetal;
	((func_mindustry_maps_generators_BasicGenerator_tech_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_tech_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_tech_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:tech", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(223);
	frame[4].i = (20);
	LINE_NUMBER(224);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_23(ctx);
		auto proxy = (mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_23 *) gcAlloc(ctx, &class_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_23);
		proxy->F_field4 = (jref) (frame[3].o);
		proxy->F_field3 = (jref) (frame[2].o);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (frame[4].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_generators_BasicGenerator_pass_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_pass_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(242);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_distort_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:distort", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(245);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp0 = (jint)((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_width;
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject) createArray(ctx, &class_short, (temp0 * ((jint)((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_height)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(246);
	sp[0].o = (jobject) createArray(ctx, &class_short, (((jarray) nullCheck(ctx, (frame[3].o)))->length));
	frame[4].o = sp[0].o;
	LINE_NUMBER(248);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_24(ctx);
		auto proxy = (mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_24 *) gcAlloc(ctx, &class_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_24);
		proxy->F_field4 = (jref) (frame[4].o);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (frame[2].f);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_Tiles_each_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_each_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(256);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	if ((frame[5].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(258);
	sp[0].o = frame[6].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[1].o, ((jint)ARRAY_ACCESS(jshort, (frame[4].o), (frame[5].i))));
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[1].o);
	((func_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(259);
	sp[0].o = frame[6].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[1].o, ((jint)ARRAY_ACCESS(jshort, (frame[3].o), (frame[5].i))));
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(256);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(261);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_scatter_mindustry_world_Block_mindustry_world_Block_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:scatter", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(264);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_25(ctx);
		auto proxy = (mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_25 *) gcAlloc(ctx, &class_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_25);
		proxy->F_field3 = (jref) (frame[2].o);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (frame[3].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_generators_BasicGenerator_pass_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_pass_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_each_arc_func_Intc2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:each", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(275);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= ((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width)) goto label_2;
	}
	{
	LINE_NUMBER(276);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	if ((frame[3].i) >= ((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height)) goto label_5;
	}
	{
	LINE_NUMBER(277);
	((func_arc_func_Intc2_get_int_int) resolveInterfaceMethod(ctx, &class_arc_func_Intc2, INDEX_arc_func_Intc2_get_int_int, (frame[1].o)))(ctx, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(276);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(275);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(280);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_cells_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:cells", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(283);
	((func_mindustry_maps_generators_BasicGenerator_cells_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_cells_int_int_int_int])(ctx, (frame[0].o), (frame[1].i), (16), (16), (jint(3)));
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_cells_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:cells", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(287);
	clinit_arc_struct_GridBits(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_GridBits);
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp0 = (jint)((mindustry_world_Tiles *) NULL_CHECK(sp[1].o))->F_width;
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	init_arc_struct_GridBits_int_int(ctx, sp[0].o, temp0, ((jint)((mindustry_world_Tiles *) NULL_CHECK(sp[1].o))->F_height));
	frame[5].o = sp[0].o;
	LINE_NUMBER(288);
	clinit_arc_struct_GridBits(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_GridBits);
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp1 = (jint)((mindustry_world_Tiles *) NULL_CHECK(sp[1].o))->F_width;
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	init_arc_struct_GridBits_int_int(ctx, sp[0].o, temp1, ((jint)((mindustry_world_Tiles *) NULL_CHECK(sp[1].o))->F_height));
	frame[6].o = sp[0].o;
	LINE_NUMBER(290);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_26(ctx);
		auto proxy = (mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_26 *) gcAlloc(ctx, &class_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_26);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_Tiles_each_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_each_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(292);
	frame[7].i = (jint(0));
	}
label_4:;
	{
	if ((frame[7].i) >= (frame[1].i)) goto label_5;
	}
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_27(ctx);
		auto proxy = (mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_27 *) gcAlloc(ctx, &class_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_27);
		proxy->F_field5 = (frame[2].i);
		proxy->F_field4 = (frame[3].i);
		proxy->F_field3 = (jref) (frame[5].o);
		proxy->F_field2 = (jref) (frame[6].o);
		proxy->F_field1 = (frame[4].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_Tiles_each_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_each_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(313);
	((func_arc_struct_GridBits_set_arc_struct_GridBits) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_GridBits_set_arc_struct_GridBits])(ctx, (frame[6].o), (frame[5].o));
	LINE_NUMBER(292);
	INST_IINC(7, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(316);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(317);
	sp[0].o = frame[8].o;
	jint temp0 = (jint)((func_arc_struct_GridBits_get_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_GridBits_get_int_int_R_boolean])(ctx, (frame[6].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_y));
	sp += 1;
	if (temp0 != 0) goto label_12;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_air;
	goto label_13;
label_12:;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[8].o));
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_wall;
	sp += 1;
	}
label_13:;
	{
	sp -= 2;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(318);
	goto label_9;
	}
label_10:;
	LINE_NUMBER(319);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jdouble param2, jdouble param3) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:noise", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].d = param2;
	frame[5].d = param3;
	{
	LINE_NUMBER(322);
	jfloat temp0 = (jfloat)((func_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_double_R_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (jdouble(1)), (jdouble(1)), (frame[3].d), (frame[5].d));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jdouble param2, jdouble param3, jdouble param4) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:noise", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].d = param2;
	frame[5].d = param3;
	frame[7].d = param4;
	{
	LINE_NUMBER(328);
	jfloat temp0 = (jfloat)((func_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_double_R_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].d), (frame[5].d), (frame[7].d), (jdouble(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_pass_arc_func_Intc2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:pass", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(332);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(333);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[3].o));
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	LINE_NUMBER(334);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	LINE_NUMBER(335);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[3].o));
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_ore = (jref) sp[1].o;
	LINE_NUMBER(336);
	((func_arc_func_Intc2_get_int_int) resolveInterfaceMethod(ctx, &class_arc_func_Intc2, INDEX_arc_func_Intc2_get_int_int, (frame[1].o)))(ctx, (frame[1].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_y));
	LINE_NUMBER(337);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[1].o);
	((func_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(338);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_block;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	if (sp[0].o == sp[1].o) goto label_9;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_block;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	{
	LINE_NUMBER(339);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_ore;
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(340);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(341);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_maps_generators_BasicGenerator_nearWall_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:nearWall", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(344);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d8;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_1:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_2;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(345);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((frame[1].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_x)), ((frame[2].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_y)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(346);
	if ((frame[7].o) == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[7].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(347);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(344);
	INST_IINC(5, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(350);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_maps_generators_BasicGenerator_nearAir_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:nearAir", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(354);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_1:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_2;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(355);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((frame[1].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_x)), ((frame[2].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[6].o)))->F_y)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(356);
	if ((frame[7].o) == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[7].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(357);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(354);
	INST_IINC(5, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(360);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_removeWall_int_int_int_arc_func_Boolf(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:removeWall", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(364);
	frame[5].i = (-(frame[3].i));
	}
label_1:;
	{
	if ((frame[5].i) > (frame[3].i)) goto label_2;
	}
	{
	LINE_NUMBER(365);
	frame[6].i = (-(frame[3].i));
	}
label_4:;
	{
	if ((frame[6].i) > (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(366);
	frame[7].i = ((frame[1].i) + (frame[5].i));
	frame[8].i = ((frame[2].i) + (frame[6].i));
	LINE_NUMBER(367);
	jint temp0 = (jint)SM_arc_util_Structs_inBounds_int_int_int_int_R_boolean(ctx, (frame[7].i), (frame[8].i), ((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width), ((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height));
	if (temp0 == 0) goto label_9;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_within_float_float_float_R_boolean(ctx, (jfloat((frame[5].i))), (jfloat((frame[6].i))), (jfloat((frame[3].i))));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(368);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[7].i), (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(369);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[9].o));
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(370);
	sp[0].o = frame[9].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	{
	LINE_NUMBER(365);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(364);
	INST_IINC(5, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(375);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_maps_generators_BasicGenerator_near_int_int_int_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:near", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(378);
	frame[5].i = (-(frame[3].i));
	}
label_1:;
	{
	if ((frame[5].i) > (frame[3].i)) goto label_2;
	}
	{
	LINE_NUMBER(379);
	frame[6].i = (-(frame[3].i));
	}
label_4:;
	{
	if ((frame[6].i) > (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(380);
	frame[7].i = ((frame[1].i) + (frame[5].i));
	frame[8].i = ((frame[2].i) + (frame[6].i));
	LINE_NUMBER(381);
	jint temp0 = (jint)SM_arc_util_Structs_inBounds_int_int_int_int_R_boolean(ctx, (frame[7].i), (frame[8].i), ((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width), ((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height));
	if (temp0 == 0) goto label_9;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_within_float_float_float_R_boolean(ctx, (jfloat((frame[5].i))), (jfloat((frame[6].i))), (jfloat((frame[3].i))));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(382);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[7].i), (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(383);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[9].o));
	if (sp[0].o != (frame[4].o)) goto label_9;
	}
	{
	LINE_NUMBER(384);
	popStackFrame(ctx);
	return (jint(1));
	}
label_9:;
	{
	LINE_NUMBER(379);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(378);
	INST_IINC(5, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(389);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_decoration_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:decoration", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(393);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_28(ctx);
		auto proxy = (mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_28 *) gcAlloc(ctx, &class_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_28);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_generators_BasicGenerator_pass_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_pass_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(405);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_blend_mindustry_world_Block_mindustry_world_Block_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:blend", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(408);
	frame[4].f = ((frame[3].f) * (frame[3].f));
	LINE_NUMBER(409);
	jint temp0 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, (frame[3].f));
	frame[5].i = temp0;
	LINE_NUMBER(410);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp1 = (jint)((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_width;
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	frame[6].i = (temp1 * ((jint)((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_height));
	LINE_NUMBER(411);
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[2].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(413);
	frame[8].i = (jint(0));
	}
label_5:;
	{
	if ((frame[8].i) >= (frame[6].i)) goto label_6;
	}
	{
	LINE_NUMBER(414);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(415);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[9].o));
	if (sp[0].o == (frame[1].o)) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[9].o));
	if (sp[0].o != (frame[1].o)) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(416);
	frame[10].i = (-(frame[5].i));
	}
label_11:;
	{
	if ((frame[10].i) > (frame[5].i)) goto label_10;
	}
	{
	LINE_NUMBER(417);
	frame[11].i = (-(frame[5].i));
	}
label_13:;
	{
	if ((frame[11].i) > (frame[5].i)) goto label_14;
	}
	{
	LINE_NUMBER(418);
	if ((floatCompare((jfloat((((frame[10].i) * (frame[10].i)) + ((frame[11].i) * (frame[11].i))))), (frame[4].f), 1)) > 0) goto label_16;
	}
	{
	LINE_NUMBER(419);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_x) + (frame[10].i)), (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_y) + (frame[11].i)));
	frame[12].o = sp[0].o;
	LINE_NUMBER(421);
	if ((frame[12].o) == nullptr) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[12].o));
	if (sp[0].o == (frame[1].o)) goto label_16;
	}
	{
	LINE_NUMBER(422);
	((func_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor])(ctx, (frame[12].o), (frame[7].o));
	}
label_16:;
	{
	LINE_NUMBER(417);
	INST_IINC(11, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(416);
	INST_IINC(10, 1);
	goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(413);
	INST_IINC(8, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(429);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_brush_arc_struct_Seq_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:brush", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(432);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_maps_generators_BasicGenerator_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Cons_1);
		proxy->F_field1 = (frame[2].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(433);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_erase_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:erase", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(436);
	frame[4].i = (-(frame[3].i));
	}
label_1:;
	{
	if ((frame[4].i) > (frame[3].i)) goto label_2;
	}
	{
	LINE_NUMBER(437);
	frame[5].i = (-(frame[3].i));
	}
label_4:;
	{
	if ((frame[5].i) > (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(438);
	frame[6].i = ((frame[1].i) + (frame[4].i));
	frame[7].i = ((frame[2].i) + (frame[5].i));
	LINE_NUMBER(439);
	jint temp0 = (jint)SM_arc_util_Structs_inBounds_int_int_int_int_R_boolean(ctx, (frame[6].i), (frame[7].i), ((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width), ((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height));
	if (temp0 == 0) goto label_9;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_within_float_float_float_R_boolean(ctx, (jfloat((frame[4].i))), (jfloat((frame[5].i))), (jfloat((frame[3].i))));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(440);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[6].i), (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(441);
	sp[0].o = frame[8].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	{
	LINE_NUMBER(437);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(436);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(445);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_maps_generators_BasicGenerator_pathfind_int_int_int_int_mindustry_ai_Astar$TileHeuristic_mindustry_ai_Astar$DistanceHeuristic_R_arc_struct_Seq(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:pathfind", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(448);
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jint temp2 = frame[3].i;
	jint temp3 = frame[4].i;
	sp[0].o = frame[5].o;
	sp[1].o = frame[6].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_maps_generators_BasicGenerator_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Boolf_1);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_ai_Astar_pathfind_int_int_int_int_mindustry_ai_Astar$TileHeuristic_mindustry_ai_Astar$DistanceHeuristic_arc_func_Boolf_R_arc_struct_Seq(ctx, temp0, temp1, temp2, temp3, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_trimDark(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:trimDark", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(452);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(453);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jfloat temp0 = (jfloat)((func_mindustry_core_World_getDarkness_int_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_getDarkness_int_int_R_float])(ctx, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_y));
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(454);
	frame[4].i = (jint(0));
	}
label_7:;
	{
	if ((frame[4].i) >= (jint(4))) goto label_8;
	}
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_8;
	{
	LINE_NUMBER(455);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_x;
	clinit_arc_math_geom_Geometry(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Geometry_d4;
	jint temp1 = temp0 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i)))))->F_x);
	jint temp2 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_y;
	clinit_arc_math_geom_Geometry(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Geometry_d4;
	jfloat temp3 = (jfloat)((func_mindustry_core_World_getDarkness_int_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_getDarkness_int_int_R_float])(ctx, sp[0].o, temp1, (temp2 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i)))))->F_y)));
	if ((floatCompare(temp3, (jfloat(0)), -1)) <= 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(454);
	INST_IINC(4, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(458);
	if ((frame[3].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(459);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[2].o));
	sp[1].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[1].o))->F_wall;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	}
label_13:;
	LINE_NUMBER(461);
	goto label_1;
label_2:;
	LINE_NUMBER(462);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_inverseFloodFill_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:inverseFloodFill", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(465);
	clinit_arc_struct_GridBits(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_GridBits);
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp0 = (jint)((mindustry_world_Tiles *) NULL_CHECK(sp[1].o))->F_width;
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	init_arc_struct_GridBits_int_int(ctx, sp[0].o, temp0, ((jint)((mindustry_world_Tiles *) NULL_CHECK(sp[1].o))->F_height));
	frame[2].o = sp[0].o;
	LINE_NUMBER(467);
	clinit_arc_struct_IntSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(468);
	sp[0].o = frame[3].o;
	jint temp1 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[1].o));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp1);
	}
label_3:;
	{
	LINE_NUMBER(469);
	jint temp0 = (jint)((func_arc_struct_IntSeq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_IntSeq_isEmpty_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(470);
	jint temp0 = (jint)((func_arc_struct_IntSeq_pop_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_IntSeq_pop_R_int])(ctx, (frame[3].o));
	frame[4].i = temp0;
	LINE_NUMBER(471);
	jint temp1 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, (frame[4].i));
	frame[5].i = temp1;
	jint temp2 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, (frame[4].i));
	frame[6].i = temp2;
	LINE_NUMBER(472);
	((func_arc_struct_GridBits_set_int_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_GridBits_set_int_int])(ctx, (frame[2].o), (frame[5].i), (frame[6].i));
	LINE_NUMBER(473);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[7].o = sp[0].o;
	frame[8].i = (((jarray) nullCheck(ctx, (frame[7].o)))->length);
	frame[9].i = (jint(0));
	}
label_10:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_11;
	}
	{
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[9].i)));
	LINE_NUMBER(474);
	frame[11].i = ((frame[5].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[10].o)))->F_x));
	frame[12].i = ((frame[6].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[10].o)))->F_y));
	LINE_NUMBER(475);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp0 = (jint)((func_mindustry_world_Tiles_in_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_in_int_int_R_boolean])(ctx, sp[0].o, (frame[11].i), (frame[12].i));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(476);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[11].i), (frame[12].i));
	frame[13].o = sp[0].o;
	LINE_NUMBER(477);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[13].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_15;
	}
	{
	jint temp0 = (jint)((func_arc_struct_GridBits_get_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_GridBits_get_int_int_R_boolean])(ctx, (frame[2].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[13].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[13].o)))->F_y));
	if (temp0 != 0) goto label_15;
	}
	{
	LINE_NUMBER(478);
	((func_arc_struct_GridBits_set_int_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_GridBits_set_int_int])(ctx, (frame[2].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[13].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[13].o)))->F_y));
	LINE_NUMBER(479);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[13].o));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	}
label_15:;
	{
	LINE_NUMBER(473);
	INST_IINC(9, 1);
	goto label_10;
	}
label_11:;
	LINE_NUMBER(483);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(485);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_20:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(486);
	jint temp0 = (jint)((func_arc_struct_GridBits_get_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_GridBits_get_int_int_R_boolean])(ctx, (frame[2].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_y));
	if (temp0 != 0) goto label_23;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[5].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_23;
	}
	{
	LINE_NUMBER(487);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[5].o));
	sp[1].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[1].o))->F_wall;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	}
label_23:;
	LINE_NUMBER(489);
	goto label_20;
label_21:;
	LINE_NUMBER(490);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_generators_BasicGenerator_lambda$pathfind$0_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:lambda$pathfind$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_BasicGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(448);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jfloat temp0 = (jfloat)((func_mindustry_core_World_getDarkness_int_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_getDarkness_int_int_R_float])(ctx, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y));
	if ((floatCompare(temp0, (jfloat(1)), 1)) > 0) goto label_1;
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

void M_mindustry_maps_generators_BasicGenerator_lambda$brush$0_int_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:lambda$brush$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(432);
	((func_mindustry_maps_generators_BasicGenerator_erase_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_erase_int_int_int])(ctx, (frame[0].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_y), (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_lambda$decoration$0_float_int_int(jcontext ctx, jobject self, jfloat param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:lambda$decoration$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(394);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (jint(4))) goto label_2;
	}
	{
	LINE_NUMBER(395);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = frame[2].i;
	clinit_arc_math_geom_Geometry(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Geometry_d4;
	jint temp1 = temp0 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i)))))->F_x);
	jint temp2 = frame[3].i;
	clinit_arc_math_geom_Geometry(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Geometry_d4;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp1, (temp2 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i)))))->F_y)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(396);
	if ((frame[5].o) == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[5].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	LINE_NUMBER(397);
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(394);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(401);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (jdouble((frame[1].f))));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(402);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[1].o))->F_decoration;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	}
label_7:;
	LINE_NUMBER(404);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_lambda$cells$1_int_arc_struct_GridBits_arc_struct_GridBits_int_int_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jint param3, jint param4, jint param5, jint param6) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:lambda$cells$1", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(294);
	frame[8].i = (jint(0));
	LINE_NUMBER(296);
	frame[9].i = (-(frame[1].i));
	}
label_2:;
	{
	if ((frame[9].i) > (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(297);
	frame[10].i = (-(frame[1].i));
	}
label_5:;
	{
	if ((frame[10].i) > (frame[1].i)) goto label_6;
	}
	{
	LINE_NUMBER(298);
	if ((frame[9].i) != 0) goto label_8;
	}
	INST_ILOAD(10);
	if ((--sp)->i == 0) goto label_9;
label_8:;
	{
	jint temp0 = (jint)SM_arc_math_Mathf_within_float_float_float_R_boolean(ctx, (jfloat((frame[9].i))), (jfloat((frame[10].i))), (jfloat((frame[1].i))));
	if (temp0 != 0) goto label_10;
	}
	goto label_9;
label_10:;
	{
	LINE_NUMBER(299);
	jint temp0 = (frame[6].i) + (frame[9].i);
	jint temp1 = (frame[7].i) + (frame[10].i);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp2 = (jint)((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_width;
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp3 = (jint)SM_arc_util_Structs_inBounds_int_int_int_int_R_boolean(ctx, temp0, temp1, temp2, ((jint)((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_height));
	if (temp3 == 0) goto label_11;
	}
	{
	jint temp0 = (jint)((func_arc_struct_GridBits_get_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_GridBits_get_int_int_R_boolean])(ctx, (frame[2].o), ((frame[6].i) + (frame[9].i)), ((frame[7].i) + (frame[10].i)));
	if (temp0 == 0) goto label_9;
	}
label_11:;
	LINE_NUMBER(300);
	INST_IINC(8, 1);
label_9:;
	{
	LINE_NUMBER(297);
	INST_IINC(10, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(296);
	INST_IINC(9, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(305);
	jint temp0 = (jint)((func_arc_struct_GridBits_get_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_GridBits_get_int_int_R_boolean])(ctx, (frame[2].o), (frame[6].i), (frame[7].i));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(306);
	sp[0].o = frame[3].o;
	jint temp0 = frame[6].i;
	jint temp1 = frame[7].i;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp += 3;
	if ((frame[8].i) < (frame[4].i)) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	POP_N(4); // Pop method args
	((func_arc_struct_GridBits_set_int_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_GridBits_set_int_int_boolean])(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i);
	goto label_16;
label_12:;
	{
	LINE_NUMBER(308);
	sp[0].o = frame[3].o;
	jint temp0 = frame[6].i;
	jint temp1 = frame[7].i;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp += 3;
	if ((frame[8].i) <= (frame[5].i)) goto label_17;
	}
	INST_ICONST(1);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	POP_N(4); // Pop method args
	((func_arc_struct_GridBits_set_int_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_GridBits_set_int_int_boolean])(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i);
label_16:;
	LINE_NUMBER(310);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_lambda$cells$0_arc_struct_GridBits_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:lambda$cells$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(290);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[1].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, sp[1].o, (frame[2].i), (frame[3].i));
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[1].o);
	jint temp2 = (jint)((func_mindustry_world_Block_isAir_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Block_isAir_R_boolean])(ctx, sp[1].o);
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp += 3;
	if (temp2 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	POP_N(4); // Pop method args
	((func_arc_struct_GridBits_set_int_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_GridBits_set_int_int_boolean])(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_lambda$scatter$0_float_mindustry_world_Block_mindustry_world_Block_int_int(jcontext ctx, jobject self, jfloat param0, jobject param1, jobject param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:lambda$scatter$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (jdouble((frame[1].f))));
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	if (sp[0].o != (frame[2].o)) goto label_2;
	}
	{
	LINE_NUMBER(267);
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor = (jref) (frame[3].o);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(268);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o != (frame[2].o)) goto label_4;
	}
	{
	LINE_NUMBER(269);
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_block = (jref) (frame[3].o);
	}
label_4:;
	LINE_NUMBER(271);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_lambda$distort$0_float_float_Array1_short_Array1_short_int_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jobject param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:lambda$distort$0", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(249);
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	frame[7].i = ((temp0 * ((jint)((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_width)) + (frame[5].i));
	LINE_NUMBER(250);
	jfloat temp1 = jfloat((frame[5].i));
	jfloat temp2 = (jfloat)((func_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_R_float])(ctx, (frame[0].o), ((jfloat((frame[5].i))) - (jfloat(155.0f))), ((jfloat((frame[6].i))) - (jfloat(200.0f))), (jdouble((frame[1].f))), (jdouble((frame[2].f))));
	frame[8].f = ((temp1 + temp2) - ((frame[2].f) / (jfloat(2))));
	jfloat temp3 = jfloat((frame[6].i));
	jfloat temp4 = (jfloat)((func_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_R_float])(ctx, (frame[0].o), ((jfloat((frame[5].i))) + (jfloat(155.0f))), ((jfloat((frame[6].i))) + (jfloat(155.0f))), (jdouble((frame[1].f))), (jdouble((frame[2].f))));
	frame[9].f = ((temp3 + temp4) - ((frame[2].f) / (jfloat(2))));
	LINE_NUMBER(251);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp5 = jint((frame[8].f));
	jint temp6 = jint(0);
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp7 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp5, temp6, (((jint)((mindustry_world_Tiles *) NULL_CHECK(sp[1].o))->F_width) - (jint(1))));
	jint temp8 = jint((frame[9].f));
	jint temp9 = jint(0);
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp10 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp8, temp9, (((jint)((mindustry_world_Tiles *) NULL_CHECK(sp[1].o))->F_height) - (jint(1))));
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp7, temp10);
	frame[10].o = sp[0].o;
	LINE_NUMBER(252);
	sp[0].o = frame[3].o;
	jint temp11 = frame[7].i;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[10].o));
	ARRAY_ACCESS(jshort, sp[0].o, temp11) = ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id);
	LINE_NUMBER(253);
	sp[0].o = frame[4].o;
	jint temp12 = frame[7].i;
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[10].o));
	ARRAY_ACCESS(jshort, sp[0].o, temp12) = ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id);
	LINE_NUMBER(254);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_lambda$tech$0_int_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jobject param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:lambda$tech$0", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(227);
	frame[7].i = ((frame[5].i) % (frame[1].i));
	frame[8].i = ((frame[6].i) % (frame[1].i));
	LINE_NUMBER(228);
	frame[9].i = ((frame[5].i) / (frame[1].i));
	frame[10].i = ((frame[6].i) / (frame[1].i));
	LINE_NUMBER(229);
	jfloat temp0 = (jfloat)((func_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_R_float])(ctx, (frame[0].o), (jfloat((frame[9].i))), (jfloat((frame[10].i))), (jdouble(0.20000000298023224)), (jdouble(1)));
	if ((floatCompare(temp0, (jfloat(0.63f)), -1)) <= 0) goto label_6;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_R_float])(ctx, (frame[0].o), (jfloat((frame[9].i))), (jfloat(((frame[10].i) + (999)))), (jdouble(200.0)), (jdouble(1)));
	if ((floatCompare(temp0, (jfloat(0.6f)), -1)) <= 0) goto label_6;
	}
	INST_ILOAD(7);
	if ((--sp)->i == 0) goto label_7;
	INST_ILOAD(8);
	if ((--sp)->i == 0) goto label_7;
	{
	if ((frame[7].i) == ((frame[1].i) - (jint(1)))) goto label_7;
	}
	{
	if ((frame[8].i) != ((frame[1].i) - (jint(1)))) goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jfloat temp0 = (jfloat)((func_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_R_float])(ctx, (frame[0].o), (jfloat(((frame[5].i) + (jint(2299171))))), (jfloat((frame[6].i))), (jdouble(40.0)), (jdouble(1)));
	jint temp1 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (jdouble(temp0)));
	if (temp1 == 0) goto label_8;
	}
	{
	LINE_NUMBER(231);
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor = (jref) (frame[2].o);
	LINE_NUMBER(232);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_dst_float_float_float_float_R_float(ctx, (jfloat((frame[7].i))), (jfloat((frame[8].i))), (jfloat(((frame[1].i) / (jint(2))))), (jfloat(((frame[1].i) / (jint(2))))));
	if ((floatCompare(temp0, (((jfloat((frame[1].i))) / (jfloat(2))) + (jfloat(2))), -1)) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(233);
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor = (jref) (frame[3].o);
	}
label_8:;
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (jdouble(0.7)));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(238);
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_block = (jref) (frame[4].o);
	}
label_6:;
	LINE_NUMBER(241);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_lambda$overlay$0_int_float_float_float_float_mindustry_world_Block_mindustry_world_Block_int_int(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5, jobject param6, jint param7, jint param8) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:lambda$overlay$0", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	frame[8].i = param7;
	frame[9].i = param8;
	{
	LINE_NUMBER(212);
	jfloat temp0 = (jfloat)((func_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_R_float])(ctx, (frame[0].o), (jfloat((frame[8].i))), (jfloat((frame[9].i))), (jdouble((frame[1].i))), (jdouble((frame[2].f))), (jdouble((frame[3].f))));
	if ((floatCompare(temp0, (frame[4].f), -1)) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (jdouble((frame[5].f))));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[8].i), (frame[9].i));
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	if (sp[0].o != (frame[6].o)) goto label_1;
	}
	{
	LINE_NUMBER(213);
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_ore = (jref) (frame[7].o);
	}
label_1:;
	LINE_NUMBER(215);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_lambda$noise$0_int_float_float_float_mindustry_world_Block_mindustry_world_Block_int_int(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5, jint param6, jint param7) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:lambda$noise$0", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	{
	LINE_NUMBER(200);
	jfloat temp0 = (jfloat)((func_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_R_float])(ctx, (frame[0].o), (jfloat((frame[1].i))), (frame[2].f), (jdouble((frame[3].f))), (jdouble((frame[7].i))), (jdouble((frame[8].i))));
	if ((floatCompare(temp0, (frame[4].f), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[7].i), (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(202);
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor = (jref) (frame[5].o);
	LINE_NUMBER(203);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[9].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) == 0) goto label_1;
	}
	{
	LINE_NUMBER(204);
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_block = (jref) (frame[6].o);
	}
label_1:;
	LINE_NUMBER(207);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_lambda$terrain$0_float_float_float_mindustry_world_Block_int_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:lambda$terrain$0", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(183);
	jfloat temp0 = (jfloat)((func_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_R_float])(ctx, (frame[0].o), (jfloat((frame[5].i))), (jfloat((frame[6].i))), (jdouble(5.0)), (jdouble(0.5)), (jdouble((frame[1].f))));
	jfloat temp1 = temp0 * (frame[2].f);
	jfloat temp2 = (jfloat((frame[5].i))) / (jfloat(((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width)));
	jfloat temp3 = (jfloat((frame[6].i))) / (jfloat(((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height)));
	jfloat temp4 = jfloat(0.5f);
	jfloat temp5 = jfloat(0.5f);
	LINE_NUMBER(184);
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_dst_float_float_float_float_R_float(ctx, temp2, temp3, temp4, temp5);
	frame[7].d = (jdouble((temp1 + (temp6 * (frame[3].f)))));
	LINE_NUMBER(186);
	jint temp7 = frame[5].i;
	jint temp8 = frame[6].i;
	jint temp9 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[5].i) - (((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width) - (jint(1)))));
	jint temp10 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[6].i) - (((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height) - (jint(1)))));
	jint temp11 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp9, temp10);
	jint temp12 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp8, temp11);
	jint temp13 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp7, temp12);
	frame[9].d = (jdouble(temp13));
	LINE_NUMBER(187);
	frame[11].d = (jdouble(5.0));
	LINE_NUMBER(188);
	if ((doubleCompare((frame[9].d), (frame[11].d), 1)) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(189);
	frame[7].d = ((frame[7].d) + ((((frame[11].d) - (frame[9].d)) / (frame[11].d)) / (jdouble(1.5))));
	}
label_5:;
	{
	LINE_NUMBER(192);
	if ((doubleCompare((frame[7].d), (jdouble(0.9)), -1)) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(193);
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_block = (jref) (frame[4].o);
	}
label_7:;
	LINE_NUMBER(195);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_lambda$wallOre$0_float_float_mindustry_world_Block_boolean_mindustry_world_Block_int_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jbool param3, jobject param4, jint param5, jint param6) {
	NULL_CHECK(self);
	jtype frame[25];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:lambda$wallOre$0", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(135);
	frame[8].i = (jint(0));
	LINE_NUMBER(136);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d8;
	frame[9].o = sp[0].o;
	frame[10].i = (((jarray) nullCheck(ctx, (frame[9].o)))->length);
	frame[11].i = (jint(0));
	}
label_6:;
	{
	if ((frame[11].i) >= (frame[10].i)) goto label_7;
	}
	{
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (frame[11].i)));
	LINE_NUMBER(137);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((frame[6].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[12].o)))->F_x)), ((frame[7].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[12].o)))->F_y)));
	frame[13].o = sp[0].o;
	LINE_NUMBER(138);
	if ((frame[13].o) == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[13].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	{
	LINE_NUMBER(139);
	frame[8].i = (jint(1));
	LINE_NUMBER(140);
	goto label_7;
	}
label_10:;
	{
	LINE_NUMBER(136);
	INST_IINC(11, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(144);
	if ((frame[8].i) == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_double_R_float])(ctx, (frame[0].o), (jfloat(((frame[6].i) + (78)))), (jfloat((frame[7].i))), (jdouble(4.0)), (jdouble(0.699999988079071)), (jdouble((frame[1].f))), (jdouble(1)));
	if ((floatCompare(temp0, (frame[2].f), -1)) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o != (frame[3].o)) goto label_1;
	}
	{
	LINE_NUMBER(145);
	if ((frame[4].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(146);
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_ore = (jref) (frame[5].o);
	goto label_1;
	}
label_14:;
	{
	LINE_NUMBER(148);
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_block = (jref) (frame[5].o);
	}
label_1:;
	LINE_NUMBER(152);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_lambda$ore$0_mindustry_world_Block_float_float_mindustry_world_Block_int_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jobject param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:lambda$ore$0", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(100);
	jfloat temp0 = jfloat(0.5f);
	jfloat temp1 = (jfloat)((func_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_R_float])(ctx, (frame[0].o), (jfloat((frame[5].i))), ((jfloat((frame[6].i))) + ((frame[2].f) * (jfloat(999.0f)))), (jdouble(2.0)), (jdouble(0.7)), (jdouble(((jfloat(40.0f)) + ((frame[2].f) * (jfloat(2)))))));
	jfloat temp2 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp0 - temp1));
	if ((floatCompare(temp2, ((jfloat(0.26f)) * (frame[3].f)), -1)) <= 0) goto label_2;
	}
	{
	jfloat temp0 = jfloat(0.5f);
	sp[0].o = frame[0].o;
	jfloat temp1 = jfloat((frame[5].i));
	jfloat temp2 = (jfloat((frame[6].i))) - ((frame[2].f) * (jfloat(999.0f)));
	jdouble temp3 = jdouble(1);
	jdouble temp4 = jdouble(1);
	jdouble temp5 = jdouble(((jfloat(30.0f)) + ((frame[2].f) * (jfloat(4.0f)))));
	LINE_NUMBER(101);
	jfloat temp6 = (jfloat)((func_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_R_float])(ctx, sp[0].o, temp1, temp2, temp3, temp4, temp5);
	jfloat temp7 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp0 - temp6));
	if ((floatCompare(temp7, ((jfloat(0.37f)) * (frame[3].f)), -1)) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(102);
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_ore = (jref) (frame[4].o);
	}
label_2:;
	LINE_NUMBER(104);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_lambda$ores$0_arc_struct_Seq_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:lambda$ores$0", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(84);
	frame[4].i = ((frame[2].i) - (jint(4)));
	frame[5].i = ((frame[3].i) + (23));
	LINE_NUMBER(85);
	frame[6].i = (((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size) - (jint(1)));
	}
label_4:;
	INST_ILOAD(6);
	if ((--sp)->i < 0) goto label_5;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[6].i));
	frame[7].o = (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	LINE_NUMBER(87);
	jfloat temp0 = jfloat(0.5f);
	jfloat temp1 = (jfloat)((func_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_R_float])(ctx, (frame[0].o), (jfloat((frame[4].i))), (jfloat(((frame[5].i) + ((frame[6].i) * (999))))), (jdouble(2.0)), (jdouble(0.7)), (jdouble(((40) + ((frame[6].i) * (jint(2)))))));
	jfloat temp2 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp0 - temp1));
	if ((floatCompare(temp2, (jfloat(0.26f)), -1)) <= 0) goto label_8;
	}
	{
	jfloat temp0 = jfloat(0.5f);
	sp[0].o = frame[0].o;
	jfloat temp1 = jfloat((frame[4].i));
	jfloat temp2 = jfloat(((frame[5].i) - ((frame[6].i) * (999))));
	jdouble temp3 = jdouble(1);
	jdouble temp4 = jdouble(1);
	jdouble temp5 = jdouble(((30) + ((frame[6].i) * (jint(4)))));
	LINE_NUMBER(88);
	jfloat temp6 = (jfloat)((func_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_R_float])(ctx, sp[0].o, temp1, temp2, temp3, temp4, temp5);
	jfloat temp7 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp0 - temp6));
	if ((floatCompare(temp7, (jfloat(0.37f)), -1)) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(89);
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_ore = (jref) (frame[7].o);
	LINE_NUMBER(90);
	goto label_5;
	}
label_8:;
	{
	LINE_NUMBER(85);
	INST_IINC(6, -1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(93);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_lambda$median$2_mindustry_world_Block_Array1_short_Array1_short_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:lambda$median$2", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(73);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[1].o, ((jint)ARRAY_ACCESS(jshort, (frame[2].o), ((frame[4].i) + ((frame[5].i) * ((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width))))));
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[1].o, ((jint)ARRAY_ACCESS(jshort, (frame[3].o), ((frame[4].i) + ((frame[5].i) * ((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width))))));
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_lambda$median$0_mindustry_world_Block_int_Array1_short_double_Array1_short_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jdouble param3, jobject param4, jint param5, jint param6) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:lambda$median$0", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].d = param3;
	frame[6].o = param4;
	frame[7].i = param5;
	frame[8].i = param6;
	{
	LINE_NUMBER(57);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[7].i), (frame[8].i));
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(59);
	clinit_mindustry_maps_generators_BasicGenerator(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_generators_BasicGenerator_ints1;
	((func_arc_struct_ShortSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ShortSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(60);
	clinit_mindustry_maps_generators_BasicGenerator(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_generators_BasicGenerator_ints2;
	((func_arc_struct_ShortSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ShortSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(61);
	jint temp0 = frame[7].i;
	jint temp1 = frame[8].i;
	jint temp2 = (jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width;
	jint temp3 = (jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height;
	jint temp4 = frame[2].i;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_29(ctx);
		auto proxy = (mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_29 *) gcAlloc(ctx, &class_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_29);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_math_geom_Geometry_circle_int_int_int_int_int_arc_func_Intc2(ctx, temp0, temp1, temp2, temp3, temp4, sp[0].o);
	LINE_NUMBER(65);
	clinit_mindustry_maps_generators_BasicGenerator(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_generators_BasicGenerator_ints1;
	((func_arc_struct_ShortSeq_sort) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ShortSeq_sort])(ctx, sp[0].o);
	LINE_NUMBER(66);
	clinit_mindustry_maps_generators_BasicGenerator(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_generators_BasicGenerator_ints2;
	((func_arc_struct_ShortSeq_sort) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ShortSeq_sort])(ctx, sp[0].o);
	LINE_NUMBER(68);
	sp[0].o = frame[3].o;
	jint temp5 = (frame[7].i) + ((frame[8].i) * ((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width));
	clinit_mindustry_maps_generators_BasicGenerator(ctx);
	sp[1].o = (jobject)SF_mindustry_maps_generators_BasicGenerator_ints1;
	clinit_mindustry_maps_generators_BasicGenerator(ctx);
	sp[2].o = (jobject)SF_mindustry_maps_generators_BasicGenerator_ints1;
	jint temp6 = jint(((jdouble(((jint)((arc_struct_ShortSeq *) NULL_CHECK(sp[2].o))->F_size))) * (frame[4].d)));
	jint temp7 = jint(0);
	clinit_mindustry_maps_generators_BasicGenerator(ctx);
	sp[2].o = (jobject)SF_mindustry_maps_generators_BasicGenerator_ints1;
	jint temp8 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp6, temp7, (((jint)((arc_struct_ShortSeq *) NULL_CHECK(sp[2].o))->F_size) - (jint(1))));
	jint temp9 = (jint)((func_arc_struct_ShortSeq_get_int_R_short) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ShortSeq_get_int_R_short])(ctx, sp[1].o, temp8);
	ARRAY_ACCESS(jshort, sp[0].o, temp5) = temp9;
	LINE_NUMBER(69);
	sp[0].o = frame[6].o;
	jint temp10 = (frame[7].i) + ((frame[8].i) * ((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width));
	clinit_mindustry_maps_generators_BasicGenerator(ctx);
	sp[1].o = (jobject)SF_mindustry_maps_generators_BasicGenerator_ints2;
	clinit_mindustry_maps_generators_BasicGenerator(ctx);
	sp[2].o = (jobject)SF_mindustry_maps_generators_BasicGenerator_ints2;
	jint temp11 = jint(((jdouble(((jint)((arc_struct_ShortSeq *) NULL_CHECK(sp[2].o))->F_size))) * (frame[4].d)));
	jint temp12 = jint(0);
	clinit_mindustry_maps_generators_BasicGenerator(ctx);
	sp[2].o = (jobject)SF_mindustry_maps_generators_BasicGenerator_ints2;
	jint temp13 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp11, temp12, (((jint)((arc_struct_ShortSeq *) NULL_CHECK(sp[2].o))->F_size) - (jint(1))));
	jint temp14 = (jint)((func_arc_struct_ShortSeq_get_int_R_short) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ShortSeq_get_int_R_short])(ctx, sp[1].o, temp13);
	ARRAY_ACCESS(jshort, sp[0].o, temp10) = temp14;
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BasicGenerator_lambda$median$1_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:lambda$median$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(62);
	clinit_mindustry_maps_generators_BasicGenerator(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_generators_BasicGenerator_ints1;
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[1].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, sp[1].o, (frame[1].i), (frame[2].i));
	jint temp0 = (jint)((func_mindustry_world_Tile_floorID_R_short) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_floorID_R_short])(ctx, sp[1].o);
	((func_arc_struct_ShortSeq_add_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ShortSeq_add_short])(ctx, sp[0].o, temp0);
	LINE_NUMBER(63);
	clinit_mindustry_maps_generators_BasicGenerator(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_generators_BasicGenerator_ints2;
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[1].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, sp[1].o, (frame[1].i), (frame[2].i));
	jint temp1 = (jint)((func_mindustry_world_Tile_blockID_R_short) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_blockID_R_short])(ctx, sp[1].o);
	((func_arc_struct_ShortSeq_add_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ShortSeq_add_short])(ctx, sp[0].o, temp1);
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_maps_generators_BasicGenerator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_BasicGenerator(ctx);
	{
	LINE_NUMBER(19);
	clinit_arc_struct_ShortSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ShortSeq);
	init_arc_struct_ShortSeq(ctx, sp[0].o);
	clinit_mindustry_maps_generators_BasicGenerator(ctx);
	SF_mindustry_maps_generators_BasicGenerator_ints1 = sp[0].o;
	clinit_arc_struct_ShortSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ShortSeq);
	init_arc_struct_ShortSeq(ctx, sp[0].o);
	clinit_mindustry_maps_generators_BasicGenerator(ctx);
	SF_mindustry_maps_generators_BasicGenerator_ints2 = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_maps_generators_BasicGenerator;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field tiles
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field floor
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field block
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field ore
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[8]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_maps_generators_BasicGenerator[] {
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
	(void *) M_mindustry_maps_generators_BasicGenerator_generate_mindustry_world_Tiles_mindustry_world_WorldParams,
	(void *) M_mindustry_maps_generators_WorldGenerator_postGenerate_mindustry_world_Tiles,
	(void *) M_mindustry_maps_generators_BasicGenerator_generate,
	(void *) M_mindustry_maps_generators_BasicGenerator_median_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_median_int_double,
	(void *) M_mindustry_maps_generators_BasicGenerator_median_int_double_mindustry_world_Block,
	(void *) M_mindustry_maps_generators_BasicGenerator_ores_arc_struct_Seq,
	(void *) M_mindustry_maps_generators_BasicGenerator_ore_mindustry_world_Block_mindustry_world_Block_float_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_oreAround_mindustry_world_Block_mindustry_world_Block_int_float_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_wallOre_mindustry_world_Block_mindustry_world_Block_float_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_cliffs,
	(void *) M_mindustry_maps_generators_BasicGenerator_terrain_mindustry_world_Block_float_float_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_noise_mindustry_world_Block_mindustry_world_Block_int_float_float_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_overlay_mindustry_world_Block_mindustry_world_Block_float_int_float_float_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_tech,
	(void *) M_mindustry_maps_generators_BasicGenerator_tech_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block,
	(void *) M_mindustry_maps_generators_BasicGenerator_distort_float_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_scatter_mindustry_world_Block_mindustry_world_Block_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_each_arc_func_Intc2,
	(void *) M_mindustry_maps_generators_BasicGenerator_cells_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_cells_int_int_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_R_float,
	(void *) nullptr,
	(void *) M_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_R_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_pass_arc_func_Intc2,
	(void *) M_mindustry_maps_generators_BasicGenerator_nearWall_int_int_R_boolean,
	(void *) M_mindustry_maps_generators_BasicGenerator_nearAir_int_int_R_boolean,
	(void *) M_mindustry_maps_generators_BasicGenerator_removeWall_int_int_int_arc_func_Boolf,
	(void *) M_mindustry_maps_generators_BasicGenerator_near_int_int_int_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_maps_generators_BasicGenerator_decoration_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_blend_mindustry_world_Block_mindustry_world_Block_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_brush_arc_struct_Seq_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_erase_int_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_pathfind_int_int_int_int_mindustry_ai_Astar$TileHeuristic_mindustry_ai_Astar$DistanceHeuristic_R_arc_struct_Seq,
	(void *) M_mindustry_maps_generators_BasicGenerator_trimDark,
	(void *) M_mindustry_maps_generators_BasicGenerator_inverseFloodFill_mindustry_world_Tile,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$brush$0_int_mindustry_world_Tile,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$decoration$0_float_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$cells$1_int_arc_struct_GridBits_arc_struct_GridBits_int_int_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$cells$0_arc_struct_GridBits_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$scatter$0_float_mindustry_world_Block_mindustry_world_Block_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$distort$0_float_float_Array1_short_Array1_short_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$tech$0_int_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$overlay$0_int_float_float_float_float_mindustry_world_Block_mindustry_world_Block_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$noise$0_int_float_float_float_mindustry_world_Block_mindustry_world_Block_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$terrain$0_float_float_float_mindustry_world_Block_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$wallOre$0_float_float_mindustry_world_Block_boolean_mindustry_world_Block_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$ore$0_mindustry_world_Block_float_float_mindustry_world_Block_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$ores$0_arc_struct_Seq_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$median$2_mindustry_world_Block_Array1_short_Array1_short_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$median$0_mindustry_world_Block_int_Array1_short_double_Array1_short_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$median$1_int_int,
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
	{ "generate", "(Lmindustry/world/Tiles;Lmindustry/world/WorldParams;)V" },
	{ "postGenerate", "(Lmindustry/world/Tiles;)V" },
	{ "generate", "()V" },
	{ "median", "(I)V" },
	{ "median", "(ID)V" },
	{ "median", "(IDLmindustry/world/Block;)V" },
	{ "ores", "(Larc/struct/Seq;)V" },
	{ "ore", "(Lmindustry/world/Block;Lmindustry/world/Block;FF)V" },
	{ "oreAround", "(Lmindustry/world/Block;Lmindustry/world/Block;IFF)V" },
	{ "wallOre", "(Lmindustry/world/Block;Lmindustry/world/Block;FF)V" },
	{ "cliffs", "()V" },
	{ "terrain", "(Lmindustry/world/Block;FFF)V" },
	{ "noise", "(Lmindustry/world/Block;Lmindustry/world/Block;IFFF)V" },
	{ "overlay", "(Lmindustry/world/Block;Lmindustry/world/Block;FIFFF)V" },
	{ "tech", "()V" },
	{ "tech", "(Lmindustry/world/Block;Lmindustry/world/Block;Lmindustry/world/Block;)V" },
	{ "distort", "(FF)V" },
	{ "scatter", "(Lmindustry/world/Block;Lmindustry/world/Block;F)V" },
	{ "each", "(Larc/func/Intc2;)V" },
	{ "cells", "(I)V" },
	{ "cells", "(IIII)V" },
	{ "noise", "(FFDD)F" },
	{ "noise", "(FFDDDD)F" },
	{ "noise", "(FFDDD)F" },
	{ "pass", "(Larc/func/Intc2;)V" },
	{ "nearWall", "(II)Z" },
	{ "nearAir", "(II)Z" },
	{ "removeWall", "(IIILarc/func/Boolf;)V" },
	{ "near", "(IIILmindustry/world/Block;)Z" },
	{ "decoration", "(F)V" },
	{ "blend", "(Lmindustry/world/Block;Lmindustry/world/Block;F)V" },
	{ "brush", "(Larc/struct/Seq;I)V" },
	{ "erase", "(III)V" },
	{ "pathfind", "(IIIILmindustry/ai/Astar$TileHeuristic;Lmindustry/ai/Astar$DistanceHeuristic;)Larc/struct/Seq;" },
	{ "trimDark", "()V" },
	{ "inverseFloodFill", "(Lmindustry/world/Tile;)V" },
	{ "lambda$brush$0", "(ILmindustry/world/Tile;)V" },
	{ "lambda$decoration$0", "(FII)V" },
	{ "lambda$cells$1", "(ILarc/struct/GridBits;Larc/struct/GridBits;IIII)V" },
	{ "lambda$cells$0", "(Larc/struct/GridBits;II)V" },
	{ "lambda$scatter$0", "(FLmindustry/world/Block;Lmindustry/world/Block;II)V" },
	{ "lambda$distort$0", "(FF[S[SII)V" },
	{ "lambda$tech$0", "(ILmindustry/world/Block;Lmindustry/world/Block;Lmindustry/world/Block;II)V" },
	{ "lambda$overlay$0", "(IFFFFLmindustry/world/Block;Lmindustry/world/Block;II)V" },
	{ "lambda$noise$0", "(IFFFLmindustry/world/Block;Lmindustry/world/Block;II)V" },
	{ "lambda$terrain$0", "(FFFLmindustry/world/Block;II)V" },
	{ "lambda$wallOre$0", "(FFLmindustry/world/Block;ZLmindustry/world/Block;II)V" },
	{ "lambda$ore$0", "(Lmindustry/world/Block;FFLmindustry/world/Block;II)V" },
	{ "lambda$ores$0", "(Larc/struct/Seq;II)V" },
	{ "lambda$median$2", "(Lmindustry/world/Block;[S[SII)V" },
	{ "lambda$median$0", "(Lmindustry/world/Block;I[SD[SII)V" },
	{ "lambda$median$1", "(II)V" },
};

static jclass interfaces[] { &class_mindustry_maps_generators_WorldGenerator, };

static FieldMetadata fields[] {
	{ "ints1", &class_arc_struct_ShortSeq, (intptr_t) &SF_mindustry_maps_generators_BasicGenerator_ints1, "Larc/struct/ShortSeq;", 28 },
	{ "ints2", &class_arc_struct_ShortSeq, (intptr_t) &SF_mindustry_maps_generators_BasicGenerator_ints2, "Larc/struct/ShortSeq;", 28 },
	{ "rand", &class_arc_math_Rand, offsetof(mindustry_maps_generators_BasicGenerator, F_rand), "Larc/math/Rand;", 4 },
	{ "width", &class_int, offsetof(mindustry_maps_generators_BasicGenerator, F_width), "I", 4 },
	{ "height", &class_int, offsetof(mindustry_maps_generators_BasicGenerator, F_height), "I", 4 },
	{ "tiles", &class_mindustry_world_Tiles, offsetof(mindustry_maps_generators_BasicGenerator, F_tiles), "Lmindustry/world/Tiles;", 4 },
	{ "floor", &class_mindustry_world_Block, offsetof(mindustry_maps_generators_BasicGenerator, F_floor), "Lmindustry/world/Block;", 4 },
	{ "block", &class_mindustry_world_Block, offsetof(mindustry_maps_generators_BasicGenerator, F_block), "Lmindustry/world/Block;", 4 },
	{ "ore", &class_mindustry_world_Block, offsetof(mindustry_maps_generators_BasicGenerator, F_ore), "Lmindustry/world/Block;", 4 },
	{ "defaultLoadout", &class_mindustry_game_Schematic, offsetof(mindustry_maps_generators_BasicGenerator, F_defaultLoadout), "Lmindustry/game/Schematic;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_generators_BasicGenerator, 0, "()V", 1 },
	{ "generate", (intptr_t) M_mindustry_maps_generators_BasicGenerator_generate_mindustry_world_Tiles_mindustry_world_WorldParams, VTABLE_mindustry_maps_generators_BasicGenerator_generate_mindustry_world_Tiles_mindustry_world_WorldParams, "(Lmindustry/world/Tiles;Lmindustry/world/WorldParams;)V", 1 },
	{ "generate", (intptr_t) M_mindustry_maps_generators_BasicGenerator_generate, VTABLE_mindustry_maps_generators_BasicGenerator_generate, "()V", 4 },
	{ "median", (intptr_t) M_mindustry_maps_generators_BasicGenerator_median_int, VTABLE_mindustry_maps_generators_BasicGenerator_median_int, "(I)V", 1 },
	{ "median", (intptr_t) M_mindustry_maps_generators_BasicGenerator_median_int_double, VTABLE_mindustry_maps_generators_BasicGenerator_median_int_double, "(ID)V", 1 },
	{ "median", (intptr_t) M_mindustry_maps_generators_BasicGenerator_median_int_double_mindustry_world_Block, VTABLE_mindustry_maps_generators_BasicGenerator_median_int_double_mindustry_world_Block, "(IDLmindustry/world/Block;)V", 1 },
	{ "ores", (intptr_t) M_mindustry_maps_generators_BasicGenerator_ores_arc_struct_Seq, VTABLE_mindustry_maps_generators_BasicGenerator_ores_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "ore", (intptr_t) M_mindustry_maps_generators_BasicGenerator_ore_mindustry_world_Block_mindustry_world_Block_float_float, VTABLE_mindustry_maps_generators_BasicGenerator_ore_mindustry_world_Block_mindustry_world_Block_float_float, "(Lmindustry/world/Block;Lmindustry/world/Block;FF)V", 1 },
	{ "oreAround", (intptr_t) M_mindustry_maps_generators_BasicGenerator_oreAround_mindustry_world_Block_mindustry_world_Block_int_float_float, VTABLE_mindustry_maps_generators_BasicGenerator_oreAround_mindustry_world_Block_mindustry_world_Block_int_float_float, "(Lmindustry/world/Block;Lmindustry/world/Block;IFF)V", 1 },
	{ "wallOre", (intptr_t) M_mindustry_maps_generators_BasicGenerator_wallOre_mindustry_world_Block_mindustry_world_Block_float_float, VTABLE_mindustry_maps_generators_BasicGenerator_wallOre_mindustry_world_Block_mindustry_world_Block_float_float, "(Lmindustry/world/Block;Lmindustry/world/Block;FF)V", 1 },
	{ "cliffs", (intptr_t) M_mindustry_maps_generators_BasicGenerator_cliffs, VTABLE_mindustry_maps_generators_BasicGenerator_cliffs, "()V", 1 },
	{ "terrain", (intptr_t) M_mindustry_maps_generators_BasicGenerator_terrain_mindustry_world_Block_float_float_float, VTABLE_mindustry_maps_generators_BasicGenerator_terrain_mindustry_world_Block_float_float_float, "(Lmindustry/world/Block;FFF)V", 1 },
	{ "noise", (intptr_t) M_mindustry_maps_generators_BasicGenerator_noise_mindustry_world_Block_mindustry_world_Block_int_float_float_float, VTABLE_mindustry_maps_generators_BasicGenerator_noise_mindustry_world_Block_mindustry_world_Block_int_float_float_float, "(Lmindustry/world/Block;Lmindustry/world/Block;IFFF)V", 1 },
	{ "overlay", (intptr_t) M_mindustry_maps_generators_BasicGenerator_overlay_mindustry_world_Block_mindustry_world_Block_float_int_float_float_float, VTABLE_mindustry_maps_generators_BasicGenerator_overlay_mindustry_world_Block_mindustry_world_Block_float_int_float_float_float, "(Lmindustry/world/Block;Lmindustry/world/Block;FIFFF)V", 1 },
	{ "tech", (intptr_t) M_mindustry_maps_generators_BasicGenerator_tech, VTABLE_mindustry_maps_generators_BasicGenerator_tech, "()V", 1 },
	{ "tech", (intptr_t) M_mindustry_maps_generators_BasicGenerator_tech_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block, VTABLE_mindustry_maps_generators_BasicGenerator_tech_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block, "(Lmindustry/world/Block;Lmindustry/world/Block;Lmindustry/world/Block;)V", 1 },
	{ "distort", (intptr_t) M_mindustry_maps_generators_BasicGenerator_distort_float_float, VTABLE_mindustry_maps_generators_BasicGenerator_distort_float_float, "(FF)V", 1 },
	{ "scatter", (intptr_t) M_mindustry_maps_generators_BasicGenerator_scatter_mindustry_world_Block_mindustry_world_Block_float, VTABLE_mindustry_maps_generators_BasicGenerator_scatter_mindustry_world_Block_mindustry_world_Block_float, "(Lmindustry/world/Block;Lmindustry/world/Block;F)V", 1 },
	{ "each", (intptr_t) M_mindustry_maps_generators_BasicGenerator_each_arc_func_Intc2, VTABLE_mindustry_maps_generators_BasicGenerator_each_arc_func_Intc2, "(Larc/func/Intc2;)V", 1 },
	{ "cells", (intptr_t) M_mindustry_maps_generators_BasicGenerator_cells_int, VTABLE_mindustry_maps_generators_BasicGenerator_cells_int, "(I)V", 1 },
	{ "cells", (intptr_t) M_mindustry_maps_generators_BasicGenerator_cells_int_int_int_int, VTABLE_mindustry_maps_generators_BasicGenerator_cells_int_int_int_int, "(IIII)V", 1 },
	{ "noise", (intptr_t) M_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_R_float, VTABLE_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_R_float, "(FFDD)F", 4 },
	{ "noise", 0, VTABLE_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_double_R_float, "(FFDDDD)F", 1028 },
	{ "noise", (intptr_t) M_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_R_float, VTABLE_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_R_float, "(FFDDD)F", 4 },
	{ "pass", (intptr_t) M_mindustry_maps_generators_BasicGenerator_pass_arc_func_Intc2, VTABLE_mindustry_maps_generators_BasicGenerator_pass_arc_func_Intc2, "(Larc/func/Intc2;)V", 1 },
	{ "nearWall", (intptr_t) M_mindustry_maps_generators_BasicGenerator_nearWall_int_int_R_boolean, VTABLE_mindustry_maps_generators_BasicGenerator_nearWall_int_int_R_boolean, "(II)Z", 1 },
	{ "nearAir", (intptr_t) M_mindustry_maps_generators_BasicGenerator_nearAir_int_int_R_boolean, VTABLE_mindustry_maps_generators_BasicGenerator_nearAir_int_int_R_boolean, "(II)Z", 1 },
	{ "removeWall", (intptr_t) M_mindustry_maps_generators_BasicGenerator_removeWall_int_int_int_arc_func_Boolf, VTABLE_mindustry_maps_generators_BasicGenerator_removeWall_int_int_int_arc_func_Boolf, "(IIILarc/func/Boolf;)V", 1 },
	{ "near", (intptr_t) M_mindustry_maps_generators_BasicGenerator_near_int_int_int_mindustry_world_Block_R_boolean, VTABLE_mindustry_maps_generators_BasicGenerator_near_int_int_int_mindustry_world_Block_R_boolean, "(IIILmindustry/world/Block;)Z", 1 },
	{ "decoration", (intptr_t) M_mindustry_maps_generators_BasicGenerator_decoration_float, VTABLE_mindustry_maps_generators_BasicGenerator_decoration_float, "(F)V", 1 },
	{ "blend", (intptr_t) M_mindustry_maps_generators_BasicGenerator_blend_mindustry_world_Block_mindustry_world_Block_float, VTABLE_mindustry_maps_generators_BasicGenerator_blend_mindustry_world_Block_mindustry_world_Block_float, "(Lmindustry/world/Block;Lmindustry/world/Block;F)V", 1 },
	{ "brush", (intptr_t) M_mindustry_maps_generators_BasicGenerator_brush_arc_struct_Seq_int, VTABLE_mindustry_maps_generators_BasicGenerator_brush_arc_struct_Seq_int, "(Larc/struct/Seq;I)V", 1 },
	{ "erase", (intptr_t) M_mindustry_maps_generators_BasicGenerator_erase_int_int_int, VTABLE_mindustry_maps_generators_BasicGenerator_erase_int_int_int, "(III)V", 1 },
	{ "pathfind", (intptr_t) M_mindustry_maps_generators_BasicGenerator_pathfind_int_int_int_int_mindustry_ai_Astar$TileHeuristic_mindustry_ai_Astar$DistanceHeuristic_R_arc_struct_Seq, VTABLE_mindustry_maps_generators_BasicGenerator_pathfind_int_int_int_int_mindustry_ai_Astar$TileHeuristic_mindustry_ai_Astar$DistanceHeuristic_R_arc_struct_Seq, "(IIIILmindustry/ai/Astar$TileHeuristic;Lmindustry/ai/Astar$DistanceHeuristic;)Larc/struct/Seq;", 1 },
	{ "trimDark", (intptr_t) M_mindustry_maps_generators_BasicGenerator_trimDark, VTABLE_mindustry_maps_generators_BasicGenerator_trimDark, "()V", 1 },
	{ "inverseFloodFill", (intptr_t) M_mindustry_maps_generators_BasicGenerator_inverseFloodFill_mindustry_world_Tile, VTABLE_mindustry_maps_generators_BasicGenerator_inverseFloodFill_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "lambda$pathfind$0", (intptr_t) SM_mindustry_maps_generators_BasicGenerator_lambda$pathfind$0_mindustry_world_Tile_R_boolean, 0, "(Lmindustry/world/Tile;)Z", 4106 },
	{ "lambda$brush$0", (intptr_t) M_mindustry_maps_generators_BasicGenerator_lambda$brush$0_int_mindustry_world_Tile, VTABLE_mindustry_maps_generators_BasicGenerator_lambda$brush$0_int_mindustry_world_Tile, "(ILmindustry/world/Tile;)V", 4098 },
	{ "lambda$decoration$0", (intptr_t) M_mindustry_maps_generators_BasicGenerator_lambda$decoration$0_float_int_int, VTABLE_mindustry_maps_generators_BasicGenerator_lambda$decoration$0_float_int_int, "(FII)V", 4098 },
	{ "lambda$cells$1", (intptr_t) M_mindustry_maps_generators_BasicGenerator_lambda$cells$1_int_arc_struct_GridBits_arc_struct_GridBits_int_int_int_int, VTABLE_mindustry_maps_generators_BasicGenerator_lambda$cells$1_int_arc_struct_GridBits_arc_struct_GridBits_int_int_int_int, "(ILarc/struct/GridBits;Larc/struct/GridBits;IIII)V", 4098 },
	{ "lambda$cells$0", (intptr_t) M_mindustry_maps_generators_BasicGenerator_lambda$cells$0_arc_struct_GridBits_int_int, VTABLE_mindustry_maps_generators_BasicGenerator_lambda$cells$0_arc_struct_GridBits_int_int, "(Larc/struct/GridBits;II)V", 4098 },
	{ "lambda$scatter$0", (intptr_t) M_mindustry_maps_generators_BasicGenerator_lambda$scatter$0_float_mindustry_world_Block_mindustry_world_Block_int_int, VTABLE_mindustry_maps_generators_BasicGenerator_lambda$scatter$0_float_mindustry_world_Block_mindustry_world_Block_int_int, "(FLmindustry/world/Block;Lmindustry/world/Block;II)V", 4098 },
	{ "lambda$distort$0", (intptr_t) M_mindustry_maps_generators_BasicGenerator_lambda$distort$0_float_float_Array1_short_Array1_short_int_int, VTABLE_mindustry_maps_generators_BasicGenerator_lambda$distort$0_float_float_Array1_short_Array1_short_int_int, "(FF[S[SII)V", 4098 },
	{ "lambda$tech$0", (intptr_t) M_mindustry_maps_generators_BasicGenerator_lambda$tech$0_int_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block_int_int, VTABLE_mindustry_maps_generators_BasicGenerator_lambda$tech$0_int_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block_int_int, "(ILmindustry/world/Block;Lmindustry/world/Block;Lmindustry/world/Block;II)V", 4098 },
	{ "lambda$overlay$0", (intptr_t) M_mindustry_maps_generators_BasicGenerator_lambda$overlay$0_int_float_float_float_float_mindustry_world_Block_mindustry_world_Block_int_int, VTABLE_mindustry_maps_generators_BasicGenerator_lambda$overlay$0_int_float_float_float_float_mindustry_world_Block_mindustry_world_Block_int_int, "(IFFFFLmindustry/world/Block;Lmindustry/world/Block;II)V", 4098 },
	{ "lambda$noise$0", (intptr_t) M_mindustry_maps_generators_BasicGenerator_lambda$noise$0_int_float_float_float_mindustry_world_Block_mindustry_world_Block_int_int, VTABLE_mindustry_maps_generators_BasicGenerator_lambda$noise$0_int_float_float_float_mindustry_world_Block_mindustry_world_Block_int_int, "(IFFFLmindustry/world/Block;Lmindustry/world/Block;II)V", 4098 },
	{ "lambda$terrain$0", (intptr_t) M_mindustry_maps_generators_BasicGenerator_lambda$terrain$0_float_float_float_mindustry_world_Block_int_int, VTABLE_mindustry_maps_generators_BasicGenerator_lambda$terrain$0_float_float_float_mindustry_world_Block_int_int, "(FFFLmindustry/world/Block;II)V", 4098 },
	{ "lambda$wallOre$0", (intptr_t) M_mindustry_maps_generators_BasicGenerator_lambda$wallOre$0_float_float_mindustry_world_Block_boolean_mindustry_world_Block_int_int, VTABLE_mindustry_maps_generators_BasicGenerator_lambda$wallOre$0_float_float_mindustry_world_Block_boolean_mindustry_world_Block_int_int, "(FFLmindustry/world/Block;ZLmindustry/world/Block;II)V", 4098 },
	{ "lambda$ore$0", (intptr_t) M_mindustry_maps_generators_BasicGenerator_lambda$ore$0_mindustry_world_Block_float_float_mindustry_world_Block_int_int, VTABLE_mindustry_maps_generators_BasicGenerator_lambda$ore$0_mindustry_world_Block_float_float_mindustry_world_Block_int_int, "(Lmindustry/world/Block;FFLmindustry/world/Block;II)V", 4098 },
	{ "lambda$ores$0", (intptr_t) M_mindustry_maps_generators_BasicGenerator_lambda$ores$0_arc_struct_Seq_int_int, VTABLE_mindustry_maps_generators_BasicGenerator_lambda$ores$0_arc_struct_Seq_int_int, "(Larc/struct/Seq;II)V", 4098 },
	{ "lambda$median$2", (intptr_t) M_mindustry_maps_generators_BasicGenerator_lambda$median$2_mindustry_world_Block_Array1_short_Array1_short_int_int, VTABLE_mindustry_maps_generators_BasicGenerator_lambda$median$2_mindustry_world_Block_Array1_short_Array1_short_int_int, "(Lmindustry/world/Block;[S[SII)V", 4098 },
	{ "lambda$median$0", (intptr_t) M_mindustry_maps_generators_BasicGenerator_lambda$median$0_mindustry_world_Block_int_Array1_short_double_Array1_short_int_int, VTABLE_mindustry_maps_generators_BasicGenerator_lambda$median$0_mindustry_world_Block_int_Array1_short_double_Array1_short_int_int, "(Lmindustry/world/Block;I[SD[SII)V", 4098 },
	{ "lambda$median$1", (intptr_t) M_mindustry_maps_generators_BasicGenerator_lambda$median$1_int_int, VTABLE_mindustry_maps_generators_BasicGenerator_lambda$median$1_int_int, "(II)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_maps_generators_BasicGenerator, 0, "()V", 8 },
};

Class class_mindustry_maps_generators_BasicGenerator{
		.nativeName = (intptr_t) "mindustry/maps/generators/BasicGenerator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_maps_generators_BasicGenerator),
		.classVtable = (intptr_t) vtable_mindustry_maps_generators_BasicGenerator,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_generators_BasicGenerator,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_maps_generators_BasicGenerator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 54,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 63,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_generators_BasicGenerator = registerClass(&class_mindustry_maps_generators_BasicGenerator);

}
