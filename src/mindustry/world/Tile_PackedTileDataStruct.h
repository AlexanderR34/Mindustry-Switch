#ifndef HEADER_mindustry_world_Tile$PackedTileDataStruct
#define HEADER_mindustry_world_Tile$PackedTileDataStruct

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_Tile$PackedTileDataStruct {
	java_lang_Object parent;
	jint F_extraData;
	jbyte F_data;
	jbyte F_floorData;
	jbyte F_overlayData;
	jref F_this$0;
} mindustry_world_Tile$PackedTileDataStruct;

extern Class class_mindustry_world_Tile$PackedTileDataStruct;


#define VTABLE_mindustry_world_Tile$PackedTileDataStruct_hashCode_R_int 0
typedef jint (*func_mindustry_world_Tile$PackedTileDataStruct_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile$PackedTileDataStruct_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_Tile$PackedTileDataStruct_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Tile$PackedTileDataStruct_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_Tile$PackedTileDataStruct_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile$PackedTileDataStruct_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_Tile$PackedTileDataStruct_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile$PackedTileDataStruct_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_Tile$PackedTileDataStruct_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile$PackedTileDataStruct_finalize 5
typedef void (*func_mindustry_world_Tile$PackedTileDataStruct_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile$PackedTileDataStruct_notify 6
typedef void (*func_mindustry_world_Tile$PackedTileDataStruct_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile$PackedTileDataStruct_notifyAll 7
typedef void (*func_mindustry_world_Tile$PackedTileDataStruct_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile$PackedTileDataStruct_wait 8
typedef void (*func_mindustry_world_Tile$PackedTileDataStruct_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tile$PackedTileDataStruct_wait_long 9
typedef void (*func_mindustry_world_Tile$PackedTileDataStruct_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_Tile$PackedTileDataStruct_wait_long_int 10
typedef void (*func_mindustry_world_Tile$PackedTileDataStruct_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_world_Tile$PackedTileDataStruct(jobject object, jint mark, jint depth);
void clinit_mindustry_world_Tile$PackedTileDataStruct(jcontext ctx);
void init_mindustry_world_Tile$PackedTileDataStruct_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
