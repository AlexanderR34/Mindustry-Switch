#ifndef HEADER_mindustry_game_GameStats
#define HEADER_mindustry_game_GameStats

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_GameStats {
	java_lang_Object parent;
	jint F_enemyUnitsDestroyed;
	jint F_wavesLasted;
	jint F_buildingsBuilt;
	jint F_buildingsDeconstructed;
	jint F_buildingsDestroyed;
	jint F_unitsCreated;
	jref F_placedBlockCount;
	jref F_destroyedBlockCount;
	jref F_coreItemCount;
} mindustry_game_GameStats;

extern Class class_mindustry_game_GameStats;


#define VTABLE_mindustry_game_GameStats_hashCode_R_int 0
typedef jint (*func_mindustry_game_GameStats_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_GameStats_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_GameStats_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_GameStats_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_GameStats_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_GameStats_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_GameStats_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_GameStats_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_GameStats_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_GameStats_finalize 5
typedef void (*func_mindustry_game_GameStats_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_GameStats_notify 6
typedef void (*func_mindustry_game_GameStats_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_GameStats_notifyAll 7
typedef void (*func_mindustry_game_GameStats_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_GameStats_wait 8
typedef void (*func_mindustry_game_GameStats_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_GameStats_wait_long 9
typedef void (*func_mindustry_game_GameStats_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_GameStats_wait_long_int 10
typedef void (*func_mindustry_game_GameStats_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_GameStats_getPlaced_mindustry_world_Block_R_int 11
typedef jint (*func_mindustry_game_GameStats_getPlaced_mindustry_world_Block_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_GameStats_getDestroyed_mindustry_world_Block_R_int 12
typedef jint (*func_mindustry_game_GameStats_getDestroyed_mindustry_world_Block_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_game_GameStats(jobject object, jint mark, jint depth);
void clinit_mindustry_game_GameStats(jcontext ctx);
void init_mindustry_game_GameStats(jcontext ctx, jobject self);
jint M_mindustry_game_GameStats_getPlaced_mindustry_world_Block_R_int(jcontext ctx, jobject self, jobject param0);
jint M_mindustry_game_GameStats_getDestroyed_mindustry_world_Block_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
