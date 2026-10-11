#include "mindustry/editor/MapEditor.h"
#include "mindustry/editor/MapEditor_Context.h"
#include "mindustry/editor/DrawOperation.h"
#include "arc/func/Prov.h"
#include "mindustry/world/Block.h"
#include "mindustry/editor/MapEditor_invoke_arc_func_Cons_2.h"
#include "mindustry/game/Rules.h"
#include "arc/math/geom/Point2.h"
#include "arc/files/Fi.h"
#include "mindustry/gen/TileOp.h"
#include "mindustry/editor/OperationStack.h"
#include "java/lang/Runnable.h"
#include "mindustry/world/Tiles.h"
#include "arc/func/Cons.h"
#include "arc/graphics/Pixmap.h"
#include "arc/struct/StringMap.h"
#include "java/lang/String.h"
#include "mindustry/world/WorldContext.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/Tile.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/func/Boolf.h"
#include "mindustry/editor/EditorTile.h"
#include "arc/math/geom/Geometry.h"
#include "mindustry/world/blocks/environment/OverlayFloor.h"
#include "arc/math/Mathf.h"
#include "mindustry/maps/Map.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/editor/MapEditor_invoke_arc_func_Prov_1.h"
#include "mindustry/editor/MapEditor_invoke_arc_func_Boolf_2.h"
#include "mindustry/editor/MapEditor_invoke_arc_func_Boolf_3.h"
#include "mindustry/io/MapIO.h"
#include "mindustry/gen/Building.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "mindustry/editor/EditorRenderer.h"
#include "mindustry/gen/TileOpData.h"
#include "mindustry/editor/MapEditor_invoke_java_lang_Runnable_2.h"
#include "mindustry/editor/MapEditor_invoke_java_lang_Runnable_3.h"
#include "mindustry/editor/MapEditor_invoke_arc_func_Cons_3.h"
#include "mindustry/game/Team.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/core/GameState.h"
#include "mindustry/editor/MapEditor.h"

extern "C" {

jobject SF_mindustry_editor_MapEditor_brushSizes;

void mark_mindustry_editor_MapEditor(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_editor_MapEditor_brushSizes)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_MapEditor_brushSizes)->clazz)->markFunction)((jobject) SF_mindustry_editor_MapEditor_brushSizes, mark, depth + 1);
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
	auto self = (mindustry_editor_MapEditor *) object;
	if (self->F_tags)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tags)->clazz)->markFunction)((jobject) self->F_tags, mark, depth + 1);
	if (self->F_renderer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_renderer)->clazz)->markFunction)((jobject) self->F_renderer, mark, depth + 1);
	if (self->F_context)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_context)->clazz)->markFunction)((jobject) self->F_context, mark, depth + 1);
	if (self->F_stack)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stack)->clazz)->markFunction)((jobject) self->F_stack, mark, depth + 1);
	if (self->F_currentOp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentOp)->clazz)->markFunction)((jobject) self->F_currentOp, mark, depth + 1);
	if (self->F_drawBlock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_drawBlock)->clazz)->markFunction)((jobject) self->F_drawBlock, mark, depth + 1);
	if (self->F_drawTeam)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_drawTeam)->clazz)->markFunction)((jobject) self->F_drawTeam, mark, depth + 1);
}

void init_mindustry_editor_MapEditor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditor(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_arc_struct_StringMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_StringMap);
	init_arc_struct_StringMap(ctx, sp[1].o);
	((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_tags = (jref) sp[1].o;
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_mindustry_editor_EditorRenderer(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_editor_EditorRenderer);
	init_mindustry_editor_EditorRenderer(ctx, sp[1].o);
	((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_renderer = (jref) sp[1].o;
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_mindustry_editor_MapEditor$Context(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_editor_MapEditor$Context);
	init_mindustry_editor_MapEditor$Context_mindustry_editor_MapEditor(ctx, sp[1].o, (frame[0].o));
	((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_context = (jref) sp[1].o;
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_mindustry_editor_OperationStack(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_editor_OperationStack);
	init_mindustry_editor_OperationStack(ctx, sp[1].o);
	((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(31);
	((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_brushSize = (jfloat(1));
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_stone;
	((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_drawBlock = (jref) sp[1].o;
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_sharded;
	((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_drawTeam = (jref) sp[1].o;
	LINE_NUMBER(35);
	((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_showTerrain = (jint(1));
	((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_showFloor = (jint(1));
	((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_showBuildings = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapEditor_isLoading_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:isLoading", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return ((jint)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_loading);
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditor_beginEdit_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:beginEdit", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(42);
	((func_mindustry_editor_MapEditor_reset) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_reset])(ctx, (frame[0].o));
	LINE_NUMBER(44);
	((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_loading = (jint(1));
	LINE_NUMBER(45);
	((func_mindustry_editor_MapEditor_createTiles_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_createTiles_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_mindustry_editor_EditorRenderer_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorRenderer_resize_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	LINE_NUMBER(47);
	((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_loading = (jint(0));
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditor_beginEdit_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:beginEdit", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(51);
	((func_mindustry_editor_MapEditor_reset) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_reset])(ctx, (frame[0].o));
	LINE_NUMBER(53);
	((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_loading = (jint(1));
	LINE_NUMBER(54);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[1].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[1].o)))->F_tags;
	((func_arc_struct_StringMap_putAll_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_putAll_arc_struct_ObjectMap])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(55);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[1].o)))->F_file;
	sp[0].o = (jobject)((func_arc_files_Fi_parent_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_parent_R_arc_files_Fi])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_files_Fi_parent_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_parent_R_arc_files_Fi])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"1127400"_j))));
	if (temp0 == 0) goto label_4;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_steam;
	if ((--sp)->i == 0) goto label_4;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"steamid"_j));
	sp[2].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[1].o)))->F_file;
	sp[2].o = (jobject)((func_arc_files_Fi_parent_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_files_Fi_parent_R_arc_files_Fi])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_4:;
	{
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditor_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_editor_MapEditor_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_editor_MapEditor_invoke_java_lang_Runnable_2);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapEditor_load_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_load_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(59);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_renderer;
	jint temp0 = (jint)((func_mindustry_editor_MapEditor_width_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_width_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_mindustry_editor_MapEditor_height_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_height_R_int])(ctx, (frame[0].o));
	((func_mindustry_editor_EditorRenderer_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorRenderer_resize_int_int])(ctx, sp[0].o, temp0, temp1);
	}
label_7:;
	{
	LINE_NUMBER(60);
	((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_loading = (jint(0));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditor_beginEdit_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:beginEdit", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(64);
	((func_mindustry_editor_MapEditor_reset) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_reset])(ctx, (frame[0].o));
	LINE_NUMBER(66);
	((func_mindustry_editor_MapEditor_createTiles_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_createTiles_int_int])(ctx, (frame[0].o), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_width), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_height));
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditor_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_editor_MapEditor_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_editor_MapEditor_invoke_java_lang_Runnable_3);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapEditor_load_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_load_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(68);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_renderer;
	jint temp0 = (jint)((func_mindustry_editor_MapEditor_width_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_width_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_mindustry_editor_MapEditor_height_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_height_R_int])(ctx, (frame[0].o));
	((func_mindustry_editor_EditorRenderer_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorRenderer_resize_int_int])(ctx, sp[0].o, temp0, temp1);
	}
label_4:;
	LINE_NUMBER(69);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditor_updateRenderer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:updateRenderer", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(72);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	frame[1].o = sp[0].o;
	LINE_NUMBER(73);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(75);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[1].o)))->F_width) * ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[1].o)))->F_height))) goto label_4;
	}
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((func_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile])(ctx, (frame[1].o), (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(77);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	frame[5].o = sp[0].o;
	LINE_NUMBER(78);
	if ((frame[5].o) == nullptr) goto label_8;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_isCenter_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_isCenter_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[2].o), (frame[5].o));
	}
