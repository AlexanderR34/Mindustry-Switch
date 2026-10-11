#include "mindustry/maps/generators/BaseGenerator.h"
#include "mindustry/world/blocks/power/Battery.h"
#include "arc/math/Angles.h"
#include "mindustry/ai/BaseRegistry_BasePart.h"
#include "mindustry/world/meta/Attribute.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/ai/Astar_TileHeuristic.h"
#include "mindustry/world/blocks/payloads/PayloadConveyor.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/maps/generators/BaseGenerator_invoke_mindustry_ai_Astar_TileHeuristic_1.h"
#include "mindustry/maps/generators/BaseGenerator_invoke_arc_func_Cons_7.h"
#include "arc/struct/Seq.h"
#include "mindustry/maps/generators/BaseGenerator_invoke_arc_func_Cons_4.h"
#include "mindustry/world/Tile.h"
#include "mindustry/maps/generators/BaseGenerator_invoke_arc_func_Cons_6.h"
#include "mindustry/maps/generators/BaseGenerator_invoke_arc_func_Cons_5.h"
#include "mindustry/world/modules/PowerModule.h"
#include "arc/math/geom/Position.h"
#include "mindustry/world/blocks/defense/ShockMine.h"
#include "arc/func/Boolf.h"
#include "mindustry/maps/generators/BaseGenerator_invoke_arc_func_Intc2_2.h"
#include "mindustry/maps/generators/BaseGenerator_invoke_arc_func_Intc2_3.h"
#include "arc/math/Mathf.h"
#include "arc/func/Floatf.h"
#include "java/util/Iterator.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/world/blocks/defense/Door.h"
#include "mindustry/type/Item.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/power/PowerNode.h"
#include "mindustry/game/Schematics.h"
#include "mindustry/world/meta/BuildVisibility.h"
#include "mindustry/world/blocks/payloads/PayloadBlock.h"
#include "arc/struct/ObjectMap.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/maps/generators/BaseGenerator_invoke_arc_func_Boolf_3.h"
#include "arc/func/Intc2.h"
#include "mindustry/maps/generators/BaseGenerator_invoke_arc_func_Boolf_2.h"
#include "mindustry/world/Block.h"
#include "arc/math/Rand.h"
#include "mindustry/game/Rules.h"
#include "mindustry/maps/generators/BaseGenerator.h"
#include "mindustry/world/blocks/defense/Wall.h"
#include "mindustry/world/Tiles.h"
#include "arc/func/Cons.h"
#include "mindustry/game/Schematic.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/math/geom/Geometry.h"
#include "mindustry/world/blocks/production/Drill.h"
#include "mindustry/maps/generators/BaseGenerator_invoke_arc_func_Floatf_1.h"
#include "mindustry/type/Sector.h"
#include "mindustry/ai/Astar.h"
#include "mindustry/game/Schematic_Stile.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/game/Teams.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/type/Planet.h"
#include "mindustry/ai/BaseRegistry.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/core/World.h"

extern "C" {

jobject SF_mindustry_maps_generators_BaseGenerator_axis;
jobject SF_mindustry_maps_generators_BaseGenerator_rotator;
jint SF_mindustry_maps_generators_BaseGenerator_range;
jbool SF_mindustry_maps_generators_BaseGenerator_insanity;

void mark_mindustry_maps_generators_BaseGenerator(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_maps_generators_BaseGenerator_axis)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_maps_generators_BaseGenerator_axis)->clazz)->markFunction)((jobject) SF_mindustry_maps_generators_BaseGenerator_axis, mark, depth + 1);
		if (SF_mindustry_maps_generators_BaseGenerator_rotator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_maps_generators_BaseGenerator_rotator)->clazz)->markFunction)((jobject) SF_mindustry_maps_generators_BaseGenerator_rotator, mark, depth + 1);
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
	auto self = (mindustry_maps_generators_BaseGenerator *) object;
	if (self->F_tiles)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tiles)->clazz)->markFunction)((jobject) self->F_tiles, mark, depth + 1);
	if (self->F_cores)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cores)->clazz)->markFunction)((jobject) self->F_cores, mark, depth + 1);
}

void init_mindustry_maps_generators_BaseGenerator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BaseGenerator:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_BaseGenerator(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(24);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_maps_generators_BaseGenerator_getDifficultyWall_int_float_R_mindustry_world_Block(jcontext ctx, jint param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BaseGenerator:getDifficultyWall", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_BaseGenerator(ctx);
	frame[0].i = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(34);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_maps_generators_BaseGenerator_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Boolf_2);
		proxy->F_field0 = (frame[0].i);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(38);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Floatf_1(ctx);
		auto proxy = (mindustry_maps_generators_BaseGenerator_invoke_arc_func_Floatf_1 *) gcAlloc(ctx, &class_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Floatf_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(39);
	sp[0].o = (jobject)((func_arc_struct_Seq_getFrac_float_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_getFrac_float_R_java_lang_Object])(ctx, (frame[2].o), ((frame[1].f) * (jfloat(0.91f))));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BaseGenerator_generate_mindustry_world_Tiles_arc_struct_Seq_mindustry_world_Tile_mindustry_game_Team_mindustry_type_Sector_float(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[30];
	auto stack = &frame[22];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BaseGenerator:generate", 30 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(43);
	((mindustry_maps_generators_BaseGenerator *) NULL_CHECK((frame[0].o)))->F_tiles = (jref) (frame[1].o);
	LINE_NUMBER(44);
	((mindustry_maps_generators_BaseGenerator *) NULL_CHECK((frame[0].o)))->F_cores = (jref) (frame[2].o);
	LINE_NUMBER(47);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_bases;
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry *) NULL_CHECK(sp[0].o))->F_cores;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(49);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_rand;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (jlong(((jint)((mindustry_type_Sector *) NULL_CHECK((frame[5].o)))->F_id))));
	LINE_NUMBER(50);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_rand;
	jdouble temp0 = (jdouble)((func_arc_math_Rand_nextDouble_R_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextDouble_R_double])(ctx, sp[0].o);
	LINE_NUMBER(52);
	frame[7].f = (jfloat(0.17f));
	LINE_NUMBER(53);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, (jfloat(0.7f)), (jfloat(2.1f)), (frame[6].f));
	frame[8].f = temp1;
	LINE_NUMBER(54);
	frame[9].i = (70);
	LINE_NUMBER(55);
	frame[10].d = ((jdouble(0.5)) * (jdouble((frame[8].f))));
	LINE_NUMBER(56);
	frame[12].d = ((jdouble(2,000000e-03)) * (jdouble((frame[8].f))));
	LINE_NUMBER(57);
	if ((doubleCompare((jdouble((frame[6].f))), (jdouble(0.4)), 1)) >= 0) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	{
	if ((doubleCompare((jdouble((frame[6].f))), (jdouble(0.8)), 1)) >= 0) goto label_13;
	}
	INST_ICONST(3);
	goto label_12;
