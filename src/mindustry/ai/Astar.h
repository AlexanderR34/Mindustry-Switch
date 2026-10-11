#ifndef HEADER_mindustry_ai_Astar
#define HEADER_mindustry_ai_Astar

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ai_Astar {
	java_lang_Object parent;
} mindustry_ai_Astar;

extern Class class_mindustry_ai_Astar;

extern jobject SF_mindustry_ai_Astar_manhattan;
extern jobject SF_mindustry_ai_Astar_out;
extern jobject SF_mindustry_ai_Astar_queue;
extern jobject SF_mindustry_ai_Astar_costs;
extern jobject SF_mindustry_ai_Astar_rotations;

#define VTABLE_mindustry_ai_Astar_hashCode_R_int 0
typedef jint (*func_mindustry_ai_Astar_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Astar_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ai_Astar_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_Astar_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ai_Astar_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Astar_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ai_Astar_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Astar_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ai_Astar_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Astar_finalize 5
typedef void (*func_mindustry_ai_Astar_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Astar_notify 6
typedef void (*func_mindustry_ai_Astar_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Astar_notifyAll 7
typedef void (*func_mindustry_ai_Astar_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Astar_wait 8
typedef void (*func_mindustry_ai_Astar_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Astar_wait_long 9
typedef void (*func_mindustry_ai_Astar_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ai_Astar_wait_long_int 10
typedef void (*func_mindustry_ai_Astar_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_ai_Astar(jobject object, jint mark, jint depth);
void clinit_mindustry_ai_Astar(jcontext ctx);
void init_mindustry_ai_Astar(jcontext ctx, jobject self);
jobject SM_mindustry_ai_Astar_pathfind_mindustry_world_Tile_mindustry_world_Tile_mindustry_ai_Astar$TileHeuristic_arc_func_Boolf_R_arc_struct_Seq(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jobject SM_mindustry_ai_Astar_pathfind_int_int_int_int_mindustry_ai_Astar$TileHeuristic_arc_func_Boolf_R_arc_struct_Seq(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4, jobject param5);
jobject SM_mindustry_ai_Astar_pathfind_int_int_int_int_mindustry_ai_Astar$TileHeuristic_mindustry_ai_Astar$DistanceHeuristic_arc_func_Boolf_R_arc_struct_Seq(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4, jobject param5, jobject param6);
jfloat SM_mindustry_ai_Astar_lambda$pathfind$0_mindustry_ai_Astar$DistanceHeuristic_mindustry_world_Tile_mindustry_world_Tile_R_float(jcontext ctx, jobject param0, jobject param1, jobject param2);
jint SM_mindustry_ai_Astar_lambda$static$1_mindustry_world_Tile_mindustry_world_Tile_R_int(jcontext ctx, jobject param0, jobject param1);
jfloat SM_mindustry_ai_Astar_lambda$static$0_int_int_int_int_R_float(jcontext ctx, jint param0, jint param1, jint param2, jint param3);

#ifdef __cplusplus
}
#endif

#endif
