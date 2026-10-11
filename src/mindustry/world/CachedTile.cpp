#include "mindustry/world/CachedTile.h"
#include "arc/func/Prov.h"
#include "java/lang/Object.h"
#include "mindustry/world/CachedTile.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/modules/PowerModule.h"
#include "mindustry/game/Team.h"
#include "arc/math/geom/Position.h"
#include "mindustry/world/modules/LiquidModule.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"

extern "C" {


void mark_mindustry_world_CachedTile(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_CachedTile *) object;
}

void clinit_mindustry_world_CachedTile(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_Tile(ctx);
}

void init_mindustry_world_CachedTile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/CachedTile:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_CachedTile(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(15);
	init_mindustry_world_Tile_int_int(ctx, (frame[0].o), (jint(0)), (jint(0)));
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_CachedTile_preChanged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/CachedTile:preChanged", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(21);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_CachedTile_changeBuild_mindustry_game_Team_arc_func_Prov_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/CachedTile:changeBuild", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(25);
	((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build = (jref) (jobject(nullptr));
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_mindustry_world_CachedTile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_CachedTile_block_R_mindustry_world_Block])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(29);
	jint temp0 = (jint)((func_mindustry_world_Block_hasBuilding_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Block_hasBuilding_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(31);
	((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_tile = (jref) (frame[0].o);
	LINE_NUMBER(32);
	((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block = (jref) (frame[4].o);
	LINE_NUMBER(33);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[4].o)))->F_hasItems) == 0) goto label_8;
	}
	{
	sp[0].o = frame[5].o;
	clinit_mindustry_world_modules_ItemModule(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_modules_ItemModule);
	init_mindustry_world_modules_ItemModule(ctx, sp[1].o);
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_items = (jref) sp[1].o;
	}
label_8:;
	{
	LINE_NUMBER(34);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[4].o)))->F_hasLiquids) == 0) goto label_9;
	}
	{
	sp[0].o = frame[5].o;
	clinit_mindustry_world_modules_LiquidModule(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_modules_LiquidModule);
	init_mindustry_world_modules_LiquidModule(ctx, sp[1].o);
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_liquids = (jref) sp[1].o;
	}
label_9:;
	{
	LINE_NUMBER(35);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[4].o)))->F_hasPower) == 0) goto label_10;
	}
	{
	sp[0].o = frame[5].o;
	clinit_mindustry_world_modules_PowerModule(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_modules_PowerModule);
	init_mindustry_world_modules_PowerModule(ctx, sp[1].o);
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_power = (jref) sp[1].o;
	}
label_10:;
	{
	LINE_NUMBER(36);
	((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build = (jref) (frame[5].o);
	}
label_3:;
	LINE_NUMBER(38);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_world_CachedTile[] {
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_CachedTile, 0, "()V", 1 },
	{ "preChanged", (intptr_t) M_mindustry_world_CachedTile_preChanged, VTABLE_mindustry_world_CachedTile_preChanged, "()V", 4 },
	{ "changeBuild", (intptr_t) M_mindustry_world_CachedTile_changeBuild_mindustry_game_Team_arc_func_Prov_int, VTABLE_mindustry_world_CachedTile_changeBuild_mindustry_game_Team_arc_func_Prov_int, "(Lmindustry/game/Team;Larc/func/Prov;I)V", 4 },
};

Class class_mindustry_world_CachedTile{
		.nativeName = (intptr_t) "mindustry/world/CachedTile",
		.parentClass = (intptr_t) &class_mindustry_world_Tile,
		.size = sizeof(mindustry_world_CachedTile),
		.classVtable = (intptr_t) vtable_mindustry_world_CachedTile,
		.staticInitializer = (intptr_t) clinit_mindustry_world_CachedTile,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_CachedTile,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 103,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_CachedTile = registerClass(&class_mindustry_world_CachedTile);

}
