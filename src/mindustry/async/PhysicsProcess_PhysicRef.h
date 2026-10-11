#ifndef HEADER_mindustry_async_PhysicsProcess$PhysicRef
#define HEADER_mindustry_async_PhysicsProcess$PhysicRef

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_async_PhysicsProcess$PhysicRef {
	java_lang_Object parent;
	jref F_entity;
	jref F_body;
	jfloat F_startX;
	jfloat F_startY;
	jint F_lastLayer;
} mindustry_async_PhysicsProcess$PhysicRef;

extern Class class_mindustry_async_PhysicsProcess$PhysicRef;


#define VTABLE_mindustry_async_PhysicsProcess$PhysicRef_hashCode_R_int 0
typedef jint (*func_mindustry_async_PhysicsProcess$PhysicRef_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicRef_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_async_PhysicsProcess$PhysicRef_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicRef_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_async_PhysicsProcess$PhysicRef_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicRef_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_async_PhysicsProcess$PhysicRef_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicRef_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_async_PhysicsProcess$PhysicRef_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicRef_finalize 5
typedef void (*func_mindustry_async_PhysicsProcess$PhysicRef_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicRef_notify 6
typedef void (*func_mindustry_async_PhysicsProcess$PhysicRef_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicRef_notifyAll 7
typedef void (*func_mindustry_async_PhysicsProcess$PhysicRef_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicRef_wait 8
typedef void (*func_mindustry_async_PhysicsProcess$PhysicRef_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicRef_wait_long 9
typedef void (*func_mindustry_async_PhysicsProcess$PhysicRef_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicRef_wait_long_int 10
typedef void (*func_mindustry_async_PhysicsProcess$PhysicRef_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_async_PhysicsProcess$PhysicRef(jobject object, jint mark, jint depth);
void clinit_mindustry_async_PhysicsProcess$PhysicRef(jcontext ctx);
void init_mindustry_async_PhysicsProcess$PhysicRef_mindustry_gen_Unit_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