label_13:;
	INST_ICONST(5);
label_12:;
	{
	sp -= 1;
	frame[14].i = sp[0].i;
	LINE_NUMBER(59);
	sp[0].o = (jobject)SM_mindustry_maps_generators_BaseGenerator_getDifficultyWall_int_float_R_mindustry_world_Block(ctx, (jint(1)), (frame[6].f));
	frame[15].o = sp[0].o;
	sp[0].o = (jobject)SM_mindustry_maps_generators_BaseGenerator_getDifficultyWall_int_float_R_mindustry_world_Block(ctx, (jint(2)), (frame[6].f));
	frame[16].o = sp[0].o;
	LINE_NUMBER(61);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[2].o));
	frame[17].o = sp[0].o;
	}
label_17:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[17].o)))(ctx, (frame[17].o));
	if (temp0 == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[17].o)))(ctx, (frame[17].o));
	frame[18].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(62);
	((func_mindustry_world_Tile_clearOverlay) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_mindustry_world_Tile_clearOverlay])(ctx, (frame[18].o));
	LINE_NUMBER(63);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_bases;
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry *) NULL_CHECK(sp[0].o))->F_cores;
	jfloat temp0 = frame[6].f;
	clinit_arc_math_Mathf(ctx);
	sp[1].o = (jobject)SF_arc_math_Mathf_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_range_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_range_float_R_float])(ctx, sp[1].o, (jfloat(0.4f)));
	sp[0].o = (jobject)((func_arc_struct_Seq_getFrac_float_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_getFrac_float_R_java_lang_Object])(ctx, sp[0].o, ((temp0 + temp1) / (jfloat(1.4f))));
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((checkCast(ctx, &class_mindustry_ai_BaseRegistry$BasePart, sp[0].o))))->F_schematic;
	SM_mindustry_game_Schematics_placeLoadout_mindustry_game_Schematic_int_int_mindustry_game_Team_boolean(ctx, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[18].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[18].o)))->F_y), (frame[4].o), (jint(0)));
	LINE_NUMBER(66);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[18].o)))->F_build;
	frame[19].o = sp[0].o;
	LINE_NUMBER(67);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[20].o = sp[0].o;
	}
label_23:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[20].o)))(ctx, (frame[20].o));
	if (temp0 == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[20].o)))(ctx, (frame[20].o));
	frame[21].o = (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	LINE_NUMBER(68);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[19].o)))->F_items;
	sp[1].o = frame[21].o;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[19].o)))->F_block;
	((func_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_itemCapacity));
	LINE_NUMBER(69);
	goto label_23;
	}
label_24:;
	LINE_NUMBER(70);
	goto label_17;
label_18:;
	{
	LINE_NUMBER(72);
	frame[17].i = (jint(0));
	}
label_27:;
	{
	if ((frame[17].i) >= (frame[14].i)) goto label_28;
	}
	{
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_4);
		proxy->F_field4 = (jref) (frame[4].o);
		proxy->F_field3 = (frame[7].f);
		proxy->F_field2 = (frame[6].f);
		proxy->F_field1 = (frame[10].d);
		proxy->F_field0 = (frame[12].d);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_generators_BaseGenerator_pass_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_BaseGenerator_pass_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(72);
	INST_IINC(17, 1);
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(97);
	if ((frame[9].i) <= 0) goto label_31;
	}
	{
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_5);
		proxy->F_field4 = (jref) (frame[15].o);
		proxy->F_field3 = (jref) (frame[4].o);
		proxy->F_field2 = (frame[9].i);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_generators_BaseGenerator_pass_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_BaseGenerator_pass_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(133);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_6);
		proxy->F_field3 = (jref) (frame[4].o);
		proxy->F_field2 = (jref) (frame[16].o);
		proxy->F_field1 = (jref) (frame[15].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_generators_BaseGenerator_pass_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_BaseGenerator_pass_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	}
label_31:;
	{
	LINE_NUMBER(153);
	frame[17].f = (jfloat(80.0f));
	LINE_NUMBER(156);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[2].o));
	frame[18].o = sp[0].o;
	}
label_35:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[18].o)))(ctx, (frame[18].o));
	if (temp0 == 0) goto label_36;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[18].o)))(ctx, (frame[18].o));
	frame[19].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(157);
	sp[0].o = frame[19].o;
	sp[1].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_BaseGenerator_invoke_mindustry_ai_Astar$TileHeuristic_1(ctx);
		auto proxy = (mindustry_maps_generators_BaseGenerator_invoke_mindustry_ai_Astar$TileHeuristic_1 *) gcAlloc(ctx, &class_mindustry_maps_generators_BaseGenerator_invoke_mindustry_ai_Astar$TileHeuristic_1);
		proxy->F_field1 = (frame[17].f);
		proxy->F_field0 = (jref) (frame[19].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_maps_generators_BaseGenerator_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Boolf_3);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_ai_Astar_pathfind_mindustry_world_Tile_mindustry_world_Tile_mindustry_ai_Astar$TileHeuristic_arc_func_Boolf_R_arc_struct_Seq(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_7);
		proxy->F_field1 = (frame[17].f);
		proxy->F_field0 = (jref) (frame[19].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(171);
	goto label_35;
	}
