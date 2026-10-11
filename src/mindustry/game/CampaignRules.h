#ifndef HEADER_mindustry_game_CampaignRules
#define HEADER_mindustry_game_CampaignRules

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_CampaignRules {
	java_lang_Object parent;
	jref F_difficulty;
	jbool F_fog;
	jbool F_hideSpawns;
	jbool F_sectorInvasion;
	jbool F_randomWaveAI;
	jbool F_legacyLaunchPads;
	jbool F_rtsAI;
	jbool F_clearSectorOnLose;
	jbool F_pauseDisabled;
} mindustry_game_CampaignRules;

extern Class class_mindustry_game_CampaignRules;


#define VTABLE_mindustry_game_CampaignRules_hashCode_R_int 0
typedef jint (*func_mindustry_game_CampaignRules_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_CampaignRules_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_CampaignRules_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_CampaignRules_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_CampaignRules_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_CampaignRules_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_CampaignRules_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_CampaignRules_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_CampaignRules_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_CampaignRules_finalize 5
typedef void (*func_mindustry_game_CampaignRules_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_CampaignRules_notify 6
typedef void (*func_mindustry_game_CampaignRules_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_CampaignRules_notifyAll 7
typedef void (*func_mindustry_game_CampaignRules_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_CampaignRules_wait 8
typedef void (*func_mindustry_game_CampaignRules_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_CampaignRules_wait_long 9
typedef void (*func_mindustry_game_CampaignRules_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_CampaignRules_wait_long_int 10
typedef void (*func_mindustry_game_CampaignRules_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_CampaignRules_apply_mindustry_type_Planet_mindustry_game_Rules 11
typedef void (*func_mindustry_game_CampaignRules_apply_mindustry_type_Planet_mindustry_game_Rules)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_game_CampaignRules(jobject object, jint mark, jint depth);
void clinit_mindustry_game_CampaignRules(jcontext ctx);
void init_mindustry_game_CampaignRules(jcontext ctx, jobject self);
void M_mindustry_game_CampaignRules_apply_mindustry_type_Planet_mindustry_game_Rules(jcontext ctx, jobject self, jobject param0, jobject param1);
void SM_mindustry_game_CampaignRules_lambda$apply$0_mindustry_game_Rules_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
