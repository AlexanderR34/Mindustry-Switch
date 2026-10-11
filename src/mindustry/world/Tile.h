#ifndef HEADER_mindustry_world_Tile
#define HEADER_mindustry_world_Tile

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/math/geom/Position.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"
#include "mindustry/ui/Displayable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_Tile {
	java_lang_Object parent;
	jbyte F_data;
	jbyte F_floorData;
	jbyte F_overlayData;
	jint F_extraData;
	jref F_build;
	jshort F_x;
	jshort F_y;
	jref F_block;
	jref F_floor;
	jref F_overlay;
	jbool F_changing;
} mindustry_world_Tile;

extern Class class_mindustry_world_Tile;

extern jobject SF_mindustry_world_Tile_tileChange;
extern jobject SF_mindustry_world_Tile_preChange;
extern jobject SF_mindustry_world_Tile_floorChange;
extern jobject SF_mindustry_world_Tile_overlayChange;
extern jobject SF_mindustry_world_Tile_tileSet;
extern jobject SF_mindustry_world_Tile_staleGraphs;

#define VTABLE_mindustry_world_Tile_hashCode_R_int 0
typedef jint (*func_mindustry_world_Tile_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_Tile_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Tile_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_Tile_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_Tile_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_Tile_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_finalize 5
typedef void (*func_mindustry_world_Tile_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_notify 6
typedef void (*func_mindustry_world_Tile_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_notifyAll 7
typedef void (*func_mindustry_world_Tile_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_wait 8
typedef void (*func_mindustry_world_Tile_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_wait_long 9
typedef void (*func_mindustry_world_Tile_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_Tile_wait_long_int 10
typedef void (*func_mindustry_world_Tile_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_world_Tile_getX_R_float 11
typedef jfloat (*func_mindustry_world_Tile_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_getY_R_float 12
typedef jfloat (*func_mindustry_world_Tile_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_angleTo_arc_math_geom_Position_R_float 13
typedef jfloat (*func_mindustry_world_Tile_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Tile_angleTo_float_float_R_float 14
typedef jfloat (*func_mindustry_world_Tile_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_world_Tile_dst2_arc_math_geom_Position_R_float 15
typedef jfloat (*func_mindustry_world_Tile_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Tile_dst_arc_math_geom_Position_R_float 16
typedef jfloat (*func_mindustry_world_Tile_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Tile_dst_float_float_R_float 17
typedef jfloat (*func_mindustry_world_Tile_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_world_Tile_dst2_float_float_R_float 18
typedef jfloat (*func_mindustry_world_Tile_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_world_Tile_within_arc_math_geom_Position_float_R_boolean 19
typedef jbool (*func_mindustry_world_Tile_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_world_Tile_within_float_float_float_R_boolean 20
typedef jbool (*func_mindustry_world_Tile_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_world_Tile_hitbox_arc_math_geom_Rect 21
typedef void (*func_mindustry_world_Tile_hitbox_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Tile_displayable_R_boolean 22
typedef jbool (*func_mindustry_world_Tile_displayable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_display_arc_scene_ui_layout_Table 23
typedef void (*func_mindustry_world_Tile_display_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Tile_pos_R_int 24
typedef jint (*func_mindustry_world_Tile_pos_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_array_R_int 25
typedef jint (*func_mindustry_world_Tile_array_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_relativeTo_mindustry_world_Tile_R_byte 26
typedef jbyte (*func_mindustry_world_Tile_relativeTo_mindustry_world_Tile_R_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Tile_relativeTo_int_int_R_byte 27
typedef jbyte (*func_mindustry_world_Tile_relativeTo_int_int_R_byte)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_world_Tile_absoluteRelativeTo_int_int_R_byte 28
typedef jbyte (*func_mindustry_world_Tile_absoluteRelativeTo_int_int_R_byte)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_world_Tile_getFlammability_R_float 29
typedef jfloat (*func_mindustry_world_Tile_getFlammability_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_inMapArea_R_boolean 30
typedef jbool (*func_mindustry_world_Tile_inMapArea_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_worldx_R_float 31
typedef jfloat (*func_mindustry_world_Tile_worldx_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_worldy_R_float 32
typedef jfloat (*func_mindustry_world_Tile_worldy_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_drawx_R_float 33
typedef jfloat (*func_mindustry_world_Tile_drawx_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_drawy_R_float 34
typedef jfloat (*func_mindustry_world_Tile_drawy_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_isDarkened_R_boolean 35
typedef jbool (*func_mindustry_world_Tile_isDarkened_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor 36
typedef jobject (*func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block 37
typedef jobject (*func_mindustry_world_Tile_block_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor 38
typedef jobject (*func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_updateBlockReference_mindustry_world_Block 39
typedef void (*func_mindustry_world_Tile_updateBlockReference_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Tile_cblock_R_mindustry_world_Block 40
typedef jobject (*func_mindustry_world_Tile_cblock_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team 41
typedef jobject (*func_mindustry_world_Tile_team_R_mindustry_game_Team)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_setTeam_mindustry_game_Team 42
typedef void (*func_mindustry_world_Tile_setTeam_mindustry_game_Team)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Tile_isCenter_R_boolean 43
typedef jbool (*func_mindustry_world_Tile_isCenter_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_centerX_R_int 44
typedef jint (*func_mindustry_world_Tile_centerX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_centerY_R_int 45
typedef jint (*func_mindustry_world_Tile_centerY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_getTeamID_R_int 46
typedef jint (*func_mindustry_world_Tile_getTeamID_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int 47
typedef void (*func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov 48
typedef void (*func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3);
#define VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team 49
typedef void (*func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block 50
typedef void (*func_mindustry_world_Tile_setBlock_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor 51
typedef void (*func_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Tile_isEditorTile_R_boolean 52
typedef jbool (*func_mindustry_world_Tile_isEditorTile_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_setAir 53
typedef void (*func_mindustry_world_Tile_setAir)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_circle_int_arc_func_Intc2 54
typedef void (*func_mindustry_world_Tile_circle_int_arc_func_Intc2)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_world_Tile_circle_int_arc_func_Cons 55
typedef void (*func_mindustry_world_Tile_circle_int_arc_func_Cons)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color 56
typedef jobject (*func_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_recacheWall 57
typedef void (*func_mindustry_world_Tile_recacheWall)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_recache 58
typedef void (*func_mindustry_world_Tile_recache)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_remove 59
typedef void (*func_mindustry_world_Tile_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_removeNet 60
typedef void (*func_mindustry_world_Tile_removeNet)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_setNet_mindustry_world_Block 61
typedef void (*func_mindustry_world_Tile_setNet_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Tile_setNet_mindustry_world_Block_mindustry_game_Team_int 62
typedef void (*func_mindustry_world_Tile_setNet_mindustry_world_Block_mindustry_game_Team_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_mindustry_world_Tile_setFloorNet_mindustry_world_Block_mindustry_world_Block 63
typedef void (*func_mindustry_world_Tile_setFloorNet_mindustry_world_Block_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_Tile_setFloorNet_mindustry_world_Block 64
typedef void (*func_mindustry_world_Tile_setFloorNet_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Tile_setOverlayNet_mindustry_world_Block 65
typedef void (*func_mindustry_world_Tile_setOverlayNet_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Tile_overlayID_R_short 66
typedef jshort (*func_mindustry_world_Tile_overlayID_R_short)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_blockID_R_short 67
typedef jshort (*func_mindustry_world_Tile_blockID_R_short)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_floorID_R_short 68
typedef jshort (*func_mindustry_world_Tile_floorID_R_short)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block 69
typedef void (*func_mindustry_world_Tile_setOverlay_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Tile_setOverlayQuiet_mindustry_world_Block 70
typedef void (*func_mindustry_world_Tile_setOverlayQuiet_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Tile_clearOverlay 71
typedef void (*func_mindustry_world_Tile_clearOverlay)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_passable_R_boolean 72
typedef jbool (*func_mindustry_world_Tile_passable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_synthetic_R_boolean 73
typedef jbool (*func_mindustry_world_Tile_synthetic_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_solid_R_boolean 74
typedef jbool (*func_mindustry_world_Tile_solid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_breakable_R_boolean 75
typedef jbool (*func_mindustry_world_Tile_breakable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_dangerous_R_boolean 76
typedef jbool (*func_mindustry_world_Tile_dangerous_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_isDeep_R_boolean 77
typedef jbool (*func_mindustry_world_Tile_isDeep_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_getLinkedTiles_arc_func_Cons 78
typedef void (*func_mindustry_world_Tile_getLinkedTiles_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Tile_getLinkedTiles_arc_struct_Seq_R_arc_struct_Seq 79
typedef jobject (*func_mindustry_world_Tile_getLinkedTiles_arc_struct_Seq_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq 80
typedef jobject (*func_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_func_Cons 81
typedef void (*func_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_Tile_getHitbox_arc_math_geom_Rect_R_arc_math_geom_Rect 82
typedef jobject (*func_mindustry_world_Tile_getHitbox_arc_math_geom_Rect_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Tile_getBounds_arc_math_geom_Rect_R_arc_math_geom_Rect 83
typedef jobject (*func_mindustry_world_Tile_getBounds_arc_math_geom_Rect_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile 84
typedef jobject (*func_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Tile_nearby_int_int_R_mindustry_world_Tile 85
typedef jobject (*func_mindustry_world_Tile_nearby_int_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_world_Tile_nearby_int_R_mindustry_world_Tile 86
typedef jobject (*func_mindustry_world_Tile_nearby_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_world_Tile_nearbyBuild_int_R_mindustry_gen_Building 87
typedef jobject (*func_mindustry_world_Tile_nearbyBuild_int_R_mindustry_gen_Building)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_world_Tile_interactable_mindustry_game_Team_R_boolean 88
typedef jbool (*func_mindustry_world_Tile_interactable_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Tile_drop_R_mindustry_type_Item 89
typedef jobject (*func_mindustry_world_Tile_drop_R_mindustry_type_Item)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_wallDrop_R_mindustry_type_Item 90
typedef jobject (*func_mindustry_world_Tile_wallDrop_R_mindustry_type_Item)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_shouldSaveData_R_boolean 91
typedef jbool (*func_mindustry_world_Tile_shouldSaveData_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_staticDarkness_R_int 92
typedef jint (*func_mindustry_world_Tile_staticDarkness_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_legSolid_R_boolean 93
typedef jbool (*func_mindustry_world_Tile_legSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_adjacentTo_mindustry_world_Tile_R_boolean 94
typedef jbool (*func_mindustry_world_Tile_adjacentTo_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Tile_preChanged 95
typedef void (*func_mindustry_world_Tile_preChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_changeBuild_mindustry_game_Team_arc_func_Prov_int 96
typedef void (*func_mindustry_world_Tile_changeBuild_mindustry_game_Team_arc_func_Prov_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_mindustry_world_Tile_changed 97
typedef void (*func_mindustry_world_Tile_changed)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_fireChanged 98
typedef void (*func_mindustry_world_Tile_fireChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_firePreChanged 99
typedef void (*func_mindustry_world_Tile_firePreChanged)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_getPackedData_R_long 100
typedef jlong (*func_mindustry_world_Tile_getPackedData_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile_setPackedData_long 101
typedef void (*func_mindustry_world_Tile_setPackedData_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_Tile_lambda$display$0_mindustry_world_Block_arc_scene_ui_layout_Table 102
typedef void (*func_mindustry_world_Tile_lambda$display$0_mindustry_world_Block_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_world_Tile(jobject object, jint mark, jint depth);
void clinit_mindustry_world_Tile(jcontext ctx);
void init_mindustry_world_Tile_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void init_mindustry_world_Tile_int_int_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3, jobject param4);
void init_mindustry_world_Tile_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
jint M_mindustry_world_Tile_pos_R_int(jcontext ctx, jobject self);
jint M_mindustry_world_Tile_array_R_int(jcontext ctx, jobject self);
jbyte M_mindustry_world_Tile_relativeTo_mindustry_world_Tile_R_byte(jcontext ctx, jobject self, jobject param0);
jbyte M_mindustry_world_Tile_relativeTo_int_int_R_byte(jcontext ctx, jobject self, jint param0, jint param1);
jbyte SM_mindustry_world_Tile_relativeTo_int_int_int_int_R_byte(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
jint SM_mindustry_world_Tile_relativeTo_float_float_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jbyte M_mindustry_world_Tile_absoluteRelativeTo_int_int_R_byte(jcontext ctx, jobject self, jint param0, jint param1);
jfloat M_mindustry_world_Tile_getFlammability_R_float(jcontext ctx, jobject self);
jbool M_mindustry_world_Tile_inMapArea_R_boolean(jcontext ctx, jobject self);
jfloat M_mindustry_world_Tile_worldx_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_world_Tile_worldy_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_world_Tile_drawx_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_world_Tile_drawy_R_float(jcontext ctx, jobject self);
jbool M_mindustry_world_Tile_isDarkened_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self);
jobject M_mindustry_world_Tile_block_R_mindustry_world_Block(jcontext ctx, jobject self);
jobject M_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self);
void M_mindustry_world_Tile_updateBlockReference_mindustry_world_Block(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_world_Tile_cblock_R_mindustry_world_Block(jcontext ctx, jobject self);
jobject M_mindustry_world_Tile_team_R_mindustry_game_Team(jcontext ctx, jobject self);
void M_mindustry_world_Tile_setTeam_mindustry_game_Team(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_world_Tile_isCenter_R_boolean(jcontext ctx, jobject self);
jint M_mindustry_world_Tile_centerX_R_int(jcontext ctx, jobject self);
jint M_mindustry_world_Tile_centerY_R_int(jcontext ctx, jobject self);
jint M_mindustry_world_Tile_getTeamID_R_int(jcontext ctx, jobject self);
void M_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
void M_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3);
void M_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_world_Tile_setBlock_mindustry_world_Block(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_world_Tile_isEditorTile_R_boolean(jcontext ctx, jobject self);
void M_mindustry_world_Tile_setAir(jcontext ctx, jobject self);
void M_mindustry_world_Tile_circle_int_arc_func_Intc2(jcontext ctx, jobject self, jint param0, jobject param1);
void M_mindustry_world_Tile_circle_int_arc_func_Cons(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_mindustry_world_Tile_getFloorColor_R_arc_graphics_Color(jcontext ctx, jobject self);
void M_mindustry_world_Tile_recacheWall(jcontext ctx, jobject self);
void M_mindustry_world_Tile_recache(jcontext ctx, jobject self);
void M_mindustry_world_Tile_remove(jcontext ctx, jobject self);
void M_mindustry_world_Tile_removeNet(jcontext ctx, jobject self);
void M_mindustry_world_Tile_setNet_mindustry_world_Block(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_Tile_setNet_mindustry_world_Block_mindustry_game_Team_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
void M_mindustry_world_Tile_setFloorNet_mindustry_world_Block_mindustry_world_Block(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_world_Tile_setFloorNet_mindustry_world_Block(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_Tile_setOverlayNet_mindustry_world_Block(jcontext ctx, jobject self, jobject param0);
jshort M_mindustry_world_Tile_overlayID_R_short(jcontext ctx, jobject self);
jshort M_mindustry_world_Tile_blockID_R_short(jcontext ctx, jobject self);
jshort M_mindustry_world_Tile_floorID_R_short(jcontext ctx, jobject self);
void M_mindustry_world_Tile_setOverlay_mindustry_world_Block(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_Tile_setOverlayQuiet_mindustry_world_Block(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_Tile_clearOverlay(jcontext ctx, jobject self);
jbool M_mindustry_world_Tile_passable_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_world_Tile_synthetic_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_world_Tile_solid_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_world_Tile_breakable_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_world_Tile_dangerous_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_world_Tile_isDeep_R_boolean(jcontext ctx, jobject self);
void M_mindustry_world_Tile_getLinkedTiles_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_world_Tile_getLinkedTiles_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_world_Tile_getHitbox_arc_math_geom_Rect_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_world_Tile_getBounds_arc_math_geom_Rect_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_Tile_hitbox_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_world_Tile_nearby_arc_math_geom_Point2_R_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_world_Tile_nearby_int_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_mindustry_world_Tile_nearby_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0);
jobject M_mindustry_world_Tile_nearbyBuild_int_R_mindustry_gen_Building(jcontext ctx, jobject self, jint param0);
jbool M_mindustry_world_Tile_interactable_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_world_Tile_drop_R_mindustry_type_Item(jcontext ctx, jobject self);
jobject M_mindustry_world_Tile_wallDrop_R_mindustry_type_Item(jcontext ctx, jobject self);
jbool M_mindustry_world_Tile_shouldSaveData_R_boolean(jcontext ctx, jobject self);
jint M_mindustry_world_Tile_staticDarkness_R_int(jcontext ctx, jobject self);
jbool M_mindustry_world_Tile_legSolid_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_world_Tile_adjacentTo_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_Tile_preChanged(jcontext ctx, jobject self);
void M_mindustry_world_Tile_changeBuild_mindustry_game_Team_arc_func_Prov_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
void M_mindustry_world_Tile_changed(jcontext ctx, jobject self);
void M_mindustry_world_Tile_fireChanged(jcontext ctx, jobject self);
void M_mindustry_world_Tile_firePreChanged(jcontext ctx, jobject self);
jlong M_mindustry_world_Tile_getPackedData_R_long(jcontext ctx, jobject self);
void M_mindustry_world_Tile_setPackedData_long(jcontext ctx, jobject self, jlong param0);
void M_mindustry_world_Tile_display_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_world_Tile_displayable_R_boolean(jcontext ctx, jobject self);
jfloat M_mindustry_world_Tile_getX_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_world_Tile_getY_R_float(jcontext ctx, jobject self);
jobject M_mindustry_world_Tile_toString_R_java_lang_String(jcontext ctx, jobject self);
void SM_mindustry_world_Tile_setTileBlocks_mindustry_world_Block_mindustry_game_Team_Array1_int(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_world_Tile_setTileFloors_mindustry_world_Block_Array1_int(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_world_Tile_setTileOverlays_mindustry_world_Block_Array1_int(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_world_Tile_fillTileBlocks_int_int_int_int_mindustry_world_Block_mindustry_game_Team(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4, jobject param5);
void SM_mindustry_world_Tile_fillTileFloors_int_int_int_int_mindustry_world_Block(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4);
void SM_mindustry_world_Tile_fillTileOverlays_int_int_int_int_mindustry_world_Block(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4);
void SM_mindustry_world_Tile_setFloor_mindustry_world_Tile_mindustry_world_Block_mindustry_world_Block(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_world_Tile_setOverlay_mindustry_world_Tile_mindustry_world_Block(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_world_Tile_removeTile_mindustry_world_Tile(jcontext ctx, jobject param0);
void SM_mindustry_world_Tile_setTile_mindustry_world_Tile_mindustry_world_Block_mindustry_game_Team_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3);
void SM_mindustry_world_Tile_setTeam_mindustry_gen_Building_mindustry_game_Team(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_world_Tile_setTeams_Array1_int_mindustry_game_Team(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_world_Tile_reflowPower_mindustry_game_Team_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_world_Tile_buildDestroyed_mindustry_gen_Building(jcontext ctx, jobject param0);
void SM_mindustry_world_Tile_buildHealthUpdate_arc_struct_IntSeq(jcontext ctx, jobject param0);
void M_mindustry_world_Tile_lambda$display$0_mindustry_world_Block_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1);
void SM_mindustry_world_Tile_lambda$circle$0_arc_func_Cons_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
jfloat SM_mindustry_world_Tile_lambda$getFlammability$1_mindustry_type_Liquid_float_R_float(jcontext ctx, jobject param0, jfloat param1);
jfloat SM_mindustry_world_Tile_lambda$getFlammability$0_mindustry_type_Item_int_R_float(jcontext ctx, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
