#ifndef HEADER_mindustry_maps_generators_WorldGenerator
#define HEADER_mindustry_maps_generators_WorldGenerator

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_maps_generators_WorldGenerator {
	java_lang_Object parent;
} mindustry_maps_generators_WorldGenerator;

extern Class class_mindustry_maps_generators_WorldGenerator;


#define INDEX_mindustry_maps_generators_WorldGenerator_generate_mindustry_world_Tiles_mindustry_world_WorldParams 0
typedef void (*func_mindustry_maps_generators_WorldGenerator_generate_mindustry_world_Tiles_mindustry_world_WorldParams)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_mindustry_maps_generators_WorldGenerator_postGenerate_mindustry_world_Tiles 1
typedef void (*func_mindustry_maps_generators_WorldGenerator_postGenerate_mindustry_world_Tiles)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_maps_generators_WorldGenerator(jobject object, jint mark, jint depth);
void clinit_mindustry_maps_generators_WorldGenerator(jcontext ctx);
void M_mindustry_maps_generators_WorldGenerator_postGenerate_mindustry_world_Tiles(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
