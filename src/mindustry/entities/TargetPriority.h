#ifndef HEADER_mindustry_entities_TargetPriority
#define HEADER_mindustry_entities_TargetPriority

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_TargetPriority {
	java_lang_Object parent;
} mindustry_entities_TargetPriority;

extern Class class_mindustry_entities_TargetPriority;

extern jfloat SF_mindustry_entities_TargetPriority_wall;
extern jfloat SF_mindustry_entities_TargetPriority_under;
extern jfloat SF_mindustry_entities_TargetPriority_transport;
extern jfloat SF_mindustry_entities_TargetPriority_base;
extern jfloat SF_mindustry_entities_TargetPriority_turret;
extern jfloat SF_mindustry_entities_TargetPriority_core;

#define VTABLE_mindustry_entities_TargetPriority_hashCode_R_int 0
typedef jint (*func_mindustry_entities_TargetPriority_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_TargetPriority_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_TargetPriority_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_TargetPriority_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_TargetPriority_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_TargetPriority_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_TargetPriority_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_TargetPriority_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_TargetPriority_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_TargetPriority_finalize 5
typedef void (*func_mindustry_entities_TargetPriority_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_TargetPriority_notify 6
typedef void (*func_mindustry_entities_TargetPriority_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_TargetPriority_notifyAll 7
typedef void (*func_mindustry_entities_TargetPriority_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_TargetPriority_wait 8
typedef void (*func_mindustry_entities_TargetPriority_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_TargetPriority_wait_long 9
typedef void (*func_mindustry_entities_TargetPriority_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_TargetPriority_wait_long_int 10
typedef void (*func_mindustry_entities_TargetPriority_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_entities_TargetPriority(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_TargetPriority(jcontext ctx);
void init_mindustry_entities_TargetPriority(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
