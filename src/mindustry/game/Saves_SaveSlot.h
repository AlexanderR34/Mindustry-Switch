#ifndef HEADER_mindustry_game_Saves$SaveSlot
#define HEADER_mindustry_game_Saves$SaveSlot

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_Saves$SaveSlot {
	java_lang_Object parent;
	jref F_file;
	jbool F_requestedPreview;
	jref F_meta;
	jref F_this$0;
} mindustry_game_Saves$SaveSlot;

extern Class class_mindustry_game_Saves$SaveSlot;


#define VTABLE_mindustry_game_Saves$SaveSlot_hashCode_R_int 0
typedef jint (*func_mindustry_game_Saves$SaveSlot_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_Saves$SaveSlot_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Saves$SaveSlot_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_Saves$SaveSlot_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_Saves$SaveSlot_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_Saves$SaveSlot_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_finalize 5
typedef void (*func_mindustry_game_Saves$SaveSlot_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_notify 6
typedef void (*func_mindustry_game_Saves$SaveSlot_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_notifyAll 7
typedef void (*func_mindustry_game_Saves$SaveSlot_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_wait 8
typedef void (*func_mindustry_game_Saves$SaveSlot_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_wait_long 9
typedef void (*func_mindustry_game_Saves$SaveSlot_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_Saves$SaveSlot_wait_long_int 10
typedef void (*func_mindustry_game_Saves$SaveSlot_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_Saves$SaveSlot_load 11
typedef void (*func_mindustry_game_Saves$SaveSlot_load)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_load_mindustry_world_WorldContext 12
typedef void (*func_mindustry_game_Saves$SaveSlot_load_mindustry_world_WorldContext)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Saves$SaveSlot_save 13
typedef void (*func_mindustry_game_Saves$SaveSlot_save)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_savePreview 14
typedef void (*func_mindustry_game_Saves$SaveSlot_savePreview)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_previewTexture_R_arc_graphics_Texture 15
typedef jobject (*func_mindustry_game_Saves$SaveSlot_previewTexture_R_arc_graphics_Texture)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_index_R_java_lang_String 16
typedef jobject (*func_mindustry_game_Saves$SaveSlot_index_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_previewFile_R_arc_files_Fi 17
typedef jobject (*func_mindustry_game_Saves$SaveSlot_previewFile_R_arc_files_Fi)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_loadPreviewFile_R_arc_files_Fi 18
typedef jobject (*func_mindustry_game_Saves$SaveSlot_loadPreviewFile_R_arc_files_Fi)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_isHidden_R_boolean 19
typedef jbool (*func_mindustry_game_Saves$SaveSlot_isHidden_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_getPlayTime_R_java_lang_String 20
typedef jobject (*func_mindustry_game_Saves$SaveSlot_getPlayTime_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_getTimestamp_R_long 21
typedef jlong (*func_mindustry_game_Saves$SaveSlot_getTimestamp_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_getDate_R_java_lang_String 22
typedef jobject (*func_mindustry_game_Saves$SaveSlot_getDate_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_getMap_R_mindustry_maps_Map 23
typedef jobject (*func_mindustry_game_Saves$SaveSlot_getMap_R_mindustry_maps_Map)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_cautiousLoad_java_lang_Runnable 24
typedef void (*func_mindustry_game_Saves$SaveSlot_cautiousLoad_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Saves$SaveSlot_getName_R_java_lang_String 25
typedef jobject (*func_mindustry_game_Saves$SaveSlot_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_setName_java_lang_String 26
typedef void (*func_mindustry_game_Saves$SaveSlot_setName_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Saves$SaveSlot_getMods_R_Array1_java_lang_String 27
typedef jobject (*func_mindustry_game_Saves$SaveSlot_getMods_R_Array1_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_getSector_R_mindustry_type_Sector 28
typedef jobject (*func_mindustry_game_Saves$SaveSlot_getSector_R_mindustry_type_Sector)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_isSector_R_boolean 29
typedef jbool (*func_mindustry_game_Saves$SaveSlot_isSector_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_mode_R_mindustry_game_Gamemode 30
typedef jobject (*func_mindustry_game_Saves$SaveSlot_mode_R_mindustry_game_Gamemode)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_getBuild_R_int 31
typedef jint (*func_mindustry_game_Saves$SaveSlot_getBuild_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_getWave_R_int 32
typedef jint (*func_mindustry_game_Saves$SaveSlot_getWave_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_isAutosave_R_boolean 33
typedef jbool (*func_mindustry_game_Saves$SaveSlot_isAutosave_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_setAutosave_boolean 34
typedef void (*func_mindustry_game_Saves$SaveSlot_setAutosave_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_game_Saves$SaveSlot_isBeingPlayed_R_boolean 35
typedef jbool (*func_mindustry_game_Saves$SaveSlot_isBeingPlayed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_hasExternalAssets_R_boolean 36
typedef jbool (*func_mindustry_game_Saves$SaveSlot_hasExternalAssets_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_importFile_arc_files_Fi 37
typedef void (*func_mindustry_game_Saves$SaveSlot_importFile_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Saves$SaveSlot_exportFile_arc_files_Fi 38
typedef void (*func_mindustry_game_Saves$SaveSlot_exportFile_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Saves$SaveSlot_delete 39
typedef void (*func_mindustry_game_Saves$SaveSlot_delete)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Saves$SaveSlot_lambda$savePreview$0 40
typedef void (*func_mindustry_game_Saves$SaveSlot_lambda$savePreview$0)(jcontext ctx, jobject self);

void mark_mindustry_game_Saves$SaveSlot(jobject object, jint mark, jint depth);
void clinit_mindustry_game_Saves$SaveSlot(jcontext ctx);
void init_mindustry_game_Saves$SaveSlot_mindustry_game_Saves_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_game_Saves$SaveSlot_load(jcontext ctx, jobject self);
void M_mindustry_game_Saves$SaveSlot_load_mindustry_world_WorldContext(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_Saves$SaveSlot_save(jcontext ctx, jobject self);
void M_mindustry_game_Saves$SaveSlot_savePreview(jcontext ctx, jobject self);
jobject M_mindustry_game_Saves$SaveSlot_previewTexture_R_arc_graphics_Texture(jcontext ctx, jobject self);
jobject M_mindustry_game_Saves$SaveSlot_index_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_game_Saves$SaveSlot_previewFile_R_arc_files_Fi(jcontext ctx, jobject self);
jobject M_mindustry_game_Saves$SaveSlot_loadPreviewFile_R_arc_files_Fi(jcontext ctx, jobject self);
jbool M_mindustry_game_Saves$SaveSlot_isHidden_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_game_Saves$SaveSlot_getPlayTime_R_java_lang_String(jcontext ctx, jobject self);
jlong M_mindustry_game_Saves$SaveSlot_getTimestamp_R_long(jcontext ctx, jobject self);
jobject M_mindustry_game_Saves$SaveSlot_getDate_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_game_Saves$SaveSlot_getMap_R_mindustry_maps_Map(jcontext ctx, jobject self);
void M_mindustry_game_Saves$SaveSlot_cautiousLoad_java_lang_Runnable(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_game_Saves$SaveSlot_getName_R_java_lang_String(jcontext ctx, jobject self);
void M_mindustry_game_Saves$SaveSlot_setName_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_game_Saves$SaveSlot_getMods_R_Array1_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_game_Saves$SaveSlot_getSector_R_mindustry_type_Sector(jcontext ctx, jobject self);
jbool M_mindustry_game_Saves$SaveSlot_isSector_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_game_Saves$SaveSlot_mode_R_mindustry_game_Gamemode(jcontext ctx, jobject self);
jint M_mindustry_game_Saves$SaveSlot_getBuild_R_int(jcontext ctx, jobject self);
jint M_mindustry_game_Saves$SaveSlot_getWave_R_int(jcontext ctx, jobject self);
jbool M_mindustry_game_Saves$SaveSlot_isAutosave_R_boolean(jcontext ctx, jobject self);
void M_mindustry_game_Saves$SaveSlot_setAutosave_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_mindustry_game_Saves$SaveSlot_isBeingPlayed_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_game_Saves$SaveSlot_hasExternalAssets_R_boolean(jcontext ctx, jobject self);
void M_mindustry_game_Saves$SaveSlot_importFile_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_Saves$SaveSlot_exportFile_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_Saves$SaveSlot_delete(jcontext ctx, jobject self);
void M_mindustry_game_Saves$SaveSlot_lambda$savePreview$0(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
