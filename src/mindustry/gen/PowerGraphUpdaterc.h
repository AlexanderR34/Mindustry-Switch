#ifndef HEADER_mindustry_gen_PowerGraphUpdaterc
#define HEADER_mindustry_gen_PowerGraphUpdaterc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_PowerGraphUpdaterc {
	java_lang_Object parent;
} mindustry_gen_PowerGraphUpdaterc;

extern Class class_mindustry_gen_PowerGraphUpdaterc;


#define INDEX_mindustry_gen_PowerGraphUpdaterc_graph_R_mindustry_world_blocks_power_PowerGraph 0
typedef jobject (*func_mindustry_gen_PowerGraphUpdaterc_graph_R_mindustry_world_blocks_power_PowerGraph)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_PowerGraphUpdaterc_graph_mindustry_world_blocks_power_PowerGraph 1
typedef void (*func_mindustry_gen_PowerGraphUpdaterc_graph_mindustry_world_blocks_power_PowerGraph)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_PowerGraphUpdaterc_update 2
typedef void (*func_mindustry_gen_PowerGraphUpdaterc_update)(jcontext ctx, jobject self);

void mark_mindustry_gen_PowerGraphUpdaterc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_PowerGraphUpdaterc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
