#ifndef HEADER_mindustry_core_GameState
#define HEADER_mindustry_core_GameState

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_core_GameState {
	java_lang_Object parent;
	jint F_wave;
	jfloat F_wavetime;
	jdouble F_tick;
	jlong F_updateId;
	jbool F_gameOver;
	jbool F_afterGameOver;
	jbool F_won;
	jint F_serverTps;
	jref F_map;
	jref F_rules;
	jref F_stats;
	jref F_markers;
	jref F_mapLocales;
	jref F_envAttrs;
	jref F_teams;
	jref F_data;
	jint F_enemies;
	jref F_playtestingMap;
	jref F_state;
} mindustry_core_GameState;

extern Class class_mindustry_core_GameState;


#define VTABLE_mindustry_core_GameState_hashCode_R_int 0
typedef jint (*func_mindustry_core_GameState_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_GameState_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_core_GameState_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_GameState_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_core_GameState_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_GameState_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_core_GameState_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_GameState_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_core_GameState_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_GameState_finalize 5
typedef void (*func_mindustry_core_GameState_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_GameState_notify 6
typedef void (*func_mindustry_core_GameState_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_GameState_notifyAll 7
typedef void (*func_mindustry_core_GameState_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_GameState_wait 8
typedef void (*func_mindustry_core_GameState_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_GameState_wait_long 9
typedef void (*func_mindustry_core_GameState_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_core_GameState_wait_long_int 10
typedef void (*func_mindustry_core_GameState_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_core_GameState_boss_R_mindustry_gen_Unit 11
typedef jobject (*func_mindustry_core_GameState_boss_R_mindustry_gen_Unit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_GameState_set_mindustry_core_GameState$State 12
typedef void (*func_mindustry_core_GameState_set_mindustry_core_GameState$State)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_GameState_hasSpawns_R_boolean 13
typedef jbool (*func_mindustry_core_GameState_hasSpawns_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_GameState_isCampaign_R_boolean 14
typedef jbool (*func_mindustry_core_GameState_isCampaign_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_GameState_hasSector_R_boolean 15
typedef jbool (*func_mindustry_core_GameState_hasSector_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector 16
typedef jobject (*func_mindustry_core_GameState_getSector_R_mindustry_type_Sector)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet 17
typedef jobject (*func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_GameState_isEditor_R_boolean 18
typedef jbool (*func_mindustry_core_GameState_isEditor_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_GameState_isPaused_R_boolean 19
typedef jbool (*func_mindustry_core_GameState_isPaused_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_GameState_isPlaying_R_boolean 20
typedef jbool (*func_mindustry_core_GameState_isPlaying_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_GameState_isGame_R_boolean 21
typedef jbool (*func_mindustry_core_GameState_isGame_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_GameState_isMenu_R_boolean 22
typedef jbool (*func_mindustry_core_GameState_isMenu_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_GameState_is_mindustry_core_GameState$State_R_boolean 23
typedef jbool (*func_mindustry_core_GameState_is_mindustry_core_GameState$State_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_GameState_getState_R_mindustry_core_GameState$State 24
typedef jobject (*func_mindustry_core_GameState_getState_R_mindustry_core_GameState$State)(jcontext ctx, jobject self);

void mark_mindustry_core_GameState(jobject object, jint mark, jint depth);
void clinit_mindustry_core_GameState(jcontext ctx);
void init_mindustry_core_GameState(jcontext ctx, jobject self);
jobject M_mindustry_core_GameState_boss_R_mindustry_gen_Unit(jcontext ctx, jobject self);
void M_mindustry_core_GameState_set_mindustry_core_GameState$State(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_core_GameState_hasSpawns_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_core_GameState_isCampaign_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_core_GameState_hasSector_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_core_GameState_getSector_R_mindustry_type_Sector(jcontext ctx, jobject self);
jobject M_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet(jcontext ctx, jobject self);
jbool M_mindustry_core_GameState_isEditor_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_core_GameState_isPaused_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_core_GameState_isPlaying_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_core_GameState_isGame_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_core_GameState_isMenu_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_core_GameState_is_mindustry_core_GameState$State_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_core_GameState_getState_R_mindustry_core_GameState$State(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
