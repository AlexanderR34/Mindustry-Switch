#ifndef HEADER_mindustry_maps_generators_BasicGenerator
#define HEADER_mindustry_maps_generators_BasicGenerator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/maps/generators/WorldGenerator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_maps_generators_BasicGenerator {
	java_lang_Object parent;
	jref F_rand;
	jint F_width;
	jint F_height;
	jref F_tiles;
	jref F_floor;
	jref F_block;
	jref F_ore;
	jref F_defaultLoadout;
} mindustry_maps_generators_BasicGenerator;

extern Class class_mindustry_maps_generators_BasicGenerator;

extern jobject SF_mindustry_maps_generators_BasicGenerator_ints1;
extern jobject SF_mindustry_maps_generators_BasicGenerator_ints2;

#define VTABLE_mindustry_maps_generators_BasicGenerator_hashCode_R_int 0
typedef jint (*func_mindustry_maps_generators_BasicGenerator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_BasicGenerator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_maps_generators_BasicGenerator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_generators_BasicGenerator_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_maps_generators_BasicGenerator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_BasicGenerator_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_maps_generators_BasicGenerator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_BasicGenerator_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_maps_generators_BasicGenerator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_BasicGenerator_finalize 5
typedef void (*func_mindustry_maps_generators_BasicGenerator_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_BasicGenerator_notify 6
typedef void (*func_mindustry_maps_generators_BasicGenerator_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_BasicGenerator_notifyAll 7
typedef void (*func_mindustry_maps_generators_BasicGenerator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_BasicGenerator_wait 8
typedef void (*func_mindustry_maps_generators_BasicGenerator_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_BasicGenerator_wait_long 9
typedef void (*func_mindustry_maps_generators_BasicGenerator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_maps_generators_BasicGenerator_wait_long_int 10
typedef void (*func_mindustry_maps_generators_BasicGenerator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_maps_generators_BasicGenerator_generate_mindustry_world_Tiles_mindustry_world_WorldParams 11
typedef void (*func_mindustry_maps_generators_BasicGenerator_generate_mindustry_world_Tiles_mindustry_world_WorldParams)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_maps_generators_BasicGenerator_postGenerate_mindustry_world_Tiles 12
typedef void (*func_mindustry_maps_generators_BasicGenerator_postGenerate_mindustry_world_Tiles)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_generators_BasicGenerator_generate 13
typedef void (*func_mindustry_maps_generators_BasicGenerator_generate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_BasicGenerator_median_int 14
typedef void (*func_mindustry_maps_generators_BasicGenerator_median_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_maps_generators_BasicGenerator_median_int_double 15
typedef void (*func_mindustry_maps_generators_BasicGenerator_median_int_double)(jcontext ctx, jobject self, jint param0, jdouble param1);
#define VTABLE_mindustry_maps_generators_BasicGenerator_median_int_double_mindustry_world_Block 16
typedef void (*func_mindustry_maps_generators_BasicGenerator_median_int_double_mindustry_world_Block)(jcontext ctx, jobject self, jint param0, jdouble param1, jobject param2);
#define VTABLE_mindustry_maps_generators_BasicGenerator_ores_arc_struct_Seq 17
typedef void (*func_mindustry_maps_generators_BasicGenerator_ores_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_generators_BasicGenerator_ore_mindustry_world_Block_mindustry_world_Block_float_float 18
typedef void (*func_mindustry_maps_generators_BasicGenerator_ore_mindustry_world_Block_mindustry_world_Block_float_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_maps_generators_BasicGenerator_oreAround_mindustry_world_Block_mindustry_world_Block_int_float_float 19
typedef void (*func_mindustry_maps_generators_BasicGenerator_oreAround_mindustry_world_Block_mindustry_world_Block_int_float_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jfloat param3, jfloat param4);
#define VTABLE_mindustry_maps_generators_BasicGenerator_wallOre_mindustry_world_Block_mindustry_world_Block_float_float 20
typedef void (*func_mindustry_maps_generators_BasicGenerator_wallOre_mindustry_world_Block_mindustry_world_Block_float_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_maps_generators_BasicGenerator_cliffs 21
typedef void (*func_mindustry_maps_generators_BasicGenerator_cliffs)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_BasicGenerator_terrain_mindustry_world_Block_float_float_float 22
typedef void (*func_mindustry_maps_generators_BasicGenerator_terrain_mindustry_world_Block_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_maps_generators_BasicGenerator_noise_mindustry_world_Block_mindustry_world_Block_int_float_float_float 23
typedef void (*func_mindustry_maps_generators_BasicGenerator_noise_mindustry_world_Block_mindustry_world_Block_int_float_float_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jfloat param3, jfloat param4, jfloat param5);
#define VTABLE_mindustry_maps_generators_BasicGenerator_overlay_mindustry_world_Block_mindustry_world_Block_float_int_float_float_float 24
typedef void (*func_mindustry_maps_generators_BasicGenerator_overlay_mindustry_world_Block_mindustry_world_Block_float_int_float_float_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jint param3, jfloat param4, jfloat param5, jfloat param6);
#define VTABLE_mindustry_maps_generators_BasicGenerator_tech 25
typedef void (*func_mindustry_maps_generators_BasicGenerator_tech)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_BasicGenerator_tech_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block 26
typedef void (*func_mindustry_maps_generators_BasicGenerator_tech_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_maps_generators_BasicGenerator_distort_float_float 27
typedef void (*func_mindustry_maps_generators_BasicGenerator_distort_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_maps_generators_BasicGenerator_scatter_mindustry_world_Block_mindustry_world_Block_float 28
typedef void (*func_mindustry_maps_generators_BasicGenerator_scatter_mindustry_world_Block_mindustry_world_Block_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);
#define VTABLE_mindustry_maps_generators_BasicGenerator_each_arc_func_Intc2 29
typedef void (*func_mindustry_maps_generators_BasicGenerator_each_arc_func_Intc2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_generators_BasicGenerator_cells_int 30
typedef void (*func_mindustry_maps_generators_BasicGenerator_cells_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_maps_generators_BasicGenerator_cells_int_int_int_int 31
typedef void (*func_mindustry_maps_generators_BasicGenerator_cells_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_R_float 32
typedef jfloat (*func_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jdouble param2, jdouble param3);
#define VTABLE_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_double_R_float 33
typedef jfloat (*func_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_double_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jdouble param2, jdouble param3, jdouble param4, jdouble param5);
#define VTABLE_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_R_float 34
typedef jfloat (*func_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jdouble param2, jdouble param3, jdouble param4);
#define VTABLE_mindustry_maps_generators_BasicGenerator_pass_arc_func_Intc2 35
typedef void (*func_mindustry_maps_generators_BasicGenerator_pass_arc_func_Intc2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_generators_BasicGenerator_nearWall_int_int_R_boolean 36
typedef jbool (*func_mindustry_maps_generators_BasicGenerator_nearWall_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_maps_generators_BasicGenerator_nearAir_int_int_R_boolean 37
typedef jbool (*func_mindustry_maps_generators_BasicGenerator_nearAir_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_maps_generators_BasicGenerator_removeWall_int_int_int_arc_func_Boolf 38
typedef void (*func_mindustry_maps_generators_BasicGenerator_removeWall_int_int_int_arc_func_Boolf)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_mindustry_maps_generators_BasicGenerator_near_int_int_int_mindustry_world_Block_R_boolean 39
typedef jbool (*func_mindustry_maps_generators_BasicGenerator_near_int_int_int_mindustry_world_Block_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_mindustry_maps_generators_BasicGenerator_decoration_float 40
typedef void (*func_mindustry_maps_generators_BasicGenerator_decoration_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_maps_generators_BasicGenerator_blend_mindustry_world_Block_mindustry_world_Block_float 41
typedef void (*func_mindustry_maps_generators_BasicGenerator_blend_mindustry_world_Block_mindustry_world_Block_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);
#define VTABLE_mindustry_maps_generators_BasicGenerator_brush_arc_struct_Seq_int 42
typedef void (*func_mindustry_maps_generators_BasicGenerator_brush_arc_struct_Seq_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_maps_generators_BasicGenerator_erase_int_int_int 43
typedef void (*func_mindustry_maps_generators_BasicGenerator_erase_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_mindustry_maps_generators_BasicGenerator_pathfind_int_int_int_int_mindustry_ai_Astar$TileHeuristic_mindustry_ai_Astar$DistanceHeuristic_R_arc_struct_Seq 44
typedef jobject (*func_mindustry_maps_generators_BasicGenerator_pathfind_int_int_int_int_mindustry_ai_Astar$TileHeuristic_mindustry_ai_Astar$DistanceHeuristic_R_arc_struct_Seq)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4, jobject param5);
#define VTABLE_mindustry_maps_generators_BasicGenerator_trimDark 45
typedef void (*func_mindustry_maps_generators_BasicGenerator_trimDark)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_BasicGenerator_inverseFloodFill_mindustry_world_Tile 46
typedef void (*func_mindustry_maps_generators_BasicGenerator_inverseFloodFill_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_generators_BasicGenerator_lambda$brush$0_int_mindustry_world_Tile 47
typedef void (*func_mindustry_maps_generators_BasicGenerator_lambda$brush$0_int_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_maps_generators_BasicGenerator_lambda$decoration$0_float_int_int 48
typedef void (*func_mindustry_maps_generators_BasicGenerator_lambda$decoration$0_float_int_int)(jcontext ctx, jobject self, jfloat param0, jint param1, jint param2);
#define VTABLE_mindustry_maps_generators_BasicGenerator_lambda$cells$1_int_arc_struct_GridBits_arc_struct_GridBits_int_int_int_int 49
typedef void (*func_mindustry_maps_generators_BasicGenerator_lambda$cells$1_int_arc_struct_GridBits_arc_struct_GridBits_int_int_int_int)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jint param3, jint param4, jint param5, jint param6);
#define VTABLE_mindustry_maps_generators_BasicGenerator_lambda$cells$0_arc_struct_GridBits_int_int 50
typedef void (*func_mindustry_maps_generators_BasicGenerator_lambda$cells$0_arc_struct_GridBits_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_mindustry_maps_generators_BasicGenerator_lambda$scatter$0_float_mindustry_world_Block_mindustry_world_Block_int_int 51
typedef void (*func_mindustry_maps_generators_BasicGenerator_lambda$scatter$0_float_mindustry_world_Block_mindustry_world_Block_int_int)(jcontext ctx, jobject self, jfloat param0, jobject param1, jobject param2, jint param3, jint param4);
#define VTABLE_mindustry_maps_generators_BasicGenerator_lambda$distort$0_float_float_Array1_short_Array1_short_int_int 52
typedef void (*func_mindustry_maps_generators_BasicGenerator_lambda$distort$0_float_float_Array1_short_Array1_short_int_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jobject param3, jint param4, jint param5);
#define VTABLE_mindustry_maps_generators_BasicGenerator_lambda$tech$0_int_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block_int_int 53
typedef void (*func_mindustry_maps_generators_BasicGenerator_lambda$tech$0_int_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block_int_int)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jobject param3, jint param4, jint param5);
#define VTABLE_mindustry_maps_generators_BasicGenerator_lambda$overlay$0_int_float_float_float_float_mindustry_world_Block_mindustry_world_Block_int_int 54
typedef void (*func_mindustry_maps_generators_BasicGenerator_lambda$overlay$0_int_float_float_float_float_mindustry_world_Block_mindustry_world_Block_int_int)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5, jobject param6, jint param7, jint param8);
#define VTABLE_mindustry_maps_generators_BasicGenerator_lambda$noise$0_int_float_float_float_mindustry_world_Block_mindustry_world_Block_int_int 55
typedef void (*func_mindustry_maps_generators_BasicGenerator_lambda$noise$0_int_float_float_float_mindustry_world_Block_mindustry_world_Block_int_int)(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5, jint param6, jint param7);
#define VTABLE_mindustry_maps_generators_BasicGenerator_lambda$terrain$0_float_float_float_mindustry_world_Block_int_int 56
typedef void (*func_mindustry_maps_generators_BasicGenerator_lambda$terrain$0_float_float_float_mindustry_world_Block_int_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jint param4, jint param5);
#define VTABLE_mindustry_maps_generators_BasicGenerator_lambda$wallOre$0_float_float_mindustry_world_Block_boolean_mindustry_world_Block_int_int 57
typedef void (*func_mindustry_maps_generators_BasicGenerator_lambda$wallOre$0_float_float_mindustry_world_Block_boolean_mindustry_world_Block_int_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jbool param3, jobject param4, jint param5, jint param6);
#define VTABLE_mindustry_maps_generators_BasicGenerator_lambda$ore$0_mindustry_world_Block_float_float_mindustry_world_Block_int_int 58
typedef void (*func_mindustry_maps_generators_BasicGenerator_lambda$ore$0_mindustry_world_Block_float_float_mindustry_world_Block_int_int)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jobject param3, jint param4, jint param5);
#define VTABLE_mindustry_maps_generators_BasicGenerator_lambda$ores$0_arc_struct_Seq_int_int 59
typedef void (*func_mindustry_maps_generators_BasicGenerator_lambda$ores$0_arc_struct_Seq_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_mindustry_maps_generators_BasicGenerator_lambda$median$2_mindustry_world_Block_Array1_short_Array1_short_int_int 60
typedef void (*func_mindustry_maps_generators_BasicGenerator_lambda$median$2_mindustry_world_Block_Array1_short_Array1_short_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jint param4);
#define VTABLE_mindustry_maps_generators_BasicGenerator_lambda$median$0_mindustry_world_Block_int_Array1_short_double_Array1_short_int_int 61
typedef void (*func_mindustry_maps_generators_BasicGenerator_lambda$median$0_mindustry_world_Block_int_Array1_short_double_Array1_short_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jdouble param3, jobject param4, jint param5, jint param6);
#define VTABLE_mindustry_maps_generators_BasicGenerator_lambda$median$1_int_int 62
typedef void (*func_mindustry_maps_generators_BasicGenerator_lambda$median$1_int_int)(jcontext ctx, jobject self, jint param0, jint param1);

void mark_mindustry_maps_generators_BasicGenerator(jobject object, jint mark, jint depth);
void clinit_mindustry_maps_generators_BasicGenerator(jcontext ctx);
void init_mindustry_maps_generators_BasicGenerator(jcontext ctx, jobject self);
void M_mindustry_maps_generators_BasicGenerator_generate_mindustry_world_Tiles_mindustry_world_WorldParams(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_maps_generators_BasicGenerator_generate(jcontext ctx, jobject self);
void M_mindustry_maps_generators_BasicGenerator_median_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_maps_generators_BasicGenerator_median_int_double(jcontext ctx, jobject self, jint param0, jdouble param1);
void M_mindustry_maps_generators_BasicGenerator_median_int_double_mindustry_world_Block(jcontext ctx, jobject self, jint param0, jdouble param1, jobject param2);
void M_mindustry_maps_generators_BasicGenerator_ores_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_maps_generators_BasicGenerator_ore_mindustry_world_Block_mindustry_world_Block_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3);
void M_mindustry_maps_generators_BasicGenerator_oreAround_mindustry_world_Block_mindustry_world_Block_int_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jfloat param3, jfloat param4);
void M_mindustry_maps_generators_BasicGenerator_wallOre_mindustry_world_Block_mindustry_world_Block_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3);
void M_mindustry_maps_generators_BasicGenerator_cliffs(jcontext ctx, jobject self);
void M_mindustry_maps_generators_BasicGenerator_terrain_mindustry_world_Block_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
void M_mindustry_maps_generators_BasicGenerator_noise_mindustry_world_Block_mindustry_world_Block_int_float_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jfloat param3, jfloat param4, jfloat param5);
void M_mindustry_maps_generators_BasicGenerator_overlay_mindustry_world_Block_mindustry_world_Block_float_int_float_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jint param3, jfloat param4, jfloat param5, jfloat param6);
void M_mindustry_maps_generators_BasicGenerator_tech(jcontext ctx, jobject self);
void M_mindustry_maps_generators_BasicGenerator_tech_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_maps_generators_BasicGenerator_distort_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_maps_generators_BasicGenerator_scatter_mindustry_world_Block_mindustry_world_Block_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);
void M_mindustry_maps_generators_BasicGenerator_each_arc_func_Intc2(jcontext ctx, jobject self, jobject param0);
void M_mindustry_maps_generators_BasicGenerator_cells_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_maps_generators_BasicGenerator_cells_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jfloat M_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jdouble param2, jdouble param3);
jfloat M_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jdouble param2, jdouble param3, jdouble param4);
void M_mindustry_maps_generators_BasicGenerator_pass_arc_func_Intc2(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_maps_generators_BasicGenerator_nearWall_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_mindustry_maps_generators_BasicGenerator_nearAir_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
void M_mindustry_maps_generators_BasicGenerator_removeWall_int_int_int_arc_func_Boolf(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
jbool M_mindustry_maps_generators_BasicGenerator_near_int_int_int_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
void M_mindustry_maps_generators_BasicGenerator_decoration_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_maps_generators_BasicGenerator_blend_mindustry_world_Block_mindustry_world_Block_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);
void M_mindustry_maps_generators_BasicGenerator_brush_arc_struct_Seq_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_mindustry_maps_generators_BasicGenerator_erase_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
jobject M_mindustry_maps_generators_BasicGenerator_pathfind_int_int_int_int_mindustry_ai_Astar$TileHeuristic_mindustry_ai_Astar$DistanceHeuristic_R_arc_struct_Seq(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4, jobject param5);
void M_mindustry_maps_generators_BasicGenerator_trimDark(jcontext ctx, jobject self);
void M_mindustry_maps_generators_BasicGenerator_inverseFloodFill_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_maps_generators_BasicGenerator_lambda$pathfind$0_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0);
void M_mindustry_maps_generators_BasicGenerator_lambda$brush$0_int_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jobject param1);
void M_mindustry_maps_generators_BasicGenerator_lambda$decoration$0_float_int_int(jcontext ctx, jobject self, jfloat param0, jint param1, jint param2);
void M_mindustry_maps_generators_BasicGenerator_lambda$cells$1_int_arc_struct_GridBits_arc_struct_GridBits_int_int_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jint param3, jint param4, jint param5, jint param6);
void M_mindustry_maps_generators_BasicGenerator_lambda$cells$0_arc_struct_GridBits_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_mindustry_maps_generators_BasicGenerator_lambda$scatter$0_float_mindustry_world_Block_mindustry_world_Block_int_int(jcontext ctx, jobject self, jfloat param0, jobject param1, jobject param2, jint param3, jint param4);
void M_mindustry_maps_generators_BasicGenerator_lambda$distort$0_float_float_Array1_short_Array1_short_int_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jobject param3, jint param4, jint param5);
void M_mindustry_maps_generators_BasicGenerator_lambda$tech$0_int_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block_int_int(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jobject param3, jint param4, jint param5);
void M_mindustry_maps_generators_BasicGenerator_lambda$overlay$0_int_float_float_float_float_mindustry_world_Block_mindustry_world_Block_int_int(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5, jobject param6, jint param7, jint param8);
void M_mindustry_maps_generators_BasicGenerator_lambda$noise$0_int_float_float_float_mindustry_world_Block_mindustry_world_Block_int_int(jcontext ctx, jobject self, jint param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5, jint param6, jint param7);
void M_mindustry_maps_generators_BasicGenerator_lambda$terrain$0_float_float_float_mindustry_world_Block_int_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jobject param3, jint param4, jint param5);
void M_mindustry_maps_generators_BasicGenerator_lambda$wallOre$0_float_float_mindustry_world_Block_boolean_mindustry_world_Block_int_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2, jbool param3, jobject param4, jint param5, jint param6);
void M_mindustry_maps_generators_BasicGenerator_lambda$ore$0_mindustry_world_Block_float_float_mindustry_world_Block_int_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jobject param3, jint param4, jint param5);
void M_mindustry_maps_generators_BasicGenerator_lambda$ores$0_arc_struct_Seq_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_mindustry_maps_generators_BasicGenerator_lambda$median$2_mindustry_world_Block_Array1_short_Array1_short_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jint param4);
void M_mindustry_maps_generators_BasicGenerator_lambda$median$0_mindustry_world_Block_int_Array1_short_double_Array1_short_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jdouble param3, jobject param4, jint param5, jint param6);
void M_mindustry_maps_generators_BasicGenerator_lambda$median$1_int_int(jcontext ctx, jobject self, jint param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
