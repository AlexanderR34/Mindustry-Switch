#ifndef HEADER_mindustry_game_Rules
#define HEADER_mindustry_game_Rules

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_Rules {
	java_lang_Object parent;
	jbool F_allowEditRules;
	jbool F_infiniteResources;
	jbool F_coreBuildAndConfig;
	jref F_teams;
	jbool F_waveTimer;
	jbool F_waveSending;
	jbool F_waves;
	jbool F_airUseSpawns;
	jbool F_wavesSpawnAtCores;
	jbool F_pvp;
	jbool F_pvpAutoPause;
	jbool F_pauseDisabled;
	jbool F_waitEnemies;
	jbool F_attackMode;
	jbool F_editor;
	jbool F_derelictRepair;
	jbool F_canGameOver;
	jbool F_coreCapture;
	jbool F_reactorExplosions;
	jbool F_possessionAllowed;
	jbool F_schematicsAllowed;
	jbool F_damageExplosions;
	jbool F_fire;
	jbool F_randomWaveAI;
	jbool F_unitPayloadUpdate;
	jbool F_unitPayloadsExplode;
	jbool F_unitCapVariable;
	jbool F_hideSpawns;
	jfloat F_solarMultiplier;
	jfloat F_unitBuildSpeedMultiplier;
	jfloat F_unitCostMultiplier;
	jfloat F_unitDamageMultiplier;
	jfloat F_unitHealthMultiplier;
	jfloat F_unitCrashDamageMultiplier;
	jfloat F_unitMineSpeedMultiplier;
	jfloat F_unitFactoryActivationDelay;
	jbool F_ghostBlocks;
	jbool F_showOtherTeamPings;
	jbool F_logicUnitControl;
	jbool F_logicUnitBuild;
	jbool F_logicUnitDeconstruct;
	jbool F_worldProcessorPlayerLink;
	jbool F_allowEditWorldProcessors;
	jbool F_disableWorldProcessors;
	jfloat F_blockHealthMultiplier;
	jfloat F_blockDamageMultiplier;
	jfloat F_buildCostMultiplier;
	jfloat F_buildSpeedMultiplier;
	jfloat F_deconstructRefundMultiplier;
	jfloat F_objectiveTimerMultiplier;
	jfloat F_enemyCoreBuildRadius;
	jbool F_polygonCoreProtection;
	jbool F_placeRangeCheck;
	jbool F_cleanupDeadTeams;
	jbool F_onlyDepositCore;
	jbool F_allowCoreUnloaders;
	jfloat F_itemDepositCooldown;
	jbool F_coreDestroyClear;
	jbool F_hideBannedBlocks;
	jbool F_allowEnvironmentDeconstruct;
	jbool F_instantBuild;
	jbool F_blockWhitelist;
	jbool F_unitWhitelist;
	jfloat F_dropZoneRadius;
	jfloat F_waveSpacing;
	jfloat F_initialWaveSpacing;
	jint F_winWave;
	jint F_unitCap;
	jbool F_disableUnitCap;
	jfloat F_dragMultiplier;
	jint F_env;
	jref F_attributes;
	jref F_sector;
	jref F_ambientMusic;
	jref F_darkMusic;
	jbool F_alwaysPlayMusic;
	jbool F_disableMusic;
	jfloat F_musicVolume;
	jref F_spawns;
	jref F_loadout;
	jref F_weather;
	jref F_blockLimits;
	jref F_bannedBlocks;
	jref F_bannedUnits;
	jref F_revealedBlocks;
	jref F_researched;
	jref F_objectives;
	jref F_objectiveFlags;
	jbool F_fog;
	jbool F_staticFog;
	jref F_staticColor;
	jref F_dynamicColor;
	jbool F_lighting;
	jref F_ambientLight;
	jbool F_unitLight;
	jref F_defaultTeam;
	jref F_waveTeam;
	jref F_cloudColor;
	jref F_modeName;
	jref F_mission;
	jbool F_coreIncinerates;
	jbool F_borderDarkness;
	jbool F_limitMapArea;
	jint F_limitX;
	jint F_limitY;
	jint F_limitWidth;
	jint F_limitHeight;
	jbool F_disableOutsideArea;
	jref F_tags;
	jref F_customBackgroundCallback;
	jref F_backgroundTexture;
	jfloat F_backgroundSpeed;
	jfloat F_backgroundScl;
	jfloat F_backgroundOffsetX;
	jfloat F_backgroundOffsetY;
	jref F_planetBackground;
	jref F_planet;
	jbool F_allowLogicData;
} mindustry_game_Rules;

extern Class class_mindustry_game_Rules;


