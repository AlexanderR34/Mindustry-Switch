#include "mindustry/editor/EditorTile.h"
#include "arc/func/Prov.h"
#include "mindustry/editor/EditorTile_invoke_arc_func_Cons_3.h"
#include "mindustry/world/Block.h"
#include "mindustry/editor/EditorTile_invoke_arc_func_Cons_4.h"
#include "mindustry/editor/EditorTile_invoke_arc_func_Cons_5.h"
#include "mindustry/graphics/CacheLayer.h"
#include "mindustry/graphics/BlockRenderer.h"
#include "mindustry/gen/TileOp.h"
#include "arc/func/Cons.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/modules/PowerModule.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/math/geom/Position.h"
#include "mindustry/editor/EditorTile.h"
#include "mindustry/world/blocks/environment/OverlayFloor.h"
#include "mindustry/world/blocks/environment/OreBlock.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "mindustry/editor/EditorRenderer.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/core/GameState.h"
#include "mindustry/world/modules/LiquidModule.h"
#include "mindustry/editor/MapEditor.h"

extern "C" {


void mark_mindustry_editor_EditorTile(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_Tile(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_editor_EditorTile *) object;
}

void clinit_mindustry_editor_EditorTile(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_Tile(ctx);
}

void init_mindustry_editor_EditorTile_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTile:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTile(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(17);
	init_mindustry_world_Tile_int_int_int_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorTile_setFloor_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTile:setFloor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(22);
	jint temp0 = (jint)((func_mindustry_editor_EditorTile_skip_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorTile_skip_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(23);
	M_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(27);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_environment_OverlayFloor)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_floor;
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_6;
	}
	{
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[1].o)))->F_needsSurface) != 0) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(30);
	((func_mindustry_editor_EditorTile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorTile_setOverlay_mindustry_world_Block])(ctx, (frame[0].o), (frame[1].o));
	}
label_7:;
	LINE_NUMBER(32);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_floor;
	if (sp[0].o != (frame[1].o)) goto label_8;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_8:;
	{
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_floor;
	((func_mindustry_editor_EditorTile_op_int_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorTile_op_int_short])(ctx, sp[0].o, temp0, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id));
	LINE_NUMBER(39);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_floorChanges = (((jint)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_floorChanges) + (jint(1)));
	LINE_NUMBER(41);
	((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_floor = (jref) (frame[1].o);
	LINE_NUMBER(42);
	((func_mindustry_world_blocks_environment_Floor_floorChanged_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_floorChanged_mindustry_world_Tile])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_EditorTile_isEditorTile_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTile:isEditorTile", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorTile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTile:setBlock", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	frame[5].o = sp[0].o;
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	if (sp[0].o != nullptr) goto label_2;
	}
	INST_ALOAD(0);
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_tile;
	sp += 1;
	}
label_3:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(55);
	jint temp0 = (jint)((func_mindustry_editor_EditorTile_skip_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorTile_skip_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(56);
	M_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].o));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}
label_5:;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o != (frame[1].o)) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	if (((jint)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_rotation) != (frame[3].i)) goto label_8;
	}
label_9:;
	LINE_NUMBER(61);
	popStackFrame(ctx);
	INST_RETURN();