label_36:;
	LINE_NUMBER(172);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BaseGenerator_postGenerate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BaseGenerator:postGenerate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((mindustry_maps_generators_BaseGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((mindustry_maps_generators_BaseGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(178);
	jint temp0 = (jint)((func_mindustry_world_Tile_isCenter_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_isCenter_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[2].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_power_PowerNode)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	sp[1].o = (jobject)createArray(ctx, &class_arc_math_geom_Point2, (jint(0)));
	((func_mindustry_gen_Building_configureAny_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_configureAny_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(181);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	((func_mindustry_gen_Building_placed) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_placed])(ctx, sp[0].o);
	goto label_5;
	}
label_7:;
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_power_Battery)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_power;
	((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_status = (jfloat(1));
	}
label_5:;
	LINE_NUMBER(186);
	goto label_2;
label_3:;
	LINE_NUMBER(187);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BaseGenerator_pass_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BaseGenerator:pass", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((mindustry_maps_generators_BaseGenerator *) NULL_CHECK((frame[0].o)))->F_cores;
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[0].o);
	frame[2].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(191);
	sp[0].o = frame[2].o;
	jint temp0 = 180;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Intc2_2(ctx);
		auto proxy = (mindustry_maps_generators_BaseGenerator_invoke_arc_func_Intc2_2 *) gcAlloc(ctx, &class_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Intc2_2);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_Tile_circle_int_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_circle_int_arc_func_Intc2])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_generators_BaseGenerator_tryPlace_mindustry_ai_BaseRegistry$BasePart_int_int_mindustry_game_Team_arc_math_Rand_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jobject param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BaseGenerator:tryPlace", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_BaseGenerator(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(199);
	jint temp0 = (jint)SM_mindustry_maps_generators_BaseGenerator_tryPlace_mindustry_ai_BaseRegistry$BasePart_int_int_mindustry_game_Team_arc_math_Rand_arc_func_Intc2_R_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].o), (frame[4].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_generators_BaseGenerator_tryPlace_mindustry_ai_BaseRegistry$BasePart_int_int_mindustry_game_Team_arc_math_Rand_arc_func_Intc2_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jobject param4, jobject param5) {
	jtype frame[19];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BaseGenerator:tryPlace", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_BaseGenerator(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(207);
	jint temp0 = (jint)((func_arc_math_Rand_range_int_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_math_Rand_range_int_R_int])(ctx, (frame[4].o), (jint(2)));
	frame[6].i = temp0;
	LINE_NUMBER(208);
	clinit_mindustry_maps_generators_BaseGenerator(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_generators_BaseGenerator_axis;
	sp[1].o = (jobject)((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((frame[0].o)))->F_schematic;
	jfloat temp1 = jfloat((jint(((jfloat(((jint)((mindustry_game_Schematic *) NULL_CHECK(sp[1].o))->F_width))) / (jfloat(2))))));
	sp[1].o = (jobject)((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((frame[0].o)))->F_schematic;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, (jfloat((jint(((jfloat(((jint)((mindustry_game_Schematic *) NULL_CHECK(sp[1].o))->F_height))) / (jfloat(2))))))));
	LINE_NUMBER(209);
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((frame[0].o)))->F_schematic;
	sp[0].o = (jobject)SM_mindustry_game_Schematics_rotate_mindustry_game_Schematic_int_R_mindustry_game_Schematic(ctx, sp[0].o, (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(211);
	clinit_mindustry_maps_generators_BaseGenerator(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_generators_BaseGenerator_rotator;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(((jint)((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((frame[0].o)))->F_centerX))), (jfloat(((jint)((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((frame[0].o)))->F_centerY))));
	clinit_mindustry_maps_generators_BaseGenerator(ctx);
	sp[1].o = (jobject)SF_mindustry_maps_generators_BaseGenerator_axis;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotateAround_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotateAround_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, (jfloat(((frame[6].i) * (90)))));
	LINE_NUMBER(213);
	jint temp2 = frame[1].i;
	clinit_mindustry_maps_generators_BaseGenerator(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_generators_BaseGenerator_rotator;
	frame[8].i = (temp2 - (jint(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x))));
	LINE_NUMBER(214);
	jint temp3 = frame[2].i;
	clinit_mindustry_maps_generators_BaseGenerator(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_generators_BaseGenerator_rotator;
	frame[9].i = (temp3 - (jint(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y))));
	LINE_NUMBER(216);
	if ((clinit_mindustry_maps_generators_BaseGenerator(ctx), (jint)SF_mindustry_maps_generators_BaseGenerator_insanity) != 0) goto label_7;
	}
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[7].o)))->F_tiles;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[10].o)))(ctx, (frame[10].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[10].o)))(ctx, (frame[10].o));
	frame[11].o = (checkCast(ctx, &class_mindustry_game_Schematic$Stile, sp[0].o));
	LINE_NUMBER(218);
	frame[12].i = (((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[11].o)))->F_x) + (frame[8].i));
	frame[13].i = (((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[11].o)))->F_y) + (frame[9].i));
	LINE_NUMBER(219);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[11].o)))->F_block;
	jint temp0 = (jint)SM_mindustry_maps_generators_BaseGenerator_isTaken_mindustry_world_Block_int_int_R_boolean(ctx, sp[0].o, (frame[12].i), (frame[13].i));
	if (temp0 != 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[11].o)))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_oilExtractor;
	if (sp[0].o != sp[1].o) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[11].o)))->F_block;
	clinit_mindustry_world_meta_Attribute(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Attribute_oil;
	jfloat temp0 = (jfloat)((func_mindustry_world_Block_sumAttribute_mindustry_world_meta_Attribute_int_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_sumAttribute_mindustry_world_meta_Attribute_int_int_R_float])(ctx, sp[0].o, sp[1].o, (frame[12].i), (frame[13].i));
	if ((floatCompare(temp0, (jfloat(1,000000e-03f)), 1)) > 0) goto label_14;
	}
