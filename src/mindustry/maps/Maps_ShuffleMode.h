#ifndef HEADER_mindustry_maps_Maps$ShuffleMode
#define HEADER_mindustry_maps_Maps$ShuffleMode

#include "Clearwing.h"
#include "java/lang/Enum.h"
#include "mindustry/maps/Maps_MapProvider.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_maps_Maps$ShuffleMode {
	java_lang_Enum parent;
	jref F_provider;
} mindustry_maps_Maps$ShuffleMode;

extern Class class_mindustry_maps_Maps$ShuffleMode;

extern jobject SF_mindustry_maps_Maps$ShuffleMode_none;
extern jobject SF_mindustry_maps_Maps$ShuffleMode_all;
extern jobject SF_mindustry_maps_Maps$ShuffleMode_custom;
extern jobject SF_mindustry_maps_Maps$ShuffleMode_builtin;
extern jobject SF_mindustry_maps_Maps$ShuffleMode_$VALUES;

#define VTABLE_mindustry_maps_Maps$ShuffleMode_hashCode_R_int 0
typedef jint (*func_mindustry_maps_Maps$ShuffleMode_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Maps$ShuffleMode_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_maps_Maps$ShuffleMode_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Maps$ShuffleMode_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_maps_Maps$ShuffleMode_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Maps$ShuffleMode_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_maps_Maps$ShuffleMode_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Maps$ShuffleMode_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_maps_Maps$ShuffleMode_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Maps$ShuffleMode_finalize 5
typedef void (*func_mindustry_maps_Maps$ShuffleMode_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Maps$ShuffleMode_notify 6
typedef void (*func_mindustry_maps_Maps$ShuffleMode_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Maps$ShuffleMode_notifyAll 7
typedef void (*func_mindustry_maps_Maps$ShuffleMode_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Maps$ShuffleMode_wait 8
typedef void (*func_mindustry_maps_Maps$ShuffleMode_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Maps$ShuffleMode_wait_long 9
typedef void (*func_mindustry_maps_Maps$ShuffleMode_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_maps_Maps$ShuffleMode_wait_long_int 10
typedef void (*func_mindustry_maps_Maps$ShuffleMode_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_maps_Maps$ShuffleMode_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_maps_Maps$ShuffleMode_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Maps$ShuffleMode_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_maps_Maps$ShuffleMode_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_Maps$ShuffleMode_name_R_java_lang_String 13
typedef jobject (*func_mindustry_maps_Maps$ShuffleMode_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Maps$ShuffleMode_ordinal_R_int 14
typedef jint (*func_mindustry_maps_Maps$ShuffleMode_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Maps$ShuffleMode_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_maps_Maps$ShuffleMode_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_Maps$ShuffleMode_next_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map 16
typedef jobject (*func_mindustry_maps_Maps$ShuffleMode_next_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_maps_Maps$ShuffleMode(jobject object, jint mark, jint depth);
void clinit_mindustry_maps_Maps$ShuffleMode(jcontext ctx);
jobject SM_mindustry_maps_Maps$ShuffleMode_values_R_Array1_mindustry_maps_Maps$ShuffleMode(jcontext ctx);
jobject SM_mindustry_maps_Maps$ShuffleMode_valueOf_java_lang_String_R_mindustry_maps_Maps$ShuffleMode(jcontext ctx, jobject param0);
void init_mindustry_maps_Maps$ShuffleMode_java_lang_String_int_mindustry_maps_Maps$MapProvider(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
jobject SM_mindustry_maps_Maps$ShuffleMode_next_mindustry_game_Gamemode_mindustry_maps_Map_Array1_arc_struct_Seq_R_mindustry_maps_Map(jcontext ctx, jobject param0, jobject param1, jobject param2);
jbool SM_mindustry_maps_Maps$ShuffleMode_valid_mindustry_game_Gamemode_mindustry_maps_Map_R_boolean(jcontext ctx, jobject param0, jobject param1);
jobject M_mindustry_maps_Maps$ShuffleMode_next_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject SM_mindustry_maps_Maps$ShuffleMode_$values_R_Array1_mindustry_maps_Maps$ShuffleMode(jcontext ctx);
jbool SM_mindustry_maps_Maps$ShuffleMode_lambda$next$0_mindustry_maps_Map_arc_struct_Seq_mindustry_game_Gamemode_mindustry_maps_Map_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jobject SM_mindustry_maps_Maps$ShuffleMode_lambda$static$3_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map(jcontext ctx, jobject param0, jobject param1);
jobject SM_mindustry_maps_Maps$ShuffleMode_lambda$static$2_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map(jcontext ctx, jobject param0, jobject param1);
jobject SM_mindustry_maps_Maps$ShuffleMode_lambda$static$1_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map(jcontext ctx, jobject param0, jobject param1);
jobject SM_mindustry_maps_Maps$ShuffleMode_lambda$static$0_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
