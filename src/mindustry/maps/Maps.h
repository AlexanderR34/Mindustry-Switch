#ifndef HEADER_mindustry_maps_Maps
#define HEADER_mindustry_maps_Maps

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_maps_Maps {
	java_lang_Object parent;
	jref F_maps;
	jref F_shuffleMode;
	jref F_shuffler;
	jref F_nextMapOverride;
	jref F_previewList;
} mindustry_maps_Maps;

extern Class class_mindustry_maps_Maps;

extern jobject SF_mindustry_maps_Maps_allFilterTypes;
extern jobject SF_mindustry_maps_Maps_defaultMapNames;
extern jobject SF_mindustry_maps_Maps_pvpMaps;
extern jbool SF_mindustry_maps_Maps_useDefaultFolder;

#define VTABLE_mindustry_maps_Maps_hashCode_R_int 0
typedef jint (*func_mindustry_maps_Maps_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Maps_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_maps_Maps_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Maps_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_maps_Maps_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Maps_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_maps_Maps_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Maps_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_maps_Maps_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Maps_finalize 5
typedef void (*func_mindustry_maps_Maps_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Maps_notify 6
typedef void (*func_mindustry_maps_Maps_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Maps_notifyAll 7
typedef void (*func_mindustry_maps_Maps_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Maps_wait 8
typedef void (*func_mindustry_maps_Maps_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Maps_wait_long 9
typedef void (*func_mindustry_maps_Maps_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_maps_Maps_wait_long_int 10
typedef void (*func_mindustry_maps_Maps_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_maps_Maps_getShuffleMode_R_mindustry_maps_Maps$ShuffleMode 11
typedef jobject (*func_mindustry_maps_Maps_getShuffleMode_R_mindustry_maps_Maps$ShuffleMode)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Maps_setShuffleMode_mindustry_maps_Maps$ShuffleMode 12
typedef void (*func_mindustry_maps_Maps_setShuffleMode_mindustry_maps_Maps$ShuffleMode)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Maps_setMapProvider_mindustry_maps_Maps$MapProvider 13
typedef void (*func_mindustry_maps_Maps_setMapProvider_mindustry_maps_Maps$MapProvider)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Maps_setNextMapOverride_mindustry_maps_Map 14
typedef void (*func_mindustry_maps_Maps_setNextMapOverride_mindustry_maps_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Maps_getNextMap_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map 15
typedef jobject (*func_mindustry_maps_Maps_getNextMap_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_maps_Maps_all_R_arc_struct_Seq 16
typedef jobject (*func_mindustry_maps_Maps_all_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Maps_customMaps_R_arc_struct_Seq 17
typedef jobject (*func_mindustry_maps_Maps_customMaps_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Maps_defaultMaps_R_arc_struct_Seq 18
typedef jobject (*func_mindustry_maps_Maps_defaultMaps_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Maps_moddedMaps_R_arc_struct_Seq 19
typedef jobject (*func_mindustry_maps_Maps_moddedMaps_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Maps_byName_java_lang_String_R_mindustry_maps_Map 20
typedef jobject (*func_mindustry_maps_Maps_byName_java_lang_String_R_mindustry_maps_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Maps_loadInternalMap_java_lang_String_R_mindustry_maps_Map 21
typedef jobject (*func_mindustry_maps_Maps_loadInternalMap_java_lang_String_R_mindustry_maps_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Maps_load 22
typedef void (*func_mindustry_maps_Maps_load)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Maps_reload 23
typedef void (*func_mindustry_maps_Maps_reload)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Maps_saveMap_arc_struct_ObjectMap_R_mindustry_maps_Map 24
typedef jobject (*func_mindustry_maps_Maps_saveMap_arc_struct_ObjectMap_R_mindustry_maps_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Maps_saveMap_arc_struct_ObjectMap_boolean_R_mindustry_maps_Map 25
typedef jobject (*func_mindustry_maps_Maps_saveMap_arc_struct_ObjectMap_boolean_R_mindustry_maps_Map)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_maps_Maps_importMap_arc_files_Fi_R_mindustry_maps_Map 26
typedef jobject (*func_mindustry_maps_Maps_importMap_arc_files_Fi_R_mindustry_maps_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Maps_tryCatchMapError_arc_util_UnsafeRunnable 27
typedef void (*func_mindustry_maps_Maps_tryCatchMapError_arc_util_UnsafeRunnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Maps_removeMap_mindustry_maps_Map 28
typedef void (*func_mindustry_maps_Maps_removeMap_mindustry_maps_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Maps_readFilters_java_lang_String_R_arc_struct_Seq 29
typedef jobject (*func_mindustry_maps_Maps_readFilters_java_lang_String_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Maps_addDefaultOres_arc_struct_Seq 30
typedef void (*func_mindustry_maps_Maps_addDefaultOres_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Maps_writeWaves_arc_struct_Seq_R_java_lang_String 31
typedef jobject (*func_mindustry_maps_Maps_writeWaves_arc_struct_Seq_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Maps_readWaves_java_lang_String_R_arc_struct_Seq 32
typedef jobject (*func_mindustry_maps_Maps_readWaves_java_lang_String_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Maps_loadPreviews 33
typedef void (*func_mindustry_maps_Maps_loadPreviews)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Maps_createAllPreviews 34
typedef void (*func_mindustry_maps_Maps_createAllPreviews)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Maps_queueNewPreview_mindustry_maps_Map 35
typedef void (*func_mindustry_maps_Maps_queueNewPreview_mindustry_maps_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Maps_createNewPreview_mindustry_maps_Map_arc_func_Cons 36
typedef void (*func_mindustry_maps_Maps_createNewPreview_mindustry_maps_Map_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_maps_Maps_writeCache_mindustry_maps_Map 37
typedef void (*func_mindustry_maps_Maps_writeCache_mindustry_maps_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Maps_readCache_mindustry_maps_Map 38
typedef void (*func_mindustry_maps_Maps_readCache_mindustry_maps_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Maps_findFile_java_lang_String_R_arc_files_Fi 39
typedef jobject (*func_mindustry_maps_Maps_findFile_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Maps_loadMap_arc_files_Fi_boolean_R_mindustry_maps_Map 40
typedef jobject (*func_mindustry_maps_Maps_loadMap_arc_files_Fi_boolean_R_mindustry_maps_Map)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_maps_Maps_lambda$createNewPreview$0_mindustry_maps_Map_arc_graphics_Pixmap 41
typedef void (*func_mindustry_maps_Maps_lambda$createNewPreview$0_mindustry_maps_Map_arc_graphics_Pixmap)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_maps_Maps_lambda$queueNewPreview$0_mindustry_maps_Map 42
typedef void (*func_mindustry_maps_Maps_lambda$queueNewPreview$0_mindustry_maps_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Maps_lambda$createAllPreviews$0 43
typedef void (*func_mindustry_maps_Maps_lambda$createAllPreviews$0)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Maps_lambda$importMap$0_mindustry_maps_Map_Array1_java_lang_Exception_java_lang_Exception 44
typedef void (*func_mindustry_maps_Maps_lambda$importMap$0_mindustry_maps_Map_Array1_java_lang_Exception_java_lang_Exception)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_maps_Maps_lambda$load$1_mindustry_mod_Mods$LoadedMod_arc_files_Fi 45
typedef void (*func_mindustry_maps_Maps_lambda$load$1_mindustry_mod_Mods$LoadedMod_arc_files_Fi)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_maps_Maps_lambda$load$0_arc_files_Fi 46
typedef void (*func_mindustry_maps_Maps_lambda$load$0_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Maps_lambda$new$0_mindustry_game_EventType$ClientLoadEvent 47
typedef void (*func_mindustry_maps_Maps_lambda$new$0_mindustry_game_EventType$ClientLoadEvent)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_maps_Maps(jobject object, jint mark, jint depth);
void clinit_mindustry_maps_Maps(jcontext ctx);
jobject M_mindustry_maps_Maps_getShuffleMode_R_mindustry_maps_Maps$ShuffleMode(jcontext ctx, jobject self);
void M_mindustry_maps_Maps_setShuffleMode_mindustry_maps_Maps$ShuffleMode(jcontext ctx, jobject self, jobject param0);
void M_mindustry_maps_Maps_setMapProvider_mindustry_maps_Maps$MapProvider(jcontext ctx, jobject self, jobject param0);
void M_mindustry_maps_Maps_setNextMapOverride_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_maps_Maps_getNextMap_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_maps_Maps_all_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_mindustry_maps_Maps_customMaps_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_mindustry_maps_Maps_defaultMaps_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_mindustry_maps_Maps_moddedMaps_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_mindustry_maps_Maps_byName_java_lang_String_R_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0);
void init_mindustry_maps_Maps(jcontext ctx, jobject self);
jobject M_mindustry_maps_Maps_loadInternalMap_java_lang_String_R_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0);
void M_mindustry_maps_Maps_load(jcontext ctx, jobject self);
void M_mindustry_maps_Maps_reload(jcontext ctx, jobject self);
jobject M_mindustry_maps_Maps_saveMap_arc_struct_ObjectMap_R_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_maps_Maps_saveMap_arc_struct_ObjectMap_boolean_R_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_mindustry_maps_Maps_importMap_arc_files_Fi_R_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0);
void M_mindustry_maps_Maps_tryCatchMapError_arc_util_UnsafeRunnable(jcontext ctx, jobject self, jobject param0);
void M_mindustry_maps_Maps_removeMap_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_maps_Maps_readFilters_java_lang_String_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_maps_Maps_addDefaultOres_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_maps_Maps_writeWaves_arc_struct_Seq_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_maps_Maps_readWaves_java_lang_String_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_maps_Maps_loadPreviews(jcontext ctx, jobject self);
void M_mindustry_maps_Maps_createAllPreviews(jcontext ctx, jobject self);
void M_mindustry_maps_Maps_queueNewPreview_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0);
void M_mindustry_maps_Maps_createNewPreview_mindustry_maps_Map_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_maps_Maps_writeCache_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0);
void M_mindustry_maps_Maps_readCache_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_maps_Maps_findFile_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_maps_Maps_loadMap_arc_files_Fi_boolean_R_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_mindustry_maps_Maps_lambda$createNewPreview$0_mindustry_maps_Map_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_maps_Maps_lambda$queueNewPreview$0_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0);
void M_mindustry_maps_Maps_lambda$createAllPreviews$0(jcontext ctx, jobject self);
void SM_mindustry_maps_Maps_lambda$createAllPreviews$1_mindustry_maps_Map_java_lang_Exception(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_maps_Maps_lambda$createAllPreviews$2_mindustry_maps_Map(jcontext ctx, jobject param0);
void SM_mindustry_maps_Maps_lambda$loadPreviews$0_mindustry_maps_Map_arc_graphics_Texture(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_maps_Maps_lambda$addDefaultOres$0_mindustry_world_Block_R_boolean(jcontext ctx, jobject param0);
void M_mindustry_maps_Maps_lambda$importMap$0_mindustry_maps_Map_Array1_java_lang_Exception_java_lang_Exception(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void SM_mindustry_maps_Maps_lambda$saveMap$1_mindustry_maps_Map_arc_graphics_Pixmap(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_maps_Maps_lambda$saveMap$0_java_lang_String_mindustry_maps_Map_R_boolean(jcontext ctx, jobject param0, jobject param1);
void M_mindustry_maps_Maps_lambda$load$1_mindustry_mod_Mods$LoadedMod_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_maps_Maps_lambda$load$0_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
void M_mindustry_maps_Maps_lambda$new$0_mindustry_game_EventType$ClientLoadEvent(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_maps_Maps_lambda$byName$0_java_lang_String_mindustry_maps_Map_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_maps_Maps_lambda$moddedMaps$0_mindustry_maps_Map_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_maps_Maps_lambda$defaultMaps$0_mindustry_maps_Map_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_maps_Maps_lambda$customMaps$0_mindustry_maps_Map_R_boolean(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
