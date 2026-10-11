#ifndef HEADER_mindustry_entities_Fires
#define HEADER_mindustry_entities_Fires

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_Fires {
	java_lang_Object parent;
} mindustry_entities_Fires;

extern Class class_mindustry_entities_Fires;

extern jfloat SF_mindustry_entities_Fires_baseLifetime;

#define VTABLE_mindustry_entities_Fires_hashCode_R_int 0
typedef jint (*func_mindustry_entities_Fires_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Fires_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_Fires_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_Fires_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_Fires_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Fires_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_Fires_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Fires_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_Fires_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Fires_finalize 5
typedef void (*func_mindustry_entities_Fires_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Fires_notify 6
typedef void (*func_mindustry_entities_Fires_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Fires_notifyAll 7
typedef void (*func_mindustry_entities_Fires_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Fires_wait 8
typedef void (*func_mindustry_entities_Fires_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Fires_wait_long 9
typedef void (*func_mindustry_entities_Fires_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_Fires_wait_long_int 10
typedef void (*func_mindustry_entities_Fires_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_entities_Fires(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_Fires(jcontext ctx);
void init_mindustry_entities_Fires(jcontext ctx, jobject self);
void SM_mindustry_entities_Fires_create_mindustry_world_Tile(jcontext ctx, jobject param0);
jobject SM_mindustry_entities_Fires_get_mindustry_world_Tile_R_mindustry_gen_Fire(jcontext ctx, jobject param0);
jobject SM_mindustry_entities_Fires_get_int_int_R_mindustry_gen_Fire(jcontext ctx, jint param0, jint param1);
void SM_mindustry_entities_Fires_set_mindustry_world_Tile_mindustry_gen_Fire(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_entities_Fires_has_int_int_R_boolean(jcontext ctx, jint param0, jint param1);
void SM_mindustry_entities_Fires_extinguish_mindustry_world_Tile_float(jcontext ctx, jobject param0, jfloat param1);
void SM_mindustry_entities_Fires_remove_mindustry_world_Tile(jcontext ctx, jobject param0);
void SM_mindustry_entities_Fires_register_mindustry_gen_Fire(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
