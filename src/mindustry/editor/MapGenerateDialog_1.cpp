#include "mindustry/editor/MapGenerateDialog_1.h"
#include "mindustry/editor/MapGenerateDialog.h"
#include "arc/func/Prov.h"
#include "java/lang/Object.h"
#include "mindustry/world/CachedTile.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/Tile.h"
#include "mindustry/editor/MapGenerateDialog_1.h"
#include "mindustry/game/Team.h"
#include "arc/math/geom/Position.h"

extern "C" {


void mark_mindustry_editor_MapGenerateDialog$1(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_editor_MapGenerateDialog$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_editor_MapGenerateDialog$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_CachedTile(ctx);
}

void init_mindustry_editor_MapGenerateDialog$1_mindustry_editor_MapGenerateDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapGenerateDialog$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	((mindustry_editor_MapGenerateDialog$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_world_CachedTile(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog$1_changeBuild_mindustry_game_Team_arc_func_Prov_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog$1:changeBuild", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	LINE_NUMBER(58);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_MapGenerateDialog$1_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapGenerateDialog$1:setBlock", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(62);
	((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block = (jref) (frame[1].o);
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_MapGenerateDialog$1[] {
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
	(void *) M_mindustry_editor_MapGenerateDialog$1_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov,
	(void *) M_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team,
	(void *) M_mindustry_world_Tile_setBlock_mindustry_world_Block,
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
	(void *) M_mindustry_editor_MapGenerateDialog$1_changeBuild_mindustry_game_Team_arc_func_Prov_int,
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
	{ "this$0", &class_mindustry_editor_MapGenerateDialog, offsetof(mindustry_editor_MapGenerateDialog$1, F_this$0), "Lmindustry/editor/MapGenerateDialog;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_MapGenerateDialog$1_mindustry_editor_MapGenerateDialog, 0, "(Lmindustry/editor/MapGenerateDialog;)V", 0 },
	{ "changeBuild", (intptr_t) M_mindustry_editor_MapGenerateDialog$1_changeBuild_mindustry_game_Team_arc_func_Prov_int, VTABLE_mindustry_editor_MapGenerateDialog$1_changeBuild_mindustry_game_Team_arc_func_Prov_int, "(Lmindustry/game/Team;Larc/func/Prov;I)V", 4 },
	{ "setBlock", (intptr_t) M_mindustry_editor_MapGenerateDialog$1_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov, VTABLE_mindustry_editor_MapGenerateDialog$1_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov, "(Lmindustry/world/Block;Lmindustry/game/Team;ILarc/func/Prov;)V", 1 },
};

Class class_mindustry_editor_MapGenerateDialog$1{
		.nativeName = (intptr_t) "mindustry/editor/MapGenerateDialog$1",
		.parentClass = (intptr_t) &class_mindustry_world_CachedTile,
		.size = sizeof(mindustry_editor_MapGenerateDialog$1),
		.classVtable = (intptr_t) vtable_mindustry_editor_MapGenerateDialog$1,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_MapGenerateDialog$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_MapGenerateDialog$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 103,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_editor_MapGenerateDialog$1 = registerClass(&class_mindustry_editor_MapGenerateDialog$1);

}