label_8:;
	{
	LINE_NUMBER(82);
	clinit_mindustry_editor_EditorTile(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_editor_EditorTile);
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_x;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_y;
	jint temp2 = (jint)((func_mindustry_world_Tile_floorID_R_short) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_floorID_R_short])(ctx, (frame[4].o));
	jint temp3 = (jint)((func_mindustry_world_Tile_overlayID_R_short) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_overlayID_R_short])(ctx, (frame[4].o));
	sp[1].o = sp[0].o;
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp[5].i = temp3;
	sp += 6;
	if ((frame[5].o) != nullptr) goto label_10;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_blockID_R_short) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_blockID_R_short])(ctx, (frame[4].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_11;
	}
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 7;
	init_mindustry_editor_EditorTile_int_int_int_int_int(ctx, sp[0].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, sp[6].i);
	frame[6].o = sp[0].o;
	LINE_NUMBER(83);
	((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_floorData = ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_floorData);
	LINE_NUMBER(84);
	((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_extraData = ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_extraData);
	LINE_NUMBER(85);
	((func_mindustry_world_Tiles_seti_int_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tiles_seti_int_mindustry_world_Tile])(ctx, (frame[1].o), (frame[3].i), (frame[6].o));
	LINE_NUMBER(75);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_16:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(89);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, (frame[4].o));
	jint temp1 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp0, temp1);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_block;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_team;
	jint temp2 = (jint)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_rotation;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditor_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_editor_MapEditor_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_editor_MapEditor_invoke_arc_func_Prov_1);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov])(ctx, sp[0].o, sp[1].o, sp[2].o, temp2, sp[3].o);
	LINE_NUMBER(90);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_renderer;
	jint temp0 = (jint)((func_mindustry_editor_MapEditor_width_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_width_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_mindustry_editor_MapEditor_height_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_height_R_int])(ctx, (frame[0].o));
	((func_mindustry_editor_EditorRenderer_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorRenderer_resize_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditor_load_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:load", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(96);
	((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_loading = (jint(1));
	LINE_NUMBER(97);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[1].o)))(ctx, (frame[1].o));
	LINE_NUMBER(98);
	((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_loading = (jint(0));
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditor_createTiles_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:createTiles", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(103);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_resize_int_int_R_mindustry_world_Tiles) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_resize_int_int_R_mindustry_world_Tiles])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(105);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(106);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_6;
	}
	{
	LINE_NUMBER(107);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	jint temp1 = frame[5].i;
	clinit_mindustry_editor_EditorTile(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_editor_EditorTile);
	jint temp2 = frame[4].i;
	jint temp3 = frame[5].i;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_stone;
	init_mindustry_editor_EditorTile_int_int_int_int_int(ctx, sp[1].o, temp2, temp3, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[2].o))->F_id), (jint(0)), (jint(0)));
	((func_mindustry_world_Tiles_set_int_int_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_set_int_int_mindustry_world_Tile])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	LINE_NUMBER(106);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(105);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(110);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_editor_MapEditor_createMap_arc_files_Fi_R_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:createMap", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(113);
	clinit_mindustry_maps_Map(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_maps_Map);
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((func_mindustry_editor_MapEditor_width_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_width_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_mindustry_editor_MapEditor_height_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_height_R_int])(ctx, (frame[0].o));
	clinit_arc_struct_StringMap(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_struct_StringMap);
	sp[3].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_tags;
	init_arc_struct_StringMap_arc_struct_ObjectMap(ctx, sp[2].o, sp[3].o);
	init_mindustry_maps_Map_arc_files_Fi_int_int_arc_struct_StringMap_boolean(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o, (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditor_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:reset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(117);
	((func_mindustry_editor_MapEditor_clearOp) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_clearOp])(ctx, (frame[0].o));
	LINE_NUMBER(118);
	((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_brushSize = (jfloat(1));
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_stone;
	((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_drawBlock = (jref) sp[1].o;
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	clinit_arc_struct_StringMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_StringMap);
	init_arc_struct_StringMap(ctx, sp[1].o);
	((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_tags = (jref) sp[1].o;
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_editor_MapEditor_tiles_R_mindustry_world_Tiles(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:tiles", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(124);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:tile", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(128);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_rawTile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_rawTile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_mindustry_editor_MapEditor_width_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:width", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(132);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_editor_MapEditor_height_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:height", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(136);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditor_drawBlocksReplace_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:drawBlocksReplace", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(140);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditor_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_editor_MapEditor_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_editor_MapEditor_invoke_arc_func_Boolf_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapEditor_drawBlocks_int_int_arc_func_Boolf) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_drawBlocks_int_int_arc_func_Boolf])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditor_drawBlocks_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:drawBlocks", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jint temp2 = jint(0);
	jint temp3 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditor_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_editor_MapEditor_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_editor_MapEditor_invoke_arc_func_Boolf_3);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapEditor_drawBlocks_int_int_boolean_boolean_arc_func_Boolf) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_drawBlocks_int_int_boolean_boolean_arc_func_Boolf])(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditor_drawBlocks_int_int_arc_func_Boolf(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:drawBlocks", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(148);
	((func_mindustry_editor_MapEditor_drawBlocks_int_int_boolean_boolean_arc_func_Boolf) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_drawBlocks_int_int_boolean_boolean_arc_func_Boolf])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (jint(0)), (jint(0)), (frame[3].o));
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditor_drawBlocks_int_int_boolean_boolean_arc_func_Boolf(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jbool param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:drawBlocks", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawBlock;
	jint temp0 = (jint)((func_mindustry_world_Block_isMultiblock_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isMultiblock_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(153);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawBlock;
	jint temp1 = (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) - (jint(1))) / (jint(2));
	jint temp2 = (jint)((func_mindustry_editor_MapEditor_width_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_width_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawBlock;
	jint temp3 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp0, temp1, ((temp2 - (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) / (jint(2)))) - (jint(1))));
	frame[1].i = temp3;
	LINE_NUMBER(154);
	jint temp4 = frame[2].i;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawBlock;
	jint temp5 = (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) - (jint(1))) / (jint(2));
	jint temp6 = (jint)((func_mindustry_editor_MapEditor_height_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_height_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawBlock;
	jint temp7 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp4, temp5, ((temp6 - (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) / (jint(2)))) - (jint(1))));
	frame[2].i = temp7;
	LINE_NUMBER(155);
	jint temp8 = (jint)((func_mindustry_editor_MapEditor_hasOverlap_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_hasOverlap_int_int_R_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	if (temp8 != 0) goto label_5;
	}
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((func_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawBlock;
	sp[2].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawTeam;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jint)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	jint temp0 = jshort((frame[1].i));
	jint temp1 = jshort((frame[2].i));
	jint temp2 = jint(3);
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawTeam;
	jlong temp3 = (jlong)SM_mindustry_gen_TileOp_get_int_int_int_int_R_long(ctx, temp0, temp1, temp2, (jbyte(((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id))));
	((func_mindustry_editor_MapEditor_addTileOp_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_addTileOp_long])(ctx, sp[0].o, temp3);
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawBlock;
	jint temp0 = (jint)((func_mindustry_world_Block_isFloor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isFloor_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawBlock;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(162);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditor_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_editor_MapEditor_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_editor_MapEditor_invoke_arc_func_Cons_2);
		proxy->F_field3 = (frame[4].i);
		proxy->F_field2 = (frame[6].i);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	frame[7].o = sp[0].o;
	LINE_NUMBER(216);
	if ((frame[3].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(217);
	((func_mindustry_editor_MapEditor_drawSquare_int_int_arc_func_Cons) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_drawSquare_int_int_arc_func_Cons])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[7].o));
	goto label_5;
	}
label_12:;
	{
	LINE_NUMBER(219);
	((func_mindustry_editor_MapEditor_drawCircle_int_int_arc_func_Cons) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_drawCircle_int_int_arc_func_Cons])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[7].o));
	}
label_5:;
	LINE_NUMBER(222);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapEditor_hasOverlap_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:hasOverlap", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(225);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(227);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_isCenter_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_isCenter_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawBlock;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	jint temp0 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawBlock;
	if (temp0 != ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
	{
	if (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_x) != (frame[1].i)) goto label_2;
	}
	{
	if (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_y) != (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(228);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawBlock;
	frame[4].i = ((-(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)))) / (jint(2)));
	LINE_NUMBER(233);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawBlock;
	frame[5].i = ((-(((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)))) / (jint(2)));
	LINE_NUMBER(234);
	frame[6].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawBlock;
	if (temp0 >= ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size)) goto label_7;
	}
	{
	LINE_NUMBER(235);
	frame[7].i = (jint(0));
	}
label_9:;
	{
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawBlock;
	if (temp0 >= ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size)) goto label_10;
	}
	{
	LINE_NUMBER(236);
	frame[8].i = (((frame[6].i) + (frame[4].i)) + (frame[1].i));
	LINE_NUMBER(237);
	frame[9].i = (((frame[7].i) + (frame[5].i)) + (frame[2].i));
	LINE_NUMBER(238);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[8].i), (frame[9].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(240);
	if ((frame[10].o) == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[10].o));
	jint temp0 = (jint)((func_mindustry_world_Block_isMultiblock_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isMultiblock_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return (jint(1));
	}
label_15:;
	{
	LINE_NUMBER(235);
	INST_IINC(7, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(234);
	INST_IINC(6, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditor_addCliffs(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:addCliffs", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(250);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
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
	LINE_NUMBER(251);
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
	LINE_NUMBER(253);
	frame[3].i = (jint(0));
	LINE_NUMBER(254);
	frame[4].i = (jint(0));
	}
label_6:;
	{
	if ((frame[4].i) >= (8)) goto label_7;
	}
	{
	LINE_NUMBER(255);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_x;
	clinit_arc_math_geom_Geometry(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Geometry_d8;
	jint temp1 = temp0 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i)))))->F_x);
	jint temp2 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_y;
	clinit_arc_math_geom_Geometry(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Geometry_d8;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp1, (temp2 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i)))))->F_y)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(256);
	if ((frame[5].o) == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[5].o));
	jint temp0 = (jint)((func_mindustry_world_Block_isStatic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isStatic_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(257);
	frame[3].i = ((frame[3].i) | ((jint(1)) << (frame[4].i)));
	}
label_10:;
	{
	LINE_NUMBER(254);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(261);
	if ((frame[3].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(262);
	sp[0].o = frame[2].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_cliff;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	}
label_12:;
	{
	LINE_NUMBER(265);
	((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_data = (jbyte((frame[3].i)));
	LINE_NUMBER(266);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(268);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
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
	LINE_NUMBER(269);
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
	LINE_NUMBER(270);
	sp[0].o = frame[2].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	}
label_18:;
	LINE_NUMBER(272);
	goto label_15;
label_16:;
	{
	LINE_NUMBER(273);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	((func_mindustry_editor_MapEditor_flushOp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_flushOp])(ctx, sp[0].o);
	LINE_NUMBER(274);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditor_drawCircle_int_int_arc_func_Cons(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:drawCircle", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(277);
	frame[4].i = (jint(((jfloat)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_brushSize)));
	LINE_NUMBER(278);
	frame[5].i = (-(frame[4].i));
	}
label_2:;
	{
	if ((frame[5].i) > (frame[4].i)) goto label_3;
	}
	{
	LINE_NUMBER(279);
	frame[6].i = (-(frame[4].i));
	}
label_5:;
	{
	if ((frame[6].i) > (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(280);
	jint temp0 = (jint)SM_arc_math_Mathf_within_float_float_float_R_boolean(ctx, (jfloat((frame[5].i))), (jfloat((frame[6].i))), ((((jfloat)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_brushSize) - (jfloat(0.5f))) + (jfloat(1,000000e-04f))));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(281);
	frame[7].i = ((frame[1].i) + (frame[5].i));
	frame[8].i = ((frame[2].i) + (frame[6].i));
	LINE_NUMBER(283);
	if ((frame[7].i) < 0) goto label_8;
	}
	INST_ILOAD(8);
	if ((--sp)->i < 0) goto label_8;
	{
	jint temp0 = frame[7].i;
	jint temp1 = (jint)((func_mindustry_editor_MapEditor_width_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_width_R_int])(ctx, (frame[0].o));
	if (temp0 >= temp1) goto label_8;
	}
	{
	jint temp0 = frame[8].i;
	jint temp1 = (jint)((func_mindustry_editor_MapEditor_height_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_height_R_int])(ctx, (frame[0].o));
	if (temp0 < temp1) goto label_12;
	}
	LINE_NUMBER(284);
	goto label_8;
label_12:;
	{
	LINE_NUMBER(287);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile])(ctx, (frame[0].o), (frame[7].i), (frame[8].i));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_8:;
	{
	LINE_NUMBER(279);
	INST_IINC(6, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(278);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(291);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditor_drawSquare_int_int_arc_func_Cons(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:drawSquare", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(294);
	frame[4].i = (jint(((jfloat)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_brushSize)));
	LINE_NUMBER(295);
	frame[5].i = (-(frame[4].i));
	}
label_2:;
	{
	if ((frame[5].i) > (frame[4].i)) goto label_3;
	}
	{
	LINE_NUMBER(296);
	frame[6].i = (-(frame[4].i));
	}
label_5:;
	{
	if ((frame[6].i) > (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(297);
	frame[7].i = ((frame[1].i) + (frame[5].i));
	frame[8].i = ((frame[2].i) + (frame[6].i));
	LINE_NUMBER(299);
	if ((frame[7].i) < 0) goto label_10;
	}
	INST_ILOAD(8);
	if ((--sp)->i < 0) goto label_10;
	{
	jint temp0 = frame[7].i;
	jint temp1 = (jint)((func_mindustry_editor_MapEditor_width_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_width_R_int])(ctx, (frame[0].o));
	if (temp0 >= temp1) goto label_10;
	}
	{
	jint temp0 = frame[8].i;
	jint temp1 = (jint)((func_mindustry_editor_MapEditor_height_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_height_R_int])(ctx, (frame[0].o));
	if (temp0 < temp1) goto label_11;
	}
	LINE_NUMBER(300);
	goto label_10;
label_11:;
	{
	LINE_NUMBER(303);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile])(ctx, (frame[0].o), (frame[7].i), (frame[8].i));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_10:;
	{
	LINE_NUMBER(296);
	INST_IINC(6, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(295);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(306);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditor_resize_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[27];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:resize", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(309);
	((func_mindustry_editor_MapEditor_clearOp) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_clearOp])(ctx, (frame[0].o));
	LINE_NUMBER(311);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	frame[5].o = sp[0].o;
	LINE_NUMBER(312);
	jint temp0 = (jint)((func_mindustry_editor_MapEditor_width_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_width_R_int])(ctx, (frame[0].o));
	frame[6].i = (((temp0 - (frame[1].i)) / (jint(2))) - (frame[3].i));
	jint temp1 = (jint)((func_mindustry_editor_MapEditor_height_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_height_R_int])(ctx, (frame[0].o));
	frame[7].i = (((temp1 - (frame[2].i)) / (jint(2))) - (frame[4].i));
	LINE_NUMBER(313);
	((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_loading = (jint(1));
	LINE_NUMBER(315);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	((func_mindustry_core_World_clearBuildings) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_clearBuildings])(ctx, sp[0].o);
	LINE_NUMBER(317);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	clinit_mindustry_world_Tiles(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_Tiles);
	init_mindustry_world_Tiles_int_int(ctx, sp[1].o, (frame[1].i), (frame[2].i));
	((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles = (jref) sp[1].o;
	frame[8].o = sp[1].o;
	LINE_NUMBER(319);
	frame[9].i = (jint(0));
	}
label_8:;
	{
	if ((frame[9].i) >= (frame[1].i)) goto label_9;
	}
	{
	LINE_NUMBER(320);
	frame[10].i = (jint(0));
	}
label_11:;
	{
	if ((frame[10].i) >= (frame[2].i)) goto label_12;
	}
	{
	LINE_NUMBER(321);
	frame[11].i = ((frame[6].i) + (frame[9].i));
	frame[12].i = ((frame[7].i) + (frame[10].i));
	LINE_NUMBER(322);
	jint temp0 = (jint)((func_mindustry_world_Tiles_in_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tiles_in_int_int_R_boolean])(ctx, (frame[5].o), (frame[11].i), (frame[12].i));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(323);
	sp[0].o = frame[8].o;
	jint temp0 = frame[9].i;
	jint temp1 = frame[10].i;
	sp[1].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, (frame[5].o), (frame[11].i), (frame[12].i));
	((func_mindustry_world_Tiles_set_int_int_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_set_int_int_mindustry_world_Tile])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	LINE_NUMBER(324);
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, (frame[8].o), (frame[9].i), (frame[10].i));
	frame[13].o = sp[0].o;
	LINE_NUMBER(326);
	frame[14].o = (jobject(nullptr));
	LINE_NUMBER(329);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[13].o)))->F_build;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_isCenter_R_boolean) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_mindustry_world_Tile_isCenter_R_boolean])(ctx, (frame[13].o));
	if (temp0 == 0) goto label_21;
	}
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[13].o)))->F_build;
	sp[0].o = (jobject)((func_mindustry_gen_Building_config_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_config_R_java_lang_Object])(ctx, sp[0].o);
	frame[14].o = sp[0].o;
	}
label_21:;
	{
	LINE_NUMBER(333);
	((mindustry_world_Tile *) NULL_CHECK((frame[13].o)))->F_x = (jshort((frame[9].i)));
	LINE_NUMBER(334);
	((mindustry_world_Tile *) NULL_CHECK((frame[13].o)))->F_y = (jshort((frame[10].i)));
	LINE_NUMBER(336);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[13].o)))->F_build;
	if (sp[0].o == nullptr) goto label_25;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_isCenter_R_boolean) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_mindustry_world_Tile_isCenter_R_boolean])(ctx, (frame[13].o));
	if (temp0 == 0) goto label_25;
	}
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[13].o)))->F_build;
	jfloat temp0 = jfloat(((frame[9].i) * (8)));
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[13].o));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_x = (temp0 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset));
	LINE_NUMBER(338);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[13].o)))->F_build;
	jfloat temp1 = jfloat(((frame[10].i) * (8)));
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[13].o));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_y = (temp1 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset));
	LINE_NUMBER(341);
	if ((frame[14].o) == nullptr) goto label_25;
	}
	{
	LINE_NUMBER(342);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[13].o));
	sp[1].o = frame[14].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapEditor_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_editor_MapEditor_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_editor_MapEditor_invoke_arc_func_Cons_3);
		proxy->F_field2 = (frame[7].i);
		proxy->F_field1 = (frame[6].i);
		proxy->F_field0 = (jref) (frame[13].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_entities_units_BuildPlan_pointConfig_mindustry_world_Block_java_lang_Object_arc_func_Cons_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[15].o = sp[0].o;
	LINE_NUMBER(347);
	if ((frame[15].o) == (frame[14].o)) goto label_25;
	}
	{
	LINE_NUMBER(348);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	frame[16].i = ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor);
	LINE_NUMBER(349);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor = (jint(1));
	LINE_NUMBER(350);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[13].o)))->F_build;
	((func_mindustry_gen_Building_configureAny_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_configureAny_java_lang_Object])(ctx, sp[0].o, (frame[15].o));
	LINE_NUMBER(351);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor = (frame[16].i);
	}