label_13:;
	{
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return (jint(0));
	}
label_14:;
	LINE_NUMBER(222);
	goto label_9;
label_7:;
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[7].o)))->F_tiles;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	}
label_15:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[10].o)))(ctx, (frame[10].o));
	if (temp0 == 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[10].o)))(ctx, (frame[10].o));
	frame[11].o = (checkCast(ctx, &class_mindustry_game_Schematic$Stile, sp[0].o));
	LINE_NUMBER(227);
	frame[12].i = (((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[11].o)))->F_x) + (frame[8].i));
	frame[13].i = (((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[11].o)))->F_y) + (frame[9].i));
	LINE_NUMBER(228);
	if ((frame[5].o) == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(229);
	((func_arc_func_Intc2_get_int_int) resolveInterfaceMethod(ctx, &class_arc_func_Intc2, INDEX_arc_func_Intc2_get_int_int, (frame[5].o)))(ctx, (frame[5].o), (frame[12].i), (frame[13].i));
	}
label_20:;
	LINE_NUMBER(231);
	goto label_15;
label_16:;
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((frame[0].o)))->F_required;
	frame[11].o = sp[0].o;
	if ((isInstance(ctx, (frame[11].o), &class_mindustry_type_Item)) == 0) goto label_22;
	}
	{
	frame[10].o = (checkCast(ctx, &class_mindustry_type_Item, (frame[11].o)));
	LINE_NUMBER(234);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[7].o)))->F_tiles;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	}
label_24:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[11].o)))(ctx, (frame[11].o));
	if (temp0 == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[11].o)))(ctx, (frame[11].o));
	frame[12].o = (checkCast(ctx, &class_mindustry_game_Schematic$Stile, sp[0].o));
	LINE_NUMBER(235);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[12].o)))->F_block;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_production_Drill)) == 0) goto label_26;
	}
	clinit_mindustry_maps_generators_BaseGenerator(ctx);
	(sp++)->i = SF_mindustry_maps_generators_BaseGenerator_insanity;
	if ((--sp)->i == 0) goto label_27;
	{
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[12].o)))->F_block;
	jint temp0 = (jint)SM_mindustry_maps_generators_BaseGenerator_isTaken_mindustry_world_Block_int_int_R_boolean(ctx, sp[0].o, (((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[12].o)))->F_x) + (frame[8].i)), (((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[12].o)))->F_y) + (frame[9].i)));
	if (temp0 != 0) goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[12].o)))->F_block;
	jint temp0 = ((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[12].o)))->F_x) + (frame[8].i);
	jint temp1 = ((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[12].o)))->F_y) + (frame[9].i);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Intc2_3(ctx);
		auto proxy = (mindustry_maps_generators_BaseGenerator_invoke_arc_func_Intc2_3 *) gcAlloc(ctx, &class_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Intc2_3);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[10].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_Block_iterateTaken_int_int_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_iterateTaken_int_int_arc_func_Intc2])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	}
label_26:;
	LINE_NUMBER(253);
	goto label_24;
label_22:;
	{
	LINE_NUMBER(256);
	SM_mindustry_game_Schematics_place_mindustry_game_Schematic_int_int_mindustry_game_Team_boolean(ctx, (frame[7].o), ((frame[8].i) + (((jint)((mindustry_game_Schematic *) NULL_CHECK((frame[7].o)))->F_width) / (jint(2)))), ((frame[9].i) + (((jint)((mindustry_game_Schematic *) NULL_CHECK((frame[7].o)))->F_height) / (jint(2)))), (frame[3].o), (jint(0)));
	LINE_NUMBER(259);
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((frame[0].o)))->F_required;
	frame[11].o = sp[0].o;
	if ((isInstance(ctx, (frame[11].o), &class_mindustry_type_Item)) == 0) goto label_29;
	}
	{
	frame[10].o = (checkCast(ctx, &class_mindustry_type_Item, (frame[11].o)));
	LINE_NUMBER(260);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[7].o)))->F_tiles;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	}
label_31:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[11].o)))(ctx, (frame[11].o));
	if (temp0 == 0) goto label_29;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[11].o)))(ctx, (frame[11].o));
	frame[12].o = (checkCast(ctx, &class_mindustry_game_Schematic$Stile, sp[0].o));
	LINE_NUMBER(261);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[12].o)))->F_block;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_production_Drill)) == 0) goto label_33;
	}
	{
	LINE_NUMBER(263);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, (((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[12].o)))->F_x) + (frame[8].i)), (((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[12].o)))->F_y) + (frame[9].i)));
	frame[13].o = sp[0].o;
	LINE_NUMBER(265);
	if ((frame[13].o) == nullptr) goto label_33;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[13].o)))->F_block;
	sp[1].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[12].o)))->F_block;
	if (sp[0].o != sp[1].o) goto label_33;
	}
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[13].o)))->F_items;
	sp[1].o = frame[10].o;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[13].o)))->F_block;
	((func_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_add_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_itemCapacity));
	}
label_33:;
	LINE_NUMBER(269);
	goto label_31;
label_29:;
	{
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void SM_mindustry_maps_generators_BaseGenerator_set_mindustry_world_Tile_mindustry_type_Item(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BaseGenerator:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_BaseGenerator(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(276);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_bases;
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry *) NULL_CHECK(sp[0].o))->F_ores;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(277);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_bases;
	sp[1].o = (jobject)((mindustry_ai_BaseRegistry *) NULL_CHECK(sp[1].o))->F_ores;
	sp[1].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, (frame[1].o));
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_world_Block, sp[1].o)));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(278);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_bases;
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry *) NULL_CHECK(sp[0].o))->F_oreFloors;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(279);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_bases;
	sp[1].o = (jobject)((mindustry_ai_BaseRegistry *) NULL_CHECK(sp[1].o))->F_oreFloors;
	sp[1].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, (frame[1].o));
	((func_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, sp[1].o)));
	}
