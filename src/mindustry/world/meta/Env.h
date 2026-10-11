#ifndef HEADER_mindustry_world_meta_Env
#define HEADER_mindustry_world_meta_Env

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_meta_Env {
	java_lang_Object parent;
} mindustry_world_meta_Env;

extern Class class_mindustry_world_meta_Env;

extern jint SF_mindustry_world_meta_Env_terrestrial;
extern jint SF_mindustry_world_meta_Env_space;
extern jint SF_mindustry_world_meta_Env_underwater;
extern jint SF_mindustry_world_meta_Env_spores;
extern jint SF_mindustry_world_meta_Env_scorching;
extern jint SF_mindustry_world_meta_Env_groundOil;
extern jint SF_mindustry_world_meta_Env_groundWater;
extern jint SF_mindustry_world_meta_Env_oxygen;
extern jint SF_mindustry_world_meta_Env_any;
extern jint SF_mindustry_world_meta_Env_none;

#define VTABLE_mindustry_world_meta_Env_hashCode_R_int 0
typedef jint (*func_mindustry_world_meta_Env_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_Env_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_meta_Env_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_meta_Env_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_meta_Env_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_Env_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_meta_Env_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_Env_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_meta_Env_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_Env_finalize 5
typedef void (*func_mindustry_world_meta_Env_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_Env_notify 6
typedef void (*func_mindustry_world_meta_Env_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_Env_notifyAll 7
typedef void (*func_mindustry_world_meta_Env_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_Env_wait 8
typedef void (*func_mindustry_world_meta_Env_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_Env_wait_long 9
typedef void (*func_mindustry_world_meta_Env_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_meta_Env_wait_long_int 10
typedef void (*func_mindustry_world_meta_Env_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_world_meta_Env(jobject object, jint mark, jint depth);
void clinit_mindustry_world_meta_Env(jcontext ctx);
void init_mindustry_world_meta_Env(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
