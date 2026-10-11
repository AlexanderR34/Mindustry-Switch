#ifndef HEADER_mindustry_entities_Units
#define HEADER_mindustry_entities_Units

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_Units {
	java_lang_Object parent;
} mindustry_entities_Units;

extern Class class_mindustry_entities_Units;

extern jobject SF_mindustry_entities_Units_hitrect;
extern jobject SF_mindustry_entities_Units_result;
extern jfloat SF_mindustry_entities_Units_cdist;
extern jfloat SF_mindustry_entities_Units_cpriority;
extern jint SF_mindustry_entities_Units_intResult;
extern jobject SF_mindustry_entities_Units_buildResult;
extern jbool SF_mindustry_entities_Units_anyEntityGround;
extern jfloat SF_mindustry_entities_Units_aeX;
extern jfloat SF_mindustry_entities_Units_aeY;
extern jfloat SF_mindustry_entities_Units_aeW;
extern jfloat SF_mindustry_entities_Units_aeH;
extern jobject SF_mindustry_entities_Units_anyEntityLambda;

#define VTABLE_mindustry_entities_Units_hashCode_R_int 0
typedef jint (*func_mindustry_entities_Units_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Units_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_Units_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_Units_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_Units_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Units_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_Units_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Units_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_Units_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Units_finalize 5
typedef void (*func_mindustry_entities_Units_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Units_notify 6
typedef void (*func_mindustry_entities_Units_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Units_notifyAll 7
typedef void (*func_mindustry_entities_Units_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Units_wait 8
typedef void (*func_mindustry_entities_Units_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Units_wait_long 9
typedef void (*func_mindustry_entities_Units_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_Units_wait_long_int 10
typedef void (*func_mindustry_entities_Units_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_entities_Units(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_Units(jcontext ctx);
void init_mindustry_entities_Units(jcontext ctx, jobject self);
void SM_mindustry_entities_Units_notifyUnitSpawn_mindustry_gen_Unit(jcontext ctx, jobject param0);
void SM_mindustry_entities_Units_unitSpawn_mindustry_entities_Units$UnitSyncContainer(jcontext ctx, jobject param0);
void SM_mindustry_entities_Units_unitCapDeath_mindustry_gen_Unit(jcontext ctx, jobject param0);
void SM_mindustry_entities_Units_unitEnvDeath_mindustry_gen_Unit(jcontext ctx, jobject param0);
void SM_mindustry_entities_Units_unitDeath_int(jcontext ctx, jint param0);
void SM_mindustry_entities_Units_unitDestroy_int(jcontext ctx, jint param0);
void SM_mindustry_entities_Units_unitDespawn_mindustry_gen_Unit(jcontext ctx, jobject param0);
void SM_mindustry_entities_Units_unitSafeDeath_mindustry_gen_Unit(jcontext ctx, jobject param0);
jbool SM_mindustry_entities_Units_canCreate_mindustry_game_Team_mindustry_type_UnitType_R_boolean(jcontext ctx, jobject param0, jobject param1);
jint SM_mindustry_entities_Units_getCap_mindustry_game_Team_R_int(jcontext ctx, jobject param0);
jobject SM_mindustry_entities_Units_getStringCap_mindustry_game_Team_R_java_lang_String(jcontext ctx, jobject param0);
jbool SM_mindustry_entities_Units_canInteract_mindustry_gen_Player_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_entities_Units_isHittable_mindustry_gen_Posc_boolean_boolean_R_boolean(jcontext ctx, jobject param0, jbool param1, jbool param2);
jbool SM_mindustry_entities_Units_invalidateTarget_mindustry_gen_Posc_mindustry_game_Team_float_float_float_R_boolean(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4);
jbool SM_mindustry_entities_Units_invalidateTarget_mindustry_gen_Posc_mindustry_game_Team_float_float_R_boolean(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3);
jbool SM_mindustry_entities_Units_invalidateTarget_mindustry_gen_Teamc_mindustry_gen_Unit_float_R_boolean(jcontext ctx, jobject param0, jobject param1, jfloat param2);
jbool SM_mindustry_entities_Units_anyEntities_mindustry_world_Tile_boolean_R_boolean(jcontext ctx, jobject param0, jbool param1);
jbool SM_mindustry_entities_Units_anyEntities_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_entities_Units_anyEntities_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jbool SM_mindustry_entities_Units_anyEntities_float_float_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jbool SM_mindustry_entities_Units_anyEntities_float_float_float_float_boolean_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jbool param4);
jbool SM_mindustry_entities_Units_anyEntities_float_float_float_float_arc_func_Boolf_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
jobject SM_mindustry_entities_Units_findDamagedTile_mindustry_game_Team_float_float_R_mindustry_gen_Building(jcontext ctx, jobject param0, jfloat param1, jfloat param2);
jobject SM_mindustry_entities_Units_findAllyTile_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Building(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
jobject SM_mindustry_entities_Units_findEnemyTile_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Building(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
jobject SM_mindustry_entities_Units_closestBuilding_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Building(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
void SM_mindustry_entities_Units_nearbyBuildings_float_float_float_arc_func_Cons(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3);
jobject SM_mindustry_entities_Units_closestTarget_mindustry_game_Team_float_float_float_R_mindustry_gen_Teamc(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3);
jobject SM_mindustry_entities_Units_closestTarget_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Teamc(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
jobject SM_mindustry_entities_Units_closestTarget_mindustry_game_Team_float_float_float_arc_func_Boolf_arc_func_Boolf_R_mindustry_gen_Teamc(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5);
jobject SM_mindustry_entities_Units_closestTarget_mindustry_game_Team_float_float_float_mindustry_game_Team_arc_func_Boolf_arc_func_Boolf_R_mindustry_gen_Teamc(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5, jobject param6);
jobject SM_mindustry_entities_Units_bestTarget_mindustry_game_Team_float_float_float_arc_func_Boolf_arc_func_Boolf_mindustry_entities_Units$Sortf_R_mindustry_gen_Teamc(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5, jobject param6);
jobject SM_mindustry_entities_Units_closestEnemy_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Unit(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
jobject SM_mindustry_entities_Units_bestEnemy_mindustry_game_Team_float_float_float_arc_func_Boolf_mindustry_entities_Units$Sortf_R_mindustry_gen_Unit(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5);
jobject SM_mindustry_entities_Units_closest_mindustry_game_Team_float_float_arc_func_Boolf_R_mindustry_gen_Unit(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3);
jobject SM_mindustry_entities_Units_closest_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Unit(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
jobject SM_mindustry_entities_Units_closest_mindustry_game_Team_float_float_float_arc_func_Boolf_mindustry_entities_Units$Sortf_R_mindustry_gen_Unit(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5);
jobject SM_mindustry_entities_Units_closestOverlap_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Unit(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
jint SM_mindustry_entities_Units_count_float_float_float_arc_func_Boolf_R_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3);
jint SM_mindustry_entities_Units_count_float_float_float_float_arc_func_Boolf_R_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
jbool SM_mindustry_entities_Units_any_float_float_float_float_arc_func_Boolf_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
void SM_mindustry_entities_Units_nearby_mindustry_game_Team_float_float_float_float_arc_func_Cons(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5);
void SM_mindustry_entities_Units_nearby_mindustry_game_Team_float_float_float_arc_func_Cons(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
void SM_mindustry_entities_Units_nearby_float_float_float_float_arc_func_Cons(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
jbool SM_mindustry_entities_Units_nearbyCheck_float_float_float_float_arc_func_Boolf_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
void SM_mindustry_entities_Units_nearby_arc_math_geom_Rect_arc_func_Cons(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_entities_Units_nearbyEnemies_mindustry_game_Team_float_float_float_float_arc_func_Cons(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5);
void SM_mindustry_entities_Units_nearbyEnemies_mindustry_game_Team_float_float_float_arc_func_Cons(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
void SM_mindustry_entities_Units_nearbyEnemies_mindustry_game_Team_arc_math_geom_Rect_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2);
jbool SM_mindustry_entities_Units_nearEnemy_mindustry_game_Team_float_float_float_float_R_boolean(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void SM_mindustry_entities_Units_lambda$nearbyEnemies$0_float_float_float_arc_func_Cons_mindustry_gen_Unit(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4);
void SM_mindustry_entities_Units_lambda$nearby$0_float_float_float_arc_func_Cons_mindustry_gen_Unit(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3, jobject param4);
void SM_mindustry_entities_Units_lambda$count$0_arc_func_Boolf_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_entities_Units_lambda$closestOverlap$0_arc_func_Boolf_float_float_mindustry_gen_Unit(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3);
void SM_mindustry_entities_Units_lambda$closest$1_arc_func_Boolf_mindustry_entities_Units$Sortf_float_float_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jobject param4);
void SM_mindustry_entities_Units_lambda$closest$0_arc_func_Boolf_float_float_mindustry_gen_Unit(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3);
void SM_mindustry_entities_Units_lambda$bestEnemy$0_arc_func_Boolf_float_float_float_mindustry_game_Team_mindustry_entities_Units$Sortf_mindustry_gen_Unit(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5, jobject param6);
void SM_mindustry_entities_Units_lambda$closestEnemy$0_arc_func_Boolf_mindustry_game_Team_float_float_float_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jobject param5);
jbool SM_mindustry_entities_Units_lambda$closestTarget$0_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_entities_Units_lambda$closestBuilding$0_arc_func_Boolf_float_float_float_mindustry_gen_Building(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
jfloat SM_mindustry_entities_Units_lambda$findDamagedTile$0_float_float_mindustry_gen_Building_R_float(jcontext ctx, jfloat param0, jfloat param1, jobject param2);
jbool SM_mindustry_entities_Units_lambda$anyEntities$0_arc_func_Boolf_float_float_float_float_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5);
void SM_mindustry_entities_Units_lambda$unitEnvDeath$0_mindustry_gen_Unit(jcontext ctx, jobject param0);
void SM_mindustry_entities_Units_lambda$unitCapDeath$0_mindustry_gen_Unit(jcontext ctx, jobject param0);
jbool SM_mindustry_entities_Units_lambda$static$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
