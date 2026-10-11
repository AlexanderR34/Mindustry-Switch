#ifndef HEADER_java_util_Random
#define HEADER_java_util_Random

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Random {
	java_lang_Object parent;
	jlong F_seed;
} java_util_Random;

extern Class class_java_util_Random;

extern jlong SF_java_util_Random_multiplier;

#define VTABLE_java_util_Random_hashCode_R_int 0
typedef jint (*func_java_util_Random_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Random_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Random_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Random_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Random_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Random_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Random_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Random_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Random_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Random_finalize 5
typedef void (*func_java_util_Random_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Random_notify 6
typedef void (*func_java_util_Random_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Random_notifyAll 7
typedef void (*func_java_util_Random_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Random_wait 8
typedef void (*func_java_util_Random_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Random_wait_long 9
typedef void (*func_java_util_Random_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Random_wait_long_int 10
typedef void (*func_java_util_Random_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Random_next_int_R_int 11
typedef jint (*func_java_util_Random_next_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Random_nextDouble_R_double 12
typedef jdouble (*func_java_util_Random_nextDouble_R_double)(jcontext ctx, jobject self);
#define VTABLE_java_util_Random_nextFloat_R_float 13
typedef jfloat (*func_java_util_Random_nextFloat_R_float)(jcontext ctx, jobject self);
#define VTABLE_java_util_Random_nextInt_R_int 14
typedef jint (*func_java_util_Random_nextInt_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Random_nextInt_int_R_int 15
typedef jint (*func_java_util_Random_nextInt_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_Random_nextLong_R_long 16
typedef jlong (*func_java_util_Random_nextLong_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_Random_setSeed_long 17
typedef void (*func_java_util_Random_setSeed_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Random_nextBoolean_R_boolean 18
typedef jbool (*func_java_util_Random_nextBoolean_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Random_nextBytes_Array1_byte 19
typedef void (*func_java_util_Random_nextBytes_Array1_byte)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_Random(jobject object, jint mark, jint depth);
void clinit_java_util_Random(jcontext ctx);
void init_java_util_Random(jcontext ctx, jobject self);
void init_java_util_Random_long(jcontext ctx, jobject self, jlong param0);
jint M_java_util_Random_next_int_R_int(jcontext ctx, jobject self, jint param0);
jdouble M_java_util_Random_nextDouble_R_double(jcontext ctx, jobject self);
jfloat M_java_util_Random_nextFloat_R_float(jcontext ctx, jobject self);
jint M_java_util_Random_nextInt_R_int(jcontext ctx, jobject self);
jint M_java_util_Random_nextInt_int_R_int(jcontext ctx, jobject self, jint param0);
jlong M_java_util_Random_nextLong_R_long(jcontext ctx, jobject self);
void M_java_util_Random_setSeed_long(jcontext ctx, jobject self, jlong param0);
jbool M_java_util_Random_nextBoolean_R_boolean(jcontext ctx, jobject self);
void M_java_util_Random_nextBytes_Array1_byte(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
