#include "mindustry/maps/SectorDamage.h"
#include "mindustry/world/Block.h"
#include "mindustry/maps/SectorDamage_invoke_arc_func_Boolf_1.h"
#include "mindustry/game/Rules.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "mindustry/ai/Astar_TileHeuristic.h"
#include "mindustry/world/Tiles.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/ai/BlockIndexer.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/func/Boolf.h"
#include "arc/math/geom/Geometry.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "arc/func/Floatf.h"
#include "java/util/Iterator.h"
#include "arc/struct/Queue.h"
#include "mindustry/gen/Building.h"
#include "mindustry/ai/Astar.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/maps/SectorDamage_invoke_arc_func_Floatf_1.h"
#include "java/lang/Object.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/core/GameState.h"
#include "mindustry/maps/SectorDamage_invoke_mindustry_ai_Astar_TileHeuristic_1.h"
#include "mindustry/world/blocks/storage/CoreBlock.h"

extern "C" {

jbool SF_mindustry_maps_SectorDamage_rubble;

void mark_mindustry_maps_SectorDamage(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_maps_SectorDamage *) object;
}

void clinit_mindustry_maps_SectorDamage(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_maps_SectorDamage_rubble = jint(1);
}

void init_mindustry_maps_SectorDamage(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/SectorDamage:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_SectorDamage(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(15);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_maps_SectorDamage_apply_float(jcontext ctx, jfloat param0) {
	jtype frame[24];
	auto stack = &frame[20];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/SectorDamage:apply", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_SectorDamage(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(19);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	frame[1].o = sp[0].o;
	LINE_NUMBER(21);
	clinit_arc_struct_Queue(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Queue);
	init_arc_struct_Queue(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(22);
	sp[0].o = (jobject)createMultiArray(ctx, &class_float, {((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[1].o)))->F_width), ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[1].o)))->F_height)});
	frame[3].o = sp[0].o;
	LINE_NUMBER(25);
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[5].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_storage_CoreBlock)) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[5].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	if (sp[0].o == sp[1].o) goto label_8;
	}
label_7:;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[5].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_spawn;
	if (sp[0].o != sp[1].o) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(27);
	((func_arc_struct_Queue_add_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Queue_add_java_lang_Object])(ctx, (frame[2].o), (frame[5].o));
	LINE_NUMBER(28);
	ARRAY_ACCESS(jfloat, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_x))), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_y)) = ((frame[0].f) * (jfloat(24.0f)));
	}
label_9:;
	LINE_NUMBER(30);
	goto label_4;
label_5:;
	{
	LINE_NUMBER(32);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(33);
	if ((frame[4].o) == nullptr) goto label_12;
	}
	{
	jint temp0 = (jint)((func_arc_struct_Queue_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Queue_isEmpty_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_12;
	}
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((func_arc_struct_Queue_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Queue_iterator_R_java_util_Iterator])(ctx, (frame[2].o));
	frame[5].o = sp[0].o;
	}
label_14:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(36);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_tile;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_SectorDamage_invoke_mindustry_ai_Astar$TileHeuristic_1(ctx);
		auto proxy = (mindustry_maps_SectorDamage_invoke_mindustry_ai_Astar$TileHeuristic_1 *) gcAlloc(ctx, &class_mindustry_maps_SectorDamage_invoke_mindustry_ai_Astar$TileHeuristic_1);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_maps_SectorDamage_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_maps_SectorDamage_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_maps_SectorDamage_invoke_arc_func_Boolf_1);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_ai_Astar_pathfind_mindustry_world_Tile_mindustry_world_Tile_mindustry_ai_Astar$TileHeuristic_arc_func_Boolf_R_arc_struct_Seq(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(37);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(39);
	frame[9].i = (jint(3));
	LINE_NUMBER(42);
	if ((floatCompare((frame[0].f), (jfloat(1)), -1)) < 0) goto label_19;
	}
	INST_FCONST(1);
	goto label_20;