label_25:;
	LINE_NUMBER(356);
	goto label_35;
label_16:;
	{
	LINE_NUMBER(357);
	sp[0].o = frame[8].o;
	jint temp0 = frame[9].i;
	jint temp1 = frame[10].i;
	clinit_mindustry_editor_EditorTile(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_editor_EditorTile);
	jint temp2 = frame[9].i;
	jint temp3 = frame[10].i;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_stone;
	init_mindustry_editor_EditorTile_int_int_int_int_int(ctx, sp[1].o, temp2, temp3, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[2].o))->F_id), (jint(0)), (jint(0)));
	((func_mindustry_world_Tiles_set_int_int_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_set_int_int_mindustry_world_Tile])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	}
label_35:;
	{
	LINE_NUMBER(320);
	INST_IINC(10, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(319);
	INST_IINC(9, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(362);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_mindustry_editor_EditorRenderer_resize_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorRenderer_resize_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	LINE_NUMBER(363);
	((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_loading = (jint(0));
	LINE_NUMBER(364);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditor_clearOp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:clearOp", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(367);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_stack;
	((func_mindustry_editor_OperationStack_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_OperationStack_clear])(ctx, sp[0].o);
	LINE_NUMBER(368);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditor_undo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:undo", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp0 = (jint)((func_mindustry_editor_OperationStack_canUndo_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_OperationStack_canUndo_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_stack;
	((func_mindustry_editor_OperationStack_undo) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_OperationStack_undo])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(374);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditor_redo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:redo", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(377);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp0 = (jint)((func_mindustry_editor_OperationStack_canRedo_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_OperationStack_canRedo_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(378);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_stack;
	((func_mindustry_editor_OperationStack_redo) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_OperationStack_redo])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(380);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapEditor_canUndo_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:canUndo", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp0 = (jint)((func_mindustry_editor_OperationStack_canUndo_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_OperationStack_canUndo_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapEditor_canRedo_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:canRedo", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(387);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp0 = (jint)((func_mindustry_editor_OperationStack_canRedo_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_OperationStack_canRedo_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditor_flushOp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:flushOp", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(391);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_currentOp;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_currentOp;
	jint temp0 = (jint)((func_mindustry_editor_DrawOperation_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_DrawOperation_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(392);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_currentOp;
	((func_mindustry_editor_OperationStack_add_mindustry_editor_DrawOperation) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_OperationStack_add_mindustry_editor_DrawOperation])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(393);
	((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_currentOp = (jref) (jobject(nullptr));
	LINE_NUMBER(394);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditor_addTileOp_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:addTileOp", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(397);
	if (((jint)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_loading) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(399);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_currentOp;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_editor_DrawOperation(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_editor_DrawOperation);
	init_mindustry_editor_DrawOperation(ctx, sp[1].o);
	((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_currentOp = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(400);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_currentOp;
	((func_mindustry_editor_DrawOperation_addOperation_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_DrawOperation_addOperation_long])(ctx, sp[0].o, (frame[1].l));
	LINE_NUMBER(402);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_renderer;
	jint temp0 = (jint)SM_mindustry_gen_TileOp_x_long_R_int(ctx, (frame[1].l));
	jint temp1 = (jint)SM_mindustry_gen_TileOp_y_long_R_int(ctx, (frame[1].l));
	((func_mindustry_editor_EditorRenderer_updateStatic_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorRenderer_updateStatic_int_int])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(403);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_editor_MapEditor_ops_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:ops", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(406);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_currentOp;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(407);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_currentOp;
	jint temp0 = (jint)((func_mindustry_editor_DrawOperation_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_DrawOperation_size_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditor_removeLastOps_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:removeLastOps", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(411);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_currentOp;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	if (((jint)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_loading) == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(413);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_currentOp;
	((func_mindustry_editor_DrawOperation_remove_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_DrawOperation_remove_int])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(414);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_MapEditor_lambda$resize$0_mindustry_world_Tile_int_int_arc_math_geom_Point2(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:lambda$resize$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditor(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_ignoreResizeConfig) != 0) goto label_1;
	}
	{
	LINE_NUMBER(344);
	sp[0].o = (jobject)((func_arc_math_geom_Point2_sub_int_int_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_math_geom_Point2_sub_int_int_R_arc_math_geom_Point2])(ctx, (frame[3].o), (frame[1].i), (frame[2].i));
	}
label_1:;
	LINE_NUMBER(346);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditor_lambda$drawBlocks$1_arc_func_Boolf_boolean_boolean_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:lambda$drawBlocks$1", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(163);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[4].o));
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(164);
	frame[5].i = (jint(0));
	LINE_NUMBER(166);
	frame[6].i = (jint(0));
	LINE_NUMBER(167);
	frame[7].i = (jint(0));
	frame[8].i = (jint(0));
	LINE_NUMBER(169);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawBlock;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_saveData) != 0) goto label_6;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_shouldSaveData_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_shouldSaveData_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_x;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_y;
	jint temp2 = jint(5);
	jint temp3 = (jint)SM_mindustry_gen_TileOpData_get_byte_byte_byte_R_int(ctx, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_data), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_floorData), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_overlayData));
	jlong temp4 = (jlong)SM_mindustry_gen_TileOp_get_int_int_int_int_R_long(ctx, temp0, temp1, temp2, temp3);
	((func_mindustry_editor_MapEditor_addTileOp_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_addTileOp_long])(ctx, sp[0].o, temp4);
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	jlong temp5 = (jlong)SM_mindustry_gen_TileOp_get_int_int_int_int_R_long(ctx, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_y), (6), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_extraData));
	((func_mindustry_editor_MapEditor_addTileOp_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_addTileOp_long])(ctx, sp[0].o, temp5);
	LINE_NUMBER(172);
	jint temp6 = (jint)SM_mindustry_gen_TileOpData_get_byte_byte_byte_R_int(ctx, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_data), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_floorData), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_overlayData));
	frame[7].i = temp6;
	LINE_NUMBER(173);
	frame[8].i = ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_extraData);
	LINE_NUMBER(174);
	frame[6].i = (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(177);
	jint temp0 = (jint)((func_mindustry_editor_MapEditor_ops_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_ops_R_int])(ctx, (frame[0].o));
	frame[9].i = temp0;
	LINE_NUMBER(179);
	if ((frame[2].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(180);
	if ((frame[3].i) == 0) goto label_15;
	}
	{
	LINE_NUMBER(181);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawBlock;
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[1].o);
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(182);
	frame[5].i = (jint(1));
	goto label_18;
	}
label_15:;
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawBlock;
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_wallOre) == 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[4].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) == 0) goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(185);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawBlock;
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[1].o);
	((func_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(186);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[4].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_environment_OverlayFloor)) != 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawBlock;
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_supportsOverlay) != 0) goto label_21;
	}
	{
	LINE_NUMBER(187);
	sp[0].o = frame[4].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	}
