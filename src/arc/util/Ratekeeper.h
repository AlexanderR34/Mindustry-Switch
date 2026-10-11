#ifndef HEADER_arc_util_Ratekeeper
#define HEADER_arc_util_Ratekeeper

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Ratekeeper {
	java_lang_Object parent;
	jint F_occurences;
	jlong F_lastTime;
} arc_util_Ratekeeper;

extern Class class_arc_util_Ratekeeper;


#define VTABLE_arc_util_Ratekeeper_hashCode_R_int 0
typedef jint (*func_arc_util_Ratekeeper_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Ratekeeper_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_Ratekeeper_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Ratekeeper_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_Ratekeeper_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Ratekeeper_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_Ratekeeper_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Ratekeeper_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_Ratekeeper_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Ratekeeper_finalize 5
typedef void (*func_arc_util_Ratekeeper_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Ratekeeper_notify 6
typedef void (*func_arc_util_Ratekeeper_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Ratekeeper_notifyAll 7
typedef void (*func_arc_util_Ratekeeper_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Ratekeeper_wait 8
typedef void (*func_arc_util_Ratekeeper_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Ratekeeper_wait_long 9
typedef void (*func_arc_util_Ratekeeper_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_Ratekeeper_wait_long_int 10
typedef void (*func_arc_util_Ratekeeper_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_Ratekeeper_allow_long_int_R_boolean 11
typedef jbool (*func_arc_util_Ratekeeper_allow_long_int_R_boolean)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_Ratekeeper_reset 12
typedef void (*func_arc_util_Ratekeeper_reset)(jcontext ctx, jobject self);

void mark_arc_util_Ratekeeper(jobject object, jint mark, jint depth);
void clinit_arc_util_Ratekeeper(jcontext ctx);
void init_arc_util_Ratekeeper(jcontext ctx, jobject self);
jbool M_arc_util_Ratekeeper_allow_long_int_R_boolean(jcontext ctx, jobject self, jlong param0, jint param1);
void M_arc_util_Ratekeeper_reset(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
