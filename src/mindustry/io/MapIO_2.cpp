#include "mindustry/io/MapIO_2.h"
#include "mindustry/content/Blocks.h"
#include "arc/graphics/Pixmap.h"
#include "java/lang/Object.h"
#include "mindustry/world/CachedTile.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/Tile.h"
#include "mindustry/io/MapIO_2.h"
#include "mindustry/game/Team.h"
#include "arc/math/geom/Position.h"
#include "mindustry/io/MapIO.h"
#include "mindustry/gen/Building.h"

extern "C" {


void mark_mindustry_io_MapIO$2(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_CachedTile(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_io_MapIO$2 *) object;
	if (self->F_val$walls)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$walls)->clazz)->markFunction)((jobject) self->F_val$walls, mark, depth + 1);
	if (self->F_val$floors)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$floors)->clazz)->markFunction)((jobject) self->F_val$floors, mark, depth + 1);
}

void clinit_mindustry_io_MapIO$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_CachedTile(ctx);
}

void init_mindustry_io_MapIO$2_int_arc_graphics_Pixmap_arc_graphics_Pixmap_int(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/MapIO$2:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_io_MapIO$2(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(95);
	((mindustry_io_MapIO$2 *) NULL_CHECK((frame[0].o)))->F_val$black = (frame[1].i);
	((mindustry_io_MapIO$2 *) NULL_CHECK((frame[0].o)))->F_val$walls = (jref) (frame[2].o);
	((mindustry_io_MapIO$2 *) NULL_CHECK((frame[0].o)))->F_val$floors = (jref) (frame[3].o);
	((mindustry_io_MapIO$2 *) NULL_CHECK((frame[0].o)))->F_val$shade = (frame[4].i);
	init_mindustry_world_CachedTile(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_io_MapIO$2_setBlock_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/io/MapIO$2:setBlock", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block = (jref) (frame[1].o);
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_world_Block_newBuilding_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Block_newBuilding_R_mindustry_gen_Building])(ctx, (frame[1].o));
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((func_mindustry_io_MapIO$2_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_MapIO$2_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Building_init_mindustry_world_Tile_mindustry_game_Team_boolean_int_R_mindustry_gen_Building])(ctx, sp[1].o, sp[2].o, sp[3].o, (jint(0)), (jint(0)));
	((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build = (jref) sp[1].o;
	LINE_NUMBER(101);
	sp[0].o = frame[1].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_air;
	sp[3].o = (jobject)((func_mindustry_io_MapIO$2_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_io_MapIO$2_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	jint temp0 = (jint)SM_mindustry_io_MapIO_colorFor_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block_mindustry_game_Team_R_int(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[2].i = temp0;
	LINE_NUMBER(102);
	if ((frame[2].i) == ((jint)((mindustry_io_MapIO$2 *) NULL_CHECK((frame[0].o)))->F_val$black)) goto label_4;
	}
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((mindustry_io_MapIO$2 *) NULL_CHECK((frame[0].o)))->F_val$walls;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((mindustry_io_MapIO$2 *) NULL_CHECK((frame[0].o)))->F_val$floors;
	((func_arc_graphics_Pixmap_setRaw_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_setRaw_int_int_int])(ctx, sp[0].o, temp0, ((((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[1].o))->F_height) - (jint(1))) - ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y)), (frame[2].i));
	LINE_NUMBER(104);
	sp[0].o = (jobject)((mindustry_io_MapIO$2 *) NULL_CHECK((frame[0].o)))->F_val$floors;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x;
	sp[1].o = (jobject)((mindustry_io_MapIO$2 *) NULL_CHECK((frame[0].o)))->F_val$floors;
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, sp[0].o, temp1, (((((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[1].o))->F_height) - (jint(1))) - ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y)) + (jint(1))), ((jint)((mindustry_io_MapIO$2 *) NULL_CHECK((frame[0].o)))->F_val$shade));
	}
