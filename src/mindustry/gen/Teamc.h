#ifndef HEADER_mindustry_gen_Teamc
#define HEADER_mindustry_gen_Teamc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Posc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Teamc {
	java_lang_Object parent;
} mindustry_gen_Teamc;

extern Class class_mindustry_gen_Teamc;


#define INDEX_mindustry_gen_Teamc_inFogTo_mindustry_game_Team_R_boolean 0
typedef jbool (*func_mindustry_gen_Teamc_inFogTo_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Teamc_cheating_R_boolean 1
typedef jbool (*func_mindustry_gen_Teamc_cheating_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Teamc_team_R_mindustry_game_Team 2
typedef jobject (*func_mindustry_gen_Teamc_team_R_mindustry_game_Team)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Teamc_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 3
typedef jobject (*func_mindustry_gen_Teamc_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Teamc_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 4
typedef jobject (*func_mindustry_gen_Teamc_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Teamc_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild 5
typedef jobject (*func_mindustry_gen_Teamc_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Teamc_team_mindustry_game_Team 6
typedef void (*func_mindustry_gen_Teamc_team_mindustry_game_Team)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_gen_Teamc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Teamc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
