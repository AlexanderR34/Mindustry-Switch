#ifndef HEADER_mindustry_world_blocks_ControlBlock
#define HEADER_mindustry_world_blocks_ControlBlock

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_blocks_ControlBlock {
	java_lang_Object parent;
} mindustry_world_blocks_ControlBlock;

extern Class class_mindustry_world_blocks_ControlBlock;


#define INDEX_mindustry_world_blocks_ControlBlock_unit_R_mindustry_gen_Unit 0
typedef jobject (*func_mindustry_world_blocks_ControlBlock_unit_R_mindustry_gen_Unit)(jcontext ctx, jobject self);
#define INDEX_mindustry_world_blocks_ControlBlock_isControlled_R_boolean 1
typedef jbool (*func_mindustry_world_blocks_ControlBlock_isControlled_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_world_blocks_ControlBlock_canControl_R_boolean 2
typedef jbool (*func_mindustry_world_blocks_ControlBlock_canControl_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_world_blocks_ControlBlock_shouldAutoTarget_R_boolean 3
typedef jbool (*func_mindustry_world_blocks_ControlBlock_shouldAutoTarget_R_boolean)(jcontext ctx, jobject self);

void mark_mindustry_world_blocks_ControlBlock(jobject object, jint mark, jint depth);
void clinit_mindustry_world_blocks_ControlBlock(jcontext ctx);
jbool M_mindustry_world_blocks_ControlBlock_isControlled_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_world_blocks_ControlBlock_canControl_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_world_blocks_ControlBlock_shouldAutoTarget_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
