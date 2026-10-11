#ifndef HEADER_mindustry_game_SectorInfo
#define HEADER_mindustry_game_SectorInfo

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_SectorInfo {
	java_lang_Object parent;
	jref F_production;
	jref F_rawProduction;
	jref F_export;
	jref F_imports;
	jref F_items;
	jref F_bestCoreType;
	jint F_storageCapacity;
	jbool F_hasCore;
	jref F_lastPresetName;
	jint F_lastWidth;
	jint F_lastHeight;
	jbool F_wasCaptured;
	jref F_origin;
	jref F_destination;
	jref F_resources;
	jbool F_waves;
	jbool F_attack;
	jbool F_hasSpawns;
	jint F_attempts;
	jint F_wave;
	jint F_winWave;
	jfloat F_waveSpacing;
	jint F_spawnPosition;
	jfloat F_minutesCaptured;
	jfloat F_lightCoverage;
	jref F_name;
	jref F_icon;
	jref F_contentIcon;
	jint F_waveVersion;
	jbool F_shown;
	jref F_importCooldownTimers;
	jref F_importRateCache;
	jref F_lastImported;
	jref F_time;
	jref F_coreDeltas;
	jref F_productionDeltas;
} mindustry_game_SectorInfo;

extern Class class_mindustry_game_SectorInfo;

extern jint SF_mindustry_game_SectorInfo_valueWindow;
extern jfloat SF_mindustry_game_SectorInfo_refreshPeriod;
extern jfloat SF_mindustry_game_SectorInfo_returnf;

