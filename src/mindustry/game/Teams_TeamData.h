#ifndef HEADER_mindustry_game_Teams$TeamData
#define HEADER_mindustry_game_Teams$TeamData

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_Teams$TeamData {
	java_lang_Object parent;
	jref F_team;
	jref F_buildAi;
	jref F_rtsAi;
	jbool F_presentFlag;
	jref F_clusteredCounts;
	jfloat F_lastClusterUpdateTimer;
	jref F_coreEnemies;
	jref F_plans;
	jref F_cores;
	jref F_lastCore;
	jref F_buildingTree;
	jref F_turretTree;
	jref F_unitTree;
	jint F_unitCap;
	jint F_unitCount;
	jref F_typeCounts;
	jref F_buildingTypes;
	jref F_units;
	jref F_players;
	jref F_buildings;
	jref F_unitsByType;
} mindustry_game_Teams$TeamData;

extern Class class_mindustry_game_Teams$TeamData;

extern jobject SF_mindustry_game_Teams$TeamData_derelictBuffer;
extern jfloat SF_mindustry_game_Teams$TeamData_clusterChunkSize;

#define VTABLE_mindustry_game_Teams$TeamData_hashCode_R_int 0
typedef jint (*func_mindustry_game_Teams$TeamData_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams$TeamData_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_Teams$TeamData_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Teams$TeamData_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_Teams$TeamData_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams$TeamData_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_Teams$TeamData_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams$TeamData_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_Teams$TeamData_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams$TeamData_finalize 5
typedef void (*func_mindustry_game_Teams$TeamData_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams$TeamData_notify 6
typedef void (*func_mindustry_game_Teams$TeamData_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams$TeamData_notifyAll 7
typedef void (*func_mindustry_game_Teams$TeamData_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams$TeamData_wait 8
typedef void (*func_mindustry_game_Teams$TeamData_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams$TeamData_wait_long 9
typedef void (*func_mindustry_game_Teams$TeamData_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_Teams$TeamData_wait_long_int 10
typedef void (*func_mindustry_game_Teams$TeamData_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_Teams$TeamData_getBuildings_mindustry_world_Block_R_arc_struct_Seq 11
typedef jobject (*func_mindustry_game_Teams$TeamData_getBuildings_mindustry_world_Block_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Teams$TeamData_getCount_mindustry_world_Block_R_int 12
typedef jint (*func_mindustry_game_Teams$TeamData_getCount_mindustry_world_Block_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Teams$TeamData_destroyToDerelict 13
typedef void (*func_mindustry_game_Teams$TeamData_destroyToDerelict)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams$TeamData_timeDestroy_float_float_float 14
typedef void (*func_mindustry_game_Teams$TeamData_timeDestroy_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_game_Teams$TeamData_scheduleDerelict_mindustry_gen_Building 15
typedef void (*func_mindustry_game_Teams$TeamData_scheduleDerelict_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Teams$TeamData_finishScheduleDerelict 16
typedef void (*func_mindustry_game_Teams$TeamData_finishScheduleDerelict)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams$TeamData_getUnits_mindustry_type_UnitType_R_arc_struct_Seq 17
typedef jobject (*func_mindustry_game_Teams$TeamData_getUnits_mindustry_type_UnitType_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Teams$TeamData_unitCache_mindustry_type_UnitType_R_arc_struct_Seq 18
typedef jobject (*func_mindustry_game_Teams$TeamData_unitCache_mindustry_type_UnitType_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int 19
typedef void (*func_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree 20
typedef jobject (*func_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int 21
typedef jint (*func_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Teams$TeamData_active_R_boolean 22
typedef jbool (*func_mindustry_game_Teams$TeamData_active_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams$TeamData_hasCore_R_boolean 23
typedef jbool (*func_mindustry_game_Teams$TeamData_hasCore_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams$TeamData_isAlive_R_boolean 24
typedef jbool (*func_mindustry_game_Teams$TeamData_isAlive_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams$TeamData_noCores_R_boolean 25
typedef jbool (*func_mindustry_game_Teams$TeamData_noCores_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams$TeamData_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 26
typedef jobject (*func_mindustry_game_Teams$TeamData_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams$TeamData_hasAI_R_boolean 27
typedef jbool (*func_mindustry_game_Teams$TeamData_hasAI_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams$TeamData_getClustered_float_float_R_int 28
typedef jint (*func_mindustry_game_Teams$TeamData_getClustered_float_float_R_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_game_Teams$TeamData_lambda$getClustered$0_mindustry_gen_Unit 29
typedef void (*func_mindustry_game_Teams$TeamData_lambda$getClustered$0_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Teams$TeamData_lambda$timeDestroy$1_mindustry_type_Sector_float_int_int 30
typedef void (*func_mindustry_game_Teams$TeamData_lambda$timeDestroy$1_mindustry_type_Sector_float_int_int)(jcontext ctx, jobject self, jobject param0, jfloat param1, jint param2, jint param3);
#define VTABLE_mindustry_game_Teams$TeamData_lambda$destroyToDerelict$0_mindustry_gen_Unit 31
typedef void (*func_mindustry_game_Teams$TeamData_lambda$destroyToDerelict$0_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Teams$TeamData_lambda$destroyToDerelict$1_mindustry_gen_Unit 32
typedef void (*func_mindustry_game_Teams$TeamData_lambda$destroyToDerelict$1_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_game_Teams$TeamData(jobject object, jint mark, jint depth);
void clinit_mindustry_game_Teams$TeamData(jcontext ctx);
void init_mindustry_game_Teams$TeamData_mindustry_game_Team(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_game_Teams$TeamData_getBuildings_mindustry_world_Block_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jint M_mindustry_game_Teams$TeamData_getCount_mindustry_world_Block_R_int(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_Teams$TeamData_destroyToDerelict(jcontext ctx, jobject self);
void M_mindustry_game_Teams$TeamData_timeDestroy_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
void M_mindustry_game_Teams$TeamData_scheduleDerelict_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_Teams$TeamData_finishScheduleDerelict(jcontext ctx, jobject self);
jobject M_mindustry_game_Teams$TeamData_getUnits_mindustry_type_UnitType_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_game_Teams$TeamData_unitCache_mindustry_type_UnitType_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree(jcontext ctx, jobject self);
jint M_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_game_Teams$TeamData_active_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_game_Teams$TeamData_hasCore_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_game_Teams$TeamData_isAlive_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_game_Teams$TeamData_noCores_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_game_Teams$TeamData_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self);
jbool M_mindustry_game_Teams$TeamData_hasAI_R_boolean(jcontext ctx, jobject self);
jint M_mindustry_game_Teams$TeamData_getClustered_float_float_R_int(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jint SM_mindustry_game_Teams$TeamData_clusterKey_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1);
jobject M_mindustry_game_Teams$TeamData_toString_R_java_lang_String(jcontext ctx, jobject self);
void M_mindustry_game_Teams$TeamData_lambda$getClustered$0_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_game_Teams$TeamData_lambda$finishScheduleDerelict$0_Array1_int(jcontext ctx, jobject param0);
void M_mindustry_game_Teams$TeamData_lambda$timeDestroy$1_mindustry_type_Sector_float_int_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jint param2, jint param3);
jbool SM_mindustry_game_Teams$TeamData_lambda$timeDestroy$2_mindustry_world_Tile_float_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_boolean(jcontext ctx, jobject param0, jfloat param1, jobject param2);
jbool SM_mindustry_game_Teams$TeamData_lambda$timeDestroy$0_mindustry_gen_Building_float_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_boolean(jcontext ctx, jobject param0, jfloat param1, jobject param2);
void M_mindustry_game_Teams$TeamData_lambda$destroyToDerelict$0_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_Teams$TeamData_lambda$destroyToDerelict$1_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
jobject SM_mindustry_game_Teams$TeamData_lambda$getBuildings$0_R_arc_struct_Seq(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
