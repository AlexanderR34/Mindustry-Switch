#ifndef HEADER_mindustry_entities_Damage
#define HEADER_mindustry_entities_Damage

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_Damage {
	java_lang_Object parent;
} mindustry_entities_Damage;

extern Class class_mindustry_entities_Damage;

extern jobject SF_mindustry_entities_Damage_bulletDamageEvent;
extern jobject SF_mindustry_entities_Damage_rect;
extern jobject SF_mindustry_entities_Damage_hitrect;
extern jobject SF_mindustry_entities_Damage_vec;
extern jobject SF_mindustry_entities_Damage_seg1;
extern jobject SF_mindustry_entities_Damage_seg2;
extern jobject SF_mindustry_entities_Damage_collidedBlocks;
extern jobject SF_mindustry_entities_Damage_damages;
extern jobject SF_mindustry_entities_Damage_collided;
extern jobject SF_mindustry_entities_Damage_collidePool;
extern jobject SF_mindustry_entities_Damage_builds;
extern jobject SF_mindustry_entities_Damage_distances;
extern jobject SF_mindustry_entities_Damage_furthest;
extern jfloat SF_mindustry_entities_Damage_maxDst;
extern jobject SF_mindustry_entities_Damage_tmpBuilding;
extern jobject SF_mindustry_entities_Damage_tmpUnit;