label_19:;
	{
	sp[0].o = frame[7].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_SectorDamage_invoke_arc_func_Floatf_1(ctx);
		auto proxy = (mindustry_maps_SectorDamage_invoke_arc_func_Floatf_1 *) gcAlloc(ctx, &class_mindustry_maps_SectorDamage_invoke_arc_func_Floatf_1);
		proxy->F_field0 = (frame[9].i);
		sp[1].o = (jobject) proxy;
	}
	jfloat temp0 = (jfloat)((func_arc_struct_Seq_sumf_arc_func_Floatf_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sumf_arc_func_Floatf_R_float])(ctx, sp[0].o, sp[1].o);
	sp[0].f = temp0;
	sp += 1;
	}
label_20:;
	{
	sp -= 1;
	frame[10].f = sp[0].f;
	LINE_NUMBER(57);
	frame[11].f = ((frame[10].f) * (frame[0].f));
	LINE_NUMBER(58);
	frame[12].f = (jfloat(0));
	LINE_NUMBER(61);
	frame[13].i = (jint(0));
	}
label_24:;
	{
	if ((frame[13].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[7].o)))->F_size)) goto label_25;
	}
	{
	if ((floatCompare((frame[12].f), (frame[11].f), 1)) < 0) goto label_26;
	}
	{
	if ((floatCompare((frame[0].f), (jfloat(1)), -1)) < 0) goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[7].o), (frame[13].i));
	frame[14].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(64);
	frame[15].i = (-(frame[9].i));
	}
label_28:;
	{
	if ((frame[15].i) > (frame[9].i)) goto label_29;
	}
	{
	LINE_NUMBER(65);
	frame[16].i = (-(frame[9].i));
	}
label_31:;
	{
	if ((frame[16].i) > (frame[9].i)) goto label_32;
	}
	{
	LINE_NUMBER(66);
	frame[17].i = ((frame[15].i) + ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[14].o)))->F_x));
	frame[18].i = ((frame[16].i) + ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[14].o)))->F_y));
	LINE_NUMBER(67);
	if ((frame[17].i) < 0) goto label_36;
	}
	INST_ILOAD(18);
	if ((--sp)->i < 0) goto label_36;
	{
	jint temp0 = frame[17].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_36;
	}
	{
	jint temp0 = frame[18].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_36;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_within_float_float_float_R_boolean(ctx, (jfloat((frame[15].i))), (jfloat((frame[16].i))), (jfloat((frame[9].i))));
	if (temp0 == 0) goto label_36;
	}
	{
	LINE_NUMBER(68);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_rawTile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_rawTile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[17].i), (frame[18].i));
	frame[19].o = sp[0].o;
	LINE_NUMBER(71);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[19].o)))->F_build;
	if (sp[0].o == nullptr) goto label_36;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[19].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_36;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[19].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_storage_CoreBlock)) != 0) goto label_36;
	}
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[19].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) != 0) goto label_40;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[19].o));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_isLiquid) != 0) goto label_40;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(0.4)));
	if (temp0 == 0) goto label_40;
	}
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[19].o)))->F_build;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[19].o)))->F_build;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[19].o));
	SM_mindustry_entities_Effect_rubble_float_float_int(ctx, temp0, temp1, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size));
	}
label_40:;
	{
	LINE_NUMBER(77);
	jfloat temp0 = frame[12].f;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[19].o)))->F_build;
	frame[12].f = (temp0 + ((jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_health));
	LINE_NUMBER(79);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[19].o)))->F_build;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(81);
	if ((floatCompare((frame[12].f), (frame[11].f), -1)) < 0) goto label_36;
	}
	{
	if ((floatCompare((frame[0].f), (jfloat(0.999f)), 1)) >= 0) goto label_36;
	}
	LINE_NUMBER(82);
	goto label_25;
label_36:;
	{
	LINE_NUMBER(65);
	INST_IINC(16, 1);
	goto label_31;
	}
