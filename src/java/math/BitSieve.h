#ifndef HEADER_java_math_BitSieve
#define HEADER_java_math_BitSieve

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_math_BitSieve {
	java_lang_Object parent;
	jref F_bits;
	jint F_length;
} java_math_BitSieve;

extern Class class_java_math_BitSieve;

extern jobject SF_java_math_BitSieve_smallSieve;

#define VTABLE_java_math_BitSieve_hashCode_R_int 0
typedef jint (*func_java_math_BitSieve_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_math_BitSieve_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_math_BitSieve_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BitSieve_clone_R_java_lang_Object 2
typedef jobject (*func_java_math_BitSieve_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_math_BitSieve_getClass_R_java_lang_Class 3
typedef jobject (*func_java_math_BitSieve_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_math_BitSieve_toString_R_java_lang_String 4
typedef jobject (*func_java_math_BitSieve_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_math_BitSieve_finalize 5
typedef void (*func_java_math_BitSieve_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_math_BitSieve_notify 6
typedef void (*func_java_math_BitSieve_notify)(jcontext ctx, jobject self);
#define VTABLE_java_math_BitSieve_notifyAll 7
typedef void (*func_java_math_BitSieve_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_math_BitSieve_wait 8
typedef void (*func_java_math_BitSieve_wait)(jcontext ctx, jobject self);
#define VTABLE_java_math_BitSieve_wait_long 9
typedef void (*func_java_math_BitSieve_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_math_BitSieve_wait_long_int 10
typedef void (*func_java_math_BitSieve_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_math_BitSieve_get_int_R_boolean 11
typedef jbool (*func_java_math_BitSieve_get_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_math_BitSieve_set_int 12
typedef void (*func_java_math_BitSieve_set_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_math_BitSieve_sieveSearch_int_int_R_int 13
typedef jint (*func_java_math_BitSieve_sieveSearch_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_math_BitSieve_sieveSingle_int_int_int 14
typedef void (*func_java_math_BitSieve_sieveSingle_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_java_math_BitSieve_retrieve_java_math_BigInteger_int_java_util_Random_R_java_math_BigInteger 15
typedef jobject (*func_java_math_BitSieve_retrieve_java_math_BigInteger_int_java_util_Random_R_java_math_BigInteger)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);

void mark_java_math_BitSieve(jobject object, jint mark, jint depth);
void clinit_java_math_BitSieve(jcontext ctx);
void init_java_math_BitSieve(jcontext ctx, jobject self);
void init_java_math_BitSieve_java_math_BigInteger_int(jcontext ctx, jobject self, jobject param0, jint param1);
jint SM_java_math_BitSieve_unitIndex_int_R_int(jcontext ctx, jint param0);
jlong SM_java_math_BitSieve_bit_int_R_long(jcontext ctx, jint param0);
jbool M_java_math_BitSieve_get_int_R_boolean(jcontext ctx, jobject self, jint param0);
void M_java_math_BitSieve_set_int(jcontext ctx, jobject self, jint param0);
jint M_java_math_BitSieve_sieveSearch_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_java_math_BitSieve_sieveSingle_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
jobject M_java_math_BitSieve_retrieve_java_math_BigInteger_int_java_util_Random_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
