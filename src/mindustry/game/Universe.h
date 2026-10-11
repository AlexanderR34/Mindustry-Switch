#ifndef HEADER_mindustry_game_Universe
#define HEADER_mindustry_game_Universe

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_Universe {
	java_lang_Object parent;
	jint F_seconds;
	jint F_netSeconds;
	jfloat F_secondCounter;
	jint F_turn;
	jfloat F_turnCounter;
	jref F_lastLoadout;
	jref F_lastLaunchResources;
} mindustry_game_Universe;

extern Class class_mindustry_game_Universe;


#define VTABLE_mindustry_game_Universe_hashCode_R_int 0
typedef jint (*func_mindustry_game_Universe_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Universe_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_Universe_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Universe_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_Universe_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Universe_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_Universe_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Universe_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_Universe_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Universe_finalize 5
typedef void (*func_mindustry_game_Universe_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Universe_notify 6
typedef void (*func_mindustry_game_Universe_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Universe_notifyAll 7
typedef void (*func_mindustry_game_Universe_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Universe_wait 8
typedef void (*func_mindustry_game_Universe_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Universe_wait_long 9
typedef void (*func_mindustry_game_Universe_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_Universe_wait_long_int 10
typedef void (*func_mindustry_game_Universe_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_Universe_updateGlobal 11
typedef void (*func_mindustry_game_Universe_updateGlobal)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Universe_turn_R_int 12
typedef jint (*func_mindustry_game_Universe_turn_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Universe_updatePlanet_mindustry_type_Planet 13
typedef void (*func_mindustry_game_Universe_updatePlanet_mindustry_type_Planet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Universe_update 14
typedef void (*func_mindustry_game_Universe_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Universe_clearLoadoutInfo 15
typedef void (*func_mindustry_game_Universe_clearLoadoutInfo)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Universe_getLaunchResources_R_mindustry_type_ItemSeq 16
typedef jobject (*func_mindustry_game_Universe_getLaunchResources_R_mindustry_type_ItemSeq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Universe_updateLaunchResources_mindustry_type_ItemSeq 17
typedef void (*func_mindustry_game_Universe_updateLaunchResources_mindustry_type_ItemSeq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Universe_updateLoadout_mindustry_world_blocks_storage_CoreBlock 18
typedef void (*func_mindustry_game_Universe_updateLoadout_mindustry_world_blocks_storage_CoreBlock)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Universe_updateLoadout_mindustry_world_blocks_storage_CoreBlock_mindustry_game_Schematic 19
typedef void (*func_mindustry_game_Universe_updateLoadout_mindustry_world_blocks_storage_CoreBlock_mindustry_game_Schematic)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_game_Universe_getLastLoadout_R_mindustry_game_Schematic 20
typedef jobject (*func_mindustry_game_Universe_getLastLoadout_R_mindustry_game_Schematic)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Universe_getLoadout_mindustry_world_blocks_storage_CoreBlock_R_mindustry_game_Schematic 21
typedef jobject (*func_mindustry_game_Universe_getLoadout_mindustry_world_blocks_storage_CoreBlock_R_mindustry_game_Schematic)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Universe_runTurn 22
typedef void (*func_mindustry_game_Universe_runTurn)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Universe_updateNetSeconds_int 23
typedef void (*func_mindustry_game_Universe_updateNetSeconds_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_game_Universe_secondsMod_float_float_R_float 24
typedef jfloat (*func_mindustry_game_Universe_secondsMod_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_game_Universe_seconds_R_int 25
typedef jint (*func_mindustry_game_Universe_seconds_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Universe_setSeconds_float 26
typedef void (*func_mindustry_game_Universe_setSeconds_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_game_Universe_secondsf_R_float 27
typedef jfloat (*func_mindustry_game_Universe_secondsf_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Universe_save 28
typedef void (*func_mindustry_game_Universe_save)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Universe_load 29
typedef void (*func_mindustry_game_Universe_load)(jcontext ctx, jobject self);

void mark_mindustry_game_Universe(jobject object, jint mark, jint depth);
void clinit_mindustry_game_Universe(jcontext ctx);
void init_mindustry_game_Universe(jcontext ctx, jobject self);
void M_mindustry_game_Universe_updateGlobal(jcontext ctx, jobject self);
jint M_mindustry_game_Universe_turn_R_int(jcontext ctx, jobject self);
void M_mindustry_game_Universe_updatePlanet_mindustry_type_Planet(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_Universe_update(jcontext ctx, jobject self);
void M_mindustry_game_Universe_clearLoadoutInfo(jcontext ctx, jobject self);
jobject M_mindustry_game_Universe_getLaunchResources_R_mindustry_type_ItemSeq(jcontext ctx, jobject self);
void M_mindustry_game_Universe_updateLaunchResources_mindustry_type_ItemSeq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_Universe_updateLoadout_mindustry_world_blocks_storage_CoreBlock(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_Universe_updateLoadout_mindustry_world_blocks_storage_CoreBlock_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_game_Universe_getLastLoadout_R_mindustry_game_Schematic(jcontext ctx, jobject self);
jobject M_mindustry_game_Universe_getLoadout_mindustry_world_blocks_storage_CoreBlock_R_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_Universe_runTurn(jcontext ctx, jobject self);
void M_mindustry_game_Universe_updateNetSeconds_int(jcontext ctx, jobject self, jint param0);
jfloat M_mindustry_game_Universe_secondsMod_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jint M_mindustry_game_Universe_seconds_R_int(jcontext ctx, jobject self);
void M_mindustry_game_Universe_setSeconds_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_mindustry_game_Universe_secondsf_R_float(jcontext ctx, jobject self);
void M_mindustry_game_Universe_save(jcontext ctx, jobject self);
void M_mindustry_game_Universe_load(jcontext ctx, jobject self);
jbool SM_mindustry_game_Universe_lambda$runTurn$3_mindustry_type_Sector_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_game_Universe_lambda$runTurn$2_mindustry_type_Sector_int_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3);
void SM_mindustry_game_Universe_lambda$runTurn$1_mindustry_type_Sector_int_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3);
void SM_mindustry_game_Universe_lambda$runTurn$0_mindustry_type_ItemSeq_int_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3);
jbool SM_mindustry_game_Universe_lambda$getLoadout$0_java_lang_String_mindustry_game_Schematic_R_boolean(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_game_Universe_lambda$new$0_mindustry_game_EventType$SectorCaptureEvent(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
