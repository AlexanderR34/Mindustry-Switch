#ifndef HEADER_arc_scene_Action
#define HEADER_arc_scene_Action

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/pooling/Pool_Poolable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_scene_Action {
	java_lang_Object parent;
	jref F_actor;
	jref F_target;
	jref F_pool;
} arc_scene_Action;

extern Class class_arc_scene_Action;


#define VTABLE_arc_scene_Action_hashCode_R_int 0
typedef jint (*func_arc_scene_Action_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Action_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_scene_Action_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Action_clone_R_java_lang_Object 2
typedef jobject (*func_arc_scene_Action_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Action_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_scene_Action_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Action_toString_R_java_lang_String 4
typedef jobject (*func_arc_scene_Action_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Action_finalize 5
typedef void (*func_arc_scene_Action_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Action_notify 6
typedef void (*func_arc_scene_Action_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Action_notifyAll 7
typedef void (*func_arc_scene_Action_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Action_wait 8
typedef void (*func_arc_scene_Action_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Action_wait_long 9
typedef void (*func_arc_scene_Action_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_scene_Action_wait_long_int 10
typedef void (*func_arc_scene_Action_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_scene_Action_reset 11
typedef void (*func_arc_scene_Action_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Action_act_float_R_boolean 12
typedef jbool (*func_arc_scene_Action_act_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_scene_Action_restart 13
typedef void (*func_arc_scene_Action_restart)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Action_getActor_R_arc_scene_Element 14
typedef jobject (*func_arc_scene_Action_getActor_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Action_setActor_arc_scene_Element 15
typedef void (*func_arc_scene_Action_setActor_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Action_getTarget_R_arc_scene_Element 16
typedef jobject (*func_arc_scene_Action_getTarget_R_arc_scene_Element)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Action_setTarget_arc_scene_Element 17
typedef void (*func_arc_scene_Action_setTarget_arc_scene_Element)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_scene_Action_getPool_R_arc_util_pooling_Pool 18
typedef jobject (*func_arc_scene_Action_getPool_R_arc_util_pooling_Pool)(jcontext ctx, jobject self);
#define VTABLE_arc_scene_Action_setPool_arc_util_pooling_Pool 19
typedef void (*func_arc_scene_Action_setPool_arc_util_pooling_Pool)(jcontext ctx, jobject self, jobject param0);

void mark_arc_scene_Action(jobject object, jint mark, jint depth);
void clinit_arc_scene_Action(jcontext ctx);
void init_arc_scene_Action(jcontext ctx, jobject self);
void M_arc_scene_Action_restart(jcontext ctx, jobject self);
jobject M_arc_scene_Action_getActor_R_arc_scene_Element(jcontext ctx, jobject self);
void M_arc_scene_Action_setActor_arc_scene_Element(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_Action_getTarget_R_arc_scene_Element(jcontext ctx, jobject self);
void M_arc_scene_Action_setTarget_arc_scene_Element(jcontext ctx, jobject self, jobject param0);
void M_arc_scene_Action_reset(jcontext ctx, jobject self);
jobject M_arc_scene_Action_getPool_R_arc_util_pooling_Pool(jcontext ctx, jobject self);
void M_arc_scene_Action_setPool_arc_util_pooling_Pool(jcontext ctx, jobject self, jobject param0);
jobject M_arc_scene_Action_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
