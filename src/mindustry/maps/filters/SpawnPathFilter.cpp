#include "mindustry/maps/filters/SpawnPathFilter.h"
#include "arc/func/Prov.h"
#include "mindustry/maps/filters/GenerateFilter.h"
#include "mindustry/world/Block.h"
#include "mindustry/maps/filters/SpawnPathFilter_invoke_arc_func_Cons_1.h"
#include "mindustry/game/Rules.h"
#include "mindustry/maps/filters/SpawnPathFilter_invoke_arc_func_Boolf_1.h"
#include "mindustry/maps/filters/SpawnPathFilter_invoke_arc_func_Floatc_1.h"
#include "mindustry/ai/Astar_TileHeuristic.h"
#include "mindustry/world/Tiles.h"
#include "arc/func/Cons.h"
#include "mindustry/maps/filters/SpawnPathFilter.h"
#include "java/lang/String.h"
#include "mindustry/maps/filters/FilterOption_BlockOption.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/Tile.h"
#include "arc/func/Floatp.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/func/Boolf.h"
#include "mindustry/maps/filters/SpawnPathFilter_invoke_arc_func_Floatp_1.h"
#include "mindustry/maps/filters/GenerateFilter_GenerateInput.h"
#include "arc/math/Mathf.h"
#include "java/util/Iterator.h"
#include "mindustry/maps/filters/FilterOption.h"
#include "arc/util/Structs.h"
#include "mindustry/maps/filters/SpawnPathFilter_invoke_arc_func_Prov_1.h"
#include "mindustry/maps/filters/FilterOption_SliderOption.h"
#include "arc/func/Floatc.h"
#include "mindustry/ai/Astar.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "mindustry/maps/filters/SpawnPathFilter_invoke_mindustry_ai_Astar_TileHeuristic_1.h"
#include "mindustry/ai/Astar_DistanceHeuristic.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/core/World.h"
#include "mindustry/world/blocks/storage/CoreBlock.h"

extern "C" {


void mark_mindustry_maps_filters_SpawnPathFilter(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_maps_filters_SpawnPathFilter *) object;
	if (self->F_block)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_block)->clazz)->markFunction)((jobject) self->F_block, mark, depth + 1);
}

void clinit_mindustry_maps_filters_SpawnPathFilter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_maps_filters_GenerateFilter(ctx);
}

void init_mindustry_maps_filters_SpawnPathFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/SpawnPathFilter:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_SpawnPathFilter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(17);
	init_mindustry_maps_filters_GenerateFilter(ctx, (frame[0].o));
	LINE_NUMBER(18);
	((mindustry_maps_filters_SpawnPathFilter *) NULL_CHECK((frame[0].o)))->F_radius = (jint(3));
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((mindustry_maps_filters_SpawnPathFilter *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_filters_SpawnPathFilter_options_R_Array1_mindustry_maps_filters_FilterOption(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/SpawnPathFilter:options", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(23);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_maps_filters_FilterOption, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_maps_filters_FilterOption$SliderOption(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$SliderOption);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"radius"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_SpawnPathFilter_invoke_arc_func_Floatp_1(ctx);
		auto proxy = (mindustry_maps_filters_SpawnPathFilter_invoke_arc_func_Floatp_1 *) gcAlloc(ctx, &class_mindustry_maps_filters_SpawnPathFilter_invoke_arc_func_Floatp_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_SpawnPathFilter_invoke_arc_func_Floatc_1(ctx);
		auto proxy = (mindustry_maps_filters_SpawnPathFilter_invoke_arc_func_Floatc_1 *) gcAlloc(ctx, &class_mindustry_maps_filters_SpawnPathFilter_invoke_arc_func_Floatc_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_maps_filters_FilterOption$SliderOption_java_lang_String_arc_func_Floatp_arc_func_Floatc_float_float_float(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jfloat(1)), (jfloat(20.0f)), (jfloat(1)));
	LINE_NUMBER(24);
	sp[1].o = (jobject)((func_mindustry_maps_filters_FilterOption$SliderOption_display_R_mindustry_maps_filters_FilterOption$SliderOption) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_maps_filters_FilterOption$SliderOption_display_R_mindustry_maps_filters_FilterOption$SliderOption])(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_maps_filters_FilterOption$BlockOption(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_filters_FilterOption$BlockOption);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"wall"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_SpawnPathFilter_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_maps_filters_SpawnPathFilter_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_maps_filters_SpawnPathFilter_invoke_arc_func_Prov_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_SpawnPathFilter_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_maps_filters_SpawnPathFilter_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_maps_filters_SpawnPathFilter_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	clinit_mindustry_maps_filters_FilterOption(ctx);
	sp[5].o = (jobject)SF_mindustry_maps_filters_FilterOption_wallsOnly;
	init_mindustry_maps_filters_FilterOption$BlockOption_java_lang_String_arc_func_Prov_arc_func_Cons_arc_func_Boolf(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jchar M_mindustry_maps_filters_SpawnPathFilter_icon_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/SpawnPathFilter:icon", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return (jint(63159));
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_SpawnPathFilter_apply_mindustry_world_Tiles_mindustry_maps_filters_GenerateFilter$GenerateInput(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[24];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/SpawnPathFilter:apply", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(36);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(37);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(39);
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(40);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[6].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_spawn;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[4].o), (frame[6].o));
	}
label_6:;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[6].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_storage_CoreBlock)) == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[6].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	if (sp[0].o == sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[3].o), (frame[6].o));
	}
