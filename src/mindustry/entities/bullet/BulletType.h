#ifndef HEADER_mindustry_entities_bullet_BulletType
#define HEADER_mindustry_entities_bullet_BulletType

#include "Clearwing.h"
#include "mindustry/ctype/Content.h"
#include "java/lang/Cloneable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_bullet_BulletType {
	mindustry_ctype_Content parent;
	jfloat F_lifetime;
	jfloat F_lifeScaleRandMin;
	jfloat F_lifeScaleRandMax;
	jfloat F_speed;
	jfloat F_velocityScaleRandMin;
	jfloat F_velocityScaleRandMax;
	jfloat F_damage;
	jfloat F_hitSize;
	jfloat F_drawSize;
	jfloat F_angleOffset;
	jfloat F_randomAngleOffset;
	jfloat F_drag;
	jfloat F_accel;
	jbool F_pierce;
	jbool F_pierceBuilding;
	jint F_pierceCap;
	jfloat F_pierceDamageFactor;
	jfloat F_maxDamageFraction;
	jbool F_removeAfterPierce;
	jbool F_laserAbsorb;
	jbool F_laserBullet;
	jfloat F_optimalLifeFract;
	jfloat F_layer;
	jref F_hitEffect;
	jref F_despawnEffect;
	jref F_shootEffect;
	jref F_shootPattern;
	jref F_chargeEffect;
	jref F_smokeEffect;
	jref F_shootSound;
	jref F_hitSound;
	jref F_despawnSound;
	jfloat F_hitSoundPitch;
	jfloat F_hitSoundPitchRange;
	jfloat F_hitSoundVolume;
	jfloat F_inaccuracy;
	jfloat F_ammoMultiplier;
	jfloat F_reloadMultiplier;
	jfloat F_buildingDamageMultiplier;
	jfloat F_shieldDamageMultiplier;
	jfloat F_recoil;
	jbool F_killShooter;
	jbool F_instantDisappear;
	jfloat F_splashDamage;
	jbool F_scaledSplashDamage;
	jfloat F_knockback;
	jbool F_impact;
	jref F_status;
	jfloat F_statusDuration;
	jref F_unitSort;
	jfloat F_statusChance;
	jbool F_targetBlocks;
	jbool F_targetMissiles;
	jbool F_collidesTiles;
	jbool F_collidesTeam;
	jbool F_collidesAir;
	jbool F_collidesGround;
	jbool F_collides;
	jbool F_collideFloor;
	jbool F_collideTerrain;
	jbool F_keepVelocity;
	jbool F_scaleKeepVelocity;
	jbool F_scaleLife;
	jbool F_hittable;
	jbool F_reflectable;
	jbool F_absorbable;
	jbool F_ignoreSpawnAngle;
	jfloat F_createChance;
	jfloat F_maxRange;
	jfloat F_rangeOverride;
	jfloat F_rangeChange;
	jfloat F_extraRangeMargin;
	jfloat F_range;
	jfloat F_minRangeChange;
	jfloat F_healPercent;
	jfloat F_healAmount;
	jref F_healSound;
	jfloat F_healSoundVolume;
	jfloat F_lifesteal;
	jbool F_makeFire;
	jbool F_hitUnder;
	jbool F_despawnHit;
	jbool F_fragOnHit;
	jbool F_fragOnDespawn;
	jbool F_fragOnAbsorb;
	jbool F_pierceArmor;
	jfloat F_armorMultiplier;
	jfloat F_blockArmorMultiplier;
	jbool F_sticky;
	jfloat F_stickyExtraLifetime;
	jbool F_setDefaults;
	jfloat F_hitShake;
	jfloat F_despawnShake;
	jref F_fragBullet;
	jbool F_delayFrags;
	jfloat F_fragRandomSpread;
	jfloat F_fragSpread;
	jfloat F_fragAngle;
	jint F_fragBullets;
	jfloat F_fragVelocityMin;
	jfloat F_fragVelocityMax;
	jfloat F_fragLifeMin;
	jfloat F_fragLifeMax;
	jfloat F_fragOffsetMin;
	jfloat F_fragOffsetMax;
	jint F_pierceFragCap;
	jref F_intervalBullet;
	jfloat F_bulletInterval;
	jint F_intervalBullets;
	jfloat F_intervalRandomSpread;
	jfloat F_intervalSpread;
	jfloat F_intervalAngle;
	jfloat F_intervalDelay;
	jbool F_underwater;
	jref F_hitColor;
	jref F_healColor;
	jref F_healEffect;
	jref F_spawnBullets;
	jbool F_showStats;
	jfloat F_spawnBulletRandomSpread;
	jref F_spawnUnit;
	jref F_despawnUnit;
	jfloat F_despawnUnitChance;
	jint F_despawnUnitCount;
	jfloat F_despawnUnitRadius;
	jbool F_faceOutwards;
	jref F_parts;
	jref F_trailColor;
	jfloat F_trailChance;
	jfloat F_trailInterval;
	jfloat F_trailMinVelocity;
	jref F_trailEffect;
	jfloat F_trailSpread;
	jfloat F_trailParam;
	jbool F_trailRotation;
	jref F_trailInterp;
	jint F_trailLength;
	jfloat F_trailWidth;
	jfloat F_trailSinMag;
	jfloat F_trailSinScl;
	jbool F_circleShooter;
	jfloat F_circleShooterRadius;
	jfloat F_circleShooterRadiusSmooth;
	jfloat F_circleShooterRotateSpeed;
	jfloat F_splashDamageRadius;
	jbool F_splashDamagePierce;
	jint F_incendAmount;
	jfloat F_incendSpread;
	jfloat F_incendChance;
	jfloat F_homingPower;
	jfloat F_homingRange;
	jfloat F_homingDelay;
	jfloat F_followAimSpeed;
	jfloat F_suppressionRange;
	jfloat F_suppressionDuration;
	jfloat F_suppressionEffectChance;
	jref F_suppressColor;
	jref F_lightningColor;
	jint F_lightning;
	jint F_lightningLength;
	jint F_lightningLengthRand;
	jfloat F_lightningDamage;
	jfloat F_lightningCone;
	jfloat F_lightningAngle;
	jref F_lightningType;
	jfloat F_weaveScale;
	jfloat F_weaveMag;
	jbool F_weaveRandom;
	jfloat F_rotateSpeed;
	jint F_puddles;
	jfloat F_puddleRange;
	jfloat F_puddleAmount;
	jref F_puddleLiquid;
	jbool F_displayAmmoMultiplier;
	jfloat F_statLiquidConsumed;
	jfloat F_lightRadius;
	jfloat F_lightOpacity;
	jref F_lightColor;
	jfloat F_cachedDps;
} mindustry_entities_bullet_BulletType;

