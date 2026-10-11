#ifndef HEADER_mindustry_world_blocks_distribution_ChainedBuilding
#define HEADER_mindustry_world_blocks_distribution_ChainedBuilding

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_blocks_distribution_ChainedBuilding {
	java_lang_Object parent;
} mindustry_world_blocks_distribution_ChainedBuilding;

extern Class class_mindustry_world_blocks_distribution_ChainedBuilding;


#define INDEX_mindustry_world_blocks_distribution_ChainedBuilding_next_R_mindustry_gen_Building 0
typedef jobject (*func_mindustry_world_blocks_distribution_ChainedBuilding_next_R_mindustry_gen_Building)(jcontext ctx, jobject self);

void mark_mindustry_world_blocks_distribution_ChainedBuilding(jobject object, jint mark, jint depth);
void clinit_mindustry_world_blocks_distribution_ChainedBuilding(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
