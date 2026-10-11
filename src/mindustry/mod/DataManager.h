#ifndef HEADER_mindustry_mod_DataManager
#define HEADER_mindustry_mod_DataManager

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_mod_DataManager {
	java_lang_Object parent;
	jref F_patcher;
	jref F_packer;
	jref F_soundLoader;
	jref F_bundleLoader;
	jref F_assets;
	jref F_orderedAssets;
	jref F_orderedExternalAssets;
} mindustry_mod_DataManager;

extern Class class_mindustry_mod_DataManager;


#define VTABLE_mindustry_mod_DataManager_hashCode_R_int 0
typedef jint (*func_mindustry_mod_DataManager_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_mod_DataManager_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataManager_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_mod_DataManager_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_mod_DataManager_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_mod_DataManager_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager_finalize 5
typedef void (*func_mindustry_mod_DataManager_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager_notify 6
typedef void (*func_mindustry_mod_DataManager_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager_notifyAll 7
typedef void (*func_mindustry_mod_DataManager_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager_wait 8
typedef void (*func_mindustry_mod_DataManager_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager_wait_long 9
typedef void (*func_mindustry_mod_DataManager_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_mod_DataManager_wait_long_int 10
typedef void (*func_mindustry_mod_DataManager_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_mod_DataManager_getAudioName_arc_files_Fi_R_java_lang_String 11
typedef jobject (*func_mindustry_mod_DataManager_getAudioName_arc_files_Fi_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataManager_reloadContent_boolean 12
typedef void (*func_mindustry_mod_DataManager_reloadContent_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_mod_DataManager_regenerateContentSprites_boolean 13
typedef void (*func_mindustry_mod_DataManager_regenerateContentSprites_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_mod_DataManager_reloadPatches_arc_struct_Seq 14
typedef void (*func_mindustry_mod_DataManager_reloadPatches_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataManager_reloadImages 15
typedef void (*func_mindustry_mod_DataManager_reloadImages)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager_reloadImages_arc_struct_Seq 16
typedef void (*func_mindustry_mod_DataManager_reloadImages_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataManager_addTexture_java_lang_String_Array1_byte 17
typedef void (*func_mindustry_mod_DataManager_addTexture_java_lang_String_Array1_byte)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_DataManager_removeTexture_java_lang_String 18
typedef void (*func_mindustry_mod_DataManager_removeTexture_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataManager_reloadAudio 19
typedef void (*func_mindustry_mod_DataManager_reloadAudio)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager_load_arc_struct_Seq 20
typedef void (*func_mindustry_mod_DataManager_load_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataManager_unload 21
typedef void (*func_mindustry_mod_DataManager_unload)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager_rebuildOrderedAssets 22
typedef void (*func_mindustry_mod_DataManager_rebuildOrderedAssets)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager_getMissingAssets_R_arc_struct_Seq 23
typedef jobject (*func_mindustry_mod_DataManager_getMissingAssets_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager_getAllAssets_R_arc_struct_Seq 24
typedef jobject (*func_mindustry_mod_DataManager_getAllAssets_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager_hasAssetPath_mindustry_mod_data_DataAssetType_java_lang_String_R_boolean 25
typedef jbool (*func_mindustry_mod_DataManager_hasAssetPath_mindustry_mod_data_DataAssetType_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_DataManager_hasAssetName_mindustry_mod_data_DataAssetType_java_lang_String_R_boolean 26
typedef jbool (*func_mindustry_mod_DataManager_hasAssetName_mindustry_mod_data_DataAssetType_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_DataManager_hasAssetNameOrPath_mindustry_mod_data_DataAssetType_java_lang_String_java_lang_String_R_boolean 27
typedef jbool (*func_mindustry_mod_DataManager_hasAssetNameOrPath_mindustry_mod_data_DataAssetType_java_lang_String_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_mod_DataManager_hasExternalAssets_R_boolean 28
typedef jbool (*func_mindustry_mod_DataManager_hasExternalAssets_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager_getAllExternalAssets_R_arc_struct_Seq 29
typedef jobject (*func_mindustry_mod_DataManager_getAllExternalAssets_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager_isPatched_java_lang_Object_R_boolean 30
typedef jbool (*func_mindustry_mod_DataManager_isPatched_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq 31
typedef jobject (*func_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataManager_clearGeneratedImages 32
typedef void (*func_mindustry_mod_DataManager_clearGeneratedImages)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager_getImages_R_arc_struct_Seq 33
typedef jobject (*func_mindustry_mod_DataManager_getImages_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager_getPatches_R_arc_struct_Seq 34
typedef jobject (*func_mindustry_mod_DataManager_getPatches_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager_getMusic_R_arc_struct_Seq 35
typedef jobject (*func_mindustry_mod_DataManager_getMusic_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager_getSounds_R_arc_struct_Seq 36
typedef jobject (*func_mindustry_mod_DataManager_getSounds_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager_getBundles_R_arc_struct_Seq 37
typedef jobject (*func_mindustry_mod_DataManager_getBundles_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataManager_getContent_R_arc_struct_Seq 38
typedef jobject (*func_mindustry_mod_DataManager_getContent_R_arc_struct_Seq)(jcontext ctx, jobject self);

void mark_mindustry_mod_DataManager(jobject object, jint mark, jint depth);
void clinit_mindustry_mod_DataManager(jcontext ctx);
void init_mindustry_mod_DataManager(jcontext ctx, jobject self);
jobject M_mindustry_mod_DataManager_getAudioName_arc_files_Fi_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_DataManager_reloadContent_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_mod_DataManager_regenerateContentSprites_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_mod_DataManager_reloadPatches_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_DataManager_reloadImages(jcontext ctx, jobject self);
void M_mindustry_mod_DataManager_reloadImages_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_DataManager_addTexture_java_lang_String_Array1_byte(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_mod_DataManager_removeTexture_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_DataManager_reloadAudio(jcontext ctx, jobject self);
void M_mindustry_mod_DataManager_load_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_DataManager_unload(jcontext ctx, jobject self);
void M_mindustry_mod_DataManager_rebuildOrderedAssets(jcontext ctx, jobject self);
jobject M_mindustry_mod_DataManager_getMissingAssets_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_mindustry_mod_DataManager_getAllAssets_R_arc_struct_Seq(jcontext ctx, jobject self);
jbool M_mindustry_mod_DataManager_hasAssetPath_mindustry_mod_data_DataAssetType_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_mindustry_mod_DataManager_hasAssetName_mindustry_mod_data_DataAssetType_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_mindustry_mod_DataManager_hasAssetNameOrPath_mindustry_mod_data_DataAssetType_java_lang_String_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jbool M_mindustry_mod_DataManager_hasExternalAssets_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_mod_DataManager_getAllExternalAssets_R_arc_struct_Seq(jcontext ctx, jobject self);
jbool M_mindustry_mod_DataManager_isPatched_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_mod_DataManager_getAssets_mindustry_mod_data_DataAssetType_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_DataManager_clearGeneratedImages(jcontext ctx, jobject self);
jobject M_mindustry_mod_DataManager_getImages_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_mindustry_mod_DataManager_getPatches_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_mindustry_mod_DataManager_getMusic_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_mindustry_mod_DataManager_getSounds_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_mindustry_mod_DataManager_getBundles_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_mindustry_mod_DataManager_getContent_R_arc_struct_Seq(jcontext ctx, jobject self);
jbool SM_mindustry_mod_DataManager_lambda$hasAssetNameOrPath$0_java_lang_String_java_lang_String_mindustry_mod_data_DataAsset_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2);
jbool SM_mindustry_mod_DataManager_lambda$hasAssetName$0_java_lang_String_mindustry_mod_data_DataAsset_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_mod_DataManager_lambda$hasAssetPath$0_java_lang_String_mindustry_mod_data_DataAsset_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_mod_DataManager_lambda$getMissingAssets$0_mindustry_mod_data_DataAsset_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_mod_DataManager_lambda$regenerateContentSprites$3_java_lang_String_arc_graphics_g2d_PixmapRegion(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_mod_DataManager_lambda$regenerateContentSprites$2_arc_struct_ObjectSet_arc_struct_ObjectMap_mindustry_ctype_UnlockableContent_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2);
jbool SM_mindustry_mod_DataManager_lambda$regenerateContentSprites$1_arc_struct_ObjectSet_arc_struct_ObjectSet_mindustry_mod_data_ImageAsset_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2);
jbool SM_mindustry_mod_DataManager_lambda$regenerateContentSprites$0_mindustry_ctype_Content_R_boolean(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
