#ifndef HEADER_mindustry_world_CachedTile
#define HEADER_mindustry_world_CachedTile

#include "Clearwing.h"
#include "mindustry/world/Tile.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_CachedTile {
	mindustry_world_Tile parent;
} mindustry_world_CachedTile;

extern Class class_mindustry_world_CachedTile;


#define VTABLE_mindustry_world_CachedTile_hashCode_R_int 0
typedef jint (*func_mindustry_world_CachedTile_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_CachedTile_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_CachedTile_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_CachedTile_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_CachedTile_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_CachedTile_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_finalize 5
typedef void (*func_mindustry_world_CachedTile_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_notify 6
typedef void (*func_mindustry_world_CachedTile_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_notifyAll 7
typedef void (*func_mindustry_world_CachedTile_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_wait 8
typedef void (*func_mindustry_world_CachedTile_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_wait_long 9
typedef void (*func_mindustry_world_CachedTile_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_CachedTile_wait_long_int 10
typedef void (*func_mindustry_world_CachedTile_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_world_CachedTile_getX_R_float 11
typedef jfloat (*func_mindustry_world_CachedTile_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_getY_R_float 12
typedef jfloat (*func_mindustry_world_CachedTile_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_angleTo_arc_math_geom_Position_R_float 13
typedef jfloat (*func_mindustry_world_CachedTile_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_CachedTile_angleTo_float_float_R_float 14
typedef jfloat (*func_mindustry_world_CachedTile_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_world_CachedTile_dst2_arc_math_geom_Position_R_float 15
typedef jfloat (*func_mindustry_world_CachedTile_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_CachedTile_dst_arc_math_geom_Position_R_float 16
typedef jfloat (*func_mindustry_world_CachedTile_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_CachedTile_dst_float_float_R_float 17
typedef jfloat (*func_mindustry_world_CachedTile_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_world_CachedTile_dst2_float_float_R_float 18
typedef jfloat (*func_mindustry_world_CachedTile_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_world_CachedTile_within_arc_math_geom_Position_float_R_boolean 19
typedef jbool (*func_mindustry_world_CachedTile_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_world_CachedTile_within_float_float_float_R_boolean 20
typedef jbool (*func_mindustry_world_CachedTile_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_world_CachedTile_hitbox_arc_math_geom_Rect 21
typedef void (*func_mindustry_world_CachedTile_hitbox_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_CachedTile_displayable_R_boolean 22
typedef jbool (*func_mindustry_world_CachedTile_displayable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_display_arc_scene_ui_layout_Table 23
typedef void (*func_mindustry_world_CachedTile_display_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_CachedTile_pos_R_int 24
typedef jint (*func_mindustry_world_CachedTile_pos_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_array_R_int 25
typedef jint (*func_mindustry_world_CachedTile_array_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_relativeTo_mindustry_world_Tile_R_byte 26
typedef jbyte (*func_mindustry_world_CachedTile_relativeTo_mindustry_world_Tile_R_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_CachedTile_relativeTo_int_int_R_byte 27
typedef jbyte (*func_mindustry_world_CachedTile_relativeTo_int_int_R_byte)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_world_CachedTile_absoluteRelativeTo_int_int_R_byte 28
typedef jbyte (*func_mindustry_world_CachedTile_absoluteRelativeTo_int_int_R_byte)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_world_CachedTile_getFlammability_R_float 29
typedef jfloat (*func_mindustry_world_CachedTile_getFlammability_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_inMapArea_R_boolean 30
typedef jbool (*func_mindustry_world_CachedTile_inMapArea_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_worldx_R_float 31
typedef jfloat (*func_mindustry_world_CachedTile_worldx_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_worldy_R_float 32
typedef jfloat (*func_mindustry_world_CachedTile_worldy_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_drawx_R_float 33
typedef jfloat (*func_mindustry_world_CachedTile_drawx_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_drawy_R_float 34
typedef jfloat (*func_mindustry_world_CachedTile_drawy_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_isDarkened_R_boolean 35
typedef jbool (*func_mindustry_world_CachedTile_isDarkened_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_floor_R_mindustry_world_blocks_environment_Floor 36
typedef jobject (*func_mindustry_world_CachedTile_floor_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_block_R_mindustry_world_Block 37
typedef jobject (*func_mindustry_world_CachedTile_block_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_overlay_R_mindustry_world_blocks_environment_Floor 38
typedef jobject (*func_mindustry_world_CachedTile_overlay_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_updateBlockReference_mindustry_world_Block 39
typedef void (*func_mindustry_world_CachedTile_updateBlockReference_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_CachedTile_cblock_R_mindustry_world_Block 40
typedef jobject (*func_mindustry_world_CachedTile_cblock_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_team_R_mindustry_game_Team 41
typedef jobject (*func_mindustry_world_CachedTile_team_R_mindustry_game_Team)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_setTeam_mindustry_game_Team 42
typedef void (*func_mindustry_world_CachedTile_setTeam_mindustry_game_Team)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_CachedTile_isCenter_R_boolean 43
typedef jbool (*func_mindustry_world_CachedTile_isCenter_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_centerX_R_int 44
typedef jint (*func_mindustry_world_CachedTile_centerX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_centerY_R_int 45
typedef jint (*func_mindustry_world_CachedTile_centerY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_getTeamID_R_int 46
typedef jint (*func_mindustry_world_CachedTile_getTeamID_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_setBlock_mindustry_world_Block_mindustry_game_Team_int 47
typedef void (*func_mindustry_world_CachedTile_setBlock_mindustry_world_Block_mindustry_game_Team_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_mindustry_world_CachedTile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov 48
typedef void (*func_mindustry_world_CachedTile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3);
#define VTABLE_mindustry_world_CachedTile_setBlock_mindustry_world_Block_mindustry_game_Team 49
typedef void (*func_mindustry_world_CachedTile_setBlock_mindustry_world_Block_mindustry_game_Team)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_CachedTile_setBlock_mindustry_world_Block 50
typedef void (*func_mindustry_world_CachedTile_setBlock_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_CachedTile_setFloor_mindustry_world_blocks_environment_Floor 51
typedef void (*func_mindustry_world_CachedTile_setFloor_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_CachedTile_isEditorTile_R_boolean 52
typedef jbool (*func_mindustry_world_CachedTile_isEditorTile_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_setAir 53
typedef void (*func_mindustry_world_CachedTile_setAir)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_circle_int_arc_func_Intc2 54
typedef void (*func_mindustry_world_CachedTile_circle_int_arc_func_Intc2)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_world_CachedTile_circle_int_arc_func_Cons 55
typedef void (*func_mindustry_world_CachedTile_circle_int_arc_func_Cons)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_world_CachedTile_getFloorColor_R_arc_graphics_Color 56
typedef jobject (*func_mindustry_world_CachedTile_getFloorColor_R_arc_graphics_Color)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_recacheWall 57
typedef void (*func_mindustry_world_CachedTile_recacheWall)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_recache 58
typedef void (*func_mindustry_world_CachedTile_recache)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_remove 59
typedef void (*func_mindustry_world_CachedTile_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_removeNet 60
typedef void (*func_mindustry_world_CachedTile_removeNet)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_setNet_mindustry_world_Block 61
typedef void (*func_mindustry_world_CachedTile_setNet_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_CachedTile_setNet_mindustry_world_Block_mindustry_game_Team_int 62
typedef void (*func_mindustry_world_CachedTile_setNet_mindustry_world_Block_mindustry_game_Team_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_mindustry_world_CachedTile_setFloorNet_mindustry_world_Block_mindustry_world_Block 63
typedef void (*func_mindustry_world_CachedTile_setFloorNet_mindustry_world_Block_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_CachedTile_setFloorNet_mindustry_world_Block 64
typedef void (*func_mindustry_world_CachedTile_setFloorNet_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_CachedTile_setOverlayNet_mindustry_world_Block 65
typedef void (*func_mindustry_world_CachedTile_setOverlayNet_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_CachedTile_overlayID_R_short 66
typedef jshort (*func_mindustry_world_CachedTile_overlayID_R_short)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_blockID_R_short 67
typedef jshort (*func_mindustry_world_CachedTile_blockID_R_short)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_floorID_R_short 68
typedef jshort (*func_mindustry_world_CachedTile_floorID_R_short)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_setOverlay_mindustry_world_Block 69
typedef void (*func_mindustry_world_CachedTile_setOverlay_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_CachedTile_setOverlayQuiet_mindustry_world_Block 70
typedef void (*func_mindustry_world_CachedTile_setOverlayQuiet_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_CachedTile_clearOverlay 71
typedef void (*func_mindustry_world_CachedTile_clearOverlay)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_passable_R_boolean 72
typedef jbool (*func_mindustry_world_CachedTile_passable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_synthetic_R_boolean 73
typedef jbool (*func_mindustry_world_CachedTile_synthetic_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_solid_R_boolean 74
typedef jbool (*func_mindustry_world_CachedTile_solid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_breakable_R_boolean 75
typedef jbool (*func_mindustry_world_CachedTile_breakable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_dangerous_R_boolean 76
typedef jbool (*func_mindustry_world_CachedTile_dangerous_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_isDeep_R_boolean 77
typedef jbool (*func_mindustry_world_CachedTile_isDeep_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_getLinkedTiles_arc_func_Cons 78
typedef void (*func_mindustry_world_CachedTile_getLinkedTiles_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_CachedTile_getLinkedTiles_arc_struct_Seq_R_arc_struct_Seq 79
typedef jobject (*func_mindustry_world_CachedTile_getLinkedTiles_arc_struct_Seq_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_CachedTile_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq 80
typedef jobject (*func_mindustry_world_CachedTile_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_CachedTile_getLinkedTilesAs_mindustry_world_Block_arc_func_Cons 81
typedef void (*func_mindustry_world_CachedTile_getLinkedTilesAs_mindustry_world_Block_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_CachedTile_getHitbox_arc_math_geom_Rect_R_arc_math_geom_Rect 82
typedef jobject (*func_mindustry_world_CachedTile_getHitbox_arc_math_geom_Rect_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_CachedTile_getBounds_arc_math_geom_Rect_R_arc_math_geom_Rect 83
typedef jobject (*func_mindustry_world_CachedTile_getBounds_arc_math_geom_Rect_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_CachedTile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile 84
typedef jobject (*func_mindustry_world_CachedTile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_CachedTile_nearby_int_int_R_mindustry_world_Tile 85
typedef jobject (*func_mindustry_world_CachedTile_nearby_int_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_world_CachedTile_nearby_int_R_mindustry_world_Tile 86
typedef jobject (*func_mindustry_world_CachedTile_nearby_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_world_CachedTile_nearbyBuild_int_R_mindustry_gen_Building 87
typedef jobject (*func_mindustry_world_CachedTile_nearbyBuild_int_R_mindustry_gen_Building)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_world_CachedTile_interactable_mindustry_game_Team_R_boolean 88
typedef jbool (*func_mindustry_world_CachedTile_interactable_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_CachedTile_drop_R_mindustry_type_Item 89
typedef jobject (*func_mindustry_world_CachedTile_drop_R_mindustry_type_Item)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_wallDrop_R_mindustry_type_Item 90
typedef jobject (*func_mindustry_world_CachedTile_wallDrop_R_mindustry_type_Item)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_shouldSaveData_R_boolean 91
typedef jbool (*func_mindustry_world_CachedTile_shouldSaveData_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_staticDarkness_R_int 92
typedef jint (*func_mindustry_world_CachedTile_staticDarkness_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_legSolid_R_boolean 93
typedef jbool (*func_mindustry_world_CachedTile_legSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_adjacentTo_mindustry_world_Tile_R_boolean 94
typedef jbool (*func_mindustry_world_CachedTile_adjacentTo_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_CachedTile_preChanged 95
typedef void (*func_mindustry_world_CachedTile_preChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_changeBuild_mindustry_game_Team_arc_func_Prov_int 96
typedef void (*func_mindustry_world_CachedTile_changeBuild_mindustry_game_Team_arc_func_Prov_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_mindustry_world_CachedTile_changed 97
typedef void (*func_mindustry_world_CachedTile_changed)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_fireChanged 98
typedef void (*func_mindustry_world_CachedTile_fireChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_firePreChanged 99
typedef void (*func_mindustry_world_CachedTile_firePreChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_getPackedData_R_long 100
typedef jlong (*func_mindustry_world_CachedTile_getPackedData_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_CachedTile_setPackedData_long 101
typedef void (*func_mindustry_world_CachedTile_setPackedData_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_CachedTile_lambda$display$0_mindustry_world_Block_arc_scene_ui_layout_Table 102
typedef void (*func_mindustry_world_CachedTile_lambda$display$0_mindustry_world_Block_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_world_CachedTile(jobject object, jint mark, jint depth);
void clinit_mindustry_world_CachedTile(jcontext ctx);
void init_mindustry_world_CachedTile(jcontext ctx, jobject self);
void M_mindustry_world_CachedTile_preChanged(jcontext ctx, jobject self);
void M_mindustry_world_CachedTile_changeBuild_mindustry_game_Team_arc_func_Prov_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);

#ifdef __cplusplus
}
#endif

#endif
