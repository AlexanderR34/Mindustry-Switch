#ifndef HEADER_java_lang_System
#define HEADER_java_lang_System

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_System {
	java_lang_Object parent;
} java_lang_System;

extern Class class_java_lang_System;

extern jobject SF_java_lang_System_err;
extern jobject SF_java_lang_System_out;

#define VTABLE_java_lang_System_hashCode_R_int 0
typedef jint (*func_java_lang_System_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_System_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_System_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_System_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_System_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_System_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_System_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_System_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_System_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_System_finalize 5
typedef void (*func_java_lang_System_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_System_notify 6
typedef void (*func_java_lang_System_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_System_notifyAll 7
typedef void (*func_java_lang_System_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_System_wait 8
typedef void (*func_java_lang_System_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_System_wait_long 9
typedef void (*func_java_lang_System_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_System_wait_long_int 10
typedef void (*func_java_lang_System_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_lang_System(jobject object, jint mark, jint depth);
void clinit_java_lang_System(jcontext ctx);
void init_java_lang_System(jcontext ctx, jobject self);
void SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4);
jlong SM_java_lang_System_currentTimeMillis_R_long(jcontext ctx);
void SM_java_lang_System_load_java_lang_String(jcontext ctx, jobject param0);
void SM_java_lang_System_loadLibrary_java_lang_String(jcontext ctx, jobject param0);
void SM_java_lang_System_exit_int(jcontext ctx, jint param0);
void SM_java_lang_System_exit0_int(jcontext ctx, jint param0);
void SM_java_lang_System_gc(jcontext ctx);
jobject SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_java_lang_System_getProperty_java_lang_String_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0, jobject param1);
jobject SM_java_lang_System_getenv_R_java_util_Map(jcontext ctx);
jobject SM_java_lang_System_getenv_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jint SM_java_lang_System_identityHashCode_java_lang_Object_R_int(jcontext ctx, jobject param0);
jlong SM_java_lang_System_nanoTime_R_long(jcontext ctx);
jobject SM_java_lang_System_getSecurityManager_R_java_lang_SecurityManager(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
