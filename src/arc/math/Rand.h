#ifndef HEADER_arc_math_Rand
#define HEADER_arc_math_Rand

#include "Clearwing.h"
#include "java/util/Random.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_Rand {
	java_util_Random parent;
	jlong F_seed0;
	jlong F_seed1;
} arc_math_Rand;

extern Class class_arc_math_Rand;

extern jdouble SF_arc_math_Rand_NORM_DOUBLE;
extern jdouble SF_arc_math_Rand_NORM_FLOAT;

#define VTABLE_arc_math_Rand_hashCode_R_int 0
typedef jint (*func_arc_math_Rand_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Rand_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_Rand_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Rand_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_Rand_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Rand_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_Rand_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Rand_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_Rand_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Rand_finalize 5
typedef void (*func_arc_math_Rand_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Rand_notify 6
typedef void (*func_arc_math_Rand_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Rand_notifyAll 7
typedef void (*func_arc_math_Rand_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Rand_wait 8
typedef void (*func_arc_math_Rand_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Rand_wait_long 9
typedef void (*func_arc_math_Rand_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_Rand_wait_long_int 10
typedef void (*func_arc_math_Rand_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_Rand_next_int_R_int 11
typedef jint (*func_arc_math_Rand_next_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_math_Rand_nextDouble_R_double 12
typedef jdouble (*func_arc_math_Rand_nextDouble_R_double)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Rand_nextFloat_R_float 13
typedef jfloat (*func_arc_math_Rand_nextFloat_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Rand_nextInt_R_int 14
typedef jint (*func_arc_math_Rand_nextInt_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Rand_nextInt_int_R_int 15
typedef jint (*func_arc_math_Rand_nextInt_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_math_Rand_nextLong_R_long 16
typedef jlong (*func_arc_math_Rand_nextLong_R_long)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Rand_setSeed_long 17
typedef void (*func_arc_math_Rand_setSeed_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_Rand_nextBoolean_R_boolean 18
typedef jbool (*func_arc_math_Rand_nextBoolean_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_math_Rand_nextBytes_Array1_byte 19
typedef void (*func_arc_math_Rand_nextBytes_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_Rand_nextLong_long_R_long 20
typedef jlong (*func_arc_math_Rand_nextLong_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_Rand_chance_double_R_boolean 21
typedef jbool (*func_arc_math_Rand_chance_double_R_boolean)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_arc_math_Rand_range_float_R_float 22
typedef jfloat (*func_arc_math_Rand_range_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_Rand_random_float_R_float 23
typedef jfloat (*func_arc_math_Rand_random_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_math_Rand_random_int_R_int 24
typedef jint (*func_arc_math_Rand_random_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_math_Rand_random_float_float_R_float 25
typedef jfloat (*func_arc_math_Rand_random_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_math_Rand_range_int_R_int 26
typedef jint (*func_arc_math_Rand_range_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_math_Rand_random_int_int_R_int 27
typedef jint (*func_arc_math_Rand_random_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_math_Rand_setState_long_long 28
typedef void (*func_arc_math_Rand_setState_long_long)(jcontext ctx, jobject self, jlong param0, jlong param1);
#define VTABLE_arc_math_Rand_getState_int_R_long 29
typedef jlong (*func_arc_math_Rand_getState_int_R_long)(jcontext ctx, jobject self, jint param0);

void mark_arc_math_Rand(jobject object, jint mark, jint depth);
void clinit_arc_math_Rand(jcontext ctx);
void init_arc_math_Rand(jcontext ctx, jobject self);
void init_arc_math_Rand_long(jcontext ctx, jobject self, jlong param0);
void init_arc_math_Rand_long_long(jcontext ctx, jobject self, jlong param0, jlong param1);
jlong SM_arc_math_Rand_murmurHash3_long_R_long(jcontext ctx, jlong param0);
jlong M_arc_math_Rand_nextLong_R_long(jcontext ctx, jobject self);
jint M_arc_math_Rand_next_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_arc_math_Rand_nextInt_R_int(jcontext ctx, jobject self);
jint M_arc_math_Rand_nextInt_int_R_int(jcontext ctx, jobject self, jint param0);
jlong M_arc_math_Rand_nextLong_long_R_long(jcontext ctx, jobject self, jlong param0);
jdouble M_arc_math_Rand_nextDouble_R_double(jcontext ctx, jobject self);
jfloat M_arc_math_Rand_nextFloat_R_float(jcontext ctx, jobject self);
jbool M_arc_math_Rand_nextBoolean_R_boolean(jcontext ctx, jobject self);
void M_arc_math_Rand_nextBytes_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_arc_math_Rand_setSeed_long(jcontext ctx, jobject self, jlong param0);
jbool M_arc_math_Rand_chance_double_R_boolean(jcontext ctx, jobject self, jdouble param0);
jfloat M_arc_math_Rand_range_float_R_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_arc_math_Rand_random_float_R_float(jcontext ctx, jobject self, jfloat param0);
jint M_arc_math_Rand_random_int_R_int(jcontext ctx, jobject self, jint param0);
jfloat M_arc_math_Rand_random_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jint M_arc_math_Rand_range_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_arc_math_Rand_random_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_math_Rand_setState_long_long(jcontext ctx, jobject self, jlong param0, jlong param1);
jlong M_arc_math_Rand_getState_int_R_long(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