label_8:;
	{
	LINE_NUMBER(64);
	jint temp0 = (jint)((func_mindustry_editor_EditorTile_isCenter_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorTile_isCenter_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	if (sp[0].o == nullptr) goto label_17;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_tile;
	if (sp[0].o == nullptr) goto label_17;
	frame[7].o = (checkCast(ctx, &class_mindustry_editor_EditorTile, sp[0].o));
	LINE_NUMBER(66);
	sp[0].o = frame[7].o;
	jint temp0 = jint(2);
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	((func_mindustry_editor_EditorTile_op_int_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorTile_op_int_short])(ctx, sp[0].o, temp0, (jshort((jbyte(((jint)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_rotation))))));
	LINE_NUMBER(67);
	sp[0].o = frame[7].o;
	jint temp1 = jint(3);
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_team;
	((func_mindustry_editor_EditorTile_op_int_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorTile_op_int_short])(ctx, sp[0].o, temp1, (jshort((jbyte(((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id))))));
	LINE_NUMBER(68);
	sp[0].o = frame[7].o;
	jint temp2 = jint(1);
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	((func_mindustry_editor_EditorTile_op_int_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorTile_op_int_short])(ctx, sp[0].o, temp2, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id));
	LINE_NUMBER(69);
	((func_mindustry_editor_EditorTile_updateStatic) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorTile_updateStatic])(ctx, (frame[0].o));
	LINE_NUMBER(70);
	goto label_17;
	}
label_10:;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = jint(2);
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	((func_mindustry_editor_EditorTile_op_int_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorTile_op_int_short])(ctx, sp[0].o, temp0, (jshort((jbyte(((jint)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_rotation))))));
	}
label_18:;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = jint(3);
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_team;
	((func_mindustry_editor_EditorTile_op_int_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorTile_op_int_short])(ctx, sp[0].o, temp0, (jshort((jbyte(((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id))))));
	}
label_19:;
	{
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	jint temp0 = jint(1);
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	((func_mindustry_editor_EditorTile_op_int_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorTile_op_int_short])(ctx, sp[0].o, temp0, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id));
	}
label_17:;
	{
	LINE_NUMBER(76);
	M_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].o));
	LINE_NUMBER(78);
	jint temp0 = (jint)((func_mindustry_editor_EditorTile_requiresBlockUpdate_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorTile_requiresBlockUpdate_mindustry_world_Block_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_21;
	}
	{
	jint temp0 = (jint)((func_mindustry_editor_EditorTile_requiresBlockUpdate_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorTile_requiresBlockUpdate_mindustry_world_Block_R_boolean])(ctx, (frame[0].o), (frame[5].o));
	if (temp0 == 0) goto label_22;
	}
label_21:;
	{
	LINE_NUMBER(79);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[5].o)))->F_size) <= (jint(1))) goto label_23;
	}
	{
	LINE_NUMBER(80);
	sp[0].o = frame[6].o;
	sp[1].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorTile_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_editor_EditorTile_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_editor_EditorTile_invoke_arc_func_Cons_3);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_23:;
	{
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorTile_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_editor_EditorTile_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_editor_EditorTile_invoke_arc_func_Cons_4);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_EditorTile_getLinkedTiles_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorTile_getLinkedTiles_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	goto label_25;
	}
label_22:;
	{
	LINE_NUMBER(84);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_blocks;
	((func_mindustry_graphics_BlockRenderer_updateShadowTile_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_BlockRenderer_updateShadowTile_mindustry_world_Tile])(ctx, sp[0].o, (frame[0].o));
	}
label_25:;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	if (sp[0].o == nullptr) goto label_26;
	}
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_wasVisible = (jint(1));
	}