#define VTABLE_mindustry_game_SectorInfo_hashCode_R_int 0
typedef jint (*func_mindustry_game_SectorInfo_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_SectorInfo_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_SectorInfo_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_SectorInfo_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_SectorInfo_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_SectorInfo_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_SectorInfo_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_SectorInfo_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_SectorInfo_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_SectorInfo_finalize 5
typedef void (*func_mindustry_game_SectorInfo_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_SectorInfo_notify 6
typedef void (*func_mindustry_game_SectorInfo_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_SectorInfo_notifyAll 7
typedef void (*func_mindustry_game_SectorInfo_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_SectorInfo_wait 8
typedef void (*func_mindustry_game_SectorInfo_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_SectorInfo_wait_long 9
typedef void (*func_mindustry_game_SectorInfo_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_SectorInfo_wait_long_int 10
typedef void (*func_mindustry_game_SectorInfo_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_SectorInfo_sectorDataMatches_mindustry_type_Sector_R_boolean 11
typedef jbool (*func_mindustry_game_SectorInfo_sectorDataMatches_mindustry_type_Sector_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_SectorInfo_handleCoreItem_mindustry_type_Item_int 12
typedef void (*func_mindustry_game_SectorInfo_handleCoreItem_mindustry_type_Item_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_game_SectorInfo_handleProduction_mindustry_type_Item_int 13
typedef void (*func_mindustry_game_SectorInfo_handleProduction_mindustry_type_Item_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_game_SectorInfo_handleItemExport_mindustry_type_ItemStack 14
typedef void (*func_mindustry_game_SectorInfo_handleItemExport_mindustry_type_ItemStack)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_SectorInfo_handleItemExport_mindustry_type_Item_int 15
typedef void (*func_mindustry_game_SectorInfo_handleItemExport_mindustry_type_Item_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_game_SectorInfo_handleItemImport_mindustry_type_Item_int 16
typedef void (*func_mindustry_game_SectorInfo_handleItemImport_mindustry_type_Item_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_game_SectorInfo_getExport_mindustry_type_Item_R_float 17
typedef jfloat (*func_mindustry_game_SectorInfo_getExport_mindustry_type_Item_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_SectorInfo_hasExport_mindustry_type_Item_R_boolean 18
typedef jbool (*func_mindustry_game_SectorInfo_hasExport_mindustry_type_Item_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_SectorInfo_refreshImportRates_mindustry_type_Planet 19
typedef void (*func_mindustry_game_SectorInfo_refreshImportRates_mindustry_type_Planet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_SectorInfo_getImportRates_mindustry_type_Planet_R_Array1_float 20
typedef jobject (*func_mindustry_game_SectorInfo_getImportRates_mindustry_type_Planet_R_Array1_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_SectorInfo_getImportRate_mindustry_type_Planet_mindustry_type_Item_R_float 21
typedef jfloat (*func_mindustry_game_SectorInfo_getImportRate_mindustry_type_Planet_mindustry_type_Item_R_float)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_game_SectorInfo_write 22
typedef void (*func_mindustry_game_SectorInfo_write)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_SectorInfo_prepare_mindustry_type_Sector 23
typedef void (*func_mindustry_game_SectorInfo_prepare_mindustry_type_Sector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_SectorInfo_update 24
typedef void (*func_mindustry_game_SectorInfo_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_SectorInfo_updateStats_arc_struct_ObjectMap 25
typedef void (*func_mindustry_game_SectorInfo_updateStats_arc_struct_ObjectMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_SectorInfo_updateDelta_mindustry_type_Item_arc_struct_ObjectMap_Array1_int 26
typedef void (*func_mindustry_game_SectorInfo_updateDelta_mindustry_type_Item_arc_struct_ObjectMap_Array1_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_game_SectorInfo_exportRates_R_arc_struct_ObjectFloatMap 27
typedef jobject (*func_mindustry_game_SectorInfo_exportRates_R_arc_struct_ObjectFloatMap)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_SectorInfo_anyExports_R_boolean 28
typedef jbool (*func_mindustry_game_SectorInfo_anyExports_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_SectorInfo_importStats_mindustry_type_Planet_R_arc_struct_ObjectMap 29
typedef jobject (*func_mindustry_game_SectorInfo_importStats_mindustry_type_Planet_R_arc_struct_ObjectMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_SectorInfo_eachImport_mindustry_type_Planet_arc_func_Cons 30
typedef void (*func_mindustry_game_SectorInfo_eachImport_mindustry_type_Planet_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_game_SectorInfo_lambda$prepare$2_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat 31
typedef void (*func_mindustry_game_SectorInfo_lambda$prepare$2_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_game_SectorInfo_lambda$refreshImportRates$0_mindustry_type_Sector 32
typedef void (*func_mindustry_game_SectorInfo_lambda$refreshImportRates$0_mindustry_type_Sector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_SectorInfo_lambda$refreshImportRates$1_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat 33
typedef void (*func_mindustry_game_SectorInfo_lambda$refreshImportRates$1_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_game_SectorInfo(jobject object, jint mark, jint depth);
void clinit_mindustry_game_SectorInfo(jcontext ctx);
void init_mindustry_game_SectorInfo(jcontext ctx, jobject self);
jbool M_mindustry_game_SectorInfo_sectorDataMatches_mindustry_type_Sector_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_SectorInfo_handleCoreItem_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_mindustry_game_SectorInfo_handleProduction_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_mindustry_game_SectorInfo_handleItemExport_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_SectorInfo_handleItemExport_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_mindustry_game_SectorInfo_handleItemImport_mindustry_type_Item_int(jcontext ctx, jobject self, jobject param0, jint param1);
jfloat M_mindustry_game_SectorInfo_getExport_mindustry_type_Item_R_float(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_game_SectorInfo_hasExport_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_SectorInfo_refreshImportRates_mindustry_type_Planet(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_game_SectorInfo_getImportRates_mindustry_type_Planet_R_Array1_float(jcontext ctx, jobject self, jobject param0);
jfloat M_mindustry_game_SectorInfo_getImportRate_mindustry_type_Planet_mindustry_type_Item_R_float(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_game_SectorInfo_write(jcontext ctx, jobject self);
void M_mindustry_game_SectorInfo_prepare_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_SectorInfo_update(jcontext ctx, jobject self);
void M_mindustry_game_SectorInfo_updateStats_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_SectorInfo_updateDelta_mindustry_type_Item_arc_struct_ObjectMap_Array1_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_mindustry_game_SectorInfo_exportRates_R_arc_struct_ObjectFloatMap(jcontext ctx, jobject self);
jbool M_mindustry_game_SectorInfo_anyExports_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_game_SectorInfo_importStats_mindustry_type_Planet_R_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_SectorInfo_eachImport_mindustry_type_Planet_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1);
void SM_mindustry_game_SectorInfo_lambda$importStats$0_arc_struct_ObjectMap_mindustry_type_Sector(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_game_SectorInfo_lambda$importStats$1_arc_struct_ObjectMap_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_game_SectorInfo_lambda$anyExports$0_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_game_SectorInfo_lambda$exportRates$0_arc_struct_ObjectFloatMap_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_game_SectorInfo_lambda$updateStats$0_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_game_SectorInfo_lambda$prepare$3_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0);
void M_mindustry_game_SectorInfo_lambda$prepare$2_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat(jcontext ctx, jobject self, jobject param0, jobject param1);
jfloat SM_mindustry_game_SectorInfo_lambda$prepare$1_mindustry_gen_Unit_R_float(jcontext ctx, jobject param0);
jfloat SM_mindustry_game_SectorInfo_lambda$prepare$0_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_float(jcontext ctx, jobject param0);
void SM_mindustry_game_SectorInfo_lambda$write$0_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_type_Item_int(jcontext ctx, jobject param0, jobject param1, jint param2);
void M_mindustry_game_SectorInfo_lambda$refreshImportRates$0_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_SectorInfo_lambda$refreshImportRates$1_mindustry_type_Item_mindustry_game_SectorInfo$ExportStat(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
