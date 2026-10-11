#ifndef HEADER_mindustry_core_World$Context
#define HEADER_mindustry_core_World$Context

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/world/WorldContext.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_core_World$Context {
	java_lang_Object parent;
	jref F_sector;
	jref F_this$0;
} mindustry_core_World$Context;

extern Class class_mindustry_core_World$Context;


#define VTABLE_mindustry_core_World$Context_hashCode_R_int 0
typedef jint (*func_mindustry_core_World$Context_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$Context_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_core_World$Context_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_World$Context_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_core_World$Context_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$Context_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_core_World$Context_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$Context_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_core_World$Context_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$Context_finalize 5
typedef void (*func_mindustry_core_World$Context_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$Context_notify 6
typedef void (*func_mindustry_core_World$Context_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$Context_notifyAll 7
typedef void (*func_mindustry_core_World$Context_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$Context_wait 8
typedef void (*func_mindustry_core_World$Context_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$Context_wait_long 9
typedef void (*func_mindustry_core_World$Context_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_core_World$Context_wait_long_int 10
typedef void (*func_mindustry_core_World$Context_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_core_World$Context_tile_int_R_mindustry_world_Tile 11
typedef jobject (*func_mindustry_core_World$Context_tile_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_core_World$Context_resize_int_int 12
typedef void (*func_mindustry_core_World$Context_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_core_World$Context_create_int_int_int_int_int_R_mindustry_world_Tile 13
typedef jobject (*func_mindustry_core_World$Context_create_int_int_int_int_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_mindustry_core_World$Context_isGenerating_R_boolean 14
typedef jbool (*func_mindustry_core_World$Context_isGenerating_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$Context_begin 15
typedef void (*func_mindustry_core_World$Context_begin)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$Context_end 16
typedef void (*func_mindustry_core_World$Context_end)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$Context_onReadBuilding 17
typedef void (*func_mindustry_core_World$Context_onReadBuilding)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$Context_onReadTileData 18
typedef void (*func_mindustry_core_World$Context_onReadTileData)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$Context_getSector_R_mindustry_type_Sector 19
typedef jobject (*func_mindustry_core_World$Context_getSector_R_mindustry_type_Sector)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_World$Context_isMap_R_boolean 20
typedef jbool (*func_mindustry_core_World$Context_isMap_R_boolean)(jcontext ctx, jobject self);

void mark_mindustry_core_World$Context(jobject object, jint mark, jint depth);
void clinit_mindustry_core_World$Context(jcontext ctx);
void init_mindustry_core_World$Context_mindustry_core_World(jcontext ctx, jobject self, jobject param0);
void init_mindustry_core_World$Context_mindustry_core_World_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_core_World$Context_tile_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0);
void M_mindustry_core_World$Context_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_mindustry_core_World$Context_create_int_int_int_int_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
jbool M_mindustry_core_World$Context_isGenerating_R_boolean(jcontext ctx, jobject self);
void M_mindustry_core_World$Context_begin(jcontext ctx, jobject self);
void M_mindustry_core_World$Context_end(jcontext ctx, jobject self);
jobject M_mindustry_core_World$Context_getSector_R_mindustry_type_Sector(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
