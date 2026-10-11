#ifndef HEADER_rhino_DToA
#define HEADER_rhino_DToA

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_DToA {
	java_lang_Object parent;
} rhino_DToA;

extern Class class_rhino_DToA;

extern jint SF_rhino_DToA_DTOSTR_STANDARD;
extern jint SF_rhino_DToA_DTOSTR_STANDARD_EXPONENTIAL;
extern jint SF_rhino_DToA_DTOSTR_FIXED;
extern jint SF_rhino_DToA_DTOSTR_EXPONENTIAL;
extern jint SF_rhino_DToA_DTOSTR_PRECISION;
extern jint SF_rhino_DToA_Frac_mask;
extern jint SF_rhino_DToA_Exp_shift;
extern jint SF_rhino_DToA_Exp_msk1;
extern jlong SF_rhino_DToA_Frac_maskL;
extern jint SF_rhino_DToA_Exp_shiftL;
extern jlong SF_rhino_DToA_Exp_msk1L;
extern jint SF_rhino_DToA_Bias;
extern jint SF_rhino_DToA_P;
extern jint SF_rhino_DToA_Exp_shift1;
extern jint SF_rhino_DToA_Exp_mask;
extern jint SF_rhino_DToA_Exp_mask_shifted;
extern jint SF_rhino_DToA_Bndry_mask;
extern jint SF_rhino_DToA_Log2P;
extern jint SF_rhino_DToA_Sign_bit;
extern jint SF_rhino_DToA_Exp_11;
extern jint SF_rhino_DToA_Ten_pmax;
extern jint SF_rhino_DToA_Quick_max;
extern jint SF_rhino_DToA_Bletch;
extern jint SF_rhino_DToA_Frac_mask1;
extern jint SF_rhino_DToA_Int_max;
extern jint SF_rhino_DToA_n_bigtens;
extern jobject SF_rhino_DToA_tens;
extern jobject SF_rhino_DToA_bigtens;
extern jobject SF_rhino_DToA_dtoaModes;

#define VTABLE_rhino_DToA_hashCode_R_int 0
typedef jint (*func_rhino_DToA_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_DToA_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_DToA_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_DToA_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_DToA_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_DToA_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_DToA_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_DToA_toString_R_java_lang_String 4
typedef jobject (*func_rhino_DToA_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_DToA_finalize 5
typedef void (*func_rhino_DToA_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_DToA_notify 6
typedef void (*func_rhino_DToA_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_DToA_notifyAll 7
typedef void (*func_rhino_DToA_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_DToA_wait 8
typedef void (*func_rhino_DToA_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_DToA_wait_long 9
typedef void (*func_rhino_DToA_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_DToA_wait_long_int 10
typedef void (*func_rhino_DToA_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_DToA(jobject object, jint mark, jint depth);
void clinit_rhino_DToA(jcontext ctx);
void init_rhino_DToA(jcontext ctx, jobject self);
jchar SM_rhino_DToA_BASEDIGIT_int_R_char(jcontext ctx, jint param0);
jint SM_rhino_DToA_lo0bits_int_R_int(jcontext ctx, jint param0);
jint SM_rhino_DToA_hi0bits_int_R_int(jcontext ctx, jint param0);
void SM_rhino_DToA_stuffBits_Array1_byte_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
jobject SM_rhino_DToA_d2b_double_Array1_int_Array1_int_R_java_math_BigInteger(jcontext ctx, jdouble param0, jobject param1, jobject param2);
jobject SM_rhino_DToA_JS_dtobasestr_int_double_R_java_lang_String(jcontext ctx, jint param0, jdouble param1);
jint SM_rhino_DToA_word0_double_R_int(jcontext ctx, jdouble param0);
jdouble SM_rhino_DToA_setWord0_double_int_R_double(jcontext ctx, jdouble param0, jint param1);
jint SM_rhino_DToA_word1_double_R_int(jcontext ctx, jdouble param0);
jobject SM_rhino_DToA_pow5mult_java_math_BigInteger_int_R_java_math_BigInteger(jcontext ctx, jobject param0, jint param1);
jbool SM_rhino_DToA_roundOff_java_lang_StringBuilder_R_boolean(jcontext ctx, jobject param0);
jint SM_rhino_DToA_JS_dtoa_double_int_boolean_int_Array1_boolean_java_lang_StringBuilder_R_int(jcontext ctx, jdouble param0, jint param1, jbool param2, jint param3, jobject param4, jobject param5);
void SM_rhino_DToA_stripTrailingZeroes_java_lang_StringBuilder(jcontext ctx, jobject param0);
void SM_rhino_DToA_JS_dtostr_java_lang_StringBuilder_int_int_double(jcontext ctx, jobject param0, jint param1, jint param2, jdouble param3);

#ifdef __cplusplus
}
#endif

#endif
