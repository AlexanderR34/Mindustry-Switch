#ifndef HEADER_mindustry_core_Logic
#define HEADER_mindustry_core_Logic

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/ApplicationListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_core_Logic {
	java_lang_Object parent;
} mindustry_core_Logic;

extern Class class_mindustry_core_Logic;


#define VTABLE_mindustry_core_Logic_hashCode_R_int 0
typedef jint (*func_mindustry_core_Logic_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Logic_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_core_Logic_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Logic_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_core_Logic_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Logic_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_core_Logic_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Logic_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_core_Logic_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Logic_finalize 5
typedef void (*func_mindustry_core_Logic_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Logic_notify 6
typedef void (*func_mindustry_core_Logic_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Logic_notifyAll 7
typedef void (*func_mindustry_core_Logic_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Logic_wait 8
typedef void (*func_mindustry_core_Logic_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Logic_wait_long 9
typedef void (*func_mindustry_core_Logic_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_core_Logic_wait_long_int 10
typedef void (*func_mindustry_core_Logic_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_core_Logic_init 11
typedef void (*func_mindustry_core_Logic_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Logic_resize_int_int 12
typedef void (*func_mindustry_core_Logic_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_core_Logic_update 13
typedef void (*func_mindustry_core_Logic_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Logic_pause 14
typedef void (*func_mindustry_core_Logic_pause)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Logic_resume 15
typedef void (*func_mindustry_core_Logic_resume)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Logic_dispose 16
typedef void (*func_mindustry_core_Logic_dispose)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Logic_exit 17
typedef void (*func_mindustry_core_Logic_exit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Logic_fileDropped_arc_files_Fi 18
typedef void (*func_mindustry_core_Logic_fileDropped_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Logic_checkCampaignStats_R_boolean 19
typedef jbool (*func_mindustry_core_Logic_checkCampaignStats_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Logic_checkOverlappingPlans_mindustry_game_Team_mindustry_world_Tile 20
typedef void (*func_mindustry_core_Logic_checkOverlappingPlans_mindustry_game_Team_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_Logic_play 21
typedef void (*func_mindustry_core_Logic_play)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Logic_reset 22
typedef void (*func_mindustry_core_Logic_reset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Logic_skipWave 23
typedef void (*func_mindustry_core_Logic_skipWave)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Logic_runWave 24
typedef void (*func_mindustry_core_Logic_runWave)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Logic_checkGameState 25
typedef void (*func_mindustry_core_Logic_checkGameState)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Logic_updateWeather 26
typedef void (*func_mindustry_core_Logic_updateWeather)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Logic_updateEntities 27
typedef void (*func_mindustry_core_Logic_updateEntities)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Logic_isWaitingWave_R_boolean 28
typedef jbool (*func_mindustry_core_Logic_isWaitingWave_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Logic_lambda$new$19_mindustry_game_EventType$GameOverEvent 29
typedef void (*func_mindustry_core_Logic_lambda$new$19_mindustry_game_EventType$GameOverEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Logic_lambda$new$18_mindustry_game_EventType$WaveEvent 30
typedef void (*func_mindustry_core_Logic_lambda$new$18_mindustry_game_EventType$WaveEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Logic_lambda$new$17_mindustry_game_EventType$UnitCreateEvent 31
typedef void (*func_mindustry_core_Logic_lambda$new$17_mindustry_game_EventType$UnitCreateEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Logic_lambda$new$16_mindustry_game_EventType$UnitDestroyEvent 32
typedef void (*func_mindustry_core_Logic_lambda$new$16_mindustry_game_EventType$UnitDestroyEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Logic_lambda$new$15_mindustry_game_EventType$BlockDestroyEvent 33
typedef void (*func_mindustry_core_Logic_lambda$new$15_mindustry_game_EventType$BlockDestroyEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Logic_lambda$new$14_mindustry_game_EventType$BlockBuildEndEvent 34
typedef void (*func_mindustry_core_Logic_lambda$new$14_mindustry_game_EventType$BlockBuildEndEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Logic_lambda$new$7_mindustry_game_EventType$SectorCaptureEvent 35
typedef void (*func_mindustry_core_Logic_lambda$new$7_mindustry_game_EventType$SectorCaptureEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Logic_lambda$new$2_mindustry_game_EventType$PayloadDropEvent 36
typedef void (*func_mindustry_core_Logic_lambda$new$2_mindustry_game_EventType$PayloadDropEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Logic_lambda$new$1_mindustry_game_EventType$BlockBuildEndEvent 37
typedef void (*func_mindustry_core_Logic_lambda$new$1_mindustry_game_EventType$BlockBuildEndEvent)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_core_Logic(jobject object, jint mark, jint depth);
void clinit_mindustry_core_Logic(jcontext ctx);
void init_mindustry_core_Logic(jcontext ctx, jobject self);
jbool M_mindustry_core_Logic_checkCampaignStats_R_boolean(jcontext ctx, jobject self);
void M_mindustry_core_Logic_checkOverlappingPlans_mindustry_game_Team_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_core_Logic_play(jcontext ctx, jobject self);
void M_mindustry_core_Logic_reset(jcontext ctx, jobject self);
void M_mindustry_core_Logic_skipWave(jcontext ctx, jobject self);
void M_mindustry_core_Logic_runWave(jcontext ctx, jobject self);
void M_mindustry_core_Logic_checkGameState(jcontext ctx, jobject self);
void M_mindustry_core_Logic_updateWeather(jcontext ctx, jobject self);
void SM_mindustry_core_Logic_sectorCapture(jcontext ctx);
void SM_mindustry_core_Logic_updateGameOver_mindustry_game_Team(jcontext ctx, jobject param0);
void SM_mindustry_core_Logic_gameOver_mindustry_game_Team(jcontext ctx, jobject param0);
void SM_mindustry_core_Logic_researched_mindustry_ctype_Content(jcontext ctx, jobject param0);
void M_mindustry_core_Logic_dispose(jcontext ctx, jobject self);
void M_mindustry_core_Logic_updateEntities(jcontext ctx, jobject self);
void M_mindustry_core_Logic_update(jcontext ctx, jobject self);
jbool M_mindustry_core_Logic_isWaitingWave_R_boolean(jcontext ctx, jobject self);
void SM_mindustry_core_Logic_lambda$update$3_mindustry_gen_WeatherState(jcontext ctx, jobject param0);
jbool SM_mindustry_core_Logic_lambda$update$2_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_core_Logic_lambda$update$1_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_type_Item(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_core_Logic_lambda$update$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_core_Logic_lambda$updateEntities$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_core_Logic_lambda$gameOver$0_mindustry_game_Team(jcontext ctx, jobject param0);
jbool SM_mindustry_core_Logic_lambda$updateWeather$0_mindustry_type_Weather$WeatherEntry_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_core_Logic_lambda$checkGameState$1_mindustry_game_Teams$TeamData_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_core_Logic_lambda$checkGameState$0_mindustry_game_Teams$TeamData_R_boolean(jcontext ctx, jobject param0);
void M_mindustry_core_Logic_lambda$new$19_mindustry_game_EventType$GameOverEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_Logic_lambda$new$18_mindustry_game_EventType$WaveEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_Logic_lambda$new$17_mindustry_game_EventType$UnitCreateEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_Logic_lambda$new$16_mindustry_game_EventType$UnitDestroyEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_Logic_lambda$new$15_mindustry_game_EventType$BlockDestroyEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_Logic_lambda$new$14_mindustry_game_EventType$BlockBuildEndEvent(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_core_Logic_lambda$new$12_mindustry_game_EventType$CoreChangeEvent(jcontext ctx, jobject param0);
void SM_mindustry_core_Logic_lambda$new$13_mindustry_game_EventType$CoreChangeEvent(jcontext ctx, jobject param0);
void SM_mindustry_core_Logic_lambda$new$10_mindustry_game_EventType$BlockDestroyEvent(jcontext ctx, jobject param0);
void SM_mindustry_core_Logic_lambda$new$11_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject param0);
void SM_mindustry_core_Logic_lambda$new$9_mindustry_game_EventType$SectorLoseEvent(jcontext ctx, jobject param0);
void M_mindustry_core_Logic_lambda$new$7_mindustry_game_EventType$SectorCaptureEvent(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_core_Logic_lambda$new$8_Array1_mindustry_world_blocks_environment_Floor_mindustry_world_Tile(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_core_Logic_lambda$new$6_mindustry_game_EventType$UnlockEvent(jcontext ctx, jobject param0);
void SM_mindustry_core_Logic_lambda$new$5_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject param0);
void SM_mindustry_core_Logic_lambda$new$4_mindustry_game_EventType$PlayEvent(jcontext ctx, jobject param0);
void SM_mindustry_core_Logic_lambda$new$3_mindustry_game_EventType$SaveLoadEvent(jcontext ctx, jobject param0);
void M_mindustry_core_Logic_lambda$new$2_mindustry_game_EventType$PayloadDropEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_Logic_lambda$new$1_mindustry_game_EventType$BlockBuildEndEvent(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_core_Logic_lambda$new$0_mindustry_game_EventType$BlockDestroyEvent(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
