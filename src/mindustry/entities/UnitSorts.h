#ifndef HEADER_mindustry_entities_UnitSorts
#define HEADER_mindustry_entities_UnitSorts

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_UnitSorts {
	java_lang_Object parent;
} mindustry_entities_UnitSorts;

extern Class class_mindustry_entities_UnitSorts;

extern jobject SF_mindustry_entities_UnitSorts_closest;
extern jobject SF_mindustry_entities_UnitSorts_farthest;
extern jobject SF_mindustry_entities_UnitSorts_strongest;
extern jobject SF_mindustry_entities_UnitSorts_weakest;
extern jobject SF_mindustry_entities_UnitSorts_mostArmor;
extern jobject SF_mindustry_entities_UnitSorts_leastArmor;
extern jobject SF_mindustry_entities_UnitSorts_mostShield;
extern jobject SF_mindustry_entities_UnitSorts_leastShield;
extern jobject SF_mindustry_entities_UnitSorts_grouped;
extern jobject SF_mindustry_entities_UnitSorts_buildingDefault;
extern jobject SF_mindustry_entities_UnitSorts_buildingWater;

#define VTABLE_mindustry_entities_UnitSorts_hashCode_R_int 0
typedef jint (*func_mindustry_entities_UnitSorts_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_UnitSorts_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_UnitSorts_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_UnitSorts_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_UnitSorts_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_UnitSorts_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_UnitSorts_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_UnitSorts_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_UnitSorts_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_UnitSorts_finalize 5
typedef void (*func_mindustry_entities_UnitSorts_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_UnitSorts_notify 6
typedef void (*func_mindustry_entities_UnitSorts_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_UnitSorts_notifyAll 7
typedef void (*func_mindustry_entities_UnitSorts_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_UnitSorts_wait 8
typedef void (*func_mindustry_entities_UnitSorts_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_UnitSorts_wait_long 9
typedef void (*func_mindustry_entities_UnitSorts_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_UnitSorts_wait_long_int 10
typedef void (*func_mindustry_entities_UnitSorts_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_entities_UnitSorts(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_UnitSorts(jcontext ctx);
void init_mindustry_entities_UnitSorts(jcontext ctx, jobject self);
jobject SM_mindustry_entities_UnitSorts_grouped_float_R_mindustry_entities_Units$Sortf(jcontext ctx, jfloat param0);
jfloat SM_mindustry_entities_UnitSorts_lambda$grouped$0_float_mindustry_gen_Unit_float_float_R_float(jcontext ctx, jfloat param0, jobject param1, jfloat param2, jfloat param3);
jfloat SM_mindustry_entities_UnitSorts_lambda$static$8_mindustry_gen_Building_R_float(jcontext ctx, jobject param0);
jfloat SM_mindustry_entities_UnitSorts_lambda$static$7_mindustry_gen_Building_R_float(jcontext ctx, jobject param0);
jfloat SM_mindustry_entities_UnitSorts_lambda$static$6_mindustry_gen_Unit_float_float_R_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2);
jfloat SM_mindustry_entities_UnitSorts_lambda$static$5_mindustry_gen_Unit_float_float_R_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2);
jfloat SM_mindustry_entities_UnitSorts_lambda$static$4_mindustry_gen_Unit_float_float_R_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2);
jfloat SM_mindustry_entities_UnitSorts_lambda$static$3_mindustry_gen_Unit_float_float_R_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2);
jfloat SM_mindustry_entities_UnitSorts_lambda$static$2_mindustry_gen_Unit_float_float_R_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2);
jfloat SM_mindustry_entities_UnitSorts_lambda$static$1_mindustry_gen_Unit_float_float_R_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2);
jfloat SM_mindustry_entities_UnitSorts_lambda$static$0_mindustry_gen_Unit_float_float_R_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2);

#ifdef __cplusplus
}
#endif

#endif
