#ifndef HEADER_mindustry_world_Block
#define HEADER_mindustry_world_Block

#include "Clearwing.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/logic/Senseable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_Block {
	mindustry_ctype_UnlockableContent parent;
	jbool F_hasItems;
	jbool F_hasLiquids;
	jbool F_hasPower;
	jbool F_outputsLiquid;
	jbool F_consumesPower;
	jbool F_outputsPower;
	jbool F_connectedPower;
	jbool F_conductivePower;
	jbool F_outputsPayload;
	jbool F_acceptsUnitPayloads;
	jbool F_acceptsPayload;
	jbool F_acceptsItems;
	jbool F_alwaysAllowDeposit;
	jbool F_allowedInPayloads;
	jfloat F_depositCooldown;
	jbool F_separateItemCapacity;
	jint F_itemCapacity;
	jfloat F_liquidCapacity;
	jfloat F_liquidPressure;
	jbool F_outputFacing;
	jbool F_noSideBlend;
	jbool F_displayFlow;
	jbool F_inEditor;
	jbool F_editorConfigurable;
	jref F_lastConfig;
	jbool F_saveConfig;
	jbool F_copyConfig;
	jbool F_clearOnDoubleTap;
	jbool F_update;
	jbool F_destructible;
	jbool F_unloadable;
	jbool F_isDuct;
	jbool F_allowResupply;
	jbool F_solid;
	jbool F_solidifes;
	jbool F_teamPassable;
	jbool F_underBullets;
	jbool F_rotate;
	jbool F_rotateDraw;
	jbool F_rotateDrawEditor;
	jfloat F_visualRotationOffset;
	jbool F_lockRotation;
	jbool F_ignoreLineRotation;
	jbool F_invertFlip;
	jint F_variants;
	jbool F_drawArrow;
	jbool F_drawTeamOverlay;
	jbool F_saveData;
	jbool F_breakable;
	jbool F_unitMoveBreakable;
	jbool F_rebuildable;
	jbool F_privileged;
	jbool F_requiresWater;
	jbool F_placeableLiquid;
	jbool F_placeablePlayer;
	jbool F_placeableOn;
	jbool F_insulated;
	jbool F_squareSprite;
	jbool F_absorbLasers;
	jbool F_enableDrawStatus;
	jbool F_drawDisabled;
	jbool F_autoResetEnabled;
	jbool F_noUpdateDisabled;
	jbool F_updateInUnits;
	jbool F_alwaysUpdateInUnits;
	jbool F_canPickup;
	jbool F_deconstructDropAllLiquid;
	jbool F_useColor;
	jref F_itemDrop;
	jbool F_playerUnmineable;
	jref F_attributes;
	jfloat F_scaledHealth;
	jint F_health;
	jfloat F_armor;
	jfloat F_baseExplosiveness;
	jfloat F_explosivenessScale;
	jfloat F_flammabilityScale;
	jfloat F_baseShake;
	jref F_destroyBullet;
	jbool F_destroyBulletSameTeam;
	jref F_lightLiquid;
	jbool F_drawCracks;
	jbool F_createRubble;
	jbool F_floating;
	jint F_size;
	jfloat F_offset;
	jint F_sizeOffset;
	jfloat F_clipSize;
	jfloat F_lightClipSize;
	jfloat F_placeOverlapRange;
	jfloat F_crushDamageMultiplier;
	jbool F_crushFragile;
	jint F_timers;
	jref F_cacheLayer;
	jbool F_drawDynamic;
	jbool F_drawCached;
	jref F_buildingCacheLayer;
	jbool F_fillsTile;
	jbool F_forceDark;
	jbool F_alwaysReplace;
	jbool F_replaceable;
	jref F_group;
	jref F_flags;
	jfloat F_priority;
	jint F_unitCapModifier;
	jbool F_configurable;
	jref F_configureSound;
	jbool F_ignoreResizeConfig;
	jbool F_commandable;
	jbool F_allowConfigInventory;
	jbool F_diagonalConfigInventory;
	jint F_selectionRows;
	jint F_selectionColumns;
	jbool F_logicConfigurable;
	jbool F_delayLandingConfig;
	jbool F_consumesTap;
	jbool F_drawLiquidLight;
	jint F_envRequired;
	jint F_envEnabled;
	jint F_envDisabled;
	jbool F_sync;
	jbool F_conveyorPlacement;
	jbool F_allowDiagonal;
	jbool F_swapDiagonalPlacement;
	jbool F_allowRectanglePlacement;
	jint F_schematicPriority;
	jref F_mapColor;
	jbool F_hasColor;
	jbool F_targetable;
	jbool F_attacks;
	jbool F_suppressable;
	jbool F_canOverdrive;
	jref F_outlineColor;
	jbool F_outlineIcon;
	jint F_outlineRadius;
	jint F_outlinedIcon;
	jbool F_hasShadow;
	jbool F_customShadow;
	jbool F_placePitchChange;
	jbool F_breakPitchChange;
	jref F_placeSound;
	jref F_breakSound;
	jref F_destroySound;
	jfloat F_destroySoundVolume;
	jfloat F_destroyPitchMin;
	jfloat F_destroyPitchMax;
	jfloat F_albedo;
	jref F_lightColor;
	jbool F_emitLight;
	jbool F_obstructsLight;
	jfloat F_lightRadius;
	jint F_fogRadius;
	jref F_ambientSound;
	jfloat F_ambientSoundVolume;
	jref F_requirements;
	jref F_category;
	jfloat F_buildTime;
	jref F_buildVisibility;
	jfloat F_buildCostMultiplier;
	jfloat F_deconstructThreshold;
	jbool F_instantDeconstruct;
	jbool F_instantBuild;
	jbool F_ignoreBuildDarkness;
	jref F_placeEffect;
	jref F_breakEffect;
	jref F_destroyEffect;
	jfloat F_researchCostMultiplier;
	jref F_researchCostMultipliers;
	jref F_researchCost;
	jref F_forceTeam;
	jbool F_instantTransfer;
	jint F_maxConsecutive;
	jbool F_quickRotate;
	jbool F_allowDerelictRepair;
	jref F_subclass;
	jfloat F_selectScroll;
	jref F_buildType;
	jref F_configurations;
	jref F_itemFilter;
	jref F_liquidFilter;
	jref F_consumers;
	jref F_optionalConsumers;
	jref F_nonOptionalConsumers;
	jref F_updateConsumers;
	jbool F_hasConsumers;
	jref F_consPower;
	jref F_barMap;
	jref F_consumeBuilder;
	jref F_generatedIcons;
	jint F_regionRotated1;
	jint F_regionRotated2;
	jref F_region;
	jref F_customShadowRegion;
	jref F_teamRegion;
	jref F_teamRegions;
	jref F_variantRegions;
	jref F_variantShadowRegions;
	jint F_timerDump;
	jint F_dumpTime;
} mindustry_world_Block;

