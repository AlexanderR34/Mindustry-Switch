#ifndef HEADER_mindustry_world_blocks_heat_HeatConsumer
#define HEADER_mindustry_world_blocks_heat_HeatConsumer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_blocks_heat_HeatConsumer {
	java_lang_Object parent;
} mindustry_world_blocks_heat_HeatConsumer;

extern Class class_mindustry_world_blocks_heat_HeatConsumer;


#define INDEX_mindustry_world_blocks_heat_HeatConsumer_sideHeat_R_Array1_float 0
typedef jobject (*func_mindustry_world_blocks_heat_HeatConsumer_sideHeat_R_Array1_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_world_blocks_heat_HeatConsumer_heatRequirement_R_float 1
typedef jfloat (*func_mindustry_world_blocks_heat_HeatConsumer_heatRequirement_R_float)(jcontext ctx, jobject self);

void mark_mindustry_world_blocks_heat_HeatConsumer(jobject object, jint mark, jint depth);
void clinit_mindustry_world_blocks_heat_HeatConsumer(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
