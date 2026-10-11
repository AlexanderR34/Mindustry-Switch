#ifndef HEADER_mindustry_world_WorldContext
#define HEADER_mindustry_world_WorldContext

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_WorldContext {
	java_lang_Object parent;
} mindustry_world_WorldContext;

extern Class class_mindustry_world_WorldContext;


#define INDEX_mindustry_world_WorldContext_tile_int_R_mindustry_world_Tile 0
typedef jobject (*func_mindustry_world_WorldContext_tile_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0);
#define INDEX_mindustry_world_WorldContext_resize_int_int 1
typedef void (*func_mindustry_world_WorldContext_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define INDEX_mindustry_world_WorldContext_create_int_int_int_int_int_R_mindustry_world_Tile 2
typedef jobject (*func_mindustry_world_WorldContext_create_int_int_int_int_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define INDEX_mindustry_world_WorldContext_isGenerating_R_boolean 3
typedef jbool (*func_mindustry_world_WorldContext_isGenerating_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_world_WorldContext_begin 4
typedef void (*func_mindustry_world_WorldContext_begin)(jcontext ctx, jobject self);
#define INDEX_mindustry_world_WorldContext_end 5
typedef void (*func_mindustry_world_WorldContext_end)(jcontext ctx, jobject self);
#define INDEX_mindustry_world_WorldContext_onReadBuilding 6
typedef void (*func_mindustry_world_WorldContext_onReadBuilding)(jcontext ctx, jobject self);
#define INDEX_mindustry_world_WorldContext_onReadTileData 7
typedef void (*func_mindustry_world_WorldContext_onReadTileData)(jcontext ctx, jobject self);
#define INDEX_mindustry_world_WorldContext_getSector_R_mindustry_type_Sector 8
typedef jobject (*func_mindustry_world_WorldContext_getSector_R_mindustry_type_Sector)(jcontext ctx, jobject self);
#define INDEX_mindustry_world_WorldContext_isMap_R_boolean 9
typedef jbool (*func_mindustry_world_WorldContext_isMap_R_boolean)(jcontext ctx, jobject self);

void mark_mindustry_world_WorldContext(jobject object, jint mark, jint depth);
void clinit_mindustry_world_WorldContext(jcontext ctx);
void M_mindustry_world_WorldContext_onReadBuilding(jcontext ctx, jobject self);
void M_mindustry_world_WorldContext_onReadTileData(jcontext ctx, jobject self);
jobject M_mindustry_world_WorldContext_getSector_R_mindustry_type_Sector(jcontext ctx, jobject self);
jbool M_mindustry_world_WorldContext_isMap_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
