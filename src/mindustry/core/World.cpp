#include "mindustry/core/World.h"
#include "arc/math/Angles.h"
#include "arc/Events.h"
#include "arc/math/geom/Point2.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "mindustry/graphics/g3d/PlanetGrid_Ptile.h"
#include "java/lang/Runnable.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/core/World_invoke_arc_func_Boolf_2.h"
#include "mindustry/core/World_invoke_arc_func_Boolf_3.h"
#include "arc/struct/StringMap.h"
#include "mindustry/maps/MapException.h"
#include "mindustry/world/WorldParams.h"
#include "mindustry/type/Sector_SectorRect.h"
#include "arc/func/Intf.h"
#include "arc/util/I18NBundle.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/core/World_invoke_arc_func_Intf_1.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/game/SectorInfo.h"
#include "java/lang/Throwable.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "mindustry/maps/Map.h"
#include "java/lang/reflect/Field.h"
#include "arc/func/Func.h"
#include "arc/Core.h"
#include "arc/math/geom/Geometry_Raycaster.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/core/World_invoke_arc_func_Func_1.h"
#include "arc/util/Structs.h"
#include "mindustry/type/Item.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "mindustry/game/EventType_TileFloorChangeEvent.h"
#include "mindustry/core/World_Context.h"
#include "arc/math/geom/Intersector.h"
#include "java/lang/Object.h"
#include "mindustry/io/SaveIO.h"
#include "arc/struct/ObjectSet.h"
#include "java/lang/RuntimeException.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/maps/generators/WorldGenerator.h"
#include "java/lang/System.h"
#include "mindustry/type/SectorPreset.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "mindustry/maps/generators/PlanetGenerator.h"
#include "mindustry/core/World_invoke_java_lang_Runnable_3.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/game/Rules.h"
#include "mindustry/core/World_invoke_java_lang_Runnable_2.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "arc/util/noise/Noise.h"
#include "arc/files/Fi.h"
#include "mindustry/core/GameState_State.h"
#include "arc/Application.h"
#include "mindustry/world/Tiles.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "mindustry/game/EventType_WorldLoadEvent.h"
#include "java/util/Comparator.h"
#include "mindustry/world/WorldContext.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "mindustry/core/World_FilterContext.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/game/EventType_TileChangeEvent.h"
#include "mindustry/type/Sector.h"
#include "mindustry/world/blocks/legacy/LegacyBlock.h"
#include "mindustry/core/UI.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/maps/generators/FileMapGenerator.h"
#include "mindustry/game/Teams.h"
#include "mindustry/game/EventType_WorldLoadEndEvent.h"
#include "mindustry/core/World_invoke_arc_func_Cons_6.h"
#include "mindustry/type/Planet.h"
#include "mindustry/core/World_invoke_arc_func_Cons_7.h"
#include "mindustry/core/World_invoke_arc_func_Cons_4.h"
#include "mindustry/core/World_invoke_arc_func_Cons_5.h"
#include "mindustry/game/EventType_WorldLoadBeginEvent.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "mindustry/core/World.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_core_World(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_core_World *) object;
	if (self->F_context)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_context)->clazz)->markFunction)((jobject) self->F_context, mark, depth + 1);
	if (self->F_tiles)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tiles)->clazz)->markFunction)((jobject) self->F_tiles, mark, depth + 1);
	if (self->F_customMapLoaders)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_customMapLoaders)->clazz)->markFunction)((jobject) self->F_customMapLoaders, mark, depth + 1);
}

void clinit_mindustry_core_World(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_core_World(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_World(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(40);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_mindustry_core_World$Context(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_core_World$Context);
	init_mindustry_core_World$Context_mindustry_core_World(ctx, sp[1].o, (frame[0].o));
	((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_context = (jref) sp[1].o;
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_Tiles(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_Tiles);
	init_mindustry_world_Tiles_int_int(ctx, sp[1].o, (jint(0)), (jint(0)));
	((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles = (jref) sp[1].o;
	LINE_NUMBER(35);
	((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_tileChanges = (jint(1));
	((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_floorChanges = (jint(1));
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_customMapLoaders = (jref) sp[1].o;
	LINE_NUMBER(41);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$TileChangeEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_World_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_core_World_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_core_World_invoke_arc_func_Cons_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(42);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$TileFloorChangeEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_World_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_core_World_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_core_World_invoke_arc_func_Cons_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(44);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$WorldLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_core_World_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_core_World_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_core_World_invoke_arc_func_Cons_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_World_addMapLoader_mindustry_maps_Map_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:addMapLoader", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_customMapLoaders;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_core_World_isInvalidMap_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:isInvalidMap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return ((jint)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_invalidMap);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_core_World_solid_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:solid", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(67);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
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

jbool M_mindustry_core_World_passable_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:passable", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(73);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_passable_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_passable_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_core_World_wallSolid_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:wallSolid", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(78);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) == 0) goto label_3;
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

jbool M_mindustry_core_World_wallSolidFull_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:wallSolidFull", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(83);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_fillsTile) == 0) goto label_3;
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

jbool M_mindustry_core_World_isAccessible_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:isAccessible", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(87);
	jint temp0 = (jint)((func_mindustry_core_World_wallSolid_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_World_wallSolid_int_int_R_boolean])(ctx, (frame[0].o), (frame[1].i), ((frame[2].i) - (jint(1))));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_core_World_wallSolid_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_World_wallSolid_int_int_R_boolean])(ctx, (frame[0].o), (frame[1].i), ((frame[2].i) + (jint(1))));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_core_World_wallSolid_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_World_wallSolid_int_int_R_boolean])(ctx, (frame[0].o), ((frame[1].i) - (jint(1))), (frame[2].i));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_core_World_wallSolid_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_World_wallSolid_int_int_R_boolean])(ctx, (frame[0].o), ((frame[1].i) + (jint(1))), (frame[2].i));
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

jint M_mindustry_core_World_width_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:width", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_tiles;
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_width);
	}

	popStackFrame(ctx);
}

jint M_mindustry_core_World_height_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:height", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_tiles;
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_height);
	}

	popStackFrame(ctx);
}

jint M_mindustry_core_World_unitWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:unitWidth", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 * (8));
	}

	popStackFrame(ctx);
}