label_3:;
	LINE_NUMBER(281);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_generators_BaseGenerator_isTaken_mindustry_world_Block_int_int_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BaseGenerator:isTaken", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_BaseGenerator(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(284);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	jfloat temp0 = (jfloat(((frame[1].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset);
	jfloat temp1 = (jfloat(((frame[2].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	jint temp2 = (jint)((func_mindustry_game_Teams_anyEnemyCoresWithin_mindustry_game_Team_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_anyEnemyCoresWithin_mindustry_game_Team_float_float_float_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, temp1, (((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[2].o))->F_enemyCoreBuildRadius) + (jfloat(8.0f))));
	if (temp2 == 0) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(286);
	frame[3].i = ((-(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)))) / (jint(2)));
	LINE_NUMBER(287);
	frame[4].i = ((-(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)))) / (jint(2)));
	LINE_NUMBER(288);
	frame[5].i = (jint(1));
	LINE_NUMBER(290);
	frame[6].i = (-(frame[5].i));
	}
label_5:;
	{
	if ((frame[6].i) >= (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) + (frame[5].i))) goto label_6;
	}
	{
	LINE_NUMBER(291);
	frame[7].i = (-(frame[5].i));
	}
label_8:;
	{
	if ((frame[7].i) >= (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) + (frame[5].i))) goto label_9;
	}
	{
	LINE_NUMBER(292);
	jint temp0 = (jint)SM_mindustry_maps_generators_BaseGenerator_overlaps_int_int_R_boolean(ctx, (((frame[6].i) + (frame[3].i)) + (frame[1].i)), (((frame[7].i) + (frame[4].i)) + (frame[2].i)));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(293);
	popStackFrame(ctx);
	return (jint(1));
	}
label_11:;
	{
	LINE_NUMBER(291);
	INST_IINC(7, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(290);
	INST_IINC(6, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(298);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_generators_BaseGenerator_overlaps_int_int_R_boolean(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BaseGenerator:overlaps", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_BaseGenerator(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(302);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[0].i), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(304);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_alwaysReplace) == 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jfloat temp0 = (jfloat)((func_mindustry_core_World_getDarkness_int_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_getDarkness_int_int_R_float])(ctx, sp[0].o, (frame[0].i), (frame[1].i));
	if ((floatCompare(temp0, (jfloat(0)), -1)) <= 0) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_mindustry_maps_generators_BaseGenerator_lambda$tryPlace$0_mindustry_type_Item_arc_math_Rand_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BaseGenerator:lambda$tryPlace$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_BaseGenerator(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(238);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[2].i), (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(240);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[4].o));
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(243);
	SM_mindustry_maps_generators_BaseGenerator_set_mindustry_world_Tile_mindustry_type_Item(ctx, (frame[4].o), (frame[0].o));
	}
label_3:;
	{
	LINE_NUMBER(246);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_arc_math_Rand_range_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_Rand_range_int_R_int])(ctx, (frame[1].o), (jint(1)));
	jint temp2 = temp0 + temp1;
	jint temp3 = frame[3].i;
	jint temp4 = (jint)((func_arc_math_Rand_range_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_Rand_range_int_R_int])(ctx, (frame[1].o), (jint(1)));
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getc_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_getc_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp2, (temp3 + temp4));
	frame[5].o = sp[0].o;
	LINE_NUMBER(247);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[5].o));
	jint temp5 = (jint)((func_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean])(ctx, sp[0].o);
	if (temp5 == 0) goto label_6;
	}
	{
	LINE_NUMBER(249);
	SM_mindustry_maps_generators_BaseGenerator_set_mindustry_world_Tile_mindustry_type_Item(ctx, (frame[5].o), (frame[0].o));
	}
label_6:;
	LINE_NUMBER(251);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BaseGenerator_lambda$pass$0_arc_func_Cons_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BaseGenerator:lambda$pass$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(191);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_maps_generators_BaseGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[1].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, sp[1].o, (frame[2].i), (frame[3].i));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_maps_generators_BaseGenerator_lambda$generate$5_mindustry_world_Tile_float_mindustry_world_Tile(jcontext ctx, jobject param0, jfloat param1, jobject param2) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BaseGenerator:lambda$generate$5", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_BaseGenerator(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(158);
	jint temp0 = (jint)((func_mindustry_world_Tile_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_within_arc_math_geom_Position_float_R_boolean])(ctx, (frame[2].o), (frame[0].o), (frame[1].f));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[2].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(160);
	sp[0].o = frame[2].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(163);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d8;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_7:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_1;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(164);
	sp[0].o = (jobject)((func_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile])(ctx, (frame[2].o), (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(165);
	if ((frame[7].o) == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[7].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	{
	LINE_NUMBER(166);
	sp[0].o = frame[7].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	}
label_10:;
	{
	LINE_NUMBER(163);
	INST_IINC(5, 1);
	goto label_7;
	}
label_1:;
	LINE_NUMBER(170);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_generators_BaseGenerator_lambda$generate$4_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BaseGenerator:lambda$generate$4", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_BaseGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_world_Block_isStatic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isStatic_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
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

jfloat SM_mindustry_maps_generators_BaseGenerator_lambda$generate$3_mindustry_world_Tile_float_mindustry_world_Tile_R_float(jcontext ctx, jobject param0, jfloat param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BaseGenerator:lambda$generate$3", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_BaseGenerator(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[2].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_within_arc_math_geom_Position_float_R_boolean])(ctx, (frame[2].o), (frame[0].o), (frame[1].f));
	if (temp0 != 0) goto label_1;
	}
	(sp++)->f = jfloat(100000.0f);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	INST_FCONST(1);
	goto label_2;
label_3:;
	(sp++)->f = jfloat(10.0f);
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

void SM_mindustry_maps_generators_BaseGenerator_lambda$generate$2_mindustry_world_Tiles_mindustry_world_Block_mindustry_world_Block_mindustry_game_Team_mindustry_world_Tile(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BaseGenerator:lambda$generate$2", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_BaseGenerator(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(134);
	frame[5].i = (jint(0));
	LINE_NUMBER(135);
	frame[6].i = (jint(0));
	}
label_2:;
	{
	if ((frame[6].i) >= (jint(2))) goto label_3;
	}
	{
	LINE_NUMBER(136);
	frame[7].i = (jint(0));
	}
label_5:;
	{
	if ((frame[7].i) >= (jint(2))) goto label_6;
	}
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, (frame[0].o), (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_x) + (frame[6].i)), (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_y) + (frame[7].i)));
	frame[8].o = sp[0].o;
	LINE_NUMBER(138);
	if ((frame[8].o) == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[8].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) != (jint(1))) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[8].o));
	if (sp[0].o == (frame[1].o)) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[8].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_alwaysReplace) != 0) goto label_10;
	}
