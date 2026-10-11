#ifndef HEADER_mindustry_ai_ControlPathfinder
#define HEADER_mindustry_ai_ControlPathfinder

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Runnable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ai_ControlPathfinder {
	java_lang_Object parent;
	jref F_clusters;
	jint F_cwidth;
	jint F_cheight;
	jref F_usedEdges;
	jref F_queue;
	jref F_unitRequests;
	jref F_threadPathRequests;
	jref F_fields;
	jref F_fieldList;
	jref F_innerCosts;
	jref F_innerFrontier;
	jref F_clustersToUpdate;
	jref F_clustersToInnerUpdate;
	jref F_invalidRequests;
	jref F_thread;
	volatile jbool F_invalidated;
} mindustry_ai_ControlPathfinder;

extern Class class_mindustry_ai_ControlPathfinder;

extern jint SF_mindustry_ai_ControlPathfinder_wallImpassableCap;
extern jint SF_mindustry_ai_ControlPathfinder_solidCap;
extern jbool SF_mindustry_ai_ControlPathfinder_initialized;
extern jbool SF_mindustry_ai_ControlPathfinder_showDebug;
extern jobject SF_mindustry_ai_ControlPathfinder_costGround;
extern jobject SF_mindustry_ai_ControlPathfinder_costHover;
extern jobject SF_mindustry_ai_ControlPathfinder_costLegs;
extern jobject SF_mindustry_ai_ControlPathfinder_costNaval;
extern jint SF_mindustry_ai_ControlPathfinder_costIdGround;
extern jint SF_mindustry_ai_ControlPathfinder_costIdHover;
extern jint SF_mindustry_ai_ControlPathfinder_costIdLegs;
extern jint SF_mindustry_ai_ControlPathfinder_costIdNaval;
extern jobject SF_mindustry_ai_ControlPathfinder_costTypes;
extern jlong SF_mindustry_ai_ControlPathfinder_maxUpdate;
extern jint SF_mindustry_ai_ControlPathfinder_updateStepInterval;
extern jint SF_mindustry_ai_ControlPathfinder_updateFPS;
extern jint SF_mindustry_ai_ControlPathfinder_updateInterval;
extern jint SF_mindustry_ai_ControlPathfinder_invalidateCheckInterval;
extern jobject SF_mindustry_ai_ControlPathfinder_pathResult;
extern jint SF_mindustry_ai_ControlPathfinder_clusterSize;
extern jobject SF_mindustry_ai_ControlPathfinder_offsets;
extern jobject SF_mindustry_ai_ControlPathfinder_moveDirs;
extern jobject SF_mindustry_ai_ControlPathfinder_nextOffsets;

