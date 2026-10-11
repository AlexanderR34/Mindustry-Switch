#ifndef HEADER_mindustry_type_Weapon
#define HEADER_mindustry_type_Weapon

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Cloneable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_type_Weapon {
	java_lang_Object parent;
	jref F_name;
	jref F_bullet;
	jref F_ejectEffect;
	jbool F_display;
	jbool F_mirror;
	jbool F_flipSprite;
	jbool F_alternate;
	jbool F_rotate;
	jbool F_showStatSprite;
	jfloat F_baseRotation;
	jbool F_top;
	jbool F_continuous;
	jbool F_alwaysContinuous;
	jfloat F_aimChangeSpeed;
	jbool F_controllable;
	jbool F_aiControllable;
	jbool F_alwaysShooting;
	jbool F_autoTarget;
	jbool F_predictTarget;
	jbool F_useAttackRange;
	jfloat F_targetInterval;
	jfloat F_targetSwitchInterval;
	jfloat F_rotateSpeed;
	jfloat F_reload;
	jfloat F_inaccuracy;
	jfloat F_shake;
	jfloat F_recoil;
	jint F_recoils;
	jfloat F_recoilTime;
	jfloat F_recoilPow;
	jfloat F_cooldownTime;
	jfloat F_shootX;
	jfloat F_shootY;
	jfloat F_x;
	jfloat F_y;
	jfloat F_xRand;
	jfloat F_yRand;
	jref F_shoot;
	jfloat F_shadow;
	jfloat F_velocityRnd;
	jfloat F_extraVelocity;
	jfloat F_lifeRnd;
	jfloat F_extraLife;
	jfloat F_shootCone;
	jfloat F_rotationLimit;
	jfloat F_minWarmup;
	jfloat F_shootWarmupSpeed;
	jfloat F_smoothReloadSpeed;
	jbool F_linearWarmup;
	jfloat F_soundPitchMin;
	jfloat F_soundPitchMax;
	jbool F_ignoreRotation;
	jbool F_noAttack;
	jfloat F_minShootVelocity;
	jfloat F_maxShootVelocity;
	jbool F_parentizeEffects;
	jint F_otherSide;
	jfloat F_layerOffset;
	jref F_activeSound;
	jfloat F_activeSoundVolume;
	jref F_shootSound;
	jfloat F_shootSoundVolume;
	jref F_initialShootSound;
	jref F_chargeSound;
	jref F_region;
	jref F_heatRegion;
	jref F_cellRegion;
	jref F_outlineRegion;
	jref F_heatColor;
	jref F_shootStatus;
	jref F_mountType;
	jfloat F_shootStatusDuration;
	jbool F_shootOnDeath;
	jref F_shootOnDeathEffect;
	jref F_parts;
} mindustry_type_Weapon;

extern Class class_mindustry_type_Weapon;


