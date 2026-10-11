#ifndef HEADER_java_util_Collections$1
#define HEADER_java_util_Collections$1

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Collections$1 {
	java_lang_Object parent;
} java_util_Collections$1;

extern Class class_java_util_Collections$1;


#define VTABLE_java_util_Collections$1_hashCode_R_int 0
typedef jint (*func_java_util_Collections$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Collections$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$1_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Collections$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$1_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Collections$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$1_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Collections$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$1_finalize 5
typedef void (*func_java_util_Collections$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$1_notify 6
typedef void (*func_java_util_Collections$1_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$1_notifyAll 7
typedef void (*func_java_util_Collections$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$1_wait 8
typedef void (*func_java_util_Collections$1_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$1_wait_long 9
typedef void (*func_java_util_Collections$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Collections$1_wait_long_int 10
typedef void (*func_java_util_Collections$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Collections$1_hasNext_R_boolean 11
typedef jbool (*func_java_util_Collections$1_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$1_next_R_java_lang_Object 12
typedef jobject (*func_java_util_Collections$1_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$1_remove 13
typedef void (*func_java_util_Collections$1_remove)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$1_forEachRemaining_java_util_function_Consumer 14
typedef void (*func_java_util_Collections$1_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_Collections$1(jobject object, jint mark, jint depth);
void clinit_java_util_Collections$1(jcontext ctx);
void init_java_util_Collections$1(jcontext ctx, jobject self);
jbool M_java_util_Collections$1_hasNext_R_boolean(jcontext ctx, jobject self);
jobject M_java_util_Collections$1_next_R_java_lang_Object(jcontext ctx, jobject self);
void M_java_util_Collections$1_remove(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