jint M_mindustry_core_World_unitHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:unitHeight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	jint temp0 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 * (8));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_World_floor_int_int_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:floor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(108);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_air;
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_core_World_floorWorld_float_float_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:floorWorld", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	frame[3].o = sp[0].o;
	LINE_NUMBER(113);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_air;
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_core_World_tile_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:tile", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, (frame[1].i));
	jint temp1 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, (frame[1].i));
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_World_tile_int_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:tile", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_World_tileBuilding_int_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:tileBuilding", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(129);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_tile;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_World_build_int_int_R_mindustry_gen_Building(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:build", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(138);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_World_build_int_R_mindustry_gen_Building(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:build", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile])(ctx, (frame[0].o), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(144);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_World_rawTile_int_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:rawTile", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:tileWorld", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(153);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((frame[1].f) / (jfloat(8.0f))));
	jint temp1 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((frame[2].f) / (jfloat(8.0f))));
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:buildWorld", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((frame[1].f) / (jfloat(8.0f))));
	jint temp1 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((frame[2].f) / (jfloat(8.0f))));
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_World_buildWorld_arc_math_geom_Position_R_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:buildWorld", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(161);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_core_World_conv_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:conv", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_World(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(166);
	popStackFrame(ctx);
	return ((frame[0].f) / (jfloat(8.0f)));
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_core_World_unconv_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:unconv", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_World(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return ((frame[0].f) * (jfloat(8.0f)));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_core_World_toTile_float_R_int(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:toTile", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_World(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(175);
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((frame[0].f) / (jfloat(8.0f))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_core_World_packArray_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:packArray", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(179);
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_tiles;
	popStackFrame(ctx);
	return (temp0 + (temp1 * ((jint)((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_width)));
	}

	popStackFrame(ctx);
}

void M_mindustry_core_World_clearBuildings(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:clearBuildings", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_tiles;
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
	LINE_NUMBER(184);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	((func_mindustry_gen_Building_remove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_remove])(ctx, sp[0].o);
	}
label_4:;
	LINE_NUMBER(187);
	goto label_1;
label_2:;
	LINE_NUMBER(188);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_core_World_resize_int_int_R_mindustry_world_Tiles(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:resize", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(195);
	((func_mindustry_core_World_clearBuildings) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_World_clearBuildings])(ctx, (frame[0].o));
	LINE_NUMBER(197);
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_tiles;
	if (((jint)((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_width) != (frame[1].i)) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_tiles;
	if (((jint)((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_height) == (frame[2].i)) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(198);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_Tiles(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_Tiles);
	init_mindustry_world_Tiles_int_int(ctx, sp[1].o, (frame[1].i), (frame[2].i));
	((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_tiles;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_World_beginMapLoad(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:beginMapLoad", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(209);
	((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_generating = (jint(1));
	LINE_NUMBER(210);
	clinit_mindustry_game_EventType$WorldLoadBeginEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$WorldLoadBeginEvent);
	init_mindustry_game_EventType$WorldLoadBeginEvent(ctx, sp[0].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(211);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_World_endMapLoad(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:endMapLoad", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(218);
	clinit_mindustry_game_EventType$WorldLoadEndEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$WorldLoadEndEvent);
	init_mindustry_game_EventType$WorldLoadEndEvent(ctx, sp[0].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(220);
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_tiles;
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
	LINE_NUMBER(222);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_world_blocks_legacy_LegacyBlock)) == 0) goto label_5;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_legacy_LegacyBlock, (frame[4].o)));
	LINE_NUMBER(223);
	((func_mindustry_world_blocks_legacy_LegacyBlock_removeSelf_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_blocks_legacy_LegacyBlock_removeSelf_mindustry_world_Tile])(ctx, (frame[3].o), (frame[2].o));
	LINE_NUMBER(224);
	goto label_2;
	}
label_5:;
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	((func_mindustry_gen_Building_updateProximity) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_updateProximity])(ctx, sp[0].o);
	}
label_8:;
	LINE_NUMBER(230);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(232);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_tiles;
	((func_mindustry_core_World_addDarkness_mindustry_world_Tiles) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_addDarkness_mindustry_world_Tiles])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(234);
	jfloat temp0 = jfloat(-250.0f);
	jfloat temp1 = jfloat(-250.0f);
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_tiles;
	jfloat temp2 = (jfloat((((jint)((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_width) * (8)))) + (jfloat(500.0f));
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_tiles;
	SM_mindustry_gen_Groups_resize_float_float_float_float(ctx, temp0, temp1, temp2, ((jfloat((((jint)((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_height) * (8)))) + (jfloat(500.0f))));
	LINE_NUMBER(236);
	((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_generating = (jint(0));
	LINE_NUMBER(237);
	clinit_mindustry_game_EventType$WorldLoadEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$WorldLoadEvent);
	init_mindustry_game_EventType$WorldLoadEvent(ctx, sp[0].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(238);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_World_getQuadBounds_arc_math_geom_Rect_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:getQuadBounds", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(241);
	sp[0].o = frame[1].o;
	jfloat temp0 = jfloat(-250.0f);
	jfloat temp1 = jfloat(-250.0f);
	jint temp2 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat((temp2 * (8)))) + (jfloat(500.0f));
	jint temp4 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp0, temp1, temp3, ((jfloat((temp4 * (8)))) + (jfloat(500.0f))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_World_setGenerating_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:setGenerating", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(245);
	((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_generating = (frame[1].i);
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_core_World_isGenerating_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:isGenerating", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(249);
	popStackFrame(ctx);
	return ((jint)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_generating);
	}

	popStackFrame(ctx);
}

void M_mindustry_core_World_loadGenerator_int_int_arc_func_Cons(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:loadGenerator", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(253);
	((func_mindustry_core_World_beginMapLoad) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_World_beginMapLoad])(ctx, (frame[0].o));
	LINE_NUMBER(255);
	sp[0].o = (jobject)((func_mindustry_core_World_resize_int_int_R_mindustry_world_Tiles) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_World_resize_int_int_R_mindustry_world_Tiles])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(256);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_tiles;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(258);
	((func_mindustry_core_World_endMapLoad) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_World_endMapLoad])(ctx, (frame[0].o));
	LINE_NUMBER(259);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_World_loadSector_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:loadSector", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(262);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_world_WorldParams(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_world_WorldParams);
	init_mindustry_world_WorldParams(ctx, sp[2].o);
	((func_mindustry_core_World_loadSector_mindustry_type_Sector_mindustry_world_WorldParams) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_loadSector_mindustry_type_Sector_mindustry_world_WorldParams])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(263);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_World_loadSector_mindustry_type_Sector_mindustry_world_WorldParams(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:loadSector", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(266);
	((func_mindustry_core_World_setSectorRules_mindustry_type_Sector_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_World_setSectorRules_mindustry_type_Sector_boolean])(ctx, (frame[0].o), (frame[1].o), ((jint)((mindustry_world_WorldParams *) NULL_CHECK((frame[2].o)))->F_saveInfo));
	LINE_NUMBER(268);
	jint temp0 = (jint)((func_mindustry_type_Sector_getSize_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_getSize_R_int])(ctx, (frame[1].o));
	frame[3].i = temp0;
	LINE_NUMBER(269);
	sp[0].o = frame[0].o;
	jint temp1 = frame[3].i;
	jint temp2 = frame[3].i;
	{ /* InvokeDynamic */
		clinit_mindustry_core_World_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_core_World_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_core_World_invoke_arc_func_Cons_7);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_core_World_loadGenerator_int_int_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_loadGenerator_int_int_arc_func_Cons])(ctx, sp[0].o, temp1, temp2, sp[1].o);
	LINE_NUMBER(282);
	if (((jint)((mindustry_world_WorldParams *) NULL_CHECK((frame[2].o)))->F_saveInfo) == 0) goto label_4;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) == 0) goto label_4;
	}
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_info;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_waves = ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waves);
	}
label_4:;
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_generator;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_generator;
	sp[1].o = (jobject)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_tiles;
	((func_mindustry_maps_generators_PlanetGenerator_postGenerate_mindustry_world_Tiles) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_PlanetGenerator_postGenerate_mindustry_world_Tiles])(ctx, sp[0].o, sp[1].o);
	}
label_6:;
	{
	LINE_NUMBER(292);
	((func_mindustry_core_World_setSectorRules_mindustry_type_Sector_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_World_setSectorRules_mindustry_type_Sector_boolean])(ctx, (frame[0].o), (frame[1].o), ((jint)((mindustry_world_WorldParams *) NULL_CHECK((frame[2].o)))->F_saveInfo));
	LINE_NUMBER(294);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_info;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	sp[1].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_pos_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_pos_R_int])(ctx, sp[1].o);
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_spawnPosition = temp0;
	}
label_9:;
	LINE_NUMBER(297);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_World_setSectorRules_mindustry_type_Sector_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:setSectorRules", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(300);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_maps_Map(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_Map);
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"name"_j)));
	jint temp0 = jint(1);
	sp[3].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	jobject temp1 = sp[2].o;
	sp[2].o = sp[1].o;
	jobject temp2 = sp[3].o;
	sp[3].o = temp1;
	sp[4].o = temp1;
	sp[5].i = temp0;
	sp += 6;
	if (temp2 != nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_localizedName;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001; Sector \u0001"_j.string, 2, sp[0].o, boxInteger(ctx, ((jint)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_id)));
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_localizedName;
	sp += 1;
	}
label_3:;
	{
	sp -= 7;
	ARRAY_ACCESS(jobject, sp[3].o, sp[5].i) = sp[6].o;
	sp[2].o = (jobject)SM_arc_struct_StringMap_of_Array1_java_lang_Object_R_arc_struct_StringMap(ctx, sp[3].o);
	init_mindustry_maps_Map_arc_struct_StringMap(ctx, sp[1].o, sp[2].o);
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_map = (jref) sp[1].o;
	LINE_NUMBER(301);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector = (jref) (frame[1].o);
	LINE_NUMBER(303);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_generator;
	sp[1].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	((func_mindustry_maps_generators_PlanetGenerator_addWeather_mindustry_type_Sector_mindustry_game_Rules) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_PlanetGenerator_addWeather_mindustry_type_Sector_mindustry_game_Rules])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(305);
	clinit_arc_struct_ObjectSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(308);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[4].i = ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitMapArea);
	LINE_NUMBER(309);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitMapArea = (jint(0));
	LINE_NUMBER(311);
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, sp[0].o);
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
	LINE_NUMBER(312);
	jfloat temp0 = (jfloat)((func_mindustry_core_World_getDarkness_int_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_World_getDarkness_int_int_R_float])(ctx, (frame[0].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_y));
	if ((floatCompare(temp0, (jfloat(3.0f)), -1)) < 0) goto label_13;
	}
	LINE_NUMBER(313);
	goto label_10;
label_13:;
	{
	LINE_NUMBER(316);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[6].o));
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_liquidDrop;
	frame[7].o = sp[0].o;
	LINE_NUMBER(317);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[6].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemDrop;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[6].o));
	jint temp0 = (jint)((func_mindustry_world_Block_isStatic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isStatic_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_16;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[6].o));
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_itemDrop;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_16:;
	{
	LINE_NUMBER(318);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[6].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemDrop;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[6].o));
	jint temp0 = (jint)((func_mindustry_world_Block_isStatic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isStatic_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_17;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[6].o));
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_itemDrop;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_17:;
	{
	LINE_NUMBER(319);
	sp[0].o = (jobject)((func_mindustry_world_Tile_wallDrop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_wallDrop_R_mindustry_type_Item])(ctx, (frame[6].o));
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_mindustry_world_Tile_wallDrop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_wallDrop_R_mindustry_type_Item])(ctx, (frame[6].o));
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_18:;
	{
	LINE_NUMBER(320);
	if ((frame[7].o) == nullptr) goto label_19;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[6].o));
	jint temp0 = (jint)((func_mindustry_world_Block_isStatic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isStatic_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_19;
	}
	{
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[7].o));
	}
