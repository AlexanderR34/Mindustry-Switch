#ifndef HEADER_mindustry_type_UnitType
#define HEADER_mindustry_type_UnitType

#include "Clearwing.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/logic/Senseable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_type_UnitType {
	mindustry_ctype_UnlockableContent parent;
	jint F_envRequired;
	jint F_envEnabled;
	jint F_envDisabled;
	jfloat F_speed;
	jfloat F_boostMultiplier;
	jfloat F_floorMultiplier;
	jfloat F_rotateSpeed;
	jfloat F_baseRotateSpeed;
	jfloat F_drag;
	jfloat F_accel;
	jfloat F_hitSize;
	jfloat F_deathShake;
	jfloat F_stepShake;
	jfloat F_rippleScale;
	jfloat F_riseSpeed;
	jfloat F_descentSpeed;
	jfloat F_fallSpeed;
	jfloat F_missileAccelTime;
	jfloat F_health;
	jfloat F_armor;
	jfloat F_range;
	jfloat F_maxRange;
	jfloat F_mineRange;
	jfloat F_buildRange;
	jfloat F_circleTargetRadius;
	jfloat F_crashDamageMultiplier;
	jfloat F_wreckHealthMultiplier;
	jfloat F_dpsEstimate;
	jfloat F_clipSize;
	jfloat F_drownTimeMultiplier;
	jfloat F_strafePenalty;
	jfloat F_researchCostMultiplier;
	jfloat F_knockbackMultiplier;
	jfloat F_groundLayer;
	jfloat F_flyingLayer;
	jfloat F_payloadCapacity;
	jfloat F_buildSpeed;
	jfloat F_aimDst;
	jfloat F_buildBeamOffset;
	jfloat F_mineBeamOffset;
	jfloat F_targetPriority;
	jfloat F_shadowElevation;
	jfloat F_shadowElevationScl;
	jfloat F_engineOffset;
	jfloat F_engineSize;
	jfloat F_engineLayer;
	jfloat F_itemOffsetY;
	jfloat F_lightRadius;
	jfloat F_lightOpacity;
	jfloat F_softShadowScl;
	jfloat F_fogRadius;
	jfloat F_waveTrailX;
	jfloat F_waveTrailY;
	jfloat F_trailScl;
	jbool F_isEnemy;
	jbool F_flying;
	jbool F_wobble;
	jbool F_targetAir;
	jbool F_targetGround;
	jbool F_faceTarget;
	jbool F_circleTarget;
	jbool F_autoDropBombs;
	jbool F_targetBuildingsMobile;
	jbool F_canBoost;
	jbool F_boostWhenBuilding;
	jbool F_boostWhenMining;
	jbool F_logicControllable;
	jbool F_playerControllable;
	jbool F_controlSelectGlobal;
	jbool F_allowedInPayloads;
	jbool F_hittable;
	jbool F_killable;
	jbool F_targetable;
	jbool F_vulnerableWithPayloads;
	jbool F_pickupUnits;
	jbool F_physics;
	jbool F_canDrown;
	jbool F_useUnitCap;
	jbool F_coreUnitDock;
	jbool F_createWreck;
	jbool F_createScorch;
	jbool F_lowAltitude;
	jbool F_rotateToBuilding;
	jbool F_allowLegStep;
	jbool F_legPhysicsLayer;
	jbool F_hovering;
	jbool F_omniMovement;
	jbool F_rotateMoveFirst;
	jbool F_healFlash;
	jbool F_canHeal;
	jbool F_singleTarget;
	jbool F_forceMultiTarget;
	jbool F_canAttack;
	jbool F_hidden;
	jbool F_internal;
	jbool F_internalGenerateSprites;
	jbool F_bounded;
	jbool F_naval;
	jbool F_autoFindTarget;
	jbool F_targetUnderBlocks;
	jbool F_alwaysShootWhenMoving;
	jbool F_hoverable;
	jbool F_alwaysCreateOutline;
	jbool F_generateFullIcon;
	jbool F_squareShape;
	jbool F_drawBuildBeam;
	jbool F_drawMineBeam;
	jbool F_drawCell;
	jbool F_drawItems;
	jbool F_drawShields;
	jbool F_drawBody;
	jbool F_drawSoftShadow;
	jbool F_drawMinimap;
	jref F_aiController;
	jref F_controller;
	jref F_constructor;
	jref F_abilities;
	jref F_weapons;
	jref F_immunities;
	jref F_healColor;
	jref F_lightColor;
	jref F_shieldColor;
	jref F_deathSound;
	jfloat F_deathSoundVolume;
	jref F_wreckSound;
	jfloat F_wreckSoundVolume;
	jref F_loopSound;
	jfloat F_loopSoundVolume;
	jref F_stepSound;
	jfloat F_stepSoundVolume;
	jfloat F_stepSoundPitch;
	jfloat F_stepSoundPitchRange;
	jref F_tankMoveSound;
	jref F_moveSound;
	jfloat F_moveSoundVolume;
	jfloat F_moveSoundPitchMin;
	jfloat F_moveSoundPitchMax;
	jfloat F_tankMoveVolume;
	jref F_fallEffect;
	jref F_fallEngineEffect;
	jref F_deathExplosionEffect;
	jref F_treadEffect;
	jref F_parts;
	jref F_engines;
	jbool F_useEngineElevation;
	jref F_engineColor;
	jref F_engineColorInner;
	jint F_trailLength;
	jref F_trailColor;
	jint F_flowfieldPathType;
	jref F_pathCost;
	jint F_pathCostId;
	jref F_sample;
	jref F_targetFlags;
	jbool F_allowChangeCommands;
	jref F_commands;
	jref F_defaultCommand;
	jref F_stances;
	jref F_outlineColor;
	jint F_outlineRadius;
	jbool F_outlines;
	jint F_itemCapacity;
	jint F_ammoCapacity;
	jint F_mineTier;
	jfloat F_mineSpeed;
	jbool F_mineWalls;
	jbool F_mineFloor;
	jbool F_mineHardnessScaling;
	jref F_mineSound;
	jfloat F_mineSoundVolume;
	jref F_mineItems;
	jint F_legCount;
	jint F_legGroupSize;
	jfloat F_legLength;
	jfloat F_legSpeed;
	jfloat F_legForwardScl;
	jfloat F_legBaseOffset;
	jfloat F_legMoveSpace;
	jfloat F_legExtension;
	jfloat F_legPairOffset;
	jfloat F_legLengthScl;
	jfloat F_legStraightLength;
	jfloat F_legMaxLength;
	jfloat F_legMinLength;
	jfloat F_legSplashDamage;
	jfloat F_legSplashRange;
	jfloat F_baseLegStraightness;
	jfloat F_legStraightness;
	jbool F_legBaseUnder;
	jbool F_lockLegBase;
	jbool F_legContinuousMove;
	jbool F_flipBackLegs;
	jbool F_flipLegSide;
	jbool F_emitWalkSound;
	jbool F_emitWalkEffect;
	jfloat F_mechLandShake;
	jfloat F_mechSideSway;
	jfloat F_mechFrontSway;
	jfloat F_mechStride;
	jbool F_mechStepParticles;
	jref F_mechLegColor;
	jref F_treadRects;
	jint F_treadFrames;
	jint F_treadPullOffset;
	jbool F_crushFragile;
	jint F_segments;
	jint F_segmentUnits;
	jref F_segmentUnit;
	jref F_segmentEndUnit;
	jbool F_segmentLayerOrder;
	jfloat F_segmentMag;
	jfloat F_segmentScl;
	jfloat F_segmentPhase;
	jfloat F_segmentRotSpeed;
	jfloat F_segmentMaxRot;
	jfloat F_segmentSpacing;
	jfloat F_segmentRotationRange;
	jfloat F_crawlSlowdown;
	jfloat F_crushDamage;
	jfloat F_crawlSlowdownFrac;
	jfloat F_lifetime;
	jfloat F_homingDelay;
	jref F_baseRegion;
	jref F_legRegion;
	jref F_region;
	jref F_previewRegion;
	jref F_shadowRegion;
	jref F_cellRegion;
	jref F_itemCircleRegion;
	jref F_softShadowRegion;
	jref F_jointRegion;
	jref F_footRegion;
	jref F_legBaseRegion;
	jref F_baseJointRegion;
	jref F_outlineRegion;
	jref F_treadRegion;
	jref F_mineLaserRegion;
	jref F_mineLaserEndRegion;
	jref F_wreckRegions;
	jref F_segmentRegions;
	jref F_segmentCellRegions;
	jref F_segmentOutlineRegions;
	jref F_treadRegions;
	jfloat F_buildTime;
	jref F_totalRequirements;
	jref F_cachedRequirements;
	jref F_firstRequirements;
} mindustry_type_UnitType;