#define VTABLE_mindustry_type_Weapon_hashCode_R_int 0
typedef jint (*func_mindustry_type_Weapon_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weapon_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_type_Weapon_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Weapon_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_type_Weapon_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weapon_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_type_Weapon_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weapon_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_type_Weapon_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weapon_finalize 5
typedef void (*func_mindustry_type_Weapon_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weapon_notify 6
typedef void (*func_mindustry_type_Weapon_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weapon_notifyAll 7
typedef void (*func_mindustry_type_Weapon_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weapon_wait 8
typedef void (*func_mindustry_type_Weapon_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weapon_wait_long 9
typedef void (*func_mindustry_type_Weapon_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_type_Weapon_wait_long_int 10
typedef void (*func_mindustry_type_Weapon_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_type_Weapon_hasStats_mindustry_type_UnitType_R_boolean 11
typedef jbool (*func_mindustry_type_Weapon_hasStats_mindustry_type_UnitType_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Weapon_addStats_mindustry_type_UnitType_arc_scene_ui_layout_Table 12
typedef void (*func_mindustry_type_Weapon_addStats_mindustry_type_UnitType_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_type_Weapon_dps_R_float 13
typedef jfloat (*func_mindustry_type_Weapon_dps_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weapon_shotsPerSec_R_float 14
typedef jfloat (*func_mindustry_type_Weapon_shotsPerSec_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weapon_drawOutline_mindustry_gen_Unit_mindustry_entities_units_WeaponMount 15
typedef void (*func_mindustry_type_Weapon_drawOutline_mindustry_gen_Unit_mindustry_entities_units_WeaponMount)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_type_Weapon_draw_mindustry_gen_Unit_mindustry_entities_units_WeaponMount 16
typedef void (*func_mindustry_type_Weapon_draw_mindustry_gen_Unit_mindustry_entities_units_WeaponMount)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_type_Weapon_range_R_float 17
typedef jfloat (*func_mindustry_type_Weapon_range_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount 18
typedef void (*func_mindustry_type_Weapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_type_Weapon_findTarget_mindustry_gen_Unit_float_float_float_boolean_boolean_R_mindustry_gen_Teamc 19
typedef jobject (*func_mindustry_type_Weapon_findTarget_mindustry_gen_Unit_float_float_float_boolean_boolean_R_mindustry_gen_Teamc)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jbool param4, jbool param5);
#define VTABLE_mindustry_type_Weapon_checkTarget_mindustry_gen_Unit_mindustry_gen_Teamc_float_float_float_R_boolean 20
typedef jbool (*func_mindustry_type_Weapon_checkTarget_mindustry_gen_Unit_mindustry_gen_Teamc_float_float_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_mindustry_type_Weapon_bulletRotation_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_R_float 21
typedef jfloat (*func_mindustry_type_Weapon_bulletRotation_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_R_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_type_Weapon_shoot_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float 22
typedef void (*func_mindustry_type_Weapon_shoot_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_mindustry_type_Weapon_bullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float_mindustry_entities_Mover 23
typedef void (*func_mindustry_type_Weapon_bullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float_mindustry_entities_Mover)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jobject param5);
#define VTABLE_mindustry_type_Weapon_handleBullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_mindustry_gen_Bullet 24
typedef void (*func_mindustry_type_Weapon_handleBullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_type_Weapon_flip 25
typedef void (*func_mindustry_type_Weapon_flip)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weapon_copy_R_mindustry_type_Weapon 26
typedef jobject (*func_mindustry_type_Weapon_copy_R_mindustry_type_Weapon)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weapon_init 27
typedef void (*func_mindustry_type_Weapon_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weapon_load 28
typedef void (*func_mindustry_type_Weapon_load)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weapon_lambda$shoot$0_mindustry_entities_units_WeaponMount_mindustry_gen_Unit_float_float_float_float_mindustry_entities_Mover 29
typedef void (*func_mindustry_type_Weapon_lambda$shoot$0_mindustry_entities_units_WeaponMount_mindustry_gen_Unit_float_float_float_float_mindustry_entities_Mover)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6);
#define VTABLE_mindustry_type_Weapon_lambda$shoot$1_mindustry_entities_units_WeaponMount_int_mindustry_gen_Unit_float_float_float_mindustry_entities_Mover 30
typedef void (*func_mindustry_type_Weapon_lambda$shoot$1_mindustry_entities_units_WeaponMount_int_mindustry_gen_Unit_float_float_float_mindustry_entities_Mover)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jobject param6);

void mark_mindustry_type_Weapon(jobject object, jint mark, jint depth);
void clinit_mindustry_type_Weapon(jcontext ctx);
void init_mindustry_type_Weapon_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_mindustry_type_Weapon(jcontext ctx, jobject self);
jbool M_mindustry_type_Weapon_hasStats_mindustry_type_UnitType_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_Weapon_addStats_mindustry_type_UnitType_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1);
jfloat M_mindustry_type_Weapon_dps_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_type_Weapon_shotsPerSec_R_float(jcontext ctx, jobject self);
void M_mindustry_type_Weapon_drawOutline_mindustry_gen_Unit_mindustry_entities_units_WeaponMount(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_type_Weapon_draw_mindustry_gen_Unit_mindustry_entities_units_WeaponMount(jcontext ctx, jobject self, jobject param0, jobject param1);
jfloat M_mindustry_type_Weapon_range_R_float(jcontext ctx, jobject self);
void M_mindustry_type_Weapon_update_mindustry_gen_Unit_mindustry_entities_units_WeaponMount(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_type_Weapon_findTarget_mindustry_gen_Unit_float_float_float_boolean_boolean_R_mindustry_gen_Teamc(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jbool param4, jbool param5);
jbool M_mindustry_type_Weapon_checkTarget_mindustry_gen_Unit_mindustry_gen_Teamc_float_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4);
jfloat M_mindustry_type_Weapon_bulletRotation_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_R_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3);
void M_mindustry_type_Weapon_shoot_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4);
void M_mindustry_type_Weapon_bullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_float_float_float_mindustry_entities_Mover(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jobject param5);
void M_mindustry_type_Weapon_handleBullet_mindustry_gen_Unit_mindustry_entities_units_WeaponMount_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_type_Weapon_flip(jcontext ctx, jobject self);
jobject M_mindustry_type_Weapon_copy_R_mindustry_type_Weapon(jcontext ctx, jobject self);
void M_mindustry_type_Weapon_init(jcontext ctx, jobject self);
void M_mindustry_type_Weapon_load(jcontext ctx, jobject self);
jobject M_mindustry_type_Weapon_toString_R_java_lang_String(jcontext ctx, jobject self);
void SM_mindustry_type_Weapon_lambda$shoot$2_mindustry_entities_units_WeaponMount(jcontext ctx, jobject param0);
void M_mindustry_type_Weapon_lambda$shoot$0_mindustry_entities_units_WeaponMount_mindustry_gen_Unit_float_float_float_float_mindustry_entities_Mover(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6);
void M_mindustry_type_Weapon_lambda$shoot$1_mindustry_entities_units_WeaponMount_int_mindustry_gen_Unit_float_float_float_mindustry_entities_Mover(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jobject param6);
jbool SM_mindustry_type_Weapon_lambda$findTarget$1_boolean_mindustry_gen_Unit_mindustry_gen_Building_R_boolean(jcontext ctx, jbool param0, jobject param1, jobject param2);
jbool SM_mindustry_type_Weapon_lambda$findTarget$0_boolean_boolean_mindustry_gen_Unit_R_boolean(jcontext ctx, jbool param0, jbool param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
