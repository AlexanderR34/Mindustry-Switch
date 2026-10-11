#ifndef HEADER_mindustry_world_Tiles$TileIterator
#define HEADER_mindustry_world_Tiles$TileIterator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_Tiles$TileIterator {
	java_lang_Object parent;
	jint F_index;
	jref F_this$0;
} mindustry_world_Tiles$TileIterator;

extern Class class_mindustry_world_Tiles$TileIterator;


#define VTABLE_mindustry_world_Tiles$TileIterator_hashCode_R_int 0
typedef jint (*func_mindustry_world_Tiles$TileIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tiles$TileIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_Tiles$TileIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Tiles$TileIterator_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_Tiles$TileIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tiles$TileIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_Tiles$TileIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tiles$TileIterator_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_Tiles$TileIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tiles$TileIterator_finalize 5
typedef void (*func_mindustry_world_Tiles$TileIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tiles$TileIterator_notify 6
typedef void (*func_mindustry_world_Tiles$TileIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tiles$TileIterator_notifyAll 7
typedef void (*func_mindustry_world_Tiles$TileIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tiles$TileIterator_wait 8
typedef void (*func_mindustry_world_Tiles$TileIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tiles$TileIterator_wait_long 9
typedef void (*func_mindustry_world_Tiles$TileIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_Tiles$TileIterator_wait_long_int 10
typedef void (*func_mindustry_world_Tiles$TileIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_world_Tiles$TileIterator_hasNext_R_boolean 11
typedef jbool (*func_mindustry_world_Tiles$TileIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tiles$TileIterator_next_R_java_lang_Object 12
typedef jobject (*func_mindustry_world_Tiles$TileIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tiles$TileIterator_remove 13
typedef void (*func_mindustry_world_Tiles$TileIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_Tiles$TileIterator_forEachRemaining_java_util_function_Consumer 14
typedef void (*func_mindustry_world_Tiles$TileIterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_Tiles$TileIterator_next_R_mindustry_world_Tile 15
typedef jobject (*func_mindustry_world_Tiles$TileIterator_next_R_mindustry_world_Tile)(jcontext ctx, jobject self);

void mark_mindustry_world_Tiles$TileIterator(jobject object, jint mark, jint depth);
void clinit_mindustry_world_Tiles$TileIterator(jcontext ctx);
void init_mindustry_world_Tiles$TileIterator_mindustry_world_Tiles(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_world_Tiles$TileIterator_hasNext_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_world_Tiles$TileIterator_next_R_mindustry_world_Tile(jcontext ctx, jobject self);
jobject M_mindustry_world_Tiles$TileIterator_next_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
