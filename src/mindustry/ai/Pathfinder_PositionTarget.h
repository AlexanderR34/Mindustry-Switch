#ifndef HEADER_mindustry_ai_Pathfinder$PositionTarget
#define HEADER_mindustry_ai_Pathfinder$PositionTarget

#include "Clearwing.h"
#include "mindustry/ai/Pathfinder_Flowfield.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ai_Pathfinder$PositionTarget {
	mindustry_ai_Pathfinder$Flowfield parent;
	jref F_position;
} mindustry_ai_Pathfinder$PositionTarget;

extern Class class_mindustry_ai_Pathfinder$PositionTarget;


#define VTABLE_mindustry_ai_Pathfinder$PositionTarget_hashCode_R_int 0
typedef jint (*func_mindustry_ai_Pathfinder$PositionTarget_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$PositionTarget_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ai_Pathfinder$PositionTarget_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_Pathfinder$PositionTarget_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ai_Pathfinder$PositionTarget_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$PositionTarget_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ai_Pathfinder$PositionTarget_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$PositionTarget_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ai_Pathfinder$PositionTarget_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$PositionTarget_finalize 5
typedef void (*func_mindustry_ai_Pathfinder$PositionTarget_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$PositionTarget_notify 6
typedef void (*func_mindustry_ai_Pathfinder$PositionTarget_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$PositionTarget_notifyAll 7
typedef void (*func_mindustry_ai_Pathfinder$PositionTarget_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$PositionTarget_wait 8
typedef void (*func_mindustry_ai_Pathfinder$PositionTarget_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$PositionTarget_wait_long 9
typedef void (*func_mindustry_ai_Pathfinder$PositionTarget_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ai_Pathfinder$PositionTarget_wait_long_int 10
typedef void (*func_mindustry_ai_Pathfinder$PositionTarget_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ai_Pathfinder$PositionTarget_setup 11
typedef void (*func_mindustry_ai_Pathfinder$PositionTarget_setup)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$PositionTarget_getCost_Array1_int_int_R_int 12
typedef jint (*func_mindustry_ai_Pathfinder$PositionTarget_getCost_Array1_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_ai_Pathfinder$PositionTarget_hasTargets_R_boolean 13
typedef jbool (*func_mindustry_ai_Pathfinder$PositionTarget_hasTargets_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$PositionTarget_getNextTile_mindustry_world_Tile_boolean_R_mindustry_world_Tile 14
typedef jobject (*func_mindustry_ai_Pathfinder$PositionTarget_getNextTile_mindustry_world_Tile_boolean_R_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_ai_Pathfinder$PositionTarget_getNextTile_mindustry_world_Tile_R_mindustry_world_Tile 15
typedef jobject (*func_mindustry_ai_Pathfinder$PositionTarget_getNextTile_mindustry_world_Tile_R_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_Pathfinder$PositionTarget_getNextTile_mindustry_world_Tile_int_R_mindustry_world_Tile 16
typedef jobject (*func_mindustry_ai_Pathfinder$PositionTarget_getNextTile_mindustry_world_Tile_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_ai_Pathfinder$PositionTarget_hasCompleteWeights_R_boolean 17
typedef jbool (*func_mindustry_ai_Pathfinder$PositionTarget_hasCompleteWeights_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$PositionTarget_updateTargetPositions 18
typedef void (*func_mindustry_ai_Pathfinder$PositionTarget_updateTargetPositions)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$PositionTarget_needsRefresh_R_boolean 19
typedef jbool (*func_mindustry_ai_Pathfinder$PositionTarget_needsRefresh_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_Pathfinder$PositionTarget_passable_int_R_boolean 20
typedef jbool (*func_mindustry_ai_Pathfinder$PositionTarget_passable_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_ai_Pathfinder$PositionTarget_getPositions_arc_struct_IntSeq 21
typedef void (*func_mindustry_ai_Pathfinder$PositionTarget_getPositions_arc_struct_IntSeq)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_ai_Pathfinder$PositionTarget(jobject object, jint mark, jint depth);
void clinit_mindustry_ai_Pathfinder$PositionTarget(jcontext ctx);
void init_mindustry_ai_Pathfinder$PositionTarget_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_Pathfinder$PositionTarget_getPositions_arc_struct_IntSeq(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