#define VTABLE_mindustry_game_Rules_hashCode_R_int 0
typedef jint (*func_mindustry_game_Rules_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Rules_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_Rules_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Rules_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_Rules_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Rules_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_Rules_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Rules_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_Rules_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Rules_finalize 5
typedef void (*func_mindustry_game_Rules_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Rules_notify 6
typedef void (*func_mindustry_game_Rules_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Rules_notifyAll 7
typedef void (*func_mindustry_game_Rules_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Rules_wait 8
typedef void (*func_mindustry_game_Rules_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Rules_wait_long 9
typedef void (*func_mindustry_game_Rules_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_Rules_wait_long_int 10
typedef void (*func_mindustry_game_Rules_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_Rules_copy_R_mindustry_game_Rules 11
typedef jobject (*func_mindustry_game_Rules_copy_R_mindustry_game_Rules)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Rules_retainContentFields_mindustry_game_Rules 12
typedef void (*func_mindustry_game_Rules_retainContentFields_mindustry_game_Rules)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Rules_mode_R_mindustry_game_Gamemode 13
typedef jobject (*func_mindustry_game_Rules_mode_R_mindustry_game_Gamemode)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Rules_hasEnv_int_R_boolean 14
typedef jbool (*func_mindustry_game_Rules_hasEnv_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_game_Rules_buildRadius_mindustry_game_Team_R_float 15
typedef jfloat (*func_mindustry_game_Rules_buildRadius_mindustry_game_Team_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Rules_unitBuildSpeed_mindustry_game_Team_R_float 16
typedef jfloat (*func_mindustry_game_Rules_unitBuildSpeed_mindustry_game_Team_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Rules_unitCost_mindustry_game_Team_R_float 17
typedef jfloat (*func_mindustry_game_Rules_unitCost_mindustry_game_Team_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Rules_unitDamage_mindustry_game_Team_R_float 18
typedef jfloat (*func_mindustry_game_Rules_unitDamage_mindustry_game_Team_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Rules_unitHealth_mindustry_game_Team_R_float 19
typedef jfloat (*func_mindustry_game_Rules_unitHealth_mindustry_game_Team_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Rules_unitCrashDamage_mindustry_game_Team_R_float 20
typedef jfloat (*func_mindustry_game_Rules_unitCrashDamage_mindustry_game_Team_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Rules_unitMineSpeed_mindustry_game_Team_R_float 21
typedef jfloat (*func_mindustry_game_Rules_unitMineSpeed_mindustry_game_Team_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Rules_blockHealth_mindustry_game_Team_R_float 22
typedef jfloat (*func_mindustry_game_Rules_blockHealth_mindustry_game_Team_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Rules_blockDamage_mindustry_game_Team_R_float 23
typedef jfloat (*func_mindustry_game_Rules_blockDamage_mindustry_game_Team_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Rules_buildSpeed_mindustry_game_Team_R_float 24
typedef jfloat (*func_mindustry_game_Rules_buildSpeed_mindustry_game_Team_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Rules_isBanned_mindustry_world_Block_R_boolean 25
typedef jbool (*func_mindustry_game_Rules_isBanned_mindustry_world_Block_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Rules_isBanned_mindustry_type_UnitType_R_boolean 26
typedef jbool (*func_mindustry_game_Rules_isBanned_mindustry_type_UnitType_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Rules_unitActivationDelay_mindustry_game_Team_R_float 27
typedef jfloat (*func_mindustry_game_Rules_unitActivationDelay_mindustry_game_Team_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Rules_isInfiniteResources_mindustry_game_Team_R_boolean 28
typedef jbool (*func_mindustry_game_Rules_isInfiniteResources_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_game_Rules(jobject object, jint mark, jint depth);
void clinit_mindustry_game_Rules(jcontext ctx);
void init_mindustry_game_Rules(jcontext ctx, jobject self);
jobject M_mindustry_game_Rules_copy_R_mindustry_game_Rules(jcontext ctx, jobject self);
void M_mindustry_game_Rules_retainContentFields_mindustry_game_Rules(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_game_Rules_mode_R_mindustry_game_Gamemode(jcontext ctx, jobject self);
jbool M_mindustry_game_Rules_hasEnv_int_R_boolean(jcontext ctx, jobject self, jint param0);
jfloat M_mindustry_game_Rules_buildRadius_mindustry_game_Team_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_mindustry_game_Rules_unitBuildSpeed_mindustry_game_Team_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_mindustry_game_Rules_unitCost_mindustry_game_Team_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_mindustry_game_Rules_unitDamage_mindustry_game_Team_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_mindustry_game_Rules_unitHealth_mindustry_game_Team_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_mindustry_game_Rules_unitCrashDamage_mindustry_game_Team_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_mindustry_game_Rules_unitMineSpeed_mindustry_game_Team_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_mindustry_game_Rules_blockHealth_mindustry_game_Team_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_mindustry_game_Rules_blockDamage_mindustry_game_Team_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_mindustry_game_Rules_buildSpeed_mindustry_game_Team_R_float(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_game_Rules_isBanned_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_game_Rules_isBanned_mindustry_type_UnitType_R_boolean(jcontext ctx, jobject self, jobject param0);
jfloat M_mindustry_game_Rules_unitActivationDelay_mindustry_game_Team_R_float(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_game_Rules_isInfiniteResources_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_game_Rules_lambda$retainContentFields$0_mindustry_type_ItemStack_R_boolean(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
