#ifndef HEADER_mindustry_world_blocks_units_UnitFactory$UnitPlan
#define HEADER_mindustry_world_blocks_units_UnitFactory$UnitPlan

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_blocks_units_UnitFactory$UnitPlan {
	java_lang_Object parent;
	jref F_unit;
	jref F_requirements;
	jfloat F_time;
} mindustry_world_blocks_units_UnitFactory$UnitPlan;

extern Class class_mindustry_world_blocks_units_UnitFactory$UnitPlan;


#define VTABLE_mindustry_world_blocks_units_UnitFactory$UnitPlan_hashCode_R_int 0
typedef jint (*func_mindustry_world_blocks_units_UnitFactory$UnitPlan_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_units_UnitFactory$UnitPlan_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_blocks_units_UnitFactory$UnitPlan_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_blocks_units_UnitFactory$UnitPlan_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_blocks_units_UnitFactory$UnitPlan_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_units_UnitFactory$UnitPlan_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_blocks_units_UnitFactory$UnitPlan_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_units_UnitFactory$UnitPlan_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_blocks_units_UnitFactory$UnitPlan_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_units_UnitFactory$UnitPlan_finalize 5
typedef void (*func_mindustry_world_blocks_units_UnitFactory$UnitPlan_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_units_UnitFactory$UnitPlan_notify 6
typedef void (*func_mindustry_world_blocks_units_UnitFactory$UnitPlan_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_units_UnitFactory$UnitPlan_notifyAll 7
typedef void (*func_mindustry_world_blocks_units_UnitFactory$UnitPlan_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_units_UnitFactory$UnitPlan_wait 8
typedef void (*func_mindustry_world_blocks_units_UnitFactory$UnitPlan_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_units_UnitFactory$UnitPlan_wait_long 9
typedef void (*func_mindustry_world_blocks_units_UnitFactory$UnitPlan_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_blocks_units_UnitFactory$UnitPlan_wait_long_int 10
typedef void (*func_mindustry_world_blocks_units_UnitFactory$UnitPlan_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_world_blocks_units_UnitFactory$UnitPlan(jobject object, jint mark, jint depth);
void clinit_mindustry_world_blocks_units_UnitFactory$UnitPlan(jcontext ctx);
void init_mindustry_world_blocks_units_UnitFactory$UnitPlan_mindustry_type_UnitType_float_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2);
void init_mindustry_world_blocks_units_UnitFactory$UnitPlan(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