label_21:;
	{
	LINE_NUMBER(189);
	frame[5].i = (jint(1));
	goto label_18;
	}
label_13:;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[4].o));
	jint temp0 = (jint)((func_mindustry_world_Block_isMultiblock_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isMultiblock_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_23;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawBlock;
	jint temp0 = (jint)((func_mindustry_world_Block_isMultiblock_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isMultiblock_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_18;
	}
label_23:;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawBlock;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_rotate) == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	if (sp[0].o == nullptr) goto label_24;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_build;
	if (((jint)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_rotation) == ((jint)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_rotation)) goto label_24;
	}
	{
	LINE_NUMBER(194);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_mindustry_gen_TileOp_get_int_int_int_int_R_long(ctx, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_y), (jint(2)), (jbyte(((jint)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_rotation))));
	((func_mindustry_editor_MapEditor_addTileOp_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_addTileOp_long])(ctx, sp[0].o, temp0);
	}
label_24:;
	{
	LINE_NUMBER(197);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawBlock;
	sp[2].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawTeam;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jint)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(198);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawBlock;
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_27;
	}
	INST_ICONST(1);
	goto label_28;
label_27:;
	INST_ICONST(0);
label_28:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(200);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawBlock;
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(201);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_x;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_y;
	jint temp2 = jint(3);
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawTeam;
	jlong temp3 = (jlong)SM_mindustry_gen_TileOp_get_int_int_int_int_R_long(ctx, temp0, temp1, temp2, (jbyte(((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id))));
	((func_mindustry_editor_MapEditor_addTileOp_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_addTileOp_long])(ctx, sp[0].o, temp3);
	}
