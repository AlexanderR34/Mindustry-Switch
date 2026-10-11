#ifndef HEADER_arc_util_Timekeeper
#define HEADER_arc_util_Timekeeper

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Timekeeper {
	java_lang_Object parent;
	jlong F_intervalMs;
	jlong F_lastTime;
} arc_util_Timekeeper;

extern Class class_arc_util_Timekeeper;


#define VTABLE_arc_util_Timekeeper_hashCode_R_int 0
typedef jint (*func_arc_util_Timekeeper_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timekeeper_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_Timekeeper_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Timekeeper_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_Timekeeper_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timekeeper_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_Timekeeper_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timekeeper_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_Timekeeper_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timekeeper_finalize 5
typedef void (*func_arc_util_Timekeeper_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timekeeper_notify 6
typedef void (*func_arc_util_Timekeeper_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timekeeper_notifyAll 7
typedef void (*func_arc_util_Timekeeper_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timekeeper_wait 8
typedef void (*func_arc_util_Timekeeper_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timekeeper_wait_long 9
typedef void (*func_arc_util_Timekeeper_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_Timekeeper_wait_long_int 10
typedef void (*func_arc_util_Timekeeper_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_Timekeeper_poll_R_boolean 11
typedef jbool (*func_arc_util_Timekeeper_poll_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timekeeper_get_R_boolean 12
typedef jbool (*func_arc_util_Timekeeper_get_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Timekeeper_reset 13
typedef void (*func_arc_util_Timekeeper_reset)(jcontext ctx, jobject self);

void mark_arc_util_Timekeeper(jobject object, jint mark, jint depth);
void clinit_arc_util_Timekeeper(jcontext ctx);
void init_arc_util_Timekeeper_long(jcontext ctx, jobject self, jlong param0);
jobject SM_arc_util_Timekeeper_ofMillis_long_R_arc_util_Timekeeper(jcontext ctx, jlong param0);
jobject SM_arc_util_Timekeeper_ofTicks_float_R_arc_util_Timekeeper(jcontext ctx, jfloat param0);
jobject SM_arc_util_Timekeeper_ofSeconds_float_R_arc_util_Timekeeper(jcontext ctx, jfloat param0);
jbool M_arc_util_Timekeeper_poll_R_boolean(jcontext ctx, jobject self);
jbool M_arc_util_Timekeeper_get_R_boolean(jcontext ctx, jobject self);
void M_arc_util_Timekeeper_reset(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
