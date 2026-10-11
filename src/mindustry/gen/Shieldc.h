#ifndef HEADER_mindustry_gen_Shieldc
#define HEADER_mindustry_gen_Shieldc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Healthc.h"
#include "mindustry/gen/Posc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Shieldc {
	java_lang_Object parent;
} mindustry_gen_Shieldc;

extern Class class_mindustry_gen_Shieldc;


#define INDEX_mindustry_gen_Shieldc_shield_R_float 0
typedef jfloat (*func_mindustry_gen_Shieldc_shield_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Shieldc_shield_float 1
typedef void (*func_mindustry_gen_Shieldc_shield_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Shieldc_shieldAlpha_R_float 2
typedef jfloat (*func_mindustry_gen_Shieldc_shieldAlpha_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Shieldc_shieldAlpha_float 3
typedef void (*func_mindustry_gen_Shieldc_shieldAlpha_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Shieldc_armor_R_float 4
typedef jfloat (*func_mindustry_gen_Shieldc_armor_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Shieldc_armor_float 5
typedef void (*func_mindustry_gen_Shieldc_armor_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Shieldc_damage_float 6
typedef void (*func_mindustry_gen_Shieldc_damage_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Shieldc_damageArmorMult_float_float_boolean 7
typedef void (*func_mindustry_gen_Shieldc_damageArmorMult_float_float_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define INDEX_mindustry_gen_Shieldc_damagePierce_float_boolean 8
typedef void (*func_mindustry_gen_Shieldc_damagePierce_float_boolean)(jcontext ctx, jobject self, jfloat param0, jbool param1);
#define INDEX_mindustry_gen_Shieldc_rawDamage_float 9
typedef void (*func_mindustry_gen_Shieldc_rawDamage_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Shieldc_update 10
typedef void (*func_mindustry_gen_Shieldc_update)(jcontext ctx, jobject self);

void mark_mindustry_gen_Shieldc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Shieldc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
