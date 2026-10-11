#ifndef HEADER_mindustry_ai_WaveSpawner
#define HEADER_mindustry_ai_WaveSpawner

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ai_WaveSpawner {
	java_lang_Object parent;
	jint F_tmpCount;
	jref F_spawns;
	jbool F_spawning;
	jbool F_any;
	jref F_firstSpawn;
} mindustry_ai_WaveSpawner;

extern Class class_mindustry_ai_WaveSpawner;

extern jfloat SF_mindustry_ai_WaveSpawner_margin;
extern jfloat SF_mindustry_ai_WaveSpawner_coreMargin;
extern jfloat SF_mindustry_ai_WaveSpawner_maxSteps;

#define VTABLE_mindustry_ai_WaveSpawner_hashCode_R_int 0
typedef jint (*func_mindustry_ai_WaveSpawner_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_WaveSpawner_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ai_WaveSpawner_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_WaveSpawner_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ai_WaveSpawner_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_WaveSpawner_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ai_WaveSpawner_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_WaveSpawner_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ai_WaveSpawner_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_WaveSpawner_finalize 5
typedef void (*func_mindustry_ai_WaveSpawner_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_WaveSpawner_notify 6
typedef void (*func_mindustry_ai_WaveSpawner_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_WaveSpawner_notifyAll 7
typedef void (*func_mindustry_ai_WaveSpawner_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_WaveSpawner_wait 8
typedef void (*func_mindustry_ai_WaveSpawner_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_WaveSpawner_wait_long 9
typedef void (*func_mindustry_ai_WaveSpawner_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ai_WaveSpawner_wait_long_int 10
typedef void (*func_mindustry_ai_WaveSpawner_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ai_WaveSpawner_getFirstSpawn_R_mindustry_world_Tile 11
typedef jobject (*func_mindustry_ai_WaveSpawner_getFirstSpawn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_WaveSpawner_countSpawns_R_int 12
typedef jint (*func_mindustry_ai_WaveSpawner_countSpawns_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq 13
typedef jobject (*func_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_WaveSpawner_playerNear_R_boolean 14
typedef jbool (*func_mindustry_ai_WaveSpawner_playerNear_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_WaveSpawner_spawnEnemies 15
typedef void (*func_mindustry_ai_WaveSpawner_spawnEnemies)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_WaveSpawner_spawnUnit_mindustry_game_SpawnGroup_float_float 16
typedef void (*func_mindustry_ai_WaveSpawner_spawnUnit_mindustry_game_SpawnGroup_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_ai_WaveSpawner_doShockwave_float_float 17
typedef void (*func_mindustry_ai_WaveSpawner_doShockwave_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ai_WaveSpawner_eachGroundSpawn_arc_func_Intc2 18
typedef void (*func_mindustry_ai_WaveSpawner_eachGroundSpawn_arc_func_Intc2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_WaveSpawner_eachGroundSpawn_int_mindustry_ai_WaveSpawner$SpawnConsumer 19
typedef void (*func_mindustry_ai_WaveSpawner_eachGroundSpawn_int_mindustry_ai_WaveSpawner$SpawnConsumer)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_ai_WaveSpawner_eachFlyerSpawn_int_arc_func_Floatc2 20
typedef void (*func_mindustry_ai_WaveSpawner_eachFlyerSpawn_int_arc_func_Floatc2)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_ai_WaveSpawner_countGroundSpawns_R_int 21
typedef jint (*func_mindustry_ai_WaveSpawner_countGroundSpawns_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_WaveSpawner_countFlyerSpawns_R_int 22
typedef jint (*func_mindustry_ai_WaveSpawner_countFlyerSpawns_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_WaveSpawner_isSpawning_R_boolean 23
typedef jbool (*func_mindustry_ai_WaveSpawner_isSpawning_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_WaveSpawner_reset 24
typedef void (*func_mindustry_ai_WaveSpawner_reset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_WaveSpawner_spawnEffect_mindustry_gen_Unit 25
typedef void (*func_mindustry_ai_WaveSpawner_spawnEffect_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_WaveSpawner_lambda$countFlyerSpawns$0_float_float 26
typedef void (*func_mindustry_ai_WaveSpawner_lambda$countFlyerSpawns$0_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_ai_WaveSpawner_lambda$countGroundSpawns$0_int_int 27
typedef void (*func_mindustry_ai_WaveSpawner_lambda$countGroundSpawns$0_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_ai_WaveSpawner_lambda$eachGroundSpawn$1_int_int 28
typedef void (*func_mindustry_ai_WaveSpawner_lambda$eachGroundSpawn$1_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_ai_WaveSpawner_lambda$spawnEnemies$3 29
typedef void (*func_mindustry_ai_WaveSpawner_lambda$spawnEnemies$3)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_WaveSpawner_lambda$spawnEnemies$2_int_float_mindustry_game_SpawnGroup_float_float_boolean 30
typedef void (*func_mindustry_ai_WaveSpawner_lambda$spawnEnemies$2_int_float_mindustry_game_SpawnGroup_float_float_boolean)(jcontext ctx, jobject self, jint param0, jfloat param1, jobject param2, jfloat param3, jfloat param4, jbool param5);
#define VTABLE_mindustry_ai_WaveSpawner_lambda$spawnEnemies$1_int_mindustry_game_SpawnGroup_float_float_float 31
typedef void (*func_mindustry_ai_WaveSpawner_lambda$spawnEnemies$1_int_mindustry_game_SpawnGroup_float_float_float)(jcontext ctx, jobject self, jint param0, jobject param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_mindustry_ai_WaveSpawner_lambda$spawnEnemies$0_float_float_boolean 32
typedef void (*func_mindustry_ai_WaveSpawner_lambda$spawnEnemies$0_float_float_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_mindustry_ai_WaveSpawner_lambda$getFirstSpawn$0_int_int 33
typedef void (*func_mindustry_ai_WaveSpawner_lambda$getFirstSpawn$0_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_ai_WaveSpawner_lambda$new$1_mindustry_game_EventType$TileOverlayChangeEvent 34
typedef void (*func_mindustry_ai_WaveSpawner_lambda$new$1_mindustry_game_EventType$TileOverlayChangeEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_WaveSpawner_lambda$new$0_mindustry_game_EventType$WorldLoadEvent 35
typedef void (*func_mindustry_ai_WaveSpawner_lambda$new$0_mindustry_game_EventType$WorldLoadEvent)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_ai_WaveSpawner(jobject object, jint mark, jint depth);
void clinit_mindustry_ai_WaveSpawner(jcontext ctx);
void init_mindustry_ai_WaveSpawner(jcontext ctx, jobject self);
jobject M_mindustry_ai_WaveSpawner_getFirstSpawn_R_mindustry_world_Tile(jcontext ctx, jobject self);
jint M_mindustry_ai_WaveSpawner_countSpawns_R_int(jcontext ctx, jobject self);
jobject M_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq(jcontext ctx, jobject self);
jbool M_mindustry_ai_WaveSpawner_playerNear_R_boolean(jcontext ctx, jobject self);
void M_mindustry_ai_WaveSpawner_spawnEnemies(jcontext ctx, jobject self);
void M_mindustry_ai_WaveSpawner_spawnUnit_mindustry_game_SpawnGroup_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
void M_mindustry_ai_WaveSpawner_doShockwave_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_ai_WaveSpawner_eachGroundSpawn_arc_func_Intc2(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_WaveSpawner_eachGroundSpawn_int_mindustry_ai_WaveSpawner$SpawnConsumer(jcontext ctx, jobject self, jint param0, jobject param1);
void M_mindustry_ai_WaveSpawner_eachFlyerSpawn_int_arc_func_Floatc2(jcontext ctx, jobject self, jint param0, jobject param1);
jint M_mindustry_ai_WaveSpawner_countGroundSpawns_R_int(jcontext ctx, jobject self);
jint M_mindustry_ai_WaveSpawner_countFlyerSpawns_R_int(jcontext ctx, jobject self);
jbool M_mindustry_ai_WaveSpawner_isSpawning_R_boolean(jcontext ctx, jobject self);
void M_mindustry_ai_WaveSpawner_reset(jcontext ctx, jobject self);
void M_mindustry_ai_WaveSpawner_spawnEffect_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_ai_WaveSpawner_spawnEffect_float_float_float_mindustry_type_UnitType(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3);
void SM_mindustry_ai_WaveSpawner_lambda$spawnEffect$0_float_float(jcontext ctx, jfloat param0, jfloat param1);
void M_mindustry_ai_WaveSpawner_lambda$countFlyerSpawns$0_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_ai_WaveSpawner_lambda$countGroundSpawns$0_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_mindustry_ai_WaveSpawner_lambda$eachGroundSpawn$1_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void SM_mindustry_ai_WaveSpawner_lambda$eachGroundSpawn$0_arc_func_Intc2_float_float_boolean(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jbool param3);
void M_mindustry_ai_WaveSpawner_lambda$spawnEnemies$3(jcontext ctx, jobject self);
void M_mindustry_ai_WaveSpawner_lambda$spawnEnemies$2_int_float_mindustry_game_SpawnGroup_float_float_boolean(jcontext ctx, jobject self, jint param0, jfloat param1, jobject param2, jfloat param3, jfloat param4, jbool param5);
void M_mindustry_ai_WaveSpawner_lambda$spawnEnemies$1_int_mindustry_game_SpawnGroup_float_float_float(jcontext ctx, jobject self, jint param0, jobject param1, jfloat param2, jfloat param3, jfloat param4);
void M_mindustry_ai_WaveSpawner_lambda$spawnEnemies$0_float_float_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
jbool SM_mindustry_ai_WaveSpawner_lambda$playerNear$0_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0);
void M_mindustry_ai_WaveSpawner_lambda$getFirstSpawn$0_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_mindustry_ai_WaveSpawner_lambda$new$1_mindustry_game_EventType$TileOverlayChangeEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ai_WaveSpawner_lambda$new$0_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
