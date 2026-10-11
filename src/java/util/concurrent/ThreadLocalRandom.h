#ifndef HEADER_java_util_concurrent_ThreadLocalRandom
#define HEADER_java_util_concurrent_ThreadLocalRandom

#include "Clearwing.h"
#include "java/util/Random.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_ThreadLocalRandom {
	java_util_Random parent;
} java_util_concurrent_ThreadLocalRandom;

extern Class class_java_util_concurrent_ThreadLocalRandom;

extern jobject SF_java_util_concurrent_ThreadLocalRandom_current;

#define VTABLE_java_util_concurrent_ThreadLocalRandom_hashCode_R_int 0
typedef jint (*func_java_util_concurrent_ThreadLocalRandom_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_ThreadLocalRandom_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_concurrent_ThreadLocalRandom_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_ThreadLocalRandom_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_concurrent_ThreadLocalRandom_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_ThreadLocalRandom_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_concurrent_ThreadLocalRandom_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_ThreadLocalRandom_toString_R_java_lang_String 4
typedef jobject (*func_java_util_concurrent_ThreadLocalRandom_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_ThreadLocalRandom_finalize 5
typedef void (*func_java_util_concurrent_ThreadLocalRandom_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_ThreadLocalRandom_notify 6
typedef void (*func_java_util_concurrent_ThreadLocalRandom_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_ThreadLocalRandom_notifyAll 7
typedef void (*func_java_util_concurrent_ThreadLocalRandom_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_ThreadLocalRandom_wait 8
typedef void (*func_java_util_concurrent_ThreadLocalRandom_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_ThreadLocalRandom_wait_long 9
typedef void (*func_java_util_concurrent_ThreadLocalRandom_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_ThreadLocalRandom_wait_long_int 10
typedef void (*func_java_util_concurrent_ThreadLocalRandom_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_concurrent_ThreadLocalRandom_next_int_R_int 11
typedef jint (*func_java_util_concurrent_ThreadLocalRandom_next_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_concurrent_ThreadLocalRandom_nextDouble_R_double 12
typedef jdouble (*func_java_util_concurrent_ThreadLocalRandom_nextDouble_R_double)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_ThreadLocalRandom_nextFloat_R_float 13
typedef jfloat (*func_java_util_concurrent_ThreadLocalRandom_nextFloat_R_float)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_ThreadLocalRandom_nextInt_R_int 14
typedef jint (*func_java_util_concurrent_ThreadLocalRandom_nextInt_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_ThreadLocalRandom_nextInt_int_R_int 15
typedef jint (*func_java_util_concurrent_ThreadLocalRandom_nextInt_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_concurrent_ThreadLocalRandom_nextLong_R_long 16
typedef jlong (*func_java_util_concurrent_ThreadLocalRandom_nextLong_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_ThreadLocalRandom_setSeed_long 17
typedef void (*func_java_util_concurrent_ThreadLocalRandom_setSeed_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_ThreadLocalRandom_nextBoolean_R_boolean 18
typedef jbool (*func_java_util_concurrent_ThreadLocalRandom_nextBoolean_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_ThreadLocalRandom_nextBytes_Array1_byte 19
typedef void (*func_java_util_concurrent_ThreadLocalRandom_nextBytes_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_ThreadLocalRandom_nextInt_int_int_R_int 20
typedef jint (*func_java_util_concurrent_ThreadLocalRandom_nextInt_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_util_concurrent_ThreadLocalRandom_nextLong_long_R_long 21
typedef jlong (*func_java_util_concurrent_ThreadLocalRandom_nextLong_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_ThreadLocalRandom_nextLong_long_long_R_long 22
typedef jlong (*func_java_util_concurrent_ThreadLocalRandom_nextLong_long_long_R_long)(jcontext ctx, jobject self, jlong param0, jlong param1);
#define VTABLE_java_util_concurrent_ThreadLocalRandom_nextDouble_double_R_double 23
typedef jdouble (*func_java_util_concurrent_ThreadLocalRandom_nextDouble_double_R_double)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_java_util_concurrent_ThreadLocalRandom_nextDouble_double_double_R_double 24
typedef jdouble (*func_java_util_concurrent_ThreadLocalRandom_nextDouble_double_double_R_double)(jcontext ctx, jobject self, jdouble param0, jdouble param1);

void mark_java_util_concurrent_ThreadLocalRandom(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_ThreadLocalRandom(jcontext ctx);
void init_java_util_concurrent_ThreadLocalRandom(jcontext ctx, jobject self);
jobject SM_java_util_concurrent_ThreadLocalRandom_current_R_java_util_concurrent_ThreadLocalRandom(jcontext ctx);
jint M_java_util_concurrent_ThreadLocalRandom_nextInt_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
jlong M_java_util_concurrent_ThreadLocalRandom_nextLong_long_R_long(jcontext ctx, jobject self, jlong param0);
jlong M_java_util_concurrent_ThreadLocalRandom_nextLong_long_long_R_long(jcontext ctx, jobject self, jlong param0, jlong param1);
jdouble M_java_util_concurrent_ThreadLocalRandom_nextDouble_double_R_double(jcontext ctx, jobject self, jdouble param0);
jdouble M_java_util_concurrent_ThreadLocalRandom_nextDouble_double_double_R_double(jcontext ctx, jobject self, jdouble param0, jdouble param1);
void init_java_util_concurrent_ThreadLocalRandom_java_util_concurrent_ThreadLocalRandom$1(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
