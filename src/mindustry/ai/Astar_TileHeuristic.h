#ifndef HEADER_mindustry_ai_Astar$TileHeuristic
#define HEADER_mindustry_ai_Astar$TileHeuristic

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ai_Astar$TileHeuristic {
	java_lang_Object parent;
} mindustry_ai_Astar$TileHeuristic;

extern Class class_mindustry_ai_Astar$TileHeuristic;


#define INDEX_mindustry_ai_Astar$TileHeuristic_cost_mindustry_world_Tile_R_float 0
typedef jfloat (*func_mindustry_ai_Astar$TileHeuristic_cost_mindustry_world_Tile_R_float)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_ai_Astar$TileHeuristic_cost_mindustry_world_Tile_mindustry_world_Tile_R_float 1
typedef jfloat (*func_mindustry_ai_Astar$TileHeuristic_cost_mindustry_world_Tile_mindustry_world_Tile_R_float)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_ai_Astar$TileHeuristic(jobject object, jint mark, jint depth);
void clinit_mindustry_ai_Astar$TileHeuristic(jcontext ctx);
jfloat M_mindustry_ai_Astar$TileHeuristic_cost_mindustry_world_Tile_mindustry_world_Tile_R_float(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
