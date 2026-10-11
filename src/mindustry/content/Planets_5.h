#ifndef HEADER_mindustry_content_Planets$5
#define HEADER_mindustry_content_Planets$5

#include "Clearwing.h"
#include "mindustry/type/Planet.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_content_Planets$5 {
	mindustry_type_Planet parent;
	jfloat F_val$scale;
	jref F_val$cgen;
	jref F_val$tint;
	jref F_val$base;
	jint F_val$seed;
	jfloat F_val$tintThresh;
	jint F_val$pieces;
} mindustry_content_Planets$5;

extern Class class_mindustry_content_Planets$5;


#define VTABLE_mindustry_content_Planets$5_hashCode_R_int 0
typedef jint (*func_mindustry_content_Planets$5_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_content_Planets$5_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$5_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_content_Planets$5_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_content_Planets$5_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_content_Planets$5_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_finalize 5
typedef void (*func_mindustry_content_Planets$5_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_notify 6
typedef void (*func_mindustry_content_Planets$5_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_notifyAll 7
typedef void (*func_mindustry_content_Planets$5_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_wait 8
typedef void (*func_mindustry_content_Planets$5_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_wait_long 9
typedef void (*func_mindustry_content_Planets$5_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_content_Planets$5_wait_long_int 10
typedef void (*func_mindustry_content_Planets$5_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_content_Planets$5_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_content_Planets$5_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$5_getContentType_R_mindustry_ctype_ContentType 12
typedef jobject (*func_mindustry_content_Planets$5_getContentType_R_mindustry_ctype_ContentType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_removeContent 13
typedef void (*func_mindustry_content_Planets$5_removeContent)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_init 14
typedef void (*func_mindustry_content_Planets$5_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_postInit 15
typedef void (*func_mindustry_content_Planets$5_postInit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_afterPatch 16
typedef void (*func_mindustry_content_Planets$5_afterPatch)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_load 17
typedef void (*func_mindustry_content_Planets$5_load)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_loadIcon 18
typedef void (*func_mindustry_content_Planets$5_loadIcon)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_hasErrored_R_boolean 19
typedef jbool (*func_mindustry_content_Planets$5_hasErrored_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_isVanilla_R_boolean 20
typedef jbool (*func_mindustry_content_Planets$5_isVanilla_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_isModded_R_boolean 21
typedef jbool (*func_mindustry_content_Planets$5_isModded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_isPatchContent_R_boolean 22
typedef jbool (*func_mindustry_content_Planets$5_isPatchContent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_compareTo_mindustry_ctype_Content_R_int 23
typedef jint (*func_mindustry_content_Planets$5_compareTo_mindustry_ctype_Content_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$5_isBanned_R_boolean 24
typedef jbool (*func_mindustry_content_Planets$5_isBanned_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_isOnPlanet_mindustry_type_Planet_R_boolean 25
typedef jbool (*func_mindustry_content_Planets$5_isOnPlanet_mindustry_type_Planet_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$5_getLogicId_R_int 26
typedef jint (*func_mindustry_content_Planets$5_getLogicId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_displayDescription_R_java_lang_String 27
typedef jobject (*func_mindustry_content_Planets$5_displayDescription_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_checkStats 28
typedef void (*func_mindustry_content_Planets$5_checkStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_setStats 29
typedef void (*func_mindustry_content_Planets$5_setStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_computeStats_R_mindustry_world_meta_Stats 30
typedef jobject (*func_mindustry_content_Planets$5_computeStats_R_mindustry_world_meta_Stats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_displayExtra_arc_scene_ui_layout_Table 31
typedef void (*func_mindustry_content_Planets$5_displayExtra_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$5_createIcons_mindustry_graphics_MultiPacker 32
typedef void (*func_mindustry_content_Planets$5_createIcons_mindustry_graphics_MultiPacker)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$5_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int 33
typedef void (*func_mindustry_content_Planets$5_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4, jint param5);
#define VTABLE_mindustry_content_Planets$5_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int 34
typedef void (*func_mindustry_content_Planets$5_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4, jint param5, jint param6);
#define VTABLE_mindustry_content_Planets$5_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int 35
typedef void (*func_mindustry_content_Planets$5_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4);
#define VTABLE_mindustry_content_Planets$5_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color 36
typedef void (*func_mindustry_content_Planets$5_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_content_Planets$5_researchRequirements_R_Array1_mindustry_type_ItemStack 37
typedef jobject (*func_mindustry_content_Planets$5_researchRequirements_R_Array1_mindustry_type_ItemStack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_emoji_R_java_lang_String 38
typedef jobject (*func_mindustry_content_Planets$5_emoji_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_emojiChar_R_int 39
typedef jint (*func_mindustry_content_Planets$5_emojiChar_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_hasEmoji_R_boolean 40
typedef jbool (*func_mindustry_content_Planets$5_hasEmoji_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_getDependencies_arc_func_Cons 41
typedef void (*func_mindustry_content_Planets$5_getDependencies_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$5_onUnlock 42
typedef void (*func_mindustry_content_Planets$5_onUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_isHidden_R_boolean 43
typedef jbool (*func_mindustry_content_Planets$5_isHidden_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_showUnlock_R_boolean 44
typedef jbool (*func_mindustry_content_Planets$5_showUnlock_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_logicVisible_R_boolean 45
typedef jbool (*func_mindustry_content_Planets$5_logicVisible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_unlock 46
typedef void (*func_mindustry_content_Planets$5_unlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_quietUnlock 47
typedef void (*func_mindustry_content_Planets$5_quietUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_unlockedNowHost_R_boolean 48
typedef jbool (*func_mindustry_content_Planets$5_unlockedNowHost_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_unlockedHost_R_boolean 49
typedef jbool (*func_mindustry_content_Planets$5_unlockedHost_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_unlockedNow_R_boolean 50
typedef jbool (*func_mindustry_content_Planets$5_unlockedNow_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_unlocked_R_boolean 51
typedef jbool (*func_mindustry_content_Planets$5_unlocked_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_clearUnlock 52
typedef void (*func_mindustry_content_Planets$5_clearUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_locked_R_boolean 53
typedef jbool (*func_mindustry_content_Planets$5_locked_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_saveRules 54
typedef void (*func_mindustry_content_Planets$5_saveRules)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_loadRules 55
typedef void (*func_mindustry_content_Planets$5_loadRules)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_stats_R_mindustry_game_CampaignStats 56
typedef jobject (*func_mindustry_content_Planets$5_stats_R_mindustry_game_CampaignStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_loadStats 57
typedef void (*func_mindustry_content_Planets$5_loadStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_saveStats 58
typedef void (*func_mindustry_content_Planets$5_saveStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_clearStats 59
typedef void (*func_mindustry_content_Planets$5_clearStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_getStartSector_R_mindustry_type_Sector 60
typedef jobject (*func_mindustry_content_Planets$5_getStartSector_R_mindustry_type_Sector)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_applyRules_mindustry_game_Rules 61
typedef void (*func_mindustry_content_Planets$5_applyRules_mindustry_game_Rules)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$5_applyRules_mindustry_game_Rules_boolean 62
typedef void (*func_mindustry_content_Planets$5_applyRules_mindustry_game_Rules_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_content_Planets$5_applyDefaultRules_mindustry_game_CampaignRules 63
typedef void (*func_mindustry_content_Planets$5_applyDefaultRules_mindustry_game_CampaignRules)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$5_getLastSector_R_mindustry_type_Sector 64
typedef jobject (*func_mindustry_content_Planets$5_getLastSector_R_mindustry_type_Sector)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_setLastSector_mindustry_type_Sector 65
typedef void (*func_mindustry_content_Planets$5_setLastSector_mindustry_type_Sector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$5_preset_int_mindustry_type_SectorPreset 66
typedef void (*func_mindustry_content_Planets$5_preset_int_mindustry_type_SectorPreset)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_content_Planets$5_hasGrid_R_boolean 67
typedef jbool (*func_mindustry_content_Planets$5_hasGrid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_isLandable_R_boolean 68
typedef jbool (*func_mindustry_content_Planets$5_isLandable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_updateTotalRadius 69
typedef void (*func_mindustry_content_Planets$5_updateTotalRadius)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_getLightNormal_R_arc_math_geom_Vec3 70
typedef jobject (*func_mindustry_content_Planets$5_getLightNormal_R_arc_math_geom_Vec3)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_getOrbitAngle_R_float 71
typedef jfloat (*func_mindustry_content_Planets$5_getOrbitAngle_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_getRotation_R_float 72
typedef jfloat (*func_mindustry_content_Planets$5_getRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_addParentOffset_arc_math_geom_Vec3_R_arc_math_geom_Vec3 73
typedef jobject (*func_mindustry_content_Planets$5_addParentOffset_arc_math_geom_Vec3_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$5_getWorldPosition_arc_math_geom_Vec3_R_arc_math_geom_Vec3 74
typedef jobject (*func_mindustry_content_Planets$5_getWorldPosition_arc_math_geom_Vec3_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$5_updateBaseCoverage 75
typedef void (*func_mindustry_content_Planets$5_updateBaseCoverage)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_getTransform_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D 76
typedef jobject (*func_mindustry_content_Planets$5_getTransform_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$5_reloadMesh 77
typedef void (*func_mindustry_content_Planets$5_reloadMesh)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_reloadMeshAsync 78
typedef void (*func_mindustry_content_Planets$5_reloadMeshAsync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_getData_R_mindustry_type_Planet$PlanetData 79
typedef jobject (*func_mindustry_content_Planets$5_getData_R_mindustry_type_Planet$PlanetData)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_getSector_mindustry_graphics_g3d_PlanetGrid$Ptile_R_mindustry_type_Sector 80
typedef jobject (*func_mindustry_content_Planets$5_getSector_mindustry_graphics_g3d_PlanetGrid$Ptile_R_mindustry_type_Sector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$5_getSector_arc_math_geom_Ray_R_mindustry_type_Sector 81
typedef jobject (*func_mindustry_content_Planets$5_getSector_arc_math_geom_Ray_R_mindustry_type_Sector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$5_getSector_arc_math_geom_Ray_float_R_mindustry_type_Sector 82
typedef jobject (*func_mindustry_content_Planets$5_getSector_arc_math_geom_Ray_float_R_mindustry_type_Sector)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_content_Planets$5_intersect_arc_math_geom_Ray_float_R_arc_math_geom_Vec3 83
typedef jobject (*func_mindustry_content_Planets$5_intersect_arc_math_geom_Ray_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_content_Planets$5_visible_R_boolean 84
typedef jbool (*func_mindustry_content_Planets$5_visible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_draw_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D 85
typedef void (*func_mindustry_content_Planets$5_draw_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_content_Planets$5_drawAtmosphere_arc_graphics_Mesh_arc_graphics_g3d_Camera3D 86
typedef void (*func_mindustry_content_Planets$5_drawAtmosphere_arc_graphics_Mesh_arc_graphics_g3d_Camera3D)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_Planets$5_drawClouds_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D 87
typedef void (*func_mindustry_content_Planets$5_drawClouds_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_content_Planets$5_drawBorders_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float 88
typedef void (*func_mindustry_content_Planets$5_drawBorders_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3);
#define VTABLE_mindustry_content_Planets$5_fill_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float 89
typedef void (*func_mindustry_content_Planets$5_fill_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3);
#define VTABLE_mindustry_content_Planets$5_drawSelection_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float_float 90
typedef void (*func_mindustry_content_Planets$5_drawSelection_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4);
#define VTABLE_mindustry_content_Planets$5_renderSectors_arc_graphics_g3d_VertexBatch3D_arc_graphics_g3d_Camera3D_mindustry_graphics_g3d_PlanetParams 91
typedef void (*func_mindustry_content_Planets$5_renderSectors_arc_graphics_g3d_VertexBatch3D_arc_graphics_g3d_Camera3D_mindustry_graphics_g3d_PlanetParams)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_content_Planets$5_drawArc_arc_graphics_g3d_VertexBatch3D_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int 92
typedef void (*func_mindustry_content_Planets$5_drawArc_arc_graphics_g3d_VertexBatch3D_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jfloat param5, jfloat param6, jint param7);
#define VTABLE_mindustry_content_Planets$5_drawArcLine_arc_graphics_g3d_VertexBatch3D_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int_float 93
typedef void (*func_mindustry_content_Planets$5_drawArcLine_arc_graphics_g3d_VertexBatch3D_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jfloat param5, jfloat param6, jint param7, jfloat param8);
#define VTABLE_mindustry_content_Planets$5_lookAt_mindustry_type_Sector_arc_math_geom_Vec3_R_arc_math_geom_Vec3 94
typedef jobject (*func_mindustry_content_Planets$5_lookAt_mindustry_type_Sector_arc_math_geom_Vec3_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_Planets$5_project_mindustry_type_Sector_arc_graphics_g3d_Camera3D_arc_math_geom_Vec3_R_arc_math_geom_Vec3 95
typedef jobject (*func_mindustry_content_Planets$5_project_mindustry_type_Sector_arc_graphics_g3d_Camera3D_arc_math_geom_Vec3_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_content_Planets$5_setPlane_mindustry_type_Sector_arc_graphics_g3d_PlaneBatch3D 96
typedef void (*func_mindustry_content_Planets$5_setPlane_mindustry_type_Sector_arc_graphics_g3d_PlaneBatch3D)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_Planets$5_lambda$init$0_mindustry_content_TechTree$TechNode_R_boolean 97
typedef jbool (*func_mindustry_content_Planets$5_lambda$init$0_mindustry_content_TechTree$TechNode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$5_lambda$reloadMeshAsync$0 98
typedef void (*func_mindustry_content_Planets$5_lambda$reloadMeshAsync$0)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_lambda$reloadMeshAsync$1_mindustry_graphics_g3d_GenericMesh 99
typedef void (*func_mindustry_content_Planets$5_lambda$reloadMeshAsync$1_mindustry_graphics_g3d_GenericMesh)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$5_lambda$loadRules$0_R_mindustry_game_CampaignRules 100
typedef jobject (*func_mindustry_content_Planets$5_lambda$loadRules$0_R_mindustry_game_CampaignRules)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_lambda$new$2_R_arc_graphics_Mesh 101
typedef jobject (*func_mindustry_content_Planets$5_lambda$new$2_R_arc_graphics_Mesh)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_lambda$new$0_R_mindustry_graphics_g3d_GenericMesh 102
typedef jobject (*func_mindustry_content_Planets$5_lambda$new$0_R_mindustry_graphics_g3d_GenericMesh)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$5_lambda$new$0_mindustry_world_Block_mindustry_world_Block_int_float_int_float_R_mindustry_graphics_g3d_GenericMesh 103
typedef jobject (*func_mindustry_content_Planets$5_lambda$new$0_mindustry_world_Block_mindustry_world_Block_int_float_int_float_R_mindustry_graphics_g3d_GenericMesh)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jfloat param3, jint param4, jfloat param5);

void mark_mindustry_content_Planets$5(jobject object, jint mark, jint depth);
void clinit_mindustry_content_Planets$5(jcontext ctx);
void init_mindustry_content_Planets$5_java_lang_String_mindustry_type_Planet_float_float_arc_func_Cons_mindustry_world_Block_mindustry_world_Block_int_float_int(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jobject param4, jobject param5, jobject param6, jint param7, jfloat param8, jint param9);
jobject M_mindustry_content_Planets$5_lambda$new$0_mindustry_world_Block_mindustry_world_Block_int_float_int_float_R_mindustry_graphics_g3d_GenericMesh(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jfloat param3, jint param4, jfloat param5);

#ifdef __cplusplus
}
#endif

#endif
