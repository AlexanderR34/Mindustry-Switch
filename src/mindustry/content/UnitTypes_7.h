#ifndef HEADER_mindustry_content_UnitTypes$7
#define HEADER_mindustry_content_UnitTypes$7

#include "Clearwing.h"
#include "mindustry/type/UnitType.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_content_UnitTypes$7 {
	mindustry_type_UnitType parent;
} mindustry_content_UnitTypes$7;

extern Class class_mindustry_content_UnitTypes$7;


#define VTABLE_mindustry_content_UnitTypes$7_hashCode_R_int 0
typedef jint (*func_mindustry_content_UnitTypes$7_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_content_UnitTypes$7_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_content_UnitTypes$7_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_content_UnitTypes$7_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_content_UnitTypes$7_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_finalize 5
typedef void (*func_mindustry_content_UnitTypes$7_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_notify 6
typedef void (*func_mindustry_content_UnitTypes$7_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_notifyAll 7
typedef void (*func_mindustry_content_UnitTypes$7_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_wait 8
typedef void (*func_mindustry_content_UnitTypes$7_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_wait_long 9
typedef void (*func_mindustry_content_UnitTypes$7_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_content_UnitTypes$7_wait_long_int 10
typedef void (*func_mindustry_content_UnitTypes$7_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_content_UnitTypes$7_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_content_UnitTypes$7_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_getContentType_R_mindustry_ctype_ContentType 12
typedef jobject (*func_mindustry_content_UnitTypes$7_getContentType_R_mindustry_ctype_ContentType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_removeContent 13
typedef void (*func_mindustry_content_UnitTypes$7_removeContent)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_init 14
typedef void (*func_mindustry_content_UnitTypes$7_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_postInit 15
typedef void (*func_mindustry_content_UnitTypes$7_postInit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_afterPatch 16
typedef void (*func_mindustry_content_UnitTypes$7_afterPatch)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_load 17
typedef void (*func_mindustry_content_UnitTypes$7_load)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_loadIcon 18
typedef void (*func_mindustry_content_UnitTypes$7_loadIcon)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_hasErrored_R_boolean 19
typedef jbool (*func_mindustry_content_UnitTypes$7_hasErrored_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_isVanilla_R_boolean 20
typedef jbool (*func_mindustry_content_UnitTypes$7_isVanilla_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_isModded_R_boolean 21
typedef jbool (*func_mindustry_content_UnitTypes$7_isModded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_isPatchContent_R_boolean 22
typedef jbool (*func_mindustry_content_UnitTypes$7_isPatchContent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_compareTo_mindustry_ctype_Content_R_int 23
typedef jint (*func_mindustry_content_UnitTypes$7_compareTo_mindustry_ctype_Content_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_isBanned_R_boolean 24
typedef jbool (*func_mindustry_content_UnitTypes$7_isBanned_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_isOnPlanet_mindustry_type_Planet_R_boolean 25
typedef jbool (*func_mindustry_content_UnitTypes$7_isOnPlanet_mindustry_type_Planet_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_getLogicId_R_int 26
typedef jint (*func_mindustry_content_UnitTypes$7_getLogicId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_displayDescription_R_java_lang_String 27
typedef jobject (*func_mindustry_content_UnitTypes$7_displayDescription_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_checkStats 28
typedef void (*func_mindustry_content_UnitTypes$7_checkStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_setStats 29
typedef void (*func_mindustry_content_UnitTypes$7_setStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_computeStats_R_mindustry_world_meta_Stats 30
typedef jobject (*func_mindustry_content_UnitTypes$7_computeStats_R_mindustry_world_meta_Stats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_displayExtra_arc_scene_ui_layout_Table 31
typedef void (*func_mindustry_content_UnitTypes$7_displayExtra_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_createIcons_mindustry_graphics_MultiPacker 32
typedef void (*func_mindustry_content_UnitTypes$7_createIcons_mindustry_graphics_MultiPacker)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int 33
typedef void (*func_mindustry_content_UnitTypes$7_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4, jint param5);
#define VTABLE_mindustry_content_UnitTypes$7_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int 34
typedef void (*func_mindustry_content_UnitTypes$7_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jobject param4, jint param5, jint param6);
#define VTABLE_mindustry_content_UnitTypes$7_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int 35
typedef void (*func_mindustry_content_UnitTypes$7_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4);
#define VTABLE_mindustry_content_UnitTypes$7_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color 36
typedef void (*func_mindustry_content_UnitTypes$7_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_content_UnitTypes$7_researchRequirements_R_Array1_mindustry_type_ItemStack 37
typedef jobject (*func_mindustry_content_UnitTypes$7_researchRequirements_R_Array1_mindustry_type_ItemStack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_emoji_R_java_lang_String 38
typedef jobject (*func_mindustry_content_UnitTypes$7_emoji_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_emojiChar_R_int 39
typedef jint (*func_mindustry_content_UnitTypes$7_emojiChar_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_hasEmoji_R_boolean 40
typedef jbool (*func_mindustry_content_UnitTypes$7_hasEmoji_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_getDependencies_arc_func_Cons 41
typedef void (*func_mindustry_content_UnitTypes$7_getDependencies_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_onUnlock 42
typedef void (*func_mindustry_content_UnitTypes$7_onUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_isHidden_R_boolean 43
typedef jbool (*func_mindustry_content_UnitTypes$7_isHidden_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_showUnlock_R_boolean 44
typedef jbool (*func_mindustry_content_UnitTypes$7_showUnlock_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_logicVisible_R_boolean 45
typedef jbool (*func_mindustry_content_UnitTypes$7_logicVisible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_unlock 46
typedef void (*func_mindustry_content_UnitTypes$7_unlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_quietUnlock 47
typedef void (*func_mindustry_content_UnitTypes$7_quietUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_unlockedNowHost_R_boolean 48
typedef jbool (*func_mindustry_content_UnitTypes$7_unlockedNowHost_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_unlockedHost_R_boolean 49
typedef jbool (*func_mindustry_content_UnitTypes$7_unlockedHost_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_unlockedNow_R_boolean 50
typedef jbool (*func_mindustry_content_UnitTypes$7_unlockedNow_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_unlocked_R_boolean 51
typedef jbool (*func_mindustry_content_UnitTypes$7_unlocked_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_clearUnlock 52
typedef void (*func_mindustry_content_UnitTypes$7_clearUnlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_locked_R_boolean 53
typedef jbool (*func_mindustry_content_UnitTypes$7_locked_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_sense_mindustry_logic_LAccess_R_double 54
typedef jdouble (*func_mindustry_content_UnitTypes$7_sense_mindustry_logic_LAccess_R_double)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_sense_mindustry_ctype_Content_R_double 55
typedef jdouble (*func_mindustry_content_UnitTypes$7_sense_mindustry_ctype_Content_R_double)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_senseObject_mindustry_logic_LAccess_R_java_lang_Object 56
typedef jobject (*func_mindustry_content_UnitTypes$7_senseObject_mindustry_logic_LAccess_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_createController_mindustry_gen_Unit_R_mindustry_entities_units_UnitController 57
typedef jobject (*func_mindustry_content_UnitTypes$7_createController_mindustry_gen_Unit_R_mindustry_entities_units_UnitController)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_create_mindustry_game_Team_R_mindustry_gen_Unit 58
typedef jobject (*func_mindustry_content_UnitTypes$7_create_mindustry_game_Team_R_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_spawn_mindustry_game_Team_float_float_float_arc_func_Cons_R_mindustry_gen_Unit 59
typedef jobject (*func_mindustry_content_UnitTypes$7_spawn_mindustry_game_Team_float_float_float_arc_func_Cons_R_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
#define VTABLE_mindustry_content_UnitTypes$7_spawn_mindustry_game_Team_float_float_float_R_mindustry_gen_Unit 60
typedef jobject (*func_mindustry_content_UnitTypes$7_spawn_mindustry_game_Team_float_float_float_R_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_content_UnitTypes$7_spawn_mindustry_game_Team_float_float_R_mindustry_gen_Unit 61
typedef jobject (*func_mindustry_content_UnitTypes$7_spawn_mindustry_game_Team_float_float_R_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_content_UnitTypes$7_spawn_float_float_R_mindustry_gen_Unit 62
typedef jobject (*func_mindustry_content_UnitTypes$7_spawn_float_float_R_mindustry_gen_Unit)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_content_UnitTypes$7_spawn_mindustry_game_Team_arc_math_geom_Position_R_mindustry_gen_Unit 63
typedef jobject (*func_mindustry_content_UnitTypes$7_spawn_mindustry_game_Team_arc_math_geom_Position_R_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_UnitTypes$7_spawn_arc_math_geom_Position_R_mindustry_gen_Unit 64
typedef jobject (*func_mindustry_content_UnitTypes$7_spawn_arc_math_geom_Position_R_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_spawn_arc_math_geom_Position_mindustry_game_Team_R_mindustry_gen_Unit 65
typedef jobject (*func_mindustry_content_UnitTypes$7_spawn_arc_math_geom_Position_mindustry_game_Team_R_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_UnitTypes$7_hasWeapons_R_boolean 66
typedef jbool (*func_mindustry_content_UnitTypes$7_hasWeapons_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_targetable_mindustry_gen_Unit_mindustry_game_Team_R_boolean 67
typedef jbool (*func_mindustry_content_UnitTypes$7_targetable_mindustry_gen_Unit_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_UnitTypes$7_killable_mindustry_gen_Unit_R_boolean 68
typedef jbool (*func_mindustry_content_UnitTypes$7_killable_mindustry_gen_Unit_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_hittable_mindustry_gen_Unit_R_boolean 69
typedef jbool (*func_mindustry_content_UnitTypes$7_hittable_mindustry_gen_Unit_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_getUnitStances_mindustry_gen_Unit_arc_struct_Seq 70
typedef void (*func_mindustry_content_UnitTypes$7_getUnitStances_mindustry_gen_Unit_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_UnitTypes$7_allowStance_mindustry_gen_Unit_mindustry_ai_UnitStance_R_boolean 71
typedef jbool (*func_mindustry_content_UnitTypes$7_allowStance_mindustry_gen_Unit_mindustry_ai_UnitStance_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_UnitTypes$7_allowCommand_mindustry_gen_Unit_mindustry_ai_UnitCommand_R_boolean 72
typedef jbool (*func_mindustry_content_UnitTypes$7_allowCommand_mindustry_gen_Unit_mindustry_ai_UnitCommand_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_UnitTypes$7_update_mindustry_gen_Unit 73
typedef void (*func_mindustry_content_UnitTypes$7_update_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_updatePayload_mindustry_gen_Unit_mindustry_gen_Unit_mindustry_gen_Building 74
typedef void (*func_mindustry_content_UnitTypes$7_updatePayload_mindustry_gen_Unit_mindustry_gen_Unit_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_content_UnitTypes$7_killed_mindustry_gen_Unit 75
typedef void (*func_mindustry_content_UnitTypes$7_killed_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_landed_mindustry_gen_Unit 76
typedef void (*func_mindustry_content_UnitTypes$7_landed_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_display_mindustry_gen_Unit_arc_scene_ui_layout_Table 77
typedef void (*func_mindustry_content_UnitTypes$7_display_mindustry_gen_Unit_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_UnitTypes$7_supportsEnv_int_R_boolean 78
typedef jbool (*func_mindustry_content_UnitTypes$7_supportsEnv_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_content_UnitTypes$7_checkEntityMapping_mindustry_gen_Unit 79
typedef void (*func_mindustry_content_UnitTypes$7_checkEntityMapping_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_initPathType 80
typedef void (*func_mindustry_content_UnitTypes$7_initPathType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_estimateDps_R_float 81
typedef jfloat (*func_mindustry_content_UnitTypes$7_estimateDps_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_getRegionsToOutline_arc_struct_Seq 82
typedef void (*func_mindustry_content_UnitTypes$7_getRegionsToOutline_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_needsBodyOutline_R_boolean 83
typedef jbool (*func_mindustry_content_UnitTypes$7_needsBodyOutline_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_beforeParse 84
typedef void (*func_mindustry_content_UnitTypes$7_beforeParse)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_getBuildTime_R_float 85
typedef jfloat (*func_mindustry_content_UnitTypes$7_getBuildTime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_getTotalRequirements_R_Array1_mindustry_type_ItemStack 86
typedef jobject (*func_mindustry_content_UnitTypes$7_getTotalRequirements_R_Array1_mindustry_type_ItemStack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_getRequirements_Array1_mindustry_type_UnitType_Array1_float_R_Array1_mindustry_type_ItemStack 87
typedef jobject (*func_mindustry_content_UnitTypes$7_getRequirements_Array1_mindustry_type_UnitType_Array1_float_R_Array1_mindustry_type_ItemStack)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_UnitTypes$7_getFirstRequirements_R_Array1_mindustry_type_ItemStack 88
typedef jobject (*func_mindustry_content_UnitTypes$7_getFirstRequirements_R_Array1_mindustry_type_ItemStack)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_UnitTypes$7_setEnginesMirror_Array1_mindustry_type_UnitType$UnitEngine 89
typedef void (*func_mindustry_content_UnitTypes$7_setEnginesMirror_Array1_mindustry_type_UnitType$UnitEngine)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_draw_mindustry_gen_Unit 90
typedef void (*func_mindustry_content_UnitTypes$7_draw_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color 91
typedef jobject (*func_mindustry_content_UnitTypes$7_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_drawMining_mindustry_gen_Unit 92
typedef void (*func_mindustry_content_UnitTypes$7_drawMining_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_drawMiningBeam_mindustry_gen_Unit_float_float 93
typedef void (*func_mindustry_content_UnitTypes$7_drawMiningBeam_mindustry_gen_Unit_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_content_UnitTypes$7_drawPayload_mindustry_gen_Unit 94
typedef void (*func_mindustry_content_UnitTypes$7_drawPayload_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_drawShield_mindustry_gen_Unit 95
typedef void (*func_mindustry_content_UnitTypes$7_drawShield_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_drawShadow_mindustry_gen_Unit 96
typedef void (*func_mindustry_content_UnitTypes$7_drawShadow_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_drawSoftShadow_mindustry_gen_Unit 97
typedef void (*func_mindustry_content_UnitTypes$7_drawSoftShadow_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_drawSoftShadow_mindustry_gen_Unit_float 98
typedef void (*func_mindustry_content_UnitTypes$7_drawSoftShadow_mindustry_gen_Unit_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_content_UnitTypes$7_drawSoftShadow_float_float_float_float 99
typedef void (*func_mindustry_content_UnitTypes$7_drawSoftShadow_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_content_UnitTypes$7_drawItems_mindustry_gen_Unit 100
typedef void (*func_mindustry_content_UnitTypes$7_drawItems_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_drawTrail_mindustry_gen_Unit 101
typedef void (*func_mindustry_content_UnitTypes$7_drawTrail_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_drawEngines_mindustry_gen_Unit 102
typedef void (*func_mindustry_content_UnitTypes$7_drawEngines_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_drawWeapons_mindustry_gen_Unit 103
typedef void (*func_mindustry_content_UnitTypes$7_drawWeapons_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_drawWeaponOutlines_mindustry_gen_Unit 104
typedef void (*func_mindustry_content_UnitTypes$7_drawWeaponOutlines_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_drawOutline_mindustry_gen_Unit 105
typedef void (*func_mindustry_content_UnitTypes$7_drawOutline_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_drawBody_mindustry_gen_Unit 106
typedef void (*func_mindustry_content_UnitTypes$7_drawBody_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_drawCell_mindustry_gen_Unit 107
typedef void (*func_mindustry_content_UnitTypes$7_drawCell_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_cellColor_mindustry_gen_Unit_R_arc_graphics_Color 108
typedef jobject (*func_mindustry_content_UnitTypes$7_cellColor_mindustry_gen_Unit_R_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_drawLight_mindustry_gen_Unit 109
typedef void (*func_mindustry_content_UnitTypes$7_drawLight_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_drawTank_mindustry_gen_Unit 110
typedef void (*func_mindustry_content_UnitTypes$7_drawTank_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_drawLegs_mindustry_gen_Unit 111
typedef void (*func_mindustry_content_UnitTypes$7_drawLegs_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_drawCrawl_mindustry_gen_Crawlc 112
typedef void (*func_mindustry_content_UnitTypes$7_drawCrawl_mindustry_gen_Crawlc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_drawMech_mindustry_gen_Mechc 113
typedef void (*func_mindustry_content_UnitTypes$7_drawMech_mindustry_gen_Mechc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_applyOutlineColor_mindustry_gen_Unit 114
typedef void (*func_mindustry_content_UnitTypes$7_applyOutlineColor_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_applyColor_mindustry_gen_Unit 115
typedef void (*func_mindustry_content_UnitTypes$7_applyColor_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_lambda$getRequirements$9_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan_R_boolean 116
typedef jbool (*func_mindustry_content_UnitTypes$7_lambda$getRequirements$9_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_lambda$getRequirements$7_mindustry_world_Block_R_boolean 117
typedef jbool (*func_mindustry_content_UnitTypes$7_lambda$getRequirements$7_mindustry_world_Block_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_lambda$getRequirements$8_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan_R_boolean 118
typedef jbool (*func_mindustry_content_UnitTypes$7_lambda$getRequirements$8_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_lambda$getRequirements$6_mindustry_world_blocks_units_UnitFactory$UnitPlan_R_boolean 119
typedef jbool (*func_mindustry_content_UnitTypes$7_lambda$getRequirements$6_mindustry_world_blocks_units_UnitFactory$UnitPlan_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_lambda$getRequirements$4_mindustry_world_Block_R_boolean 120
typedef jbool (*func_mindustry_content_UnitTypes$7_lambda$getRequirements$4_mindustry_world_Block_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_lambda$getRequirements$5_mindustry_world_blocks_units_UnitFactory$UnitPlan_R_boolean 121
typedef jbool (*func_mindustry_content_UnitTypes$7_lambda$getRequirements$5_mindustry_world_blocks_units_UnitFactory$UnitPlan_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_lambda$getRequirements$3_Array1_mindustry_type_UnitType_R_boolean 122
typedef jbool (*func_mindustry_content_UnitTypes$7_lambda$getRequirements$3_Array1_mindustry_type_UnitType_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_lambda$getRequirements$0_mindustry_world_Block_R_boolean 123
typedef jbool (*func_mindustry_content_UnitTypes$7_lambda$getRequirements$0_mindustry_world_Block_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_lambda$getRequirements$1_Array1_mindustry_type_UnitType_R_boolean 124
typedef jbool (*func_mindustry_content_UnitTypes$7_lambda$getRequirements$1_Array1_mindustry_type_UnitType_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_lambda$init$2_mindustry_entities_Effect$EffectContainer 125
typedef void (*func_mindustry_content_UnitTypes$7_lambda$init$2_mindustry_entities_Effect$EffectContainer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_lambda$setStats$2_mindustry_world_Block_R_boolean 126
typedef jbool (*func_mindustry_content_UnitTypes$7_lambda$setStats$2_mindustry_world_Block_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_lambda$setStats$0_arc_scene_ui_layout_Table 127
typedef void (*func_mindustry_content_UnitTypes$7_lambda$setStats$0_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_lambda$display$1_mindustry_gen_Unit_arc_scene_ui_layout_Table 128
typedef void (*func_mindustry_content_UnitTypes$7_lambda$display$1_mindustry_gen_Unit_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_UnitTypes$7_lambda$display$2_mindustry_gen_Payloadc_R_float 129
typedef jfloat (*func_mindustry_content_UnitTypes$7_lambda$display$2_mindustry_gen_Payloadc_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_lambda$display$0_mindustry_gen_Unit_arc_scene_ui_layout_Table 130
typedef void (*func_mindustry_content_UnitTypes$7_lambda$display$0_mindustry_gen_Unit_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_UnitTypes$7_lambda$new$1_mindustry_gen_Unit_R_mindustry_entities_units_UnitController 131
typedef jobject (*func_mindustry_content_UnitTypes$7_lambda$new$1_mindustry_gen_Unit_R_mindustry_entities_units_UnitController)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_UnitTypes$7_lambda$new$0_R_mindustry_entities_units_UnitController 132
typedef jobject (*func_mindustry_content_UnitTypes$7_lambda$new$0_R_mindustry_entities_units_UnitController)(jcontext ctx, jobject self);

void mark_mindustry_content_UnitTypes$7(jobject object, jint mark, jint depth);
void clinit_mindustry_content_UnitTypes$7(jcontext ctx);
void init_mindustry_content_UnitTypes$7_java_lang_String(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