label_9:;
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[8].o));
	if (sp[0].o != (frame[1].o)) goto label_11;
	}
	LINE_NUMBER(141);
	INST_IINC(5, 1);
label_11:;
	{
	LINE_NUMBER(136);
	INST_IINC(7, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(135);
	INST_IINC(6, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(146);
	if ((frame[5].i) < (jint(3))) goto label_13;
	}
	{
	LINE_NUMBER(147);
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team])(ctx, (frame[4].o), (frame[2].o), (frame[3].o));
	}
label_13:;
	LINE_NUMBER(149);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_maps_generators_BaseGenerator_lambda$generate$1_mindustry_world_Tiles_mindustry_world_Tile_int_mindustry_game_Team_mindustry_world_Block_mindustry_world_Tile(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3, jobject param4, jobject param5) {
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BaseGenerator:lambda$generate$1", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_BaseGenerator(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[5].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_alwaysReplace) == 0) goto label_1;
	}
	{
	LINE_NUMBER(103);
	frame[6].i = (jint(0));
	LINE_NUMBER(105);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[7].o = sp[0].o;
	frame[8].i = (((jarray) nullCheck(ctx, (frame[7].o)))->length);
	frame[9].i = (jint(0));
	}
label_6:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_7;
	}
	{
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[9].i)));
	LINE_NUMBER(106);
	sp[0].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, (frame[0].o), (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[10].o)))->F_x)), (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[10].o)))->F_y)));
	frame[11].o = sp[0].o;
	LINE_NUMBER(109);
	if ((frame[11].o) == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[11].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_payloads_PayloadConveyor)) != 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[11].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_payloads_PayloadBlock)) == 0) goto label_10;
	}
label_11:;
	LINE_NUMBER(110);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	LINE_NUMBER(105);
	INST_IINC(9, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(114);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d8;
	frame[7].o = sp[0].o;
	frame[8].i = (((jarray) nullCheck(ctx, (frame[7].o)))->length);
	frame[9].i = (jint(0));
	}
label_14:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_15;
	}
	{
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[9].i)));
	LINE_NUMBER(115);
	jfloat temp0 = (jfloat)SM_arc_math_Angles_angle_float_float_R_float(ctx, (jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[10].o)))->F_x))), (jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[10].o)))->F_y))));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_angleTo_arc_math_geom_Position_R_float])(ctx, (frame[1].o), (frame[5].o));
	jfloat temp2 = (jfloat)SM_arc_math_Angles_angleDist_float_float_R_float(ctx, temp0, temp1);
	if ((floatCompare(temp2, (jfloat((frame[2].i))), -1)) <= 0) goto label_17;
	}
	LINE_NUMBER(116);
	goto label_19;
label_17:;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, (frame[0].o), (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[10].o)))->F_x)), (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[10].o)))->F_y)));
	frame[11].o = sp[0].o;
	LINE_NUMBER(120);
	if ((frame[11].o) == nullptr) goto label_19;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[11].o));
	if (sp[0].o != (frame[3].o)) goto label_19;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[11].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_defense_Wall)) != 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[11].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_defense_ShockMine)) != 0) goto label_19;
	}
	{
	LINE_NUMBER(121);
	frame[6].i = (jint(1));
	LINE_NUMBER(122);
	goto label_15;
	}
label_19:;
	{
	LINE_NUMBER(114);
	INST_IINC(9, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(126);
	if ((frame[6].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(127);
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team])(ctx, (frame[5].o), (frame[4].o), (frame[3].o));
	}
label_1:;
	LINE_NUMBER(130);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_maps_generators_BaseGenerator_lambda$generate$0_double_double_float_float_mindustry_game_Team_mindustry_world_Tile(jcontext ctx, jdouble param0, jdouble param1, jfloat param2, jfloat param3, jobject param4, jobject param5) {
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BaseGenerator:lambda$generate$0", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_BaseGenerator(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	frame[4].f = param2;
	frame[5].f = param3;
	frame[6].o = param4;
	frame[7].o = param5;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[7].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_alwaysReplace) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[7].o));
	sp[0].o = (jobject)((func_mindustry_world_blocks_environment_Floor_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemDrop;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_drop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_drop_R_mindustry_type_Item])(ctx, (frame[7].o));
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (frame[0].d));
	if (temp0 != 0) goto label_2;
	}
label_3:;
	{
	sp[0].o = frame[7].o;
	LINE_NUMBER(78);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_liquidDrop;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, ((frame[0].d) * (jdouble(2.0))));
	if (temp0 == 0) goto label_5;
	}
label_2:;
	{
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (frame[2].d));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(79);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_bases;
	sp[1].o = (jobject)((func_mindustry_world_Tile_drop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_drop_R_mindustry_type_Item])(ctx, (frame[7].o));
	sp += 1;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_drop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_drop_R_mindustry_type_Item])(ctx, (frame[7].o));
	sp += 1;
	goto label_8;
	}
label_7:;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[7].o));
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_liquidDrop;
	sp += 1;
	}
