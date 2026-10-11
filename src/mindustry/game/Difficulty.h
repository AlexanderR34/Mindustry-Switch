#ifndef HEADER_mindustry_game_Difficulty
#define HEADER_mindustry_game_Difficulty

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_Difficulty {
	java_lang_Enum parent;
	jfloat F_enemyHealthMultiplier;
	jfloat F_enemySpawnMultiplier;
	jfloat F_waveTimeMultiplier;
} mindustry_game_Difficulty;

extern Class class_mindustry_game_Difficulty;

extern jobject SF_mindustry_game_Difficulty_casual;
extern jobject SF_mindustry_game_Difficulty_easy;
extern jobject SF_mindustry_game_Difficulty_normal;
extern jobject SF_mindustry_game_Difficulty_hard;
extern jobject SF_mindustry_game_Difficulty_eradication;
extern jobject SF_mindustry_game_Difficulty_all;
extern jobject SF_mindustry_game_Difficulty_$VALUES;

#define VTABLE_mindustry_game_Difficulty_hashCode_R_int 0
typedef jint (*func_mindustry_game_Difficulty_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Difficulty_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_Difficulty_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Difficulty_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_Difficulty_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Difficulty_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_Difficulty_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Difficulty_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_Difficulty_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Difficulty_finalize 5
typedef void (*func_mindustry_game_Difficulty_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Difficulty_notify 6
typedef void (*func_mindustry_game_Difficulty_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Difficulty_notifyAll 7
typedef void (*func_mindustry_game_Difficulty_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Difficulty_wait 8
typedef void (*func_mindustry_game_Difficulty_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Difficulty_wait_long 9
typedef void (*func_mindustry_game_Difficulty_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_Difficulty_wait_long_int 10
typedef void (*func_mindustry_game_Difficulty_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_Difficulty_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_game_Difficulty_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Difficulty_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_game_Difficulty_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Difficulty_name_R_java_lang_String 13
typedef jobject (*func_mindustry_game_Difficulty_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Difficulty_ordinal_R_int 14
typedef jint (*func_mindustry_game_Difficulty_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Difficulty_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_game_Difficulty_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Difficulty_info_R_java_lang_String 16
typedef jobject (*func_mindustry_game_Difficulty_info_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Difficulty_localized_R_java_lang_String 17
typedef jobject (*func_mindustry_game_Difficulty_localized_R_java_lang_String)(jcontext ctx, jobject self);

void mark_mindustry_game_Difficulty(jobject object, jint mark, jint depth);
void clinit_mindustry_game_Difficulty(jcontext ctx);
jobject SM_mindustry_game_Difficulty_values_R_Array1_mindustry_game_Difficulty(jcontext ctx);
jobject SM_mindustry_game_Difficulty_valueOf_java_lang_String_R_mindustry_game_Difficulty(jcontext ctx, jobject param0);
void init_mindustry_game_Difficulty_java_lang_String_int_float_float_float(jcontext ctx, jobject self, jobject param0, jint param1, jfloat param2, jfloat param3, jfloat param4);
jobject M_mindustry_game_Difficulty_info_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_game_Difficulty_localized_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_mindustry_game_Difficulty_percentStat_float_R_java_lang_String(jcontext ctx, jfloat param0);
jobject SM_mindustry_game_Difficulty_percentStatNeg_float_R_java_lang_String(jcontext ctx, jfloat param0);
jobject SM_mindustry_game_Difficulty_$values_R_Array1_mindustry_game_Difficulty(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
