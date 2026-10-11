#ifndef HEADER_mindustry_world_WorldParams
#define HEADER_mindustry_world_WorldParams

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_WorldParams {
	java_lang_Object parent;
	jint F_seedOffset;
	jbool F_saveInfo;
	jint F_corePositionOverride;
} mindustry_world_WorldParams;

extern Class class_mindustry_world_WorldParams;


#define VTABLE_mindustry_world_WorldParams_hashCode_R_int 0
typedef jint (*func_mindustry_world_WorldParams_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_WorldParams_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_WorldParams_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_WorldParams_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_WorldParams_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_WorldParams_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_WorldParams_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_WorldParams_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_WorldParams_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_WorldParams_finalize 5
typedef void (*func_mindustry_world_WorldParams_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_WorldParams_notify 6
typedef void (*func_mindustry_world_WorldParams_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_WorldParams_notifyAll 7
typedef void (*func_mindustry_world_WorldParams_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_WorldParams_wait 8
typedef void (*func_mindustry_world_WorldParams_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_WorldParams_wait_long 9
typedef void (*func_mindustry_world_WorldParams_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_WorldParams_wait_long_int 10
typedef void (*func_mindustry_world_WorldParams_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_world_WorldParams(jobject object, jint mark, jint depth);
void clinit_mindustry_world_WorldParams(jcontext ctx);
void init_mindustry_world_WorldParams(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
