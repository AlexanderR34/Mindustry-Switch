#ifndef HEADER_mindustry_game_Teams
#define HEADER_mindustry_game_Teams

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_Teams {
	java_lang_Object parent;
	jref F_map;
	jref F_active;
	jref F_present;
	jref F_bosses;
} mindustry_game_Teams;

extern Class class_mindustry_game_Teams;


#define VTABLE_mindustry_game_Teams_hashCode_R_int 0
typedef jint (*func_mindustry_game_Teams_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_Teams_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Teams_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_Teams_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_Teams_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_Teams_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams_finalize 5
typedef void (*func_mindustry_game_Teams_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams_notify 6
typedef void (*func_mindustry_game_Teams_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams_notifyAll 7
typedef void (*func_mindustry_game_Teams_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams_wait 8
typedef void (*func_mindustry_game_Teams_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams_wait_long 9
typedef void (*func_mindustry_game_Teams_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_Teams_wait_long_int 10
typedef void (*func_mindustry_game_Teams_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_Teams_closestEnemyCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 11
typedef jobject (*func_mindustry_game_Teams_closestEnemyCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2);
#define VTABLE_mindustry_game_Teams_closestCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 12
typedef jobject (*func_mindustry_game_Teams_closestCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2);
#define VTABLE_mindustry_game_Teams_anyEnemyCoresWithinBuildRadius_mindustry_game_Team_float_float_R_boolean 13
typedef jbool (*func_mindustry_game_Teams_anyEnemyCoresWithinBuildRadius_mindustry_game_Team_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_game_Teams_anyEnemyCoresWithin_mindustry_game_Team_float_float_float_R_boolean 14
typedef jbool (*func_mindustry_game_Teams_anyEnemyCoresWithin_mindustry_game_Team_float_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_game_Teams_eachEnemyCore_mindustry_game_Team_arc_func_Cons 15
typedef void (*func_mindustry_game_Teams_eachEnemyCore_mindustry_game_Team_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData 16
typedef jobject (*func_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Teams_getOrNull_mindustry_game_Team_R_mindustry_game_Teams$TeamData 17
typedef jobject (*func_mindustry_game_Teams_getOrNull_mindustry_game_Team_R_mindustry_game_Teams$TeamData)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Teams_playerCores_R_arc_struct_Seq 18
typedef jobject (*func_mindustry_game_Teams_playerCores_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams_cores_mindustry_game_Team_R_arc_struct_Seq 19
typedef jobject (*func_mindustry_game_Teams_cores_mindustry_game_Team_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Teams_isActive_mindustry_game_Team_R_boolean 20
typedef jbool (*func_mindustry_game_Teams_isActive_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Teams_canInteract_mindustry_game_Team_mindustry_game_Team_R_boolean 21
typedef jbool (*func_mindustry_game_Teams_canInteract_mindustry_game_Team_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_game_Teams_getActive_R_arc_struct_Seq 22
typedef jobject (*func_mindustry_game_Teams_getActive_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams_updateActive_mindustry_game_Team 23
typedef void (*func_mindustry_game_Teams_updateActive_mindustry_game_Team)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Teams_registerCore_mindustry_world_blocks_storage_CoreBlock$CoreBuild 24
typedef void (*func_mindustry_game_Teams_registerCore_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Teams_unregisterCore_mindustry_world_blocks_storage_CoreBlock$CoreBuild 25
typedef void (*func_mindustry_game_Teams_unregisterCore_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Teams_count_mindustry_gen_Unit 26
typedef void (*func_mindustry_game_Teams_count_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Teams_updateTeamStats 27
typedef void (*func_mindustry_game_Teams_updateTeamStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Teams_updateEnemies 28
typedef void (*func_mindustry_game_Teams_updateEnemies)(jcontext ctx, jobject self);

void mark_mindustry_game_Teams(jobject object, jint mark, jint depth);
void clinit_mindustry_game_Teams(jcontext ctx);
void init_mindustry_game_Teams(jcontext ctx, jobject self);
jobject M_mindustry_game_Teams_closestEnemyCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2);
jobject M_mindustry_game_Teams_closestCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2);
jbool M_mindustry_game_Teams_anyEnemyCoresWithinBuildRadius_mindustry_game_Team_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
jbool M_mindustry_game_Teams_anyEnemyCoresWithin_mindustry_game_Team_float_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
void M_mindustry_game_Teams_eachEnemyCore_mindustry_game_Team_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_game_Teams_get_mindustry_game_Team_R_mindustry_game_Teams$TeamData(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_game_Teams_getOrNull_mindustry_game_Team_R_mindustry_game_Teams$TeamData(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_game_Teams_playerCores_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_mindustry_game_Teams_cores_mindustry_game_Team_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_game_Teams_isActive_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_game_Teams_canInteract_mindustry_game_Team_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_game_Teams_getActive_R_arc_struct_Seq(jcontext ctx, jobject self);
void M_mindustry_game_Teams_updateActive_mindustry_game_Team(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_Teams_registerCore_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_Teams_unregisterCore_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_Teams_count_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_Teams_updateTeamStats(jcontext ctx, jobject self);
void M_mindustry_game_Teams_updateEnemies(jcontext ctx, jobject self);
void SM_mindustry_game_Teams_destroyPayload_mindustry_gen_Building(jcontext ctx, jobject param0);
jbool SM_mindustry_game_Teams_lambda$getActive$0_mindustry_game_Teams$TeamData_R_boolean(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
