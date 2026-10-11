#ifndef HEADER_mindustry_io_MapIO$2
#define HEADER_mindustry_io_MapIO$2

#include "Clearwing.h"
#include "mindustry/world/CachedTile.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_io_MapIO$2 {
	mindustry_world_CachedTile parent;
	jint F_val$black;
	jref F_val$walls;
	jref F_val$floors;
	jint F_val$shade;
} mindustry_io_MapIO$2;

extern Class class_mindustry_io_MapIO$2;


#define VTABLE_mindustry_io_MapIO$2_hashCode_R_int 0
typedef jint (*func_mindustry_io_MapIO$2_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_io_MapIO$2_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_MapIO$2_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_io_MapIO$2_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_io_MapIO$2_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_io_MapIO$2_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_finalize 5
typedef void (*func_mindustry_io_MapIO$2_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_notify 6
typedef void (*func_mindustry_io_MapIO$2_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_notifyAll 7
typedef void (*func_mindustry_io_MapIO$2_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_wait 8
typedef void (*func_mindustry_io_MapIO$2_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_wait_long 9
typedef void (*func_mindustry_io_MapIO$2_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_io_MapIO$2_wait_long_int 10
typedef void (*func_mindustry_io_MapIO$2_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_io_MapIO$2_getX_R_float 11
typedef jfloat (*func_mindustry_io_MapIO$2_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_getY_R_float 12
typedef jfloat (*func_mindustry_io_MapIO$2_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_angleTo_arc_math_geom_Position_R_float 13
typedef jfloat (*func_mindustry_io_MapIO$2_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_MapIO$2_angleTo_float_float_R_float 14
typedef jfloat (*func_mindustry_io_MapIO$2_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_io_MapIO$2_dst2_arc_math_geom_Position_R_float 15
typedef jfloat (*func_mindustry_io_MapIO$2_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_MapIO$2_dst_arc_math_geom_Position_R_float 16
typedef jfloat (*func_mindustry_io_MapIO$2_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_MapIO$2_dst_float_float_R_float 17
typedef jfloat (*func_mindustry_io_MapIO$2_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_io_MapIO$2_dst2_float_float_R_float 18
typedef jfloat (*func_mindustry_io_MapIO$2_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_io_MapIO$2_within_arc_math_geom_Position_float_R_boolean 19
typedef jbool (*func_mindustry_io_MapIO$2_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_io_MapIO$2_within_float_float_float_R_boolean 20
typedef jbool (*func_mindustry_io_MapIO$2_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_io_MapIO$2_hitbox_arc_math_geom_Rect 21
typedef void (*func_mindustry_io_MapIO$2_hitbox_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_MapIO$2_displayable_R_boolean 22
typedef jbool (*func_mindustry_io_MapIO$2_displayable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_display_arc_scene_ui_layout_Table 23
typedef void (*func_mindustry_io_MapIO$2_display_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_MapIO$2_pos_R_int 24
typedef jint (*func_mindustry_io_MapIO$2_pos_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_array_R_int 25
typedef jint (*func_mindustry_io_MapIO$2_array_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_relativeTo_mindustry_world_Tile_R_byte 26
typedef jbyte (*func_mindustry_io_MapIO$2_relativeTo_mindustry_world_Tile_R_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_MapIO$2_relativeTo_int_int_R_byte 27
typedef jbyte (*func_mindustry_io_MapIO$2_relativeTo_int_int_R_byte)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_io_MapIO$2_absoluteRelativeTo_int_int_R_byte 28
typedef jbyte (*func_mindustry_io_MapIO$2_absoluteRelativeTo_int_int_R_byte)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_io_MapIO$2_getFlammability_R_float 29
typedef jfloat (*func_mindustry_io_MapIO$2_getFlammability_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_inMapArea_R_boolean 30
typedef jbool (*func_mindustry_io_MapIO$2_inMapArea_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_worldx_R_float 31
typedef jfloat (*func_mindustry_io_MapIO$2_worldx_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_worldy_R_float 32
typedef jfloat (*func_mindustry_io_MapIO$2_worldy_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_drawx_R_float 33
typedef jfloat (*func_mindustry_io_MapIO$2_drawx_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_drawy_R_float 34
typedef jfloat (*func_mindustry_io_MapIO$2_drawy_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_isDarkened_R_boolean 35
typedef jbool (*func_mindustry_io_MapIO$2_isDarkened_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_floor_R_mindustry_world_blocks_environment_Floor 36
typedef jobject (*func_mindustry_io_MapIO$2_floor_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_block_R_mindustry_world_Block 37
typedef jobject (*func_mindustry_io_MapIO$2_block_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_overlay_R_mindustry_world_blocks_environment_Floor 38
typedef jobject (*func_mindustry_io_MapIO$2_overlay_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_updateBlockReference_mindustry_world_Block 39
typedef void (*func_mindustry_io_MapIO$2_updateBlockReference_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_MapIO$2_cblock_R_mindustry_world_Block 40
typedef jobject (*func_mindustry_io_MapIO$2_cblock_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_team_R_mindustry_game_Team 41
typedef jobject (*func_mindustry_io_MapIO$2_team_R_mindustry_game_Team)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_setTeam_mindustry_game_Team 42
typedef void (*func_mindustry_io_MapIO$2_setTeam_mindustry_game_Team)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_MapIO$2_isCenter_R_boolean 43
typedef jbool (*func_mindustry_io_MapIO$2_isCenter_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_centerX_R_int 44
typedef jint (*func_mindustry_io_MapIO$2_centerX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_centerY_R_int 45
typedef jint (*func_mindustry_io_MapIO$2_centerY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_getTeamID_R_int 46
typedef jint (*func_mindustry_io_MapIO$2_getTeamID_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_setBlock_mindustry_world_Block_mindustry_game_Team_int 47
typedef void (*func_mindustry_io_MapIO$2_setBlock_mindustry_world_Block_mindustry_game_Team_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_mindustry_io_MapIO$2_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov 48
typedef void (*func_mindustry_io_MapIO$2_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3);
#define VTABLE_mindustry_io_MapIO$2_setBlock_mindustry_world_Block_mindustry_game_Team 49
typedef void (*func_mindustry_io_MapIO$2_setBlock_mindustry_world_Block_mindustry_game_Team)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_io_MapIO$2_setBlock_mindustry_world_Block 50
typedef void (*func_mindustry_io_MapIO$2_setBlock_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_MapIO$2_setFloor_mindustry_world_blocks_environment_Floor 51
typedef void (*func_mindustry_io_MapIO$2_setFloor_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_MapIO$2_isEditorTile_R_boolean 52
typedef jbool (*func_mindustry_io_MapIO$2_isEditorTile_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_setAir 53
typedef void (*func_mindustry_io_MapIO$2_setAir)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_circle_int_arc_func_Intc2 54
typedef void (*func_mindustry_io_MapIO$2_circle_int_arc_func_Intc2)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_io_MapIO$2_circle_int_arc_func_Cons 55
typedef void (*func_mindustry_io_MapIO$2_circle_int_arc_func_Cons)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_io_MapIO$2_getFloorColor_R_arc_graphics_Color 56
typedef jobject (*func_mindustry_io_MapIO$2_getFloorColor_R_arc_graphics_Color)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_recacheWall 57
typedef void (*func_mindustry_io_MapIO$2_recacheWall)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_recache 58
typedef void (*func_mindustry_io_MapIO$2_recache)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_remove 59
typedef void (*func_mindustry_io_MapIO$2_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_removeNet 60
typedef void (*func_mindustry_io_MapIO$2_removeNet)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_setNet_mindustry_world_Block 61
typedef void (*func_mindustry_io_MapIO$2_setNet_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_MapIO$2_setNet_mindustry_world_Block_mindustry_game_Team_int 62
typedef void (*func_mindustry_io_MapIO$2_setNet_mindustry_world_Block_mindustry_game_Team_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_mindustry_io_MapIO$2_setFloorNet_mindustry_world_Block_mindustry_world_Block 63
typedef void (*func_mindustry_io_MapIO$2_setFloorNet_mindustry_world_Block_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_io_MapIO$2_setFloorNet_mindustry_world_Block 64
typedef void (*func_mindustry_io_MapIO$2_setFloorNet_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_MapIO$2_setOverlayNet_mindustry_world_Block 65
typedef void (*func_mindustry_io_MapIO$2_setOverlayNet_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_MapIO$2_overlayID_R_short 66
typedef jshort (*func_mindustry_io_MapIO$2_overlayID_R_short)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_blockID_R_short 67
typedef jshort (*func_mindustry_io_MapIO$2_blockID_R_short)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_floorID_R_short 68
typedef jshort (*func_mindustry_io_MapIO$2_floorID_R_short)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_setOverlay_mindustry_world_Block 69
typedef void (*func_mindustry_io_MapIO$2_setOverlay_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_MapIO$2_setOverlayQuiet_mindustry_world_Block 70
typedef void (*func_mindustry_io_MapIO$2_setOverlayQuiet_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_MapIO$2_clearOverlay 71
typedef void (*func_mindustry_io_MapIO$2_clearOverlay)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_passable_R_boolean 72
typedef jbool (*func_mindustry_io_MapIO$2_passable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_synthetic_R_boolean 73
typedef jbool (*func_mindustry_io_MapIO$2_synthetic_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_solid_R_boolean 74
typedef jbool (*func_mindustry_io_MapIO$2_solid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_breakable_R_boolean 75
typedef jbool (*func_mindustry_io_MapIO$2_breakable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_dangerous_R_boolean 76
typedef jbool (*func_mindustry_io_MapIO$2_dangerous_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_isDeep_R_boolean 77
typedef jbool (*func_mindustry_io_MapIO$2_isDeep_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_getLinkedTiles_arc_func_Cons 78
typedef void (*func_mindustry_io_MapIO$2_getLinkedTiles_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_MapIO$2_getLinkedTiles_arc_struct_Seq_R_arc_struct_Seq 79
typedef jobject (*func_mindustry_io_MapIO$2_getLinkedTiles_arc_struct_Seq_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_MapIO$2_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq 80
typedef jobject (*func_mindustry_io_MapIO$2_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_io_MapIO$2_getLinkedTilesAs_mindustry_world_Block_arc_func_Cons 81
typedef void (*func_mindustry_io_MapIO$2_getLinkedTilesAs_mindustry_world_Block_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_io_MapIO$2_getHitbox_arc_math_geom_Rect_R_arc_math_geom_Rect 82
typedef jobject (*func_mindustry_io_MapIO$2_getHitbox_arc_math_geom_Rect_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_MapIO$2_getBounds_arc_math_geom_Rect_R_arc_math_geom_Rect 83
typedef jobject (*func_mindustry_io_MapIO$2_getBounds_arc_math_geom_Rect_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_MapIO$2_nearby_arc_math_geom_Point2_R_mindustry_world_Tile 84
typedef jobject (*func_mindustry_io_MapIO$2_nearby_arc_math_geom_Point2_R_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_MapIO$2_nearby_int_int_R_mindustry_world_Tile 85
typedef jobject (*func_mindustry_io_MapIO$2_nearby_int_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_io_MapIO$2_nearby_int_R_mindustry_world_Tile 86
typedef jobject (*func_mindustry_io_MapIO$2_nearby_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_io_MapIO$2_nearbyBuild_int_R_mindustry_gen_Building 87
typedef jobject (*func_mindustry_io_MapIO$2_nearbyBuild_int_R_mindustry_gen_Building)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_io_MapIO$2_interactable_mindustry_game_Team_R_boolean 88
typedef jbool (*func_mindustry_io_MapIO$2_interactable_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_MapIO$2_drop_R_mindustry_type_Item 89
typedef jobject (*func_mindustry_io_MapIO$2_drop_R_mindustry_type_Item)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_wallDrop_R_mindustry_type_Item 90
typedef jobject (*func_mindustry_io_MapIO$2_wallDrop_R_mindustry_type_Item)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_shouldSaveData_R_boolean 91
typedef jbool (*func_mindustry_io_MapIO$2_shouldSaveData_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_staticDarkness_R_int 92
typedef jint (*func_mindustry_io_MapIO$2_staticDarkness_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_legSolid_R_boolean 93
typedef jbool (*func_mindustry_io_MapIO$2_legSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_adjacentTo_mindustry_world_Tile_R_boolean 94
typedef jbool (*func_mindustry_io_MapIO$2_adjacentTo_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_io_MapIO$2_preChanged 95
typedef void (*func_mindustry_io_MapIO$2_preChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_changeBuild_mindustry_game_Team_arc_func_Prov_int 96
typedef void (*func_mindustry_io_MapIO$2_changeBuild_mindustry_game_Team_arc_func_Prov_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_mindustry_io_MapIO$2_changed 97
typedef void (*func_mindustry_io_MapIO$2_changed)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_fireChanged 98
typedef void (*func_mindustry_io_MapIO$2_fireChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_firePreChanged 99
typedef void (*func_mindustry_io_MapIO$2_firePreChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_getPackedData_R_long 100
typedef jlong (*func_mindustry_io_MapIO$2_getPackedData_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_io_MapIO$2_setPackedData_long 101
typedef void (*func_mindustry_io_MapIO$2_setPackedData_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_io_MapIO$2_lambda$display$0_mindustry_world_Block_arc_scene_ui_layout_Table 102
typedef void (*func_mindustry_io_MapIO$2_lambda$display$0_mindustry_world_Block_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_io_MapIO$2(jobject object, jint mark, jint depth);
void clinit_mindustry_io_MapIO$2(jcontext ctx);
void init_mindustry_io_MapIO$2_int_arc_graphics_Pixmap_arc_graphics_Pixmap_int(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jint param3);
void M_mindustry_io_MapIO$2_setBlock_mindustry_world_Block(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
