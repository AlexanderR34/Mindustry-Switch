#ifndef HEADER_mindustry_gen_Healthc
#define HEADER_mindustry_gen_Healthc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Posc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Healthc {
	java_lang_Object parent;
} mindustry_gen_Healthc;

extern Class class_mindustry_gen_Healthc;


#define INDEX_mindustry_gen_Healthc_damageArmorMult_float_float 0
typedef void (*func_mindustry_gen_Healthc_damageArmorMult_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define INDEX_mindustry_gen_Healthc_damageArmorMult_float_float_boolean 1
typedef void (*func_mindustry_gen_Healthc_damageArmorMult_float_float_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define INDEX_mindustry_gen_Healthc_damagePierce_float 2
typedef void (*func_mindustry_gen_Healthc_damagePierce_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Healthc_damagePierce_float_boolean 3
typedef void (*func_mindustry_gen_Healthc_damagePierce_float_boolean)(jcontext ctx, jobject self, jfloat param0, jbool param1);
#define INDEX_mindustry_gen_Healthc_healFract_float 4
typedef void (*func_mindustry_gen_Healthc_healFract_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Healthc_heal_float 5
typedef void (*func_mindustry_gen_Healthc_heal_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Healthc_damaged_R_boolean 6
typedef jbool (*func_mindustry_gen_Healthc_damaged_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Healthc_dead_R_boolean 7
typedef jbool (*func_mindustry_gen_Healthc_dead_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Healthc_isValid_R_boolean 8
typedef jbool (*func_mindustry_gen_Healthc_isValid_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Healthc_health_R_float 9
typedef jfloat (*func_mindustry_gen_Healthc_health_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Healthc_healthf_R_float 10
typedef jfloat (*func_mindustry_gen_Healthc_healthf_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Healthc_hitTime_R_float 11
typedef jfloat (*func_mindustry_gen_Healthc_hitTime_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Healthc_maxHealth_R_float 12
typedef jfloat (*func_mindustry_gen_Healthc_maxHealth_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Healthc_clampHealth 13
typedef void (*func_mindustry_gen_Healthc_clampHealth)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Healthc_damage_float 14
typedef void (*func_mindustry_gen_Healthc_damage_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Healthc_damage_float_boolean 15
typedef void (*func_mindustry_gen_Healthc_damage_float_boolean)(jcontext ctx, jobject self, jfloat param0, jbool param1);
#define INDEX_mindustry_gen_Healthc_damageContinuous_float 16
typedef void (*func_mindustry_gen_Healthc_damageContinuous_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Healthc_damageContinuousArmorMult_float_float 17
typedef void (*func_mindustry_gen_Healthc_damageContinuousArmorMult_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define INDEX_mindustry_gen_Healthc_damageContinuousPierce_float 18
typedef void (*func_mindustry_gen_Healthc_damageContinuousPierce_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Healthc_dead_boolean 19
typedef void (*func_mindustry_gen_Healthc_dead_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_mindustry_gen_Healthc_heal 20
typedef void (*func_mindustry_gen_Healthc_heal)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Healthc_health_float 21
typedef void (*func_mindustry_gen_Healthc_health_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Healthc_hitTime_float 22
typedef void (*func_mindustry_gen_Healthc_hitTime_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Healthc_kill 23
typedef void (*func_mindustry_gen_Healthc_kill)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Healthc_killed 24
typedef void (*func_mindustry_gen_Healthc_killed)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Healthc_maxHealth_float 25
typedef void (*func_mindustry_gen_Healthc_maxHealth_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Healthc_update 26
typedef void (*func_mindustry_gen_Healthc_update)(jcontext ctx, jobject self);

void mark_mindustry_gen_Healthc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Healthc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