#define VTABLE_mindustry_entities_Damage_hashCode_R_int 0
typedef jint (*func_mindustry_entities_Damage_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Damage_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_Damage_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_Damage_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_Damage_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Damage_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_Damage_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Damage_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_Damage_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Damage_finalize 5
typedef void (*func_mindustry_entities_Damage_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Damage_notify 6
typedef void (*func_mindustry_entities_Damage_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Damage_notifyAll 7
typedef void (*func_mindustry_entities_Damage_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Damage_wait 8
typedef void (*func_mindustry_entities_Damage_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Damage_wait_long 9
typedef void (*func_mindustry_entities_Damage_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_Damage_wait_long_int 10
typedef void (*func_mindustry_entities_Damage_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_entities_Damage(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_Damage(jcontext ctx);
void init_mindustry_entities_Damage(jcontext ctx, jobject self);
void SM_mindustry_entities_Damage_applySuppression_mindustry_game_Team_float_float_float_float_float_float_arc_math_geom_Position(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jobject param7);
void SM_mindustry_entities_Damage_applySuppression_mindustry_game_Team_float_float_float_float_float_float_arc_math_geom_Position_arc_graphics_Color(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jobject param7, jobject param8);
void SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jbool param6);
void SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean_mindustry_entities_Effect(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jbool param6, jobject param7);
void SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean_mindustry_entities_Effect_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jbool param6, jobject param7, jfloat param8);
void SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean_boolean_mindustry_game_Team(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jbool param6, jbool param7, jobject param8);
void SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean_boolean_mindustry_game_Team_mindustry_entities_Effect(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jbool param6, jbool param7, jobject param8, jobject param9);
void SM_mindustry_entities_Damage_dynamicExplosion_float_float_float_float_float_float_boolean_boolean_mindustry_game_Team_mindustry_entities_Effect_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jbool param6, jbool param7, jobject param8, jobject param9, jfloat param10);
void SM_mindustry_entities_Damage_createIncend_float_float_float_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jint param3);
jobject SM_mindustry_entities_Damage_findAbsorber_mindustry_game_Team_float_float_float_float_R_mindustry_gen_Building(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
jfloat SM_mindustry_entities_Damage_findLength_mindustry_gen_Bullet_float_boolean_int_R_float(jcontext ctx, jobject param0, jfloat param1, jbool param2, jint param3);
jfloat SM_mindustry_entities_Damage_findLaserLength_mindustry_gen_Bullet_float_R_float(jcontext ctx, jobject param0, jfloat param1);
jfloat SM_mindustry_entities_Damage_findPierceLength_mindustry_gen_Bullet_int_float_R_float(jcontext ctx, jobject param0, jint param1, jfloat param2);
jfloat SM_mindustry_entities_Damage_findPierceLength_mindustry_gen_Bullet_int_boolean_float_R_float(jcontext ctx, jobject param0, jint param1, jbool param2, jfloat param3);
jfloat SM_mindustry_entities_Damage_collideLaser_mindustry_gen_Bullet_float_boolean_boolean_int_R_float(jcontext ctx, jobject param0, jfloat param1, jbool param2, jbool param3, jint param4);
void SM_mindustry_entities_Damage_collideLine_mindustry_gen_Bullet_mindustry_game_Team_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
void SM_mindustry_entities_Damage_collideLine_mindustry_gen_Bullet_mindustry_game_Team_float_float_float_float_boolean(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jbool param6);
void SM_mindustry_entities_Damage_collideLine_mindustry_gen_Bullet_mindustry_game_Team_float_float_float_float_boolean_boolean(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jbool param6, jbool param7);
void SM_mindustry_entities_Damage_collideLine_mindustry_gen_Bullet_mindustry_game_Team_float_float_float_float_boolean_boolean_int(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jbool param6, jbool param7, jint param8);
void SM_mindustry_entities_Damage_collidePoint_mindustry_gen_Bullet_mindustry_game_Team_mindustry_entities_Effect_float_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4);
jobject SM_mindustry_entities_Damage_linecast_mindustry_gen_Bullet_float_float_float_float_R_mindustry_gen_Healthc(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void SM_mindustry_entities_Damage_damageUnits_mindustry_game_Team_float_float_float_float_arc_func_Boolf_arc_func_Cons(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5, jobject param6);
void SM_mindustry_entities_Damage_damage_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean_boolean(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jbool param5, jbool param6);
void SM_mindustry_entities_Damage_status_mindustry_game_Team_float_float_float_mindustry_type_StatusEffect_float_boolean_boolean(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jfloat param5, jbool param6, jbool param7);
void SM_mindustry_entities_Damage_status_mindustry_game_Team_float_float_float_mindustry_type_StatusEffect_float_boolean_boolean_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jfloat param5, jbool param6, jbool param7, jfloat param8);
void SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jbool param5);
void SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean_boolean_boolean(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jbool param5, jbool param6, jbool param7);
void SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean_boolean_boolean_boolean_mindustry_gen_Bullet(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jbool param5, jbool param6, jbool param7, jbool param8, jobject param9);
void SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean_boolean_boolean_boolean_mindustry_gen_Bullet_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jbool param5, jbool param6, jbool param7, jbool param8, jobject param9, jfloat param10);
void SM_mindustry_entities_Damage_tileDamage_mindustry_game_Team_int_int_float_float(jcontext ctx, jobject param0, jint param1, jint param2, jfloat param3, jfloat param4);
void SM_mindustry_entities_Damage_tileDamage_mindustry_game_Team_int_int_float_float_mindustry_gen_Bullet(jcontext ctx, jobject param0, jint param1, jint param2, jfloat param3, jfloat param4, jobject param5);
void SM_mindustry_entities_Damage_completeDamage_mindustry_game_Team_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
jfloat SM_mindustry_entities_Damage_calculateDamage_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
jfloat SM_mindustry_entities_Damage_applyArmor_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1);
void SM_mindustry_entities_Damage_lambda$tileDamage$0_int_int_mindustry_game_Team_float_float_mindustry_gen_Bullet(jcontext ctx, jint param0, jint param1, jobject param2, jfloat param3, jfloat param4, jobject param5);
void SM_mindustry_entities_Damage_lambda$damage$0_mindustry_game_Team_boolean_boolean_float_float_float_boolean_float_float_mindustry_gen_Bullet_boolean_mindustry_gen_Unit(jcontext ctx, jobject param0, jbool param1, jbool param2, jfloat param3, jfloat param4, jfloat param5, jbool param6, jfloat param7, jfloat param8, jobject param9, jbool param10, jobject param11);
void SM_mindustry_entities_Damage_lambda$status$0_mindustry_game_Team_boolean_boolean_float_float_float_float_mindustry_type_StatusEffect_float_mindustry_gen_Unit(jcontext ctx, jobject param0, jbool param1, jbool param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jobject param7, jfloat param8, jobject param9);
void SM_mindustry_entities_Damage_lambda$damageUnits$0_arc_func_Boolf_float_arc_func_Cons_mindustry_gen_Unit(jcontext ctx, jobject param0, jfloat param1, jobject param2, jobject param3);
void SM_mindustry_entities_Damage_lambda$linecast$1_float_float_mindustry_gen_Bullet_float_float_float_mindustry_gen_Unit(jcontext ctx, jfloat param0, jfloat param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jobject param6);
jbool SM_mindustry_entities_Damage_lambda$linecast$0_mindustry_gen_Bullet_int_int_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_mindustry_entities_Damage_lambda$collidePoint$0_mindustry_gen_Bullet_float_float_mindustry_gen_Unit(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3);
void SM_mindustry_entities_Damage_lambda$collideLine$3_mindustry_gen_Bullet_int_Array1_int_mindustry_game_Team_mindustry_entities_Damage$Collided(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3, jobject param4);
jfloat SM_mindustry_entities_Damage_lambda$collideLine$2_mindustry_gen_Bullet_mindustry_entities_Damage$Collided_R_float(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_entities_Damage_lambda$collideLine$1_mindustry_gen_Bullet_float_float_float_float_float_mindustry_gen_Unit(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6);
jbool SM_mindustry_entities_Damage_lambda$collideLine$0_mindustry_gen_Bullet_mindustry_game_Team_boolean_int_int_R_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2, jint param3, jint param4);
void SM_mindustry_entities_Damage_lambda$findPierceLength$1_mindustry_gen_Bullet_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_entities_Damage_lambda$findPierceLength$0_mindustry_gen_Bullet_boolean_int_int_R_boolean(jcontext ctx, jobject param0, jbool param1, jint param2, jint param3);
jbool SM_mindustry_entities_Damage_lambda$findLaserLength$0_mindustry_gen_Bullet_int_int_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2);
jbool SM_mindustry_entities_Damage_lambda$findAbsorber$0_mindustry_game_Team_int_int_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_mindustry_entities_Damage_lambda$dynamicExplosion$2_mindustry_game_Team_float_float_float_float_float_int_int(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jint param6, jint param7);
jbool SM_mindustry_entities_Damage_lambda$dynamicExplosion$3_float_float_float_mindustry_gen_Building_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3);
void SM_mindustry_entities_Damage_lambda$dynamicExplosion$1_float_float(jcontext ctx, jfloat param0, jfloat param1);
void SM_mindustry_entities_Damage_lambda$dynamicExplosion$0_float_float_float_int(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jint param3);
void SM_mindustry_entities_Damage_lambda$applySuppression$2_mindustry_gen_Building_arc_graphics_Color_arc_math_geom_Position(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_entities_Damage_lambda$applySuppression$1_float_arc_graphics_Color_mindustry_gen_Building(jcontext ctx, jfloat param0, jobject param1, jobject param2);
jbool SM_mindustry_entities_Damage_lambda$applySuppression$0_mindustry_game_Team_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