label_19:;
	LINE_NUMBER(321);
	goto label_10;
label_11:;
	{
	LINE_NUMBER(322);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitMapArea = (frame[4].i);
	LINE_NUMBER(324);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_landCloudColor;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_cloudColor = (jref) sp[1].o;
	LINE_NUMBER(325);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_env = ((jint)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_defaultEnv);
	LINE_NUMBER(326);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_planet = (jref) sp[1].o;
	LINE_NUMBER(327);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp += 2;
	if ((frame[2].i) != 0) goto label_24;
	}
	INST_ICONST(1);
	goto label_25;
label_24:;
	INST_ICONST(0);
label_25:;
	{
	sp -= 3;
	((func_mindustry_type_Planet_applyRules_mindustry_game_Rules_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_applyRules_mindustry_game_Rules_boolean])(ctx, sp[0].o, sp[1].o, sp[2].i);
	LINE_NUMBER(328);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_info;
	sp[1].o = (jobject)((func_arc_struct_ObjectSet_toSeq_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_ObjectSet_toSeq_R_arc_struct_Seq])(ctx, (frame[3].o));
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_resources = (jref) sp[1].o;
	LINE_NUMBER(329);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_resources;
	{ /* InvokeDynamic */
		clinit_mindustry_core_World_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_core_World_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_core_World_invoke_arc_func_Func_1);
		sp[1].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_Structs_comparing_arc_func_Func_R_java_util_Comparator(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_core_World_invoke_arc_func_Intf_1(ctx);
		auto proxy = (mindustry_core_World_invoke_arc_func_Intf_1 *) gcAlloc(ctx, &class_mindustry_core_World_invoke_arc_func_Intf_1);
		sp[2].o = (jobject) proxy;
	}
	sp[2].o = (jobject)SM_arc_util_Structs_comparingInt_arc_func_Intf_R_java_util_Comparator(ctx, sp[2].o);
	sp[1].o = (jobject)SM_arc_util_Structs_comps_java_util_Comparator_java_util_Comparator_R_java_util_Comparator(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(331);
	if ((frame[2].i) == 0) goto label_29;
	}
	{
	LINE_NUMBER(332);
	((func_mindustry_type_Sector_saveInfo) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_saveInfo])(ctx, (frame[1].o));
	}
label_29:;
	LINE_NUMBER(334);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_core_World_isInMapArea_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:isInMapArea", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(338);
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp0 = (jint)((func_mindustry_world_Tiles_in_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_in_int_int_R_boolean])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitMapArea) == 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp0 = jfloat(((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitX));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp1 = jfloat(((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitY));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp2 = jfloat(((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitWidth));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp3 = (jint)SM_arc_math_geom_Rect_contains_float_float_float_float_float_float_R_boolean(ctx, temp0, temp1, temp2, (jfloat(((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitHeight))), (jfloat((frame[1].i))), (jfloat((frame[2].i))));
	if (temp3 == 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_core_World_filterContext_mindustry_maps_Map_R_mindustry_core_World$Context(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:filterContext", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(342);
	clinit_mindustry_core_World$FilterContext(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_World$FilterContext);
	init_mindustry_core_World$FilterContext_mindustry_core_World_mindustry_maps_Map(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_World_loadMap_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:loadMap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(346);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_game_Rules(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Rules);
	init_mindustry_game_Rules(ctx, sp[2].o);
	((func_mindustry_core_World_loadMap_mindustry_maps_Map_mindustry_game_Rules) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_loadMap_mindustry_maps_Map_mindustry_game_Rules])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(347);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_World_loadMap_mindustry_maps_Map_mindustry_game_Rules(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:loadMap", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(351);
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_customMapLoaders;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_0;
	}
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_customMapLoaders;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (checkCast(ctx, &class_java_lang_Runnable, sp[0].o))))(ctx, (checkCast(ctx, &class_java_lang_Runnable, sp[0].o)));
	LINE_NUMBER(353);
	popStackFrame(ctx);
	return;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(357);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[1].o)))->F_file;
	clinit_mindustry_core_World$FilterContext(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_core_World$FilterContext);
	init_mindustry_core_World$FilterContext_mindustry_core_World_mindustry_maps_Map(ctx, sp[1].o, (frame[0].o), (frame[1].o));
	SM_mindustry_io_SaveIO_load_arc_files_Fi_mindustry_world_WorldContext(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(367);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(358);
	frame[3].o = sp[0].o;
	LINE_NUMBER(359);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[3].o));
	LINE_NUMBER(360);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_10;
	}
	{
	LINE_NUMBER(361);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@map.invalid"_j))));
	LINE_NUMBER(362);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_core_World_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_core_World_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_core_World_invoke_java_lang_Runnable_2);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(363);
	((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_invalidMap = (jint(1));
	}
label_10:;
	{
	LINE_NUMBER(365);
	((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_generating = (jint(0));
	LINE_NUMBER(366);
	popStackFrame(ctx);
	return;
	}
label_7:;
	{
	LINE_NUMBER(369);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_map = (jref) (frame[1].o);
	LINE_NUMBER(371);
	((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_invalidMap = (jint(0));
	LINE_NUMBER(373);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_17;
	}
	{
	LINE_NUMBER(374);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Teams_cores_mindustry_game_Team_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_cores_mindustry_game_Team_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_19;
	}
	{
	if (((jint)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_pvp) != 0) goto label_19;
	}
	{
	LINE_NUMBER(375);
	((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_invalidMap = (jint(1));
	LINE_NUMBER(376);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"map.nospawn"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_defaultTeam;
	sp[4].o = (jobject)((func_mindustry_game_Team_coloredName_R_java_lang_String) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_game_Team_coloredName_R_java_lang_String])(ctx, sp[4].o);
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, sp[1].o);
	goto label_22;
	}
label_19:;
	{
	LINE_NUMBER(377);
	if (((jint)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_pvp) == 0) goto label_23;
	}
	{
	LINE_NUMBER(378);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Teams_getActive_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_getActive_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_core_World_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_core_World_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_core_World_invoke_arc_func_Boolf_2);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_count_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_count_arc_func_Boolf_R_int])(ctx, sp[0].o, sp[1].o);
	if (temp0 >= (jint(2))) goto label_22;
	}
	{
	LINE_NUMBER(379);
	((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_invalidMap = (jint(1));
	LINE_NUMBER(380);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@map.nospawn.pvp"_j))));
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(382);
	if (((jint)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_attackMode) == 0) goto label_22;
	}
	{
	LINE_NUMBER(383);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	sp[1].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_noCores_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_noCores_R_boolean])(ctx, sp[1].o);
	((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_invalidMap = temp0;
	LINE_NUMBER(384);
	if (((jint)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_invalidMap) == 0) goto label_22;
	}
	{
	LINE_NUMBER(385);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"map.nospawn.attack"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_waveTeam;
	sp[4].o = (jobject)((func_mindustry_game_Team_coloredName_R_java_lang_String) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_game_Team_coloredName_R_java_lang_String])(ctx, sp[4].o);
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, sp[1].o);
	goto label_22;
	}
label_17:;
	{
	LINE_NUMBER(389);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_teams;
	sp[1].o = (jobject)((func_mindustry_game_Teams_getActive_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Teams_getActive_R_arc_struct_Seq])(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_core_World_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_core_World_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_core_World_invoke_arc_func_Boolf_3);
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[1].o, sp[2].o);
	sp += 1;
	if (temp0 != 0) goto label_30;
	}
	INST_ICONST(1);
	goto label_31;
label_30:;
	INST_ICONST(0);
label_31:;
	{
	sp -= 2;
	((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_invalidMap = sp[1].i;
	LINE_NUMBER(391);
	if (((jint)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_invalidMap) == 0) goto label_22;
	}
	{
	LINE_NUMBER(392);
	clinit_mindustry_maps_MapException(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_maps_MapException);
	init_mindustry_maps_MapException_mindustry_maps_Map_java_lang_String(ctx, sp[0].o, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Map has no cores!"_j))));
	throwException(ctx, sp[0].o);	}
label_22:;
	{
	LINE_NUMBER(396);
	if (((jint)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_invalidMap) == 0) goto label_34;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_core_World_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_core_World_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_core_World_invoke_java_lang_Runnable_3);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_34:;
	LINE_NUMBER(397);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_World_addDarkness_mindustry_world_Tiles(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:addDarkness", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(400);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[1].o)))->F_width) * ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[1].o)))->F_height)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(401);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[1].o)))->F_width) * ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[1].o)))->F_height)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(403);
	frame[4].i = (jint(4));
	LINE_NUMBER(405);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	if ((frame[5].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(406);
	sp[0].o = (jobject)((func_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile])(ctx, (frame[1].o), (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(407);
	jint temp0 = (jint)((func_mindustry_world_Tile_isDarkened_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_isDarkened_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(408);
	ARRAY_ACCESS(jbyte, (frame[2].o), (frame[5].i)) = (frame[4].i);
	}
label_8:;
	{
	LINE_NUMBER(405);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(412);
	frame[5].i = (jint(0));
	}
label_10:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_11;
	}
	{
	LINE_NUMBER(413);
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(414);
	frame[8].i = ((((jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_y) * ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[1].o)))->F_width)) + ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_x));
	LINE_NUMBER(415);
	frame[9].i = (jint(0));
	LINE_NUMBER(416);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[10].o = sp[0].o;
	frame[11].i = (((jarray) nullCheck(ctx, (frame[10].o)))->length);
	frame[12].i = (jint(0));
	}
label_18:;
	{
	if ((frame[12].i) >= (frame[11].i)) goto label_19;
	}
	{
	frame[13].o = ((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (frame[12].i)));
	LINE_NUMBER(417);
	frame[14].i = (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[13].o)))->F_x));
	frame[15].i = (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[7].o)))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[13].o)))->F_y));
	LINE_NUMBER(418);
	frame[16].i = (((frame[15].i) * ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[1].o)))->F_width)) + (frame[14].i));
	LINE_NUMBER(419);
	jint temp0 = (jint)((func_mindustry_world_Tiles_in_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tiles_in_int_int_R_boolean])(ctx, (frame[1].o), (frame[14].i), (frame[15].i));
	if (temp0 == 0) goto label_24;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[16].i))) >= ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[8].i)))) goto label_24;
	}
	{
	LINE_NUMBER(420);
	frame[9].i = (jint(1));
	LINE_NUMBER(421);
	goto label_19;
	}