label_18:;
	{
	LINE_NUMBER(205);
	if ((frame[5].i) == 0) goto label_31;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawBlock;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_saveConfig) == 0) goto label_31;
	}
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawBlock;
	sp[1].o = frame[4].o;
	sp[2].o = jobject(nullptr);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_editor;
	jint temp0 = (jint)((mindustry_editor_MapEditor *) NULL_CHECK(sp[3].o))->F_rotation;
	sp[3].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawBlock;
	sp[3].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[3].o))->F_lastConfig;
	((func_mindustry_world_Block_placeEnded_mindustry_world_Tile_mindustry_gen_Unit_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_placeEnded_mindustry_world_Tile_mindustry_gen_Unit_int_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	LINE_NUMBER(207);
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_renderer;
	((func_mindustry_editor_EditorRenderer_updateStatic_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_EditorRenderer_updateStatic_int_int])(ctx, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_y));
	}
label_31:;
	{
	LINE_NUMBER(211);
	if ((frame[6].i) == 0) goto label_34;
	}
	{
	jint temp0 = (jint)((func_mindustry_editor_MapEditor_ops_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_ops_R_int])(ctx, (frame[0].o));
	if (temp0 != (frame[9].i)) goto label_34;
	}
	{
	jint temp0 = frame[7].i;
	jint temp1 = (jint)SM_mindustry_gen_TileOpData_get_byte_byte_byte_R_int(ctx, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_data), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_floorData), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_overlayData));
	if (temp0 != temp1) goto label_34;
	}
	{
	if ((frame[8].i) != ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_extraData)) goto label_34;
	}
	{
	LINE_NUMBER(212);
	((func_mindustry_editor_MapEditor_removeLastOps_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_removeLastOps_int])(ctx, (frame[0].o), (jint(2)));
	}