label_32:;
	{
	LINE_NUMBER(64);
	INST_IINC(15, 1);
	goto label_28;
	}
label_29:;
	{
	LINE_NUMBER(61);
	INST_IINC(13, 1);
	goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[8].o));
	frame[13].o = sp[0].o;
	}
label_45:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[13].o)))(ctx, (frame[13].o));
	if (temp0 == 0) goto label_46;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[13].o)))(ctx, (frame[13].o));
	frame[14].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[14].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	if (sp[0].o != (frame[14].o)) goto label_48;
	}
	{
	LINE_NUMBER(92);
	((func_mindustry_gen_Building_addPlan_boolean) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_mindustry_gen_Building_addPlan_boolean])(ctx, (frame[14].o), (jint(0)));
	LINE_NUMBER(93);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[14].o)))->F_tile;
	((func_mindustry_world_Tile_remove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_remove])(ctx, sp[0].o);
	}
label_48:;
	LINE_NUMBER(95);
	goto label_45;
label_46:;
	LINE_NUMBER(96);
	goto label_14;
label_12:;
	{
	LINE_NUMBER(100);
	if ((floatCompare((frame[0].f), (jfloat(1)), -1)) < 0) goto label_51;
	}
	{
	LINE_NUMBER(101);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_cores_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_cores_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_copy_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_copy_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_53:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_51;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(102);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_tile;
	((func_mindustry_world_Tile_remove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_remove])(ctx, sp[0].o);
	LINE_NUMBER(103);
	goto label_53;
	}
label_51:;
	{
	LINE_NUMBER(106);
	jfloat temp0 = frame[0].f;
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[1].o)))->F_width), ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[1].o)))->F_height));
	frame[5].f = (temp0 / ((jfloat(temp1)) * (clinit_arc_math_Mathf(ctx), (jfloat)SF_arc_math_Mathf_sqrt2)));
	LINE_NUMBER(107);
	frame[6].i = (jint(0));
	LINE_NUMBER(109);
	if ((floatCompare((frame[0].f), (jfloat(0.15f)), -1)) <= 0) goto label_58;
	}
label_59:;
	{
	LINE_NUMBER(111);
	jint temp0 = (jint)((func_arc_struct_Queue_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Queue_isEmpty_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_58;
	}
	{
	LINE_NUMBER(112);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[6].i), ((jint)((arc_struct_Queue *) NULL_CHECK((frame[2].o)))->F_size));
	frame[6].i = temp0;
	LINE_NUMBER(113);
	sp[0].o = (jobject)((func_arc_struct_Queue_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Queue_removeFirst_R_java_lang_Object])(ctx, (frame[2].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(114);
	frame[8].f = (((jfloat)ARRAY_ACCESS(jfloat, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_x))), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_y))) - (frame[5].f));
	LINE_NUMBER(116);
	frame[9].i = (jint(0));
	}
label_64:;
	{
	if ((frame[9].i) >= (jint(4))) goto label_65;
	}
	{
	LINE_NUMBER(117);
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_x;
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4x;
	frame[10].i = (temp0 + ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[9].i))));
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_y;
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4y;
	frame[11].i = (temp1 + ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[9].i))));
	LINE_NUMBER(120);
	jint temp2 = (jint)((func_mindustry_world_Tiles_in_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tiles_in_int_int_R_boolean])(ctx, (frame[1].o), (frame[10].i), (frame[11].i));
	if (temp2 == 0) goto label_69;
	}
	{
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[10].i))), (frame[11].i))), (frame[8].f), 1)) >= 0) goto label_69;
	}
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, (frame[1].o), (frame[10].i), (frame[11].i));
	frame[12].o = sp[0].o;
	LINE_NUMBER(122);
	frame[13].f = (frame[8].f);
	LINE_NUMBER(125);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[12].o)))->F_build;
	if (sp[0].o == nullptr) goto label_73;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[12].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_73;
	}
	{
	LINE_NUMBER(126);
	jfloat temp0 = frame[13].f;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[12].o)))->F_build;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Building_health_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_health_R_float])(ctx, sp[0].o);
	frame[13].f = (temp0 - temp1);
	LINE_NUMBER(128);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[12].o)))->F_build;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_health = (((jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_health) - (frame[8].f));
	LINE_NUMBER(130);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[12].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_storage_CoreBlock)) == 0) goto label_77;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[12].o)))->F_build;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[12].o)))->F_build;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_health), (jfloat(1)));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_health = temp0;
	}
