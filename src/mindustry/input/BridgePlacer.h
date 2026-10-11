#ifndef HEADER_mindustry_input_BridgePlacer
#define HEADER_mindustry_input_BridgePlacer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_input_BridgePlacer {
	java_lang_Object parent;
} mindustry_input_BridgePlacer;

extern Class class_mindustry_input_BridgePlacer;


#define INDEX_mindustry_input_BridgePlacer_unlockedNow_R_boolean 0
typedef jbool (*func_mindustry_input_BridgePlacer_unlockedNow_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_input_BridgePlacer_positionsValid_int_int_int_int_R_boolean 1
typedef jbool (*func_mindustry_input_BridgePlacer_positionsValid_int_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define INDEX_mindustry_input_BridgePlacer_applyToPlans_mindustry_entities_units_BuildPlan_mindustry_entities_units_BuildPlan 2
typedef void (*func_mindustry_input_BridgePlacer_applyToPlans_mindustry_entities_units_BuildPlan_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_input_BridgePlacer(jobject object, jint mark, jint depth);
void clinit_mindustry_input_BridgePlacer(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
