#ifndef HEADER_mindustry_input_ItemBridgePlacer
#define HEADER_mindustry_input_ItemBridgePlacer

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/input/BridgePlacer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_input_ItemBridgePlacer {
	java_lang_Object parent;
	jref F_bridge;
} mindustry_input_ItemBridgePlacer;

extern Class class_mindustry_input_ItemBridgePlacer;


#define VTABLE_mindustry_input_ItemBridgePlacer_hashCode_R_int 0
typedef jint (*func_mindustry_input_ItemBridgePlacer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_ItemBridgePlacer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_input_ItemBridgePlacer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_ItemBridgePlacer_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_input_ItemBridgePlacer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_ItemBridgePlacer_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_input_ItemBridgePlacer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_ItemBridgePlacer_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_input_ItemBridgePlacer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_ItemBridgePlacer_finalize 5
typedef void (*func_mindustry_input_ItemBridgePlacer_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_ItemBridgePlacer_notify 6
typedef void (*func_mindustry_input_ItemBridgePlacer_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_ItemBridgePlacer_notifyAll 7
typedef void (*func_mindustry_input_ItemBridgePlacer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_ItemBridgePlacer_wait 8
typedef void (*func_mindustry_input_ItemBridgePlacer_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_ItemBridgePlacer_wait_long 9
typedef void (*func_mindustry_input_ItemBridgePlacer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_input_ItemBridgePlacer_wait_long_int 10
typedef void (*func_mindustry_input_ItemBridgePlacer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_input_ItemBridgePlacer_unlockedNow_R_boolean 11
typedef jbool (*func_mindustry_input_ItemBridgePlacer_unlockedNow_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_ItemBridgePlacer_positionsValid_int_int_int_int_R_boolean 12
typedef jbool (*func_mindustry_input_ItemBridgePlacer_positionsValid_int_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_input_ItemBridgePlacer_applyToPlans_mindustry_entities_units_BuildPlan_mindustry_entities_units_BuildPlan 13
typedef void (*func_mindustry_input_ItemBridgePlacer_applyToPlans_mindustry_entities_units_BuildPlan_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_input_ItemBridgePlacer(jobject object, jint mark, jint depth);
void clinit_mindustry_input_ItemBridgePlacer(jcontext ctx);
void init_mindustry_input_ItemBridgePlacer_mindustry_world_blocks_distribution_ItemBridge(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_input_ItemBridgePlacer_unlockedNow_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_input_ItemBridgePlacer_positionsValid_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_mindustry_input_ItemBridgePlacer_applyToPlans_mindustry_entities_units_BuildPlan_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