label_8:;
	LINE_NUMBER(46);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[3].o));
	frame[5].o = sp[0].o;
	}
label_10:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(49);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[4].o));
	frame[7].o = sp[0].o;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(50);
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_x;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_y;
	jint temp2 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_x;
	jint temp3 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_y;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_SpawnPathFilter_invoke_mindustry_ai_Astar$TileHeuristic_1(ctx);
		auto proxy = (mindustry_maps_filters_SpawnPathFilter_invoke_mindustry_ai_Astar$TileHeuristic_1 *) gcAlloc(ctx, &class_mindustry_maps_filters_SpawnPathFilter_invoke_mindustry_ai_Astar$TileHeuristic_1);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_ai_Astar(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_Astar_manhattan;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_filters_SpawnPathFilter_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_maps_filters_SpawnPathFilter_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_maps_filters_SpawnPathFilter_invoke_arc_func_Boolf_1);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_ai_Astar_pathfind_int_int_int_int_mindustry_ai_Astar$TileHeuristic_mindustry_ai_Astar$DistanceHeuristic_arc_func_Boolf_R_arc_struct_Seq(ctx, temp0, temp1, temp2, temp3, sp[0].o, sp[1].o, sp[2].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(51);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[9].o));
	frame[10].o = sp[0].o;
	}
label_17:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[10].o)))(ctx, (frame[10].o));
	if (temp0 == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[10].o)))(ctx, (frame[10].o));
	frame[11].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(52);
	frame[12].i = (-((jint)((mindustry_maps_filters_SpawnPathFilter *) NULL_CHECK((frame[0].o)))->F_radius));
	}
label_20:;
	{
	if ((frame[12].i) > ((jint)((mindustry_maps_filters_SpawnPathFilter *) NULL_CHECK((frame[0].o)))->F_radius)) goto label_21;
	}
	{
	LINE_NUMBER(53);
	frame[13].i = (-((jint)((mindustry_maps_filters_SpawnPathFilter *) NULL_CHECK((frame[0].o)))->F_radius));
	}
label_23:;
	{
	if ((frame[13].i) > ((jint)((mindustry_maps_filters_SpawnPathFilter *) NULL_CHECK((frame[0].o)))->F_radius)) goto label_24;
	}
	{
	LINE_NUMBER(54);
	frame[14].i = (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[11].o)))->F_x) + (frame[12].i));
	frame[15].i = (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[11].o)))->F_y) + (frame[13].i));
	LINE_NUMBER(55);
	jint temp0 = frame[14].i;
	jint temp1 = frame[15].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp3 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	jint temp4 = (jint)SM_arc_util_Structs_inBounds_int_int_int_int_R_boolean(ctx, temp0, temp1, temp2, temp3);
	if (temp4 == 0) goto label_28;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_within_float_float_float_R_boolean(ctx, (jfloat((frame[12].i))), (jfloat((frame[13].i))), (jfloat(((jint)((mindustry_maps_filters_SpawnPathFilter *) NULL_CHECK((frame[0].o)))->F_radius))));
	if (temp0 == 0) goto label_28;
	}
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, (frame[1].o), (frame[14].i), (frame[15].i));
	frame[16].o = sp[0].o;
	LINE_NUMBER(57);
	jint temp0 = (jint)((func_mindustry_world_Tile_synthetic_R_boolean) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_mindustry_world_Tile_synthetic_R_boolean])(ctx, (frame[16].o));
	if (temp0 != 0) goto label_28;
	}
	{
	LINE_NUMBER(58);
	sp[0].o = frame[16].o;
	sp[1].o = (jobject)((mindustry_maps_filters_SpawnPathFilter *) NULL_CHECK((frame[0].o)))->F_block;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	}