label_26:;
	{
	LINE_NUMBER(91);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tileChanges = (((jint)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tileChanges) + (jint(1)));
	LINE_NUMBER(93);
	((func_mindustry_world_Block_blockChanged_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Block_blockChanged_mindustry_world_Tile])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorTile_setTeam_mindustry_game_Team(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTile:setTeam", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(98);
	jint temp0 = (jint)((func_mindustry_editor_EditorTile_skip_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorTile_skip_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(99);
	M_mindustry_world_Tile_setTeam_mindustry_game_Team(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(103);
	jint temp0 = (jint)((func_mindustry_editor_EditorTile_getTeamID_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorTile_getTeamID_R_int])(ctx, (frame[0].o));
	if (temp0 == ((jint)((mindustry_game_Team *) NULL_CHECK((frame[1].o)))->F_id)) goto label_4;
	}
	{
	jint temp0 = (jint)((func_mindustry_editor_EditorTile_synthetic_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorTile_synthetic_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_5;
	}
label_4:;
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	jint temp0 = jint(3);
	jint temp1 = (jint)((func_mindustry_editor_EditorTile_getTeamID_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorTile_getTeamID_R_int])(ctx, (frame[0].o));
	((func_mindustry_editor_EditorTile_op_int_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorTile_op_int_short])(ctx, sp[0].o, temp0, (jshort((jbyte(temp1)))));
	LINE_NUMBER(105);
	M_mindustry_world_Tile_setTeam_mindustry_game_Team(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorTile_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_editor_EditorTile_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_editor_EditorTile_invoke_arc_func_Cons_5);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_EditorTile_getLinkedTiles_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorTile_getLinkedTiles_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorTile_setOverlay_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTile:setOverlay", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(112);
	jint temp0 = (jint)((func_mindustry_editor_EditorTile_skip_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorTile_skip_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(113);
	M_mindustry_world_Tile_setOverlay_mindustry_world_Block(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_floor;
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_needsSurface) == 0) goto label_4;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_environment_OreBlock)) != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_floor;
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_supportsOverlay) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_supportsBeingOverlaid) != 0) goto label_4;
	}
label_5:;
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_overlay;
	if (sp[0].o != (frame[1].o)) goto label_6;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	jint temp0 = jint(4);
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_overlay;
	((func_mindustry_editor_EditorTile_op_int_short) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorTile_op_int_short])(ctx, sp[0].o, temp0, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id));
	LINE_NUMBER(120);
	M_mindustry_world_Tile_setOverlay_mindustry_world_Block(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(122);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_floorChanges = (((jint)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_floorChanges) + (jint(1)));
	LINE_NUMBER(124);
	((func_mindustry_world_blocks_environment_Floor_floorChanged_mindustry_world_Tile) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, (frame[1].o))))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_floorChanged_mindustry_world_Tile])(ctx, (checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, (frame[1].o))), (frame[0].o));
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorTile_fireChanged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTile:fireChanged", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(129);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(130);
	M_mindustry_world_Tile_fireChanged(ctx, (frame[0].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(132);
	((func_mindustry_editor_EditorTile_updateStatic) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorTile_updateStatic])(ctx, (frame[0].o));
	}
label_3:;
	LINE_NUMBER(134);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorTile_firePreChanged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTile:firePreChanged", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(138);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(139);
	M_mindustry_world_Tile_firePreChanged(ctx, (frame[0].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(141);
	((func_mindustry_editor_EditorTile_updateStatic) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorTile_updateStatic])(ctx, (frame[0].o));
	}
label_3:;
	LINE_NUMBER(143);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorTile_recache(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTile:recache", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	jint temp0 = (jint)((func_mindustry_editor_EditorTile_skip_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorTile_skip_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(148);
	M_mindustry_world_Tile_recache(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(150);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorTile_changed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTile:changed", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(154);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(155);
	M_mindustry_world_Tile_changed(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(157);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorTile_changeBuild_mindustry_game_Team_arc_func_Prov_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTile:changeBuild", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(161);
	jint temp0 = (jint)((func_mindustry_editor_EditorTile_skip_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorTile_skip_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(162);
	M_mindustry_world_Tile_changeBuild_mindustry_game_Team_arc_func_Prov_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i));
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(166);
	((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build = (jref) (jobject(nullptr));
	LINE_NUMBER(168);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_floor;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_floor = (jref) (checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, sp[1].o));
	}
label_6:;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((func_mindustry_editor_EditorTile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorTile_block_R_mindustry_world_Block])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(173);
	jint temp0 = (jint)((func_mindustry_world_Block_hasBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Block_hasBuilding_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(174);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)))->vtable)[VTABLE_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building])(ctx, (checkCast(ctx, &class_mindustry_gen_Building, sp[1].o)), (frame[0].o), (frame[1].o), (jint(0)), (frame[3].i));
	((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build = (jref) sp[1].o;
	LINE_NUMBER(175);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[4].o)))->F_hasItems) == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_modules_ItemModule);
	init_mindustry_world_modules_ItemModule(ctx, sp[1].o);
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	}
label_11:;
	{
	LINE_NUMBER(176);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[4].o)))->F_hasLiquids) == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	clinit_mindustry_world_modules_LiquidModule(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_modules_LiquidModule);
	init_mindustry_world_modules_LiquidModule(ctx, sp[1].o);
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_liquids = (jref) sp[1].o;
	}
