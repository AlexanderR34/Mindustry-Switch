#include "mindustry/io/MapIO_3.h"
#include "mindustry/maps/Map.h"
#include "mindustry/world/CachedTile.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/Color.h"
#include "mindustry/io/MapIO.h"
#include "mindustry/gen/Building.h"
#include "arc/struct/IntSet.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "arc/graphics/Pixmap.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/world/WorldContext.h"
#include "mindustry/world/Tile.h"
#include "mindustry/io/MapIO_3.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/world/blocks/storage/CoreBlock.h"

extern "C" {


void mark_mindustry_io_MapIO$3(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_io_MapIO$3 *) object;
	if (self->F_val$tile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$tile)->clazz)->markFunction)((jobject) self->F_val$tile, mark, depth + 1);
	if (self->F_val$walls)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$walls)->clazz)->markFunction)((jobject) self->F_val$walls, mark, depth + 1);
	if (self->F_val$floors)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$floors)->clazz)->markFunction)((jobject) self->F_val$floors, mark, depth + 1);
	if (self->F_val$map)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$map)->clazz)->markFunction)((jobject) self->F_val$map, mark, depth + 1);
	if (self->F_val$floorIds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$floorIds)->clazz)->markFunction)((jobject) self->F_val$floorIds, mark, depth + 1);
	if (self->F_val$overlays)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$overlays)->clazz)->markFunction)((jobject) self->F_val$overlays, mark, depth + 1);
}

