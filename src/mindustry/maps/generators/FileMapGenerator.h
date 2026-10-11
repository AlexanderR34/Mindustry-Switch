#ifndef HEADER_mindustry_maps_generators_FileMapGenerator
#define HEADER_mindustry_maps_generators_FileMapGenerator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/maps/generators/WorldGenerator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_maps_generators_FileMapGenerator {
	java_lang_Object parent;
	jref F_map;
	jref F_preset;
} mindustry_maps_generators_FileMapGenerator;

extern Class class_mindustry_maps_generators_FileMapGenerator;


#define VTABLE_mindustry_maps_generators_FileMapGenerator_hashCode_R_int 0
typedef jint (*func_mindustry_maps_generators_FileMapGenerator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_FileMapGenerator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_maps_generators_FileMapGenerator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_generators_FileMapGenerator_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_maps_generators_FileMapGenerator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_FileMapGenerator_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_maps_generators_FileMapGenerator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_FileMapGenerator_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_maps_generators_FileMapGenerator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_FileMapGenerator_finalize 5
typedef void (*func_mindustry_maps_generators_FileMapGenerator_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_FileMapGenerator_notify 6
typedef void (*func_mindustry_maps_generators_FileMapGenerator_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_FileMapGenerator_notifyAll 7
typedef void (*func_mindustry_maps_generators_FileMapGenerator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_FileMapGenerator_wait 8
typedef void (*func_mindustry_maps_generators_FileMapGenerator_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_FileMapGenerator_wait_long 9
typedef void (*func_mindustry_maps_generators_FileMapGenerator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_maps_generators_FileMapGenerator_wait_long_int 10
typedef void (*func_mindustry_maps_generators_FileMapGenerator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_maps_generators_FileMapGenerator_generate_mindustry_world_Tiles_mindustry_world_WorldParams 11
typedef void (*func_mindustry_maps_generators_FileMapGenerator_generate_mindustry_world_Tiles_mindustry_world_WorldParams)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_maps_generators_FileMapGenerator_postGenerate_mindustry_world_Tiles 12
typedef void (*func_mindustry_maps_generators_FileMapGenerator_postGenerate_mindustry_world_Tiles)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_maps_generators_FileMapGenerator(jobject object, jint mark, jint depth);
void clinit_mindustry_maps_generators_FileMapGenerator(jcontext ctx);
void init_mindustry_maps_generators_FileMapGenerator_java_lang_String_mindustry_type_SectorPreset(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_mindustry_maps_generators_FileMapGenerator_mindustry_maps_Map_mindustry_type_SectorPreset(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_mindustry_maps_generators_FileMapGenerator_mindustry_type_SectorPreset(jcontext ctx, jobject self, jobject param0);
void M_mindustry_maps_generators_FileMapGenerator_generate_mindustry_world_Tiles_mindustry_world_WorldParams(jcontext ctx, jobject self, jobject param0, jobject param1);
void SM_mindustry_maps_generators_FileMapGenerator_lambda$generate$0_mindustry_world_Tile_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
jbool SM_mindustry_maps_generators_FileMapGenerator_lambda$new$0_java_lang_String_R_boolean(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