label_12:;
	{
	LINE_NUMBER(177);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[4].o)))->F_hasPower) == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	clinit_mindustry_world_modules_PowerModule(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_modules_PowerModule);
	init_mindustry_world_modules_PowerModule(ctx, sp[1].o);
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_power = (jref) sp[1].o;
	}
label_8:;
	LINE_NUMBER(179);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_editor_EditorTile_isDarkened_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTile:isDarkened", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(183);
	jint temp0 = (jint)((func_mindustry_editor_EditorTile_skip_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorTile_skip_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)M_mindustry_world_Tile_isDarkened_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
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

jbool M_mindustry_editor_EditorTile_requiresBlockUpdate_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTile:requiresBlockUpdate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(187);
	sp[0].o = frame[1].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_cacheLayer;
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_CacheLayer_normal;
	if (sp[0].o != sp[1].o) goto label_1;
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

void M_mindustry_editor_EditorTile_updateStatic(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTile:updateStatic", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(191);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_renderer;
	((func_mindustry_editor_EditorRenderer_updateStatic_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorRenderer_updateStatic_int_int])(ctx, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y));
	}
label_1:;
	LINE_NUMBER(192);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_editor_EditorTile_skip_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTile:skip", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(195);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp0 = (jint)((func_mindustry_editor_MapEditor_isLoading_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_isLoading_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_isGenerating_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_isGenerating_R_boolean])(ctx, sp[0].o);
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