label_77:;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[12].o)))->F_build;
	if ((floatCompare(((jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_health), (jfloat(0)), 1)) >= 0) goto label_78;
	}
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[12].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) != 0) goto label_80;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[12].o));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_isLiquid) != 0) goto label_80;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(0.4)));
	if (temp0 == 0) goto label_80;
	}
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[12].o)))->F_build;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[12].o)))->F_build;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[12].o));
	SM_mindustry_entities_Effect_rubble_float_float_int(ctx, temp0, temp1, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size));
	}
label_80:;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[12].o)))->F_build;
	((func_mindustry_gen_Building_addPlan_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_addPlan_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(140);
	((func_mindustry_world_Tile_remove) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_world_Tile_remove])(ctx, (frame[12].o));
	goto label_83;
	}
label_78:;
	{
	LINE_NUMBER(142);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[12].o)))->F_build;
	((func_mindustry_ai_BlockIndexer_notifyHealthChanged_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_notifyHealthChanged_mindustry_gen_Building])(ctx, sp[0].o, sp[1].o);
	goto label_83;
	}
label_73:;
	{
	LINE_NUMBER(145);
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[12].o));
	if (temp0 == 0) goto label_83;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_synthetic_R_boolean) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_world_Tile_synthetic_R_boolean])(ctx, (frame[12].o));
	if (temp0 != 0) goto label_83;
	}
	LINE_NUMBER(146);
	goto label_69;
label_83:;
	{
	LINE_NUMBER(149);
	if ((floatCompare((frame[13].f), (jfloat(0)), -1)) <= 0) goto label_69;
	}
	{
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[10].i))), (frame[11].i))), (frame[13].f), 1)) >= 0) goto label_69;
	}
	{
	LINE_NUMBER(150);
	((func_arc_struct_Queue_addLast_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Queue_addLast_java_lang_Object])(ctx, (frame[2].o), (frame[12].o));
	LINE_NUMBER(151);
	ARRAY_ACCESS(jfloat, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[10].i))), (frame[11].i)) = (frame[13].f);
	}
label_69:;
	{
	LINE_NUMBER(116);
	INST_IINC(9, 1);
	goto label_64;
	}
label_65:;
	LINE_NUMBER(155);
	goto label_59;
label_58:;
	LINE_NUMBER(158);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat SM_mindustry_maps_SectorDamage_cost_mindustry_world_Tile_R_float(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/SectorDamage:cost", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_SectorDamage(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(161);
	jfloat temp0 = jfloat(1);
	LINE_NUMBER(162);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_mindustry_world_Block_isStatic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isStatic_R_boolean])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	if (temp1 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	(sp++)->f = jfloat(200.0f);
	goto label_3;
label_2:;
	INST_FCONST(0);
label_3:;
	{
	sp -= 2;
	jfloat temp0 = sp[0].f + sp[1].f;
	LINE_NUMBER(163);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	jobject temp1 = sp[0].o;
	sp[0].f = temp0;
	sp += 1;
	if (temp1 == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_health;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	jint temp1 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	jfloat temp2 = (temp0 / (jfloat((temp1 * ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size))))) / (jfloat(20.0f));
	sp[0].f = temp2;
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_FCONST(0);
label_6:;
	{
	sp -= 2;
	jfloat temp0 = sp[0].f + sp[1].f;
	LINE_NUMBER(164);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	jobject temp1 = sp[0].o;
	sp[0].f = temp0;
	sp += 1;
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(temp1))->F_isLiquid) == 0) goto label_8;
	}
	(sp++)->f = jfloat(10.0f);
	goto label_9;
