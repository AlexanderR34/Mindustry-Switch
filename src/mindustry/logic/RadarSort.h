#ifndef HEADER_mindustry_logic_RadarSort
#define HEADER_mindustry_logic_RadarSort

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_RadarSort {
	java_lang_Enum parent;
	jref F_func;
} mindustry_logic_RadarSort;

extern Class class_mindustry_logic_RadarSort;

extern jobject SF_mindustry_logic_RadarSort_distance;
extern jobject SF_mindustry_logic_RadarSort_health;
extern jobject SF_mindustry_logic_RadarSort_shield;
extern jobject SF_mindustry_logic_RadarSort_armor;
extern jobject SF_mindustry_logic_RadarSort_maxHealth;
extern jobject SF_mindustry_logic_RadarSort_all;
extern jobject SF_mindustry_logic_RadarSort_$VALUES;

#define VTABLE_mindustry_logic_RadarSort_hashCode_R_int 0
typedef jint (*func_mindustry_logic_RadarSort_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_RadarSort_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_RadarSort_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_RadarSort_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_RadarSort_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_RadarSort_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_RadarSort_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_RadarSort_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_RadarSort_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_RadarSort_finalize 5
typedef void (*func_mindustry_logic_RadarSort_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_RadarSort_notify 6
typedef void (*func_mindustry_logic_RadarSort_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_RadarSort_notifyAll 7
typedef void (*func_mindustry_logic_RadarSort_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_RadarSort_wait 8
typedef void (*func_mindustry_logic_RadarSort_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_RadarSort_wait_long 9
typedef void (*func_mindustry_logic_RadarSort_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_RadarSort_wait_long_int 10
typedef void (*func_mindustry_logic_RadarSort_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_logic_RadarSort_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_logic_RadarSort_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_RadarSort_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_logic_RadarSort_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_RadarSort_name_R_java_lang_String 13
typedef jobject (*func_mindustry_logic_RadarSort_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_RadarSort_ordinal_R_int 14
typedef jint (*func_mindustry_logic_RadarSort_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_RadarSort_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_logic_RadarSort_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_mindustry_logic_RadarSort(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_RadarSort(jcontext ctx);
jobject SM_mindustry_logic_RadarSort_values_R_Array1_mindustry_logic_RadarSort(jcontext ctx);
jobject SM_mindustry_logic_RadarSort_valueOf_java_lang_String_R_mindustry_logic_RadarSort(jcontext ctx, jobject param0);
void init_mindustry_logic_RadarSort_java_lang_String_int_mindustry_logic_RadarSort$RadarSortFunc(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
jobject SM_mindustry_logic_RadarSort_$values_R_Array1_mindustry_logic_RadarSort(jcontext ctx);
jfloat SM_mindustry_logic_RadarSort_lambda$static$4_arc_math_geom_Position_mindustry_gen_Unit_R_float(jcontext ctx, jobject param0, jobject param1);
jfloat SM_mindustry_logic_RadarSort_lambda$static$3_arc_math_geom_Position_mindustry_gen_Unit_R_float(jcontext ctx, jobject param0, jobject param1);
jfloat SM_mindustry_logic_RadarSort_lambda$static$2_arc_math_geom_Position_mindustry_gen_Unit_R_float(jcontext ctx, jobject param0, jobject param1);
jfloat SM_mindustry_logic_RadarSort_lambda$static$1_arc_math_geom_Position_mindustry_gen_Unit_R_float(jcontext ctx, jobject param0, jobject param1);
jfloat SM_mindustry_logic_RadarSort_lambda$static$0_arc_math_geom_Position_mindustry_gen_Unit_R_float(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
