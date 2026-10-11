#ifndef HEADER_mindustry_maps_generators_FileMapGenerator$1
#define HEADER_mindustry_maps_generators_FileMapGenerator$1

#include "Clearwing.h"
#include "mindustry/core/World_FilterContext.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_maps_generators_FileMapGenerator$1 {
	mindustry_core_World$FilterContext parent;
	jref F_val$sector;
	jref F_this$0;
} mindustry_maps_generators_FileMapGenerator$1;

extern Class class_mindustry_maps_generators_FileMapGenerator$1;


#define VTABLE_mindustry_maps_generators_FileMapGenerator$1_hashCode_R_int 0
typedef jint (*func_mindustry_maps_generators_FileMapGenerator$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_FileMapGenerator$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_maps_generators_FileMapGenerator$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_generators_FileMapGenerator$1_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_maps_generators_FileMapGenerator$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_FileMapGenerator$1_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_maps_generators_FileMapGenerator$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_FileMapGenerator$1_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_maps_generators_FileMapGenerator$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_FileMapGenerator$1_finalize 5
typedef void (*func_mindustry_maps_generators_FileMapGenerator$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_FileMapGenerator$1_notify 6
typedef void (*func_mindustry_maps_generators_FileMapGenerator$1_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_FileMapGenerator$1_notifyAll 7
typedef void (*func_mindustry_maps_generators_FileMapGenerator$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_FileMapGenerator$1_wait 8
typedef void (*func_mindustry_maps_generators_FileMapGenerator$1_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_FileMapGenerator$1_wait_long 9
typedef void (*func_mindustry_maps_generators_FileMapGenerator$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_maps_generators_FileMapGenerator$1_wait_long_int 10
typedef void (*func_mindustry_maps_generators_FileMapGenerator$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_maps_generators_FileMapGenerator$1_tile_int_R_mindustry_world_Tile 11
typedef jobject (*func_mindustry_maps_generators_FileMapGenerator$1_tile_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_maps_generators_FileMapGenerator$1_resize_int_int 12
typedef void (*func_mindustry_maps_generators_FileMapGenerator$1_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_maps_generators_FileMapGenerator$1_create_int_int_int_int_int_R_mindustry_world_Tile 13
typedef jobject (*func_mindustry_maps_generators_FileMapGenerator$1_create_int_int_int_int_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_mindustry_maps_generators_FileMapGenerator$1_isGenerating_R_boolean 14
typedef jbool (*func_mindustry_maps_generators_FileMapGenerator$1_isGenerating_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_FileMapGenerator$1_begin 15
typedef void (*func_mindustry_maps_generators_FileMapGenerator$1_begin)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_FileMapGenerator$1_end 16
typedef void (*func_mindustry_maps_generators_FileMapGenerator$1_end)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_FileMapGenerator$1_onReadBuilding 17
typedef void (*func_mindustry_maps_generators_FileMapGenerator$1_onReadBuilding)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_FileMapGenerator$1_onReadTileData 18
typedef void (*func_mindustry_maps_generators_FileMapGenerator$1_onReadTileData)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_FileMapGenerator$1_getSector_R_mindustry_type_Sector 19
typedef jobject (*func_mindustry_maps_generators_FileMapGenerator$1_getSector_R_mindustry_type_Sector)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_FileMapGenerator$1_isMap_R_boolean 20
typedef jbool (*func_mindustry_maps_generators_FileMapGenerator$1_isMap_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_FileMapGenerator$1_applyFilters 21
typedef void (*func_mindustry_maps_generators_FileMapGenerator$1_applyFilters)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_generators_FileMapGenerator$1_lambda$applyFilters$0_int_int_R_mindustry_world_Tile 22
typedef jobject (*func_mindustry_maps_generators_FileMapGenerator$1_lambda$applyFilters$0_int_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0, jint param1);

void mark_mindustry_maps_generators_FileMapGenerator$1(jobject object, jint mark, jint depth);
void clinit_mindustry_maps_generators_FileMapGenerator$1(jcontext ctx);
void init_mindustry_maps_generators_FileMapGenerator$1_mindustry_maps_generators_FileMapGenerator_mindustry_core_World_mindustry_maps_Map_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
jobject M_mindustry_maps_generators_FileMapGenerator$1_getSector_R_mindustry_type_Sector(jcontext ctx, jobject self);
void M_mindustry_maps_generators_FileMapGenerator$1_end(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
