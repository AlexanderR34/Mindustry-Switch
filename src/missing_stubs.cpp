#include "Clearwing.h"
#include "ffi.h"

extern "C" {

ffi_type ffi_type_void = { 0, 0, 0, nullptr };
ffi_type ffi_type_uint8 = { 1, 1, 1, nullptr };
ffi_type ffi_type_sint8 = { 1, 1, 2, nullptr };
ffi_type ffi_type_uint16 = { 2, 2, 3, nullptr };
ffi_type ffi_type_sint16 = { 2, 2, 4, nullptr };
ffi_type ffi_type_uint32 = { 4, 4, 5, nullptr };
ffi_type ffi_type_sint32 = { 4, 4, 6, nullptr };
ffi_type ffi_type_uint64 = { 8, 8, 7, nullptr };
ffi_type ffi_type_sint64 = { 8, 8, 8, nullptr };
ffi_type ffi_type_float = { 4, 4, 9, nullptr };
ffi_type ffi_type_double = { 8, 8, 10, nullptr };
ffi_type ffi_type_pointer = { 8, 8, 11, nullptr };

static uint64_t dummy_hb_storage[32] = {0};
void* hb_blob_create(...) { return dummy_hb_storage; }
void hb_blob_destroy(...) {}
void hb_buffer_add_utf8(...) {}
void hb_buffer_clear_contents(...) {}
void* hb_buffer_create(...) { return dummy_hb_storage; }
void hb_buffer_destroy(...) {}
void* hb_buffer_get_glyph_infos(...) { return nullptr; }
void* hb_buffer_get_glyph_positions(...) { return nullptr; }
unsigned int hb_buffer_get_length(...) { return 0; }
void hb_buffer_guess_segment_properties(...) {}
void* hb_face_create(...) { return dummy_hb_storage; }
void* hb_face_create_for_tables(...) { return dummy_hb_storage; }
void hb_face_destroy(...) {}
void hb_face_set_index(...) {}
void hb_face_set_upem(...) {}
void* hb_font_create(...) { return dummy_hb_storage; }
void hb_font_destroy(...) {}
void* hb_font_get_face(...) { return dummy_hb_storage; }
void hb_font_set_scale(...) {}
unsigned int hb_ot_layout_collect_lookups(...) { return 0; }
void hb_ot_layout_lookup_collect_glyphs(...) {}
unsigned int hb_ot_layout_lookup_would_substitute(...) { return 0; }
void hb_ot_tags_from_script_and_language(...) {}
void* hb_set_create(...) { return dummy_hb_storage; }
void hb_set_destroy(...) {}
unsigned int hb_set_is_empty(...) { return 1; }
unsigned int hb_set_next(...) { return 0; }
unsigned int hb_set_get_population(...) { return 0; }
void hb_set_subtract(...) {}
void hb_shape(...) {}
void BZ2_bzDecompress(...) {}
void BZ2_bzDecompressEnd(...) {}
void BZ2_bzDecompressInit(...) {}
void M_arc_backend_sdl_SdlApplication_lambda$loop$0_arc_ApplicationListener(...) {}
void M_arc_net_NetListener$LagListener_lambda$queue$0(...) {}
void SM_arc_backend_sdl_SdlApplication_lambda$cleanup$0_arc_ApplicationListener(...) {}
void SM_arc_backend_sdl_SdlApplication_lambda$openFolder$0_java_lang_String(...) {}
void SM_arc_backend_sdl_SdlApplication_lambda$openURI$0_java_lang_String(...) {}
jobject SM_arc_backend_sdl_SdlApplication_lambda$restartMac$0_java_util_Map$Entry_R_java_lang_String(...) { return nullptr; }
jobject SM_arc_backend_sdl_SdlApplication_lambda$restartMac$1_int_R_Array1_java_lang_String(...) { return nullptr; }
jobject SM_arc_net_dns_ArcDns_getSrvRecords_java_lang_String_R_arc_struct_Seq(...) { return nullptr; }
jobject SM_arc_util_NativeUtils_getEnv_java_lang_String_R_java_lang_String(...) { return nullptr; }
jint SM_arc_util_NativeUtils_setEnv_java_lang_String_java_lang_String_boolean_R_int(...) { return 0; }
jint SM_arc_util_NativeUtils_unsetEnv_java_lang_String_R_int(...) { return 0; }
void SM_arc_util_UnsafeBuffers_copy_java_nio_Buffer_int_java_nio_Buffer_int_int(...) {}
void SM_mindustry_mod_Mods_lambda$buildFiles$0_mindustry_mod_Mods$LoadedMod_boolean_java_lang_String_arc_files_Fi(...) {}
jint SM_mindustry_mod_Mods_lambda$checkWarnings$0_mindustry_mod_Mods$LoadedMod_R_boolean(...) { return 0; }
jint SM_mindustry_mod_Mods_lambda$eachClass$0_mindustry_mod_Mods$LoadedMod_R_boolean(...) { return 0; }
void SM_mindustry_mod_Mods_lambda$eachClass$2_arc_func_Cons_mindustry_mod_Mods$LoadedMod(...) {}
jint SM_mindustry_mod_Mods_lambda$getMod$0_java_lang_String_mindustry_mod_Mods$LoadedMod_R_boolean(...) { return 0; }
jint SM_mindustry_mod_Mods_lambda$getMod$1_java_lang_Class_mindustry_mod_Mods$LoadedMod_R_boolean(...) { return 0; }
jint SM_mindustry_mod_Mods_lambda$getModStrings$0_mindustry_mod_Mods$LoadedMod_R_boolean(...) { return 0; }
jobject SM_mindustry_mod_Mods_lambda$getModStrings$1_mindustry_mod_Mods$LoadedMod_R_java_lang_String(...) { return nullptr; }
void SM_mindustry_mod_Mods_lambda$listFiles$0_java_lang_String_arc_func_Cons2_mindustry_mod_Mods$LoadedMod(...) {}
jint SM_mindustry_mod_Mods_lambda$loadAsync$1_arc_files_Fi_R_boolean(...) { return 0; }
jint SM_mindustry_mod_Mods_lambda$loadAsync$2_arc_files_Fi_R_boolean(...) { return 0; }
jint SM_mindustry_mod_Mods_lambda$loadAsync$3_mindustry_mod_Mods$1RegionEntry_R_int(...) { return 0; }
void SM_mindustry_mod_Mods_lambda$loadAsync$5_mindustry_graphics_MultiPacker_mindustry_ctype_Content(...) {}
void SM_mindustry_mod_Mods_lambda$loadAsync$7_arc_struct_ObjectFloatMap$Entry(...) {}
jint SM_mindustry_mod_Mods_lambda$loadContent$0_arc_files_Fi_R_boolean(...) { return 0; }
jint SM_mindustry_mod_Mods_lambda$loadMod$0_java_lang_String_mindustry_mod_Mods$LoadedMod_R_boolean(...) { return 0; }
jint SM_mindustry_mod_Mods_lambda$loadModPatches$0_arc_files_Fi_R_boolean(...) { return 0; }
jobject SM_mindustry_mod_Mods_lambda$loadModPatches$1_arc_files_Fi_R_mindustry_mod_data_PatchAsset(...) { return nullptr; }
jint SM_mindustry_mod_Mods_lambda$loadScripts$1_arc_files_Fi_R_boolean(...) { return 0; }
void SM_mindustry_mod_Mods_lambda$loadScripts$2_arc_files_Fi_mindustry_mod_Mods$LoadedMod_java_lang_Throwable(...) {}
void SM_mindustry_mod_Mods_lambda$loadScripts$3_mindustry_mod_Mods$LoadedMod(...) {}
jint SM_mindustry_mod_Mods_lambda$locateMod$0_java_lang_String_mindustry_mod_Mods$LoadedMod_R_boolean(...) { return 0; }
jobject SM_mindustry_mod_Mods_lambda$orderedMods$0_mindustry_mod_Mods$LoadedMod_R_java_lang_String(...) { return nullptr; }
jobject SM_mindustry_mod_Mods_lambda$orderedMods$1_mindustry_mod_Mods$LoadedMod_R_mindustry_mod_Mods$ModMeta(...) { return nullptr; }
jint SM_mindustry_mod_Mods_lambda$reload$0_mindustry_mod_Mods$LoadedMod_R_boolean(...) { return 0; }
jint SM_mindustry_mod_Mods_lambda$reload$1_mindustry_mod_Mods$LoadedMod_R_boolean(...) { return 0; }
void SM_mindustry_mod_Mods_lambda$reload$2(...) {}
jint SM_mindustry_mod_Mods_lambda$sortMods$0_mindustry_mod_Mods$LoadedMod_R_int(...) { return 0; }
jobject SM_mindustry_mod_Mods_lambda$sortMods$1_mindustry_mod_Mods$LoadedMod_R_java_lang_String(...) { return nullptr; }
void SM_mindustry_mod_Mods_lambda$waitForMain$0_java_lang_Runnable_java_util_concurrent_CountDownLatch(...) {}
void SM_mindustry_net_ArcNetProvider_lambda$discoverServers$0_arc_struct_Seq_long_arc_func_Cons_java_net_DatagramPacket(...) {}
jint SM_mindustry_net_ArcNetProvider_lambda$discoverServers$1_java_net_DatagramPacket_java_net_InetAddress_R_boolean(...) { return 0; }
void SM_mindustry_net_ArcNetProvider_lambda$discoverServers$2_arc_func_Cons_mindustry_net_Host(...) {}
void SM_mindustry_net_ArcNetProvider_lambda$discoverServers$3_java_lang_Runnable(...) {}
jobject SM_mindustry_net_ArcNetProvider_lambda$new$0_R_java_net_DatagramPacket(...) { return nullptr; }
void SM_mindustry_net_ArcNetProvider_lambda$new$1_java_lang_Throwable(...) {}
void SM_mindustry_net_ArcNetProvider_lambda$new$3_java_net_InetAddress_arc_net_ServerDiscoveryHandler$ReponseHandler(...) {}
void SM_mindustry_net_ArcNetProvider_lambda$pingHost$0_arc_func_Cons_mindustry_net_Host(...) {}
void SM_mindustry_net_ArcNetProvider_lambda$pingHost$1_arc_func_Cons_mindustry_net_Host(...) {}
void SM_mindustry_net_ArcNetProvider_lambda$pingHost$2_arc_func_Cons_java_io_IOException(...) {}
void SM_mindustry_net_BeControl_lambda$checkUpdate$0_arc_func_Boolc_java_lang_Throwable(...) {}
jint SM_mindustry_net_BeControl_lambda$checkUpdate$2_arc_util_serialization_Jval_R_boolean(...) { return 0; }
void SM_mindustry_net_BeControl_lambda$checkUpdate$4_arc_func_Boolc(...) {}
void SM_mindustry_net_BeControl_lambda$download$0_java_lang_String_arc_files_Fi_arc_func_Intc_arc_func_Boolp_arc_func_Floatc_java_lang_Runnable_arc_func_Cons(...) {}
void SM_mindustry_net_BeControl_lambda$init$1_boolean(...) {}
jint SM_mindustry_net_BeControl_lambda$init$2_arc_files_Fi_arc_files_Fi_R_boolean(...) { return 0; }
void SM_mindustry_net_BeControl_lambda$showUpdateDialog$11_int(...) {}
void SM_mindustry_net_BeControl_lambda$showUpdateDialog$12_int(...) {}
void SM_mindustry_net_BeControl_lambda$showUpdateDialog$13_float(...) {}
jint SM_mindustry_net_BeControl_lambda$showUpdateDialog$14_R_boolean(...) { return 0; }
void SM_mindustry_net_BeControl_lambda$showUpdateDialog$15_arc_files_Fi_arc_files_Fi(...) {}
void SM_mindustry_net_BeControl_lambda$showUpdateDialog$16_arc_files_Fi_arc_files_Fi(...) {}
void SM_mindustry_net_BeControl_lambda$showUpdateDialog$1_Array1_int_int(...) {}
void SM_mindustry_net_BeControl_lambda$showUpdateDialog$2_Array1_float_float(...) {}
jint SM_mindustry_net_BeControl_lambda$showUpdateDialog$3_Array1_boolean_R_boolean(...) { return 0; }
void SM_mindustry_net_BeControl_lambda$showUpdateDialog$4_arc_files_Fi_arc_files_Fi(...) {}
void SM_mindustry_net_BeControl_lambda$showUpdateDialog$5_mindustry_ui_dialogs_BaseDialog_java_lang_Throwable(...) {}
jobject SM_mindustry_net_BeControl_lambda$showUpdateDialog$6_Array1_int_Array1_float_R_java_lang_CharSequence(...) { return nullptr; }
jobject SM_mindustry_net_BeControl_lambda$showUpdateDialog$7_R_arc_graphics_Color(...) { return nullptr; }
jfloat SM_mindustry_net_BeControl_lambda$showUpdateDialog$8_Array1_float_R_float(...) { return 0.0f; }
void SM_mindustry_net_BeControl_lambda$showUpdateDialog$9_Array1_boolean_mindustry_ui_dialogs_BaseDialog(...) {}
void clinit_arc_net_dns_ArcDns(jcontext ctx) {}
void clinit_mindustry_core_Platform$1(jcontext ctx) {}
void clinit_mindustry_mod_Mods(jcontext ctx) {}
void clinit_mindustry_net_ArcNetProvider(jcontext ctx) {}

}
