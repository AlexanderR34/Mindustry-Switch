#ifndef HEADER_mindustry_core_World$FilterContext
#define HEADER_mindustry_core_World$FilterContext

#include "Clearwing.h"
#include "mindustry/core/World_Context.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_core_World$FilterContext {
	mindustry_core_World$Context parent;
	jref F_map;
	jref F_this$0;
} mindustry_core_World$FilterContext;

extern Class class_mindustry_core_World$FilterContext;


#define VTABLE_mindustry_core_World$FilterContext_hashCode_R_int 0
typedef jint (*func_mindustry_core_World$FilterContext_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$FilterContext_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_core_World$FilterContext_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_World$FilterContext_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_core_World$FilterContext_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$FilterContext_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_core_World$FilterContext_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$FilterContext_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_core_World$FilterContext_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$FilterContext_finalize 5
typedef void (*func_mindustry_core_World$FilterContext_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$FilterContext_notify 6
typedef void (*func_mindustry_core_World$FilterContext_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$FilterContext_notifyAll 7
typedef void (*func_mindustry_core_World$FilterContext_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$FilterContext_wait 8
typedef void (*func_mindustry_core_World$FilterContext_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$FilterContext_wait_long 9
typedef void (*func_mindustry_core_World$FilterContext_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_core_World$FilterContext_wait_long_int 10
typedef void (*func_mindustry_core_World$FilterContext_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_core_World$FilterContext_tile_int_R_mindustry_world_Tile 11
typedef jobject (*func_mindustry_core_World$FilterContext_tile_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_core_World$FilterContext_resize_int_int 12
typedef void (*func_mindustry_core_World$FilterContext_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_core_World$FilterContext_create_int_int_int_int_int_R_mindustry_world_Tile 13
typedef jobject (*func_mindustry_core_World$FilterContext_create_int_int_int_int_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_mindustry_core_World$FilterContext_isGenerating_R_boolean 14
typedef jbool (*func_mindustry_core_World$FilterContext_isGenerating_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$FilterContext_begin 15
typedef void (*func_mindustry_core_World$FilterContext_begin)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$FilterContext_end 16
typedef void (*func_mindustry_core_World$FilterContext_end)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$FilterContext_onReadBuilding 17
typedef void (*func_mindustry_core_World$FilterContext_onReadBuilding)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$FilterContext_onReadTileData 18
typedef void (*func_mindustry_core_World$FilterContext_onReadTileData)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$FilterContext_getSector_R_mindustry_type_Sector 19
typedef jobject (*func_mindustry_core_World$FilterContext_getSector_R_mindustry_type_Sector)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$FilterContext_isMap_R_boolean 20
typedef jbool (*func_mindustry_core_World$FilterContext_isMap_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$FilterContext_applyFilters 21
typedef void (*func_mindustry_core_World$FilterContext_applyFilters)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$FilterContext_lambda$applyFilters$0_int_int_R_mindustry_world_Tile 22
typedef jobject (*func_mindustry_core_World$FilterContext_lambda$applyFilters$0_int_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0, jint param1);

void mark_mindustry_core_World$FilterContext(jobject object, jint mark, jint depth);
void clinit_mindustry_core_World$FilterContext(jcontext ctx);
void init_mindustry_core_World$FilterContext_mindustry_core_World_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_core_World$FilterContext_end(jcontext ctx, jobject self);
jbool M_mindustry_core_World$FilterContext_isMap_R_boolean(jcontext ctx, jobject self);
void M_mindustry_core_World$FilterContext_applyFilters(jcontext ctx, jobject self);
jobject M_mindustry_core_World$FilterContext_getSector_R_mindustry_type_Sector(jcontext ctx, jobject self);
void M_mindustry_core_World$FilterContext_begin(jcontext ctx, jobject self);
jbool M_mindustry_core_World$FilterContext_isGenerating_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_core_World$FilterContext_create_int_int_int_int_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
void M_mindustry_core_World$FilterContext_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_mindustry_core_World$FilterContext_tile_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0);
jobject M_mindustry_core_World$FilterContext_lambda$applyFilters$0_int_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