label_8:;
	INST_FCONST(0);
label_9:;
	{
	sp -= 2;
	jfloat temp0 = sp[0].f + sp[1].f;
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_maps_SectorDamage_lambda$apply$1_int_mindustry_world_Tile_R_float(jcontext ctx, jint param0, jobject param1) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/SectorDamage:lambda$apply$1", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_SectorDamage(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(43);
	frame[2].f = (jfloat(0));
	LINE_NUMBER(44);
	frame[3].i = (-(frame[0].i));
	}
label_2:;
	{
	if ((frame[3].i) > (frame[0].i)) goto label_3;
	}
	{
	LINE_NUMBER(45);
	frame[4].i = (-(frame[0].i));
	}
label_5:;
	{
	if ((frame[4].i) > (frame[0].i)) goto label_6;
	}
	{
	LINE_NUMBER(46);
	frame[5].i = ((frame[3].i) + ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x));
	frame[6].i = ((frame[4].i) + ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(47);
	if ((frame[5].i) < 0) goto label_10;
	}
	INST_ILOAD(6);
	if ((--sp)->i < 0) goto label_10;
	{
	jint temp0 = frame[5].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_10;
	}
	{
	jint temp0 = frame[6].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_10;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_within_float_float_float_R_boolean(ctx, (jfloat((frame[3].i))), (jfloat((frame[4].i))), (jfloat((frame[0].i))));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(48);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_rawTile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_rawTile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[5].i), (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(49);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[7].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_storage_CoreBlock)) != 0) goto label_10;
	}
	{
	LINE_NUMBER(50);
	jfloat temp0 = frame[2].f;
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[7].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	jobject temp1 = sp[0].o;
	sp[0].f = temp0;
	sp += 1;
	if (temp1 != sp[0].o) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_build;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_health;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[7].o));
	jint temp1 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[7].o));
	jfloat temp2 = temp0 / (jfloat((temp1 * ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size))));
	sp[0].f = temp2;
	sp += 1;
	goto label_15;
	}
label_14:;
	INST_FCONST(0);
label_15:;
	INST_FADD();
	INST_FSTORE(2);
label_10:;
	{
	LINE_NUMBER(45);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(44);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return (frame[2].f);
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_SectorDamage_lambda$apply$0_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/SectorDamage:lambda$apply$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_SectorDamage(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_world_Block_isStatic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isStatic_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
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

void *vtable_mindustry_maps_SectorDamage[] {
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

static FieldMetadata fields[] {
	{ "rubble", &class_boolean, (intptr_t) &SF_mindustry_maps_SectorDamage_rubble, "Z", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_SectorDamage, 0, "()V", 1 },
	{ "apply", (intptr_t) SM_mindustry_maps_SectorDamage_apply_float, 0, "(F)V", 9 },
	{ "cost", (intptr_t) SM_mindustry_maps_SectorDamage_cost_mindustry_world_Tile_R_float, 0, "(Lmindustry/world/Tile;)F", 8 },
	{ "lambda$apply$1", (intptr_t) SM_mindustry_maps_SectorDamage_lambda$apply$1_int_mindustry_world_Tile_R_float, 0, "(ILmindustry/world/Tile;)F", 4106 },
	{ "lambda$apply$0", (intptr_t) SM_mindustry_maps_SectorDamage_lambda$apply$0_mindustry_world_Tile_R_boolean, 0, "(Lmindustry/world/Tile;)Z", 4106 },
};

Class class_mindustry_maps_SectorDamage{
		.nativeName = (intptr_t) "mindustry/maps/SectorDamage",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_maps_SectorDamage),
		.classVtable = (intptr_t) vtable_mindustry_maps_SectorDamage,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_SectorDamage,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_SectorDamage,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_SectorDamage = registerClass(&class_mindustry_maps_SectorDamage);

}