label_4:;
	LINE_NUMBER(106);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_io_MapIO$2[] {
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
	(void *) M_mindustry_world_Tile_isDarkened_R_boolean,
	(void *) M_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_world_Tile_block_R_mindustry_world_Block,
	(void *) M_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_world_Tile_updateBlockReference_mindustry_world_Block,
	(void *) M_mindustry_world_Tile_cblock_R_mindustry_world_Block,
	(void *) M_mindustry_world_Tile_team_R_mindustry_game_Team,
	(void *) M_mindustry_world_Tile_setTeam_mindustry_game_Team,
	(void *) M_mindustry_world_Tile_isCenter_R_boolean,
	(void *) M_mindustry_world_Tile_centerX_R_int,
	(void *) M_mindustry_world_Tile_centerY_R_int,
	(void *) M_mindustry_world_Tile_getTeamID_R_int,
	(void *) M_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int,
	(void *) M_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov,
	(void *) M_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team,
	(void *) M_mindustry_io_MapIO$2_setBlock_mindustry_world_Block,
	(void *) M_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_world_Tile_isEditorTile_R_boolean,
	(void *) M_mindustry_world_Tile_setAir,
	(void *) M_mindustry_world_Tile_circle_int_arc_func_Intc2,
	(void *) M_mindustry_world_Tile_circle_int_arc_func_Cons,
	(void *) M_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color,
	(void *) M_mindustry_world_Tile_recacheWall,
	(void *) M_mindustry_world_Tile_recache,
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
	(void *) M_mindustry_world_Tile_setOverlay_mindustry_world_Block,
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
	(void *) M_mindustry_world_CachedTile_preChanged,
	(void *) M_mindustry_world_CachedTile_changeBuild_mindustry_game_Team_arc_func_Prov_int,
	(void *) M_mindustry_world_Tile_changed,
	(void *) M_mindustry_world_Tile_fireChanged,
	(void *) M_mindustry_world_Tile_firePreChanged,
	(void *) M_mindustry_world_Tile_getPackedData_R_long,
	(void *) M_mindustry_world_Tile_setPackedData_long,
	(void *) M_mindustry_world_Tile_lambda$display$0_mindustry_world_Block_arc_scene_ui_layout_Table,
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
};

static FieldMetadata fields[] {
	{ "val$black", &class_int, offsetof(mindustry_io_MapIO$2, F_val$black), "I", 4112 },
	{ "val$walls", &class_arc_graphics_Pixmap, offsetof(mindustry_io_MapIO$2, F_val$walls), "Larc/graphics/Pixmap;", 4112 },
	{ "val$floors", &class_arc_graphics_Pixmap, offsetof(mindustry_io_MapIO$2, F_val$floors), "Larc/graphics/Pixmap;", 4112 },
	{ "val$shade", &class_int, offsetof(mindustry_io_MapIO$2, F_val$shade), "I", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_io_MapIO$2_int_arc_graphics_Pixmap_arc_graphics_Pixmap_int, 0, "(ILarc/graphics/Pixmap;Larc/graphics/Pixmap;I)V", 0 },
	{ "setBlock", (intptr_t) M_mindustry_io_MapIO$2_setBlock_mindustry_world_Block, VTABLE_mindustry_io_MapIO$2_setBlock_mindustry_world_Block, "(Lmindustry/world/Block;)V", 1 },
};

Class class_mindustry_io_MapIO$2{
		.nativeName = (intptr_t) "mindustry/io/MapIO$2",
		.parentClass = (intptr_t) &class_mindustry_world_CachedTile,
		.size = sizeof(mindustry_io_MapIO$2),
		.classVtable = (intptr_t) vtable_mindustry_io_MapIO$2,
		.staticInitializer = (intptr_t) clinit_mindustry_io_MapIO$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_io_MapIO$2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 103,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_io_MapIO$2 = registerClass(&class_mindustry_io_MapIO$2);

}