label_24:;
	{
	LINE_NUMBER(416);
	INST_IINC(12, 1);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(424);
	sp[0].o = frame[3].o;
	jint temp0 = frame[8].i;
	jint temp1 = jint(0);
	jint temp2 = (jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[8].i));
	jint temp3 = (jint)SM_arc_math_Mathf_num_boolean_R_int(ctx, (frame[9].i));
	jint temp4 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp1, (temp2 - temp3));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte(temp4));
	LINE_NUMBER(425);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(427);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[3].o), (jint(0)), (frame[2].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[3].o)))->length));
	LINE_NUMBER(412);
	INST_IINC(5, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(430);
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	}
label_29:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_30;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(431);
	frame[7].i = ((((jint)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_y) * ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[1].o)))->F_width)) + ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_x));
	LINE_NUMBER(433);
	jint temp0 = (jint)((func_mindustry_world_Tile_isDarkened_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_isDarkened_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_33;
	}
	{
	LINE_NUMBER(434);
	((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_data = ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[7].i)));
	}
label_33:;
	{
	LINE_NUMBER(437);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[7].i))) != (jint(4))) goto label_35;
	}
	{
	LINE_NUMBER(438);
	frame[8].i = (jint(1));
	LINE_NUMBER(439);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[9].o = sp[0].o;
	frame[10].i = (((jarray) nullCheck(ctx, (frame[9].o)))->length);
	frame[11].i = (jint(0));
	}
label_38:;
	{
	if ((frame[11].i) >= (frame[10].i)) goto label_39;
	}
	{
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (frame[11].i)));
	LINE_NUMBER(440);
	frame[13].i = (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[12].o)))->F_x) + ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_x));
	frame[14].i = (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[12].o)))->F_y) + ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_y));
	LINE_NUMBER(441);
	frame[15].i = (((frame[14].i) * ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[1].o)))->F_width)) + (frame[13].i));
	LINE_NUMBER(442);
	jint temp0 = (jint)((func_mindustry_world_Tiles_in_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tiles_in_int_int_R_boolean])(ctx, (frame[1].o), (frame[13].i), (frame[14].i));
	if (temp0 == 0) goto label_44;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_isDarkened_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_isDarkened_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_45;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[15].i))) == (jint(4))) goto label_44;
	}
label_45:;
	{
	LINE_NUMBER(443);
	frame[8].i = (jint(0));
	LINE_NUMBER(444);
	goto label_39;
	}
label_44:;
	{
	LINE_NUMBER(439);
	INST_IINC(11, 1);
	goto label_38;
	}
label_39:;
	{
	LINE_NUMBER(448);
	if ((frame[8].i) == 0) goto label_35;
	}
	{
	((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_data = (jint(5));
	}
label_35:;
	LINE_NUMBER(450);
	goto label_29;
label_30:;
	LINE_NUMBER(451);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbyte M_mindustry_core_World_getWallDarkness_mindustry_world_Tile_R_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:getWallDarkness", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(454);
	jint temp0 = (jint)((func_mindustry_world_Tile_isDarkened_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_isDarkened_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(455);
	frame[2].i = (jint(5));
	LINE_NUMBER(456);
	frame[3].i = (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x) - (jint(4)));
	}
label_4:;
	{
	if ((frame[3].i) > (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x) + (jint(4)))) goto label_5;
	}
	{
	LINE_NUMBER(457);
	frame[4].i = (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y) - (jint(4)));
	}
label_7:;
	{
	if ((frame[4].i) > (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y) + (jint(4)))) goto label_8;
	}
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp0 = (jint)((func_mindustry_world_Tiles_in_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_in_int_int_R_boolean])(ctx, sp[0].o, (frame[3].i), (frame[4].i));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_mindustry_core_World_rawTile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_World_rawTile_int_int_R_mindustry_world_Tile])(ctx, (frame[0].o), (frame[3].i), (frame[4].i));
	jint temp0 = (jint)((func_mindustry_world_Tile_isDarkened_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_isDarkened_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(459);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[3].i) - ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x)));
	jint temp2 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[4].i) - ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y)));
	jint temp3 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (temp1 + temp2));
	frame[2].i = temp3;
	}
label_10:;
	{
	LINE_NUMBER(457);
	INST_IINC(4, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(456);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(464);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((frame[2].i) - (jint(1))), (jint(0)));
	popStackFrame(ctx);
	return (jbyte(temp0));
	}
label_1:;
	{
	LINE_NUMBER(466);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_core_World_checkMapArea_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:checkMapArea", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(470);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK(sp[0].o))->F_present;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_game_Teams$TeamData, sp[0].o));
	LINE_NUMBER(471);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[6].o)))->F_buildings;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(473);
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_enabled) != 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_autoResetEnabled) == 0) goto label_7;
	}
	{
	jfloat temp0 = jfloat((frame[1].i));
	jfloat temp1 = jfloat((frame[2].i));
	jfloat temp2 = jfloat((frame[3].i));
	jfloat temp3 = jfloat((frame[4].i));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_tile;
	jfloat temp4 = jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_tile;
	jint temp5 = (jint)SM_arc_math_geom_Rect_contains_float_float_float_float_float_float_R_boolean(ctx, temp0, temp1, temp2, temp3, temp4, (jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y))));
	if (temp5 != 0) goto label_7;
	}
	{
	LINE_NUMBER(474);
	((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_enabled = (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(478);
	((func_mindustry_gen_Building_checkAllowUpdate) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_gen_Building_checkAllowUpdate])(ctx, (frame[8].o));
	LINE_NUMBER(479);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(480);
	goto label_1;
label_2:;
	LINE_NUMBER(481);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_core_World_getDarkness_int_int_R_float(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:getDarkness", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(485);
	frame[3].f = (jfloat(0));
	LINE_NUMBER(487);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_borderDarkness) == 0) goto label_2;
	}
	{
	LINE_NUMBER(488);
	frame[4].i = (jint(2));
	LINE_NUMBER(491);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitMapArea) != 0) goto label_5;
	}
	{
	LINE_NUMBER(492);
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jint temp2 = frame[1].i;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp3 = -(temp2 - (((jint)((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_width) - (jint(1))));
	jint temp4 = frame[2].i;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp5 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp3, (-(temp4 - (((jint)((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_height) - (jint(1))))));
	jint temp6 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp1, temp5);
	jint temp7 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp6);
	frame[5].i = temp7;
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(494);
	jint temp0 = frame[1].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp1 = temp0 - ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitX);
	jint temp2 = frame[2].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp3 = temp2 - ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitY);
	jint temp4 = frame[1].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp5 = (jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitX;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp6 = -(temp4 - ((temp5 + ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitWidth)) - (jint(1))));
	jint temp7 = frame[2].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp8 = (jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitY;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp9 = -(temp7 - ((temp8 + ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitHeight)) - (jint(1))));
	LINE_NUMBER(497);
	jint temp10 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp6, temp9);
	LINE_NUMBER(496);
	jint temp11 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp3, temp10);
	LINE_NUMBER(495);
	jint temp12 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp1, temp11);
	frame[5].i = temp12;
	}
label_8:;
	{
	LINE_NUMBER(500);
	if ((frame[5].i) > (frame[4].i)) goto label_2;
	}
	{
	LINE_NUMBER(501);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat(((frame[4].i) - (frame[5].i)))) * ((jfloat(4.0f)) / (jfloat((frame[4].i))))), (frame[3].f));
	frame[3].f = temp0;
	}
