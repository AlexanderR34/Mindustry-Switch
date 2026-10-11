#ifndef HEADER_mindustry_editor_EditorTile
#define HEADER_mindustry_editor_EditorTile

#include "Clearwing.h"
#include "mindustry/world/Tile.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_editor_EditorTile {
	mindustry_world_Tile parent;
} mindustry_editor_EditorTile;

extern Class class_mindustry_editor_EditorTile;


#define VTABLE_mindustry_editor_EditorTile_hashCode_R_int 0
typedef jint (*func_mindustry_editor_EditorTile_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_editor_EditorTile_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTile_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_editor_EditorTile_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_editor_EditorTile_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_editor_EditorTile_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_finalize 5
typedef void (*func_mindustry_editor_EditorTile_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_notify 6
typedef void (*func_mindustry_editor_EditorTile_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_notifyAll 7
typedef void (*func_mindustry_editor_EditorTile_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_wait 8
typedef void (*func_mindustry_editor_EditorTile_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_wait_long 9
typedef void (*func_mindustry_editor_EditorTile_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_editor_EditorTile_wait_long_int 10
typedef void (*func_mindustry_editor_EditorTile_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_editor_EditorTile_getX_R_float 11
typedef jfloat (*func_mindustry_editor_EditorTile_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_getY_R_float 12
typedef jfloat (*func_mindustry_editor_EditorTile_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_angleTo_arc_math_geom_Position_R_float 13
typedef jfloat (*func_mindustry_editor_EditorTile_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTile_angleTo_float_float_R_float 14
typedef jfloat (*func_mindustry_editor_EditorTile_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_editor_EditorTile_dst2_arc_math_geom_Position_R_float 15
typedef jfloat (*func_mindustry_editor_EditorTile_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTile_dst_arc_math_geom_Position_R_float 16
typedef jfloat (*func_mindustry_editor_EditorTile_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTile_dst_float_float_R_float 17
typedef jfloat (*func_mindustry_editor_EditorTile_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_editor_EditorTile_dst2_float_float_R_float 18
typedef jfloat (*func_mindustry_editor_EditorTile_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_editor_EditorTile_within_arc_math_geom_Position_float_R_boolean 19
typedef jbool (*func_mindustry_editor_EditorTile_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_editor_EditorTile_within_float_float_float_R_boolean 20
typedef jbool (*func_mindustry_editor_EditorTile_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_editor_EditorTile_hitbox_arc_math_geom_Rect 21
typedef void (*func_mindustry_editor_EditorTile_hitbox_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTile_displayable_R_boolean 22
typedef jbool (*func_mindustry_editor_EditorTile_displayable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_display_arc_scene_ui_layout_Table 23
typedef void (*func_mindustry_editor_EditorTile_display_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTile_pos_R_int 24
typedef jint (*func_mindustry_editor_EditorTile_pos_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_array_R_int 25
typedef jint (*func_mindustry_editor_EditorTile_array_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_relativeTo_mindustry_world_Tile_R_byte 26
typedef jbyte (*func_mindustry_editor_EditorTile_relativeTo_mindustry_world_Tile_R_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTile_relativeTo_int_int_R_byte 27
typedef jbyte (*func_mindustry_editor_EditorTile_relativeTo_int_int_R_byte)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_editor_EditorTile_absoluteRelativeTo_int_int_R_byte 28
typedef jbyte (*func_mindustry_editor_EditorTile_absoluteRelativeTo_int_int_R_byte)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_editor_EditorTile_getFlammability_R_float 29
typedef jfloat (*func_mindustry_editor_EditorTile_getFlammability_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_inMapArea_R_boolean 30
typedef jbool (*func_mindustry_editor_EditorTile_inMapArea_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_worldx_R_float 31
typedef jfloat (*func_mindustry_editor_EditorTile_worldx_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_worldy_R_float 32
typedef jfloat (*func_mindustry_editor_EditorTile_worldy_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_drawx_R_float 33
typedef jfloat (*func_mindustry_editor_EditorTile_drawx_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_drawy_R_float 34
typedef jfloat (*func_mindustry_editor_EditorTile_drawy_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_isDarkened_R_boolean 35
typedef jbool (*func_mindustry_editor_EditorTile_isDarkened_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_floor_R_mindustry_world_blocks_environment_Floor 36
typedef jobject (*func_mindustry_editor_EditorTile_floor_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_block_R_mindustry_world_Block 37
typedef jobject (*func_mindustry_editor_EditorTile_block_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_overlay_R_mindustry_world_blocks_environment_Floor 38
typedef jobject (*func_mindustry_editor_EditorTile_overlay_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_updateBlockReference_mindustry_world_Block 39
typedef void (*func_mindustry_editor_EditorTile_updateBlockReference_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTile_cblock_R_mindustry_world_Block 40
typedef jobject (*func_mindustry_editor_EditorTile_cblock_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_team_R_mindustry_game_Team 41
typedef jobject (*func_mindustry_editor_EditorTile_team_R_mindustry_game_Team)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_setTeam_mindustry_game_Team 42
typedef void (*func_mindustry_editor_EditorTile_setTeam_mindustry_game_Team)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTile_isCenter_R_boolean 43
typedef jbool (*func_mindustry_editor_EditorTile_isCenter_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_centerX_R_int 44
typedef jint (*func_mindustry_editor_EditorTile_centerX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_centerY_R_int 45
typedef jint (*func_mindustry_editor_EditorTile_centerY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_getTeamID_R_int 46
typedef jint (*func_mindustry_editor_EditorTile_getTeamID_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_setBlock_mindustry_world_Block_mindustry_game_Team_int 47
typedef void (*func_mindustry_editor_EditorTile_setBlock_mindustry_world_Block_mindustry_game_Team_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_mindustry_editor_EditorTile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov 48
typedef void (*func_mindustry_editor_EditorTile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3);
#define VTABLE_mindustry_editor_EditorTile_setBlock_mindustry_world_Block_mindustry_game_Team 49
typedef void (*func_mindustry_editor_EditorTile_setBlock_mindustry_world_Block_mindustry_game_Team)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_editor_EditorTile_setBlock_mindustry_world_Block 50
typedef void (*func_mindustry_editor_EditorTile_setBlock_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTile_setFloor_mindustry_world_blocks_environment_Floor 51
typedef void (*func_mindustry_editor_EditorTile_setFloor_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTile_isEditorTile_R_boolean 52
typedef jbool (*func_mindustry_editor_EditorTile_isEditorTile_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_setAir 53
typedef void (*func_mindustry_editor_EditorTile_setAir)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_circle_int_arc_func_Intc2 54
typedef void (*func_mindustry_editor_EditorTile_circle_int_arc_func_Intc2)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_editor_EditorTile_circle_int_arc_func_Cons 55
typedef void (*func_mindustry_editor_EditorTile_circle_int_arc_func_Cons)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_editor_EditorTile_getFloorColor_R_arc_graphics_Color 56
typedef jobject (*func_mindustry_editor_EditorTile_getFloorColor_R_arc_graphics_Color)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_recacheWall 57
typedef void (*func_mindustry_editor_EditorTile_recacheWall)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_recache 58
typedef void (*func_mindustry_editor_EditorTile_recache)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_remove 59
typedef void (*func_mindustry_editor_EditorTile_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_removeNet 60
typedef void (*func_mindustry_editor_EditorTile_removeNet)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_setNet_mindustry_world_Block 61
typedef void (*func_mindustry_editor_EditorTile_setNet_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTile_setNet_mindustry_world_Block_mindustry_game_Team_int 62
typedef void (*func_mindustry_editor_EditorTile_setNet_mindustry_world_Block_mindustry_game_Team_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_mindustry_editor_EditorTile_setFloorNet_mindustry_world_Block_mindustry_world_Block 63
typedef void (*func_mindustry_editor_EditorTile_setFloorNet_mindustry_world_Block_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_editor_EditorTile_setFloorNet_mindustry_world_Block 64
typedef void (*func_mindustry_editor_EditorTile_setFloorNet_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTile_setOverlayNet_mindustry_world_Block 65
typedef void (*func_mindustry_editor_EditorTile_setOverlayNet_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTile_overlayID_R_short 66
typedef jshort (*func_mindustry_editor_EditorTile_overlayID_R_short)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_blockID_R_short 67
typedef jshort (*func_mindustry_editor_EditorTile_blockID_R_short)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_floorID_R_short 68
typedef jshort (*func_mindustry_editor_EditorTile_floorID_R_short)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_setOverlay_mindustry_world_Block 69
typedef void (*func_mindustry_editor_EditorTile_setOverlay_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTile_setOverlayQuiet_mindustry_world_Block 70
typedef void (*func_mindustry_editor_EditorTile_setOverlayQuiet_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTile_clearOverlay 71
typedef void (*func_mindustry_editor_EditorTile_clearOverlay)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_passable_R_boolean 72
typedef jbool (*func_mindustry_editor_EditorTile_passable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_synthetic_R_boolean 73
typedef jbool (*func_mindustry_editor_EditorTile_synthetic_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_solid_R_boolean 74
typedef jbool (*func_mindustry_editor_EditorTile_solid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_breakable_R_boolean 75
typedef jbool (*func_mindustry_editor_EditorTile_breakable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_dangerous_R_boolean 76
typedef jbool (*func_mindustry_editor_EditorTile_dangerous_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_isDeep_R_boolean 77
typedef jbool (*func_mindustry_editor_EditorTile_isDeep_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_getLinkedTiles_arc_func_Cons 78
typedef void (*func_mindustry_editor_EditorTile_getLinkedTiles_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTile_getLinkedTiles_arc_struct_Seq_R_arc_struct_Seq 79
typedef jobject (*func_mindustry_editor_EditorTile_getLinkedTiles_arc_struct_Seq_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTile_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq 80
typedef jobject (*func_mindustry_editor_EditorTile_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_editor_EditorTile_getLinkedTilesAs_mindustry_world_Block_arc_func_Cons 81
typedef void (*func_mindustry_editor_EditorTile_getLinkedTilesAs_mindustry_world_Block_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_editor_EditorTile_getHitbox_arc_math_geom_Rect_R_arc_math_geom_Rect 82
typedef jobject (*func_mindustry_editor_EditorTile_getHitbox_arc_math_geom_Rect_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTile_getBounds_arc_math_geom_Rect_R_arc_math_geom_Rect 83
typedef jobject (*func_mindustry_editor_EditorTile_getBounds_arc_math_geom_Rect_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile 84
typedef jobject (*func_mindustry_editor_EditorTile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTile_nearby_int_int_R_mindustry_world_Tile 85
typedef jobject (*func_mindustry_editor_EditorTile_nearby_int_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_editor_EditorTile_nearby_int_R_mindustry_world_Tile 86
typedef jobject (*func_mindustry_editor_EditorTile_nearby_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_editor_EditorTile_nearbyBuild_int_R_mindustry_gen_Building 87
typedef jobject (*func_mindustry_editor_EditorTile_nearbyBuild_int_R_mindustry_gen_Building)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_editor_EditorTile_interactable_mindustry_game_Team_R_boolean 88
typedef jbool (*func_mindustry_editor_EditorTile_interactable_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTile_drop_R_mindustry_type_Item 89
typedef jobject (*func_mindustry_editor_EditorTile_drop_R_mindustry_type_Item)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_wallDrop_R_mindustry_type_Item 90
typedef jobject (*func_mindustry_editor_EditorTile_wallDrop_R_mindustry_type_Item)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_shouldSaveData_R_boolean 91
typedef jbool (*func_mindustry_editor_EditorTile_shouldSaveData_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_staticDarkness_R_int 92
typedef jint (*func_mindustry_editor_EditorTile_staticDarkness_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_legSolid_R_boolean 93
typedef jbool (*func_mindustry_editor_EditorTile_legSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_adjacentTo_mindustry_world_Tile_R_boolean 94
typedef jbool (*func_mindustry_editor_EditorTile_adjacentTo_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTile_preChanged 95
typedef void (*func_mindustry_editor_EditorTile_preChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_changeBuild_mindustry_game_Team_arc_func_Prov_int 96
typedef void (*func_mindustry_editor_EditorTile_changeBuild_mindustry_game_Team_arc_func_Prov_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_mindustry_editor_EditorTile_changed 97
typedef void (*func_mindustry_editor_EditorTile_changed)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_fireChanged 98
typedef void (*func_mindustry_editor_EditorTile_fireChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_firePreChanged 99
typedef void (*func_mindustry_editor_EditorTile_firePreChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_getPackedData_R_long 100
typedef jlong (*func_mindustry_editor_EditorTile_getPackedData_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_setPackedData_long 101
typedef void (*func_mindustry_editor_EditorTile_setPackedData_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_editor_EditorTile_lambda$display$0_mindustry_world_Block_arc_scene_ui_layout_Table 102
typedef void (*func_mindustry_editor_EditorTile_lambda$display$0_mindustry_world_Block_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_editor_EditorTile_requiresBlockUpdate_mindustry_world_Block_R_boolean 103
typedef jbool (*func_mindustry_editor_EditorTile_requiresBlockUpdate_mindustry_world_Block_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTile_updateStatic 104
typedef void (*func_mindustry_editor_EditorTile_updateStatic)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_skip_R_boolean 105
typedef jbool (*func_mindustry_editor_EditorTile_skip_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTile_op_int_short 106
typedef void (*func_mindustry_editor_EditorTile_op_int_short)(jcontext ctx, jobject self, jint param0, jshort param1);

void mark_mindustry_editor_EditorTile(jobject object, jint mark, jint depth);
void clinit_mindustry_editor_EditorTile(jcontext ctx);
void init_mindustry_editor_EditorTile_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
void M_mindustry_editor_EditorTile_setFloor_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_editor_EditorTile_isEditorTile_R_boolean(jcontext ctx, jobject self);
void M_mindustry_editor_EditorTile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3);
void M_mindustry_editor_EditorTile_setTeam_mindustry_game_Team(jcontext ctx, jobject self, jobject param0);
void M_mindustry_editor_EditorTile_setOverlay_mindustry_world_Block(jcontext ctx, jobject self, jobject param0);
void M_mindustry_editor_EditorTile_fireChanged(jcontext ctx, jobject self);
void M_mindustry_editor_EditorTile_firePreChanged(jcontext ctx, jobject self);
void M_mindustry_editor_EditorTile_recache(jcontext ctx, jobject self);
void M_mindustry_editor_EditorTile_changed(jcontext ctx, jobject self);
void M_mindustry_editor_EditorTile_changeBuild_mindustry_game_Team_arc_func_Prov_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
jbool M_mindustry_editor_EditorTile_isDarkened_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_editor_EditorTile_requiresBlockUpdate_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_editor_EditorTile_updateStatic(jcontext ctx, jobject self);
jbool M_mindustry_editor_EditorTile_skip_R_boolean(jcontext ctx, jobject self);
void M_mindustry_editor_EditorTile_op_int_short(jcontext ctx, jobject self, jint param0, jshort param1);
void SM_mindustry_editor_EditorTile_lambda$setTeam$0_mindustry_world_Tile(jcontext ctx, jobject param0);
void SM_mindustry_editor_EditorTile_lambda$setBlock$1_mindustry_world_Tile(jcontext ctx, jobject param0);
void SM_mindustry_editor_EditorTile_lambda$setBlock$0_mindustry_world_Tile(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
