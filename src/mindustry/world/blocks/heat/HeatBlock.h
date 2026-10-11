#ifndef HEADER_mindustry_world_blocks_heat_HeatBlock
#define HEADER_mindustry_world_blocks_heat_HeatBlock

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_blocks_heat_HeatBlock {
	java_lang_Object parent;
} mindustry_world_blocks_heat_HeatBlock;

extern Class class_mindustry_world_blocks_heat_HeatBlock;


#define INDEX_mindustry_world_blocks_heat_HeatBlock_heat_R_float 0
typedef jfloat (*func_mindustry_world_blocks_heat_HeatBlock_heat_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_world_blocks_heat_HeatBlock_heatFrac_R_float 1
typedef jfloat (*func_mindustry_world_blocks_heat_HeatBlock_heatFrac_R_float)(jcontext ctx, jobject self);

void mark_mindustry_world_blocks_heat_HeatBlock(jobject object, jint mark, jint depth);
void clinit_mindustry_world_blocks_heat_HeatBlock(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
