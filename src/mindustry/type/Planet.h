#ifndef HEADER_mindustry_type_Planet
#define HEADER_mindustry_type_Planet

#include "Clearwing.h"
#include "mindustry/ctype/UnlockableContent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_type_Planet {
	mindustry_ctype_UnlockableContent parent;
	jref F_mesh;
	jref F_cloudMesh;
	jref F_gridMesh;
	jref F_position;
	jref F_grid;
	jref F_generator;
	jref F_sectors;
	jfloat F_orbitSpacing;
	jfloat F_radius;
	jfloat F_camRadius;
	jfloat F_minZoom;
	jfloat F_maxZoom;
	jbool F_drawOrbit;
	jfloat F_atmosphereRadIn;
	jfloat F_atmosphereRadOut;
	jfloat F_clipRadius;
	jfloat F_orbitRadius;
	jfloat F_totalRadius;
	jfloat F_orbitTime;
	jfloat F_rotateTime;
	jfloat F_orbitOffset;
	jfloat F_sectorApproxRadius;
	jbool F_tidalLock;
	jbool F_accessible;
	jint F_defaultEnv;
	jref F_defaultAttributes;
	jbool F_updateLighting;
	jfloat F_lightSrcFrom;
	jfloat F_lightSrcTo;
	jfloat F_lightDstFrom;
	jfloat F_lightDstTo;
	jint F_startSector;
	jint F_sectorSeed;
	jfloat F_launchCapacityMultiplier;
	jbool F_bloom;
	jbool F_visible;
	jref F_landCloudColor;
	jref F_lightColor;
	jref F_atmosphereColor;
	jref F_iconColor;
	jbool F_hasAtmosphere;
	jbool F_allowLaunchSchematics;
	jbool F_allowLaunchLoadout;
	jbool F_allowSectorInvasion;
	jbool F_allowLegacyLaunchPads;
	jbool F_clearSectorOnLose;
	jfloat F_enemyBuildSpeedMultiplier;
	jfloat F_enemyFactoryActivationDelay;
	jbool F_enemyInfiniteItems;
	jbool F_enemyCoreSpawnReplace;
	jbool F_prebuildBase;
	jbool F_allowWaves;
	jbool F_allowLaunchToNumbered;
	jbool F_allowCampaignRules;
	jref F_icon;
	jref F_launchMusic;
	jref F_ambientMusic;
	jref F_darkMusic;
	jbool F_alwaysPlayMusic;
	jref F_defaultCore;
	jref F_parent;
	jref F_solarSystem;
	jref F_children;
	jref F_techTree;
	jref F_launchCandidates;
	jbool F_allowSelfSectorLaunch;
	jbool F_autoAssignPlanet;
	jref F_unlockedOnLand;
	jref F_meshLoader;
	jref F_cloudMeshLoader;
	jref F_gridMeshLoader;
	jref F_statParent;
	jref F_updateGroup;
	jref F_campaignRules;
	jref F_campaignRuleDefaults;
	jref F_ruleSetter;
	jref F_sectorCaptureReplacements;
	jbool F_showRtsAIRule;
	jbool F_loadPlanetData;
	jref F_data;
	jref F_campaignStats;
} mindustry_type_Planet;

extern Class class_mindustry_type_Planet;

extern jobject SF_mindustry_type_Planet_intersectResult;
extern jobject SF_mindustry_type_Planet_mat;
extern jobject SF_mindustry_type_Planet_points;
extern jobject SF_mindustry_type_Planet_tmpNormal;

