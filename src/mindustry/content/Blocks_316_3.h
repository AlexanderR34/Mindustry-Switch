#ifndef HEADER_mindustry_content_Blocks$316$3
#define HEADER_mindustry_content_Blocks$316$3

#include "Clearwing.h"
#include "mindustry/entities/bullet/BasicBulletType.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_content_Blocks$316$3 {
	mindustry_entities_bullet_BasicBulletType parent;
	jref F_this$0;
} mindustry_content_Blocks$316$3;

extern Class class_mindustry_content_Blocks$316$3;


#define VTABLE_mindustry_content_Blocks$316$3_hashCode_R_int 0
typedef jint (*func_mindustry_content_Blocks$316$3_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$316$3_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_content_Blocks$316$3_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$316$3_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_content_Blocks$316$3_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$316$3_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_content_Blocks$316$3_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$316$3_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_content_Blocks$316$3_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$316$3_finalize 5
typedef void (*func_mindustry_content_Blocks$316$3_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$316$3_notify 6
typedef void (*func_mindustry_content_Blocks$316$3_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$316$3_notifyAll 7
typedef void (*func_mindustry_content_Blocks$316$3_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$316$3_wait 8
typedef void (*func_mindustry_content_Blocks$316$3_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$316$3_wait_long 9
typedef void (*func_mindustry_content_Blocks$316$3_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_content_Blocks$316$3_wait_long_int 10
typedef void (*func_mindustry_content_Blocks$316$3_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_content_Blocks$316$3_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_content_Blocks$316$3_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$316$3_getContentType_R_mindustry_ctype_ContentType 12
typedef jobject (*func_mindustry_content_Blocks$316$3_getContentType_R_mindustry_ctype_ContentType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$316$3_removeContent 13
typedef void (*func_mindustry_content_Blocks$316$3_removeContent)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$316$3_init 14
typedef void (*func_mindustry_content_Blocks$316$3_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$316$3_postInit 15
typedef void (*func_mindustry_content_Blocks$316$3_postInit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$316$3_afterPatch 16
typedef void (*func_mindustry_content_Blocks$316$3_afterPatch)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$316$3_load 17
typedef void (*func_mindustry_content_Blocks$316$3_load)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$316$3_loadIcon 18
typedef void (*func_mindustry_content_Blocks$316$3_loadIcon)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$316$3_hasErrored_R_boolean 19
typedef jbool (*func_mindustry_content_Blocks$316$3_hasErrored_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$316$3_isVanilla_R_boolean 20
typedef jbool (*func_mindustry_content_Blocks$316$3_isVanilla_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$316$3_isModded_R_boolean 21
typedef jbool (*func_mindustry_content_Blocks$316$3_isModded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$316$3_isPatchContent_R_boolean 22
typedef jbool (*func_mindustry_content_Blocks$316$3_isPatchContent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$316$3_compareTo_mindustry_ctype_Content_R_int 23
typedef jint (*func_mindustry_content_Blocks$316$3_compareTo_mindustry_ctype_Content_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$316$3_copy_R_mindustry_entities_bullet_BulletType 24
typedef jobject (*func_mindustry_content_Blocks$316$3_copy_R_mindustry_entities_bullet_BulletType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$316$3_estimateDPS_R_float 25
typedef jfloat (*func_mindustry_content_Blocks$316$3_estimateDPS_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$316$3_calculateRange_R_float 26
typedef jfloat (*func_mindustry_content_Blocks$316$3_calculateRange_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$316$3_continuousDamage_R_float 27
typedef jfloat (*func_mindustry_content_Blocks$316$3_continuousDamage_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$316$3_heals_R_boolean 28
typedef jbool (*func_mindustry_content_Blocks$316$3_heals_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Blocks$316$3_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean 29
typedef jbool (*func_mindustry_content_Blocks$316$3_testCollision_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_Blocks$316$3_hitTile_mindustry_gen_Bullet_mindustry_gen_Building_float_float_float_boolean 30
typedef void (*func_mindustry_content_Blocks$316$3_hitTile_mindustry_gen_Bullet_mindustry_gen_Building_float_float_float_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jbool param5);
#define VTABLE_mindustry_content_Blocks$316$3_hitEntity_mindustry_gen_Bullet_mindustry_gen_Hitboxc_float 31
typedef void (*func_mindustry_content_Blocks$316$3_hitEntity_mindustry_gen_Bullet_mindustry_gen_Hitboxc_float)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2);
#define VTABLE_mindustry_content_Blocks$316$3_handlePierce_mindustry_gen_Bullet_float_float_float 32
typedef void (*func_mindustry_content_Blocks$316$3_handlePierce_mindustry_gen_Bullet_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_content_Blocks$316$3_damageMultiplier_mindustry_gen_Bullet_R_float 33
typedef jfloat (*func_mindustry_content_Blocks$316$3_damageMultiplier_mindustry_gen_Bullet_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$316$3_hit_mindustry_gen_Bullet 34
typedef void (*func_mindustry_content_Blocks$316$3_hit_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$316$3_hit_mindustry_gen_Bullet_float_float 35
typedef void (*func_mindustry_content_Blocks$316$3_hit_mindustry_gen_Bullet_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_content_Blocks$316$3_hit_mindustry_gen_Bullet_float_float_boolean 36
typedef void (*func_mindustry_content_Blocks$316$3_hit_mindustry_gen_Bullet_float_float_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jbool param3);
#define VTABLE_mindustry_content_Blocks$316$3_createIncend_mindustry_gen_Bullet_float_float 37
typedef void (*func_mindustry_content_Blocks$316$3_createIncend_mindustry_gen_Bullet_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_content_Blocks$316$3_createPuddles_mindustry_gen_Bullet_float_float 38
typedef void (*func_mindustry_content_Blocks$316$3_createPuddles_mindustry_gen_Bullet_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_content_Blocks$316$3_createSplashDamage_mindustry_gen_Bullet_float_float 39
typedef void (*func_mindustry_content_Blocks$316$3_createSplashDamage_mindustry_gen_Bullet_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_content_Blocks$316$3_createFrags_mindustry_gen_Bullet_float_float 40
typedef void (*func_mindustry_content_Blocks$316$3_createFrags_mindustry_gen_Bullet_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_content_Blocks$316$3_createUnits_mindustry_gen_Bullet_float_float 41
typedef void (*func_mindustry_content_Blocks$316$3_createUnits_mindustry_gen_Bullet_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_content_Blocks$316$3_despawned_mindustry_gen_Bullet 42
typedef void (*func_mindustry_content_Blocks$316$3_despawned_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$316$3_removed_mindustry_gen_Bullet 43
typedef void (*func_mindustry_content_Blocks$316$3_removed_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$316$3_buildingDamage_mindustry_gen_Bullet_R_float 44
typedef jfloat (*func_mindustry_content_Blocks$316$3_buildingDamage_mindustry_gen_Bullet_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$316$3_shieldDamage_mindustry_gen_Bullet_R_float 45
typedef jfloat (*func_mindustry_content_Blocks$316$3_shieldDamage_mindustry_gen_Bullet_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$316$3_draw_mindustry_gen_Bullet 46
typedef void (*func_mindustry_content_Blocks$316$3_draw_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$316$3_drawTrail_mindustry_gen_Bullet 47
typedef void (*func_mindustry_content_Blocks$316$3_drawTrail_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$316$3_drawParts_mindustry_gen_Bullet 48
typedef void (*func_mindustry_content_Blocks$316$3_drawParts_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$316$3_drawLight_mindustry_gen_Bullet 49
typedef void (*func_mindustry_content_Blocks$316$3_drawLight_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$316$3_init_mindustry_gen_Bullet 50
typedef void (*func_mindustry_content_Blocks$316$3_init_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$316$3_update_mindustry_gen_Bullet 51
typedef void (*func_mindustry_content_Blocks$316$3_update_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$316$3_updateBulletInterval_mindustry_gen_Bullet 52
typedef void (*func_mindustry_content_Blocks$316$3_updateBulletInterval_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$316$3_updateHoming_mindustry_gen_Bullet 53
typedef void (*func_mindustry_content_Blocks$316$3_updateHoming_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$316$3_updateWeaving_mindustry_gen_Bullet 54
typedef void (*func_mindustry_content_Blocks$316$3_updateWeaving_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$316$3_updateTrailEffects_mindustry_gen_Bullet 55
typedef void (*func_mindustry_content_Blocks$316$3_updateTrailEffects_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$316$3_updateTrail_mindustry_gen_Bullet 56
typedef void (*func_mindustry_content_Blocks$316$3_updateTrail_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$316$3_create_mindustry_gen_Teamc_float_float_float_R_mindustry_gen_Bullet 57
typedef jobject (*func_mindustry_content_Blocks$316$3_create_mindustry_gen_Teamc_float_float_float_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_content_Blocks$316$3_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_R_mindustry_gen_Bullet 58
typedef jobject (*func_mindustry_content_Blocks$316$3_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_mindustry_content_Blocks$316$3_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_R_mindustry_gen_Bullet 59
typedef jobject (*func_mindustry_content_Blocks$316$3_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
#define VTABLE_mindustry_content_Blocks$316$3_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_R_mindustry_gen_Bullet 60
typedef jobject (*func_mindustry_content_Blocks$316$3_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6);
#define VTABLE_mindustry_content_Blocks$316$3_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_mindustry_entities_Mover_R_mindustry_gen_Bullet 61
typedef jobject (*func_mindustry_content_Blocks$316$3_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_mindustry_entities_Mover_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jobject param7);
#define VTABLE_mindustry_content_Blocks$316$3_create_mindustry_gen_Bullet_float_float_float_R_mindustry_gen_Bullet 62
typedef jobject (*func_mindustry_content_Blocks$316$3_create_mindustry_gen_Bullet_float_float_float_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_content_Blocks$316$3_create_mindustry_gen_Bullet_float_float_float_float_float_R_mindustry_gen_Bullet 63
typedef jobject (*func_mindustry_content_Blocks$316$3_create_mindustry_gen_Bullet_float_float_float_float_float_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
#define VTABLE_mindustry_content_Blocks$316$3_create_mindustry_gen_Bullet_float_float_float_float_R_mindustry_gen_Bullet 64
typedef jobject (*func_mindustry_content_Blocks$316$3_create_mindustry_gen_Bullet_float_float_float_float_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
#define VTABLE_mindustry_content_Blocks$316$3_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_R_mindustry_gen_Bullet 65
typedef jobject (*func_mindustry_content_Blocks$316$3_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jobject param8);
#define VTABLE_mindustry_content_Blocks$316$3_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_R_mindustry_gen_Bullet 66
typedef jobject (*func_mindustry_content_Blocks$316$3_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jobject param8, jobject param9);
#define VTABLE_mindustry_content_Blocks$316$3_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet 67
typedef jobject (*func_mindustry_content_Blocks$316$3_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jobject param8, jobject param9, jfloat param10, jfloat param11);
#define VTABLE_mindustry_content_Blocks$316$3_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet 68
typedef jobject (*func_mindustry_content_Blocks$316$3_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jobject param9, jobject param10, jfloat param11, jfloat param12);
#define VTABLE_mindustry_content_Blocks$316$3_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_mindustry_gen_Teamc_R_mindustry_gen_Bullet 69
typedef jobject (*func_mindustry_content_Blocks$316$3_create_mindustry_gen_Entityc_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_float_float_float_java_lang_Object_mindustry_entities_Mover_float_float_mindustry_gen_Teamc_R_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jobject param9, jobject param10, jfloat param11, jfloat param12, jobject param13);
#define VTABLE_mindustry_content_Blocks$316$3_createNet_mindustry_game_Team_float_float_float_float_float_float 70
typedef void (*func_mindustry_content_Blocks$316$3_createNet_mindustry_game_Team_float_float_float_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6);
#define VTABLE_mindustry_content_Blocks$316$3_lambda$updateHoming$3_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean 71
typedef jbool (*func_mindustry_content_Blocks$316$3_lambda$updateHoming$3_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_Blocks$316$3_lambda$updateHoming$2_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean 72
typedef jbool (*func_mindustry_content_Blocks$316$3_lambda$updateHoming$2_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_Blocks$316$3_lambda$updateHoming$1_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean 73
typedef jbool (*func_mindustry_content_Blocks$316$3_lambda$updateHoming$1_mindustry_gen_Bullet_mindustry_gen_Building_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_Blocks$316$3_lambda$updateHoming$0_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean 74
typedef jbool (*func_mindustry_content_Blocks$316$3_lambda$updateHoming$0_mindustry_gen_Bullet_mindustry_gen_Unit_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_content_Blocks$316$3_lambda$createSplashDamage$0_mindustry_gen_Building 75
typedef void (*func_mindustry_content_Blocks$316$3_lambda$createSplashDamage$0_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Blocks$316$3_lambda$hit$0_mindustry_gen_Bullet_float_float 76
typedef void (*func_mindustry_content_Blocks$316$3_lambda$hit$0_mindustry_gen_Bullet_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);

void mark_mindustry_content_Blocks$316$3(jobject object, jint mark, jint depth);
void clinit_mindustry_content_Blocks$316$3(jcontext ctx);
void init_mindustry_content_Blocks$316$3_mindustry_content_Blocks$316(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
