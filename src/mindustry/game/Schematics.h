#ifndef HEADER_mindustry_game_Schematics
#define HEADER_mindustry_game_Schematics

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/assets/Loadable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_Schematics {
	java_lang_Object parent;
	jref F_out;
	jref F_all;
	jref F_previews;
	jref F_errored;
	jref F_loadouts;
	jref F_defaultLoadouts;
	jref F_shadowBuffer;
	jref F_errorTexture;
	jlong F_lastClearTime;
} mindustry_game_Schematics;

extern Class class_mindustry_game_Schematics;

extern jobject SF_mindustry_game_Schematics_tmpSchem;
extern jobject SF_mindustry_game_Schematics_tmpSchem2;
extern jobject SF_mindustry_game_Schematics_header;
extern jbyte SF_mindustry_game_Schematics_version;
extern jbool SF_mindustry_game_Schematics_limitSchematicSize;
extern jint SF_mindustry_game_Schematics_padding;
extern jint SF_mindustry_game_Schematics_maxPreviewsMobile;
extern jint SF_mindustry_game_Schematics_resolution;

#define VTABLE_mindustry_game_Schematics_hashCode_R_int 0
typedef jint (*func_mindustry_game_Schematics_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_Schematics_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematics_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_Schematics_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_Schematics_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_Schematics_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics_finalize 5
typedef void (*func_mindustry_game_Schematics_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics_notify 6
typedef void (*func_mindustry_game_Schematics_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics_notifyAll 7
typedef void (*func_mindustry_game_Schematics_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics_wait 8
typedef void (*func_mindustry_game_Schematics_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics_wait_long 9
typedef void (*func_mindustry_game_Schematics_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_Schematics_wait_long_int 10
typedef void (*func_mindustry_game_Schematics_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_Schematics_loadAsync 11
typedef void (*func_mindustry_game_Schematics_loadAsync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics_loadSync 12
typedef void (*func_mindustry_game_Schematics_loadSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics_getName_R_java_lang_String 13
typedef jobject (*func_mindustry_game_Schematics_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics_getDependencies_R_arc_struct_Seq 14
typedef jobject (*func_mindustry_game_Schematics_getDependencies_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics_load 15
typedef void (*func_mindustry_game_Schematics_load)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics_loadLoadouts 16
typedef void (*func_mindustry_game_Schematics_loadLoadouts)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics_overwrite_mindustry_game_Schematic_mindustry_game_Schematic 17
typedef void (*func_mindustry_game_Schematics_overwrite_mindustry_game_Schematic_mindustry_game_Schematic)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_game_Schematics_loadFile_arc_files_Fi_R_mindustry_game_Schematic 18
typedef jobject (*func_mindustry_game_Schematics_loadFile_arc_files_Fi_R_mindustry_game_Schematic)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematics_all_R_arc_struct_Seq 19
typedef jobject (*func_mindustry_game_Schematics_all_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics_saveChanges_mindustry_game_Schematic 20
typedef void (*func_mindustry_game_Schematics_saveChanges_mindustry_game_Schematic)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematics_savePreview_mindustry_game_Schematic_arc_files_Fi 21
typedef void (*func_mindustry_game_Schematics_savePreview_mindustry_game_Schematic_arc_files_Fi)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_game_Schematics_getPreview_mindustry_game_Schematic_R_arc_graphics_Texture 22
typedef jobject (*func_mindustry_game_Schematics_getPreview_mindustry_game_Schematic_R_arc_graphics_Texture)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematics_hasPreview_mindustry_game_Schematic_R_boolean 23
typedef jbool (*func_mindustry_game_Schematics_hasPreview_mindustry_game_Schematic_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematics_getBuffer_mindustry_game_Schematic_R_arc_graphics_gl_FrameBuffer 24
typedef jobject (*func_mindustry_game_Schematics_getBuffer_mindustry_game_Schematic_R_arc_graphics_gl_FrameBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematics_toPlans_mindustry_game_Schematic_int_int_R_arc_struct_Seq 25
typedef jobject (*func_mindustry_game_Schematics_toPlans_mindustry_game_Schematic_int_int_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_mindustry_game_Schematics_toPlans_mindustry_game_Schematic_int_int_boolean_R_arc_struct_Seq 26
typedef jobject (*func_mindustry_game_Schematics_toPlans_mindustry_game_Schematic_int_int_boolean_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3);
#define VTABLE_mindustry_game_Schematics_getLoadouts_mindustry_world_blocks_storage_CoreBlock_R_arc_struct_Seq 27
typedef jobject (*func_mindustry_game_Schematics_getLoadouts_mindustry_world_blocks_storage_CoreBlock_R_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematics_getLoadouts_R_arc_struct_ObjectMap 28
typedef jobject (*func_mindustry_game_Schematics_getLoadouts_R_arc_struct_ObjectMap)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics_getDefaultLoadout_mindustry_world_blocks_storage_CoreBlock_R_mindustry_game_Schematic 29
typedef jobject (*func_mindustry_game_Schematics_getDefaultLoadout_mindustry_world_blocks_storage_CoreBlock_R_mindustry_game_Schematic)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematics_isDefaultLoadout_mindustry_game_Schematic_R_boolean 30
typedef jbool (*func_mindustry_game_Schematics_isDefaultLoadout_mindustry_game_Schematic_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematics_checkLoadout_mindustry_game_Schematic_boolean 31
typedef void (*func_mindustry_game_Schematics_checkLoadout_mindustry_game_Schematic_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_game_Schematics_getMaxLaunchSize_mindustry_world_Block_R_int 32
typedef jint (*func_mindustry_game_Schematics_getMaxLaunchSize_mindustry_world_Block_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematics_findFile_java_lang_String_R_arc_files_Fi 33
typedef jobject (*func_mindustry_game_Schematics_findFile_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematics_add_mindustry_game_Schematic 34
typedef void (*func_mindustry_game_Schematics_add_mindustry_game_Schematic)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematics_remove_mindustry_game_Schematic 35
typedef void (*func_mindustry_game_Schematics_remove_mindustry_game_Schematic)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematics_create_int_int_int_int_R_mindustry_game_Schematic 36
typedef jobject (*func_mindustry_game_Schematics_create_int_int_int_int_R_mindustry_game_Schematic)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_game_Schematics_writeBase64_mindustry_game_Schematic_R_java_lang_String 37
typedef jobject (*func_mindustry_game_Schematics_writeBase64_mindustry_game_Schematic_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematics_lambda$getBuffer$1_mindustry_game_Schematic$Stile_R_mindustry_entities_units_BuildPlan 38
typedef jobject (*func_mindustry_game_Schematics_lambda$getBuffer$1_mindustry_game_Schematic$Stile_R_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematics_lambda$loadLoadouts$0_mindustry_game_Schematic 39
typedef void (*func_mindustry_game_Schematics_lambda$loadLoadouts$0_mindustry_game_Schematic)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematics_lambda$load$2 40
typedef void (*func_mindustry_game_Schematics_lambda$load$2)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematics_lambda$load$1_mindustry_mod_Mods$LoadedMod_arc_files_Fi 41
typedef void (*func_mindustry_game_Schematics_lambda$load$1_mindustry_mod_Mods$LoadedMod_arc_files_Fi)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_game_Schematics_lambda$load$0_arc_files_Fi 42
typedef void (*func_mindustry_game_Schematics_lambda$load$0_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematics_lambda$new$0_mindustry_game_EventType$ClientLoadEvent 43
typedef void (*func_mindustry_game_Schematics_lambda$new$0_mindustry_game_EventType$ClientLoadEvent)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_game_Schematics(jobject object, jint mark, jint depth);
void clinit_mindustry_game_Schematics(jcontext ctx);
void init_mindustry_game_Schematics(jcontext ctx, jobject self);
void M_mindustry_game_Schematics_loadSync(jcontext ctx, jobject self);
void M_mindustry_game_Schematics_load(jcontext ctx, jobject self);
void M_mindustry_game_Schematics_loadLoadouts(jcontext ctx, jobject self);
void M_mindustry_game_Schematics_overwrite_mindustry_game_Schematic_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_game_Schematics_loadFile_arc_files_Fi_R_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_game_Schematics_all_R_arc_struct_Seq(jcontext ctx, jobject self);
void M_mindustry_game_Schematics_saveChanges_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_Schematics_savePreview_mindustry_game_Schematic_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_game_Schematics_getPreview_mindustry_game_Schematic_R_arc_graphics_Texture(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_game_Schematics_hasPreview_mindustry_game_Schematic_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_game_Schematics_getBuffer_mindustry_game_Schematic_R_arc_graphics_gl_FrameBuffer(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_game_Schematics_toPlans_mindustry_game_Schematic_int_int_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_mindustry_game_Schematics_toPlans_mindustry_game_Schematic_int_int_boolean_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3);
jobject M_mindustry_game_Schematics_getLoadouts_mindustry_world_blocks_storage_CoreBlock_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_game_Schematics_getLoadouts_R_arc_struct_ObjectMap(jcontext ctx, jobject self);
jobject M_mindustry_game_Schematics_getDefaultLoadout_mindustry_world_blocks_storage_CoreBlock_R_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_game_Schematics_isDefaultLoadout_mindustry_game_Schematic_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_Schematics_checkLoadout_mindustry_game_Schematic_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jint M_mindustry_game_Schematics_getMaxLaunchSize_mindustry_world_Block_R_int(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_game_Schematics_findFile_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_Schematics_add_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_Schematics_remove_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_game_Schematics_create_int_int_int_int_R_mindustry_game_Schematic(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jobject M_mindustry_game_Schematics_writeBase64_mindustry_game_Schematic_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_game_Schematics_placeLaunchLoadout_int_int(jcontext ctx, jint param0, jint param1);
void SM_mindustry_game_Schematics_placeLoadout_mindustry_game_Schematic_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_mindustry_game_Schematics_placeLoadout_mindustry_game_Schematic_int_int_mindustry_game_Team(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3);
void SM_mindustry_game_Schematics_placeLoadout_mindustry_game_Schematic_int_int_mindustry_game_Team_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jbool param4);
void SM_mindustry_game_Schematics_place_mindustry_game_Schematic_int_int_mindustry_game_Team(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3);
void SM_mindustry_game_Schematics_place_mindustry_game_Schematic_int_int_mindustry_game_Team_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jbool param4);
jbool SM_mindustry_game_Schematics_isSchematic_arc_files_Fi_R_boolean(jcontext ctx, jobject param0);
jobject SM_mindustry_game_Schematics_readBase64_java_lang_String_R_mindustry_game_Schematic(jcontext ctx, jobject param0);
jobject SM_mindustry_game_Schematics_read_arc_files_Fi_R_mindustry_game_Schematic(jcontext ctx, jobject param0);
jobject SM_mindustry_game_Schematics_read_java_io_InputStream_R_mindustry_game_Schematic(jcontext ctx, jobject param0);
void SM_mindustry_game_Schematics_write_mindustry_game_Schematic_arc_files_Fi(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_game_Schematics_write_mindustry_game_Schematic_java_io_OutputStream(jcontext ctx, jobject param0, jobject param1);
jobject SM_mindustry_game_Schematics_mapConfig_mindustry_world_Block_int_int_R_java_lang_Object(jcontext ctx, jobject param0, jint param1, jint param2);
jobject SM_mindustry_game_Schematics_rotate_mindustry_game_Schematic_int_R_mindustry_game_Schematic(jcontext ctx, jobject param0, jint param1);
jobject SM_mindustry_game_Schematics_rotated_mindustry_game_Schematic_boolean_R_mindustry_game_Schematic(jcontext ctx, jobject param0, jbool param1);
void SM_mindustry_game_Schematics_lambda$rotated$0_int_int_int_mindustry_game_Schematic$Stile(jcontext ctx, jint param0, jint param1, jint param2, jobject param3);
void SM_mindustry_game_Schematics_lambda$rotated$1_int_arc_math_geom_Point2(jcontext ctx, jint param0, jobject param1);
void SM_mindustry_game_Schematics_lambda$write$0_arc_struct_OrderedSet_mindustry_game_Schematic$Stile(jcontext ctx, jobject param0, jobject param1);
jobject SM_mindustry_game_Schematics_lambda$read$0_arc_struct_IntMap_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content(jcontext ctx, jobject param0, jobject param1, jint param2);
void SM_mindustry_game_Schematics_lambda$place$0_int_int_boolean_mindustry_game_Team_mindustry_game_Schematic$Stile(jcontext ctx, jint param0, jint param1, jbool param2, jobject param3, jobject param4);
void SM_mindustry_game_Schematics_lambda$placeLoadout$2_int_int_boolean_arc_struct_Seq_mindustry_game_Team_mindustry_game_Schematic$Stile(jcontext ctx, jint param0, jint param1, jbool param2, jobject param3, jobject param4, jobject param5);
jfloat SM_mindustry_game_Schematics_lambda$placeLoadout$1_mindustry_game_Schematic$Stile_R_float(jcontext ctx, jobject param0);
jbool SM_mindustry_game_Schematics_lambda$placeLoadout$0_mindustry_game_Schematic$Stile_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_game_Schematics_lambda$remove$0_mindustry_game_Schematic_mindustry_world_blocks_storage_CoreBlock_arc_struct_Seq(jcontext ctx, jobject param0, jobject param1, jobject param2);
jbool SM_mindustry_game_Schematics_lambda$checkLoadout$2_mindustry_game_Schematic$Stile_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_game_Schematics_lambda$checkLoadout$1_mindustry_game_Schematic$Stile_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_game_Schematics_lambda$checkLoadout$0_mindustry_game_Schematic$Stile_R_boolean(jcontext ctx, jobject param0);
jint SM_mindustry_game_Schematics_lambda$toPlans$2_mindustry_entities_units_BuildPlan_R_int(jcontext ctx, jobject param0);
jbool SM_mindustry_game_Schematics_lambda$toPlans$1_boolean_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jbool param0, jobject param1);
jobject SM_mindustry_game_Schematics_lambda$toPlans$0_int_mindustry_game_Schematic_int_mindustry_game_Schematic$Stile_R_mindustry_entities_units_BuildPlan(jcontext ctx, jint param0, jobject param1, jint param2, jobject param3);
void SM_mindustry_game_Schematics_lambda$getBuffer$3_mindustry_input_InputHandler$QueryEachable_mindustry_entities_units_BuildPlan(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_game_Schematics_lambda$getBuffer$2_mindustry_input_InputHandler$QueryEachable_mindustry_entities_units_BuildPlan(jcontext ctx, jobject param0, jobject param1);
jobject M_mindustry_game_Schematics_lambda$getBuffer$1_mindustry_game_Schematic$Stile_R_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_game_Schematics_lambda$getBuffer$0_mindustry_game_Schematic$Stile(jcontext ctx, jobject param0);
void SM_mindustry_game_Schematics_lambda$overwrite$0_mindustry_game_Schematic_mindustry_world_blocks_storage_CoreBlock_arc_struct_Seq(jcontext ctx, jobject param0, jobject param1, jobject param2);
void M_mindustry_game_Schematics_lambda$loadLoadouts$0_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_Schematics_lambda$load$2(jcontext ctx, jobject self);
void M_mindustry_game_Schematics_lambda$load$1_mindustry_mod_Mods$LoadedMod_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_game_Schematics_lambda$load$0_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_Schematics_lambda$new$0_mindustry_game_EventType$ClientLoadEvent(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