label_8:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_mindustry_ai_BaseRegistry_forResource_mindustry_ctype_Content_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BaseRegistry_forResource_mindustry_ctype_Content_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(80);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[8].o));
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(81);
	sp[0].o = frame[8].o;
	jfloat temp0 = frame[4].f;
	clinit_arc_math_Mathf(ctx);
	sp[1].o = (jobject)SF_arc_math_Mathf_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_range_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_range_float_R_float])(ctx, sp[1].o, (frame[5].f));
	sp[0].o = (jobject)((func_arc_struct_Seq_getFrac_float_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_getFrac_float_R_java_lang_Object])(ctx, sp[0].o, (temp0 + temp1));
	sp[0].o = checkCast(ctx, &class_mindustry_ai_BaseRegistry$BasePart, sp[0].o);
	jint temp2 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_x;
	jint temp3 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_y;
	sp[1].o = frame[6].o;
	clinit_arc_math_Mathf(ctx);
	sp[2].o = (jobject)SF_arc_math_Mathf_rand;
	jint temp4 = (jint)SM_mindustry_maps_generators_BaseGenerator_tryPlace_mindustry_ai_BaseRegistry$BasePart_int_int_mindustry_game_Team_arc_math_Rand_R_boolean(ctx, sp[0].o, temp2, temp3, sp[1].o, sp[2].o);
	}
label_10:;
	LINE_NUMBER(83);
	goto label_12;
label_5:;
	{
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (frame[0].d));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(84);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_bases;
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry *) NULL_CHECK(sp[0].o))->F_parts;
	clinit_arc_math_Mathf(ctx);
	sp[1].o = (jobject)SF_arc_math_Mathf_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[1].o, (jfloat(1)));
	sp[0].o = (jobject)((func_arc_struct_Seq_getFrac_float_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_getFrac_float_R_java_lang_Object])(ctx, sp[0].o, temp0);
	sp[0].o = checkCast(ctx, &class_mindustry_ai_BaseRegistry$BasePart, sp[0].o);
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_x;
	jint temp2 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_y;
	sp[1].o = frame[6].o;
	clinit_arc_math_Mathf(ctx);
	sp[2].o = (jobject)SF_arc_math_Mathf_rand;
	jint temp3 = (jint)SM_mindustry_maps_generators_BaseGenerator_tryPlace_mindustry_ai_BaseRegistry$BasePart_int_int_mindustry_game_Team_arc_math_Rand_R_boolean(ctx, sp[0].o, temp1, temp2, sp[1].o, sp[2].o);
	}
