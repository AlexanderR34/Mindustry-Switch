#ifndef HEADER_mindustry_service_GameService
#define HEADER_mindustry_service_GameService

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_service_GameService {
	java_lang_Object parent;
	jref F_tmpTiles;
	jref F_blocksBuilt;
	jref F_unitsBuilt;
	jref F_t5s;
	jref F_checked;
	jref F_allTransportSerpulo;
	jref F_allTransportErekir;
	jref F_allErekirBlocks;
	jref F_allSerpuloBlocks;
} mindustry_service_GameService;

extern Class class_mindustry_service_GameService;


#define VTABLE_mindustry_service_GameService_hashCode_R_int 0
typedef jint (*func_mindustry_service_GameService_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_GameService_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_service_GameService_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_service_GameService_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_service_GameService_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_GameService_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_service_GameService_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_GameService_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_service_GameService_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_GameService_finalize 5
typedef void (*func_mindustry_service_GameService_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_GameService_notify 6
typedef void (*func_mindustry_service_GameService_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_GameService_notifyAll 7
typedef void (*func_mindustry_service_GameService_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_GameService_wait 8
typedef void (*func_mindustry_service_GameService_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_GameService_wait_long 9
typedef void (*func_mindustry_service_GameService_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_service_GameService_wait_long_int 10
typedef void (*func_mindustry_service_GameService_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_service_GameService_init 11
typedef void (*func_mindustry_service_GameService_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_GameService_enabled_R_boolean 12
typedef jbool (*func_mindustry_service_GameService_enabled_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_GameService_completeAchievement_java_lang_String 13
typedef void (*func_mindustry_service_GameService_completeAchievement_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_service_GameService_clearAchievement_java_lang_String 14
typedef void (*func_mindustry_service_GameService_clearAchievement_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_service_GameService_isAchieved_java_lang_String_R_boolean 15
typedef jbool (*func_mindustry_service_GameService_isAchieved_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_service_GameService_getStat_java_lang_String_int_R_int 16
typedef jint (*func_mindustry_service_GameService_getStat_java_lang_String_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_service_GameService_setStat_java_lang_String_int 17
typedef void (*func_mindustry_service_GameService_setStat_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_service_GameService_storeStats 18
typedef void (*func_mindustry_service_GameService_storeStats)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_GameService_checkAllBlocks_mindustry_service_Achievement_Array1_mindustry_world_Block 19
typedef void (*func_mindustry_service_GameService_checkAllBlocks_mindustry_service_Achievement_Array1_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_service_GameService_registerEvents 20
typedef void (*func_mindustry_service_GameService_registerEvents)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_GameService_checkUpdate 21
typedef void (*func_mindustry_service_GameService_checkUpdate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_GameService_save 22
typedef void (*func_mindustry_service_GameService_save)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_GameService_trigger_mindustry_game_EventType$Trigger_mindustry_service_Achievement 23
typedef void (*func_mindustry_service_GameService_trigger_mindustry_game_EventType$Trigger_mindustry_service_Achievement)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_service_GameService_campaign_R_boolean 24
typedef jbool (*func_mindustry_service_GameService_campaign_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_GameService_lambda$trigger$0_mindustry_service_Achievement 25
typedef void (*func_mindustry_service_GameService_lambda$trigger$0_mindustry_service_Achievement)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_service_GameService_lambda$registerEvents$51_mindustry_game_EventType$PayloadDropEvent 26
typedef void (*func_mindustry_service_GameService_lambda$registerEvents$51_mindustry_game_EventType$PayloadDropEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_service_GameService_lambda$registerEvents$41_mindustry_game_EventType$WaveEvent 27
typedef void (*func_mindustry_service_GameService_lambda$registerEvents$41_mindustry_game_EventType$WaveEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_service_GameService_lambda$registerEvents$38_mindustry_game_EventType$UnitCreateEvent 28
typedef void (*func_mindustry_service_GameService_lambda$registerEvents$38_mindustry_game_EventType$UnitCreateEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_service_GameService_lambda$registerEvents$37_mindustry_game_EventType$PickupEvent 29
typedef void (*func_mindustry_service_GameService_lambda$registerEvents$37_mindustry_game_EventType$PickupEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_service_GameService_lambda$registerEvents$36_mindustry_game_EventType$LaunchItemEvent 30
typedef void (*func_mindustry_service_GameService_lambda$registerEvents$36_mindustry_game_EventType$LaunchItemEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_service_GameService_lambda$registerEvents$34_mindustry_game_EventType$GeneratorPressureExplodeEvent 31
typedef void (*func_mindustry_service_GameService_lambda$registerEvents$34_mindustry_game_EventType$GeneratorPressureExplodeEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_service_GameService_lambda$registerEvents$33 32
typedef void (*func_mindustry_service_GameService_lambda$registerEvents$33)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_GameService_lambda$registerEvents$32_mindustry_game_EventType$UnitDrownEvent 33
typedef void (*func_mindustry_service_GameService_lambda$registerEvents$32_mindustry_game_EventType$UnitDrownEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_service_GameService_lambda$registerEvents$28_mindustry_game_EventType$BlockDestroyEvent 34
typedef void (*func_mindustry_service_GameService_lambda$registerEvents$28_mindustry_game_EventType$BlockDestroyEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_service_GameService_lambda$registerEvents$22_mindustry_game_EventType$SaveLoadEvent 35
typedef void (*func_mindustry_service_GameService_lambda$registerEvents$22_mindustry_game_EventType$SaveLoadEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_service_GameService_lambda$registerEvents$23 36
typedef void (*func_mindustry_service_GameService_lambda$registerEvents$23)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_GameService_lambda$registerEvents$24 37
typedef void (*func_mindustry_service_GameService_lambda$registerEvents$24)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_GameService_lambda$registerEvents$25_mindustry_type_UnitType_R_boolean 38
typedef jbool (*func_mindustry_service_GameService_lambda$registerEvents$25_mindustry_type_UnitType_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_service_GameService_lambda$registerEvents$20_mindustry_game_EventType$UnitCreateEvent 39
typedef void (*func_mindustry_service_GameService_lambda$registerEvents$20_mindustry_game_EventType$UnitCreateEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_service_GameService_lambda$registerEvents$21_mindustry_type_UnitType_R_boolean 40
typedef jbool (*func_mindustry_service_GameService_lambda$registerEvents$21_mindustry_type_UnitType_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_service_GameService_lambda$registerEvents$15_mindustry_game_EventType$BlockBuildEndEvent 41
typedef void (*func_mindustry_service_GameService_lambda$registerEvents$15_mindustry_game_EventType$BlockBuildEndEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_service_GameService_lambda$registerEvents$14_mindustry_game_EventType$BlockBuildEndEvent 42
typedef void (*func_mindustry_service_GameService_lambda$registerEvents$14_mindustry_game_EventType$BlockBuildEndEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_service_GameService_lambda$registerEvents$13_mindustry_game_EventType$BuildingBulletDestroyEvent 43
typedef void (*func_mindustry_service_GameService_lambda$registerEvents$13_mindustry_game_EventType$BuildingBulletDestroyEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_service_GameService_lambda$registerEvents$11 44
typedef void (*func_mindustry_service_GameService_lambda$registerEvents$11)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_GameService_lambda$registerEvents$12 45
typedef void (*func_mindustry_service_GameService_lambda$registerEvents$12)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_GameService_lambda$registerEvents$10 46
typedef void (*func_mindustry_service_GameService_lambda$registerEvents$10)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_GameService_lambda$registerEvents$9 47
typedef void (*func_mindustry_service_GameService_lambda$registerEvents$9)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_GameService_lambda$registerEvents$7_mindustry_game_EventType$UnitDestroyEvent 48
typedef void (*func_mindustry_service_GameService_lambda$registerEvents$7_mindustry_game_EventType$UnitDestroyEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_service_GameService_lambda$registerEvents$6 49
typedef void (*func_mindustry_service_GameService_lambda$registerEvents$6)(jcontext ctx, jobject self);
#define VTABLE_mindustry_service_GameService_lambda$checkAllBlocks$0_mindustry_world_Block_R_boolean 50
typedef jbool (*func_mindustry_service_GameService_lambda$checkAllBlocks$0_mindustry_world_Block_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_service_GameService_lambda$init$0_mindustry_game_EventType$ClientLoadEvent 51
typedef void (*func_mindustry_service_GameService_lambda$init$0_mindustry_game_EventType$ClientLoadEvent)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_service_GameService(jobject object, jint mark, jint depth);
void clinit_mindustry_service_GameService(jcontext ctx);
void init_mindustry_service_GameService(jcontext ctx, jobject self);
void M_mindustry_service_GameService_init(jcontext ctx, jobject self);
jbool M_mindustry_service_GameService_enabled_R_boolean(jcontext ctx, jobject self);
void M_mindustry_service_GameService_completeAchievement_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_service_GameService_clearAchievement_java_lang_String(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_service_GameService_isAchieved_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_mindustry_service_GameService_getStat_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_mindustry_service_GameService_setStat_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_mindustry_service_GameService_storeStats(jcontext ctx, jobject self);
void M_mindustry_service_GameService_checkAllBlocks_mindustry_service_Achievement_Array1_mindustry_world_Block(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_service_GameService_registerEvents(jcontext ctx, jobject self);
void M_mindustry_service_GameService_checkUpdate(jcontext ctx, jobject self);
void M_mindustry_service_GameService_save(jcontext ctx, jobject self);
void M_mindustry_service_GameService_trigger_mindustry_game_EventType$Trigger_mindustry_service_Achievement(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_mindustry_service_GameService_campaign_R_boolean(jcontext ctx, jobject self);
void M_mindustry_service_GameService_lambda$trigger$0_mindustry_service_Achievement(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_service_GameService_lambda$checkUpdate$2_mindustry_gen_Building_mindustry_type_Item_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_service_GameService_lambda$checkUpdate$1_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_service_GameService_lambda$checkUpdate$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_service_GameService_lambda$registerEvents$53_mindustry_game_EventType$ClientChatEvent(jcontext ctx, jobject param0);
void M_mindustry_service_GameService_lambda$registerEvents$51_mindustry_game_EventType$PayloadDropEvent(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_service_GameService_lambda$registerEvents$52_mindustry_game_EventType$PayloadDropEvent_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_boolean(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_service_GameService_lambda$registerEvents$49_mindustry_game_EventType$SectorCaptureEvent(jcontext ctx, jobject param0);
jbool SM_mindustry_service_GameService_lambda$registerEvents$50_mindustry_type_Sector_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_service_GameService_lambda$registerEvents$48_mindustry_game_EventType$ClientPreConnectEvent(jcontext ctx, jobject param0);
void SM_mindustry_service_GameService_lambda$registerEvents$47_mindustry_game_EventType$WinEvent(jcontext ctx, jobject param0);
void SM_mindustry_service_GameService_lambda$registerEvents$46_java_lang_Runnable_mindustry_game_EventType$UnlockEvent(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_service_GameService_lambda$registerEvents$45_java_lang_Runnable_mindustry_game_EventType$ResearchEvent(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_service_GameService_lambda$registerEvents$43(jcontext ctx);
jbool SM_mindustry_service_GameService_lambda$registerEvents$44_mindustry_content_TechTree$TechNode_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_service_GameService_lambda$registerEvents$42_mindustry_game_EventType$PlayerJoin(jcontext ctx, jobject param0);
void M_mindustry_service_GameService_lambda$registerEvents$41_mindustry_game_EventType$WaveEvent(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_service_GameService_lambda$registerEvents$40_mindustry_game_EventType$LaunchItemEvent(jcontext ctx, jobject param0);
void SM_mindustry_service_GameService_lambda$registerEvents$39_mindustry_game_EventType$SectorLaunchEvent(jcontext ctx, jobject param0);
void M_mindustry_service_GameService_lambda$registerEvents$38_mindustry_game_EventType$UnitCreateEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_service_GameService_lambda$registerEvents$37_mindustry_game_EventType$PickupEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_service_GameService_lambda$registerEvents$36_mindustry_game_EventType$LaunchItemEvent(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_service_GameService_lambda$registerEvents$35_mindustry_game_EventType$UnitBulletDestroyEvent(jcontext ctx, jobject param0);
void M_mindustry_service_GameService_lambda$registerEvents$34_mindustry_game_EventType$GeneratorPressureExplodeEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_service_GameService_lambda$registerEvents$33(jcontext ctx, jobject self);
void M_mindustry_service_GameService_lambda$registerEvents$32_mindustry_game_EventType$UnitDrownEvent(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_service_GameService_lambda$registerEvents$31_mindustry_game_EventType$UnlockEvent(jcontext ctx, jobject param0);
void SM_mindustry_service_GameService_lambda$registerEvents$30_mindustry_game_EventType$MapPublishEvent(jcontext ctx, jobject param0);
void SM_mindustry_service_GameService_lambda$registerEvents$29_mindustry_game_EventType$MapMakeEvent(jcontext ctx, jobject param0);
void M_mindustry_service_GameService_lambda$registerEvents$28_mindustry_game_EventType$BlockDestroyEvent(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_service_GameService_lambda$registerEvents$27_mindustry_game_EventType$SchematicCreateEvent(jcontext ctx, jobject param0);
void SM_mindustry_service_GameService_lambda$registerEvents$26_mindustry_game_EventType$UnitControlEvent(jcontext ctx, jobject param0);
void M_mindustry_service_GameService_lambda$registerEvents$22_mindustry_game_EventType$SaveLoadEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_service_GameService_lambda$registerEvents$23(jcontext ctx, jobject self);
void M_mindustry_service_GameService_lambda$registerEvents$24(jcontext ctx, jobject self);
jbool M_mindustry_service_GameService_lambda$registerEvents$25_mindustry_type_UnitType_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_service_GameService_lambda$registerEvents$20_mindustry_game_EventType$UnitCreateEvent(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_service_GameService_lambda$registerEvents$21_mindustry_type_UnitType_R_boolean(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_service_GameService_lambda$registerEvents$19_mindustry_game_EventType$SectorLaunchLoadoutEvent(jcontext ctx, jobject param0);
void SM_mindustry_service_GameService_lambda$registerEvents$18_mindustry_game_EventType$TurnEvent(jcontext ctx, jobject param0);
void M_mindustry_service_GameService_lambda$registerEvents$15_mindustry_game_EventType$BlockBuildEndEvent(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_service_GameService_lambda$registerEvents$17_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_service_GameService_lambda$registerEvents$16_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0);
void M_mindustry_service_GameService_lambda$registerEvents$14_mindustry_game_EventType$BlockBuildEndEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_service_GameService_lambda$registerEvents$13_mindustry_game_EventType$BuildingBulletDestroyEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_service_GameService_lambda$registerEvents$11(jcontext ctx, jobject self);
void M_mindustry_service_GameService_lambda$registerEvents$12(jcontext ctx, jobject self);
void M_mindustry_service_GameService_lambda$registerEvents$10(jcontext ctx, jobject self);
void M_mindustry_service_GameService_lambda$registerEvents$9(jcontext ctx, jobject self);
void SM_mindustry_service_GameService_lambda$registerEvents$8_mindustry_game_EventType$TurnEvent(jcontext ctx, jobject param0);
void M_mindustry_service_GameService_lambda$registerEvents$7_mindustry_game_EventType$UnitDestroyEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_service_GameService_lambda$registerEvents$6(jcontext ctx, jobject self);
void SM_mindustry_service_GameService_lambda$registerEvents$5(jcontext ctx);
jbool SM_mindustry_service_GameService_lambda$registerEvents$4_mindustry_type_Sector_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_service_GameService_lambda$registerEvents$3_mindustry_world_Block_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_service_GameService_lambda$registerEvents$2_mindustry_world_Block_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_service_GameService_lambda$registerEvents$1_mindustry_world_Block_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_service_GameService_lambda$registerEvents$0_mindustry_world_Block_R_boolean(jcontext ctx, jobject param0);
jbool M_mindustry_service_GameService_lambda$checkAllBlocks$0_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_service_GameService_lambda$init$0_mindustry_game_EventType$ClientLoadEvent(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
