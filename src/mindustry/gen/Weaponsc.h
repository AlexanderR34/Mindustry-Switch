#ifndef HEADER_mindustry_gen_Weaponsc
#define HEADER_mindustry_gen_Weaponsc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/gen/Velc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Weaponsc {
	java_lang_Object parent;
} mindustry_gen_Weaponsc;

extern Class class_mindustry_gen_Weaponsc;


#define INDEX_mindustry_gen_Weaponsc_aim_float_float 0
typedef void (*func_mindustry_gen_Weaponsc_aim_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define INDEX_mindustry_gen_Weaponsc_aim_float_float_boolean 1
typedef void (*func_mindustry_gen_Weaponsc_aim_float_float_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define INDEX_mindustry_gen_Weaponsc_update 2
typedef void (*func_mindustry_gen_Weaponsc_update)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Weaponsc_mounts_R_Array1_mindustry_entities_units_WeaponMount 3
typedef jobject (*func_mindustry_gen_Weaponsc_mounts_R_Array1_mindustry_entities_units_WeaponMount)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Weaponsc_mounts_Array1_mindustry_entities_units_WeaponMount 4
typedef void (*func_mindustry_gen_Weaponsc_mounts_Array1_mindustry_entities_units_WeaponMount)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Weaponsc_canShoot_R_boolean 5
typedef jbool (*func_mindustry_gen_Weaponsc_canShoot_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Weaponsc_isRotate_R_boolean 6
typedef jbool (*func_mindustry_gen_Weaponsc_isRotate_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Weaponsc_isShooting_R_boolean 7
typedef jbool (*func_mindustry_gen_Weaponsc_isShooting_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Weaponsc_aimX_R_float 8
typedef jfloat (*func_mindustry_gen_Weaponsc_aimX_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Weaponsc_aimY_R_float 9
typedef jfloat (*func_mindustry_gen_Weaponsc_aimY_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Weaponsc_aim_arc_math_geom_Position 10
typedef void (*func_mindustry_gen_Weaponsc_aim_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Weaponsc_aimX_float 11
typedef void (*func_mindustry_gen_Weaponsc_aimX_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Weaponsc_aimY_float 12
typedef void (*func_mindustry_gen_Weaponsc_aimY_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Weaponsc_controlWeapons_boolean_boolean 13
typedef void (*func_mindustry_gen_Weaponsc_controlWeapons_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define INDEX_mindustry_gen_Weaponsc_controlWeapons_boolean 14
typedef void (*func_mindustry_gen_Weaponsc_controlWeapons_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_mindustry_gen_Weaponsc_isShooting_boolean 15
typedef void (*func_mindustry_gen_Weaponsc_isShooting_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_mindustry_gen_Weaponsc_remove 16
typedef void (*func_mindustry_gen_Weaponsc_remove)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Weaponsc_setWeaponRotation_float 17
typedef void (*func_mindustry_gen_Weaponsc_setWeaponRotation_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Weaponsc_setupWeapons_mindustry_type_UnitType 18
typedef void (*func_mindustry_gen_Weaponsc_setupWeapons_mindustry_type_UnitType)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_gen_Weaponsc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Weaponsc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
