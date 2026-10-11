#ifndef HEADER_mindustry_ai_Pathfinder$Flowfield
#define HEADER_mindustry_ai_Pathfinder$Flowfield

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ai_Pathfinder$Flowfield {
	java_lang_Object parent;
	jint F_refreshRate;
	jref F_team;
	jref F_cost;
	volatile jbool F_hasComplete;
	jbool F_dirty;
	jref F_weights;
	jref F_searches;
	jref F_completeWeights;
	jint F_resolution;
	jint F_width;
	jint F_height;
	jref F_frontier;
	jref F_targets;
	jint F_search;
	jlong F_lastUpdateTime;
	jbool F_initialized;
} mindustry_ai_Pathfinder$Flowfield;

extern Class class_mindustry_ai_Pathfinder$Flowfield;


#define VTABLE_mindustry_ai_Pathfinder$Flowfield_hashCode_R_int 0
typedef jint (*func_mindustry_ai_Pathfinder$Flowfield_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$Flowfield_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ai_Pathfinder$Flowfield_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_Pathfinder$Flowfield_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ai_Pathfinder$Flowfield_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$Flowfield_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ai_Pathfinder$Flowfield_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$Flowfield_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ai_Pathfinder$Flowfield_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$Flowfield_finalize 5
typedef void (*func_mindustry_ai_Pathfinder$Flowfield_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$Flowfield_notify 6
typedef void (*func_mindustry_ai_Pathfinder$Flowfield_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$Flowfield_notifyAll 7
typedef void (*func_mindustry_ai_Pathfinder$Flowfield_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$Flowfield_wait 8
typedef void (*func_mindustry_ai_Pathfinder$Flowfield_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$Flowfield_wait_long 9
typedef void (*func_mindustry_ai_Pathfinder$Flowfield_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ai_Pathfinder$Flowfield_wait_long_int 10
typedef void (*func_mindustry_ai_Pathfinder$Flowfield_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ai_Pathfinder$Flowfield_setup 11
typedef void (*func_mindustry_ai_Pathfinder$Flowfield_setup)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$Flowfield_getCost_Array1_int_int_R_int 12
typedef jint (*func_mindustry_ai_Pathfinder$Flowfield_getCost_Array1_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_ai_Pathfinder$Flowfield_hasTargets_R_boolean 13
typedef jbool (*func_mindustry_ai_Pathfinder$Flowfield_hasTargets_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$Flowfield_getNextTile_mindustry_world_Tile_boolean_R_mindustry_world_Tile 14
typedef jobject (*func_mindustry_ai_Pathfinder$Flowfield_getNextTile_mindustry_world_Tile_boolean_R_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_ai_Pathfinder$Flowfield_getNextTile_mindustry_world_Tile_R_mindustry_world_Tile 15
typedef jobject (*func_mindustry_ai_Pathfinder$Flowfield_getNextTile_mindustry_world_Tile_R_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_Pathfinder$Flowfield_getNextTile_mindustry_world_Tile_int_R_mindustry_world_Tile 16
typedef jobject (*func_mindustry_ai_Pathfinder$Flowfield_getNextTile_mindustry_world_Tile_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_ai_Pathfinder$Flowfield_hasCompleteWeights_R_boolean 17
typedef jbool (*func_mindustry_ai_Pathfinder$Flowfield_hasCompleteWeights_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$Flowfield_updateTargetPositions 18
typedef void (*func_mindustry_ai_Pathfinder$Flowfield_updateTargetPositions)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$Flowfield_needsRefresh_R_boolean 19
typedef jbool (*func_mindustry_ai_Pathfinder$Flowfield_needsRefresh_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$Flowfield_passable_int_R_boolean 20
typedef jbool (*func_mindustry_ai_Pathfinder$Flowfield_passable_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ai_Pathfinder$Flowfield_getPositions_arc_struct_IntSeq 21
typedef void (*func_mindustry_ai_Pathfinder$Flowfield_getPositions_arc_struct_IntSeq)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_ai_Pathfinder$Flowfield(jobject object, jint mark, jint depth);
void clinit_mindustry_ai_Pathfinder$Flowfield(jcontext ctx);
void init_mindustry_ai_Pathfinder$Flowfield(jcontext ctx, jobject self);
void init_mindustry_ai_Pathfinder$Flowfield_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_ai_Pathfinder$Flowfield_setup(jcontext ctx, jobject self);
jint M_mindustry_ai_Pathfinder$Flowfield_getCost_Array1_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1);
jbool M_mindustry_ai_Pathfinder$Flowfield_hasTargets_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_ai_Pathfinder$Flowfield_getNextTile_mindustry_world_Tile_boolean_R_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_mindustry_ai_Pathfinder$Flowfield_getNextTile_mindustry_world_Tile_R_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_ai_Pathfinder$Flowfield_getNextTile_mindustry_world_Tile_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0, jint param1);
jbool M_mindustry_ai_Pathfinder$Flowfield_hasCompleteWeights_R_boolean(jcontext ctx, jobject self);
void M_mindustry_ai_Pathfinder$Flowfield_updateTargetPositions(jcontext ctx, jobject self);
jbool M_mindustry_ai_Pathfinder$Flowfield_needsRefresh_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_ai_Pathfinder$Flowfield_passable_int_R_boolean(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