#define VTABLE_mindustry_type_Planet_hashCode_R_int 0
typedef jint (*func_mindustry_type_Planet_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_type_Planet_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Planet_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_type_Planet_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_type_Planet_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_type_Planet_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_finalize 5
typedef void (*func_mindustry_type_Planet_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_notify 6
typedef void (*func_mindustry_type_Planet_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_notifyAll 7
typedef void (*func_mindustry_type_Planet_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_wait 8
typedef void (*func_mindustry_type_Planet_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_wait_long 9
typedef void (*func_mindustry_type_Planet_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_type_Planet_wait_long_int 10
typedef void (*func_mindustry_type_Planet_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_type_Planet_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_type_Planet_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Planet_getContentType_R_mindustry_ctype_ContentType 12
typedef jobject (*func_mindustry_type_Planet_getContentType_R_mindustry_ctype_ContentType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_removeContent 13
typedef void (*func_mindustry_type_Planet_removeContent)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_init 14
typedef void (*func_mindustry_type_Planet_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_postInit 15
typedef void (*func_mindustry_type_Planet_postInit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_afterPatch 16
typedef void (*func_mindustry_type_Planet_afterPatch)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_load 17
typedef void (*func_mindustry_type_Planet_load)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_loadIcon 18
typedef void (*func_mindustry_type_Planet_loadIcon)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_hasErrored_R_boolean 19
typedef jbool (*func_mindustry_type_Planet_hasErrored_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_isVanilla_R_boolean 20
typedef jbool (*func_mindustry_type_Planet_isVanilla_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_isModded_R_boolean 21
typedef jbool (*func_mindustry_type_Planet_isModded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_isPatchContent_R_boolean 22
typedef jbool (*func_mindustry_type_Planet_isPatchContent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_compareTo_mindustry_ctype_Content_R_int 23
typedef jint (*func_mindustry_type_Planet_compareTo_mindustry_ctype_Content_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Planet_isBanned_R_boolean 24
typedef jbool (*func_mindustry_type_Planet_isBanned_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_isOnPlanet_mindustry_type_Planet_R_boolean 25
typedef jbool (*func_mindustry_type_Planet_isOnPlanet_mindustry_type_Planet_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Planet_getLogicId_R_int 26
typedef jint (*func_mindustry_type_Planet_getLogicId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_displayDescription_R_java_lang_String 27
typedef jobject (*func_mindustry_type_Planet_displayDescription_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_checkStats 28
typedef void (*func_mindustry_type_Planet_checkStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_setStats 29
typedef void (*func_mindustry_type_Planet_setStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_computeStats_R_mindustry_world_meta_Stats 30
typedef jobject (*func_mindustry_type_Planet_computeStats_R_mindustry_world_meta_Stats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_displayExtra_arc_scene_ui_layout_Table 31
typedef void (*func_mindustry_type_Planet_displayExtra_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Planet_createIcons_mindustry_graphics_MultiPacker 32
typedef void (*func_mindustry_type_Planet_createIcons_mindustry_graphics_MultiPacker)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Planet_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int 33
typedef void (*func_mindustry_type_Planet_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4, jint param5);
#define VTABLE_mindustry_type_Planet_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int 34
typedef void (*func_mindustry_type_Planet_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4, jint param5, jint param6);
#define VTABLE_mindustry_type_Planet_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int 35
typedef void (*func_mindustry_type_Planet_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4);
#define VTABLE_mindustry_type_Planet_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color 36
typedef void (*func_mindustry_type_Planet_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_type_Planet_researchRequirements_R_Array1_mindustry_type_ItemStack 37
typedef jobject (*func_mindustry_type_Planet_researchRequirements_R_Array1_mindustry_type_ItemStack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_emoji_R_java_lang_String 38
typedef jobject (*func_mindustry_type_Planet_emoji_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_emojiChar_R_int 39
typedef jint (*func_mindustry_type_Planet_emojiChar_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_hasEmoji_R_boolean 40
typedef jbool (*func_mindustry_type_Planet_hasEmoji_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_getDependencies_arc_func_Cons 41
typedef void (*func_mindustry_type_Planet_getDependencies_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Planet_onUnlock 42
typedef void (*func_mindustry_type_Planet_onUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_isHidden_R_boolean 43
typedef jbool (*func_mindustry_type_Planet_isHidden_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_showUnlock_R_boolean 44
typedef jbool (*func_mindustry_type_Planet_showUnlock_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_logicVisible_R_boolean 45
typedef jbool (*func_mindustry_type_Planet_logicVisible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_unlock 46
typedef void (*func_mindustry_type_Planet_unlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_quietUnlock 47
typedef void (*func_mindustry_type_Planet_quietUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_unlockedNowHost_R_boolean 48
typedef jbool (*func_mindustry_type_Planet_unlockedNowHost_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_unlockedHost_R_boolean 49
typedef jbool (*func_mindustry_type_Planet_unlockedHost_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_unlockedNow_R_boolean 50
typedef jbool (*func_mindustry_type_Planet_unlockedNow_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_unlocked_R_boolean 51
typedef jbool (*func_mindustry_type_Planet_unlocked_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_clearUnlock 52
typedef void (*func_mindustry_type_Planet_clearUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_locked_R_boolean 53
typedef jbool (*func_mindustry_type_Planet_locked_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_saveRules 54
typedef void (*func_mindustry_type_Planet_saveRules)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_loadRules 55
typedef void (*func_mindustry_type_Planet_loadRules)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_stats_R_mindustry_game_CampaignStats 56
typedef jobject (*func_mindustry_type_Planet_stats_R_mindustry_game_CampaignStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_loadStats 57
typedef void (*func_mindustry_type_Planet_loadStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_saveStats 58
typedef void (*func_mindustry_type_Planet_saveStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_clearStats 59
typedef void (*func_mindustry_type_Planet_clearStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_getStartSector_R_mindustry_type_Sector 60
typedef jobject (*func_mindustry_type_Planet_getStartSector_R_mindustry_type_Sector)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_applyRules_mindustry_game_Rules 61
typedef void (*func_mindustry_type_Planet_applyRules_mindustry_game_Rules)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Planet_applyRules_mindustry_game_Rules_boolean 62
typedef void (*func_mindustry_type_Planet_applyRules_mindustry_game_Rules_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_type_Planet_applyDefaultRules_mindustry_game_CampaignRules 63
typedef void (*func_mindustry_type_Planet_applyDefaultRules_mindustry_game_CampaignRules)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Planet_getLastSector_R_mindustry_type_Sector 64
typedef jobject (*func_mindustry_type_Planet_getLastSector_R_mindustry_type_Sector)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_setLastSector_mindustry_type_Sector 65
typedef void (*func_mindustry_type_Planet_setLastSector_mindustry_type_Sector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Planet_preset_int_mindustry_type_SectorPreset 66
typedef void (*func_mindustry_type_Planet_preset_int_mindustry_type_SectorPreset)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_type_Planet_hasGrid_R_boolean 67
typedef jbool (*func_mindustry_type_Planet_hasGrid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_isLandable_R_boolean 68
typedef jbool (*func_mindustry_type_Planet_isLandable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_updateTotalRadius 69
typedef void (*func_mindustry_type_Planet_updateTotalRadius)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_getLightNormal_R_arc_math_geom_Vec3 70
typedef jobject (*func_mindustry_type_Planet_getLightNormal_R_arc_math_geom_Vec3)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_getOrbitAngle_R_float 71
typedef jfloat (*func_mindustry_type_Planet_getOrbitAngle_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_getRotation_R_float 72
typedef jfloat (*func_mindustry_type_Planet_getRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_addParentOffset_arc_math_geom_Vec3_R_arc_math_geom_Vec3 73
typedef jobject (*func_mindustry_type_Planet_addParentOffset_arc_math_geom_Vec3_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Planet_getWorldPosition_arc_math_geom_Vec3_R_arc_math_geom_Vec3 74
typedef jobject (*func_mindustry_type_Planet_getWorldPosition_arc_math_geom_Vec3_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Planet_updateBaseCoverage 75
typedef void (*func_mindustry_type_Planet_updateBaseCoverage)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_getTransform_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D 76
typedef jobject (*func_mindustry_type_Planet_getTransform_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Planet_reloadMesh 77
typedef void (*func_mindustry_type_Planet_reloadMesh)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_reloadMeshAsync 78
typedef void (*func_mindustry_type_Planet_reloadMeshAsync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_getData_R_mindustry_type_Planet$PlanetData 79
typedef jobject (*func_mindustry_type_Planet_getData_R_mindustry_type_Planet$PlanetData)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_getSector_mindustry_graphics_g3d_PlanetGrid$Ptile_R_mindustry_type_Sector 80
typedef jobject (*func_mindustry_type_Planet_getSector_mindustry_graphics_g3d_PlanetGrid$Ptile_R_mindustry_type_Sector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Planet_getSector_arc_math_geom_Ray_R_mindustry_type_Sector 81
typedef jobject (*func_mindustry_type_Planet_getSector_arc_math_geom_Ray_R_mindustry_type_Sector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Planet_getSector_arc_math_geom_Ray_float_R_mindustry_type_Sector 82
typedef jobject (*func_mindustry_type_Planet_getSector_arc_math_geom_Ray_float_R_mindustry_type_Sector)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_type_Planet_intersect_arc_math_geom_Ray_float_R_arc_math_geom_Vec3 83
typedef jobject (*func_mindustry_type_Planet_intersect_arc_math_geom_Ray_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_type_Planet_visible_R_boolean 84
typedef jbool (*func_mindustry_type_Planet_visible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_draw_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D 85
typedef void (*func_mindustry_type_Planet_draw_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_type_Planet_drawAtmosphere_arc_graphics_Mesh_arc_graphics_g3d_Camera3D 86
typedef void (*func_mindustry_type_Planet_drawAtmosphere_arc_graphics_Mesh_arc_graphics_g3d_Camera3D)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_type_Planet_drawClouds_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D 87
typedef void (*func_mindustry_type_Planet_drawClouds_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_type_Planet_drawBorders_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float 88
typedef void (*func_mindustry_type_Planet_drawBorders_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3);
#define VTABLE_mindustry_type_Planet_fill_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float 89
typedef void (*func_mindustry_type_Planet_fill_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3);
#define VTABLE_mindustry_type_Planet_drawSelection_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float_float 90
typedef void (*func_mindustry_type_Planet_drawSelection_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4);
#define VTABLE_mindustry_type_Planet_renderSectors_arc_graphics_g3d_VertexBatch3D_arc_graphics_g3d_Camera3D_mindustry_graphics_g3d_PlanetParams 91
typedef void (*func_mindustry_type_Planet_renderSectors_arc_graphics_g3d_VertexBatch3D_arc_graphics_g3d_Camera3D_mindustry_graphics_g3d_PlanetParams)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_type_Planet_drawArc_arc_graphics_g3d_VertexBatch3D_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int 92
typedef void (*func_mindustry_type_Planet_drawArc_arc_graphics_g3d_VertexBatch3D_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jfloat param5, jfloat param6, jint param7);
#define VTABLE_mindustry_type_Planet_drawArcLine_arc_graphics_g3d_VertexBatch3D_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int_float 93
typedef void (*func_mindustry_type_Planet_drawArcLine_arc_graphics_g3d_VertexBatch3D_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jfloat param5, jfloat param6, jint param7, jfloat param8);
#define VTABLE_mindustry_type_Planet_lookAt_mindustry_type_Sector_arc_math_geom_Vec3_R_arc_math_geom_Vec3 94
typedef jobject (*func_mindustry_type_Planet_lookAt_mindustry_type_Sector_arc_math_geom_Vec3_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_type_Planet_project_mindustry_type_Sector_arc_graphics_g3d_Camera3D_arc_math_geom_Vec3_R_arc_math_geom_Vec3 95
typedef jobject (*func_mindustry_type_Planet_project_mindustry_type_Sector_arc_graphics_g3d_Camera3D_arc_math_geom_Vec3_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_type_Planet_setPlane_mindustry_type_Sector_arc_graphics_g3d_PlaneBatch3D 96
typedef void (*func_mindustry_type_Planet_setPlane_mindustry_type_Sector_arc_graphics_g3d_PlaneBatch3D)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_type_Planet_lambda$init$0_mindustry_content_TechTree$TechNode_R_boolean 97
typedef jbool (*func_mindustry_type_Planet_lambda$init$0_mindustry_content_TechTree$TechNode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Planet_lambda$reloadMeshAsync$0 98
typedef void (*func_mindustry_type_Planet_lambda$reloadMeshAsync$0)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_lambda$reloadMeshAsync$1_mindustry_graphics_g3d_GenericMesh 99
typedef void (*func_mindustry_type_Planet_lambda$reloadMeshAsync$1_mindustry_graphics_g3d_GenericMesh)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Planet_lambda$loadRules$0_R_mindustry_game_CampaignRules 100
typedef jobject (*func_mindustry_type_Planet_lambda$loadRules$0_R_mindustry_game_CampaignRules)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_lambda$new$2_R_arc_graphics_Mesh 101
typedef jobject (*func_mindustry_type_Planet_lambda$new$2_R_arc_graphics_Mesh)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Planet_lambda$new$0_R_mindustry_graphics_g3d_GenericMesh 102
typedef jobject (*func_mindustry_type_Planet_lambda$new$0_R_mindustry_graphics_g3d_GenericMesh)(jcontext ctx, jobject self);

void mark_mindustry_type_Planet(jobject object, jint mark, jint depth);
void clinit_mindustry_type_Planet(jcontext ctx);
void init_mindustry_type_Planet_java_lang_String_mindustry_type_Planet_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);
void init_mindustry_type_Planet_java_lang_String_mindustry_type_Planet_float_int(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jint param3);
void M_mindustry_type_Planet_removeContent(jcontext ctx, jobject self);
void M_mindustry_type_Planet_saveRules(jcontext ctx, jobject self);
void M_mindustry_type_Planet_loadRules(jcontext ctx, jobject self);
jobject M_mindustry_type_Planet_stats_R_mindustry_game_CampaignStats(jcontext ctx, jobject self);
void M_mindustry_type_Planet_loadStats(jcontext ctx, jobject self);
void M_mindustry_type_Planet_saveStats(jcontext ctx, jobject self);
void M_mindustry_type_Planet_clearStats(jcontext ctx, jobject self);
jobject M_mindustry_type_Planet_getStartSector_R_mindustry_type_Sector(jcontext ctx, jobject self);
void M_mindustry_type_Planet_applyRules_mindustry_game_Rules(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_Planet_applyRules_mindustry_game_Rules_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_mindustry_type_Planet_applyDefaultRules_mindustry_game_CampaignRules(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_type_Planet_getLastSector_R_mindustry_type_Sector(jcontext ctx, jobject self);
void M_mindustry_type_Planet_setLastSector_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_Planet_preset_int_mindustry_type_SectorPreset(jcontext ctx, jobject self, jint param0, jobject param1);
jbool M_mindustry_type_Planet_hasGrid_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_type_Planet_isLandable_R_boolean(jcontext ctx, jobject self);
void M_mindustry_type_Planet_updateTotalRadius(jcontext ctx, jobject self);
jobject M_mindustry_type_Planet_getLightNormal_R_arc_math_geom_Vec3(jcontext ctx, jobject self);
jfloat M_mindustry_type_Planet_getOrbitAngle_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_type_Planet_getRotation_R_float(jcontext ctx, jobject self);
jobject M_mindustry_type_Planet_addParentOffset_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_type_Planet_getWorldPosition_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_Planet_updateBaseCoverage(jcontext ctx, jobject self);
jobject M_mindustry_type_Planet_getTransform_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_Planet_reloadMesh(jcontext ctx, jobject self);
void M_mindustry_type_Planet_reloadMeshAsync(jcontext ctx, jobject self);
void M_mindustry_type_Planet_load(jcontext ctx, jobject self);
void M_mindustry_type_Planet_init(jcontext ctx, jobject self);
jobject M_mindustry_type_Planet_getData_R_mindustry_type_Planet$PlanetData(jcontext ctx, jobject self);
jobject M_mindustry_type_Planet_getSector_mindustry_graphics_g3d_PlanetGrid$Ptile_R_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_type_Planet_getSector_arc_math_geom_Ray_R_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_type_Planet_getSector_arc_math_geom_Ray_float_R_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_mindustry_type_Planet_intersect_arc_math_geom_Ray_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jfloat param1);
jbool M_mindustry_type_Planet_isHidden_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_type_Planet_getContentType_R_mindustry_ctype_ContentType(jcontext ctx, jobject self);
jbool M_mindustry_type_Planet_visible_R_boolean(jcontext ctx, jobject self);
void M_mindustry_type_Planet_draw_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_type_Planet_drawAtmosphere_arc_graphics_Mesh_arc_graphics_g3d_Camera3D(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_type_Planet_drawClouds_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_type_Planet_drawBorders_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3);
void M_mindustry_type_Planet_fill_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3);
void M_mindustry_type_Planet_drawSelection_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4);
void M_mindustry_type_Planet_renderSectors_arc_graphics_g3d_VertexBatch3D_arc_graphics_g3d_Camera3D_mindustry_graphics_g3d_PlanetParams(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_type_Planet_drawArc_arc_graphics_g3d_VertexBatch3D_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jfloat param5, jfloat param6, jint param7);
void M_mindustry_type_Planet_drawArcLine_arc_graphics_g3d_VertexBatch3D_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int_float(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jfloat param5, jfloat param6, jint param7, jfloat param8);
jobject M_mindustry_type_Planet_lookAt_mindustry_type_Sector_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_type_Planet_project_mindustry_type_Sector_arc_graphics_g3d_Camera3D_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_type_Planet_setPlane_mindustry_type_Sector_arc_graphics_g3d_PlaneBatch3D(jcontext ctx, jobject self, jobject param0, jobject param1);
jfloat SM_mindustry_type_Planet_lambda$getSector$0_float_arc_math_geom_Vec3_mindustry_type_Sector_R_float(jcontext ctx, jfloat param0, jobject param1, jobject param2);
jbool M_mindustry_type_Planet_lambda$init$0_mindustry_content_TechTree$TechNode_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_Planet_lambda$reloadMeshAsync$0(jcontext ctx, jobject self);
void M_mindustry_type_Planet_lambda$reloadMeshAsync$1_mindustry_graphics_g3d_GenericMesh(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_type_Planet_lambda$loadRules$0_R_mindustry_game_CampaignRules(jcontext ctx, jobject self);
void SM_mindustry_type_Planet_lambda$new$3_mindustry_game_Rules(jcontext ctx, jobject param0);
jobject M_mindustry_type_Planet_lambda$new$2_R_arc_graphics_Mesh(jcontext ctx, jobject self);
jobject SM_mindustry_type_Planet_lambda$new$1_R_mindustry_graphics_g3d_GenericMesh(jcontext ctx);
jobject M_mindustry_type_Planet_lambda$new$0_R_mindustry_graphics_g3d_GenericMesh(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
