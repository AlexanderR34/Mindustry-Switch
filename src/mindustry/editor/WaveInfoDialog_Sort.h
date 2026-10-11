#ifndef HEADER_mindustry_editor_WaveInfoDialog$Sort
#define HEADER_mindustry_editor_WaveInfoDialog$Sort

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_editor_WaveInfoDialog$Sort {
	java_lang_Enum parent;
	jref F_sort;
	jref F_secondary;
} mindustry_editor_WaveInfoDialog$Sort;

extern Class class_mindustry_editor_WaveInfoDialog$Sort;

extern jobject SF_mindustry_editor_WaveInfoDialog$Sort_begin;
extern jobject SF_mindustry_editor_WaveInfoDialog$Sort_health;
extern jobject SF_mindustry_editor_WaveInfoDialog$Sort_type;
extern jobject SF_mindustry_editor_WaveInfoDialog$Sort_all;
extern jobject SF_mindustry_editor_WaveInfoDialog$Sort_$VALUES;

#define VTABLE_mindustry_editor_WaveInfoDialog$Sort_hashCode_R_int 0
typedef jint (*func_mindustry_editor_WaveInfoDialog$Sort_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_WaveInfoDialog$Sort_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_editor_WaveInfoDialog$Sort_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_WaveInfoDialog$Sort_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_editor_WaveInfoDialog$Sort_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_WaveInfoDialog$Sort_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_editor_WaveInfoDialog$Sort_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_WaveInfoDialog$Sort_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_editor_WaveInfoDialog$Sort_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_WaveInfoDialog$Sort_finalize 5
typedef void (*func_mindustry_editor_WaveInfoDialog$Sort_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_WaveInfoDialog$Sort_notify 6
typedef void (*func_mindustry_editor_WaveInfoDialog$Sort_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_WaveInfoDialog$Sort_notifyAll 7
typedef void (*func_mindustry_editor_WaveInfoDialog$Sort_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_WaveInfoDialog$Sort_wait 8
typedef void (*func_mindustry_editor_WaveInfoDialog$Sort_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_WaveInfoDialog$Sort_wait_long 9
typedef void (*func_mindustry_editor_WaveInfoDialog$Sort_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_editor_WaveInfoDialog$Sort_wait_long_int 10
typedef void (*func_mindustry_editor_WaveInfoDialog$Sort_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_editor_WaveInfoDialog$Sort_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_editor_WaveInfoDialog$Sort_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_WaveInfoDialog$Sort_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_editor_WaveInfoDialog$Sort_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_WaveInfoDialog$Sort_name_R_java_lang_String 13
typedef jobject (*func_mindustry_editor_WaveInfoDialog$Sort_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_WaveInfoDialog$Sort_ordinal_R_int 14
typedef jint (*func_mindustry_editor_WaveInfoDialog$Sort_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_WaveInfoDialog$Sort_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_editor_WaveInfoDialog$Sort_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_mindustry_editor_WaveInfoDialog$Sort(jobject object, jint mark, jint depth);
void clinit_mindustry_editor_WaveInfoDialog$Sort(jcontext ctx);
jobject SM_mindustry_editor_WaveInfoDialog$Sort_values_R_Array1_mindustry_editor_WaveInfoDialog$Sort(jcontext ctx);
jobject SM_mindustry_editor_WaveInfoDialog$Sort_valueOf_java_lang_String_R_mindustry_editor_WaveInfoDialog$Sort(jcontext ctx, jobject param0);
void init_mindustry_editor_WaveInfoDialog$Sort_java_lang_String_int_arc_func_Floatf(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
void init_mindustry_editor_WaveInfoDialog$Sort_java_lang_String_int_arc_func_Floatf_arc_func_Floatf(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3);
jobject SM_mindustry_editor_WaveInfoDialog$Sort_$values_R_Array1_mindustry_editor_WaveInfoDialog$Sort(jcontext ctx);
jfloat SM_mindustry_editor_WaveInfoDialog$Sort_lambda$new$0_mindustry_game_SpawnGroup_R_float(jcontext ctx, jobject param0);
jfloat SM_mindustry_editor_WaveInfoDialog$Sort_lambda$static$3_mindustry_game_SpawnGroup_R_float(jcontext ctx, jobject param0);
jfloat SM_mindustry_editor_WaveInfoDialog$Sort_lambda$static$2_mindustry_game_SpawnGroup_R_float(jcontext ctx, jobject param0);
jfloat SM_mindustry_editor_WaveInfoDialog$Sort_lambda$static$1_mindustry_game_SpawnGroup_R_float(jcontext ctx, jobject param0);
jfloat SM_mindustry_editor_WaveInfoDialog$Sort_lambda$static$0_mindustry_game_SpawnGroup_R_float(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
