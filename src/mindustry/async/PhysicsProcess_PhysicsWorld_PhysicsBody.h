#ifndef HEADER_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody
#define HEADER_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody {
	java_lang_Object parent;
	jfloat F_x;
	jfloat F_y;
	jfloat F_radius;
	jfloat F_mass;
	jbool F_collided;
	jbool F_local;
} mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody;

extern Class class_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody;


#define VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody_hashCode_R_int 0
typedef jint (*func_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody_finalize 5
typedef void (*func_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody_notify 6
typedef void (*func_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody_notifyAll 7
typedef void (*func_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody_wait 8
typedef void (*func_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody_wait_long 9
typedef void (*func_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody_wait_long_int 10
typedef void (*func_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody_hitbox_arc_math_geom_Rect 11
typedef void (*func_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody_hitbox_arc_math_geom_Rect)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody(jobject object, jint mark, jint depth);
void clinit_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody(jcontext ctx);
void init_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody(jcontext ctx, jobject self);
void M_mindustry_async_PhysicsProcess$PhysicsWorld$PhysicsBody_hitbox_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