void M_mindustry_editor_EditorTile_op_int_short(jcontext ctx, jobject self, jint param0, jshort param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTile:op", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(199);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jlong temp0 = (jlong)SM_mindustry_gen_TileOp_get_int_int_int_int_R_long(ctx, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y), (jbyte((frame[1].i))), (frame[2].i));
	((func_mindustry_editor_MapEditor_addTileOp_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_addTileOp_long])(ctx, sp[0].o, temp0);
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_EditorTile_lambda$setTeam$0_mindustry_world_Tile(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTile:lambda$setTeam$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTile(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(107);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_renderer;
	((func_mindustry_editor_EditorRenderer_updateBlock_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorRenderer_updateBlock_int_int])(ctx, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_EditorTile_lambda$setBlock$1_mindustry_world_Tile(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTile:lambda$setBlock$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTile(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(82);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_renderer;
	((func_mindustry_editor_EditorRenderer_updateBlock_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorRenderer_updateBlock_mindustry_world_Tile])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_EditorTile_lambda$setBlock$0_mindustry_world_Tile(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTile:lambda$setBlock$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTile(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(80);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_renderer;
	((func_mindustry_editor_EditorRenderer_updateBlock_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorRenderer_updateBlock_mindustry_world_Tile])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_EditorTile[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_world_Tile_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_world_Tile_getX_R_float,
	(void *) M_mindustry_world_Tile_getY_R_float,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) M_mindustry_world_Tile_hitbox_arc_math_geom_Rect,
	(void *) M_mindustry_world_Tile_displayable_R_boolean,
	(void *) M_mindustry_world_Tile_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_Tile_pos_R_int,
	(void *) M_mindustry_world_Tile_array_R_int,
	(void *) M_mindustry_world_Tile_relativeTo_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_world_Tile_relativeTo_int_int_R_byte,
	(void *) M_mindustry_world_Tile_absoluteRelativeTo_int_int_R_byte,
	(void *) M_mindustry_world_Tile_getFlammability_R_float,
	(void *) M_mindustry_world_Tile_inMapArea_R_boolean,
	(void *) M_mindustry_world_Tile_worldx_R_float,
	(void *) M_mindustry_world_Tile_worldy_R_float,
	(void *) M_mindustry_world_Tile_drawx_R_float,
	(void *) M_mindustry_world_Tile_drawy_R_float,
	(void *) M_mindustry_editor_EditorTile_isDarkened_R_boolean,
	(void *) M_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_world_Tile_block_R_mindustry_world_Block,
	(void *) M_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_world_Tile_updateBlockReference_mindustry_world_Block,
	(void *) M_mindustry_world_Tile_cblock_R_mindustry_world_Block,
	(void *) M_mindustry_world_Tile_team_R_mindustry_game_Team,
	(void *) M_mindustry_editor_EditorTile_setTeam_mindustry_game_Team,
	(void *) M_mindustry_world_Tile_isCenter_R_boolean,
	(void *) M_mindustry_world_Tile_centerX_R_int,
	(void *) M_mindustry_world_Tile_centerY_R_int,
	(void *) M_mindustry_world_Tile_getTeamID_R_int,
	(void *) M_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int,
	(void *) M_mindustry_editor_EditorTile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov,
	(void *) M_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team,
	(void *) M_mindustry_world_Tile_setBlock_mindustry_world_Block,
	(void *) M_mindustry_editor_EditorTile_setFloor_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_editor_EditorTile_isEditorTile_R_boolean,
	(void *) M_mindustry_world_Tile_setAir,
	(void *) M_mindustry_world_Tile_circle_int_arc_func_Intc2,
	(void *) M_mindustry_world_Tile_circle_int_arc_func_Cons,
	(void *) M_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color,
	(void *) M_mindustry_world_Tile_recacheWall,
	(void *) M_mindustry_editor_EditorTile_recache,
	(void *) M_mindustry_world_Tile_remove,
	(void *) M_mindustry_world_Tile_removeNet,
	(void *) M_mindustry_world_Tile_setNet_mindustry_world_Block,
	(void *) M_mindustry_world_Tile_setNet_mindustry_world_Block_mindustry_game_Team_int,
	(void *) M_mindustry_world_Tile_setFloorNet_mindustry_world_Block_mindustry_world_Block,
	(void *) M_mindustry_world_Tile_setFloorNet_mindustry_world_Block,
	(void *) M_mindustry_world_Tile_setOverlayNet_mindustry_world_Block,
	(void *) M_mindustry_world_Tile_overlayID_R_short,
	(void *) M_mindustry_world_Tile_blockID_R_short,
	(void *) M_mindustry_world_Tile_floorID_R_short,
	(void *) M_mindustry_editor_EditorTile_setOverlay_mindustry_world_Block,
	(void *) M_mindustry_world_Tile_setOverlayQuiet_mindustry_world_Block,
	(void *) M_mindustry_world_Tile_clearOverlay,
	(void *) M_mindustry_world_Tile_passable_R_boolean,
	(void *) M_mindustry_world_Tile_synthetic_R_boolean,
	(void *) M_mindustry_world_Tile_solid_R_boolean,
	(void *) M_mindustry_world_Tile_breakable_R_boolean,
	(void *) M_mindustry_world_Tile_dangerous_R_boolean,
	(void *) M_mindustry_world_Tile_isDeep_R_boolean,
	(void *) M_mindustry_world_Tile_getLinkedTiles_arc_func_Cons,
	(void *) M_mindustry_world_Tile_getLinkedTiles_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_func_Cons,
	(void *) M_mindustry_world_Tile_getHitbox_arc_math_geom_Rect_R_arc_math_geom_Rect,
	(void *) M_mindustry_world_Tile_getBounds_arc_math_geom_Rect_R_arc_math_geom_Rect,
	(void *) M_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile,
	(void *) M_mindustry_world_Tile_nearby_int_int_R_mindustry_world_Tile,
	(void *) M_mindustry_world_Tile_nearby_int_R_mindustry_world_Tile,
	(void *) M_mindustry_world_Tile_nearbyBuild_int_R_mindustry_gen_Building,
	(void *) M_mindustry_world_Tile_interactable_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_world_Tile_drop_R_mindustry_type_Item,
	(void *) M_mindustry_world_Tile_wallDrop_R_mindustry_type_Item,
	(void *) M_mindustry_world_Tile_shouldSaveData_R_boolean,
	(void *) M_mindustry_world_Tile_staticDarkness_R_int,
	(void *) M_mindustry_world_Tile_legSolid_R_boolean,
	(void *) M_mindustry_world_Tile_adjacentTo_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Tile_preChanged,
	(void *) M_mindustry_editor_EditorTile_changeBuild_mindustry_game_Team_arc_func_Prov_int,
	(void *) M_mindustry_editor_EditorTile_changed,
	(void *) M_mindustry_editor_EditorTile_fireChanged,
	(void *) M_mindustry_editor_EditorTile_firePreChanged,
	(void *) M_mindustry_world_Tile_getPackedData_R_long,
	(void *) M_mindustry_world_Tile_setPackedData_long,
	(void *) M_mindustry_world_Tile_lambda$display$0_mindustry_world_Block_arc_scene_ui_layout_Table,
	(void *) M_mindustry_editor_EditorTile_requiresBlockUpdate_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_editor_EditorTile_updateStatic,
	(void *) M_mindustry_editor_EditorTile_skip_R_boolean,
	(void *) M_mindustry_editor_EditorTile_op_int_short,
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
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "angleTo", "(Larc/math/geom/Position;)F" },
	{ "angleTo", "(FF)F" },
	{ "dst2", "(Larc/math/geom/Position;)F" },
	{ "dst", "(Larc/math/geom/Position;)F" },
	{ "dst", "(FF)F" },
	{ "dst2", "(FF)F" },
	{ "within", "(Larc/math/geom/Position;F)Z" },
	{ "within", "(FFF)Z" },
	{ "hitbox", "(Larc/math/geom/Rect;)V" },
	{ "displayable", "()Z" },
	{ "display", "(Larc/scene/ui/layout/Table;)V" },
	{ "pos", "()I" },
	{ "array", "()I" },
	{ "relativeTo", "(Lmindustry/world/Tile;)B" },
	{ "relativeTo", "(II)B" },
	{ "absoluteRelativeTo", "(II)B" },
	{ "getFlammability", "()F" },
	{ "inMapArea", "()Z" },
	{ "worldx", "()F" },
	{ "worldy", "()F" },
	{ "drawx", "()F" },
	{ "drawy", "()F" },
	{ "isDarkened", "()Z" },
	{ "floor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "block", "()Lmindustry/world/Block;" },
	{ "overlay", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "updateBlockReference", "(Lmindustry/world/Block;)V" },
	{ "cblock", "()Lmindustry/world/Block;" },
	{ "team", "()Lmindustry/game/Team;" },
	{ "setTeam", "(Lmindustry/game/Team;)V" },
	{ "isCenter", "()Z" },
	{ "centerX", "()I" },
	{ "centerY", "()I" },
	{ "getTeamID", "()I" },
	{ "setBlock", "(Lmindustry/world/Block;Lmindustry/game/Team;I)V" },
	{ "setBlock", "(Lmindustry/world/Block;Lmindustry/game/Team;ILarc/func/Prov;)V" },
	{ "setBlock", "(Lmindustry/world/Block;Lmindustry/game/Team;)V" },
	{ "setBlock", "(Lmindustry/world/Block;)V" },
	{ "setFloor", "(Lmindustry/world/blocks/environment/Floor;)V" },
	{ "isEditorTile", "()Z" },
	{ "setAir", "()V" },
	{ "circle", "(ILarc/func/Intc2;)V" },
	{ "circle", "(ILarc/func/Cons;)V" },
	{ "getFloorColor", "()Larc/graphics/Color;" },
	{ "recacheWall", "()V" },
	{ "recache", "()V" },
	{ "remove", "()V" },
	{ "removeNet", "()V" },
	{ "setNet", "(Lmindustry/world/Block;)V" },
	{ "setNet", "(Lmindustry/world/Block;Lmindustry/game/Team;I)V" },
	{ "setFloorNet", "(Lmindustry/world/Block;Lmindustry/world/Block;)V" },
	{ "setFloorNet", "(Lmindustry/world/Block;)V" },
	{ "setOverlayNet", "(Lmindustry/world/Block;)V" },
	{ "overlayID", "()S" },
	{ "blockID", "()S" },
	{ "floorID", "()S" },
	{ "setOverlay", "(Lmindustry/world/Block;)V" },
	{ "setOverlayQuiet", "(Lmindustry/world/Block;)V" },
	{ "clearOverlay", "()V" },
	{ "passable", "()Z" },
	{ "synthetic", "()Z" },
	{ "solid", "()Z" },
	{ "breakable", "()Z" },
	{ "dangerous", "()Z" },
	{ "isDeep", "()Z" },
	{ "getLinkedTiles", "(Larc/func/Cons;)V" },
	{ "getLinkedTiles", "(Larc/struct/Seq;)Larc/struct/Seq;" },
	{ "getLinkedTilesAs", "(Lmindustry/world/Block;Larc/struct/Seq;)Larc/struct/Seq;" },
	{ "getLinkedTilesAs", "(Lmindustry/world/Block;Larc/func/Cons;)V" },
	{ "getHitbox", "(Larc/math/geom/Rect;)Larc/math/geom/Rect;" },
	{ "getBounds", "(Larc/math/geom/Rect;)Larc/math/geom/Rect;" },
	{ "nearby", "(Larc/math/geom/Point2;)Lmindustry/world/Tile;" },
	{ "nearby", "(II)Lmindustry/world/Tile;" },
	{ "nearby", "(I)Lmindustry/world/Tile;" },
	{ "nearbyBuild", "(I)Lmindustry/gen/Building;" },
	{ "interactable", "(Lmindustry/game/Team;)Z" },
	{ "drop", "()Lmindustry/type/Item;" },
	{ "wallDrop", "()Lmindustry/type/Item;" },
	{ "shouldSaveData", "()Z" },
	{ "staticDarkness", "()I" },
	{ "legSolid", "()Z" },
	{ "adjacentTo", "(Lmindustry/world/Tile;)Z" },
	{ "preChanged", "()V" },
	{ "changeBuild", "(Lmindustry/game/Team;Larc/func/Prov;I)V" },
	{ "changed", "()V" },
	{ "fireChanged", "()V" },
	{ "firePreChanged", "()V" },
	{ "getPackedData", "()J" },
	{ "setPackedData", "(J)V" },
	{ "lambda$display$0", "(Lmindustry/world/Block;Larc/scene/ui/layout/Table;)V" },
	{ "requiresBlockUpdate", "(Lmindustry/world/Block;)Z" },
	{ "updateStatic", "()V" },
	{ "skip", "()Z" },
	{ "op", "(IS)V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_EditorTile_int_int_int_int_int, 0, "(IIIII)V", 1 },
	{ "setFloor", (intptr_t) M_mindustry_editor_EditorTile_setFloor_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_editor_EditorTile_setFloor_mindustry_world_blocks_environment_Floor, "(Lmindustry/world/blocks/environment/Floor;)V", 1 },
	{ "isEditorTile", (intptr_t) M_mindustry_editor_EditorTile_isEditorTile_R_boolean, VTABLE_mindustry_editor_EditorTile_isEditorTile_R_boolean, "()Z", 1 },
	{ "setBlock", (intptr_t) M_mindustry_editor_EditorTile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov, VTABLE_mindustry_editor_EditorTile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov, "(Lmindustry/world/Block;Lmindustry/game/Team;ILarc/func/Prov;)V", 1 },
	{ "setTeam", (intptr_t) M_mindustry_editor_EditorTile_setTeam_mindustry_game_Team, VTABLE_mindustry_editor_EditorTile_setTeam_mindustry_game_Team, "(Lmindustry/game/Team;)V", 1 },
	{ "setOverlay", (intptr_t) M_mindustry_editor_EditorTile_setOverlay_mindustry_world_Block, VTABLE_mindustry_editor_EditorTile_setOverlay_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
	{ "fireChanged", (intptr_t) M_mindustry_editor_EditorTile_fireChanged, VTABLE_mindustry_editor_EditorTile_fireChanged, "()V", 4 },
	{ "firePreChanged", (intptr_t) M_mindustry_editor_EditorTile_firePreChanged, VTABLE_mindustry_editor_EditorTile_firePreChanged, "()V", 4 },
	{ "recache", (intptr_t) M_mindustry_editor_EditorTile_recache, VTABLE_mindustry_editor_EditorTile_recache, "()V", 1 },
	{ "changed", (intptr_t) M_mindustry_editor_EditorTile_changed, VTABLE_mindustry_editor_EditorTile_changed, "()V", 4 },
	{ "changeBuild", (intptr_t) M_mindustry_editor_EditorTile_changeBuild_mindustry_game_Team_arc_func_Prov_int, VTABLE_mindustry_editor_EditorTile_changeBuild_mindustry_game_Team_arc_func_Prov_int, "(Lmindustry/game/Team;Larc/func/Prov;I)V", 4 },
	{ "isDarkened", (intptr_t) M_mindustry_editor_EditorTile_isDarkened_R_boolean, VTABLE_mindustry_editor_EditorTile_isDarkened_R_boolean, "()Z", 1 },
	{ "requiresBlockUpdate", (intptr_t) M_mindustry_editor_EditorTile_requiresBlockUpdate_mindustry_world_Block_R_boolean, VTABLE_mindustry_editor_EditorTile_requiresBlockUpdate_mindustry_world_Block_R_boolean, "(Lmindustry/world/Block;)Z", 2 },
	{ "updateStatic", (intptr_t) M_mindustry_editor_EditorTile_updateStatic, VTABLE_mindustry_editor_EditorTile_updateStatic, "()V", 2 },
	{ "skip", (intptr_t) M_mindustry_editor_EditorTile_skip_R_boolean, VTABLE_mindustry_editor_EditorTile_skip_R_boolean, "()Z", 2 },
	{ "op", (intptr_t) M_mindustry_editor_EditorTile_op_int_short, VTABLE_mindustry_editor_EditorTile_op_int_short, "(IS)V", 2 },
	{ "lambda$setTeam$0", (intptr_t) SM_mindustry_editor_EditorTile_lambda$setTeam$0_mindustry_world_Tile, 0, "(Lmindustry/world/Tile;)V", 4106 },
	{ "lambda$setBlock$1", (intptr_t) SM_mindustry_editor_EditorTile_lambda$setBlock$1_mindustry_world_Tile, 0, "(Lmindustry/world/Tile;)V", 4106 },
	{ "lambda$setBlock$0", (intptr_t) SM_mindustry_editor_EditorTile_lambda$setBlock$0_mindustry_world_Tile, 0, "(Lmindustry/world/Tile;)V", 4106 },
};

Class class_mindustry_editor_EditorTile{
		.nativeName = (intptr_t) "mindustry/editor/EditorTile",
		.parentClass = (intptr_t) &class_mindustry_world_Tile,
		.size = sizeof(mindustry_editor_EditorTile),
		.classVtable = (intptr_t) vtable_mindustry_editor_EditorTile,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_EditorTile,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_EditorTile,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 107,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_EditorTile = registerClass(&class_mindustry_editor_EditorTile);

}