label_28:;
	{
	LINE_NUMBER(53);
	INST_IINC(13, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(52);
	INST_IINC(12, 1);
	goto label_20;
	}
label_21:;
	LINE_NUMBER(63);
	goto label_17;
label_18:;
	LINE_NUMBER(64);
	goto label_13;
label_14:;
	LINE_NUMBER(65);
	goto label_10;
label_11:;
	LINE_NUMBER(66);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_maps_filters_SpawnPathFilter_isPost_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/SpawnPathFilter:isPost", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_filters_SpawnPathFilter_lambda$apply$1_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/SpawnPathFilter:lambda$apply$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_SpawnPathFilter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_isDeep_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_isDeep_R_boolean])(ctx, sp[0].o);
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

jfloat SM_mindustry_maps_filters_SpawnPathFilter_lambda$apply$0_mindustry_world_Tile_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/SpawnPathFilter:lambda$apply$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_SpawnPathFilter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(50);
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	(sp++)->f = jfloat(100.0f);
	goto label_2;
label_1:;
	INST_FCONST(1);
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_SpawnPathFilter_lambda$options$3_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/SpawnPathFilter:lambda$options$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(25);
	((mindustry_maps_filters_SpawnPathFilter *) NULL_CHECK((frame[0].o)))->F_block = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_filters_SpawnPathFilter_lambda$options$2_R_mindustry_world_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/SpawnPathFilter:lambda$options$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)((mindustry_maps_filters_SpawnPathFilter *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_SpawnPathFilter_lambda$options$1_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/SpawnPathFilter:lambda$options$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(24);
	((mindustry_maps_filters_SpawnPathFilter *) NULL_CHECK((frame[0].o)))->F_radius = (jint((frame[1].f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_filters_SpawnPathFilter_lambda$options$0_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/SpawnPathFilter:lambda$options$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return (jfloat(((jint)((mindustry_maps_filters_SpawnPathFilter *) NULL_CHECK((frame[0].o)))->F_radius)));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_filters_SpawnPathFilter[] {
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
	(void *) M_mindustry_maps_filters_SpawnPathFilter_apply_mindustry_world_Tiles_mindustry_maps_filters_GenerateFilter$GenerateInput,
	(void *) M_mindustry_maps_filters_SpawnPathFilter_options_R_Array1_mindustry_maps_filters_FilterOption,
	(void *) M_mindustry_maps_filters_GenerateFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput,
	(void *) M_mindustry_maps_filters_GenerateFilter_draw_arc_scene_ui_Image,
	(void *) M_mindustry_maps_filters_GenerateFilter_simpleName_R_java_lang_String,
	(void *) M_mindustry_maps_filters_GenerateFilter_name_R_java_lang_String,
	(void *) M_mindustry_maps_filters_SpawnPathFilter_icon_R_char,
	(void *) M_mindustry_maps_filters_GenerateFilter_randomize,
	(void *) M_mindustry_maps_filters_GenerateFilter_isBuffered_R_boolean,
	(void *) M_mindustry_maps_filters_SpawnPathFilter_isPost_R_boolean,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_int_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_float_float_float_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_rnoise_float_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_rnoise_float_float_int_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_chance_int_int_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_copy_R_mindustry_maps_filters_GenerateFilter,
	(void *) M_mindustry_maps_filters_SpawnPathFilter_lambda$options$3_mindustry_world_Block,
	(void *) M_mindustry_maps_filters_SpawnPathFilter_lambda$options$2_R_mindustry_world_Block,
	(void *) M_mindustry_maps_filters_SpawnPathFilter_lambda$options$1_float,
	(void *) M_mindustry_maps_filters_SpawnPathFilter_lambda$options$0_R_float,
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
	{ "lambda$options$3", "(Lmindustry/world/Block;)V" },
	{ "lambda$options$2", "()Lmindustry/world/Block;" },
	{ "lambda$options$1", "(F)V" },
	{ "lambda$options$0", "()F" },
};

static FieldMetadata fields[] {
	{ "radius", &class_int, offsetof(mindustry_maps_filters_SpawnPathFilter, F_radius), "I", 1 },
	{ "block", &class_mindustry_world_Block, offsetof(mindustry_maps_filters_SpawnPathFilter, F_block), "Lmindustry/world/Block;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_filters_SpawnPathFilter, 0, "()V", 1 },
	{ "options", (intptr_t) M_mindustry_maps_filters_SpawnPathFilter_options_R_Array1_mindustry_maps_filters_FilterOption, VTABLE_mindustry_maps_filters_SpawnPathFilter_options_R_Array1_mindustry_maps_filters_FilterOption, "()[Lmindustry/maps/filters/FilterOption;", 1 },
	{ "icon", (intptr_t) M_mindustry_maps_filters_SpawnPathFilter_icon_R_char, VTABLE_mindustry_maps_filters_SpawnPathFilter_icon_R_char, "()C", 1 },
	{ "apply", (intptr_t) M_mindustry_maps_filters_SpawnPathFilter_apply_mindustry_world_Tiles_mindustry_maps_filters_GenerateFilter$GenerateInput, VTABLE_mindustry_maps_filters_SpawnPathFilter_apply_mindustry_world_Tiles_mindustry_maps_filters_GenerateFilter$GenerateInput, "(Lmindustry/world/Tiles;Lmindustry/maps/filters/GenerateFilter$GenerateInput;)V", 1 },
	{ "isPost", (intptr_t) M_mindustry_maps_filters_SpawnPathFilter_isPost_R_boolean, VTABLE_mindustry_maps_filters_SpawnPathFilter_isPost_R_boolean, "()Z", 1 },
	{ "lambda$apply$1", (intptr_t) SM_mindustry_maps_filters_SpawnPathFilter_lambda$apply$1_mindustry_world_Tile_R_boolean, 0, "(Lmindustry/world/Tile;)Z", 4106 },
	{ "lambda$apply$0", (intptr_t) SM_mindustry_maps_filters_SpawnPathFilter_lambda$apply$0_mindustry_world_Tile_R_float, 0, "(Lmindustry/world/Tile;)F", 4106 },
	{ "lambda$options$3", (intptr_t) M_mindustry_maps_filters_SpawnPathFilter_lambda$options$3_mindustry_world_Block, VTABLE_mindustry_maps_filters_SpawnPathFilter_lambda$options$3_mindustry_world_Block, "(Lmindustry/world/Block;)V", 4098 },
	{ "lambda$options$2", (intptr_t) M_mindustry_maps_filters_SpawnPathFilter_lambda$options$2_R_mindustry_world_Block, VTABLE_mindustry_maps_filters_SpawnPathFilter_lambda$options$2_R_mindustry_world_Block, "()Lmindustry/world/Block;", 4098 },
	{ "lambda$options$1", (intptr_t) M_mindustry_maps_filters_SpawnPathFilter_lambda$options$1_float, VTABLE_mindustry_maps_filters_SpawnPathFilter_lambda$options$1_float, "(F)V", 4098 },
	{ "lambda$options$0", (intptr_t) M_mindustry_maps_filters_SpawnPathFilter_lambda$options$0_R_float, VTABLE_mindustry_maps_filters_SpawnPathFilter_lambda$options$0_R_float, "()F", 4098 },
};

Class class_mindustry_maps_filters_SpawnPathFilter{
		.nativeName = (intptr_t) "mindustry/maps/filters/SpawnPathFilter",
		.parentClass = (intptr_t) &class_mindustry_maps_filters_GenerateFilter,
		.size = sizeof(mindustry_maps_filters_SpawnPathFilter),
		.classVtable = (intptr_t) vtable_mindustry_maps_filters_SpawnPathFilter,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_filters_SpawnPathFilter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_filters_SpawnPathFilter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 33,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_filters_SpawnPathFilter = registerClass(&class_mindustry_maps_filters_SpawnPathFilter);

}
