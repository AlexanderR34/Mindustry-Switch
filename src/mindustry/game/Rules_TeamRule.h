#ifndef HEADER_mindustry_game_Rules$TeamRule
#define HEADER_mindustry_game_Rules$TeamRule

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_Rules$TeamRule {
	java_lang_Object parent;
	jbool F_aiCoreSpawn;
	jbool F_protectCores;
	jbool F_checkPlacement;
	jbool F_cheat;
	jbool F_fillItems;
	jbool F_infiniteResources;
	jbool F_prebuildAi;
	jbool F_buildAi;
	jfloat F_buildAiTier;
	jbool F_rtsAi;
	jint F_rtsMinSquad;
	jint F_rtsMaxSquad;
	jfloat F_rtsMinWeight;
	jfloat F_unitFactoryActivationDelay;
	jfloat F_unitBuildSpeedMultiplier;
	jfloat F_unitDamageMultiplier;
	jfloat F_unitCrashDamageMultiplier;
	jfloat F_unitMineSpeedMultiplier;
	jfloat F_unitCostMultiplier;
	jfloat F_unitHealthMultiplier;
	jfloat F_blockHealthMultiplier;
	jfloat F_blockDamageMultiplier;
	jfloat F_buildSpeedMultiplier;
	jfloat F_extraCoreBuildRadius;
} mindustry_game_Rules$TeamRule;

extern Class class_mindustry_game_Rules$TeamRule;


#define VTABLE_mindustry_game_Rules$TeamRule_hashCode_R_int 0
typedef jint (*func_mindustry_game_Rules$TeamRule_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Rules$TeamRule_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_Rules$TeamRule_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Rules$TeamRule_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_Rules$TeamRule_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Rules$TeamRule_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_Rules$TeamRule_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Rules$TeamRule_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_Rules$TeamRule_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Rules$TeamRule_finalize 5
typedef void (*func_mindustry_game_Rules$TeamRule_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Rules$TeamRule_notify 6
typedef void (*func_mindustry_game_Rules$TeamRule_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Rules$TeamRule_notifyAll 7
typedef void (*func_mindustry_game_Rules$TeamRule_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Rules$TeamRule_wait 8
typedef void (*func_mindustry_game_Rules$TeamRule_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Rules$TeamRule_wait_long 9
typedef void (*func_mindustry_game_Rules$TeamRule_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_Rules$TeamRule_wait_long_int 10
typedef void (*func_mindustry_game_Rules$TeamRule_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_game_Rules$TeamRule(jobject object, jint mark, jint depth);
void clinit_mindustry_game_Rules$TeamRule(jcontext ctx);
void init_mindustry_game_Rules$TeamRule(jcontext ctx, jobject self);
void init_mindustry_game_Rules$TeamRule_mindustry_game_Team(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
