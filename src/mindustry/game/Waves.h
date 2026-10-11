#ifndef HEADER_mindustry_game_Waves
#define HEADER_mindustry_game_Waves

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_Waves {
	java_lang_Object parent;
	jref F_spawns;
} mindustry_game_Waves;

extern Class class_mindustry_game_Waves;

extern jint SF_mindustry_game_Waves_waveVersion;

#define VTABLE_mindustry_game_Waves_hashCode_R_int 0
typedef jint (*func_mindustry_game_Waves_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Waves_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_Waves_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Waves_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_Waves_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Waves_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_Waves_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Waves_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_Waves_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Waves_finalize 5
typedef void (*func_mindustry_game_Waves_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Waves_notify 6
typedef void (*func_mindustry_game_Waves_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Waves_notifyAll 7
typedef void (*func_mindustry_game_Waves_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Waves_wait 8
typedef void (*func_mindustry_game_Waves_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Waves_wait_long 9
typedef void (*func_mindustry_game_Waves_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_Waves_wait_long_int 10
typedef void (*func_mindustry_game_Waves_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_Waves_get_R_arc_struct_Seq 11
typedef jobject (*func_mindustry_game_Waves_get_R_arc_struct_Seq)(jcontext ctx, jobject self);

void mark_mindustry_game_Waves(jobject object, jint mark, jint depth);
void clinit_mindustry_game_Waves(jcontext ctx);
void init_mindustry_game_Waves(jcontext ctx, jobject self);
jobject M_mindustry_game_Waves_get_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject SM_mindustry_game_Waves_generate_float_R_arc_struct_Seq(jcontext ctx, jfloat param0);
jobject SM_mindustry_game_Waves_generate_float_arc_math_Rand_boolean_R_arc_struct_Seq(jcontext ctx, jfloat param0, jobject param1, jbool param2);
jobject SM_mindustry_game_Waves_generate_float_arc_math_Rand_boolean_boolean_R_arc_struct_Seq(jcontext ctx, jfloat param0, jobject param1, jbool param2, jbool param3);
jobject SM_mindustry_game_Waves_generate_float_arc_math_Rand_boolean_boolean_boolean_R_arc_struct_Seq(jcontext ctx, jfloat param0, jobject param1, jbool param2, jbool param3, jbool param4);
void SM_mindustry_game_Waves_lambda$generate$3_arc_math_Rand_Array2_mindustry_type_UnitType_int_float_float_float_arc_struct_Seq_Array1_float_int(jcontext ctx, jobject param0, jobject param1, jint param2, jfloat param3, jfloat param4, jfloat param5, jobject param6, jobject param7, jint param8);
jbool SM_mindustry_game_Waves_lambda$generate$2_Array1_mindustry_type_UnitType_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_game_Waves_lambda$generate$1_Array1_mindustry_type_UnitType_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_game_Waves_lambda$generate$0_Array1_mindustry_type_UnitType_R_boolean(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
