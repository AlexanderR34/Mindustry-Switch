#ifndef HEADER_mindustry_graphics_BlockRenderer$CacheChunk
#define HEADER_mindustry_graphics_BlockRenderer$CacheChunk

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_BlockRenderer$CacheChunk {
	java_lang_Object parent;
	jref F_caches;
	jref F_spriteCacheIndices;
	jref F_cacheIds;
	jref F_dirty;
	jref F_lastSeenTeam;
} mindustry_graphics_BlockRenderer$CacheChunk;

extern Class class_mindustry_graphics_BlockRenderer$CacheChunk;


#define VTABLE_mindustry_graphics_BlockRenderer$CacheChunk_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_BlockRenderer$CacheChunk_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_BlockRenderer$CacheChunk_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_BlockRenderer$CacheChunk_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_BlockRenderer$CacheChunk_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_BlockRenderer$CacheChunk_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_BlockRenderer$CacheChunk_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_BlockRenderer$CacheChunk_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_BlockRenderer$CacheChunk_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_BlockRenderer$CacheChunk_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_BlockRenderer$CacheChunk_finalize 5
typedef void (*func_mindustry_graphics_BlockRenderer$CacheChunk_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_BlockRenderer$CacheChunk_notify 6
typedef void (*func_mindustry_graphics_BlockRenderer$CacheChunk_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_BlockRenderer$CacheChunk_notifyAll 7
typedef void (*func_mindustry_graphics_BlockRenderer$CacheChunk_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_BlockRenderer$CacheChunk_wait 8
typedef void (*func_mindustry_graphics_BlockRenderer$CacheChunk_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_BlockRenderer$CacheChunk_wait_long 9
typedef void (*func_mindustry_graphics_BlockRenderer$CacheChunk_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_BlockRenderer$CacheChunk_wait_long_int 10
typedef void (*func_mindustry_graphics_BlockRenderer$CacheChunk_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_graphics_BlockRenderer$CacheChunk(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_BlockRenderer$CacheChunk(jcontext ctx);
void init_mindustry_graphics_BlockRenderer$CacheChunk(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