extern Class class_mindustry_type_UnitType;

extern jfloat SF_mindustry_type_UnitType_shadowTX;
extern jfloat SF_mindustry_type_UnitType_shadowTY;
extern jobject SF_mindustry_type_UnitType_legOffset;
extern jobject SF_mindustry_type_UnitType_tmpStances;

#define VTABLE_mindustry_type_UnitType_hashCode_R_int 0
typedef jint (*func_mindustry_type_UnitType_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_type_UnitType_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_type_UnitType_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_type_UnitType_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_type_UnitType_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_finalize 5
typedef void (*func_mindustry_type_UnitType_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_notify 6
typedef void (*func_mindustry_type_UnitType_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_notifyAll 7
typedef void (*func_mindustry_type_UnitType_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_wait 8
typedef void (*func_mindustry_type_UnitType_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_wait_long 9
typedef void (*func_mindustry_type_UnitType_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_type_UnitType_wait_long_int 10
typedef void (*func_mindustry_type_UnitType_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_type_UnitType_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_type_UnitType_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_getContentType_R_mindustry_ctype_ContentType 12
typedef jobject (*func_mindustry_type_UnitType_getContentType_R_mindustry_ctype_ContentType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_removeContent 13
typedef void (*func_mindustry_type_UnitType_removeContent)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_init 14
typedef void (*func_mindustry_type_UnitType_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_postInit 15
typedef void (*func_mindustry_type_UnitType_postInit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_afterPatch 16
typedef void (*func_mindustry_type_UnitType_afterPatch)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_load 17
typedef void (*func_mindustry_type_UnitType_load)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_loadIcon 18
typedef void (*func_mindustry_type_UnitType_loadIcon)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_hasErrored_R_boolean 19
typedef jbool (*func_mindustry_type_UnitType_hasErrored_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_isVanilla_R_boolean 20
typedef jbool (*func_mindustry_type_UnitType_isVanilla_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_isModded_R_boolean 21
typedef jbool (*func_mindustry_type_UnitType_isModded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_isPatchContent_R_boolean 22
typedef jbool (*func_mindustry_type_UnitType_isPatchContent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_compareTo_mindustry_ctype_Content_R_int 23
typedef jint (*func_mindustry_type_UnitType_compareTo_mindustry_ctype_Content_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_isBanned_R_boolean 24
typedef jbool (*func_mindustry_type_UnitType_isBanned_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_isOnPlanet_mindustry_type_Planet_R_boolean 25
typedef jbool (*func_mindustry_type_UnitType_isOnPlanet_mindustry_type_Planet_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_getLogicId_R_int 26
typedef jint (*func_mindustry_type_UnitType_getLogicId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_displayDescription_R_java_lang_String 27
typedef jobject (*func_mindustry_type_UnitType_displayDescription_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_checkStats 28
typedef void (*func_mindustry_type_UnitType_checkStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_setStats 29
typedef void (*func_mindustry_type_UnitType_setStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_computeStats_R_mindustry_world_meta_Stats 30
typedef jobject (*func_mindustry_type_UnitType_computeStats_R_mindustry_world_meta_Stats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_displayExtra_arc_scene_ui_layout_Table 31
typedef void (*func_mindustry_type_UnitType_displayExtra_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_createIcons_mindustry_graphics_MultiPacker 32
typedef void (*func_mindustry_type_UnitType_createIcons_mindustry_graphics_MultiPacker)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int 33
typedef void (*func_mindustry_type_UnitType_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4, jint param5);
#define VTABLE_mindustry_type_UnitType_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int 34
typedef void (*func_mindustry_type_UnitType_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4, jint param5, jint param6);
#define VTABLE_mindustry_type_UnitType_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int 35
typedef void (*func_mindustry_type_UnitType_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4);
#define VTABLE_mindustry_type_UnitType_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color 36
typedef void (*func_mindustry_type_UnitType_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_type_UnitType_researchRequirements_R_Array1_mindustry_type_ItemStack 37
typedef jobject (*func_mindustry_type_UnitType_researchRequirements_R_Array1_mindustry_type_ItemStack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_emoji_R_java_lang_String 38
typedef jobject (*func_mindustry_type_UnitType_emoji_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_emojiChar_R_int 39
typedef jint (*func_mindustry_type_UnitType_emojiChar_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_hasEmoji_R_boolean 40
typedef jbool (*func_mindustry_type_UnitType_hasEmoji_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_getDependencies_arc_func_Cons 41
typedef void (*func_mindustry_type_UnitType_getDependencies_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_onUnlock 42
typedef void (*func_mindustry_type_UnitType_onUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_isHidden_R_boolean 43
typedef jbool (*func_mindustry_type_UnitType_isHidden_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_showUnlock_R_boolean 44
typedef jbool (*func_mindustry_type_UnitType_showUnlock_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_logicVisible_R_boolean 45
typedef jbool (*func_mindustry_type_UnitType_logicVisible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_unlock 46
typedef void (*func_mindustry_type_UnitType_unlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_quietUnlock 47
typedef void (*func_mindustry_type_UnitType_quietUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_unlockedNowHost_R_boolean 48
typedef jbool (*func_mindustry_type_UnitType_unlockedNowHost_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_unlockedHost_R_boolean 49
typedef jbool (*func_mindustry_type_UnitType_unlockedHost_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_unlockedNow_R_boolean 50
typedef jbool (*func_mindustry_type_UnitType_unlockedNow_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_unlocked_R_boolean 51
typedef jbool (*func_mindustry_type_UnitType_unlocked_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_clearUnlock 52
typedef void (*func_mindustry_type_UnitType_clearUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_locked_R_boolean 53
typedef jbool (*func_mindustry_type_UnitType_locked_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_sense_mindustry_logic_LAccess_R_double 54
typedef jdouble (*func_mindustry_type_UnitType_sense_mindustry_logic_LAccess_R_double)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_sense_mindustry_ctype_Content_R_double 55
typedef jdouble (*func_mindustry_type_UnitType_sense_mindustry_ctype_Content_R_double)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_senseObject_mindustry_logic_LAccess_R_java_lang_Object 56
typedef jobject (*func_mindustry_type_UnitType_senseObject_mindustry_logic_LAccess_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_createController_mindustry_gen_Unit_R_mindustry_entities_units_UnitController 57
typedef jobject (*func_mindustry_type_UnitType_createController_mindustry_gen_Unit_R_mindustry_entities_units_UnitController)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit 58
typedef jobject (*func_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_float_arc_func_Cons_R_mindustry_gen_Unit 59
typedef jobject (*func_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_float_arc_func_Cons_R_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
#define VTABLE_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_float_R_mindustry_gen_Unit 60
typedef jobject (*func_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_float_R_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_R_mindustry_gen_Unit 61
typedef jobject (*func_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_R_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_type_UnitType_spawn_float_float_R_mindustry_gen_Unit 62
typedef jobject (*func_mindustry_type_UnitType_spawn_float_float_R_mindustry_gen_Unit)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_type_UnitType_spawn_mindustry_game_Team_arc_math_geom_Position_R_mindustry_gen_Unit 63
typedef jobject (*func_mindustry_type_UnitType_spawn_mindustry_game_Team_arc_math_geom_Position_R_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_type_UnitType_spawn_arc_math_geom_Position_R_mindustry_gen_Unit 64
typedef jobject (*func_mindustry_type_UnitType_spawn_arc_math_geom_Position_R_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_spawn_arc_math_geom_Position_mindustry_game_Team_R_mindustry_gen_Unit 65
typedef jobject (*func_mindustry_type_UnitType_spawn_arc_math_geom_Position_mindustry_game_Team_R_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_type_UnitType_hasWeapons_R_boolean 66
typedef jbool (*func_mindustry_type_UnitType_hasWeapons_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_targetable_mindustry_gen_Unit_mindustry_game_Team_R_boolean 67
typedef jbool (*func_mindustry_type_UnitType_targetable_mindustry_gen_Unit_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_type_UnitType_killable_mindustry_gen_Unit_R_boolean 68
typedef jbool (*func_mindustry_type_UnitType_killable_mindustry_gen_Unit_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_hittable_mindustry_gen_Unit_R_boolean 69
typedef jbool (*func_mindustry_type_UnitType_hittable_mindustry_gen_Unit_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_getUnitStances_mindustry_gen_Unit_arc_struct_Seq 70
typedef void (*func_mindustry_type_UnitType_getUnitStances_mindustry_gen_Unit_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_type_UnitType_allowStance_mindustry_gen_Unit_mindustry_ai_UnitStance_R_boolean 71
typedef jbool (*func_mindustry_type_UnitType_allowStance_mindustry_gen_Unit_mindustry_ai_UnitStance_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_type_UnitType_allowCommand_mindustry_gen_Unit_mindustry_ai_UnitCommand_R_boolean 72
typedef jbool (*func_mindustry_type_UnitType_allowCommand_mindustry_gen_Unit_mindustry_ai_UnitCommand_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_type_UnitType_update_mindustry_gen_Unit 73
typedef void (*func_mindustry_type_UnitType_update_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_updatePayload_mindustry_gen_Unit_mindustry_gen_Unit_mindustry_gen_Building 74
typedef void (*func_mindustry_type_UnitType_updatePayload_mindustry_gen_Unit_mindustry_gen_Unit_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_type_UnitType_killed_mindustry_gen_Unit 75
typedef void (*func_mindustry_type_UnitType_killed_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_landed_mindustry_gen_Unit 76
typedef void (*func_mindustry_type_UnitType_landed_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_display_mindustry_gen_Unit_arc_scene_ui_layout_Table 77
typedef void (*func_mindustry_type_UnitType_display_mindustry_gen_Unit_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_type_UnitType_supportsEnv_int_R_boolean 78
typedef jbool (*func_mindustry_type_UnitType_supportsEnv_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_type_UnitType_checkEntityMapping_mindustry_gen_Unit 79
typedef void (*func_mindustry_type_UnitType_checkEntityMapping_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_initPathType 80
typedef void (*func_mindustry_type_UnitType_initPathType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_estimateDps_R_float 81
typedef jfloat (*func_mindustry_type_UnitType_estimateDps_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_getRegionsToOutline_arc_struct_Seq 82
typedef void (*func_mindustry_type_UnitType_getRegionsToOutline_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_needsBodyOutline_R_boolean 83
typedef jbool (*func_mindustry_type_UnitType_needsBodyOutline_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_beforeParse 84
typedef void (*func_mindustry_type_UnitType_beforeParse)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_getBuildTime_R_float 85
typedef jfloat (*func_mindustry_type_UnitType_getBuildTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_getTotalRequirements_R_Array1_mindustry_type_ItemStack 86
typedef jobject (*func_mindustry_type_UnitType_getTotalRequirements_R_Array1_mindustry_type_ItemStack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_getRequirements_Array1_mindustry_type_UnitType_Array1_float_R_Array1_mindustry_type_ItemStack 87
typedef jobject (*func_mindustry_type_UnitType_getRequirements_Array1_mindustry_type_UnitType_Array1_float_R_Array1_mindustry_type_ItemStack)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_type_UnitType_getFirstRequirements_R_Array1_mindustry_type_ItemStack 88
typedef jobject (*func_mindustry_type_UnitType_getFirstRequirements_R_Array1_mindustry_type_ItemStack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_UnitType_setEnginesMirror_Array1_mindustry_type_UnitType$UnitEngine 89
typedef void (*func_mindustry_type_UnitType_setEnginesMirror_Array1_mindustry_type_UnitType$UnitEngine)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_draw_mindustry_gen_Unit 90
typedef void (*func_mindustry_type_UnitType_draw_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color 91
typedef jobject (*func_mindustry_type_UnitType_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_drawMining_mindustry_gen_Unit 92
typedef void (*func_mindustry_type_UnitType_drawMining_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_drawMiningBeam_mindustry_gen_Unit_float_float 93
typedef void (*func_mindustry_type_UnitType_drawMiningBeam_mindustry_gen_Unit_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_type_UnitType_drawPayload_mindustry_gen_Unit 94
typedef void (*func_mindustry_type_UnitType_drawPayload_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_drawShield_mindustry_gen_Unit 95
typedef void (*func_mindustry_type_UnitType_drawShield_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_drawShadow_mindustry_gen_Unit 96
typedef void (*func_mindustry_type_UnitType_drawShadow_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_drawSoftShadow_mindustry_gen_Unit 97
typedef void (*func_mindustry_type_UnitType_drawSoftShadow_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_drawSoftShadow_mindustry_gen_Unit_float 98
typedef void (*func_mindustry_type_UnitType_drawSoftShadow_mindustry_gen_Unit_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_type_UnitType_drawSoftShadow_float_float_float_float 99
typedef void (*func_mindustry_type_UnitType_drawSoftShadow_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_type_UnitType_drawItems_mindustry_gen_Unit 100
typedef void (*func_mindustry_type_UnitType_drawItems_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_drawTrail_mindustry_gen_Unit 101
typedef void (*func_mindustry_type_UnitType_drawTrail_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_drawEngines_mindustry_gen_Unit 102
typedef void (*func_mindustry_type_UnitType_drawEngines_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_drawWeapons_mindustry_gen_Unit 103
typedef void (*func_mindustry_type_UnitType_drawWeapons_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_drawWeaponOutlines_mindustry_gen_Unit 104
typedef void (*func_mindustry_type_UnitType_drawWeaponOutlines_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_drawOutline_mindustry_gen_Unit 105
typedef void (*func_mindustry_type_UnitType_drawOutline_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_drawBody_mindustry_gen_Unit 106
typedef void (*func_mindustry_type_UnitType_drawBody_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_drawCell_mindustry_gen_Unit 107
typedef void (*func_mindustry_type_UnitType_drawCell_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_cellColor_mindustry_gen_Unit_R_arc_graphics_Color 108
typedef jobject (*func_mindustry_type_UnitType_cellColor_mindustry_gen_Unit_R_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_drawLight_mindustry_gen_Unit 109
typedef void (*func_mindustry_type_UnitType_drawLight_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_drawTank_mindustry_gen_Unit 110
typedef void (*func_mindustry_type_UnitType_drawTank_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_drawLegs_mindustry_gen_Unit 111
typedef void (*func_mindustry_type_UnitType_drawLegs_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_drawCrawl_mindustry_gen_Crawlc 112
typedef void (*func_mindustry_type_UnitType_drawCrawl_mindustry_gen_Crawlc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_drawMech_mindustry_gen_Mechc 113
typedef void (*func_mindustry_type_UnitType_drawMech_mindustry_gen_Mechc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_applyOutlineColor_mindustry_gen_Unit 114
typedef void (*func_mindustry_type_UnitType_applyOutlineColor_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_applyColor_mindustry_gen_Unit 115
typedef void (*func_mindustry_type_UnitType_applyColor_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_lambda$getRequirements$9_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan_R_boolean 116
typedef jbool (*func_mindustry_type_UnitType_lambda$getRequirements$9_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_lambda$getRequirements$7_mindustry_world_Block_R_boolean 117
typedef jbool (*func_mindustry_type_UnitType_lambda$getRequirements$7_mindustry_world_Block_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_lambda$getRequirements$8_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan_R_boolean 118
typedef jbool (*func_mindustry_type_UnitType_lambda$getRequirements$8_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_lambda$getRequirements$6_mindustry_world_blocks_units_UnitFactory$UnitPlan_R_boolean 119
typedef jbool (*func_mindustry_type_UnitType_lambda$getRequirements$6_mindustry_world_blocks_units_UnitFactory$UnitPlan_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_lambda$getRequirements$4_mindustry_world_Block_R_boolean 120
typedef jbool (*func_mindustry_type_UnitType_lambda$getRequirements$4_mindustry_world_Block_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_lambda$getRequirements$5_mindustry_world_blocks_units_UnitFactory$UnitPlan_R_boolean 121
typedef jbool (*func_mindustry_type_UnitType_lambda$getRequirements$5_mindustry_world_blocks_units_UnitFactory$UnitPlan_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_lambda$getRequirements$3_Array1_mindustry_type_UnitType_R_boolean 122
typedef jbool (*func_mindustry_type_UnitType_lambda$getRequirements$3_Array1_mindustry_type_UnitType_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_lambda$getRequirements$0_mindustry_world_Block_R_boolean 123
typedef jbool (*func_mindustry_type_UnitType_lambda$getRequirements$0_mindustry_world_Block_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_lambda$getRequirements$1_Array1_mindustry_type_UnitType_R_boolean 124
typedef jbool (*func_mindustry_type_UnitType_lambda$getRequirements$1_Array1_mindustry_type_UnitType_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_lambda$init$2_mindustry_entities_Effect$EffectContainer 125
typedef void (*func_mindustry_type_UnitType_lambda$init$2_mindustry_entities_Effect$EffectContainer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_lambda$setStats$2_mindustry_world_Block_R_boolean 126
typedef jbool (*func_mindustry_type_UnitType_lambda$setStats$2_mindustry_world_Block_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_lambda$setStats$0_arc_scene_ui_layout_Table 127
typedef void (*func_mindustry_type_UnitType_lambda$setStats$0_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_lambda$display$1_mindustry_gen_Unit_arc_scene_ui_layout_Table 128
typedef void (*func_mindustry_type_UnitType_lambda$display$1_mindustry_gen_Unit_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_type_UnitType_lambda$display$2_mindustry_gen_Payloadc_R_float 129
typedef jfloat (*func_mindustry_type_UnitType_lambda$display$2_mindustry_gen_Payloadc_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_lambda$display$0_mindustry_gen_Unit_arc_scene_ui_layout_Table 130
typedef void (*func_mindustry_type_UnitType_lambda$display$0_mindustry_gen_Unit_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_type_UnitType_lambda$new$1_mindustry_gen_Unit_R_mindustry_entities_units_UnitController 131
typedef jobject (*func_mindustry_type_UnitType_lambda$new$1_mindustry_gen_Unit_R_mindustry_entities_units_UnitController)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_UnitType_lambda$new$0_R_mindustry_entities_units_UnitController 132
typedef jobject (*func_mindustry_type_UnitType_lambda$new$0_R_mindustry_entities_units_UnitController)(jcontext ctx, jobject self);

void mark_mindustry_type_UnitType(jobject object, jint mark, jint depth);
void clinit_mindustry_type_UnitType(jcontext ctx);
void init_mindustry_type_UnitType_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_UnitType_postInit(jcontext ctx, jobject self);
jobject M_mindustry_type_UnitType_createController_mindustry_gen_Unit_R_mindustry_entities_units_UnitController(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_float_arc_func_Cons_R_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
jobject M_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_float_R_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
jobject M_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_R_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
jobject M_mindustry_type_UnitType_spawn_float_float_R_mindustry_gen_Unit(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_mindustry_type_UnitType_spawn_mindustry_game_Team_arc_math_geom_Position_R_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_type_UnitType_spawn_arc_math_geom_Position_R_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_type_UnitType_spawn_arc_math_geom_Position_mindustry_game_Team_R_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_mindustry_type_UnitType_hasWeapons_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_type_UnitType_targetable_mindustry_gen_Unit_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_mindustry_type_UnitType_killable_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_type_UnitType_hittable_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_UnitType_getUnitStances_mindustry_gen_Unit_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_mindustry_type_UnitType_allowStance_mindustry_gen_Unit_mindustry_ai_UnitStance_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_mindustry_type_UnitType_allowCommand_mindustry_gen_Unit_mindustry_ai_UnitCommand_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_type_UnitType_update_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_UnitType_updatePayload_mindustry_gen_Unit_mindustry_gen_Unit_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_type_UnitType_killed_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_UnitType_landed_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_UnitType_display_mindustry_gen_Unit_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_mindustry_type_UnitType_supportsEnv_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_mindustry_type_UnitType_isBanned_R_boolean(jcontext ctx, jobject self);
void M_mindustry_type_UnitType_getDependencies_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_type_UnitType_isHidden_R_boolean(jcontext ctx, jobject self);
void M_mindustry_type_UnitType_setStats(jcontext ctx, jobject self);
void M_mindustry_type_UnitType_checkEntityMapping_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_UnitType_initPathType(jcontext ctx, jobject self);
void M_mindustry_type_UnitType_init(jcontext ctx, jobject self);
jfloat M_mindustry_type_UnitType_estimateDps_R_float(jcontext ctx, jobject self);
void M_mindustry_type_UnitType_load(jcontext ctx, jobject self);
void M_mindustry_type_UnitType_getRegionsToOutline_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_type_UnitType_needsBodyOutline_R_boolean(jcontext ctx, jobject self);
void M_mindustry_type_UnitType_createIcons_mindustry_graphics_MultiPacker(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_UnitType_afterPatch(jcontext ctx, jobject self);
void M_mindustry_type_UnitType_beforeParse(jcontext ctx, jobject self);
jfloat M_mindustry_type_UnitType_getBuildTime_R_float(jcontext ctx, jobject self);
jobject M_mindustry_type_UnitType_getTotalRequirements_R_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self);
jobject M_mindustry_type_UnitType_getRequirements_Array1_mindustry_type_UnitType_Array1_float_R_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_type_UnitType_getFirstRequirements_R_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self);
jobject M_mindustry_type_UnitType_researchRequirements_R_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self);
jdouble M_mindustry_type_UnitType_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_type_UnitType_senseObject_mindustry_logic_LAccess_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_type_UnitType_getContentType_R_mindustry_ctype_ContentType(jcontext ctx, jobject self);
void M_mindustry_type_UnitType_setEnginesMirror_Array1_mindustry_type_UnitType$UnitEngine(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_UnitType_draw_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_type_UnitType_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_UnitType_drawMining_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_UnitType_drawMiningBeam_mindustry_gen_Unit_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
void M_mindustry_type_UnitType_drawPayload_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_UnitType_drawShield_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_UnitType_drawShadow_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_UnitType_drawSoftShadow_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_UnitType_drawSoftShadow_mindustry_gen_Unit_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_mindustry_type_UnitType_drawSoftShadow_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_mindustry_type_UnitType_drawItems_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_UnitType_drawTrail_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_UnitType_drawEngines_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_UnitType_drawWeapons_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_UnitType_drawWeaponOutlines_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_UnitType_drawOutline_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_UnitType_drawBody_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_UnitType_drawCell_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_type_UnitType_cellColor_mindustry_gen_Unit_R_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_UnitType_drawLight_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_UnitType_drawTank_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_UnitType_drawLegs_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_UnitType_drawCrawl_mindustry_gen_Crawlc(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_UnitType_drawMech_mindustry_gen_Mechc(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_UnitType_applyOutlineColor_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_UnitType_applyColor_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_type_UnitType_lambda$researchRequirements$0_mindustry_type_ItemStack_R_boolean(jcontext ctx, jobject param0);
jbool M_mindustry_type_UnitType_lambda$getRequirements$9_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_type_UnitType_lambda$getRequirements$7_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_type_UnitType_lambda$getRequirements$8_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_type_UnitType_lambda$getRequirements$6_mindustry_world_blocks_units_UnitFactory$UnitPlan_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_type_UnitType_lambda$getRequirements$4_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_type_UnitType_lambda$getRequirements$5_mindustry_world_blocks_units_UnitFactory$UnitPlan_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_type_UnitType_lambda$getRequirements$3_Array1_mindustry_type_UnitType_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_type_UnitType_lambda$getRequirements$2_mindustry_world_consumers_Consume_R_boolean(jcontext ctx, jobject param0);
jbool M_mindustry_type_UnitType_lambda$getRequirements$0_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_type_UnitType_lambda$getRequirements$1_Array1_mindustry_type_UnitType_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_type_UnitType_lambda$createIcons$1_mindustry_entities_part_DrawPart_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_type_UnitType_lambda$createIcons$0_mindustry_entities_part_DrawPart_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_type_UnitType_lambda$estimateDps$0_mindustry_type_Weapon_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_type_UnitType_lambda$init$4_mindustry_type_Weapon_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_type_UnitType_lambda$init$3_mindustry_type_Weapon_R_boolean(jcontext ctx, jobject param0);
void M_mindustry_type_UnitType_lambda$init$2_mindustry_entities_Effect$EffectContainer(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_type_UnitType_lambda$init$1_mindustry_type_Weapon_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_type_UnitType_lambda$init$0_mindustry_type_Weapon_R_boolean(jcontext ctx, jobject param0);
jbool M_mindustry_type_UnitType_lambda$setStats$2_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_type_UnitType_lambda$setStats$1_mindustry_entities_abilities_Ability_R_boolean(jcontext ctx, jobject param0);
void M_mindustry_type_UnitType_lambda$setStats$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
jobject SM_mindustry_type_UnitType_lambda$display$4_mindustry_gen_Unit_R_java_lang_CharSequence(jcontext ctx, jobject param0);
void M_mindustry_type_UnitType_lambda$display$1_mindustry_gen_Unit_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1);
void SM_mindustry_type_UnitType_lambda$display$3_Array1_float_mindustry_gen_Payloadc_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2);
jfloat M_mindustry_type_UnitType_lambda$display$2_mindustry_gen_Payloadc_R_float(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_UnitType_lambda$display$0_mindustry_gen_Unit_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_type_UnitType_lambda$new$1_mindustry_gen_Unit_R_mindustry_entities_units_UnitController(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_type_UnitType_lambda$new$0_R_mindustry_entities_units_UnitController(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