label_12:;
	LINE_NUMBER(86);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat SM_mindustry_maps_generators_BaseGenerator_lambda$getDifficultyWall$1_mindustry_world_Block_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BaseGenerator:lambda$getDifficultyWall$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_BaseGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_buildTime);
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_generators_BaseGenerator_lambda$getDifficultyWall$0_int_mindustry_world_Block_R_boolean(jcontext ctx, jint param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BaseGenerator:lambda$getDifficultyWall$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_BaseGenerator(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(34);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_defense_Wall)) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Block_isVanilla_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Block_isVanilla_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_size) != (frame[0].i)) goto label_1;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_insulated) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_buildVisibility;
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BuildVisibility_shown;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_defense_Door)) != 0) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	LINE_NUMBER(37);
	sp[1].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_world_Block_isOnPlanet_mindustry_type_Planet_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isOnPlanet_mindustry_type_Planet_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	LINE_NUMBER(34);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_maps_generators_BaseGenerator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_maps_generators_BaseGenerator_range = jint(180);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BaseGenerator:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_BaseGenerator(ctx);
	{
	LINE_NUMBER(25);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_maps_generators_BaseGenerator(ctx);
	SF_mindustry_maps_generators_BaseGenerator_axis = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_maps_generators_BaseGenerator(ctx);
	SF_mindustry_maps_generators_BaseGenerator_rotator = sp[0].o;
	LINE_NUMBER(28);
	clinit_mindustry_maps_generators_BaseGenerator(ctx);
	SF_mindustry_maps_generators_BaseGenerator_insanity = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_generators_BaseGenerator[] {
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
	(void *) M_mindustry_maps_generators_BaseGenerator_generate_mindustry_world_Tiles_arc_struct_Seq_mindustry_world_Tile_mindustry_game_Team_mindustry_type_Sector_float,
	(void *) M_mindustry_maps_generators_BaseGenerator_postGenerate,
	(void *) M_mindustry_maps_generators_BaseGenerator_pass_arc_func_Cons,
	(void *) M_mindustry_maps_generators_BaseGenerator_lambda$pass$0_arc_func_Cons_int_int,
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
	{ "generate", "(Lmindustry/world/Tiles;Larc/struct/Seq;Lmindustry/world/Tile;Lmindustry/game/Team;Lmindustry/type/Sector;F)V" },
	{ "postGenerate", "()V" },
	{ "pass", "(Larc/func/Cons;)V" },
	{ "lambda$pass$0", "(Larc/func/Cons;II)V" },
};

static FieldMetadata fields[] {
	{ "axis", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_maps_generators_BaseGenerator_axis, "Larc/math/geom/Vec2;", 26 },
	{ "rotator", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_maps_generators_BaseGenerator_rotator, "Larc/math/geom/Vec2;", 26 },
	{ "range", &class_int, (intptr_t) &SF_mindustry_maps_generators_BaseGenerator_range, "I", 26 },
	{ "insanity", &class_boolean, (intptr_t) &SF_mindustry_maps_generators_BaseGenerator_insanity, "Z", 10 },
	{ "tiles", &class_mindustry_world_Tiles, offsetof(mindustry_maps_generators_BaseGenerator, F_tiles), "Lmindustry/world/Tiles;", 2 },
	{ "cores", &class_arc_struct_Seq, offsetof(mindustry_maps_generators_BaseGenerator, F_cores), "Larc/struct/Seq;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_generators_BaseGenerator, 0, "()V", 1 },
	{ "getDifficultyWall", (intptr_t) SM_mindustry_maps_generators_BaseGenerator_getDifficultyWall_int_float_R_mindustry_world_Block, 0, "(IF)Lmindustry/world/Block;", 9 },
	{ "generate", (intptr_t) M_mindustry_maps_generators_BaseGenerator_generate_mindustry_world_Tiles_arc_struct_Seq_mindustry_world_Tile_mindustry_game_Team_mindustry_type_Sector_float, VTABLE_mindustry_maps_generators_BaseGenerator_generate_mindustry_world_Tiles_arc_struct_Seq_mindustry_world_Tile_mindustry_game_Team_mindustry_type_Sector_float, "(Lmindustry/world/Tiles;Larc/struct/Seq;Lmindustry/world/Tile;Lmindustry/game/Team;Lmindustry/type/Sector;F)V", 1 },
	{ "postGenerate", (intptr_t) M_mindustry_maps_generators_BaseGenerator_postGenerate, VTABLE_mindustry_maps_generators_BaseGenerator_postGenerate, "()V", 1 },
	{ "pass", (intptr_t) M_mindustry_maps_generators_BaseGenerator_pass_arc_func_Cons, VTABLE_mindustry_maps_generators_BaseGenerator_pass_arc_func_Cons, "(Larc/func/Cons;)V", 0 },
	{ "tryPlace", (intptr_t) SM_mindustry_maps_generators_BaseGenerator_tryPlace_mindustry_ai_BaseRegistry$BasePart_int_int_mindustry_game_Team_arc_math_Rand_R_boolean, 0, "(Lmindustry/ai/BaseRegistry$BasePart;IILmindustry/game/Team;Larc/math/Rand;)Z", 9 },
	{ "tryPlace", (intptr_t) SM_mindustry_maps_generators_BaseGenerator_tryPlace_mindustry_ai_BaseRegistry$BasePart_int_int_mindustry_game_Team_arc_math_Rand_arc_func_Intc2_R_boolean, 0, "(Lmindustry/ai/BaseRegistry$BasePart;IILmindustry/game/Team;Larc/math/Rand;Larc/func/Intc2;)Z", 9 },
	{ "set", (intptr_t) SM_mindustry_maps_generators_BaseGenerator_set_mindustry_world_Tile_mindustry_type_Item, 0, "(Lmindustry/world/Tile;Lmindustry/type/Item;)V", 8 },
	{ "isTaken", (intptr_t) SM_mindustry_maps_generators_BaseGenerator_isTaken_mindustry_world_Block_int_int_R_boolean, 0, "(Lmindustry/world/Block;II)Z", 8 },
	{ "overlaps", (intptr_t) SM_mindustry_maps_generators_BaseGenerator_overlaps_int_int_R_boolean, 0, "(II)Z", 8 },
	{ "lambda$tryPlace$0", (intptr_t) SM_mindustry_maps_generators_BaseGenerator_lambda$tryPlace$0_mindustry_type_Item_arc_math_Rand_int_int, 0, "(Lmindustry/type/Item;Larc/math/Rand;II)V", 4106 },
	{ "lambda$pass$0", (intptr_t) M_mindustry_maps_generators_BaseGenerator_lambda$pass$0_arc_func_Cons_int_int, VTABLE_mindustry_maps_generators_BaseGenerator_lambda$pass$0_arc_func_Cons_int_int, "(Larc/func/Cons;II)V", 4098 },
	{ "lambda$generate$5", (intptr_t) SM_mindustry_maps_generators_BaseGenerator_lambda$generate$5_mindustry_world_Tile_float_mindustry_world_Tile, 0, "(Lmindustry/world/Tile;FLmindustry/world/Tile;)V", 4106 },
	{ "lambda$generate$4", (intptr_t) SM_mindustry_maps_generators_BaseGenerator_lambda$generate$4_mindustry_world_Tile_R_boolean, 0, "(Lmindustry/world/Tile;)Z", 4106 },
	{ "lambda$generate$3", (intptr_t) SM_mindustry_maps_generators_BaseGenerator_lambda$generate$3_mindustry_world_Tile_float_mindustry_world_Tile_R_float, 0, "(Lmindustry/world/Tile;FLmindustry/world/Tile;)F", 4106 },
	{ "lambda$generate$2", (intptr_t) SM_mindustry_maps_generators_BaseGenerator_lambda$generate$2_mindustry_world_Tiles_mindustry_world_Block_mindustry_world_Block_mindustry_game_Team_mindustry_world_Tile, 0, "(Lmindustry/world/Tiles;Lmindustry/world/Block;Lmindustry/world/Block;Lmindustry/game/Team;Lmindustry/world/Tile;)V", 4106 },
	{ "lambda$generate$1", (intptr_t) SM_mindustry_maps_generators_BaseGenerator_lambda$generate$1_mindustry_world_Tiles_mindustry_world_Tile_int_mindustry_game_Team_mindustry_world_Block_mindustry_world_Tile, 0, "(Lmindustry/world/Tiles;Lmindustry/world/Tile;ILmindustry/game/Team;Lmindustry/world/Block;Lmindustry/world/Tile;)V", 4106 },
	{ "lambda$generate$0", (intptr_t) SM_mindustry_maps_generators_BaseGenerator_lambda$generate$0_double_double_float_float_mindustry_game_Team_mindustry_world_Tile, 0, "(DDFFLmindustry/game/Team;Lmindustry/world/Tile;)V", 4106 },
	{ "lambda$getDifficultyWall$1", (intptr_t) SM_mindustry_maps_generators_BaseGenerator_lambda$getDifficultyWall$1_mindustry_world_Block_R_float, 0, "(Lmindustry/world/Block;)F", 4106 },
	{ "lambda$getDifficultyWall$0", (intptr_t) SM_mindustry_maps_generators_BaseGenerator_lambda$getDifficultyWall$0_int_mindustry_world_Block_R_boolean, 0, "(ILmindustry/world/Block;)Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_maps_generators_BaseGenerator, 0, "()V", 8 },
};

Class class_mindustry_maps_generators_BaseGenerator{
		.nativeName = (intptr_t) "mindustry/maps/generators/BaseGenerator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_maps_generators_BaseGenerator),
		.classVtable = (intptr_t) vtable_mindustry_maps_generators_BaseGenerator,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_generators_BaseGenerator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_generators_BaseGenerator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_generators_BaseGenerator = registerClass(&class_mindustry_maps_generators_BaseGenerator);

}
