#ifndef HEADER_mindustry_async_PhysicsProcess$PhysicsWorld
#define HEADER_mindustry_async_PhysicsProcess$PhysicsWorld

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_async_PhysicsProcess$PhysicsWorld {
	java_lang_Object parent;
	jref F_tree;
	jref F_bodies;
	jref F_seq;
	jref F_vec;
	jref F_rand;
} mindustry_async_PhysicsProcess$PhysicsWorld;

extern Class class_mindustry_async_PhysicsProcess$PhysicsWorld;

extern jfloat SF_mindustry_async_PhysicsProcess$PhysicsWorld_scl;

#define VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld_hashCode_R_int 0
typedef jint (*func_mindustry_async_PhysicsProcess$PhysicsWorld_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_async_PhysicsProcess$PhysicsWorld_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_async_PhysicsProcess$PhysicsWorld_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_async_PhysicsProcess$PhysicsWorld_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_async_PhysicsProcess$PhysicsWorld_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld_finalize 5
typedef void (*func_mindustry_async_PhysicsProcess$PhysicsWorld_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld_notify 6
typedef void (*func_mindustry_async_PhysicsProcess$PhysicsWorld_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld_notifyAll 7
typedef void (*func_mindustry_async_PhysicsProcess$PhysicsWorld_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld_wait 8
typedef void (*func_mindustry_async_PhysicsProcess$PhysicsWorld_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld_wait_long 9
typedef void (*func_mindustry_async_PhysicsProcess$PhysicsWorld_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld_wait_long_int 10
typedef void (*func_mindustry_async_PhysicsProcess$PhysicsWorld_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld_add_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody 11
typedef void (*func_mindustry_async_PhysicsProcess$PhysicsWorld_add_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld_remove_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody 12
typedef void (*func_mindustry_async_PhysicsProcess$PhysicsWorld_remove_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld_update 13
typedef void (*func_mindustry_async_PhysicsProcess$PhysicsWorld_update)(jcontext ctx, jobject self);

void mark_mindustry_async_PhysicsProcess$PhysicsWorld(jobject object, jint mark, jint depth);
void clinit_mindustry_async_PhysicsProcess$PhysicsWorld(jcontext ctx);
void init_mindustry_async_PhysicsProcess$PhysicsWorld_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0);
void M_mindustry_async_PhysicsProcess$PhysicsWorld_add_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody(jcontext ctx, jobject self, jobject param0);
void M_mindustry_async_PhysicsProcess$PhysicsWorld_remove_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody(jcontext ctx, jobject self, jobject param0);
void M_mindustry_async_PhysicsProcess$PhysicsWorld_update(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
