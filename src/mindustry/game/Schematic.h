#ifndef HEADER_mindustry_game_Schematic
#define HEADER_mindustry_game_Schematic

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/type/Publishable.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_Schematic {
	java_lang_Object parent;
	jref F_tiles;
	jref F_labels;
	jref F_tags;
	jint F_width;
	jint F_height;
	jref F_file;
	jref F_mod;
} mindustry_game_Schematic;

extern Class class_mindustry_game_Schematic;


#define VTABLE_mindustry_game_Schematic_hashCode_R_int 0
typedef jint (*func_mindustry_game_Schematic_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_Schematic_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematic_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_Schematic_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_Schematic_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_Schematic_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic_finalize 5
typedef void (*func_mindustry_game_Schematic_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic_notify 6
typedef void (*func_mindustry_game_Schematic_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic_notifyAll 7
typedef void (*func_mindustry_game_Schematic_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic_wait 8
typedef void (*func_mindustry_game_Schematic_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic_wait_long 9
typedef void (*func_mindustry_game_Schematic_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_Schematic_wait_long_int 10
typedef void (*func_mindustry_game_Schematic_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_Schematic_getSteamID_R_java_lang_String 11
typedef jobject (*func_mindustry_game_Schematic_getSteamID_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic_addSteamID_java_lang_String 12
typedef void (*func_mindustry_game_Schematic_addSteamID_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematic_removeSteamID 13
typedef void (*func_mindustry_game_Schematic_removeSteamID)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic_steamTitle_R_java_lang_String 14
typedef jobject (*func_mindustry_game_Schematic_steamTitle_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic_steamDescription_R_java_lang_String 15
typedef jobject (*func_mindustry_game_Schematic_steamDescription_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic_steamTag_R_java_lang_String 16
typedef jobject (*func_mindustry_game_Schematic_steamTag_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic_createSteamFolder_java_lang_String_R_arc_files_Fi 17
typedef jobject (*func_mindustry_game_Schematic_createSteamFolder_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematic_createSteamPreview_java_lang_String_R_arc_files_Fi 18
typedef jobject (*func_mindustry_game_Schematic_createSteamPreview_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematic_extraTags_R_arc_struct_Seq 19
typedef jobject (*func_mindustry_game_Schematic_extraTags_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic_hasSteamID_R_boolean 20
typedef jbool (*func_mindustry_game_Schematic_hasSteamID_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic_prePublish_R_boolean 21
typedef jbool (*func_mindustry_game_Schematic_prePublish_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic_compareTo_java_lang_Object_R_int 22
typedef jint (*func_mindustry_game_Schematic_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Schematic_powerProduction_R_float 23
typedef jfloat (*func_mindustry_game_Schematic_powerProduction_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic_powerConsumption_R_float 24
typedef jfloat (*func_mindustry_game_Schematic_powerConsumption_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic_requirements_R_mindustry_type_ItemSeq 25
typedef jobject (*func_mindustry_game_Schematic_requirements_R_mindustry_type_ItemSeq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic_hasCore_R_boolean 26
typedef jbool (*func_mindustry_game_Schematic_hasCore_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic_findCore_R_mindustry_world_blocks_storage_CoreBlock 27
typedef jobject (*func_mindustry_game_Schematic_findCore_R_mindustry_world_blocks_storage_CoreBlock)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic_name_R_java_lang_String 28
typedef jobject (*func_mindustry_game_Schematic_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic_description_R_java_lang_String 29
typedef jobject (*func_mindustry_game_Schematic_description_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic_save 30
typedef void (*func_mindustry_game_Schematic_save)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Schematic_compareTo_mindustry_game_Schematic_R_int 31
typedef jint (*func_mindustry_game_Schematic_compareTo_mindustry_game_Schematic_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_game_Schematic(jobject object, jint mark, jint depth);
void clinit_mindustry_game_Schematic(jcontext ctx);
void init_mindustry_game_Schematic_arc_struct_Seq_arc_struct_StringMap_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
jfloat M_mindustry_game_Schematic_powerProduction_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_game_Schematic_powerConsumption_R_float(jcontext ctx, jobject self);
jobject M_mindustry_game_Schematic_requirements_R_mindustry_type_ItemSeq(jcontext ctx, jobject self);
jbool M_mindustry_game_Schematic_hasCore_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_game_Schematic_findCore_R_mindustry_world_blocks_storage_CoreBlock(jcontext ctx, jobject self);
jobject M_mindustry_game_Schematic_name_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_game_Schematic_description_R_java_lang_String(jcontext ctx, jobject self);
void M_mindustry_game_Schematic_save(jcontext ctx, jobject self);
jobject M_mindustry_game_Schematic_getSteamID_R_java_lang_String(jcontext ctx, jobject self);
void M_mindustry_game_Schematic_addSteamID_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_Schematic_removeSteamID(jcontext ctx, jobject self);
jobject M_mindustry_game_Schematic_steamTitle_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_game_Schematic_steamDescription_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_game_Schematic_steamTag_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_game_Schematic_createSteamFolder_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_game_Schematic_createSteamPreview_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
jint M_mindustry_game_Schematic_compareTo_mindustry_game_Schematic_R_int(jcontext ctx, jobject self, jobject param0);
jint M_mindustry_game_Schematic_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_game_Schematic_lambda$findCore$0_mindustry_game_Schematic$Stile_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_game_Schematic_lambda$hasCore$0_mindustry_game_Schematic$Stile_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_game_Schematic_lambda$requirements$0_mindustry_type_ItemSeq_mindustry_game_Schematic$Stile(jcontext ctx, jobject param0, jobject param1);
jfloat SM_mindustry_game_Schematic_lambda$powerConsumption$0_mindustry_game_Schematic$Stile_R_float(jcontext ctx, jobject param0);
jfloat SM_mindustry_game_Schematic_lambda$powerProduction$0_mindustry_game_Schematic$Stile_R_float(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