label_2:;
	{
	LINE_NUMBER(505);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_hasSector_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_hasSector_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_preset;
	if (sp[0].o != nullptr) goto label_13;
	}
	{
	LINE_NUMBER(506);
	frame[4].i = (jint(5));
	LINE_NUMBER(508);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_rect;
	frame[5].f = (((jfloat)((mindustry_type_Sector$SectorRect *) NULL_CHECK(sp[0].o))->F_rotation) + (jfloat(90.0f)));
	LINE_NUMBER(509);
	jfloat temp0 = jfloat((frame[1].i));
	jfloat temp1 = jfloat((frame[2].i));
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_tiles;
	jfloat temp2 = jfloat((((jint)((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_width) / (jint(2))));
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_tiles;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_angle_float_float_float_float_R_float(ctx, temp0, temp1, temp2, (jfloat((((jint)((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_height) / (jint(2))))));
	frame[6].f = (temp3 + (frame[5].f));
	LINE_NUMBER(511);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_corners;
	frame[7].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(512);
	frame[8].f = ((jfloat(360.0f)) / (jfloat((frame[7].i))));
	LINE_NUMBER(514);
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_round_float_float_R_float(ctx, (frame[6].f), (frame[8].f));
	frame[9].f = temp4;
	LINE_NUMBER(515);
	frame[10].f = ((frame[9].f) + (frame[8].f));
	LINE_NUMBER(517);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	jint temp5 = (jint)((func_mindustry_type_Sector_getSize_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_getSize_R_int])(ctx, sp[0].o);
	frame[11].f = ((jfloat(temp5)) / (jfloat(2)));
	LINE_NUMBER(518);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[9].f), (frame[11].f));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v2;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[10].f), (frame[11].f));
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v3;
	jint temp6 = frame[1].i;
	sp[3].o = (jobject)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_tiles;
	jfloat temp7 = jfloat((temp6 - (((jint)((mindustry_world_Tiles *) NULL_CHECK(sp[3].o))->F_width) / (jint(2)))));
	jint temp8 = frame[2].i;
	sp[3].o = (jobject)((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[2].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[2].o, temp7, (jfloat((temp8 - (((jint)((mindustry_world_Tiles *) NULL_CHECK(sp[3].o))->F_height) / (jint(2)))))));
	sp[2].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[2].o, (frame[5].f));
	jfloat temp9 = (jfloat)SM_arc_math_geom_Intersector_distanceLinePoint_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_float(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[12].f = ((temp9 / (clinit_arc_math_Mathf(ctx), (jfloat)SF_arc_math_Mathf_sqrt3)) - (jfloat(1)));
	LINE_NUMBER(521);
	jfloat temp10 = frame[12].f;
	jfloat temp11 = (jfloat)SM_arc_util_noise_Noise_noise_float_float_float_float_R_float(ctx, (jfloat((frame[1].i))), (jfloat((frame[2].i))), (jfloat(11.0f)), (jfloat(7.0f)));
	jfloat temp12 = (jfloat)SM_arc_util_noise_Noise_noise_float_float_float_float_R_float(ctx, (jfloat((frame[1].i))), (jfloat((frame[2].i))), (jfloat(22.0f)), (jfloat(15.0f)));
	frame[12].f = (temp10 + (temp11 + temp12));
	LINE_NUMBER(523);
	frame[13].i = (jint(((frame[12].f) - ((frame[11].f) - (jfloat((frame[4].i)))))));
	LINE_NUMBER(524);
	if ((frame[13].i) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(525);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat((frame[13].i))), (frame[3].f));
	frame[3].f = temp0;
	}
label_13:;
	{
	LINE_NUMBER(529);
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(530);
	if ((frame[4].o) == nullptr) goto label_28;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_isDarkened_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_isDarkened_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_28;
	}
	{
	LINE_NUMBER(531);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[3].f), (jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_data))));
	frame[3].f = temp0;
	}
label_28:;
	{
	LINE_NUMBER(534);
	popStackFrame(ctx);
	return (frame[3].f);
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_World_raycastEachWorld_float_float_float_float_arc_math_geom_Geometry$Raycaster(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:raycastEachWorld", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_World(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(538);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (frame[0].f));
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (frame[1].f));
	jint temp2 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (frame[2].f));
	jint temp3 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (frame[3].f));
	SM_mindustry_core_World_raycastEach_int_int_int_int_arc_math_geom_Geometry$Raycaster(ctx, temp0, temp1, temp2, temp3, (frame[4].o));
	LINE_NUMBER(539);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_World_raycastEach_int_int_int_int_arc_math_geom_Geometry$Raycaster(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4) {
	jtype frame[16];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:raycastEach", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_World(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(542);
	frame[5].i = (frame[0].i);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[2].i) - (frame[5].i)));
	frame[6].i = temp0;
	if ((frame[5].i) >= (frame[2].i)) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(-1);
label_4:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(543);
	frame[8].i = (frame[1].i);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[3].i) - (frame[8].i)));
	frame[9].i = temp0;
	if ((frame[8].i) >= (frame[3].i)) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(-1);
label_9:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(544);
	frame[12].i = ((frame[6].i) - (frame[9].i));
	}
label_11:;
	{
	LINE_NUMBER(547);
	jint temp0 = (jint)((func_arc_math_geom_Geometry$Raycaster_accept_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_arc_math_geom_Geometry$Raycaster, INDEX_arc_math_geom_Geometry$Raycaster_accept_int_int_R_boolean, (frame[4].o)))(ctx, (frame[4].o), (frame[5].i), (frame[8].i));
	if (temp0 == 0) goto label_12;
	}
	goto label_13;
label_12:;
	{
	LINE_NUMBER(548);
	if ((frame[5].i) != (frame[2].i)) goto label_14;
	}
	{
	if ((frame[8].i) != (frame[3].i)) goto label_14;
	}
	goto label_13;
label_14:;
	{
	LINE_NUMBER(550);
	frame[11].i = ((jint(2)) * (frame[12].i));
	LINE_NUMBER(551);
	if ((frame[11].i) <= (-(frame[9].i))) goto label_16;
	}
	{
	LINE_NUMBER(552);
	frame[12].i = ((frame[12].i) - (frame[9].i));
	LINE_NUMBER(553);
	frame[5].i = ((frame[5].i) + (frame[7].i));
	}
label_16:;
	{
	LINE_NUMBER(556);
	if ((frame[11].i) >= (frame[6].i)) goto label_11;
	}
	{
	LINE_NUMBER(557);
	frame[12].i = ((frame[12].i) + (frame[6].i));
	LINE_NUMBER(558);
	frame[8].i = ((frame[8].i) + (frame[10].i));
	goto label_11;
	}
label_13:;
	LINE_NUMBER(561);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_core_World_raycastEachNoDiagonalWorld_float_float_float_float_arc_math_geom_Geometry$Raycaster(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:raycastEachNoDiagonalWorld", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_World(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(564);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (frame[0].f));
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (frame[1].f));
	jint temp2 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (frame[2].f));
	jint temp3 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (frame[3].f));
	SM_mindustry_core_World_raycastEachNoDiagonal_int_int_int_int_arc_math_geom_Geometry$Raycaster(ctx, temp0, temp1, temp2, temp3, (frame[4].o));
	LINE_NUMBER(565);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_World_raycastEachNoDiagonal_int_int_int_int_arc_math_geom_Geometry$Raycaster(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:raycastEachNoDiagonal", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_World(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(568);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[2].i) - (frame[0].i)));
	frame[5].i = temp0;
	LINE_NUMBER(569);
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[3].i) - (frame[1].i)));
	frame[6].i = (-temp1);
	LINE_NUMBER(570);
	if ((frame[0].i) >= (frame[2].i)) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(-1);
label_4:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(571);
	if ((frame[1].i) >= (frame[3].i)) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(-1);
label_7:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(572);
	frame[9].i = ((frame[5].i) + (frame[6].i));
	}
label_9:;
	{
	LINE_NUMBER(575);
	jint temp0 = (jint)((func_arc_math_geom_Geometry$Raycaster_accept_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_arc_math_geom_Geometry$Raycaster, INDEX_arc_math_geom_Geometry$Raycaster_accept_int_int_R_boolean, (frame[4].o)))(ctx, (frame[4].o), (frame[0].i), (frame[1].i));
	if (temp0 != 0) goto label_10;
	}
	{
	if ((frame[0].i) != (frame[2].i)) goto label_11;
	}
	{
	if ((frame[1].i) != (frame[3].i)) goto label_11;
	}
	goto label_10;
label_11:;
	{
	LINE_NUMBER(577);
	if ((((jint(2)) * (frame[9].i)) - (frame[6].i)) <= ((frame[5].i) - ((jint(2)) * (frame[9].i)))) goto label_12;
	}
	{
	LINE_NUMBER(578);
	frame[9].i = ((frame[9].i) + (frame[6].i));
	LINE_NUMBER(579);
	frame[0].i = ((frame[0].i) + (frame[7].i));
	goto label_9;
	}
label_12:;
	{
	LINE_NUMBER(581);
	frame[9].i = ((frame[9].i) + (frame[5].i));
	LINE_NUMBER(582);
	frame[1].i = ((frame[1].i) + (frame[8].i));
	goto label_9;
	}