extern Class class_mindustry_world_Block;

extern jobject SF_mindustry_world_Block_tempTiles;
extern jobject SF_mindustry_world_Block_tempBuilds;

#define VTABLE_mindustry_world_Block_hashCode_R_int 0
typedef jint (*func_mindustry_world_Block_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_Block_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_Block_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_Block_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_Block_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_finalize 5
typedef void (*func_mindustry_world_Block_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_notify 6
typedef void (*func_mindustry_world_Block_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_notifyAll 7
typedef void (*func_mindustry_world_Block_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_wait 8
typedef void (*func_mindustry_world_Block_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_wait_long 9
typedef void (*func_mindustry_world_Block_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_Block_wait_long_int 10
typedef void (*func_mindustry_world_Block_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_world_Block_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_world_Block_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_getContentType_R_mindustry_ctype_ContentType 12
typedef jobject (*func_mindustry_world_Block_getContentType_R_mindustry_ctype_ContentType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_removeContent 13
typedef void (*func_mindustry_world_Block_removeContent)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_init 14
typedef void (*func_mindustry_world_Block_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_postInit 15
typedef void (*func_mindustry_world_Block_postInit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_afterPatch 16
typedef void (*func_mindustry_world_Block_afterPatch)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_load 17
typedef void (*func_mindustry_world_Block_load)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_loadIcon 18
typedef void (*func_mindustry_world_Block_loadIcon)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_hasErrored_R_boolean 19
typedef jbool (*func_mindustry_world_Block_hasErrored_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_isVanilla_R_boolean 20
typedef jbool (*func_mindustry_world_Block_isVanilla_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_isModded_R_boolean 21
typedef jbool (*func_mindustry_world_Block_isModded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_isPatchContent_R_boolean 22
typedef jbool (*func_mindustry_world_Block_isPatchContent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_compareTo_mindustry_ctype_Content_R_int 23
typedef jint (*func_mindustry_world_Block_compareTo_mindustry_ctype_Content_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_isBanned_R_boolean 24
typedef jbool (*func_mindustry_world_Block_isBanned_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_isOnPlanet_mindustry_type_Planet_R_boolean 25
typedef jbool (*func_mindustry_world_Block_isOnPlanet_mindustry_type_Planet_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_getLogicId_R_int 26
typedef jint (*func_mindustry_world_Block_getLogicId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_displayDescription_R_java_lang_String 27
typedef jobject (*func_mindustry_world_Block_displayDescription_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_checkStats 28
typedef void (*func_mindustry_world_Block_checkStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_setStats 29
typedef void (*func_mindustry_world_Block_setStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_computeStats_R_mindustry_world_meta_Stats 30
typedef jobject (*func_mindustry_world_Block_computeStats_R_mindustry_world_meta_Stats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_displayExtra_arc_scene_ui_layout_Table 31
typedef void (*func_mindustry_world_Block_displayExtra_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_createIcons_mindustry_graphics_MultiPacker 32
typedef void (*func_mindustry_world_Block_createIcons_mindustry_graphics_MultiPacker)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int 33
typedef void (*func_mindustry_world_Block_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4, jint param5);
#define VTABLE_mindustry_world_Block_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int 34
typedef void (*func_mindustry_world_Block_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4, jint param5, jint param6);
#define VTABLE_mindustry_world_Block_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int 35
typedef void (*func_mindustry_world_Block_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4);
#define VTABLE_mindustry_world_Block_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color 36
typedef void (*func_mindustry_world_Block_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_world_Block_researchRequirements_R_Array1_mindustry_type_ItemStack 37
typedef jobject (*func_mindustry_world_Block_researchRequirements_R_Array1_mindustry_type_ItemStack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_emoji_R_java_lang_String 38
typedef jobject (*func_mindustry_world_Block_emoji_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_emojiChar_R_int 39
typedef jint (*func_mindustry_world_Block_emojiChar_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_hasEmoji_R_boolean 40
typedef jbool (*func_mindustry_world_Block_hasEmoji_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_getDependencies_arc_func_Cons 41
typedef void (*func_mindustry_world_Block_getDependencies_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_onUnlock 42
typedef void (*func_mindustry_world_Block_onUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_isHidden_R_boolean 43
typedef jbool (*func_mindustry_world_Block_isHidden_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_showUnlock_R_boolean 44
typedef jbool (*func_mindustry_world_Block_showUnlock_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_logicVisible_R_boolean 45
typedef jbool (*func_mindustry_world_Block_logicVisible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_unlock 46
typedef void (*func_mindustry_world_Block_unlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_quietUnlock 47
typedef void (*func_mindustry_world_Block_quietUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_unlockedNowHost_R_boolean 48
typedef jbool (*func_mindustry_world_Block_unlockedNowHost_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_unlockedHost_R_boolean 49
typedef jbool (*func_mindustry_world_Block_unlockedHost_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_unlockedNow_R_boolean 50
typedef jbool (*func_mindustry_world_Block_unlockedNow_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_unlocked_R_boolean 51
typedef jbool (*func_mindustry_world_Block_unlocked_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_clearUnlock 52
typedef void (*func_mindustry_world_Block_clearUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_locked_R_boolean 53
typedef jbool (*func_mindustry_world_Block_locked_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_sense_mindustry_logic_LAccess_R_double 54
typedef jdouble (*func_mindustry_world_Block_sense_mindustry_logic_LAccess_R_double)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_sense_mindustry_ctype_Content_R_double 55
typedef jdouble (*func_mindustry_world_Block_sense_mindustry_ctype_Content_R_double)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_senseObject_mindustry_logic_LAccess_R_java_lang_Object 56
typedef jobject (*func_mindustry_world_Block_senseObject_mindustry_logic_LAccess_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_drawBase_mindustry_world_Tile 57
typedef void (*func_mindustry_world_Block_drawBase_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_drawBaseCached_mindustry_world_Tile 58
typedef void (*func_mindustry_world_Block_drawBaseCached_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_drawShadow_mindustry_world_Tile 59
typedef void (*func_mindustry_world_Block_drawShadow_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_percentSolid_int_int_R_float 60
typedef jfloat (*func_mindustry_world_Block_percentSolid_int_int_R_float)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_world_Block_drawEnvironmentLight_mindustry_world_Tile 61
typedef void (*func_mindustry_world_Block_drawEnvironmentLight_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_drawPlace_int_int_int_boolean 62
typedef void (*func_mindustry_world_Block_drawPlace_int_int_int_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3);
#define VTABLE_mindustry_world_Block_drawSideRegion_arc_graphics_g2d_TextureRegion_float_float_int 63
typedef void (*func_mindustry_world_Block_drawSideRegion_arc_graphics_g2d_TextureRegion_float_float_int)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3);
#define VTABLE_mindustry_world_Block_drawPotentialLinks_int_int 64
typedef void (*func_mindustry_world_Block_drawPotentialLinks_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_boolean_R_float 65
typedef jfloat (*func_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_boolean_R_float)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3);
#define VTABLE_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_arc_graphics_Color_boolean_R_float 66
typedef jfloat (*func_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_arc_graphics_Color_boolean_R_float)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jbool param4);
#define VTABLE_mindustry_world_Block_drawOverlay_float_float_int 67
typedef void (*func_mindustry_world_Block_drawOverlay_float_float_int)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2);
#define VTABLE_mindustry_world_Block_displayShadow_mindustry_world_Tile_R_boolean 68
typedef jbool (*func_mindustry_world_Block_displayShadow_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_sumAttribute_mindustry_world_meta_Attribute_int_int_R_float 69
typedef jfloat (*func_mindustry_world_Block_sumAttribute_mindustry_world_meta_Attribute_int_int_R_float)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_mindustry_world_Block_getDisplayIcon_mindustry_world_Tile_R_arc_graphics_g2d_TextureRegion 70
typedef jobject (*func_mindustry_world_Block_getDisplayIcon_mindustry_world_Tile_R_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_getDisplayName_mindustry_world_Tile_R_java_lang_String 71
typedef jobject (*func_mindustry_world_Block_getDisplayName_mindustry_world_Tile_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_minimapColor_mindustry_world_Tile_R_int 72
typedef jint (*func_mindustry_world_Block_minimapColor_mindustry_world_Tile_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_getColor_mindustry_world_Tile_R_arc_graphics_Color 73
typedef jobject (*func_mindustry_world_Block_getColor_mindustry_world_Tile_R_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_outputsItems_R_boolean 74
typedef jbool (*func_mindustry_world_Block_outputsItems_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean 75
typedef jbool (*func_mindustry_world_Block_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_mindustry_world_Block_canBreak_mindustry_world_Tile_R_boolean 76
typedef jbool (*func_mindustry_world_Block_canBreak_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_rotatedOutput_int_int_R_boolean 77
typedef jbool (*func_mindustry_world_Block_rotatedOutput_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean 78
typedef jbool (*func_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_mindustry_world_Block_synthetic_R_boolean 79
typedef jbool (*func_mindustry_world_Block_synthetic_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_checkForceDark_mindustry_world_Tile_R_boolean 80
typedef jbool (*func_mindustry_world_Block_checkForceDark_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_isDarkened_mindustry_world_Tile_R_boolean 81
typedef jbool (*func_mindustry_world_Block_isDarkened_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_addBar_java_lang_String_arc_func_Func 82
typedef void (*func_mindustry_world_Block_addBar_java_lang_String_arc_func_Func)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_Block_removeBar_java_lang_String 83
typedef void (*func_mindustry_world_Block_removeBar_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_listBars_R_java_lang_Iterable 84
typedef jobject (*func_mindustry_world_Block_listBars_R_java_lang_Iterable)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_addLiquidBar_mindustry_type_Liquid 85
typedef void (*func_mindustry_world_Block_addLiquidBar_mindustry_type_Liquid)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_addLiquidBar_arc_func_Func 86
typedef void (*func_mindustry_world_Block_addLiquidBar_arc_func_Func)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_setBars 87
typedef void (*func_mindustry_world_Block_setBars)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_consumesItem_mindustry_type_Item_R_boolean 88
typedef jbool (*func_mindustry_world_Block_consumesItem_mindustry_type_Item_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean 89
typedef jbool (*func_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean 90
typedef jbool (*func_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_getReplacement_mindustry_entities_units_BuildPlan_arc_struct_Seq_R_mindustry_world_Block 91
typedef jobject (*func_mindustry_world_Block_getReplacement_mindustry_entities_units_BuildPlan_arc_struct_Seq_R_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int_boolean 92
typedef void (*func_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2);
#define VTABLE_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int 93
typedef void (*func_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_world_Block_handlePlacementLine_arc_struct_Seq 94
typedef void (*func_mindustry_world_Block_handlePlacementLine_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_configSenseable_R_boolean 95
typedef jbool (*func_mindustry_world_Block_configSenseable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_nextConfig_R_java_lang_Object 96
typedef jobject (*func_mindustry_world_Block_nextConfig_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_onNewPlan_mindustry_entities_units_BuildPlan 97
typedef void (*func_mindustry_world_Block_onNewPlan_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean 98
typedef void (*func_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define VTABLE_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean_float 99
typedef void (*func_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jfloat param3);
#define VTABLE_mindustry_world_Block_drawOtherPlayerPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_float 100
typedef void (*func_mindustry_world_Block_drawOtherPlayerPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);
#define VTABLE_mindustry_world_Block_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable 101
typedef void (*func_mindustry_world_Block_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_Block_drawDefaultPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable 102
typedef void (*func_mindustry_world_Block_drawDefaultPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_Block_getPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_arc_graphics_g2d_TextureRegion 103
typedef jobject (*func_mindustry_world_Block_getPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_Block_drawPlanConfig_mindustry_entities_units_BuildPlan_arc_util_Eachable 104
typedef void (*func_mindustry_world_Block_drawPlanConfig_mindustry_entities_units_BuildPlan_arc_util_Eachable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String_boolean 105
typedef void (*func_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3);
#define VTABLE_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String 106
typedef void (*func_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_world_Block_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable 107
typedef void (*func_mindustry_world_Block_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_Block_planConfigClipSize_R_float 108
typedef jfloat (*func_mindustry_world_Block_planConfigClipSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_pointConfig_java_lang_Object_arc_func_Cons_R_java_lang_Object 109
typedef jobject (*func_mindustry_world_Block_pointConfig_java_lang_Object_arc_func_Cons_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_Block_configClear_arc_func_Cons 110
typedef void (*func_mindustry_world_Block_configClear_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_config_java_lang_Class_arc_func_Cons2 111
typedef void (*func_mindustry_world_Block_config_java_lang_Class_arc_func_Cons2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_Block_isAccessible_R_boolean 112
typedef jbool (*func_mindustry_world_Block_isAccessible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_nearbySide_int_int_int_int_arc_math_geom_Point2 113
typedef void (*func_mindustry_world_Block_nearbySide_int_int_int_int_arc_math_geom_Point2)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4);
#define VTABLE_mindustry_world_Block_getEdges_R_Array1_arc_math_geom_Point2 114
typedef jobject (*func_mindustry_world_Block_getEdges_R_Array1_arc_math_geom_Point2)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_getInsideEdges_R_Array1_arc_math_geom_Point2 115
typedef jobject (*func_mindustry_world_Block_getInsideEdges_R_Array1_arc_math_geom_Point2)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_iterateTaken_int_int_arc_func_Intc2 116
typedef void (*func_mindustry_world_Block_iterateTaken_int_int_arc_func_Intc2)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_mindustry_world_Block_makeIconRegions_R_Array1_arc_graphics_g2d_TextureRegion 117
typedef jobject (*func_mindustry_world_Block_makeIconRegions_R_Array1_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_icons_R_Array1_arc_graphics_g2d_TextureRegion 118
typedef jobject (*func_mindustry_world_Block_icons_R_Array1_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_getRegionsToOutline_arc_struct_Seq 119
typedef void (*func_mindustry_world_Block_getRegionsToOutline_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_getGeneratedIcons_R_Array1_arc_graphics_g2d_TextureRegion 120
typedef jobject (*func_mindustry_world_Block_getGeneratedIcons_R_Array1_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_resetGeneratedIcons 121
typedef void (*func_mindustry_world_Block_resetGeneratedIcons)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_variantRegions_R_Array1_arc_graphics_g2d_TextureRegion 122
typedef jobject (*func_mindustry_world_Block_variantRegions_R_Array1_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_hasBuilding_R_boolean 123
typedef jbool (*func_mindustry_world_Block_hasBuilding_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_newBuilding_R_mindustry_gen_Building 124
typedef jobject (*func_mindustry_world_Block_newBuilding_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_updateClipRadius_float 125
typedef void (*func_mindustry_world_Block_updateClipRadius_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect 126
typedef jobject (*func_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_mindustry_world_Block_isMultiblock_R_boolean 127
typedef jbool (*func_mindustry_world_Block_isMultiblock_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_isVisible_R_boolean 128
typedef jbool (*func_mindustry_world_Block_isVisible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_isPlaceable_R_boolean 129
typedef jbool (*func_mindustry_world_Block_isPlaceable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_isOverPlacementLimit_mindustry_game_Team_R_boolean 130
typedef jbool (*func_mindustry_world_Block_isOverPlacementLimit_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_supportsEnv_int_R_boolean 131
typedef jbool (*func_mindustry_world_Block_supportsEnv_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_world_Block_buildEditorConfig_arc_scene_ui_layout_Table 132
typedef void (*func_mindustry_world_Block_buildEditorConfig_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_onPicked_mindustry_world_Tile 133
typedef void (*func_mindustry_world_Block_onPicked_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_getConfig_mindustry_world_Tile_R_java_lang_Object 134
typedef jobject (*func_mindustry_world_Block_getConfig_mindustry_world_Tile_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_blockChanged_mindustry_world_Tile 135
typedef void (*func_mindustry_world_Block_blockChanged_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block 136
typedef void (*func_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit 137
typedef void (*func_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_world_Block_placeEnded_mindustry_world_Tile_mindustry_gen_Unit_int_java_lang_Object 138
typedef void (*func_mindustry_world_Block_placeEnded_mindustry_world_Tile_mindustry_gen_Unit_int_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3);
#define VTABLE_mindustry_world_Block_beforePlaceBegan_mindustry_world_Tile_mindustry_world_Block 139
typedef void (*func_mindustry_world_Block_beforePlaceBegan_mindustry_world_Tile_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_Block_editorPicked_mindustry_world_Tile 140
typedef void (*func_mindustry_world_Block_editorPicked_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_isFloor_R_boolean 141
typedef jbool (*func_mindustry_world_Block_isFloor_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_isOverlay_R_boolean 142
typedef jbool (*func_mindustry_world_Block_isOverlay_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor 143
typedef jobject (*func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_isAir_R_boolean 144
typedef jbool (*func_mindustry_world_Block_isAir_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_canBeBuilt_R_boolean 145
typedef jbool (*func_mindustry_world_Block_canBeBuilt_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_environmentBuildable_R_boolean 146
typedef jbool (*func_mindustry_world_Block_environmentBuildable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_isStatic_R_boolean 147
typedef jbool (*func_mindustry_world_Block_isStatic_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_findConsumer_arc_func_Boolf_R_mindustry_world_consumers_Consume 148
typedef jobject (*func_mindustry_world_Block_findConsumer_arc_func_Boolf_R_mindustry_world_consumers_Consume)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_hasConsumer_mindustry_world_consumers_Consume_R_boolean 149
typedef jbool (*func_mindustry_world_Block_hasConsumer_mindustry_world_consumers_Consume_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_removeConsumer_mindustry_world_consumers_Consume 150
typedef void (*func_mindustry_world_Block_removeConsumer_mindustry_world_consumers_Consume)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_removeConsumers_arc_func_Boolf 151
typedef void (*func_mindustry_world_Block_removeConsumers_arc_func_Boolf)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_consumeLiquid_mindustry_type_Liquid_float_R_mindustry_world_consumers_ConsumeLiquid 152
typedef jobject (*func_mindustry_world_Block_consumeLiquid_mindustry_type_Liquid_float_R_mindustry_world_consumers_ConsumeLiquid)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_world_Block_consumeLiquids_Array1_mindustry_type_LiquidStack_R_mindustry_world_consumers_ConsumeLiquids 153
typedef jobject (*func_mindustry_world_Block_consumeLiquids_Array1_mindustry_type_LiquidStack_R_mindustry_world_consumers_ConsumeLiquids)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_consumePower_float_R_mindustry_world_consumers_ConsumePower 154
typedef jobject (*func_mindustry_world_Block_consumePower_float_R_mindustry_world_consumers_ConsumePower)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_world_Block_consumePowerCond_float_arc_func_Boolf_R_mindustry_world_consumers_ConsumePower 155
typedef jobject (*func_mindustry_world_Block_consumePowerCond_float_arc_func_Boolf_R_mindustry_world_consumers_ConsumePower)(jcontext ctx, jobject self, jfloat param0, jobject param1);
#define VTABLE_mindustry_world_Block_consumePowerDynamic_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower 156
typedef jobject (*func_mindustry_world_Block_consumePowerDynamic_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_consumePowerDynamic_float_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower 157
typedef jobject (*func_mindustry_world_Block_consumePowerDynamic_float_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower)(jcontext ctx, jobject self, jfloat param0, jobject param1);
#define VTABLE_mindustry_world_Block_consumePowerBuffered_float_R_mindustry_world_consumers_ConsumePower 158
typedef jobject (*func_mindustry_world_Block_consumePowerBuffered_float_R_mindustry_world_consumers_ConsumePower)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_world_Block_consumeItem_mindustry_type_Item_R_mindustry_world_consumers_ConsumeItems 159
typedef jobject (*func_mindustry_world_Block_consumeItem_mindustry_type_Item_R_mindustry_world_consumers_ConsumeItems)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_consumeItem_mindustry_type_Item_int_R_mindustry_world_consumers_ConsumeItems 160
typedef jobject (*func_mindustry_world_Block_consumeItem_mindustry_type_Item_int_R_mindustry_world_consumers_ConsumeItems)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_world_Block_consumeItems_Array1_mindustry_type_ItemStack_R_mindustry_world_consumers_ConsumeItems 161
typedef jobject (*func_mindustry_world_Block_consumeItems_Array1_mindustry_type_ItemStack_R_mindustry_world_consumers_ConsumeItems)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_consumeCoolant_float_R_mindustry_world_consumers_ConsumeCoolant 162
typedef jobject (*func_mindustry_world_Block_consumeCoolant_float_R_mindustry_world_consumers_ConsumeCoolant)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_world_Block_consumeCoolant_float_boolean_boolean_R_mindustry_world_consumers_ConsumeCoolant 163
typedef jobject (*func_mindustry_world_Block_consumeCoolant_float_boolean_boolean_R_mindustry_world_consumers_ConsumeCoolant)(jcontext ctx, jobject self, jfloat param0, jbool param1, jbool param2);
#define VTABLE_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume 164
typedef jobject (*func_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_setupRequirements_mindustry_type_Category_Array1_mindustry_type_ItemStack 165
typedef void (*func_mindustry_world_Block_setupRequirements_mindustry_type_Category_Array1_mindustry_type_ItemStack)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_Block_setupRequirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack 166
typedef void (*func_mindustry_world_Block_setupRequirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack_boolean 167
typedef void (*func_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define VTABLE_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack 168
typedef void (*func_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_Block_requirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack 169
typedef void (*func_mindustry_world_Block_requirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_world_Block_initBuilding 170
typedef void (*func_mindustry_world_Block_initBuilding)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_reinitializeConsumers 171
typedef void (*func_mindustry_world_Block_reinitializeConsumers)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Block_checkContentArrayCapacity_int_int 172
typedef void (*func_mindustry_world_Block_checkContentArrayCapacity_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_world_Block_planRotation_int_R_int 173
typedef jint (*func_mindustry_world_Block_planRotation_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_world_Block_flipRotation_mindustry_entities_units_BuildPlan_boolean 174
typedef void (*func_mindustry_world_Block_flipRotation_mindustry_entities_units_BuildPlan_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_world_Block_getPlanConfigs_arc_struct_Seq 175
typedef void (*func_mindustry_world_Block_getPlanConfigs_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_lambda$init$3_java_lang_Class_arc_func_Cons2 176
typedef void (*func_mindustry_world_Block_lambda$init$3_java_lang_Class_arc_func_Cons2)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_Block_lambda$initBuilding$1_java_lang_reflect_Constructor_R_mindustry_gen_Building 177
typedef jobject (*func_mindustry_world_Block_lambda$initBuilding$1_java_lang_reflect_Constructor_R_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_lambda$setBars$5_mindustry_gen_Building_R_mindustry_ui_Bar 178
typedef jobject (*func_mindustry_world_Block_lambda$setBars$5_mindustry_gen_Building_R_mindustry_ui_Bar)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_lambda$setBars$8_mindustry_gen_Building_R_float 179
typedef jfloat (*func_mindustry_world_Block_lambda$setBars$8_mindustry_gen_Building_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_lambda$setBars$1_boolean_float_mindustry_gen_Building_R_mindustry_ui_Bar 180
typedef jobject (*func_mindustry_world_Block_lambda$setBars$1_boolean_float_mindustry_gen_Building_R_mindustry_ui_Bar)(jcontext ctx, jobject self, jbool param0, jfloat param1, jobject param2);
#define VTABLE_mindustry_world_Block_lambda$setBars$4_mindustry_gen_Building_R_float 181
typedef jfloat (*func_mindustry_world_Block_lambda$setBars$4_mindustry_gen_Building_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Block_lambda$addLiquidBar$3_arc_func_Func_mindustry_gen_Building_R_mindustry_ui_Bar 182
typedef jobject (*func_mindustry_world_Block_lambda$addLiquidBar$3_arc_func_Func_mindustry_gen_Building_R_mindustry_ui_Bar)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_Block_lambda$addLiquidBar$6_arc_func_Func_mindustry_gen_Building_R_float 183
typedef jfloat (*func_mindustry_world_Block_lambda$addLiquidBar$6_arc_func_Func_mindustry_gen_Building_R_float)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_Block_lambda$addLiquidBar$0_mindustry_type_Liquid_mindustry_gen_Building_R_mindustry_ui_Bar 184
typedef jobject (*func_mindustry_world_Block_lambda$addLiquidBar$0_mindustry_type_Liquid_mindustry_gen_Building_R_mindustry_ui_Bar)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_Block_lambda$addLiquidBar$2_mindustry_gen_Building_mindustry_type_Liquid_R_float 185
typedef jfloat (*func_mindustry_world_Block_lambda$addLiquidBar$2_mindustry_gen_Building_mindustry_type_Liquid_R_float)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_Block_lambda$sumAttribute$0_mindustry_world_meta_Attribute_mindustry_world_Tile_R_float 186
typedef jfloat (*func_mindustry_world_Block_lambda$sumAttribute$0_mindustry_world_meta_Attribute_mindustry_world_Tile_R_float)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_world_Block_lambda$drawPotentialLinks$1_int_int_mindustry_gen_Building 187
typedef void (*func_mindustry_world_Block_lambda$drawPotentialLinks$1_int_int_mindustry_gen_Building)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_mindustry_world_Block_lambda$drawPotentialLinks$0_int_int_mindustry_gen_Building 188
typedef void (*func_mindustry_world_Block_lambda$drawPotentialLinks$0_int_int_mindustry_gen_Building)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);

void mark_mindustry_world_Block(jobject object, jint mark, jint depth);
void clinit_mindustry_world_Block(jcontext ctx);
void init_mindustry_world_Block_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_Block_drawBase_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_Block_drawBaseCached_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_Block_drawShadow_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
jfloat M_mindustry_world_Block_percentSolid_int_int_R_float(jcontext ctx, jobject self, jint param0, jint param1);
void M_mindustry_world_Block_drawEnvironmentLight_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_Block_drawPlace_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3);
void M_mindustry_world_Block_drawSideRegion_arc_graphics_g2d_TextureRegion_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3);
void M_mindustry_world_Block_drawPotentialLinks_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jfloat M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_boolean_R_float(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3);
jfloat M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_arc_graphics_Color_boolean_R_float(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jbool param4);
void M_mindustry_world_Block_drawOverlay_float_float_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2);
jbool M_mindustry_world_Block_displayShadow_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0);
jfloat M_mindustry_world_Block_sumAttribute_mindustry_world_meta_Attribute_int_int_R_float(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_mindustry_world_Block_getDisplayIcon_mindustry_world_Tile_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_world_Block_getDisplayName_mindustry_world_Tile_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jint M_mindustry_world_Block_minimapColor_mindustry_world_Tile_R_int(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_world_Block_getColor_mindustry_world_Tile_R_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_world_Block_outputsItems_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_world_Block_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
jbool M_mindustry_world_Block_canBreak_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_world_Block_rotatedOutput_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
jbool M_mindustry_world_Block_synthetic_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_world_Block_checkForceDark_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_world_Block_isDarkened_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_Block_setStats(jcontext ctx, jobject self);
void M_mindustry_world_Block_addBar_java_lang_String_arc_func_Func(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_world_Block_removeBar_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_world_Block_listBars_R_java_lang_Iterable(jcontext ctx, jobject self);
void M_mindustry_world_Block_addLiquidBar_mindustry_type_Liquid(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_Block_addLiquidBar_arc_func_Func(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_Block_setBars(jcontext ctx, jobject self);
void M_mindustry_world_Block_afterPatch(jcontext ctx, jobject self);
jbool M_mindustry_world_Block_consumesItem_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_world_Block_getReplacement_mindustry_entities_units_BuildPlan_arc_struct_Seq_R_mindustry_world_Block(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2);
void M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_mindustry_world_Block_handlePlacementLine_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_world_Block_configSenseable_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_world_Block_nextConfig_R_java_lang_Object(jcontext ctx, jobject self);
void M_mindustry_world_Block_onNewPlan_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
void M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean_float(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jfloat param3);
void M_mindustry_world_Block_drawOtherPlayerPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);
void M_mindustry_world_Block_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_world_Block_drawDefaultPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject SM_mindustry_world_Block_findPlan_arc_util_Eachable_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3);
jobject SM_mindustry_world_Block_findPlan_arc_util_Eachable_int_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4);
jobject M_mindustry_world_Block_getPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_world_Block_drawPlanConfig_mindustry_entities_units_BuildPlan_arc_util_Eachable(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3);
void M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_world_Block_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable(jcontext ctx, jobject self, jobject param0, jobject param1);
jfloat M_mindustry_world_Block_planConfigClipSize_R_float(jcontext ctx, jobject self);
jobject M_mindustry_world_Block_pointConfig_java_lang_Object_arc_func_Cons_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_world_Block_configClear_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_Block_config_java_lang_Class_arc_func_Cons2(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_mindustry_world_Block_isAccessible_R_boolean(jcontext ctx, jobject self);
void M_mindustry_world_Block_nearbySide_int_int_int_int_arc_math_geom_Point2(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4);
jobject M_mindustry_world_Block_getEdges_R_Array1_arc_math_geom_Point2(jcontext ctx, jobject self);
jobject M_mindustry_world_Block_getInsideEdges_R_Array1_arc_math_geom_Point2(jcontext ctx, jobject self);
void M_mindustry_world_Block_iterateTaken_int_int_arc_func_Intc2(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
jobject M_mindustry_world_Block_makeIconRegions_R_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self);
jobject M_mindustry_world_Block_icons_R_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self);
void M_mindustry_world_Block_getRegionsToOutline_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_world_Block_getGeneratedIcons_R_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self);
void M_mindustry_world_Block_resetGeneratedIcons(jcontext ctx, jobject self);
jobject M_mindustry_world_Block_variantRegions_R_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self);
jbool M_mindustry_world_Block_hasBuilding_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_world_Block_newBuilding_R_mindustry_gen_Building(jcontext ctx, jobject self);
void M_mindustry_world_Block_updateClipRadius_float(jcontext ctx, jobject self, jfloat param0);
jobject M_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
jbool M_mindustry_world_Block_isMultiblock_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_world_Block_isVisible_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_world_Block_isPlaceable_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_world_Block_isBanned_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_world_Block_isOverPlacementLimit_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_world_Block_supportsEnv_int_R_boolean(jcontext ctx, jobject self, jint param0);
void M_mindustry_world_Block_buildEditorConfig_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_Block_onPicked_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_world_Block_getConfig_mindustry_world_Tile_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_Block_blockChanged_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_world_Block_placeEnded_mindustry_world_Tile_mindustry_gen_Unit_int_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3);
void M_mindustry_world_Block_beforePlaceBegan_mindustry_world_Tile_mindustry_world_Block(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_world_Block_editorPicked_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_world_Block_isFloor_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_world_Block_isOverlay_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self);
jbool M_mindustry_world_Block_isAir_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_world_Block_canBeBuilt_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_world_Block_environmentBuildable_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_world_Block_isStatic_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_world_Block_findConsumer_arc_func_Boolf_R_mindustry_world_consumers_Consume(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_world_Block_hasConsumer_mindustry_world_consumers_Consume_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_Block_removeConsumer_mindustry_world_consumers_Consume(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_Block_removeConsumers_arc_func_Boolf(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_world_Block_consumeLiquid_mindustry_type_Liquid_float_R_mindustry_world_consumers_ConsumeLiquid(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_mindustry_world_Block_consumeLiquids_Array1_mindustry_type_LiquidStack_R_mindustry_world_consumers_ConsumeLiquids(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_world_Block_consumePower_float_R_mindustry_world_consumers_ConsumePower(jcontext ctx, jobject self, jfloat param0);
jobject M_mindustry_world_Block_consumePowerCond_float_arc_func_Boolf_R_mindustry_world_consumers_ConsumePower(jcontext ctx, jobject self, jfloat param0, jobject param1);
jobject M_mindustry_world_Block_consumePowerDynamic_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_world_Block_consumePowerDynamic_float_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower(jcontext ctx, jobject self, jfloat param0, jobject param1);
jobject M_mindustry_world_Block_consumePowerBuffered_float_R_mindustry_world_consumers_ConsumePower(jcontext ctx, jobject self, jfloat param0);
jobject M_mindustry_world_Block_consumeItem_mindustry_type_Item_R_mindustry_world_consumers_ConsumeItems(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_world_Block_consumeItem_mindustry_type_Item_int_R_mindustry_world_consumers_ConsumeItems(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_mindustry_world_Block_consumeItems_Array1_mindustry_type_ItemStack_R_mindustry_world_consumers_ConsumeItems(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_world_Block_consumeCoolant_float_R_mindustry_world_consumers_ConsumeCoolant(jcontext ctx, jobject self, jfloat param0);
jobject M_mindustry_world_Block_consumeCoolant_float_boolean_boolean_R_mindustry_world_consumers_ConsumeCoolant(jcontext ctx, jobject self, jfloat param0, jbool param1, jbool param2);
jobject M_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume(jcontext ctx, jobject self, jobject param0);
void M_mindustry_world_Block_setupRequirements_mindustry_type_Category_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_world_Block_setupRequirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
void M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_world_Block_requirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_world_Block_initBuilding(jcontext ctx, jobject self);
jobject M_mindustry_world_Block_researchRequirements_R_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self);
void M_mindustry_world_Block_getDependencies_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_world_Block_getContentType_R_mindustry_ctype_ContentType(jcontext ctx, jobject self);
jbool M_mindustry_world_Block_logicVisible_R_boolean(jcontext ctx, jobject self);
void M_mindustry_world_Block_postInit(jcontext ctx, jobject self);
void M_mindustry_world_Block_init(jcontext ctx, jobject self);
void M_mindustry_world_Block_reinitializeConsumers(jcontext ctx, jobject self);
void M_mindustry_world_Block_checkContentArrayCapacity_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_mindustry_world_Block_load(jcontext ctx, jobject self);
jbool M_mindustry_world_Block_isHidden_R_boolean(jcontext ctx, jobject self);
void M_mindustry_world_Block_createIcons_mindustry_graphics_MultiPacker(jcontext ctx, jobject self, jobject param0);
jint M_mindustry_world_Block_planRotation_int_R_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_world_Block_flipRotation_mindustry_entities_units_BuildPlan_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_mindustry_world_Block_getPlanConfigs_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jdouble M_mindustry_world_Block_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0);
jdouble M_mindustry_world_Block_sense_mindustry_ctype_Content_R_double(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_world_Block_senseObject_mindustry_logic_LAccess_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_world_Block_lambda$reinitializeConsumers$3_mindustry_world_consumers_Consume_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_world_Block_lambda$reinitializeConsumers$2_mindustry_world_consumers_Consume_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_world_Block_lambda$reinitializeConsumers$1_mindustry_world_consumers_Consume_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_world_Block_lambda$reinitializeConsumers$0_mindustry_world_consumers_Consume_R_boolean(jcontext ctx, jobject param0);
void M_mindustry_world_Block_lambda$init$3_java_lang_Class_arc_func_Cons2(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool SM_mindustry_world_Block_lambda$init$2_mindustry_world_consumers_Consume_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_world_Block_lambda$init$1_mindustry_world_consumers_Consume_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_world_Block_lambda$init$0_mindustry_world_consumers_Consume_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_world_Block_lambda$postInit$0_mindustry_type_Planet_mindustry_type_ItemStack_R_boolean(jcontext ctx, jobject param0, jobject param1);
jobject M_mindustry_world_Block_lambda$initBuilding$1_java_lang_reflect_Constructor_R_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_world_Block_lambda$initBuilding$0_java_lang_Class_R_boolean(jcontext ctx, jobject param0);
jint SM_mindustry_world_Block_lambda$requirements$0_mindustry_type_ItemStack_R_int(jcontext ctx, jobject param0);
jbool SM_mindustry_world_Block_lambda$consume$0_mindustry_world_consumers_Consume_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_world_Block_lambda$removeConsumers$0_mindustry_world_consumers_Consume_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_world_Block_lambda$configClear$0_arc_func_Cons_java_lang_Object_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_mindustry_world_Block_lambda$setBars$9_mindustry_gen_Building_R_mindustry_type_Liquid(jcontext ctx, jobject param0);
jobject M_mindustry_world_Block_lambda$setBars$5_mindustry_gen_Building_R_mindustry_ui_Bar(jcontext ctx, jobject self, jobject param0);
jfloat M_mindustry_world_Block_lambda$setBars$8_mindustry_gen_Building_R_float(jcontext ctx, jobject self, jobject param0);
jobject SM_mindustry_world_Block_lambda$setBars$7_R_arc_graphics_Color(jcontext ctx);
jobject SM_mindustry_world_Block_lambda$setBars$6_mindustry_gen_Building_R_java_lang_CharSequence(jcontext ctx, jobject param0);
jobject M_mindustry_world_Block_lambda$setBars$1_boolean_float_mindustry_gen_Building_R_mindustry_ui_Bar(jcontext ctx, jobject self, jbool param0, jfloat param1, jobject param2);
jfloat M_mindustry_world_Block_lambda$setBars$4_mindustry_gen_Building_R_float(jcontext ctx, jobject self, jobject param0);
jobject SM_mindustry_world_Block_lambda$setBars$3_R_arc_graphics_Color(jcontext ctx);
jobject SM_mindustry_world_Block_lambda$setBars$2_boolean_mindustry_gen_Building_float_R_java_lang_CharSequence(jcontext ctx, jbool param0, jobject param1, jfloat param2);
jobject SM_mindustry_world_Block_lambda$setBars$0_mindustry_gen_Building_R_mindustry_ui_Bar(jcontext ctx, jobject param0);
jobject M_mindustry_world_Block_lambda$addLiquidBar$3_arc_func_Func_mindustry_gen_Building_R_mindustry_ui_Bar(jcontext ctx, jobject self, jobject param0, jobject param1);
jfloat M_mindustry_world_Block_lambda$addLiquidBar$6_arc_func_Func_mindustry_gen_Building_R_float(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject SM_mindustry_world_Block_lambda$addLiquidBar$5_arc_func_Func_mindustry_gen_Building_R_arc_graphics_Color(jcontext ctx, jobject param0, jobject param1);
jobject SM_mindustry_world_Block_lambda$addLiquidBar$4_arc_func_Func_mindustry_gen_Building_R_java_lang_CharSequence(jcontext ctx, jobject param0, jobject param1);
jobject M_mindustry_world_Block_lambda$addLiquidBar$0_mindustry_type_Liquid_mindustry_gen_Building_R_mindustry_ui_Bar(jcontext ctx, jobject self, jobject param0, jobject param1);
jfloat M_mindustry_world_Block_lambda$addLiquidBar$2_mindustry_gen_Building_mindustry_type_Liquid_R_float(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject SM_mindustry_world_Block_lambda$addLiquidBar$1_mindustry_type_Liquid_R_java_lang_CharSequence(jcontext ctx, jobject param0);
jfloat M_mindustry_world_Block_lambda$sumAttribute$0_mindustry_world_meta_Attribute_mindustry_world_Tile_R_float(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_world_Block_lambda$drawPotentialLinks$1_int_int_mindustry_gen_Building(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
void M_mindustry_world_Block_lambda$drawPotentialLinks$0_int_int_mindustry_gen_Building(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
jfloat SM_mindustry_world_Block_lambda$percentSolid$0_mindustry_world_Tile_R_float(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