void clinit_mindustry_io_MapIO$3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_io_MapIO$3_mindustry_world_CachedTile_arc_graphics_Pixmap_arc_graphics_Pixmap_mindustry_maps_Map_Array1_short_int_Array1_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jint param5, jobject param6) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/MapIO$3:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_MapIO$3(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].i = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(113);
	((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$tile = (jref) (frame[1].o);
	((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$walls = (jref) (frame[2].o);
	((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$floors = (jref) (frame[3].o);
	((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$map = (jref) (frame[4].o);
	((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$floorIds = (jref) (frame[5].o);
	((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$width = (frame[6].i);
	((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$overlays = (jref) (frame[7].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_MapIO$3_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/MapIO$3:resize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	LINE_NUMBER(114);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_io_MapIO$3_isGenerating_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/MapIO$3:isGenerating", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_io_MapIO$3_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/MapIO$3:begin", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(117);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	((func_mindustry_core_World_setGenerating_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_setGenerating_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_MapIO$3_end(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/MapIO$3:end", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(120);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	((func_mindustry_core_World_setGenerating_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_setGenerating_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_MapIO$3_onReadBuilding(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/MapIO$3:onReadBuilding", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	jint temp0 = (jint)((func_arc_graphics_Color_rgba8888_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_rgba8888_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(128);
	sp[0].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$tile;
	sp[0].o = (jobject)((func_mindustry_world_CachedTile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_CachedTile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	frame[2].i = ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(129);
	frame[3].i = ((-((frame[2].i) - (jint(1)))) / (jint(2)));
	LINE_NUMBER(130);
	frame[4].i = ((-((frame[2].i) - (jint(1)))) / (jint(2)));
	LINE_NUMBER(131);
	frame[5].i = (jint(0));
	}
label_7:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_8;
	}
	{
	LINE_NUMBER(132);
	frame[6].i = (jint(0));
	}
label_10:;
	{
	if ((frame[6].i) >= (frame[2].i)) goto label_11;
	}
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$tile;
	frame[7].i = ((((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x) + (frame[5].i)) + (frame[3].i));
	sp[0].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$tile;
	frame[8].i = ((((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y) + (frame[6].i)) + (frame[4].i));
	LINE_NUMBER(134);
	sp[0].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$walls;
	jint temp0 = frame[7].i;
	sp[1].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$floors;
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, sp[0].o, temp0, ((((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[1].o))->F_height) - (jint(1))) - (frame[8].i)), (frame[1].i));
	LINE_NUMBER(132);
	INST_IINC(6, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(131);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_storage_CoreBlock)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$map;
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK(sp[0].o))->F_teams;
	sp[1].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$tile;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_build;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_team;
	jint temp0 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id));
	}
label_1:;
	LINE_NUMBER(142);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_io_MapIO$3_tile_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/MapIO$3:tile", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$tile;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$map;
	((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x = (jshort((temp0 % ((jint)((mindustry_maps_Map *) NULL_CHECK(sp[1].o))->F_width))));
	LINE_NUMBER(147);
	sp[0].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$tile;
	jint temp1 = frame[1].i;
	sp[1].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$map;
	((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y = (jshort((temp1 / ((jint)((mindustry_maps_Map *) NULL_CHECK(sp[1].o))->F_width))));
	LINE_NUMBER(148);
	sp[0].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$tile;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_io_MapIO$3_create_int_int_int_int_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/MapIO$3:create", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$floors;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$floors;
	jint temp1 = (((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[1].o))->F_height) - (jint(1))) - (frame[2].i);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_content;
	sp[2].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[2].o, (frame[3].i));
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_content;
	sp[3].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[3].o, (frame[4].i));
	clinit_mindustry_game_Team(ctx);
	sp[4].o = (jobject)SF_mindustry_game_Team_derelict;
	jint temp2 = (jint)SM_mindustry_io_MapIO_colorFor_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block_mindustry_game_Team_R_int(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(155);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[0].o, (frame[4].i));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_spawn;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$map;
	((mindustry_maps_Map *) NULL_CHECK(sp[0].o))->F_spawns = (((jint)((mindustry_maps_Map *) NULL_CHECK(sp[0].o))->F_spawns) + (jint(1)));
	}
label_2:;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$floorIds;
	ARRAY_ACCESS(jshort, sp[0].o, ((frame[1].i) + ((frame[2].i) * ((jint)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$width)))) = (jshort((frame[3].i)));
	LINE_NUMBER(159);
	sp[0].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$overlays;
	jint temp0 = (frame[1].i) + ((frame[2].i) * ((jint)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$width));
	sp[1].i = temp0;
	sp += 2;
	if ((frame[4].i) == 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 3;
	ARRAY_ACCESS(jbyte, sp[0].o, sp[1].i) = sp[2].i;
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$tile;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_MapIO$3_onReadTileData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/MapIO$3:onReadTileData", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$tile;
	sp[0].o = (jobject)((func_mindustry_world_CachedTile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_CachedTile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(166);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$floorIds;
	sp[2].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$tile;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[0].o, ((jint)ARRAY_ACCESS(jshort, sp[1].o, (temp0 + (((jint)((mindustry_world_Tile *) NULL_CHECK(sp[2].o))->F_y) * ((jint)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$width))))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(168);
	jint temp1 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, (frame[1].o));
	if (temp1 != 0) goto label_3;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(169);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$tile;
	jint temp0 = (jint)((func_mindustry_world_Block_minimapColor_mindustry_world_Tile_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_minimapColor_mindustry_world_Tile_R_int])(ctx, sp[0].o, sp[1].o);
	frame[3].i = temp0;
	LINE_NUMBER(170);
	if ((frame[3].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$walls;
	sp[1].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$walls;
	jint temp1 = ((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[1].o))->F_height) - (jint(1));
	sp[1].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$tile;
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, sp[0].o, temp0, (temp1 - ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y)), (frame[3].i));
	}
label_6:;
	LINE_NUMBER(173);
	goto label_8;
label_3:;
	{
	sp[0].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$overlays;
	sp[1].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$tile;
	jint temp0 = (jint)((func_mindustry_world_CachedTile_array_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_CachedTile_array_R_int])(ctx, sp[1].o);
	if (((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0)) != 0) goto label_8;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(174);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$tile;
	jint temp0 = (jint)((func_mindustry_world_Block_minimapColor_mindustry_world_Tile_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_minimapColor_mindustry_world_Tile_R_int])(ctx, sp[0].o, sp[1].o);
	frame[3].i = temp0;
	LINE_NUMBER(175);
	if ((frame[3].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$floors;
	sp[1].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$floors;
	jint temp1 = ((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[1].o))->F_height) - (jint(1));
	sp[1].o = (jobject)((mindustry_io_MapIO$3 *) NULL_CHECK((frame[0].o)))->F_val$tile;
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, sp[0].o, temp0, (temp1 - ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y)), (frame[3].i));
	}
label_8:;
	LINE_NUMBER(179);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_io_MapIO$3[] {
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
	(void *) M_mindustry_io_MapIO$3_tile_int_R_mindustry_world_Tile,
	(void *) M_mindustry_io_MapIO$3_resize_int_int,
	(void *) M_mindustry_io_MapIO$3_create_int_int_int_int_int_R_mindustry_world_Tile,
	(void *) M_mindustry_io_MapIO$3_isGenerating_R_boolean,
	(void *) M_mindustry_io_MapIO$3_begin,
	(void *) M_mindustry_io_MapIO$3_end,
	(void *) M_mindustry_io_MapIO$3_onReadBuilding,
	(void *) M_mindustry_io_MapIO$3_onReadTileData,
	(void *) M_mindustry_world_WorldContext_getSector_R_mindustry_type_Sector,
	(void *) M_mindustry_world_WorldContext_isMap_R_boolean,
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
	{ "tile", "(I)Lmindustry/world/Tile;" },
	{ "resize", "(II)V" },
	{ "create", "(IIIII)Lmindustry/world/Tile;" },
	{ "isGenerating", "()Z" },
	{ "begin", "()V" },
	{ "end", "()V" },
	{ "onReadBuilding", "()V" },
	{ "onReadTileData", "()V" },
	{ "getSector", "()Lmindustry/type/Sector;" },
	{ "isMap", "()Z" },
};

static jclass interfaces[] { &class_mindustry_world_WorldContext, };

static FieldMetadata fields[] {
	{ "val$tile", &class_mindustry_world_CachedTile, offsetof(mindustry_io_MapIO$3, F_val$tile), "Lmindustry/world/CachedTile;", 4112 },
	{ "val$walls", &class_arc_graphics_Pixmap, offsetof(mindustry_io_MapIO$3, F_val$walls), "Larc/graphics/Pixmap;", 4112 },
	{ "val$floors", &class_arc_graphics_Pixmap, offsetof(mindustry_io_MapIO$3, F_val$floors), "Larc/graphics/Pixmap;", 4112 },
	{ "val$map", &class_mindustry_maps_Map, offsetof(mindustry_io_MapIO$3, F_val$map), "Lmindustry/maps/Map;", 4112 },
	{ "val$floorIds", getArrayClass(&class_short, 1), offsetof(mindustry_io_MapIO$3, F_val$floorIds), "[S", 4112 },
	{ "val$width", &class_int, offsetof(mindustry_io_MapIO$3, F_val$width), "I", 4112 },
	{ "val$overlays", getArrayClass(&class_boolean, 1), offsetof(mindustry_io_MapIO$3, F_val$overlays), "[Z", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_io_MapIO$3_mindustry_world_CachedTile_arc_graphics_Pixmap_arc_graphics_Pixmap_mindustry_maps_Map_Array1_short_int_Array1_boolean, 0, "(Lmindustry/world/CachedTile;Larc/graphics/Pixmap;Larc/graphics/Pixmap;Lmindustry/maps/Map;[SI[Z)V", 0 },
	{ "resize", (intptr_t) M_mindustry_io_MapIO$3_resize_int_int, VTABLE_mindustry_io_MapIO$3_resize_int_int, "(II)V", 1 },
	{ "isGenerating", (intptr_t) M_mindustry_io_MapIO$3_isGenerating_R_boolean, VTABLE_mindustry_io_MapIO$3_isGenerating_R_boolean, "()Z", 1 },
	{ "begin", (intptr_t) M_mindustry_io_MapIO$3_begin, VTABLE_mindustry_io_MapIO$3_begin, "()V", 1 },
	{ "end", (intptr_t) M_mindustry_io_MapIO$3_end, VTABLE_mindustry_io_MapIO$3_end, "()V", 1 },
	{ "onReadBuilding", (intptr_t) M_mindustry_io_MapIO$3_onReadBuilding, VTABLE_mindustry_io_MapIO$3_onReadBuilding, "()V", 1 },
	{ "tile", (intptr_t) M_mindustry_io_MapIO$3_tile_int_R_mindustry_world_Tile, VTABLE_mindustry_io_MapIO$3_tile_int_R_mindustry_world_Tile, "(I)Lmindustry/world/Tile;", 1 },
	{ "create", (intptr_t) M_mindustry_io_MapIO$3_create_int_int_int_int_int_R_mindustry_world_Tile, VTABLE_mindustry_io_MapIO$3_create_int_int_int_int_int_R_mindustry_world_Tile, "(IIIII)Lmindustry/world/Tile;", 1 },
	{ "onReadTileData", (intptr_t) M_mindustry_io_MapIO$3_onReadTileData, VTABLE_mindustry_io_MapIO$3_onReadTileData, "()V", 1 },
};

Class class_mindustry_io_MapIO$3{
		.nativeName = (intptr_t) "mindustry/io/MapIO$3",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_io_MapIO$3),
		.classVtable = (intptr_t) vtable_mindustry_io_MapIO$3,
		.staticInitializer = (intptr_t) clinit_mindustry_io_MapIO$3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_io_MapIO$3,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_io_MapIO$3 = registerClass(&class_mindustry_io_MapIO$3);

}

