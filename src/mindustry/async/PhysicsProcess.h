#ifndef HEADER_mindustry_async_PhysicsProcess
#define HEADER_mindustry_async_PhysicsProcess

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/async/AsyncProcess.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_async_PhysicsProcess {
	java_lang_Object parent;
	jref F_physics;
	jref F_refs;
	jref F_futures;
	jref F_pendingAdds;
} mindustry_async_PhysicsProcess;

extern Class class_mindustry_async_PhysicsProcess;

extern jint SF_mindustry_async_PhysicsProcess_mobileIterations;
extern jint SF_mindustry_async_PhysicsProcess_desktopIterations;
extern jint SF_mindustry_async_PhysicsProcess_layers;
extern jint SF_mindustry_async_PhysicsProcess_layerGround;
extern jint SF_mindustry_async_PhysicsProcess_layerLegs;
extern jint SF_mindustry_async_PhysicsProcess_layerFlying;
extern jint SF_mindustry_async_PhysicsProcess_layerUnderwater;
extern volatile jlong SF_mindustry_async_PhysicsProcess_maxPhysicsTime;

#define VTABLE_mindustry_async_PhysicsProcess_hashCode_R_int 0
typedef jint (*func_mindustry_async_PhysicsProcess_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_async_PhysicsProcess_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_async_PhysicsProcess_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_async_PhysicsProcess_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_async_PhysicsProcess_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_async_PhysicsProcess_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess_finalize 5
typedef void (*func_mindustry_async_PhysicsProcess_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess_notify 6
typedef void (*func_mindustry_async_PhysicsProcess_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess_notifyAll 7
typedef void (*func_mindustry_async_PhysicsProcess_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess_wait 8
typedef void (*func_mindustry_async_PhysicsProcess_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess_wait_long 9
typedef void (*func_mindustry_async_PhysicsProcess_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_async_PhysicsProcess_wait_long_int 10
typedef void (*func_mindustry_async_PhysicsProcess_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_async_PhysicsProcess_init 11
typedef void (*func_mindustry_async_PhysicsProcess_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess_reset 12
typedef void (*func_mindustry_async_PhysicsProcess_reset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess_begin 13
typedef void (*func_mindustry_async_PhysicsProcess_begin)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess_process 14
typedef void (*func_mindustry_async_PhysicsProcess_process)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess_end 15
typedef void (*func_mindustry_async_PhysicsProcess_end)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess_shouldProcess_R_boolean 16
typedef jbool (*func_mindustry_async_PhysicsProcess_shouldProcess_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess_add_mindustry_gen_Unit 17
typedef void (*func_mindustry_async_PhysicsProcess_add_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_async_PhysicsProcess(jobject object, jint mark, jint depth);
void clinit_mindustry_async_PhysicsProcess(jcontext ctx);
void init_mindustry_async_PhysicsProcess(jcontext ctx, jobject self);
void M_mindustry_async_PhysicsProcess_add_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_async_PhysicsProcess_begin(jcontext ctx, jobject self);
jbool M_mindustry_async_PhysicsProcess_shouldProcess_R_boolean(jcontext ctx, jobject self);
void M_mindustry_async_PhysicsProcess_reset(jcontext ctx, jobject self);
void M_mindustry_async_PhysicsProcess_init(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
