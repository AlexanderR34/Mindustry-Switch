#ifndef HEADER_arc_util_Time$DelayRun
#define HEADER_arc_util_Time$DelayRun

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/pooling/Pool_Poolable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Time$DelayRun {
	java_lang_Object parent;
	jfloat F_delay;
	jref F_finish;
} arc_util_Time$DelayRun;

extern Class class_arc_util_Time$DelayRun;


#define VTABLE_arc_util_Time$DelayRun_hashCode_R_int 0
typedef jint (*func_arc_util_Time$DelayRun_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Time$DelayRun_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_Time$DelayRun_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Time$DelayRun_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_Time$DelayRun_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Time$DelayRun_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_Time$DelayRun_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Time$DelayRun_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_Time$DelayRun_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Time$DelayRun_finalize 5
typedef void (*func_arc_util_Time$DelayRun_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Time$DelayRun_notify 6
typedef void (*func_arc_util_Time$DelayRun_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Time$DelayRun_notifyAll 7
typedef void (*func_arc_util_Time$DelayRun_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Time$DelayRun_wait 8
typedef void (*func_arc_util_Time$DelayRun_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Time$DelayRun_wait_long 9
typedef void (*func_arc_util_Time$DelayRun_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_Time$DelayRun_wait_long_int 10
typedef void (*func_arc_util_Time$DelayRun_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_Time$DelayRun_reset 11
typedef void (*func_arc_util_Time$DelayRun_reset)(jcontext ctx, jobject self);

void mark_arc_util_Time$DelayRun(jobject object, jint mark, jint depth);
void clinit_arc_util_Time$DelayRun(jcontext ctx);
void init_arc_util_Time$DelayRun(jcontext ctx, jobject self);
void M_arc_util_Time$DelayRun_reset(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
