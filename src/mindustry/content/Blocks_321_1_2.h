#ifndef HEADER_mindustry_content_Blocks$321$1$2
#define HEADER_mindustry_content_Blocks$321$1$2

#include "Clearwing.h"
#include "mindustry/entities/bullet/LaserBulletType.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_content_Blocks$321$1$2 {
	mindustry_entities_bullet_LaserBulletType parent;
	jref F_val$haloColor;
	jref F_this$1;
} mindustry_content_Blocks$321$1$2;

extern Class class_mindustry_content_Blocks$321$1$2;


#define VTABLE_mindustry_content_Blocks$321$1$2_hashCode_R_int 0
typedef jint (*func_mindustry_content_Blocks$321$1$2_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$1$2_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_content_Blocks$321$1$2_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$1$2_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_content_Blocks$321$1$2_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$1$2_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_content_Blocks$321$1$2_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$1$2_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_content_Blocks$321$1$2_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$1$2_finalize 5
typedef void (*func_mindustry_content_Blocks$321$1$2_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$1$2_notify 6
typedef void (*func_mindustry_content_Blocks$321$1$2_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$1$2_notifyAll 7
typedef void (*func_mindustry_content_Blocks$321$1$2_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$1$2_wait 8
typedef void (*func_mindustry_content_Blocks$321$1$2_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$1$2_wait_long 9
typedef void (*func_mindustry_content_Blocks$321$1$2_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_content_Blocks$321$1$2_wait_long_int 10
typedef void (*func_mindustry_content_Blocks$321$1$2_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_content_Blocks$321$1$2_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_content_Blocks$321$1$2_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$1$2_getContentType_R_mindustry_ctype_ContentType 12
typedef jobject (*func_mindustry_content_Blocks$321$1$2_getContentType_R_mindustry_ctype_ContentType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$1$2_removeContent 13
typedef void (*func_mindustry_content_Blocks$321$1$2_removeContent)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$1$2_init 14
typedef void (*func_mindustry_content_Blocks$321$1$2_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$1$2_postInit 15
typedef void (*func_mindustry_content_Blocks$321$1$2_postInit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$1$2_afterPatch 16
typedef void (*func_mindustry_content_Blocks$321$1$2_afterPatch)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$1$2_load 17
typedef void (*func_mindustry_content_Blocks$321$1$2_load)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$1$2_loadIcon 18
typedef void (*func_mindustry_content_Blocks$321$1$2_loadIcon)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$1$2_hasErrored_R_boolean 19
typedef jbool (*func_mindustry_content_Blocks$321$1$2_hasErrored_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$1$2_isVanilla_R_boolean 20
typedef jbool (*func_mindustry_content_Blocks$321$1$2_isVanilla_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$1$2_isModded_R_boolean 21
typedef jbool (*func_mindustry_content_Blocks$321$1$2_isModded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$1$2_isPatchContent_R_boolean 22
typedef jbool (*func_mindustry_content_Blocks$321$1$2_isPatchContent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$1$2_compareTo_mindustry_ctype_Content_R_int 23
typedef jint (*func_mindustry_content_Blocks$321$1$2_compareTo_mindustry_ctype_Content_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$1$2_copy_R_mindustry_entities_bullet_BulletType 24
typedef jobject (*func_mindustry_content_Blocks$321$1$2_copy_R_mindustry_entities_bullet_BulletType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$1$2_estimateDPS_R_float 25
typedef jfloat (*func_mindustry_content_Blocks$321$1$2_estimateDPS_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$1$2_calculateRange_R_float 26
typedef jfloat (*func_mindustry_content_Blocks$321$1$2_calculateRange_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$1$2_continuousDamage_R_float 27
typedef jfloat (*func_mindustry_content_Blocks$321$1$2_continuousDamage_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$1$2_heals_R_boolean 28
typedef jbool (*func_mindustry_content_Blocks$321$1$2_heals_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$321$1$2_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean 29
typedef jbool (*func_mindustry_content_Blocks$321$1$2_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_Blocks$321$1$2_hitTile_mindustry_gen_Bullet_mindustry_gen_Building_float_float_float_boolean 30
typedef void (*func_mindustry_content_Blocks$321$1$2_hitTile_mindustry_gen_Bullet_mindustry_gen_Building_float_float_float_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jbool param5);
#define VTABLE_mindustry_content_Blocks$321$1$2_hitEntity_mindustry_gen_Bullet_mindustry_gen_Hitboxc_float 31
typedef void (*func_mindustry_content_Blocks$321$1$2_hitEntity_mindustry_gen_Bullet_mindustry_gen_Hitboxc_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);
#define VTABLE_mindustry_content_Blocks$321$1$2_handlePierce_mindustry_gen_Bullet_float_float_float 32
typedef void (*func_mindustry_content_Blocks$321$1$2_handlePierce_mindustry_gen_Bullet_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_content_Blocks$321$1$2_damageMultiplier_mindustry_gen_Bullet_R_float 33
typedef jfloat (*func_mindustry_content_Blocks$321$1$2_damageMultiplier_mindustry_gen_Bullet_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$1$2_hit_mindustry_gen_Bullet 34
typedef void (*func_mindustry_content_Blocks$321$1$2_hit_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$1$2_hit_mindustry_gen_Bullet_float_float 35
typedef void (*func_mindustry_content_Blocks$321$1$2_hit_mindustry_gen_Bullet_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_content_Blocks$321$1$2_hit_mindustry_gen_Bullet_float_float_boolean 36
typedef void (*func_mindustry_content_Blocks$321$1$2_hit_mindustry_gen_Bullet_float_float_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jbool param3);
#define VTABLE_mindustry_content_Blocks$321$1$2_createIncend_mindustry_gen_Bullet_float_float 37
typedef void (*func_mindustry_content_Blocks$321$1$2_createIncend_mindustry_gen_Bullet_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_content_Blocks$321$1$2_createPuddles_mindustry_gen_Bullet_float_float 38
typedef void (*func_mindustry_content_Blocks$321$1$2_createPuddles_mindustry_gen_Bullet_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_content_Blocks$321$1$2_createSplashDamage_mindustry_gen_Bullet_float_float 39
typedef void (*func_mindustry_content_Blocks$321$1$2_createSplashDamage_mindustry_gen_Bullet_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_content_Blocks$321$1$2_createFrags_mindustry_gen_Bullet_float_float 40
typedef void (*func_mindustry_content_Blocks$321$1$2_createFrags_mindustry_gen_Bullet_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_content_Blocks$321$1$2_createUnits_mindustry_gen_Bullet_float_float 41
typedef void (*func_mindustry_content_Blocks$321$1$2_createUnits_mindustry_gen_Bullet_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_content_Blocks$321$1$2_despawned_mindustry_gen_Bullet 42
typedef void (*func_mindustry_content_Blocks$321$1$2_despawned_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$1$2_removed_mindustry_gen_Bullet 43
typedef void (*func_mindustry_content_Blocks$321$1$2_removed_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$1$2_buildingDamage_mindustry_gen_Bullet_R_float 44
typedef jfloat (*func_mindustry_content_Blocks$321$1$2_buildingDamage_mindustry_gen_Bullet_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$1$2_shieldDamage_mindustry_gen_Bullet_R_float 45
typedef jfloat (*func_mindustry_content_Blocks$321$1$2_shieldDamage_mindustry_gen_Bullet_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$1$2_draw_mindustry_gen_Bullet 46
typedef void (*func_mindustry_content_Blocks$321$1$2_draw_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$1$2_drawTrail_mindustry_gen_Bullet 47
typedef void (*func_mindustry_content_Blocks$321$1$2_drawTrail_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$1$2_drawParts_mindustry_gen_Bullet 48
typedef void (*func_mindustry_content_Blocks$321$1$2_drawParts_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$1$2_drawLight_mindustry_gen_Bullet 49
typedef void (*func_mindustry_content_Blocks$321$1$2_drawLight_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$1$2_init_mindustry_gen_Bullet 50
typedef void (*func_mindustry_content_Blocks$321$1$2_init_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$1$2_update_mindustry_gen_Bullet 51
typedef void (*func_mindustry_content_Blocks$321$1$2_update_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$1$2_updateBulletInterval_mindustry_gen_Bullet 52
typedef void (*func_mindustry_content_Blocks$321$1$2_updateBulletInterval_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$1$2_updateHoming_mindustry_gen_Bullet 53
typedef void (*func_mindustry_content_Blocks$321$1$2_updateHoming_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$1$2_updateWeaving_mindustry_gen_Bullet 54
typedef void (*func_mindustry_content_Blocks$321$1$2_updateWeaving_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$1$2_updateTrailEffects_mindustry_gen_Bullet 55
typedef void (*func_mindustry_content_Blocks$321$1$2_updateTrailEffects_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$1$2_updateTrail_mindustry_gen_Bullet 56
typedef void (*func_mindustry_content_Blocks$321$1$2_updateTrail_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$1$2_create_mindustry_gen_Teamc_float_float_float_R_mindustry_gen_Bullet 57
typedef jobject (*func_mindustry_content_Blocks$321$1$2_create_mindustry_gen_Teamc_float_float_float_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_content_Blocks$321$1$2_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_R_mindustry_gen_Bullet 58
typedef jobject (*func_mindustry_content_Blocks$321$1$2_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_mindustry_content_Blocks$321$1$2_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_R_mindustry_gen_Bullet 59
typedef jobject (*func_mindustry_content_Blocks$321$1$2_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
#define VTABLE_mindustry_content_Blocks$321$1$2_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_R_mindustry_gen_Bullet 60
typedef jobject (*func_mindustry_content_Blocks$321$1$2_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6);
#define VTABLE_mindustry_content_Blocks$321$1$2_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_mindustry_entities_Mover_R_mindustry_gen_Bullet 61
typedef jobject (*func_mindustry_content_Blocks$321$1$2_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_mindustry_entities_Mover_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jobject param7);
#define VTABLE_mindustry_content_Blocks$321$1$2_create_mindustry_gen_Bullet_float_float_float_R_mindustry_gen_Bullet 62
typedef jobject (*func_mindustry_content_Blocks$321$1$2_create_mindustry_gen_Bullet_float_float_float_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_content_Blocks$321$1$2_create_mindustry_gen_Bullet_float_float_float_float_float_R_mindustry_gen_Bullet 63
typedef jobject (*func_mindustry_content_Blocks$321$1$2_create_mindustry_gen_Bullet_float_float_float_float_float_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
#define VTABLE_mindustry_content_Blocks$321$1$2_create_mindustry_gen_Bullet_float_float_float_float_R_mindustry_gen_Bullet 64
typedef jobject (*func_mindustry_content_Blocks$321$1$2_create_mindustry_gen_Bullet_float_float_float_float_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_mindustry_content_Blocks$321$1$2_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_R_mindustry_gen_Bullet 65
typedef jobject (*func_mindustry_content_Blocks$321$1$2_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jobject param8);
#define VTABLE_mindustry_content_Blocks$321$1$2_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_R_mindustry_gen_Bullet 66
typedef jobject (*func_mindustry_content_Blocks$321$1$2_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jobject param8, jobject param9);
#define VTABLE_mindustry_content_Blocks$321$1$2_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet 67
typedef jobject (*func_mindustry_content_Blocks$321$1$2_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jobject param8, jobject param9, jfloat param10, jfloat param11);
#define VTABLE_mindustry_content_Blocks$321$1$2_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet 68
typedef jobject (*func_mindustry_content_Blocks$321$1$2_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jobject param9, jobject param10, jfloat param11, jfloat param12);
#define VTABLE_mindustry_content_Blocks$321$1$2_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_mindustry_gen_Teamc_R_mindustry_gen_Bullet 69
typedef jobject (*func_mindustry_content_Blocks$321$1$2_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_mindustry_gen_Teamc_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jobject param9, jobject param10, jfloat param11, jfloat param12, jobject param13);
#define VTABLE_mindustry_content_Blocks$321$1$2_createNet_mindustry_game_Team_float_float_float_float_float_float 70
typedef void (*func_mindustry_content_Blocks$321$1$2_createNet_mindustry_game_Team_float_float_float_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6);
#define VTABLE_mindustry_content_Blocks$321$1$2_lambda$updateHoming$3_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean 71
typedef jbool (*func_mindustry_content_Blocks$321$1$2_lambda$updateHoming$3_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_Blocks$321$1$2_lambda$updateHoming$2_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean 72
typedef jbool (*func_mindustry_content_Blocks$321$1$2_lambda$updateHoming$2_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_Blocks$321$1$2_lambda$updateHoming$1_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean 73
typedef jbool (*func_mindustry_content_Blocks$321$1$2_lambda$updateHoming$1_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_Blocks$321$1$2_lambda$updateHoming$0_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean 74
typedef jbool (*func_mindustry_content_Blocks$321$1$2_lambda$updateHoming$0_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_Blocks$321$1$2_lambda$createSplashDamage$0_mindustry_gen_Building 75
typedef void (*func_mindustry_content_Blocks$321$1$2_lambda$createSplashDamage$0_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$321$1$2_lambda$hit$0_mindustry_gen_Bullet_float_float 76
typedef void (*func_mindustry_content_Blocks$321$1$2_lambda$hit$0_mindustry_gen_Bullet_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_content_Blocks$321$1$2_lambda$init$0_mindustry_gen_Bullet_float_float_float_int 77
typedef void (*func_mindustry_content_Blocks$321$1$2_lambda$init$0_mindustry_gen_Bullet_float_float_float_int)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jint param4);

void mark_mindustry_content_Blocks$321$1$2(jobject object, jint mark, jint depth);
void clinit_mindustry_content_Blocks$321$1$2(jcontext ctx);
void init_mindustry_content_Blocks$321$1$2_mindustry_content_Blocks$321$1_float_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
