#ifndef HEADER_arc_util_UnsafeBuffers
#define HEADER_arc_util_UnsafeBuffers

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_UnsafeBuffers {
	java_lang_Object parent;
} arc_util_UnsafeBuffers;

extern Class class_arc_util_UnsafeBuffers;

extern jobject SF_arc_util_UnsafeBuffers_unsafe;
extern jlong SF_arc_util_UnsafeBuffers_bufferOffset;
extern jbool SF_arc_util_UnsafeBuffers_failed;
extern jbool SF_arc_util_UnsafeBuffers_initialized;

#define VTABLE_arc_util_UnsafeBuffers_hashCode_R_int 0
typedef jint (*func_arc_util_UnsafeBuffers_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_UnsafeBuffers_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_UnsafeBuffers_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_UnsafeBuffers_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_UnsafeBuffers_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_UnsafeBuffers_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_UnsafeBuffers_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_UnsafeBuffers_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_UnsafeBuffers_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_UnsafeBuffers_finalize 5
typedef void (*func_arc_util_UnsafeBuffers_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_UnsafeBuffers_notify 6
typedef void (*func_arc_util_UnsafeBuffers_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_UnsafeBuffers_notifyAll 7
typedef void (*func_arc_util_UnsafeBuffers_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_UnsafeBuffers_wait 8
typedef void (*func_arc_util_UnsafeBuffers_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_UnsafeBuffers_wait_long 9
typedef void (*func_arc_util_UnsafeBuffers_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_UnsafeBuffers_wait_long_int 10
typedef void (*func_arc_util_UnsafeBuffers_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_UnsafeBuffers(jobject object, jint mark, jint depth);
void clinit_arc_util_UnsafeBuffers(jcontext ctx);
void init_arc_util_UnsafeBuffers(jcontext ctx, jobject self);
void SM_arc_util_UnsafeBuffers_checkInit(jcontext ctx);
void SM_arc_util_UnsafeBuffers_copy_java_nio_Buffer_int_java_nio_Buffer_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4);

#ifdef __cplusplus
}
#endif

#endif
