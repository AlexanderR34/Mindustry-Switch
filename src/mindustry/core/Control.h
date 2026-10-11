#ifndef HEADER_mindustry_core_Control
#define HEADER_mindustry_core_Control

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/ApplicationListener.h"
#include "arc/assets/Loadable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_core_Control {
	java_lang_Object parent;
	jref F_saves;
	jref F_sound;
	jref F_input;
	jref F_indicators;
	jref F_lastDamagedCore;
	jref F_timer;
	jbool F_hiscore;
	jbool F_wasPaused;
	jbool F_backgroundPaused;
	jref F_toBePlaced;
	jref F_toBePlacedConfigs;
} mindustry_core_Control;

extern Class class_mindustry_core_Control;


#define VTABLE_mindustry_core_Control_hashCode_R_int 0
typedef jint (*func_mindustry_core_Control_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Control_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_core_Control_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Control_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_core_Control_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Control_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_core_Control_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Control_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_core_Control_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Control_finalize 5
typedef void (*func_mindustry_core_Control_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Control_notify 6
typedef void (*func_mindustry_core_Control_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Control_notifyAll 7
typedef void (*func_mindustry_core_Control_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Control_wait 8
typedef void (*func_mindustry_core_Control_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Control_wait_long 9
typedef void (*func_mindustry_core_Control_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_core_Control_wait_long_int 10
typedef void (*func_mindustry_core_Control_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_core_Control_init 11
typedef void (*func_mindustry_core_Control_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Control_resize_int_int 12
typedef void (*func_mindustry_core_Control_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_core_Control_update 13
typedef void (*func_mindustry_core_Control_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Control_pause 14
typedef void (*func_mindustry_core_Control_pause)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Control_resume 15
typedef void (*func_mindustry_core_Control_resume)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Control_dispose 16
typedef void (*func_mindustry_core_Control_dispose)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Control_exit 17
typedef void (*func_mindustry_core_Control_exit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Control_fileDropped_arc_files_Fi 18
typedef void (*func_mindustry_core_Control_fileDropped_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Control_loadAsync 19
typedef void (*func_mindustry_core_Control_loadAsync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Control_loadSync 20
typedef void (*func_mindustry_core_Control_loadSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Control_getName_R_java_lang_String 21
typedef jobject (*func_mindustry_core_Control_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Control_getDependencies_R_arc_struct_Seq 22
typedef jobject (*func_mindustry_core_Control_getDependencies_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Control_forcePlaceAll 23
typedef void (*func_mindustry_core_Control_forcePlaceAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Control_configurePlaced 24
typedef void (*func_mindustry_core_Control_configurePlaced)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Control_placeLandBuild_mindustry_gen_Building 25
typedef void (*func_mindustry_core_Control_placeLandBuild_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Control_checkAutoUnlocks 26
typedef void (*func_mindustry_core_Control_checkAutoUnlocks)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Control_createPlayer 27
typedef void (*func_mindustry_core_Control_createPlayer)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Control_setInput_mindustry_input_InputHandler 28
typedef void (*func_mindustry_core_Control_setInput_mindustry_input_InputHandler)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Control_playMap_mindustry_maps_Map_mindustry_game_Rules 29
typedef void (*func_mindustry_core_Control_playMap_mindustry_maps_Map_mindustry_game_Rules)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_Control_playMap_mindustry_maps_Map_mindustry_game_Rules_boolean 30
typedef void (*func_mindustry_core_Control_playMap_mindustry_maps_Map_mindustry_game_Rules_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define VTABLE_mindustry_core_Control_playSector_mindustry_type_Sector 31
typedef void (*func_mindustry_core_Control_playSector_mindustry_type_Sector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Control_playSector_mindustry_type_Sector_mindustry_type_Sector 32
typedef void (*func_mindustry_core_Control_playSector_mindustry_type_Sector_mindustry_type_Sector)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_core_Control_playSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader 33
typedef void (*func_mindustry_core_Control_playSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_core_Control_playNewSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader 34
typedef void (*func_mindustry_core_Control_playNewSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_core_Control_playNewSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader_mindustry_world_WorldParams_java_lang_Runnable 35
typedef void (*func_mindustry_core_Control_playNewSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader_mindustry_world_WorldParams_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
#define VTABLE_mindustry_core_Control_isHighScore_R_boolean 36
typedef jbool (*func_mindustry_core_Control_isHighScore_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Control_lambda$playSector$0_mindustry_type_Sector_mindustry_net_WorldReloader_mindustry_type_Sector 37
typedef void (*func_mindustry_core_Control_lambda$playSector$0_mindustry_type_Sector_mindustry_net_WorldReloader_mindustry_type_Sector)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_core_Control_lambda$createPlayer$0_mindustry_game_EventType$ClientLoadEvent 38
typedef void (*func_mindustry_core_Control_lambda$createPlayer$0_mindustry_game_EventType$ClientLoadEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Control_lambda$new$23_mindustry_game_EventType$HostEvent 39
typedef void (*func_mindustry_core_Control_lambda$new$23_mindustry_game_EventType$HostEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Control_lambda$new$22_mindustry_game_EventType$SaveWriteEvent 40
typedef void (*func_mindustry_core_Control_lambda$new$22_mindustry_game_EventType$SaveWriteEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Control_lambda$new$19 41
typedef void (*func_mindustry_core_Control_lambda$new$19)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Control_lambda$new$20_mindustry_gen_Building 42
typedef void (*func_mindustry_core_Control_lambda$new$20_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Control_lambda$new$18_mindustry_game_EventType$GameOverEvent 43
typedef void (*func_mindustry_core_Control_lambda$new$18_mindustry_game_EventType$GameOverEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Control_lambda$new$16_mindustry_game_EventType$SectorCaptureEvent 44
typedef void (*func_mindustry_core_Control_lambda$new$16_mindustry_game_EventType$SectorCaptureEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Control_lambda$new$13_mindustry_game_EventType$UnlockEvent 45
typedef void (*func_mindustry_core_Control_lambda$new$13_mindustry_game_EventType$UnlockEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Control_lambda$new$8_mindustry_game_EventType$WaveEvent 46
typedef void (*func_mindustry_core_Control_lambda$new$8_mindustry_game_EventType$WaveEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Control_lambda$new$7_mindustry_game_EventType$ResetEvent 47
typedef void (*func_mindustry_core_Control_lambda$new$7_mindustry_game_EventType$ResetEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Control_lambda$new$6_mindustry_game_EventType$SaveLoadEvent 48
typedef void (*func_mindustry_core_Control_lambda$new$6_mindustry_game_EventType$SaveLoadEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Control_lambda$new$1_mindustry_game_EventType$ClientLoadEvent 49
typedef void (*func_mindustry_core_Control_lambda$new$1_mindustry_game_EventType$ClientLoadEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Control_lambda$new$0_mindustry_game_EventType$BuildDamageEvent 50
typedef void (*func_mindustry_core_Control_lambda$new$0_mindustry_game_EventType$BuildDamageEvent)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_core_Control(jobject object, jint mark, jint depth);
void clinit_mindustry_core_Control(jcontext ctx);
void init_mindustry_core_Control(jcontext ctx, jobject self);
void M_mindustry_core_Control_forcePlaceAll(jcontext ctx, jobject self);
void M_mindustry_core_Control_configurePlaced(jcontext ctx, jobject self);
void M_mindustry_core_Control_placeLandBuild_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_Control_loadAsync(jcontext ctx, jobject self);
void M_mindustry_core_Control_loadSync(jcontext ctx, jobject self);
void M_mindustry_core_Control_checkAutoUnlocks(jcontext ctx, jobject self);
void M_mindustry_core_Control_createPlayer(jcontext ctx, jobject self);
void M_mindustry_core_Control_setInput_mindustry_input_InputHandler(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_Control_playMap_mindustry_maps_Map_mindustry_game_Rules(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_core_Control_playMap_mindustry_maps_Map_mindustry_game_Rules_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
void M_mindustry_core_Control_playSector_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_Control_playSector_mindustry_type_Sector_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_core_Control_playSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_core_Control_playNewSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_mindustry_core_Control_playNewSector_mindustry_type_Sector_mindustry_type_Sector_mindustry_net_WorldReloader_mindustry_world_WorldParams_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jbool M_mindustry_core_Control_isHighScore_R_boolean(jcontext ctx, jobject self);
void M_mindustry_core_Control_dispose(jcontext ctx, jobject self);
void M_mindustry_core_Control_pause(jcontext ctx, jobject self);
void M_mindustry_core_Control_resume(jcontext ctx, jobject self);
void M_mindustry_core_Control_init(jcontext ctx, jobject self);
void M_mindustry_core_Control_update(jcontext ctx, jobject self);
void SM_mindustry_core_Control_lambda$update$0_mindustry_type_Item_int(jcontext ctx, jobject param0, jint param1);
void SM_mindustry_core_Control_lambda$init$0(jcontext ctx);
void SM_mindustry_core_Control_lambda$init$1(jcontext ctx);
void SM_mindustry_core_Control_lambda$init$4_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject param0);
jobject SM_mindustry_core_Control_lambda$init$3_Array1_float_java_lang_Runnable_R_java_lang_CharSequence(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_core_Control_lambda$init$2_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject param0);
void M_mindustry_core_Control_lambda$playSector$0_mindustry_type_Sector_mindustry_net_WorldReloader_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void SM_mindustry_core_Control_lambda$playSector$5(jcontext ctx);
void SM_mindustry_core_Control_lambda$playSector$4(jcontext ctx);
void SM_mindustry_core_Control_lambda$playSector$1_Array1_mindustry_gen_Building_Array1_mindustry_gen_Building_Array1_mindustry_game_Teams$BlockPlan(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_mindustry_core_Control_lambda$playSector$3_mindustry_gen_Building_R_mindustry_gen_Building(jcontext ctx, jobject param0);
jobject SM_mindustry_core_Control_lambda$playSector$2_mindustry_gen_Building_R_mindustry_gen_Building(jcontext ctx, jobject param0);
void SM_mindustry_core_Control_lambda$playMap$0_mindustry_maps_Map_mindustry_game_Rules_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2);
void M_mindustry_core_Control_lambda$createPlayer$0_mindustry_game_EventType$ClientLoadEvent(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_core_Control_lambda$checkAutoUnlocks$0_mindustry_game_Objectives$Objective_R_boolean(jcontext ctx, jobject param0);
jobject SM_mindustry_core_Control_lambda$placeLandBuild$0_mindustry_gen_Building_R_mindustry_gen_Building(jcontext ctx, jobject param0);
void SM_mindustry_core_Control_lambda$new$24_mindustry_game_EventType$HostEvent(jcontext ctx, jobject param0);
void M_mindustry_core_Control_lambda$new$23_mindustry_game_EventType$HostEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_Control_lambda$new$22_mindustry_game_EventType$SaveWriteEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_Control_lambda$new$19(jcontext ctx, jobject self);
void SM_mindustry_core_Control_lambda$new$21_mindustry_world_blocks_storage_CoreBlock$CoreBuild_float(jcontext ctx, jobject param0, jfloat param1);
void M_mindustry_core_Control_lambda$new$20_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_Control_lambda$new$18_mindustry_game_EventType$GameOverEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_Control_lambda$new$16_mindustry_game_EventType$SectorCaptureEvent(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_core_Control_lambda$new$17_mindustry_game_EventType$SectorCaptureEvent(jcontext ctx, jobject param0);
void M_mindustry_core_Control_lambda$new$13_mindustry_game_EventType$UnlockEvent(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_core_Control_lambda$new$15_mindustry_game_Objectives$Objective_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_core_Control_lambda$new$14_mindustry_game_EventType$UnlockEvent_mindustry_game_Objectives$Objective_R_boolean(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_core_Control_lambda$new$11_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject param0);
void SM_mindustry_core_Control_lambda$new$12(jcontext ctx);
void SM_mindustry_core_Control_lambda$new$10_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject param0);
void SM_mindustry_core_Control_lambda$new$9_mindustry_game_EventType$GameOverEvent(jcontext ctx, jobject param0);
void M_mindustry_core_Control_lambda$new$8_mindustry_game_EventType$WaveEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_Control_lambda$new$7_mindustry_game_EventType$ResetEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_core_Control_lambda$new$6_mindustry_game_EventType$SaveLoadEvent(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_core_Control_lambda$new$5_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject param0);
void SM_mindustry_core_Control_lambda$new$4_mindustry_game_EventType$PlayEvent(jcontext ctx, jobject param0);
void SM_mindustry_core_Control_lambda$new$3_mindustry_game_EventType$StateChangeEvent(jcontext ctx, jobject param0);
void M_mindustry_core_Control_lambda$new$1_mindustry_game_EventType$ClientLoadEvent(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_core_Control_lambda$new$2(jcontext ctx);
void M_mindustry_core_Control_lambda$new$0_mindustry_game_EventType$BuildDamageEvent(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
