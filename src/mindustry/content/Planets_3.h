#ifndef HEADER_mindustry_content_Planets$3
#define HEADER_mindustry_content_Planets$3

#include "Clearwing.h"
#include "mindustry/type/Planet.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_content_Planets$3 {
	mindustry_type_Planet parent;
} mindustry_content_Planets$3;

extern Class class_mindustry_content_Planets$3;


#define VTABLE_mindustry_content_Planets$3_hashCode_R_int 0
typedef jint (*func_mindustry_content_Planets$3_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_content_Planets$3_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$3_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_content_Planets$3_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_content_Planets$3_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_content_Planets$3_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_finalize 5
typedef void (*func_mindustry_content_Planets$3_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_notify 6
typedef void (*func_mindustry_content_Planets$3_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_notifyAll 7
typedef void (*func_mindustry_content_Planets$3_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_wait 8
typedef void (*func_mindustry_content_Planets$3_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_wait_long 9
typedef void (*func_mindustry_content_Planets$3_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_content_Planets$3_wait_long_int 10
typedef void (*func_mindustry_content_Planets$3_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_content_Planets$3_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_content_Planets$3_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$3_getContentType_R_mindustry_ctype_ContentType 12
typedef jobject (*func_mindustry_content_Planets$3_getContentType_R_mindustry_ctype_ContentType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_removeContent 13
typedef void (*func_mindustry_content_Planets$3_removeContent)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_init 14
typedef void (*func_mindustry_content_Planets$3_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_postInit 15
typedef void (*func_mindustry_content_Planets$3_postInit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_afterPatch 16
typedef void (*func_mindustry_content_Planets$3_afterPatch)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_load 17
typedef void (*func_mindustry_content_Planets$3_load)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_loadIcon 18
typedef void (*func_mindustry_content_Planets$3_loadIcon)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_hasErrored_R_boolean 19
typedef jbool (*func_mindustry_content_Planets$3_hasErrored_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_isVanilla_R_boolean 20
typedef jbool (*func_mindustry_content_Planets$3_isVanilla_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_isModded_R_boolean 21
typedef jbool (*func_mindustry_content_Planets$3_isModded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_isPatchContent_R_boolean 22
typedef jbool (*func_mindustry_content_Planets$3_isPatchContent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_compareTo_mindustry_ctype_Content_R_int 23
typedef jint (*func_mindustry_content_Planets$3_compareTo_mindustry_ctype_Content_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$3_isBanned_R_boolean 24
typedef jbool (*func_mindustry_content_Planets$3_isBanned_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_isOnPlanet_mindustry_type_Planet_R_boolean 25
typedef jbool (*func_mindustry_content_Planets$3_isOnPlanet_mindustry_type_Planet_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$3_getLogicId_R_int 26
typedef jint (*func_mindustry_content_Planets$3_getLogicId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_displayDescription_R_java_lang_String 27
typedef jobject (*func_mindustry_content_Planets$3_displayDescription_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_checkStats 28
typedef void (*func_mindustry_content_Planets$3_checkStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_setStats 29
typedef void (*func_mindustry_content_Planets$3_setStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_computeStats_R_mindustry_world_meta_Stats 30
typedef jobject (*func_mindustry_content_Planets$3_computeStats_R_mindustry_world_meta_Stats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_displayExtra_arc_scene_ui_layout_Table 31
typedef void (*func_mindustry_content_Planets$3_displayExtra_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$3_createIcons_mindustry_graphics_MultiPacker 32
typedef void (*func_mindustry_content_Planets$3_createIcons_mindustry_graphics_MultiPacker)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$3_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int 33
typedef void (*func_mindustry_content_Planets$3_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4, jint param5);
#define VTABLE_mindustry_content_Planets$3_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int 34
typedef void (*func_mindustry_content_Planets$3_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4, jint param5, jint param6);
#define VTABLE_mindustry_content_Planets$3_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int 35
typedef void (*func_mindustry_content_Planets$3_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4);
#define VTABLE_mindustry_content_Planets$3_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color 36
typedef void (*func_mindustry_content_Planets$3_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_content_Planets$3_researchRequirements_R_Array1_mindustry_type_ItemStack 37
typedef jobject (*func_mindustry_content_Planets$3_researchRequirements_R_Array1_mindustry_type_ItemStack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_emoji_R_java_lang_String 38
typedef jobject (*func_mindustry_content_Planets$3_emoji_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_emojiChar_R_int 39
typedef jint (*func_mindustry_content_Planets$3_emojiChar_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_hasEmoji_R_boolean 40
typedef jbool (*func_mindustry_content_Planets$3_hasEmoji_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_getDependencies_arc_func_Cons 41
typedef void (*func_mindustry_content_Planets$3_getDependencies_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$3_onUnlock 42
typedef void (*func_mindustry_content_Planets$3_onUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_isHidden_R_boolean 43
typedef jbool (*func_mindustry_content_Planets$3_isHidden_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_showUnlock_R_boolean 44
typedef jbool (*func_mindustry_content_Planets$3_showUnlock_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_logicVisible_R_boolean 45
typedef jbool (*func_mindustry_content_Planets$3_logicVisible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_unlock 46
typedef void (*func_mindustry_content_Planets$3_unlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_quietUnlock 47
typedef void (*func_mindustry_content_Planets$3_quietUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_unlockedNowHost_R_boolean 48
typedef jbool (*func_mindustry_content_Planets$3_unlockedNowHost_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_unlockedHost_R_boolean 49
typedef jbool (*func_mindustry_content_Planets$3_unlockedHost_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_unlockedNow_R_boolean 50
typedef jbool (*func_mindustry_content_Planets$3_unlockedNow_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_unlocked_R_boolean 51
typedef jbool (*func_mindustry_content_Planets$3_unlocked_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_clearUnlock 52
typedef void (*func_mindustry_content_Planets$3_clearUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_locked_R_boolean 53
typedef jbool (*func_mindustry_content_Planets$3_locked_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_saveRules 54
typedef void (*func_mindustry_content_Planets$3_saveRules)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_loadRules 55
typedef void (*func_mindustry_content_Planets$3_loadRules)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_stats_R_mindustry_game_CampaignStats 56
typedef jobject (*func_mindustry_content_Planets$3_stats_R_mindustry_game_CampaignStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_loadStats 57
typedef void (*func_mindustry_content_Planets$3_loadStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_saveStats 58
typedef void (*func_mindustry_content_Planets$3_saveStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_clearStats 59
typedef void (*func_mindustry_content_Planets$3_clearStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_getStartSector_R_mindustry_type_Sector 60
typedef jobject (*func_mindustry_content_Planets$3_getStartSector_R_mindustry_type_Sector)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_applyRules_mindustry_game_Rules 61
typedef void (*func_mindustry_content_Planets$3_applyRules_mindustry_game_Rules)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$3_applyRules_mindustry_game_Rules_boolean 62
typedef void (*func_mindustry_content_Planets$3_applyRules_mindustry_game_Rules_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_content_Planets$3_applyDefaultRules_mindustry_game_CampaignRules 63
typedef void (*func_mindustry_content_Planets$3_applyDefaultRules_mindustry_game_CampaignRules)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$3_getLastSector_R_mindustry_type_Sector 64
typedef jobject (*func_mindustry_content_Planets$3_getLastSector_R_mindustry_type_Sector)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_setLastSector_mindustry_type_Sector 65
typedef void (*func_mindustry_content_Planets$3_setLastSector_mindustry_type_Sector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$3_preset_int_mindustry_type_SectorPreset 66
typedef void (*func_mindustry_content_Planets$3_preset_int_mindustry_type_SectorPreset)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_content_Planets$3_hasGrid_R_boolean 67
typedef jbool (*func_mindustry_content_Planets$3_hasGrid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_isLandable_R_boolean 68
typedef jbool (*func_mindustry_content_Planets$3_isLandable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_updateTotalRadius 69
typedef void (*func_mindustry_content_Planets$3_updateTotalRadius)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_getLightNormal_R_arc_math_geom_Vec3 70
typedef jobject (*func_mindustry_content_Planets$3_getLightNormal_R_arc_math_geom_Vec3)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_getOrbitAngle_R_float 71
typedef jfloat (*func_mindustry_content_Planets$3_getOrbitAngle_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_getRotation_R_float 72
typedef jfloat (*func_mindustry_content_Planets$3_getRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_addParentOffset_arc_math_geom_Vec3_R_arc_math_geom_Vec3 73
typedef jobject (*func_mindustry_content_Planets$3_addParentOffset_arc_math_geom_Vec3_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$3_getWorldPosition_arc_math_geom_Vec3_R_arc_math_geom_Vec3 74
typedef jobject (*func_mindustry_content_Planets$3_getWorldPosition_arc_math_geom_Vec3_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$3_updateBaseCoverage 75
typedef void (*func_mindustry_content_Planets$3_updateBaseCoverage)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_getTransform_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D 76
typedef jobject (*func_mindustry_content_Planets$3_getTransform_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$3_reloadMesh 77
typedef void (*func_mindustry_content_Planets$3_reloadMesh)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_reloadMeshAsync 78
typedef void (*func_mindustry_content_Planets$3_reloadMeshAsync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_getData_R_mindustry_type_Planet$PlanetData 79
typedef jobject (*func_mindustry_content_Planets$3_getData_R_mindustry_type_Planet$PlanetData)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_getSector_mindustry_graphics_g3d_PlanetGrid$Ptile_R_mindustry_type_Sector 80
typedef jobject (*func_mindustry_content_Planets$3_getSector_mindustry_graphics_g3d_PlanetGrid$Ptile_R_mindustry_type_Sector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$3_getSector_arc_math_geom_Ray_R_mindustry_type_Sector 81
typedef jobject (*func_mindustry_content_Planets$3_getSector_arc_math_geom_Ray_R_mindustry_type_Sector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$3_getSector_arc_math_geom_Ray_float_R_mindustry_type_Sector 82
typedef jobject (*func_mindustry_content_Planets$3_getSector_arc_math_geom_Ray_float_R_mindustry_type_Sector)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_content_Planets$3_intersect_arc_math_geom_Ray_float_R_arc_math_geom_Vec3 83
typedef jobject (*func_mindustry_content_Planets$3_intersect_arc_math_geom_Ray_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_content_Planets$3_visible_R_boolean 84
typedef jbool (*func_mindustry_content_Planets$3_visible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_draw_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D 85
typedef void (*func_mindustry_content_Planets$3_draw_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_content_Planets$3_drawAtmosphere_arc_graphics_Mesh_arc_graphics_g3d_Camera3D 86
typedef void (*func_mindustry_content_Planets$3_drawAtmosphere_arc_graphics_Mesh_arc_graphics_g3d_Camera3D)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_Planets$3_drawClouds_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D 87
typedef void (*func_mindustry_content_Planets$3_drawClouds_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_content_Planets$3_drawBorders_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float 88
typedef void (*func_mindustry_content_Planets$3_drawBorders_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3);
#define VTABLE_mindustry_content_Planets$3_fill_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float 89
typedef void (*func_mindustry_content_Planets$3_fill_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3);
#define VTABLE_mindustry_content_Planets$3_drawSelection_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float_float 90
typedef void (*func_mindustry_content_Planets$3_drawSelection_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4);
#define VTABLE_mindustry_content_Planets$3_renderSectors_arc_graphics_g3d_VertexBatch3D_arc_graphics_g3d_Camera3D_mindustry_graphics_g3d_PlanetParams 91
typedef void (*func_mindustry_content_Planets$3_renderSectors_arc_graphics_g3d_VertexBatch3D_arc_graphics_g3d_Camera3D_mindustry_graphics_g3d_PlanetParams)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_content_Planets$3_drawArc_arc_graphics_g3d_VertexBatch3D_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int 92
typedef void (*func_mindustry_content_Planets$3_drawArc_arc_graphics_g3d_VertexBatch3D_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jfloat param5, jfloat param6, jint param7);
#define VTABLE_mindustry_content_Planets$3_drawArcLine_arc_graphics_g3d_VertexBatch3D_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int_float 93
typedef void (*func_mindustry_content_Planets$3_drawArcLine_arc_graphics_g3d_VertexBatch3D_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jfloat param5, jfloat param6, jint param7, jfloat param8);
#define VTABLE_mindustry_content_Planets$3_lookAt_mindustry_type_Sector_arc_math_geom_Vec3_R_arc_math_geom_Vec3 94
typedef jobject (*func_mindustry_content_Planets$3_lookAt_mindustry_type_Sector_arc_math_geom_Vec3_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_Planets$3_project_mindustry_type_Sector_arc_graphics_g3d_Camera3D_arc_math_geom_Vec3_R_arc_math_geom_Vec3 95
typedef jobject (*func_mindustry_content_Planets$3_project_mindustry_type_Sector_arc_graphics_g3d_Camera3D_arc_math_geom_Vec3_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_content_Planets$3_setPlane_mindustry_type_Sector_arc_graphics_g3d_PlaneBatch3D 96
typedef void (*func_mindustry_content_Planets$3_setPlane_mindustry_type_Sector_arc_graphics_g3d_PlaneBatch3D)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_Planets$3_lambda$init$0_mindustry_content_TechTree$TechNode_R_boolean 97
typedef jbool (*func_mindustry_content_Planets$3_lambda$init$0_mindustry_content_TechTree$TechNode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$3_lambda$reloadMeshAsync$0 98
typedef void (*func_mindustry_content_Planets$3_lambda$reloadMeshAsync$0)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_lambda$reloadMeshAsync$1_mindustry_graphics_g3d_GenericMesh 99
typedef void (*func_mindustry_content_Planets$3_lambda$reloadMeshAsync$1_mindustry_graphics_g3d_GenericMesh)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets$3_lambda$loadRules$0_R_mindustry_game_CampaignRules 100
typedef jobject (*func_mindustry_content_Planets$3_lambda$loadRules$0_R_mindustry_game_CampaignRules)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_lambda$new$2_R_arc_graphics_Mesh 101
typedef jobject (*func_mindustry_content_Planets$3_lambda$new$2_R_arc_graphics_Mesh)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets$3_lambda$new$0_R_mindustry_graphics_g3d_GenericMesh 102
typedef jobject (*func_mindustry_content_Planets$3_lambda$new$0_R_mindustry_graphics_g3d_GenericMesh)(jcontext ctx, jobject self);

void mark_mindustry_content_Planets$3(jobject object, jint mark, jint depth);
void clinit_mindustry_content_Planets$3(jcontext ctx);
void init_mindustry_content_Planets$3_java_lang_String_mindustry_type_Planet_float_int(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jint param3);
void SM_mindustry_content_Planets$3_lambda$new$1_mindustry_game_Rules(jcontext ctx, jobject param0);
jobject M_mindustry_content_Planets$3_lambda$new$0_R_mindustry_graphics_g3d_GenericMesh(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
