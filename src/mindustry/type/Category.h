#ifndef HEADER_mindustry_type_Category
#define HEADER_mindustry_type_Category

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_type_Category {
	java_lang_Enum parent;
} mindustry_type_Category;

extern Class class_mindustry_type_Category;

extern jobject SF_mindustry_type_Category_turret;
extern jobject SF_mindustry_type_Category_production;
extern jobject SF_mindustry_type_Category_distribution;
extern jobject SF_mindustry_type_Category_liquid;
extern jobject SF_mindustry_type_Category_power;
extern jobject SF_mindustry_type_Category_defense;
extern jobject SF_mindustry_type_Category_crafting;
extern jobject SF_mindustry_type_Category_units;
extern jobject SF_mindustry_type_Category_effect;
extern jobject SF_mindustry_type_Category_logic;
extern jobject SF_mindustry_type_Category_all;
extern jobject SF_mindustry_type_Category_$VALUES;

#define VTABLE_mindustry_type_Category_hashCode_R_int 0
typedef jint (*func_mindustry_type_Category_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Category_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_type_Category_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Category_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_type_Category_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Category_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_type_Category_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Category_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_type_Category_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Category_finalize 5
typedef void (*func_mindustry_type_Category_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Category_notify 6
typedef void (*func_mindustry_type_Category_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Category_notifyAll 7
typedef void (*func_mindustry_type_Category_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Category_wait 8
typedef void (*func_mindustry_type_Category_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Category_wait_long 9
typedef void (*func_mindustry_type_Category_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_type_Category_wait_long_int 10
typedef void (*func_mindustry_type_Category_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_type_Category_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_type_Category_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Category_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_type_Category_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Category_name_R_java_lang_String 13
typedef jobject (*func_mindustry_type_Category_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Category_ordinal_R_int 14
typedef jint (*func_mindustry_type_Category_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Category_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_type_Category_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Category_prev_R_mindustry_type_Category 16
typedef jobject (*func_mindustry_type_Category_prev_R_mindustry_type_Category)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Category_next_R_mindustry_type_Category 17
typedef jobject (*func_mindustry_type_Category_next_R_mindustry_type_Category)(jcontext ctx, jobject self);

void mark_mindustry_type_Category(jobject object, jint mark, jint depth);
void clinit_mindustry_type_Category(jcontext ctx);
jobject SM_mindustry_type_Category_values_R_Array1_mindustry_type_Category(jcontext ctx);
jobject SM_mindustry_type_Category_valueOf_java_lang_String_R_mindustry_type_Category(jcontext ctx, jobject param0);
void init_mindustry_type_Category_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_mindustry_type_Category_prev_R_mindustry_type_Category(jcontext ctx, jobject self);
jobject M_mindustry_type_Category_next_R_mindustry_type_Category(jcontext ctx, jobject self);
jobject SM_mindustry_type_Category_$values_R_Array1_mindustry_type_Category(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