#define VTABLE_mindustry_ai_ControlPathfinder_hashCode_R_int 0
typedef jint (*func_mindustry_ai_ControlPathfinder_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ai_ControlPathfinder_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_ControlPathfinder_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ai_ControlPathfinder_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ai_ControlPathfinder_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ai_ControlPathfinder_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder_finalize 5
typedef void (*func_mindustry_ai_ControlPathfinder_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder_notify 6
typedef void (*func_mindustry_ai_ControlPathfinder_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder_notifyAll 7
typedef void (*func_mindustry_ai_ControlPathfinder_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder_wait 8
typedef void (*func_mindustry_ai_ControlPathfinder_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder_wait_long 9
typedef void (*func_mindustry_ai_ControlPathfinder_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ai_ControlPathfinder_wait_long_int 10
typedef void (*func_mindustry_ai_ControlPathfinder_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ai_ControlPathfinder_run 11
typedef void (*func_mindustry_ai_ControlPathfinder_run)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder_updateTile_mindustry_world_Tile 12
typedef void (*func_mindustry_ai_ControlPathfinder_updateTile_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_ControlPathfinder_updateSingleTile_mindustry_world_Tile 13
typedef void (*func_mindustry_ai_ControlPathfinder_updateSingleTile_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_ControlPathfinder_queueClusterUpdate_int_int 14
typedef void (*func_mindustry_ai_ControlPathfinder_queueClusterUpdate_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_ai_ControlPathfinder_portalToVec_mindustry_ai_ControlPathfinder$Cluster_int_int_int_int_arc_math_geom_Vec2 15
typedef void (*func_mindustry_ai_ControlPathfinder_portalToVec_mindustry_ai_ControlPathfinder$Cluster_int_int_int_int_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jobject param5);
#define VTABLE_mindustry_ai_ControlPathfinder_start 16
typedef void (*func_mindustry_ai_ControlPathfinder_start)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder_stop 17
typedef void (*func_mindustry_ai_ControlPathfinder_stop)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder_getCluster_int_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster 18
typedef jobject (*func_mindustry_ai_ControlPathfinder_getCluster_int_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_ai_ControlPathfinder_getCluster_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster 19
typedef jobject (*func_mindustry_ai_ControlPathfinder_getCluster_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_mindustry_ai_ControlPathfinder_getCreateCluster_int_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster 20
typedef jobject (*func_mindustry_ai_ControlPathfinder_getCreateCluster_int_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_ai_ControlPathfinder_getCreateCluster_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster 21
typedef jobject (*func_mindustry_ai_ControlPathfinder_getCreateCluster_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_mindustry_ai_ControlPathfinder_updateCluster_int_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster 22
typedef jobject (*func_mindustry_ai_ControlPathfinder_updateCluster_int_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_ai_ControlPathfinder_updateInnerEdges_int_int_int_int_mindustry_ai_ControlPathfinder$Cluster 23
typedef void (*func_mindustry_ai_ControlPathfinder_updateInnerEdges_int_int_int_int_mindustry_ai_ControlPathfinder$Cluster)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4);
#define VTABLE_mindustry_ai_ControlPathfinder_updateInnerEdges_int_mindustry_ai_Pathfinder$PathCost_int_int_mindustry_ai_ControlPathfinder$Cluster 24
typedef void (*func_mindustry_ai_ControlPathfinder_updateInnerEdges_int_mindustry_ai_Pathfinder$PathCost_int_int_mindustry_ai_ControlPathfinder$Cluster)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3, jobject param4);
#define VTABLE_mindustry_ai_ControlPathfinder_innerAstar_int_mindustry_ai_Pathfinder$PathCost_int_int_int_int_int_int_int_int_int_int_R_float 25
typedef jfloat (*func_mindustry_ai_ControlPathfinder_innerAstar_int_mindustry_ai_Pathfinder$PathCost_int_int_int_int_int_int_int_int_int_int_R_float)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jint param10, jint param11);
#define VTABLE_mindustry_ai_ControlPathfinder_makeNodeIndex_int_int_int_int_R_int 26
typedef jint (*func_mindustry_ai_ControlPathfinder_makeNodeIndex_int_int_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_ai_ControlPathfinder_findClosestNode_int_int_int_int_R_int 27
typedef jint (*func_mindustry_ai_ControlPathfinder_findClosestNode_int_int_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_ai_ControlPathfinder_clusterNodeHeuristic_int_int_int_int_R_float 28
typedef jfloat (*func_mindustry_ai_ControlPathfinder_clusterNodeHeuristic_int_int_int_int_R_float)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_ai_ControlPathfinder_clusterAstar_mindustry_ai_ControlPathfinder$PathRequest_int_int_int_R_arc_struct_IntSeq 29
typedef jobject (*func_mindustry_ai_ControlPathfinder_clusterAstar_mindustry_ai_ControlPathfinder$PathRequest_int_int_int_R_arc_struct_IntSeq)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_ai_ControlPathfinder_checkEdges_mindustry_ai_ControlPathfinder$PathRequest_int_int_int_int_int_int_arc_struct_LongSeq 30
typedef void (*func_mindustry_ai_ControlPathfinder_checkEdges_mindustry_ai_ControlPathfinder$PathRequest_int_int_int_int_int_int_arc_struct_LongSeq)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jobject param7);
#define VTABLE_mindustry_ai_ControlPathfinder_updateFields_mindustry_ai_ControlPathfinder$FieldCache_long 31
typedef void (*func_mindustry_ai_ControlPathfinder_updateFields_mindustry_ai_ControlPathfinder$FieldCache_long)(jcontext ctx, jobject self, jobject param0, jlong param1);
#define VTABLE_mindustry_ai_ControlPathfinder_addFlowCluster_mindustry_ai_ControlPathfinder$FieldCache_int_boolean 32
typedef void (*func_mindustry_ai_ControlPathfinder_addFlowCluster_mindustry_ai_ControlPathfinder$FieldCache_int_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2);
#define VTABLE_mindustry_ai_ControlPathfinder_addFlowCluster_mindustry_ai_ControlPathfinder$FieldCache_int_int_boolean 33
typedef void (*func_mindustry_ai_ControlPathfinder_addFlowCluster_mindustry_ai_ControlPathfinder$FieldCache_int_int_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3);
#define VTABLE_mindustry_ai_ControlPathfinder_initializePathRequest_mindustry_ai_ControlPathfinder$PathRequest_int_int_int_int_int_int 34
typedef void (*func_mindustry_ai_ControlPathfinder_initializePathRequest_mindustry_ai_ControlPathfinder$PathRequest_int_int_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6);
#define VTABLE_mindustry_ai_ControlPathfinder_idToCost_int_R_mindustry_ai_Pathfinder$PathCost 35
typedef jobject (*func_mindustry_ai_ControlPathfinder_idToCost_int_R_mindustry_ai_Pathfinder$PathCost)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_arc_math_geom_Vec2_Array1_boolean_R_boolean 36
typedef jbool (*func_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_arc_math_geom_Vec2_Array1_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_Array1_boolean_R_boolean 37
typedef jbool (*func_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_Array1_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
#define VTABLE_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_R_mindustry_ai_ControlPathfinder$PathfindResult 38
typedef jobject (*func_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_R_mindustry_ai_ControlPathfinder$PathfindResult)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_arc_math_geom_Vec2_R_mindustry_ai_ControlPathfinder$PathfindResult 39
typedef jobject (*func_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_arc_math_geom_Vec2_R_mindustry_ai_ControlPathfinder$PathfindResult)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_ai_ControlPathfinder_recalculatePath_mindustry_ai_ControlPathfinder$PathRequest 40
typedef void (*func_mindustry_ai_ControlPathfinder_recalculatePath_mindustry_ai_ControlPathfinder$PathRequest)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_ControlPathfinder_getCost_mindustry_ai_ControlPathfinder$FieldCache_int_int_boolean_R_int 41
typedef jint (*func_mindustry_ai_ControlPathfinder_getCost_mindustry_ai_ControlPathfinder$FieldCache_int_int_boolean_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3);
#define VTABLE_mindustry_ai_ControlPathfinder_clusterChanged_int_int_int_int 42
typedef void (*func_mindustry_ai_ControlPathfinder_clusterChanged_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_ai_ControlPathfinder_updateClustersComplete_int 43
typedef void (*func_mindustry_ai_ControlPathfinder_updateClustersComplete_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ai_ControlPathfinder_updateClustersInner_int 44
typedef void (*func_mindustry_ai_ControlPathfinder_updateClustersInner_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ai_ControlPathfinder_lambda$run$6_mindustry_ai_ControlPathfinder$FieldCache 45
typedef void (*func_mindustry_ai_ControlPathfinder_lambda$run$6_mindustry_ai_ControlPathfinder$FieldCache)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_ControlPathfinder_lambda$run$5_mindustry_ai_ControlPathfinder$PathRequest 46
typedef void (*func_mindustry_ai_ControlPathfinder_lambda$run$5_mindustry_ai_ControlPathfinder$PathRequest)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_ControlPathfinder_lambda$run$4_mindustry_ai_ControlPathfinder$PathRequest 47
typedef void (*func_mindustry_ai_ControlPathfinder_lambda$run$4_mindustry_ai_ControlPathfinder$PathRequest)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_ControlPathfinder_lambda$run$3_mindustry_ai_ControlPathfinder$PathRequest 48
typedef void (*func_mindustry_ai_ControlPathfinder_lambda$run$3_mindustry_ai_ControlPathfinder$PathRequest)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_ControlPathfinder_lambda$run$2_mindustry_ai_ControlPathfinder$FieldCache 49
typedef void (*func_mindustry_ai_ControlPathfinder_lambda$run$2_mindustry_ai_ControlPathfinder$FieldCache)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_ControlPathfinder_lambda$run$1_int 50
typedef void (*func_mindustry_ai_ControlPathfinder_lambda$run$1_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ai_ControlPathfinder_lambda$run$0_int 51
typedef void (*func_mindustry_ai_ControlPathfinder_lambda$run$0_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ai_ControlPathfinder_lambda$getCost$0_mindustry_ai_ControlPathfinder$FieldCache_int_int 52
typedef void (*func_mindustry_ai_ControlPathfinder_lambda$getCost$0_mindustry_ai_ControlPathfinder$FieldCache_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_mindustry_ai_ControlPathfinder_lambda$getPathPosition$0_mindustry_ai_ControlPathfinder$PathRequest 53
typedef void (*func_mindustry_ai_ControlPathfinder_lambda$getPathPosition$0_mindustry_ai_ControlPathfinder$PathRequest)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_ControlPathfinder_lambda$initializePathRequest$0_mindustry_ai_ControlPathfinder$FieldCache 54
typedef void (*func_mindustry_ai_ControlPathfinder_lambda$initializePathRequest$0_mindustry_ai_ControlPathfinder$FieldCache)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_ControlPathfinder_lambda$queueClusterUpdate$0_int_int 55
typedef void (*func_mindustry_ai_ControlPathfinder_lambda$queueClusterUpdate$0_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_ai_ControlPathfinder_lambda$updateSingleTile$0_int 56
typedef void (*func_mindustry_ai_ControlPathfinder_lambda$updateSingleTile$0_int)(jcontext ctx, jobject self, jint param0);

void mark_mindustry_ai_ControlPathfinder(jobject object, jint mark, jint depth);
void clinit_mindustry_ai_ControlPathfinder(jcontext ctx);
void SM_mindustry_ai_ControlPathfinder_checkEvents(jcontext ctx);
void init_mindustry_ai_ControlPathfinder(jcontext ctx, jobject self);
void M_mindustry_ai_ControlPathfinder_updateTile_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_ControlPathfinder_updateSingleTile_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_ControlPathfinder_queueClusterUpdate_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_mindustry_ai_ControlPathfinder_portalToVec_mindustry_ai_ControlPathfinder$Cluster_int_int_int_int_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jobject param5);
void M_mindustry_ai_ControlPathfinder_start(jcontext ctx, jobject self);
void M_mindustry_ai_ControlPathfinder_stop(jcontext ctx, jobject self);
jobject M_mindustry_ai_ControlPathfinder_getCluster_int_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jobject M_mindustry_ai_ControlPathfinder_getCluster_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
jobject M_mindustry_ai_ControlPathfinder_getCreateCluster_int_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jobject M_mindustry_ai_ControlPathfinder_getCreateCluster_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
jobject M_mindustry_ai_ControlPathfinder_updateCluster_int_int_int_int_R_mindustry_ai_ControlPathfinder$Cluster(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_mindustry_ai_ControlPathfinder_updateInnerEdges_int_int_int_int_mindustry_ai_ControlPathfinder$Cluster(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4);
void M_mindustry_ai_ControlPathfinder_updateInnerEdges_int_mindustry_ai_Pathfinder$PathCost_int_int_mindustry_ai_ControlPathfinder$Cluster(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3, jobject param4);
jfloat SM_mindustry_ai_ControlPathfinder_heuristic_int_int_R_float(jcontext ctx, jint param0, jint param1);
jint SM_mindustry_ai_ControlPathfinder_tcost_int_mindustry_ai_Pathfinder$PathCost_int_R_int(jcontext ctx, jint param0, jobject param1, jint param2);
jfloat SM_mindustry_ai_ControlPathfinder_tileCost_int_mindustry_ai_Pathfinder$PathCost_int_int_R_float(jcontext ctx, jint param0, jobject param1, jint param2, jint param3);
jfloat M_mindustry_ai_ControlPathfinder_innerAstar_int_mindustry_ai_Pathfinder$PathCost_int_int_int_int_int_int_int_int_int_int_R_float(jcontext ctx, jobject self, jint param0, jobject param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jint param9, jint param10, jint param11);
jint M_mindustry_ai_ControlPathfinder_makeNodeIndex_int_int_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jint M_mindustry_ai_ControlPathfinder_findClosestNode_int_int_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jfloat M_mindustry_ai_ControlPathfinder_clusterNodeHeuristic_int_int_int_int_R_float(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jobject M_mindustry_ai_ControlPathfinder_clusterAstar_mindustry_ai_ControlPathfinder$PathRequest_int_int_int_R_arc_struct_IntSeq(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
void M_mindustry_ai_ControlPathfinder_checkEdges_mindustry_ai_ControlPathfinder$PathRequest_int_int_int_int_int_int_arc_struct_LongSeq(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jobject param7);
void M_mindustry_ai_ControlPathfinder_updateFields_mindustry_ai_ControlPathfinder$FieldCache_long(jcontext ctx, jobject self, jobject param0, jlong param1);
void M_mindustry_ai_ControlPathfinder_addFlowCluster_mindustry_ai_ControlPathfinder$FieldCache_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2);
void M_mindustry_ai_ControlPathfinder_addFlowCluster_mindustry_ai_ControlPathfinder$FieldCache_int_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3);
void M_mindustry_ai_ControlPathfinder_initializePathRequest_mindustry_ai_ControlPathfinder$PathRequest_int_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6);
jobject M_mindustry_ai_ControlPathfinder_idToCost_int_R_mindustry_ai_Pathfinder$PathCost(jcontext ctx, jobject self, jint param0);
jbool SM_mindustry_ai_ControlPathfinder_isNearObstacle_mindustry_gen_Unit_int_int_int_int_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4);
jbool M_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_arc_math_geom_Vec2_Array1_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
jbool M_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_Array1_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jobject M_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_R_mindustry_ai_ControlPathfinder$PathfindResult(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_ai_ControlPathfinder_getPathPosition_mindustry_gen_Unit_arc_math_geom_Vec2_arc_math_geom_Vec2_R_mindustry_ai_ControlPathfinder$PathfindResult(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_ai_ControlPathfinder_recalculatePath_mindustry_ai_ControlPathfinder$PathRequest(jcontext ctx, jobject self, jobject param0);
jint M_mindustry_ai_ControlPathfinder_getCost_mindustry_ai_ControlPathfinder$FieldCache_int_int_boolean_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3);
jbool SM_mindustry_ai_ControlPathfinder_raycast_int_mindustry_ai_Pathfinder$PathCost_int_int_int_int_R_boolean(jcontext ctx, jint param0, jobject param1, jint param2, jint param3, jint param4, jint param5);
jint SM_mindustry_ai_ControlPathfinder_raycastFastAvoid_int_mindustry_ai_Pathfinder$PathCost_int_int_int_int_R_int(jcontext ctx, jint param0, jobject param1, jint param2, jint param3, jint param4, jint param5);
jbool SM_mindustry_ai_ControlPathfinder_overlap_int_int_mindustry_ai_Pathfinder$PathCost_int_int_float_float_float_float_float_R_boolean(jcontext ctx, jint param0, jint param1, jobject param2, jint param3, jint param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9);
jbool SM_mindustry_ai_ControlPathfinder_raycastRect_int_float_float_float_float_int_mindustry_ai_Pathfinder$PathCost_int_int_int_int_float_R_boolean(jcontext ctx, jint param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jint param5, jobject param6, jint param7, jint param8, jint param9, jint param10, jfloat param11);
jbool SM_mindustry_ai_ControlPathfinder_avoid_int_mindustry_ai_Pathfinder$PathCost_int_R_boolean(jcontext ctx, jint param0, jobject param1, jint param2);
jbool SM_mindustry_ai_ControlPathfinder_passable_int_mindustry_ai_Pathfinder$PathCost_int_R_boolean(jcontext ctx, jint param0, jobject param1, jint param2);
jbool SM_mindustry_ai_ControlPathfinder_nearPassable_int_int_mindustry_ai_Pathfinder$PathCost_int_R_boolean(jcontext ctx, jint param0, jint param1, jobject param2, jint param3);
jbool SM_mindustry_ai_ControlPathfinder_solid_int_mindustry_ai_Pathfinder$PathCost_int_int_R_boolean(jcontext ctx, jint param0, jobject param1, jint param2, jint param3);
jbool SM_mindustry_ai_ControlPathfinder_solid_int_mindustry_ai_Pathfinder$PathCost_int_boolean_R_boolean(jcontext ctx, jint param0, jobject param1, jint param2, jbool param3);
jint SM_mindustry_ai_ControlPathfinder_cost_int_mindustry_ai_Pathfinder$PathCost_int_R_int(jcontext ctx, jint param0, jobject param1, jint param2);
void M_mindustry_ai_ControlPathfinder_clusterChanged_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_mindustry_ai_ControlPathfinder_updateClustersComplete_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_ai_ControlPathfinder_updateClustersInner_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_ai_ControlPathfinder_run(jcontext ctx, jobject self);
void M_mindustry_ai_ControlPathfinder_lambda$run$6_mindustry_ai_ControlPathfinder$FieldCache(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_ControlPathfinder_lambda$run$5_mindustry_ai_ControlPathfinder$PathRequest(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_ControlPathfinder_lambda$run$4_mindustry_ai_ControlPathfinder$PathRequest(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_ControlPathfinder_lambda$run$3_mindustry_ai_ControlPathfinder$PathRequest(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_ControlPathfinder_lambda$run$2_mindustry_ai_ControlPathfinder$FieldCache(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_ControlPathfinder_lambda$run$1_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_ai_ControlPathfinder_lambda$run$0_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_ai_ControlPathfinder_lambda$getCost$0_mindustry_ai_ControlPathfinder$FieldCache_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_mindustry_ai_ControlPathfinder_lambda$getPathPosition$0_mindustry_ai_ControlPathfinder$PathRequest(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_ControlPathfinder_lambda$initializePathRequest$0_mindustry_ai_ControlPathfinder$FieldCache(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_ai_ControlPathfinder_lambda$addFlowCluster$0_int_int(jcontext ctx, jint param0, jint param1);
void M_mindustry_ai_ControlPathfinder_lambda$queueClusterUpdate$0_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_mindustry_ai_ControlPathfinder_lambda$updateSingleTile$0_int(jcontext ctx, jobject self, jint param0);
void SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$8(jcontext ctx);
void SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$9_int_int(jcontext ctx, jint param0, jint param1);
void SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$3(jcontext ctx);
void SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$7_mindustry_ai_ControlPathfinder$FieldCache(jcontext ctx, jobject param0);
void SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$6_mindustry_ai_ControlPathfinder$FieldCache(jcontext ctx, jobject param0);
void SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$5_mindustry_ai_ControlPathfinder$PathRequest(jcontext ctx, jobject param0);
void SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$4_mindustry_ai_ControlPathfinder$PathRequest(jcontext ctx, jobject param0);
void SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$2_mindustry_game_EventType$TileChangeEvent(jcontext ctx, jobject param0);
void SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$1_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject param0);
void SM_mindustry_ai_ControlPathfinder_lambda$checkEvents$0_mindustry_game_EventType$ResetEvent(jcontext ctx, jobject param0);
jint SM_mindustry_ai_ControlPathfinder_lambda$static$3_int_int_R_int(jcontext ctx, jint param0, jint param1);
jint SM_mindustry_ai_ControlPathfinder_lambda$static$2_int_int_R_int(jcontext ctx, jint param0, jint param1);
jint SM_mindustry_ai_ControlPathfinder_lambda$static$1_int_int_R_int(jcontext ctx, jint param0, jint param1);
jint SM_mindustry_ai_ControlPathfinder_lambda$static$0_int_int_R_int(jcontext ctx, jint param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
