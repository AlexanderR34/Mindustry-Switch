#ifndef HEADER_mindustry_world_blocks_RotBlock
#define HEADER_mindustry_world_blocks_RotBlock

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_blocks_RotBlock {
	java_lang_Object parent;
} mindustry_world_blocks_RotBlock;

extern Class class_mindustry_world_blocks_RotBlock;


#define INDEX_mindustry_world_blocks_RotBlock_buildRotation_R_float 0
typedef jfloat (*func_mindustry_world_blocks_RotBlock_buildRotation_R_float)(jcontext ctx, jobject self);

void mark_mindustry_world_blocks_RotBlock(jobject object, jint mark, jint depth);
void clinit_mindustry_world_blocks_RotBlock(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
