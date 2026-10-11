#ifndef HEADER_mindustry_world_blocks_TileBitmask
#define HEADER_mindustry_world_blocks_TileBitmask

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_blocks_TileBitmask {
	java_lang_Object parent;
} mindustry_world_blocks_TileBitmask;

extern Class class_mindustry_world_blocks_TileBitmask;

extern jobject SF_mindustry_world_blocks_TileBitmask_values;

#define VTABLE_mindustry_world_blocks_TileBitmask_hashCode_R_int 0
typedef jint (*func_mindustry_world_blocks_TileBitmask_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_TileBitmask_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_blocks_TileBitmask_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_blocks_TileBitmask_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_blocks_TileBitmask_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_TileBitmask_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_blocks_TileBitmask_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_TileBitmask_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_blocks_TileBitmask_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_TileBitmask_finalize 5
typedef void (*func_mindustry_world_blocks_TileBitmask_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_TileBitmask_notify 6
typedef void (*func_mindustry_world_blocks_TileBitmask_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_TileBitmask_notifyAll 7
typedef void (*func_mindustry_world_blocks_TileBitmask_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_TileBitmask_wait 8
typedef void (*func_mindustry_world_blocks_TileBitmask_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_TileBitmask_wait_long 9
typedef void (*func_mindustry_world_blocks_TileBitmask_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_blocks_TileBitmask_wait_long_int 10
typedef void (*func_mindustry_world_blocks_TileBitmask_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_world_blocks_TileBitmask(jobject object, jint mark, jint depth);
void clinit_mindustry_world_blocks_TileBitmask(jcontext ctx);
void init_mindustry_world_blocks_TileBitmask(jcontext ctx, jobject self);
jobject SM_mindustry_world_blocks_TileBitmask_load_java_lang_String_R_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject param0);
jobject SM_mindustry_world_blocks_TileBitmask_loadVariants_java_lang_String_int_R_Array2_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
