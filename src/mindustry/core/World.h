#ifndef HEADER_mindustry_core_World
#define HEADER_mindustry_core_World

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_core_World {
	java_lang_Object parent;
	jref F_context;
	jref F_tiles;
	jint F_tileChanges;
	jint F_floorChanges;
	jbool F_generating;
	jbool F_invalidMap;
	jref F_customMapLoaders;
} mindustry_core_World;

extern Class class_mindustry_core_World;


#define VTABLE_mindustry_core_World_hashCode_R_int 0
typedef jint (*func_mindustry_core_World_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_core_World_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_World_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_core_World_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_core_World_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_core_World_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World_finalize 5
typedef void (*func_mindustry_core_World_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World_notify 6
typedef void (*func_mindustry_core_World_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World_notifyAll 7
typedef void (*func_mindustry_core_World_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World_wait 8
typedef void (*func_mindustry_core_World_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World_wait_long 9
typedef void (*func_mindustry_core_World_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_core_World_wait_long_int 10
typedef void (*func_mindustry_core_World_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_core_World_addMapLoader_mindustry_maps_Map_java_lang_Runnable 11
typedef void (*func_mindustry_core_World_addMapLoader_mindustry_maps_Map_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_World_isInvalidMap_R_boolean 12
typedef jbool (*func_mindustry_core_World_isInvalidMap_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World_solid_int_int_R_boolean 13
typedef jbool (*func_mindustry_core_World_solid_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_core_World_passable_int_int_R_boolean 14
typedef jbool (*func_mindustry_core_World_passable_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_core_World_wallSolid_int_int_R_boolean 15
typedef jbool (*func_mindustry_core_World_wallSolid_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_core_World_wallSolidFull_int_int_R_boolean 16
typedef jbool (*func_mindustry_core_World_wallSolidFull_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_core_World_isAccessible_int_int_R_boolean 17
typedef jbool (*func_mindustry_core_World_isAccessible_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_core_World_width_R_int 18
typedef jint (*func_mindustry_core_World_width_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World_height_R_int 19
typedef jint (*func_mindustry_core_World_height_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World_unitWidth_R_int 20
typedef jint (*func_mindustry_core_World_unitWidth_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World_unitHeight_R_int 21
typedef jint (*func_mindustry_core_World_unitHeight_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World_floor_int_int_R_mindustry_world_blocks_environment_Floor 22
typedef jobject (*func_mindustry_core_World_floor_int_int_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_core_World_floorWorld_float_float_R_mindustry_world_blocks_environment_Floor 23
typedef jobject (*func_mindustry_core_World_floorWorld_float_float_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_core_World_tile_int_R_mindustry_world_Tile 24
typedef jobject (*func_mindustry_core_World_tile_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile 25
typedef jobject (*func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_core_World_tileBuilding_int_int_R_mindustry_world_Tile 26
typedef jobject (*func_mindustry_core_World_tileBuilding_int_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building 27
typedef jobject (*func_mindustry_core_World_build_int_int_R_mindustry_gen_Building)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building 28
typedef jobject (*func_mindustry_core_World_build_int_R_mindustry_gen_Building)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_core_World_rawTile_int_int_R_mindustry_world_Tile 29
typedef jobject (*func_mindustry_core_World_rawTile_int_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile 30
typedef jobject (*func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building 31
typedef jobject (*func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_core_World_buildWorld_arc_math_geom_Position_R_mindustry_gen_Building 32
typedef jobject (*func_mindustry_core_World_buildWorld_arc_math_geom_Position_R_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_World_packArray_int_int_R_int 33
typedef jint (*func_mindustry_core_World_packArray_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_core_World_clearBuildings 34
typedef void (*func_mindustry_core_World_clearBuildings)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World_resize_int_int_R_mindustry_world_Tiles 35
typedef jobject (*func_mindustry_core_World_resize_int_int_R_mindustry_world_Tiles)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_core_World_beginMapLoad 36
typedef void (*func_mindustry_core_World_beginMapLoad)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World_endMapLoad 37
typedef void (*func_mindustry_core_World_endMapLoad)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World_getQuadBounds_arc_math_geom_Rect_R_arc_math_geom_Rect 38
typedef jobject (*func_mindustry_core_World_getQuadBounds_arc_math_geom_Rect_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_World_setGenerating_boolean 39
typedef void (*func_mindustry_core_World_setGenerating_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_core_World_isGenerating_R_boolean 40
typedef jbool (*func_mindustry_core_World_isGenerating_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World_loadGenerator_int_int_arc_func_Cons 41
typedef void (*func_mindustry_core_World_loadGenerator_int_int_arc_func_Cons)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_mindustry_core_World_loadSector_mindustry_type_Sector 42
typedef void (*func_mindustry_core_World_loadSector_mindustry_type_Sector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_World_loadSector_mindustry_type_Sector_mindustry_world_WorldParams 43
typedef void (*func_mindustry_core_World_loadSector_mindustry_type_Sector_mindustry_world_WorldParams)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_World_setSectorRules_mindustry_type_Sector_boolean 44
typedef void (*func_mindustry_core_World_setSectorRules_mindustry_type_Sector_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_core_World_isInMapArea_int_int_R_boolean 45
typedef jbool (*func_mindustry_core_World_isInMapArea_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_core_World_filterContext_mindustry_maps_Map_R_mindustry_core_World$Context 46
typedef jobject (*func_mindustry_core_World_filterContext_mindustry_maps_Map_R_mindustry_core_World$Context)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_World_loadMap_mindustry_maps_Map 47
typedef void (*func_mindustry_core_World_loadMap_mindustry_maps_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_World_loadMap_mindustry_maps_Map_mindustry_game_Rules 48
typedef void (*func_mindustry_core_World_loadMap_mindustry_maps_Map_mindustry_game_Rules)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_World_addDarkness_mindustry_world_Tiles 49
typedef void (*func_mindustry_core_World_addDarkness_mindustry_world_Tiles)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_World_getWallDarkness_mindustry_world_Tile_R_byte 50
typedef jbyte (*func_mindustry_core_World_getWallDarkness_mindustry_world_Tile_R_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_World_checkMapArea_int_int_int_int 51
typedef void (*func_mindustry_core_World_checkMapArea_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_core_World_getDarkness_int_int_R_float 52
typedef jfloat (*func_mindustry_core_World_getDarkness_int_int_R_float)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_core_World_makeSectorContext_mindustry_type_Sector_R_mindustry_world_WorldContext 53
typedef jobject (*func_mindustry_core_World_makeSectorContext_mindustry_type_Sector_R_mindustry_world_WorldContext)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_World_lambda$new$2_mindustry_game_EventType$WorldLoadEvent 54
typedef void (*func_mindustry_core_World_lambda$new$2_mindustry_game_EventType$WorldLoadEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_World_lambda$new$1_mindustry_game_EventType$TileFloorChangeEvent 55
typedef void (*func_mindustry_core_World_lambda$new$1_mindustry_game_EventType$TileFloorChangeEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_World_lambda$new$0_mindustry_game_EventType$TileChangeEvent 56
typedef void (*func_mindustry_core_World_lambda$new$0_mindustry_game_EventType$TileChangeEvent)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_core_World(jobject object, jint mark, jint depth);
void clinit_mindustry_core_World(jcontext ctx);
void init_mindustry_core_World(jcontext ctx, jobject self);
void M_mindustry_core_World_addMapLoader_mindustry_maps_Map_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_mindustry_core_World_isInvalidMap_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_core_World_solid_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_mindustry_core_World_passable_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_mindustry_core_World_wallSolid_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_mindustry_core_World_wallSolidFull_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_mindustry_core_World_isAccessible_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jint M_mindustry_core_World_width_R_int(jcontext ctx, jobject self);
jint M_mindustry_core_World_height_R_int(jcontext ctx, jobject self);
jint M_mindustry_core_World_unitWidth_R_int(jcontext ctx, jobject self);
jint M_mindustry_core_World_unitHeight_R_int(jcontext ctx, jobject self);
jobject M_mindustry_core_World_floor_int_int_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_mindustry_core_World_floorWorld_float_float_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_mindustry_core_World_tile_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0);
jobject M_mindustry_core_World_tile_int_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_mindustry_core_World_tileBuilding_int_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_mindustry_core_World_build_int_int_R_mindustry_gen_Building(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_mindustry_core_World_build_int_R_mindustry_gen_Building(jcontext ctx, jobject self, jint param0);
jobject M_mindustry_core_World_rawTile_int_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_mindustry_core_World_buildWorld_arc_math_geom_Position_R_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0);
jfloat SM_mindustry_core_World_conv_float_R_float(jcontext ctx, jfloat param0);
jfloat SM_mindustry_core_World_unconv_float_R_float(jcontext ctx, jfloat param0);
jint SM_mindustry_core_World_toTile_float_R_int(jcontext ctx, jfloat param0);
jint M_mindustry_core_World_packArray_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_mindustry_core_World_clearBuildings(jcontext ctx, jobject self);
jobject M_mindustry_core_World_resize_int_int_R_mindustry_world_Tiles(jcontext ctx, jobject self, jint param0, jint param1);
void M_mindustry_core_World_beginMapLoad(jcontext ctx, jobject self);
void M_mindustry_core_World_endMapLoad(jcontext ctx, jobject self);
jobject M_mindustry_core_World_getQuadBounds_arc_math_geom_Rect_R_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_World_setGenerating_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_mindustry_core_World_isGenerating_R_boolean(jcontext ctx, jobject self);
void M_mindustry_core_World_loadGenerator_int_int_arc_func_Cons(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_mindustry_core_World_loadSector_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_World_loadSector_mindustry_type_Sector_mindustry_world_WorldParams(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_core_World_setSectorRules_mindustry_type_Sector_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jbool M_mindustry_core_World_isInMapArea_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_mindustry_core_World_filterContext_mindustry_maps_Map_R_mindustry_core_World$Context(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_World_loadMap_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_World_loadMap_mindustry_maps_Map_mindustry_game_Rules(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_core_World_addDarkness_mindustry_world_Tiles(jcontext ctx, jobject self, jobject param0);
jbyte M_mindustry_core_World_getWallDarkness_mindustry_world_Tile_R_byte(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_World_checkMapArea_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jfloat M_mindustry_core_World_getDarkness_int_int_R_float(jcontext ctx, jobject self, jint param0, jint param1);
void SM_mindustry_core_World_raycastEachWorld_float_float_float_float_arc_math_geom_Geometry$Raycaster(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
void SM_mindustry_core_World_raycastEach_int_int_int_int_arc_math_geom_Geometry$Raycaster(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4);
void SM_mindustry_core_World_raycastEachNoDiagonalWorld_float_float_float_float_arc_math_geom_Geometry$Raycaster(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
void SM_mindustry_core_World_raycastEachNoDiagonal_int_int_int_int_arc_math_geom_Geometry$Raycaster(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4);
jbool SM_mindustry_core_World_raycast_int_int_int_int_arc_math_geom_Geometry$Raycaster_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4);
jobject M_mindustry_core_World_makeSectorContext_mindustry_type_Sector_R_mindustry_world_WorldContext(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_core_World_lambda$loadMap$1(jcontext ctx);
void SM_mindustry_core_World_lambda$loadMap$0(jcontext ctx);
jint SM_mindustry_core_World_lambda$setSectorRules$0_mindustry_ctype_UnlockableContent_R_int(jcontext ctx, jobject param0);
void SM_mindustry_core_World_lambda$loadSector$0_mindustry_type_Sector_mindustry_world_WorldParams_mindustry_world_Tiles(jcontext ctx, jobject param0, jobject param1, jobject param2);
void M_mindustry_core_World_lambda$new$2_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_World_lambda$new$1_mindustry_game_EventType$TileFloorChangeEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_World_lambda$new$0_mindustry_game_EventType$TileChangeEvent(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
