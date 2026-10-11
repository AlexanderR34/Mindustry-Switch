#ifndef HEADER_mindustry_world_TileGen
#define HEADER_mindustry_world_TileGen

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_TileGen {
	java_lang_Object parent;
	jref F_floor;
	jref F_block;
	jref F_overlay;
} mindustry_world_TileGen;

extern Class class_mindustry_world_TileGen;


#define VTABLE_mindustry_world_TileGen_hashCode_R_int 0
typedef jint (*func_mindustry_world_TileGen_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_TileGen_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_TileGen_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_TileGen_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_TileGen_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_TileGen_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_TileGen_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_TileGen_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_TileGen_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_TileGen_finalize 5
typedef void (*func_mindustry_world_TileGen_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_TileGen_notify 6
typedef void (*func_mindustry_world_TileGen_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_TileGen_notifyAll 7
typedef void (*func_mindustry_world_TileGen_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_TileGen_wait 8
typedef void (*func_mindustry_world_TileGen_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_TileGen_wait_long 9
typedef void (*func_mindustry_world_TileGen_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_TileGen_wait_long_int 10
typedef void (*func_mindustry_world_TileGen_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_world_TileGen_reset 11
typedef void (*func_mindustry_world_TileGen_reset)(jcontext ctx, jobject self);

void mark_mindustry_world_TileGen(jobject object, jint mark, jint depth);
void clinit_mindustry_world_TileGen(jcontext ctx);
void init_mindustry_world_TileGen(jcontext ctx, jobject self);
void M_mindustry_world_TileGen_reset(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