label_10:;
	LINE_NUMBER(585);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_core_World_raycast_int_int_int_int_arc_math_geom_Geometry$Raycaster_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4) {
	jtype frame[16];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:raycast", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_World(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(588);
	frame[5].i = (frame[0].i);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[2].i) - (frame[5].i)));
	frame[6].i = temp0;
	if ((frame[5].i) >= (frame[2].i)) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(-1);
label_4:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(589);
	frame[8].i = (frame[1].i);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[3].i) - (frame[8].i)));
	frame[9].i = temp0;
	if ((frame[8].i) >= (frame[3].i)) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(-1);
label_9:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(590);
	frame[12].i = ((frame[6].i) - (frame[9].i));
	}
label_11:;
	{
	LINE_NUMBER(593);
	jint temp0 = (jint)((func_arc_math_geom_Geometry$Raycaster_accept_int_int_R_boolean) resolveInterfaceMethod(ctx, &class_arc_math_geom_Geometry$Raycaster, INDEX_arc_math_geom_Geometry$Raycaster_accept_int_int_R_boolean, (frame[4].o)))(ctx, (frame[4].o), (frame[5].i), (frame[8].i));
	if (temp0 == 0) goto label_12;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_12:;
	{
	LINE_NUMBER(594);
	if ((frame[5].i) != (frame[2].i)) goto label_13;
	}
	{
	if ((frame[8].i) != (frame[3].i)) goto label_13;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(596);
	frame[11].i = ((jint(2)) * (frame[12].i));
	LINE_NUMBER(597);
	if ((frame[11].i) <= (-(frame[9].i))) goto label_15;
	}
	{
	LINE_NUMBER(598);
	frame[12].i = ((frame[12].i) - (frame[9].i));
	LINE_NUMBER(599);
	frame[5].i = ((frame[5].i) + (frame[7].i));
	}
label_15:;
	{
	LINE_NUMBER(602);
	if ((frame[11].i) >= (frame[6].i)) goto label_11;
	}
	{
	LINE_NUMBER(603);
	frame[12].i = ((frame[12].i) + (frame[6].i));
	LINE_NUMBER(604);
	frame[8].i = ((frame[8].i) + (frame[10].i));
	goto label_11;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_World_makeSectorContext_mindustry_type_Sector_R_mindustry_world_WorldContext(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:makeSectorContext", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(610);
	clinit_mindustry_core_World$Context(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_core_World$Context);
	init_mindustry_core_World$Context_mindustry_core_World_mindustry_type_Sector(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_World_lambda$loadMap$1(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:lambda$loadMap$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_World(ctx);
	{
	LINE_NUMBER(396);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_menu;
	((func_mindustry_core_GameState_set_mindustry_core_GameState$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_set_mindustry_core_GameState$State])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_World_lambda$loadMap$0(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:lambda$loadMap$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_World(ctx);
	{
	LINE_NUMBER(362);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	clinit_mindustry_core_GameState$State(ctx);
	sp[1].o = (jobject)SF_mindustry_core_GameState$State_menu;
	((func_mindustry_core_GameState_set_mindustry_core_GameState$State) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_set_mindustry_core_GameState$State])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_core_World_lambda$setSectorRules$0_mindustry_ctype_UnlockableContent_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:lambda$setSectorRules$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_World(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(329);
	popStackFrame(ctx);
	return ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[0].o)))->F_id);
	}

	popStackFrame(ctx);
}

void SM_mindustry_core_World_lambda$loadSector$0_mindustry_type_Sector_mindustry_world_WorldParams_mindustry_world_Tiles(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:lambda$loadSector$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_World(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_generator;
	((func_mindustry_maps_generators_FileMapGenerator_generate_mindustry_world_Tiles_mindustry_world_WorldParams) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_FileMapGenerator_generate_mindustry_world_Tiles_mindustry_world_WorldParams])(ctx, sp[0].o, (frame[2].o), (frame[1].o));
	LINE_NUMBER(272);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_preset;
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_rules;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_generator;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(274);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_generator;
	((func_mindustry_maps_generators_PlanetGenerator_generate_mindustry_world_Tiles_mindustry_type_Sector_mindustry_world_WorldParams) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_PlanetGenerator_generate_mindustry_world_Tiles_mindustry_type_Sector_mindustry_world_WorldParams])(ctx, sp[0].o, (frame[2].o), (frame[0].o), (frame[1].o));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(276);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	jint temp0 = (jint)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_id;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[0].o)))->F_planet;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[1].o))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Sector \u0001 on planet \u0001 has no generator or preset defined. Provide a planet generator or preset map."_j.string, 2, boxInteger(ctx, temp0), sp[1].o);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(279);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector = (jref) (frame[0].o);
	LINE_NUMBER(280);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_World_lambda$new$2_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:lambda$new$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(45);
	((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_tileChanges = (jint(-1));
	LINE_NUMBER(46);
	((mindustry_core_World *) NULL_CHECK((frame[0].o)))->F_floorChanges = (jint(-1));
	LINE_NUMBER(49);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_build;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(50);
	((func_mindustry_gen_Building_checkAllowUpdate) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Building_checkAllowUpdate])(ctx, (frame[3].o));
	LINE_NUMBER(51);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(52);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_core_World_lambda$new$1_mindustry_game_EventType$TileFloorChangeEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:lambda$new$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_floorChanges = (((jint)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_floorChanges) + (jint(1)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_core_World_lambda$new$0_mindustry_game_EventType$TileChangeEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/World:lambda$new$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tileChanges = (((jint)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tileChanges) + (jint(1)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_core_World;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	{ // Method tile
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[13]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method tile
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[14]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method tileBuilding
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[15]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method build
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[16]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method build
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[17]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method tileWorld
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[19]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method buildWorld
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[20]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method buildWorld
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[21]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_core_World[] {
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
	(void *) M_mindustry_core_World_addMapLoader_mindustry_maps_Map_java_lang_Runnable,
	(void *) M_mindustry_core_World_isInvalidMap_R_boolean,
	(void *) M_mindustry_core_World_solid_int_int_R_boolean,
	(void *) M_mindustry_core_World_passable_int_int_R_boolean,
	(void *) M_mindustry_core_World_wallSolid_int_int_R_boolean,
	(void *) M_mindustry_core_World_wallSolidFull_int_int_R_boolean,
	(void *) M_mindustry_core_World_isAccessible_int_int_R_boolean,
	(void *) M_mindustry_core_World_width_R_int,
	(void *) M_mindustry_core_World_height_R_int,
	(void *) M_mindustry_core_World_unitWidth_R_int,
	(void *) M_mindustry_core_World_unitHeight_R_int,
	(void *) M_mindustry_core_World_floor_int_int_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_core_World_floorWorld_float_float_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_core_World_tile_int_R_mindustry_world_Tile,
	(void *) M_mindustry_core_World_tile_int_int_R_mindustry_world_Tile,
	(void *) M_mindustry_core_World_tileBuilding_int_int_R_mindustry_world_Tile,
	(void *) M_mindustry_core_World_build_int_int_R_mindustry_gen_Building,
	(void *) M_mindustry_core_World_build_int_R_mindustry_gen_Building,
	(void *) M_mindustry_core_World_rawTile_int_int_R_mindustry_world_Tile,
	(void *) M_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile,
	(void *) M_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building,
	(void *) M_mindustry_core_World_buildWorld_arc_math_geom_Position_R_mindustry_gen_Building,
	(void *) M_mindustry_core_World_packArray_int_int_R_int,
	(void *) M_mindustry_core_World_clearBuildings,
	(void *) M_mindustry_core_World_resize_int_int_R_mindustry_world_Tiles,
	(void *) M_mindustry_core_World_beginMapLoad,
	(void *) M_mindustry_core_World_endMapLoad,
	(void *) M_mindustry_core_World_getQuadBounds_arc_math_geom_Rect_R_arc_math_geom_Rect,
	(void *) M_mindustry_core_World_setGenerating_boolean,
	(void *) M_mindustry_core_World_isGenerating_R_boolean,
	(void *) M_mindustry_core_World_loadGenerator_int_int_arc_func_Cons,
	(void *) M_mindustry_core_World_loadSector_mindustry_type_Sector,
	(void *) M_mindustry_core_World_loadSector_mindustry_type_Sector_mindustry_world_WorldParams,
	(void *) M_mindustry_core_World_setSectorRules_mindustry_type_Sector_boolean,
	(void *) M_mindustry_core_World_isInMapArea_int_int_R_boolean,
	(void *) M_mindustry_core_World_filterContext_mindustry_maps_Map_R_mindustry_core_World$Context,
	(void *) M_mindustry_core_World_loadMap_mindustry_maps_Map,
	(void *) M_mindustry_core_World_loadMap_mindustry_maps_Map_mindustry_game_Rules,
	(void *) M_mindustry_core_World_addDarkness_mindustry_world_Tiles,
	(void *) M_mindustry_core_World_getWallDarkness_mindustry_world_Tile_R_byte,
	(void *) M_mindustry_core_World_checkMapArea_int_int_int_int,
	(void *) M_mindustry_core_World_getDarkness_int_int_R_float,
	(void *) M_mindustry_core_World_makeSectorContext_mindustry_type_Sector_R_mindustry_world_WorldContext,
	(void *) M_mindustry_core_World_lambda$new$2_mindustry_game_EventType$WorldLoadEvent,
	(void *) M_mindustry_core_World_lambda$new$1_mindustry_game_EventType$TileFloorChangeEvent,
	(void *) M_mindustry_core_World_lambda$new$0_mindustry_game_EventType$TileChangeEvent,
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
	{ "addMapLoader", "(Lmindustry/maps/Map;Ljava/lang/Runnable;)V" },
	{ "isInvalidMap", "()Z" },
	{ "solid", "(II)Z" },
	{ "passable", "(II)Z" },
	{ "wallSolid", "(II)Z" },
	{ "wallSolidFull", "(II)Z" },
	{ "isAccessible", "(II)Z" },
	{ "width", "()I" },
	{ "height", "()I" },
	{ "unitWidth", "()I" },
	{ "unitHeight", "()I" },
	{ "floor", "(II)Lmindustry/world/blocks/environment/Floor;" },
	{ "floorWorld", "(FF)Lmindustry/world/blocks/environment/Floor;" },
	{ "tile", "(I)Lmindustry/world/Tile;" },
	{ "tile", "(II)Lmindustry/world/Tile;" },
	{ "tileBuilding", "(II)Lmindustry/world/Tile;" },
	{ "build", "(II)Lmindustry/gen/Building;" },
	{ "build", "(I)Lmindustry/gen/Building;" },
	{ "rawTile", "(II)Lmindustry/world/Tile;" },
	{ "tileWorld", "(FF)Lmindustry/world/Tile;" },
	{ "buildWorld", "(FF)Lmindustry/gen/Building;" },
	{ "buildWorld", "(Larc/math/geom/Position;)Lmindustry/gen/Building;" },
	{ "packArray", "(II)I" },
	{ "clearBuildings", "()V" },
	{ "resize", "(II)Lmindustry/world/Tiles;" },
	{ "beginMapLoad", "()V" },
	{ "endMapLoad", "()V" },
	{ "getQuadBounds", "(Larc/math/geom/Rect;)Larc/math/geom/Rect;" },
	{ "setGenerating", "(Z)V" },
	{ "isGenerating", "()Z" },
	{ "loadGenerator", "(IILarc/func/Cons;)V" },
	{ "loadSector", "(Lmindustry/type/Sector;)V" },
	{ "loadSector", "(Lmindustry/type/Sector;Lmindustry/world/WorldParams;)V" },
	{ "setSectorRules", "(Lmindustry/type/Sector;Z)V" },
	{ "isInMapArea", "(II)Z" },
	{ "filterContext", "(Lmindustry/maps/Map;)Lmindustry/core/World$Context;" },
	{ "loadMap", "(Lmindustry/maps/Map;)V" },
	{ "loadMap", "(Lmindustry/maps/Map;Lmindustry/game/Rules;)V" },
	{ "addDarkness", "(Lmindustry/world/Tiles;)V" },
	{ "getWallDarkness", "(Lmindustry/world/Tile;)B" },
	{ "checkMapArea", "(IIII)V" },
	{ "getDarkness", "(II)F" },
	{ "makeSectorContext", "(Lmindustry/type/Sector;)Lmindustry/world/WorldContext;" },
	{ "lambda$new$2", "(Lmindustry/game/EventType$WorldLoadEvent;)V" },
	{ "lambda$new$1", "(Lmindustry/game/EventType$TileFloorChangeEvent;)V" },
	{ "lambda$new$0", "(Lmindustry/game/EventType$TileChangeEvent;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_core_World$Context,
	&class_mindustry_core_World$FilterContext,
};

static FieldMetadata fields[] {
	{ "context", &class_mindustry_core_World$Context, offsetof(mindustry_core_World, F_context), "Lmindustry/core/World$Context;", 17 },
	{ "tiles", &class_mindustry_world_Tiles, offsetof(mindustry_core_World, F_tiles), "Lmindustry/world/Tiles;", 1 },
	{ "tileChanges", &class_int, offsetof(mindustry_core_World, F_tileChanges), "I", 1 },
	{ "floorChanges", &class_int, offsetof(mindustry_core_World, F_floorChanges), "I", 1 },
	{ "generating", &class_boolean, offsetof(mindustry_core_World, F_generating), "Z", 2 },
	{ "invalidMap", &class_boolean, offsetof(mindustry_core_World, F_invalidMap), "Z", 2 },
	{ "customMapLoaders", &class_arc_struct_ObjectMap, offsetof(mindustry_core_World, F_customMapLoaders), "Larc/struct/ObjectMap;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_core_World, 0, "()V", 1 },
	{ "addMapLoader", (intptr_t) M_mindustry_core_World_addMapLoader_mindustry_maps_Map_java_lang_Runnable, VTABLE_mindustry_core_World_addMapLoader_mindustry_maps_Map_java_lang_Runnable, "(Lmindustry/maps/Map;Ljava/lang/Runnable;)V", 1 },
	{ "isInvalidMap", (intptr_t) M_mindustry_core_World_isInvalidMap_R_boolean, VTABLE_mindustry_core_World_isInvalidMap_R_boolean, "()Z", 1 },
	{ "solid", (intptr_t) M_mindustry_core_World_solid_int_int_R_boolean, VTABLE_mindustry_core_World_solid_int_int_R_boolean, "(II)Z", 1 },
	{ "passable", (intptr_t) M_mindustry_core_World_passable_int_int_R_boolean, VTABLE_mindustry_core_World_passable_int_int_R_boolean, "(II)Z", 1 },
	{ "wallSolid", (intptr_t) M_mindustry_core_World_wallSolid_int_int_R_boolean, VTABLE_mindustry_core_World_wallSolid_int_int_R_boolean, "(II)Z", 1 },
	{ "wallSolidFull", (intptr_t) M_mindustry_core_World_wallSolidFull_int_int_R_boolean, VTABLE_mindustry_core_World_wallSolidFull_int_int_R_boolean, "(II)Z", 1 },
	{ "isAccessible", (intptr_t) M_mindustry_core_World_isAccessible_int_int_R_boolean, VTABLE_mindustry_core_World_isAccessible_int_int_R_boolean, "(II)Z", 1 },
	{ "width", (intptr_t) M_mindustry_core_World_width_R_int, VTABLE_mindustry_core_World_width_R_int, "()I", 1 },
	{ "height", (intptr_t) M_mindustry_core_World_height_R_int, VTABLE_mindustry_core_World_height_R_int, "()I", 1 },
	{ "unitWidth", (intptr_t) M_mindustry_core_World_unitWidth_R_int, VTABLE_mindustry_core_World_unitWidth_R_int, "()I", 1 },
	{ "unitHeight", (intptr_t) M_mindustry_core_World_unitHeight_R_int, VTABLE_mindustry_core_World_unitHeight_R_int, "()I", 1 },
	{ "floor", (intptr_t) M_mindustry_core_World_floor_int_int_R_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_core_World_floor_int_int_R_mindustry_world_blocks_environment_Floor, "(II)Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "floorWorld", (intptr_t) M_mindustry_core_World_floorWorld_float_float_R_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_core_World_floorWorld_float_float_R_mindustry_world_blocks_environment_Floor, "(FF)Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "tile", (intptr_t) M_mindustry_core_World_tile_int_R_mindustry_world_Tile, VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile, "(I)Lmindustry/world/Tile;", 1 },
	{ "tile", (intptr_t) M_mindustry_core_World_tile_int_int_R_mindustry_world_Tile, VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile, "(II)Lmindustry/world/Tile;", 1 },
	{ "tileBuilding", (intptr_t) M_mindustry_core_World_tileBuilding_int_int_R_mindustry_world_Tile, VTABLE_mindustry_core_World_tileBuilding_int_int_R_mindustry_world_Tile, "(II)Lmindustry/world/Tile;", 1 },
	{ "build", (intptr_t) M_mindustry_core_World_build_int_int_R_mindustry_gen_Building, VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building, "(II)Lmindustry/gen/Building;", 1 },
	{ "build", (intptr_t) M_mindustry_core_World_build_int_R_mindustry_gen_Building, VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building, "(I)Lmindustry/gen/Building;", 1 },
	{ "rawTile", (intptr_t) M_mindustry_core_World_rawTile_int_int_R_mindustry_world_Tile, VTABLE_mindustry_core_World_rawTile_int_int_R_mindustry_world_Tile, "(II)Lmindustry/world/Tile;", 1 },
	{ "tileWorld", (intptr_t) M_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile, VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile, "(FF)Lmindustry/world/Tile;", 1 },
	{ "buildWorld", (intptr_t) M_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building, VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building, "(FF)Lmindustry/gen/Building;", 1 },
	{ "buildWorld", (intptr_t) M_mindustry_core_World_buildWorld_arc_math_geom_Position_R_mindustry_gen_Building, VTABLE_mindustry_core_World_buildWorld_arc_math_geom_Position_R_mindustry_gen_Building, "(Larc/math/geom/Position;)Lmindustry/gen/Building;", 1 },
	{ "conv", (intptr_t) SM_mindustry_core_World_conv_float_R_float, 0, "(F)F", 9 },
	{ "unconv", (intptr_t) SM_mindustry_core_World_unconv_float_R_float, 0, "(F)F", 9 },
	{ "toTile", (intptr_t) SM_mindustry_core_World_toTile_float_R_int, 0, "(F)I", 9 },
	{ "packArray", (intptr_t) M_mindustry_core_World_packArray_int_int_R_int, VTABLE_mindustry_core_World_packArray_int_int_R_int, "(II)I", 1 },
	{ "clearBuildings", (intptr_t) M_mindustry_core_World_clearBuildings, VTABLE_mindustry_core_World_clearBuildings, "()V", 1 },
	{ "resize", (intptr_t) M_mindustry_core_World_resize_int_int_R_mindustry_world_Tiles, VTABLE_mindustry_core_World_resize_int_int_R_mindustry_world_Tiles, "(II)Lmindustry/world/Tiles;", 1 },
	{ "beginMapLoad", (intptr_t) M_mindustry_core_World_beginMapLoad, VTABLE_mindustry_core_World_beginMapLoad, "()V", 1 },
	{ "endMapLoad", (intptr_t) M_mindustry_core_World_endMapLoad, VTABLE_mindustry_core_World_endMapLoad, "()V", 1 },
	{ "getQuadBounds", (intptr_t) M_mindustry_core_World_getQuadBounds_arc_math_geom_Rect_R_arc_math_geom_Rect, VTABLE_mindustry_core_World_getQuadBounds_arc_math_geom_Rect_R_arc_math_geom_Rect, "(Larc/math/geom/Rect;)Larc/math/geom/Rect;", 1 },
	{ "setGenerating", (intptr_t) M_mindustry_core_World_setGenerating_boolean, VTABLE_mindustry_core_World_setGenerating_boolean, "(Z)V", 1 },
	{ "isGenerating", (intptr_t) M_mindustry_core_World_isGenerating_R_boolean, VTABLE_mindustry_core_World_isGenerating_R_boolean, "()Z", 1 },
	{ "loadGenerator", (intptr_t) M_mindustry_core_World_loadGenerator_int_int_arc_func_Cons, VTABLE_mindustry_core_World_loadGenerator_int_int_arc_func_Cons, "(IILarc/func/Cons;)V", 1 },
	{ "loadSector", (intptr_t) M_mindustry_core_World_loadSector_mindustry_type_Sector, VTABLE_mindustry_core_World_loadSector_mindustry_type_Sector, "(Lmindustry/type/Sector;)V", 1 },
	{ "loadSector", (intptr_t) M_mindustry_core_World_loadSector_mindustry_type_Sector_mindustry_world_WorldParams, VTABLE_mindustry_core_World_loadSector_mindustry_type_Sector_mindustry_world_WorldParams, "(Lmindustry/type/Sector;Lmindustry/world/WorldParams;)V", 1 },
	{ "setSectorRules", (intptr_t) M_mindustry_core_World_setSectorRules_mindustry_type_Sector_boolean, VTABLE_mindustry_core_World_setSectorRules_mindustry_type_Sector_boolean, "(Lmindustry/type/Sector;Z)V", 2 },
	{ "isInMapArea", (intptr_t) M_mindustry_core_World_isInMapArea_int_int_R_boolean, VTABLE_mindustry_core_World_isInMapArea_int_int_R_boolean, "(II)Z", 1 },
	{ "filterContext", (intptr_t) M_mindustry_core_World_filterContext_mindustry_maps_Map_R_mindustry_core_World$Context, VTABLE_mindustry_core_World_filterContext_mindustry_maps_Map_R_mindustry_core_World$Context, "(Lmindustry/maps/Map;)Lmindustry/core/World$Context;", 1 },
	{ "loadMap", (intptr_t) M_mindustry_core_World_loadMap_mindustry_maps_Map, VTABLE_mindustry_core_World_loadMap_mindustry_maps_Map, "(Lmindustry/maps/Map;)V", 1 },
	{ "loadMap", (intptr_t) M_mindustry_core_World_loadMap_mindustry_maps_Map_mindustry_game_Rules, VTABLE_mindustry_core_World_loadMap_mindustry_maps_Map_mindustry_game_Rules, "(Lmindustry/maps/Map;Lmindustry/game/Rules;)V", 1 },
	{ "addDarkness", (intptr_t) M_mindustry_core_World_addDarkness_mindustry_world_Tiles, VTABLE_mindustry_core_World_addDarkness_mindustry_world_Tiles, "(Lmindustry/world/Tiles;)V", 1 },
	{ "getWallDarkness", (intptr_t) M_mindustry_core_World_getWallDarkness_mindustry_world_Tile_R_byte, VTABLE_mindustry_core_World_getWallDarkness_mindustry_world_Tile_R_byte, "(Lmindustry/world/Tile;)B", 1 },
	{ "checkMapArea", (intptr_t) M_mindustry_core_World_checkMapArea_int_int_int_int, VTABLE_mindustry_core_World_checkMapArea_int_int_int_int, "(IIII)V", 1 },
	{ "getDarkness", (intptr_t) M_mindustry_core_World_getDarkness_int_int_R_float, VTABLE_mindustry_core_World_getDarkness_int_int_R_float, "(II)F", 1 },
	{ "raycastEachWorld", (intptr_t) SM_mindustry_core_World_raycastEachWorld_float_float_float_float_arc_math_geom_Geometry$Raycaster, 0, "(FFFFLarc/math/geom/Geometry$Raycaster;)V", 9 },
	{ "raycastEach", (intptr_t) SM_mindustry_core_World_raycastEach_int_int_int_int_arc_math_geom_Geometry$Raycaster, 0, "(IIIILarc/math/geom/Geometry$Raycaster;)V", 9 },
	{ "raycastEachNoDiagonalWorld", (intptr_t) SM_mindustry_core_World_raycastEachNoDiagonalWorld_float_float_float_float_arc_math_geom_Geometry$Raycaster, 0, "(FFFFLarc/math/geom/Geometry$Raycaster;)V", 9 },
	{ "raycastEachNoDiagonal", (intptr_t) SM_mindustry_core_World_raycastEachNoDiagonal_int_int_int_int_arc_math_geom_Geometry$Raycaster, 0, "(IIIILarc/math/geom/Geometry$Raycaster;)V", 9 },
	{ "raycast", (intptr_t) SM_mindustry_core_World_raycast_int_int_int_int_arc_math_geom_Geometry$Raycaster_R_boolean, 0, "(IIIILarc/math/geom/Geometry$Raycaster;)Z", 9 },
	{ "makeSectorContext", (intptr_t) M_mindustry_core_World_makeSectorContext_mindustry_type_Sector_R_mindustry_world_WorldContext, VTABLE_mindustry_core_World_makeSectorContext_mindustry_type_Sector_R_mindustry_world_WorldContext, "(Lmindustry/type/Sector;)Lmindustry/world/WorldContext;", 1 },
	{ "lambda$loadMap$1", (intptr_t) SM_mindustry_core_World_lambda$loadMap$1, 0, "()V", 4106 },
	{ "lambda$loadMap$0", (intptr_t) SM_mindustry_core_World_lambda$loadMap$0, 0, "()V", 4106 },
	{ "lambda$setSectorRules$0", (intptr_t) SM_mindustry_core_World_lambda$setSectorRules$0_mindustry_ctype_UnlockableContent_R_int, 0, "(Lmindustry/ctype/UnlockableContent;)I", 4106 },
	{ "lambda$loadSector$0", (intptr_t) SM_mindustry_core_World_lambda$loadSector$0_mindustry_type_Sector_mindustry_world_WorldParams_mindustry_world_Tiles, 0, "(Lmindustry/type/Sector;Lmindustry/world/WorldParams;Lmindustry/world/Tiles;)V", 4106 },
	{ "lambda$new$2", (intptr_t) M_mindustry_core_World_lambda$new$2_mindustry_game_EventType$WorldLoadEvent, VTABLE_mindustry_core_World_lambda$new$2_mindustry_game_EventType$WorldLoadEvent, "(Lmindustry/game/EventType$WorldLoadEvent;)V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_core_World_lambda$new$1_mindustry_game_EventType$TileFloorChangeEvent, VTABLE_mindustry_core_World_lambda$new$1_mindustry_game_EventType$TileFloorChangeEvent, "(Lmindustry/game/EventType$TileFloorChangeEvent;)V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_core_World_lambda$new$0_mindustry_game_EventType$TileChangeEvent, VTABLE_mindustry_core_World_lambda$new$0_mindustry_game_EventType$TileChangeEvent, "(Lmindustry/game/EventType$TileChangeEvent;)V", 4098 },
};

Class class_mindustry_core_World{
		.nativeName = (intptr_t) "mindustry/core/World",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_core_World),
		.classVtable = (intptr_t) vtable_mindustry_core_World,
		.staticInitializer = (intptr_t) clinit_mindustry_core_World,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_core_World,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 59,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 57,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_core_World = registerClass(&class_mindustry_core_World);

}