label_34:;
	LINE_NUMBER(214);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_MapEditor_lambda$drawBlocks$0_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:lambda$drawBlocks$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditor(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapEditor_lambda$drawBlocksReplace$0_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:lambda$drawBlocksReplace$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_drawBlock;
	jint temp0 = (jint)((func_mindustry_world_Block_isFloor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isFloor_R_boolean])(ctx, sp[0].o);
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

jobject SM_mindustry_editor_MapEditor_lambda$updateRenderer$0_mindustry_gen_Building_R_mindustry_gen_Building(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:lambda$updateRenderer$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditor(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditor_lambda$beginEdit$1_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:lambda$beginEdit$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(67);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_editor_MapEditor_tiles_R_mindustry_world_Tiles) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapEditor_tiles_R_mindustry_world_Tiles])(ctx, (frame[0].o));
	SM_mindustry_io_MapIO_readImage_arc_graphics_Pixmap_mindustry_world_Tiles(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapEditor_lambda$beginEdit$0_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:lambda$beginEdit$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(58);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK((frame[0].o)))->F_context;
	SM_mindustry_io_MapIO_loadMap_mindustry_maps_Map_mindustry_world_WorldContext(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_editor_MapEditor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapEditor:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapEditor(ctx);
	{
	LINE_NUMBER(21);
	sp[0].o = (jobject) createArray(ctx, &class_float, (9));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(1));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = (jfloat(1.5f));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(2))) = (jfloat(2));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (jfloat(3.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (jfloat(4.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (jfloat(5.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (6)) = (jfloat(9.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (7)) = (jfloat(15.0f));
	ARRAY_ACCESS(jfloat, sp[0].o, (8)) = (jfloat(20.0f));
	clinit_mindustry_editor_MapEditor(ctx);
	SF_mindustry_editor_MapEditor_brushSizes = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_MapEditor[] {
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
	(void *) M_mindustry_editor_MapEditor_isLoading_R_boolean,
	(void *) M_mindustry_editor_MapEditor_beginEdit_int_int,
	(void *) M_mindustry_editor_MapEditor_beginEdit_mindustry_maps_Map,
	(void *) M_mindustry_editor_MapEditor_beginEdit_arc_graphics_Pixmap,
	(void *) M_mindustry_editor_MapEditor_updateRenderer,
	(void *) M_mindustry_editor_MapEditor_load_java_lang_Runnable,
	(void *) M_mindustry_editor_MapEditor_createTiles_int_int,
	(void *) M_mindustry_editor_MapEditor_createMap_arc_files_Fi_R_mindustry_maps_Map,
	(void *) M_mindustry_editor_MapEditor_reset,
	(void *) M_mindustry_editor_MapEditor_tiles_R_mindustry_world_Tiles,
	(void *) M_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile,
	(void *) M_mindustry_editor_MapEditor_width_R_int,
	(void *) M_mindustry_editor_MapEditor_height_R_int,
	(void *) M_mindustry_editor_MapEditor_drawBlocksReplace_int_int,
	(void *) M_mindustry_editor_MapEditor_drawBlocks_int_int,
	(void *) M_mindustry_editor_MapEditor_drawBlocks_int_int_arc_func_Boolf,
	(void *) M_mindustry_editor_MapEditor_drawBlocks_int_int_boolean_boolean_arc_func_Boolf,
	(void *) M_mindustry_editor_MapEditor_hasOverlap_int_int_R_boolean,
	(void *) M_mindustry_editor_MapEditor_addCliffs,
	(void *) M_mindustry_editor_MapEditor_drawCircle_int_int_arc_func_Cons,
	(void *) M_mindustry_editor_MapEditor_drawSquare_int_int_arc_func_Cons,
	(void *) M_mindustry_editor_MapEditor_resize_int_int_int_int,
	(void *) M_mindustry_editor_MapEditor_clearOp,
	(void *) M_mindustry_editor_MapEditor_undo,
	(void *) M_mindustry_editor_MapEditor_redo,
	(void *) M_mindustry_editor_MapEditor_canUndo_R_boolean,
	(void *) M_mindustry_editor_MapEditor_canRedo_R_boolean,
	(void *) M_mindustry_editor_MapEditor_flushOp,
	(void *) M_mindustry_editor_MapEditor_addTileOp_long,
	(void *) M_mindustry_editor_MapEditor_ops_R_int,
	(void *) M_mindustry_editor_MapEditor_removeLastOps_int,
	(void *) M_mindustry_editor_MapEditor_lambda$drawBlocks$1_arc_func_Boolf_boolean_boolean_mindustry_world_Tile,
	(void *) M_mindustry_editor_MapEditor_lambda$drawBlocksReplace$0_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_editor_MapEditor_lambda$beginEdit$1_arc_graphics_Pixmap,
	(void *) M_mindustry_editor_MapEditor_lambda$beginEdit$0_mindustry_maps_Map,
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
	{ "isLoading", "()Z" },
	{ "beginEdit", "(II)V" },
	{ "beginEdit", "(Lmindustry/maps/Map;)V" },
	{ "beginEdit", "(Larc/graphics/Pixmap;)V" },
	{ "updateRenderer", "()V" },
	{ "load", "(Ljava/lang/Runnable;)V" },
	{ "createTiles", "(II)V" },
	{ "createMap", "(Larc/files/Fi;)Lmindustry/maps/Map;" },
	{ "reset", "()V" },
	{ "tiles", "()Lmindustry/world/Tiles;" },
	{ "tile", "(II)Lmindustry/world/Tile;" },
	{ "width", "()I" },
	{ "height", "()I" },
	{ "drawBlocksReplace", "(II)V" },
	{ "drawBlocks", "(II)V" },
	{ "drawBlocks", "(IILarc/func/Boolf;)V" },
	{ "drawBlocks", "(IIZZLarc/func/Boolf;)V" },
	{ "hasOverlap", "(II)Z" },
	{ "addCliffs", "()V" },
	{ "drawCircle", "(IILarc/func/Cons;)V" },
	{ "drawSquare", "(IILarc/func/Cons;)V" },
	{ "resize", "(IIII)V" },
	{ "clearOp", "()V" },
	{ "undo", "()V" },
	{ "redo", "()V" },
	{ "canUndo", "()Z" },
	{ "canRedo", "()Z" },
	{ "flushOp", "()V" },
	{ "addTileOp", "(J)V" },
	{ "ops", "()I" },
	{ "removeLastOps", "(I)V" },
	{ "lambda$drawBlocks$1", "(Larc/func/Boolf;ZZLmindustry/world/Tile;)V" },
	{ "lambda$drawBlocksReplace$0", "(Lmindustry/world/Tile;)Z" },
	{ "lambda$beginEdit$1", "(Larc/graphics/Pixmap;)V" },
	{ "lambda$beginEdit$0", "(Lmindustry/maps/Map;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_editor_MapEditor$Context,
};

static FieldMetadata fields[] {
	{ "brushSizes", getArrayClass(&class_float, 1), (intptr_t) &SF_mindustry_editor_MapEditor_brushSizes, "[F", 25 },
	{ "tags", &class_arc_struct_StringMap, offsetof(mindustry_editor_MapEditor, F_tags), "Larc/struct/StringMap;", 1 },
	{ "renderer", &class_mindustry_editor_EditorRenderer, offsetof(mindustry_editor_MapEditor, F_renderer), "Lmindustry/editor/EditorRenderer;", 1 },
	{ "context", &class_mindustry_editor_MapEditor$Context, offsetof(mindustry_editor_MapEditor, F_context), "Lmindustry/editor/MapEditor$Context;", 18 },
	{ "stack", &class_mindustry_editor_OperationStack, offsetof(mindustry_editor_MapEditor, F_stack), "Lmindustry/editor/OperationStack;", 2 },
	{ "currentOp", &class_mindustry_editor_DrawOperation, offsetof(mindustry_editor_MapEditor, F_currentOp), "Lmindustry/editor/DrawOperation;", 2 },
	{ "loading", &class_boolean, offsetof(mindustry_editor_MapEditor, F_loading), "Z", 2 },
	{ "brushSize", &class_float, offsetof(mindustry_editor_MapEditor, F_brushSize), "F", 1 },
	{ "rotation", &class_int, offsetof(mindustry_editor_MapEditor, F_rotation), "I", 1 },
	{ "drawBlock", &class_mindustry_world_Block, offsetof(mindustry_editor_MapEditor, F_drawBlock), "Lmindustry/world/Block;", 1 },
	{ "drawTeam", &class_mindustry_game_Team, offsetof(mindustry_editor_MapEditor, F_drawTeam), "Lmindustry/game/Team;", 1 },
	{ "showTerrain", &class_boolean, offsetof(mindustry_editor_MapEditor, F_showTerrain), "Z", 1 },
	{ "showFloor", &class_boolean, offsetof(mindustry_editor_MapEditor, F_showFloor), "Z", 1 },
	{ "showBuildings", &class_boolean, offsetof(mindustry_editor_MapEditor, F_showBuildings), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_MapEditor, 0, "()V", 1 },
	{ "isLoading", (intptr_t) M_mindustry_editor_MapEditor_isLoading_R_boolean, VTABLE_mindustry_editor_MapEditor_isLoading_R_boolean, "()Z", 1 },
	{ "beginEdit", (intptr_t) M_mindustry_editor_MapEditor_beginEdit_int_int, VTABLE_mindustry_editor_MapEditor_beginEdit_int_int, "(II)V", 1 },
	{ "beginEdit", (intptr_t) M_mindustry_editor_MapEditor_beginEdit_mindustry_maps_Map, VTABLE_mindustry_editor_MapEditor_beginEdit_mindustry_maps_Map, "(Lmindustry/maps/Map;)V", 1 },
	{ "beginEdit", (intptr_t) M_mindustry_editor_MapEditor_beginEdit_arc_graphics_Pixmap, VTABLE_mindustry_editor_MapEditor_beginEdit_arc_graphics_Pixmap, "(Larc/graphics/Pixmap;)V", 1 },
	{ "updateRenderer", (intptr_t) M_mindustry_editor_MapEditor_updateRenderer, VTABLE_mindustry_editor_MapEditor_updateRenderer, "()V", 1 },
	{ "load", (intptr_t) M_mindustry_editor_MapEditor_load_java_lang_Runnable, VTABLE_mindustry_editor_MapEditor_load_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 1 },
	{ "createTiles", (intptr_t) M_mindustry_editor_MapEditor_createTiles_int_int, VTABLE_mindustry_editor_MapEditor_createTiles_int_int, "(II)V", 2 },
	{ "createMap", (intptr_t) M_mindustry_editor_MapEditor_createMap_arc_files_Fi_R_mindustry_maps_Map, VTABLE_mindustry_editor_MapEditor_createMap_arc_files_Fi_R_mindustry_maps_Map, "(Larc/files/Fi;)Lmindustry/maps/Map;", 1 },
	{ "reset", (intptr_t) M_mindustry_editor_MapEditor_reset, VTABLE_mindustry_editor_MapEditor_reset, "()V", 2 },
	{ "tiles", (intptr_t) M_mindustry_editor_MapEditor_tiles_R_mindustry_world_Tiles, VTABLE_mindustry_editor_MapEditor_tiles_R_mindustry_world_Tiles, "()Lmindustry/world/Tiles;", 1 },
	{ "tile", (intptr_t) M_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile, VTABLE_mindustry_editor_MapEditor_tile_int_int_R_mindustry_world_Tile, "(II)Lmindustry/world/Tile;", 1 },
	{ "width", (intptr_t) M_mindustry_editor_MapEditor_width_R_int, VTABLE_mindustry_editor_MapEditor_width_R_int, "()I", 1 },
	{ "height", (intptr_t) M_mindustry_editor_MapEditor_height_R_int, VTABLE_mindustry_editor_MapEditor_height_R_int, "()I", 1 },
	{ "drawBlocksReplace", (intptr_t) M_mindustry_editor_MapEditor_drawBlocksReplace_int_int, VTABLE_mindustry_editor_MapEditor_drawBlocksReplace_int_int, "(II)V", 1 },
	{ "drawBlocks", (intptr_t) M_mindustry_editor_MapEditor_drawBlocks_int_int, VTABLE_mindustry_editor_MapEditor_drawBlocks_int_int, "(II)V", 1 },
	{ "drawBlocks", (intptr_t) M_mindustry_editor_MapEditor_drawBlocks_int_int_arc_func_Boolf, VTABLE_mindustry_editor_MapEditor_drawBlocks_int_int_arc_func_Boolf, "(IILarc/func/Boolf;)V", 1 },
	{ "drawBlocks", (intptr_t) M_mindustry_editor_MapEditor_drawBlocks_int_int_boolean_boolean_arc_func_Boolf, VTABLE_mindustry_editor_MapEditor_drawBlocks_int_int_boolean_boolean_arc_func_Boolf, "(IIZZLarc/func/Boolf;)V", 1 },
	{ "hasOverlap", (intptr_t) M_mindustry_editor_MapEditor_hasOverlap_int_int_R_boolean, VTABLE_mindustry_editor_MapEditor_hasOverlap_int_int_R_boolean, "(II)Z", 0 },
	{ "addCliffs", (intptr_t) M_mindustry_editor_MapEditor_addCliffs, VTABLE_mindustry_editor_MapEditor_addCliffs, "()V", 1 },
	{ "drawCircle", (intptr_t) M_mindustry_editor_MapEditor_drawCircle_int_int_arc_func_Cons, VTABLE_mindustry_editor_MapEditor_drawCircle_int_int_arc_func_Cons, "(IILarc/func/Cons;)V", 1 },
	{ "drawSquare", (intptr_t) M_mindustry_editor_MapEditor_drawSquare_int_int_arc_func_Cons, VTABLE_mindustry_editor_MapEditor_drawSquare_int_int_arc_func_Cons, "(IILarc/func/Cons;)V", 1 },
	{ "resize", (intptr_t) M_mindustry_editor_MapEditor_resize_int_int_int_int, VTABLE_mindustry_editor_MapEditor_resize_int_int_int_int, "(IIII)V", 1 },
	{ "clearOp", (intptr_t) M_mindustry_editor_MapEditor_clearOp, VTABLE_mindustry_editor_MapEditor_clearOp, "()V", 1 },
	{ "undo", (intptr_t) M_mindustry_editor_MapEditor_undo, VTABLE_mindustry_editor_MapEditor_undo, "()V", 1 },
	{ "redo", (intptr_t) M_mindustry_editor_MapEditor_redo, VTABLE_mindustry_editor_MapEditor_redo, "()V", 1 },
	{ "canUndo", (intptr_t) M_mindustry_editor_MapEditor_canUndo_R_boolean, VTABLE_mindustry_editor_MapEditor_canUndo_R_boolean, "()Z", 1 },
	{ "canRedo", (intptr_t) M_mindustry_editor_MapEditor_canRedo_R_boolean, VTABLE_mindustry_editor_MapEditor_canRedo_R_boolean, "()Z", 1 },
	{ "flushOp", (intptr_t) M_mindustry_editor_MapEditor_flushOp, VTABLE_mindustry_editor_MapEditor_flushOp, "()V", 1 },
	{ "addTileOp", (intptr_t) M_mindustry_editor_MapEditor_addTileOp_long, VTABLE_mindustry_editor_MapEditor_addTileOp_long, "(J)V", 1 },
	{ "ops", (intptr_t) M_mindustry_editor_MapEditor_ops_R_int, VTABLE_mindustry_editor_MapEditor_ops_R_int, "()I", 1 },
	{ "removeLastOps", (intptr_t) M_mindustry_editor_MapEditor_removeLastOps_int, VTABLE_mindustry_editor_MapEditor_removeLastOps_int, "(I)V", 1 },
	{ "lambda$resize$0", (intptr_t) SM_mindustry_editor_MapEditor_lambda$resize$0_mindustry_world_Tile_int_int_arc_math_geom_Point2, 0, "(Lmindustry/world/Tile;IILarc/math/geom/Point2;)V", 4106 },
	{ "lambda$drawBlocks$1", (intptr_t) M_mindustry_editor_MapEditor_lambda$drawBlocks$1_arc_func_Boolf_boolean_boolean_mindustry_world_Tile, VTABLE_mindustry_editor_MapEditor_lambda$drawBlocks$1_arc_func_Boolf_boolean_boolean_mindustry_world_Tile, "(Larc/func/Boolf;ZZLmindustry/world/Tile;)V", 4098 },
	{ "lambda$drawBlocks$0", (intptr_t) SM_mindustry_editor_MapEditor_lambda$drawBlocks$0_mindustry_world_Tile_R_boolean, 0, "(Lmindustry/world/Tile;)Z", 4106 },
	{ "lambda$drawBlocksReplace$0", (intptr_t) M_mindustry_editor_MapEditor_lambda$drawBlocksReplace$0_mindustry_world_Tile_R_boolean, VTABLE_mindustry_editor_MapEditor_lambda$drawBlocksReplace$0_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 4098 },
	{ "lambda$updateRenderer$0", (intptr_t) SM_mindustry_editor_MapEditor_lambda$updateRenderer$0_mindustry_gen_Building_R_mindustry_gen_Building, 0, "(Lmindustry/gen/Building;)Lmindustry/gen/Building;", 4106 },
	{ "lambda$beginEdit$1", (intptr_t) M_mindustry_editor_MapEditor_lambda$beginEdit$1_arc_graphics_Pixmap, VTABLE_mindustry_editor_MapEditor_lambda$beginEdit$1_arc_graphics_Pixmap, "(Larc/graphics/Pixmap;)V", 4098 },
	{ "lambda$beginEdit$0", (intptr_t) M_mindustry_editor_MapEditor_lambda$beginEdit$0_mindustry_maps_Map, VTABLE_mindustry_editor_MapEditor_lambda$beginEdit$0_mindustry_maps_Map, "(Lmindustry/maps/Map;)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_editor_MapEditor, 0, "()V", 8 },
};

Class class_mindustry_editor_MapEditor{
		.nativeName = (intptr_t) "mindustry/editor/MapEditor",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_editor_MapEditor),
		.classVtable = (intptr_t) vtable_mindustry_editor_MapEditor,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_MapEditor,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_MapEditor,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 40,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 46,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_MapEditor = registerClass(&class_mindustry_editor_MapEditor);

}
