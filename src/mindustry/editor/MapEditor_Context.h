#ifndef HEADER_mindustry_editor_MapEditor$Context
#define HEADER_mindustry_editor_MapEditor$Context

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/world/WorldContext.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_editor_MapEditor$Context {
	java_lang_Object parent;
	jref F_this$0;
} mindustry_editor_MapEditor$Context;

extern Class class_mindustry_editor_MapEditor$Context;


#define VTABLE_mindustry_editor_MapEditor$Context_hashCode_R_int 0
typedef jint (*func_mindustry_editor_MapEditor$Context_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor$Context_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_editor_MapEditor$Context_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_MapEditor$Context_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_editor_MapEditor$Context_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor$Context_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_editor_MapEditor$Context_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor$Context_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_editor_MapEditor$Context_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor$Context_finalize 5
typedef void (*func_mindustry_editor_MapEditor$Context_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor$Context_notify 6
typedef void (*func_mindustry_editor_MapEditor$Context_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor$Context_notifyAll 7
typedef void (*func_mindustry_editor_MapEditor$Context_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor$Context_wait 8
typedef void (*func_mindustry_editor_MapEditor$Context_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor$Context_wait_long 9
typedef void (*func_mindustry_editor_MapEditor$Context_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_editor_MapEditor$Context_wait_long_int 10
typedef void (*func_mindustry_editor_MapEditor$Context_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_editor_MapEditor$Context_tile_int_R_mindustry_world_Tile 11
typedef jobject (*func_mindustry_editor_MapEditor$Context_tile_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_editor_MapEditor$Context_resize_int_int 12
typedef void (*func_mindustry_editor_MapEditor$Context_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_editor_MapEditor$Context_create_int_int_int_int_int_R_mindustry_world_Tile 13
typedef jobject (*func_mindustry_editor_MapEditor$Context_create_int_int_int_int_int_R_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_mindustry_editor_MapEditor$Context_isGenerating_R_boolean 14
typedef jbool (*func_mindustry_editor_MapEditor$Context_isGenerating_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor$Context_begin 15
typedef void (*func_mindustry_editor_MapEditor$Context_begin)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor$Context_end 16
typedef void (*func_mindustry_editor_MapEditor$Context_end)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor$Context_onReadBuilding 17
typedef void (*func_mindustry_editor_MapEditor$Context_onReadBuilding)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor$Context_onReadTileData 18
typedef void (*func_mindustry_editor_MapEditor$Context_onReadTileData)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor$Context_getSector_R_mindustry_type_Sector 19
typedef jobject (*func_mindustry_editor_MapEditor$Context_getSector_R_mindustry_type_Sector)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_MapEditor$Context_isMap_R_boolean 20
typedef jbool (*func_mindustry_editor_MapEditor$Context_isMap_R_boolean)(jcontext ctx, jobject self);

void mark_mindustry_editor_MapEditor$Context(jobject object, jint mark, jint depth);
void clinit_mindustry_editor_MapEditor$Context(jcontext ctx);
void init_mindustry_editor_MapEditor$Context_mindustry_editor_MapEditor(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_editor_MapEditor$Context_tile_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0);
void M_mindustry_editor_MapEditor$Context_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_mindustry_editor_MapEditor$Context_create_int_int_int_int_int_R_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
jbool M_mindustry_editor_MapEditor$Context_isGenerating_R_boolean(jcontext ctx, jobject self);
void M_mindustry_editor_MapEditor$Context_begin(jcontext ctx, jobject self);
void M_mindustry_editor_MapEditor$Context_end(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
