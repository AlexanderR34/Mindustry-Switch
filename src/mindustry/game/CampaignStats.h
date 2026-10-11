#ifndef HEADER_mindustry_game_CampaignStats
#define HEADER_mindustry_game_CampaignStats

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_CampaignStats {
	java_lang_Object parent;
	jref F_enemyUnitsDestroyed;
	jref F_enemyBuildingsDestroyed;
	jref F_unitsProduced;
	jref F_unitsDestroyed;
	jref F_buildingsBuilt;
	jref F_buildingsDeconstructed;
	jref F_buildingsDestroyed;
	jlong F_playtime;
	jint F_sectorsLost;
	jint F_sectorsCaptured;
	jint F_wavesLasted;
} mindustry_game_CampaignStats;

extern Class class_mindustry_game_CampaignStats;


#define VTABLE_mindustry_game_CampaignStats_hashCode_R_int 0
typedef jint (*func_mindustry_game_CampaignStats_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_CampaignStats_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_CampaignStats_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_CampaignStats_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_CampaignStats_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_CampaignStats_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_CampaignStats_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_CampaignStats_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_CampaignStats_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_CampaignStats_finalize 5
typedef void (*func_mindustry_game_CampaignStats_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_CampaignStats_notify 6
typedef void (*func_mindustry_game_CampaignStats_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_CampaignStats_notifyAll 7
typedef void (*func_mindustry_game_CampaignStats_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_CampaignStats_wait 8
typedef void (*func_mindustry_game_CampaignStats_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_CampaignStats_wait_long 9
typedef void (*func_mindustry_game_CampaignStats_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_CampaignStats_wait_long_int 10
typedef void (*func_mindustry_game_CampaignStats_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_game_CampaignStats(jobject object, jint mark, jint depth);
void clinit_mindustry_game_CampaignStats(jcontext ctx);
void init_mindustry_game_CampaignStats(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