extern Class class_mindustry_entities_bullet_BulletType;

extern jobject SF_mindustry_entities_bullet_BulletType_bulletDamageEvent;
extern jobject SF_mindustry_entities_bullet_BulletType_bulletCreateEvent;

#define VTABLE_mindustry_entities_bullet_BulletType_hashCode_R_int 0
typedef jint (*func_mindustry_entities_bullet_BulletType_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_bullet_BulletType_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_bullet_BulletType_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_bullet_BulletType_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_bullet_BulletType_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_bullet_BulletType_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_bullet_BulletType_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_bullet_BulletType_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_bullet_BulletType_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_bullet_BulletType_finalize 5
typedef void (*func_mindustry_entities_bullet_BulletType_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_bullet_BulletType_notify 6
typedef void (*func_mindustry_entities_bullet_BulletType_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_bullet_BulletType_notifyAll 7
typedef void (*func_mindustry_entities_bullet_BulletType_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_bullet_BulletType_wait 8
typedef void (*func_mindustry_entities_bullet_BulletType_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_bullet_BulletType_wait_long 9
typedef void (*func_mindustry_entities_bullet_BulletType_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_bullet_BulletType_wait_long_int 10
typedef void (*func_mindustry_entities_bullet_BulletType_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_bullet_BulletType_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_entities_bullet_BulletType_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_bullet_BulletType_getContentType_R_mindustry_ctype_ContentType 12
typedef jobject (*func_mindustry_entities_bullet_BulletType_getContentType_R_mindustry_ctype_ContentType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_bullet_BulletType_removeContent 13
typedef void (*func_mindustry_entities_bullet_BulletType_removeContent)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_bullet_BulletType_init 14
typedef void (*func_mindustry_entities_bullet_BulletType_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_bullet_BulletType_postInit 15
typedef void (*func_mindustry_entities_bullet_BulletType_postInit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_bullet_BulletType_afterPatch 16
typedef void (*func_mindustry_entities_bullet_BulletType_afterPatch)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_bullet_BulletType_load 17
typedef void (*func_mindustry_entities_bullet_BulletType_load)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_bullet_BulletType_loadIcon 18
typedef void (*func_mindustry_entities_bullet_BulletType_loadIcon)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_bullet_BulletType_hasErrored_R_boolean 19
typedef jbool (*func_mindustry_entities_bullet_BulletType_hasErrored_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_bullet_BulletType_isVanilla_R_boolean 20
typedef jbool (*func_mindustry_entities_bullet_BulletType_isVanilla_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_bullet_BulletType_isModded_R_boolean 21
typedef jbool (*func_mindustry_entities_bullet_BulletType_isModded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_bullet_BulletType_isPatchContent_R_boolean 22
typedef jbool (*func_mindustry_entities_bullet_BulletType_isPatchContent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_bullet_BulletType_compareTo_mindustry_ctype_Content_R_int 23
typedef jint (*func_mindustry_entities_bullet_BulletType_compareTo_mindustry_ctype_Content_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_bullet_BulletType_copy_R_mindustry_entities_bullet_BulletType 24
typedef jobject (*func_mindustry_entities_bullet_BulletType_copy_R_mindustry_entities_bullet_BulletType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_bullet_BulletType_estimateDPS_R_float 25
typedef jfloat (*func_mindustry_entities_bullet_BulletType_estimateDPS_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_bullet_BulletType_calculateRange_R_float 26
typedef jfloat (*func_mindustry_entities_bullet_BulletType_calculateRange_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_bullet_BulletType_continuousDamage_R_float 27
typedef jfloat (*func_mindustry_entities_bullet_BulletType_continuousDamage_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_bullet_BulletType_heals_R_boolean 28
typedef jbool (*func_mindustry_entities_bullet_BulletType_heals_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_bullet_BulletType_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean 29
typedef jbool (*func_mindustry_entities_bullet_BulletType_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_entities_bullet_BulletType_hitTile_mindustry_gen_Bullet_mindustry_gen_Building_float_float_float_boolean 30
typedef void (*func_mindustry_entities_bullet_BulletType_hitTile_mindustry_gen_Bullet_mindustry_gen_Building_float_float_float_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jbool param5);
#define VTABLE_mindustry_entities_bullet_BulletType_hitEntity_mindustry_gen_Bullet_mindustry_gen_Hitboxc_float 31
typedef void (*func_mindustry_entities_bullet_BulletType_hitEntity_mindustry_gen_Bullet_mindustry_gen_Hitboxc_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);
#define VTABLE_mindustry_entities_bullet_BulletType_handlePierce_mindustry_gen_Bullet_float_float_float 32
typedef void (*func_mindustry_entities_bullet_BulletType_handlePierce_mindustry_gen_Bullet_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_entities_bullet_BulletType_damageMultiplier_mindustry_gen_Bullet_R_float 33
typedef jfloat (*func_mindustry_entities_bullet_BulletType_damageMultiplier_mindustry_gen_Bullet_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet 34
typedef void (*func_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float 35
typedef void (*func_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float_boolean 36
typedef void (*func_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jbool param3);
#define VTABLE_mindustry_entities_bullet_BulletType_createIncend_mindustry_gen_Bullet_float_float 37
typedef void (*func_mindustry_entities_bullet_BulletType_createIncend_mindustry_gen_Bullet_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_bullet_BulletType_createPuddles_mindustry_gen_Bullet_float_float 38
typedef void (*func_mindustry_entities_bullet_BulletType_createPuddles_mindustry_gen_Bullet_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_bullet_BulletType_createSplashDamage_mindustry_gen_Bullet_float_float 39
typedef void (*func_mindustry_entities_bullet_BulletType_createSplashDamage_mindustry_gen_Bullet_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_bullet_BulletType_createFrags_mindustry_gen_Bullet_float_float 40
typedef void (*func_mindustry_entities_bullet_BulletType_createFrags_mindustry_gen_Bullet_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_bullet_BulletType_createUnits_mindustry_gen_Bullet_float_float 41
typedef void (*func_mindustry_entities_bullet_BulletType_createUnits_mindustry_gen_Bullet_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_bullet_BulletType_despawned_mindustry_gen_Bullet 42
typedef void (*func_mindustry_entities_bullet_BulletType_despawned_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_bullet_BulletType_removed_mindustry_gen_Bullet 43
typedef void (*func_mindustry_entities_bullet_BulletType_removed_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_bullet_BulletType_buildingDamage_mindustry_gen_Bullet_R_float 44
typedef jfloat (*func_mindustry_entities_bullet_BulletType_buildingDamage_mindustry_gen_Bullet_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_bullet_BulletType_shieldDamage_mindustry_gen_Bullet_R_float 45
typedef jfloat (*func_mindustry_entities_bullet_BulletType_shieldDamage_mindustry_gen_Bullet_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_bullet_BulletType_draw_mindustry_gen_Bullet 46
typedef void (*func_mindustry_entities_bullet_BulletType_draw_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_bullet_BulletType_drawTrail_mindustry_gen_Bullet 47
typedef void (*func_mindustry_entities_bullet_BulletType_drawTrail_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_bullet_BulletType_drawParts_mindustry_gen_Bullet 48
typedef void (*func_mindustry_entities_bullet_BulletType_drawParts_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_bullet_BulletType_drawLight_mindustry_gen_Bullet 49
typedef void (*func_mindustry_entities_bullet_BulletType_drawLight_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_bullet_BulletType_init_mindustry_gen_Bullet 50
typedef void (*func_mindustry_entities_bullet_BulletType_init_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_bullet_BulletType_update_mindustry_gen_Bullet 51
typedef void (*func_mindustry_entities_bullet_BulletType_update_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_bullet_BulletType_updateBulletInterval_mindustry_gen_Bullet 52
typedef void (*func_mindustry_entities_bullet_BulletType_updateBulletInterval_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_bullet_BulletType_updateHoming_mindustry_gen_Bullet 53
typedef void (*func_mindustry_entities_bullet_BulletType_updateHoming_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_bullet_BulletType_updateWeaving_mindustry_gen_Bullet 54
typedef void (*func_mindustry_entities_bullet_BulletType_updateWeaving_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_bullet_BulletType_updateTrailEffects_mindustry_gen_Bullet 55
typedef void (*func_mindustry_entities_bullet_BulletType_updateTrailEffects_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_bullet_BulletType_updateTrail_mindustry_gen_Bullet 56
typedef void (*func_mindustry_entities_bullet_BulletType_updateTrail_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Teamc_float_float_float_R_mindustry_gen_Bullet 57
typedef jobject (*func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Teamc_float_float_float_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_R_mindustry_gen_Bullet 58
typedef jobject (*func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_R_mindustry_gen_Bullet 59
typedef jobject (*func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
#define VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_R_mindustry_gen_Bullet 60
typedef jobject (*func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6);
#define VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_mindustry_entities_Mover_R_mindustry_gen_Bullet 61
typedef jobject (*func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_mindustry_entities_Mover_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jobject param7);
#define VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_R_mindustry_gen_Bullet 62
typedef jobject (*func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_float_float_R_mindustry_gen_Bullet 63
typedef jobject (*func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_float_float_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
#define VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_float_R_mindustry_gen_Bullet 64
typedef jobject (*func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_float_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_R_mindustry_gen_Bullet 65
typedef jobject (*func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jobject param8);
#define VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_R_mindustry_gen_Bullet 66
typedef jobject (*func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jobject param8, jobject param9);
#define VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet 67
typedef jobject (*func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jobject param8, jobject param9, jfloat param10, jfloat param11);
#define VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet 68
typedef jobject (*func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jobject param9, jobject param10, jfloat param11, jfloat param12);
#define VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_mindustry_gen_Teamc_R_mindustry_gen_Bullet 69
typedef jobject (*func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_mindustry_gen_Teamc_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jobject param9, jobject param10, jfloat param11, jfloat param12, jobject param13);
#define VTABLE_mindustry_entities_bullet_BulletType_createNet_mindustry_game_Team_float_float_float_float_float_float 70
typedef void (*func_mindustry_entities_bullet_BulletType_createNet_mindustry_game_Team_float_float_float_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6);
#define VTABLE_mindustry_entities_bullet_BulletType_lambda$updateHoming$3_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean 71
typedef jbool (*func_mindustry_entities_bullet_BulletType_lambda$updateHoming$3_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_entities_bullet_BulletType_lambda$updateHoming$2_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean 72
typedef jbool (*func_mindustry_entities_bullet_BulletType_lambda$updateHoming$2_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_entities_bullet_BulletType_lambda$updateHoming$1_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean 73
typedef jbool (*func_mindustry_entities_bullet_BulletType_lambda$updateHoming$1_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_entities_bullet_BulletType_lambda$updateHoming$0_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean 74
typedef jbool (*func_mindustry_entities_bullet_BulletType_lambda$updateHoming$0_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_entities_bullet_BulletType_lambda$createSplashDamage$0_mindustry_gen_Building 75
typedef void (*func_mindustry_entities_bullet_BulletType_lambda$createSplashDamage$0_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_bullet_BulletType_lambda$hit$0_mindustry_gen_Bullet_float_float 76
typedef void (*func_mindustry_entities_bullet_BulletType_lambda$hit$0_mindustry_gen_Bullet_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);

void mark_mindustry_entities_bullet_BulletType(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_bullet_BulletType(jcontext ctx);
void init_mindustry_entities_bullet_BulletType_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void init_mindustry_entities_bullet_BulletType(jcontext ctx, jobject self);
jobject M_mindustry_entities_bullet_BulletType_copy_R_mindustry_entities_bullet_BulletType(jcontext ctx, jobject self);
void M_mindustry_entities_bullet_BulletType_afterPatch(jcontext ctx, jobject self);
void M_mindustry_entities_bullet_BulletType_load(jcontext ctx, jobject self);
jfloat M_mindustry_entities_bullet_BulletType_estimateDPS_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_entities_bullet_BulletType_calculateRange_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_entities_bullet_BulletType_continuousDamage_R_float(jcontext ctx, jobject self);
jbool M_mindustry_entities_bullet_BulletType_heals_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_entities_bullet_BulletType_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_entities_bullet_BulletType_hitTile_mindustry_gen_Bullet_mindustry_gen_Building_float_float_float_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jbool param5);
void M_mindustry_entities_bullet_BulletType_hitEntity_mindustry_gen_Bullet_mindustry_gen_Hitboxc_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);
void M_mindustry_entities_bullet_BulletType_handlePierce_mindustry_gen_Bullet_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
jfloat M_mindustry_entities_bullet_BulletType_damageMultiplier_mindustry_gen_Bullet_R_float(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
void M_mindustry_entities_bullet_BulletType_hit_mindustry_gen_Bullet_float_float_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jbool param3);
void M_mindustry_entities_bullet_BulletType_createIncend_mindustry_gen_Bullet_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
void M_mindustry_entities_bullet_BulletType_createPuddles_mindustry_gen_Bullet_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
void M_mindustry_entities_bullet_BulletType_createSplashDamage_mindustry_gen_Bullet_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
void M_mindustry_entities_bullet_BulletType_createFrags_mindustry_gen_Bullet_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
void M_mindustry_entities_bullet_BulletType_createUnits_mindustry_gen_Bullet_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
void M_mindustry_entities_bullet_BulletType_despawned_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_bullet_BulletType_removed_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0);
jfloat M_mindustry_entities_bullet_BulletType_buildingDamage_mindustry_gen_Bullet_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_mindustry_entities_bullet_BulletType_shieldDamage_mindustry_gen_Bullet_R_float(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_bullet_BulletType_draw_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_bullet_BulletType_drawTrail_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_bullet_BulletType_drawParts_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_bullet_BulletType_drawLight_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_bullet_BulletType_init_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_bullet_BulletType_update_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_bullet_BulletType_updateBulletInterval_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_bullet_BulletType_updateHoming_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_bullet_BulletType_updateWeaving_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_bullet_BulletType_updateTrailEffects_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_bullet_BulletType_updateTrail_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_bullet_BulletType_init(jcontext ctx, jobject self);
jobject M_mindustry_entities_bullet_BulletType_getContentType_R_mindustry_ctype_ContentType(jcontext ctx, jobject self);
jobject M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Teamc_float_float_float_R_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
jobject M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_R_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4);
jobject M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_R_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
jobject M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_R_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6);
jobject M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_mindustry_entities_Mover_R_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jobject param7);
jobject M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_R_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
jobject M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_float_float_R_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
jobject M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Bullet_float_float_float_float_R_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
jobject M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_R_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jobject param8);
jobject M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_R_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jobject param8, jobject param9);
jobject M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jobject param8, jobject param9, jfloat param10, jfloat param11);
jobject M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jobject param9, jobject param10, jfloat param11, jfloat param12);
jobject M_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_mindustry_gen_Teamc_R_mindustry_gen_Bullet(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jobject param9, jobject param10, jfloat param11, jfloat param12, jobject param13);
void M_mindustry_entities_bullet_BulletType_createNet_mindustry_game_Team_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6);
void SM_mindustry_entities_bullet_BulletType_createBullet_mindustry_entities_bullet_BulletType_mindustry_game_Team_float_float_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
jbool M_mindustry_entities_bullet_BulletType_lambda$updateHoming$3_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_mindustry_entities_bullet_BulletType_lambda$updateHoming$2_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_mindustry_entities_bullet_BulletType_lambda$updateHoming$1_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_mindustry_entities_bullet_BulletType_lambda$updateHoming$0_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
void SM_mindustry_entities_bullet_BulletType_lambda$createSplashDamage$2_mindustry_gen_Building(jcontext ctx, jobject param0);
jbool SM_mindustry_entities_bullet_BulletType_lambda$createSplashDamage$1_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0, jobject param1);
void M_mindustry_entities_bullet_BulletType_lambda$createSplashDamage$0_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_bullet_BulletType_lambda$hit$0_mindustry_gen_Bullet_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);

#ifdef __cplusplus
}
#endif

#endif
