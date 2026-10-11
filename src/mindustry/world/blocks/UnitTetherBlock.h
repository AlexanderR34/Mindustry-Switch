#ifndef HEADER_mindustry_world_blocks_UnitTetherBlock
#define HEADER_mindustry_world_blocks_UnitTetherBlock

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_blocks_UnitTetherBlock {
	java_lang_Object parent;
} mindustry_world_blocks_UnitTetherBlock;

extern Class class_mindustry_world_blocks_UnitTetherBlock;


#define INDEX_mindustry_world_blocks_UnitTetherBlock_spawned_int 0
typedef void (*func_mindustry_world_blocks_UnitTetherBlock_spawned_int)(jcontext ctx, jobject self, jint param0);

void mark_mindustry_world_blocks_UnitTetherBlock(jobject object, jint mark, jint depth);
void clinit_mindustry_world_blocks_UnitTetherBlock(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
