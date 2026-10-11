#ifndef HEADER_java_math_BigInteger
#define HEADER_java_math_BigInteger

#include "Clearwing.h"
#include "java/lang/Number.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_math_BigInteger {
	java_lang_Number parent;
	jint F_signum;
	jref F_mag;
	jint F_bitCount;
	jint F_bitLength;
	jint F_lowestSetBit;
	jint F_firstNonzeroIntNum;
} java_math_BigInteger;

extern Class class_java_math_BigInteger;

extern jlong SF_java_math_BigInteger_LONG_MASK;
extern jint SF_java_math_BigInteger_MAX_MAG_LENGTH;
extern jint SF_java_math_BigInteger_PRIME_SEARCH_BIT_LENGTH_LIMIT;
extern jint SF_java_math_BigInteger_KARATSUBA_THRESHOLD;
extern jint SF_java_math_BigInteger_TOOM_COOK_THRESHOLD;
extern jint SF_java_math_BigInteger_KARATSUBA_SQUARE_THRESHOLD;
extern jint SF_java_math_BigInteger_TOOM_COOK_SQUARE_THRESHOLD;
extern jint SF_java_math_BigInteger_BURNIKEL_ZIEGLER_THRESHOLD;
extern jint SF_java_math_BigInteger_BURNIKEL_ZIEGLER_OFFSET;
extern jint SF_java_math_BigInteger_SCHOENHAGE_BASE_CONVERSION_THRESHOLD;
extern jint SF_java_math_BigInteger_MULTIPLY_SQUARE_THRESHOLD;
extern jint SF_java_math_BigInteger_MONTGOMERY_INTRINSIC_THRESHOLD;
extern jobject SF_java_math_BigInteger_bitsPerDigit;
extern jint SF_java_math_BigInteger_SMALL_PRIME_THRESHOLD;
extern jint SF_java_math_BigInteger_DEFAULT_PRIME_CERTAINTY;
extern jobject SF_java_math_BigInteger_SMALL_PRIME_PRODUCT;
extern jint SF_java_math_BigInteger_MAX_CONSTANT;
extern jobject SF_java_math_BigInteger_posConst;
extern jobject SF_java_math_BigInteger_negConst;
extern volatile jobject SF_java_math_BigInteger_powerCache;
extern jobject SF_java_math_BigInteger_logCache;
extern jdouble SF_java_math_BigInteger_LOG_TWO;
extern jobject SF_java_math_BigInteger_ZERO;
extern jobject SF_java_math_BigInteger_ONE;
extern jobject SF_java_math_BigInteger_TWO;
extern jobject SF_java_math_BigInteger_NEGATIVE_ONE;
extern jobject SF_java_math_BigInteger_TEN;
extern jobject SF_java_math_BigInteger_bnExpModThreshTable;
extern jobject SF_java_math_BigInteger_zeros;
extern jobject SF_java_math_BigInteger_digitsPerLong;
extern jobject SF_java_math_BigInteger_longRadix;
extern jobject SF_java_math_BigInteger_digitsPerInt;
extern jobject SF_java_math_BigInteger_intRadix;
extern jlong SF_java_math_BigInteger_serialVersionUID;
extern jbool SF_java_math_BigInteger_$assertionsDisabled;

#define VTABLE_java_math_BigInteger_hashCode_R_int 0
typedef jint (*func_java_math_BigInteger_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_math_BigInteger_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigInteger_clone_R_java_lang_Object 2
typedef jobject (*func_java_math_BigInteger_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_getClass_R_java_lang_Class 3
typedef jobject (*func_java_math_BigInteger_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_toString_R_java_lang_String 4
typedef jobject (*func_java_math_BigInteger_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_finalize 5
typedef void (*func_java_math_BigInteger_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_notify 6
typedef void (*func_java_math_BigInteger_notify)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_notifyAll 7
typedef void (*func_java_math_BigInteger_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_wait 8
typedef void (*func_java_math_BigInteger_wait)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_wait_long 9
typedef void (*func_java_math_BigInteger_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_math_BigInteger_wait_long_int 10
typedef void (*func_java_math_BigInteger_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_math_BigInteger_intValue_R_int 11
typedef jint (*func_java_math_BigInteger_intValue_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_byteValue_R_byte 12
typedef jbyte (*func_java_math_BigInteger_byteValue_R_byte)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_longValue_R_long 13
typedef jlong (*func_java_math_BigInteger_longValue_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_floatValue_R_float 14
typedef jfloat (*func_java_math_BigInteger_floatValue_R_float)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_doubleValue_R_double 15
typedef jdouble (*func_java_math_BigInteger_doubleValue_R_double)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_shortValue_R_short 16
typedef jshort (*func_java_math_BigInteger_shortValue_R_short)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_compareTo_java_lang_Object_R_int 17
typedef jint (*func_java_math_BigInteger_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigInteger_parseInt_Array1_char_int_int_R_int 18
typedef jint (*func_java_math_BigInteger_parseInt_Array1_char_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_math_BigInteger_nextProbablePrime_R_java_math_BigInteger 19
typedef jobject (*func_java_math_BigInteger_nextProbablePrime_R_java_math_BigInteger)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_primeToCertainty_int_java_util_Random_R_boolean 20
typedef jbool (*func_java_math_BigInteger_primeToCertainty_int_java_util_Random_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_java_math_BigInteger_passesLucasLehmer_R_boolean 21
typedef jbool (*func_java_math_BigInteger_passesLucasLehmer_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_passesMillerRabin_int_java_util_Random_R_boolean 22
typedef jbool (*func_java_math_BigInteger_passesMillerRabin_int_java_util_Random_R_boolean)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_java_math_BigInteger_checkRange 23
typedef void (*func_java_math_BigInteger_checkRange)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger 24
typedef jobject (*func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigInteger_add_long_R_java_math_BigInteger 25
typedef jobject (*func_java_math_BigInteger_add_long_R_java_math_BigInteger)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger 26
typedef jobject (*func_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger 27
typedef jobject (*func_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigInteger_multiply_java_math_BigInteger_boolean_R_java_math_BigInteger 28
typedef jobject (*func_java_math_BigInteger_multiply_java_math_BigInteger_boolean_R_java_math_BigInteger)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_java_math_BigInteger_multiply_long_R_java_math_BigInteger 29
typedef jobject (*func_java_math_BigInteger_multiply_long_R_java_math_BigInteger)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_math_BigInteger_getToomSlice_int_int_int_int_R_java_math_BigInteger 30
typedef jobject (*func_java_math_BigInteger_getToomSlice_int_int_int_int_R_java_math_BigInteger)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_java_math_BigInteger_exactDivideBy3_R_java_math_BigInteger 31
typedef jobject (*func_java_math_BigInteger_exactDivideBy3_R_java_math_BigInteger)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_getLower_int_R_java_math_BigInteger 32
typedef jobject (*func_java_math_BigInteger_getLower_int_R_java_math_BigInteger)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_math_BigInteger_getUpper_int_R_java_math_BigInteger 33
typedef jobject (*func_java_math_BigInteger_getUpper_int_R_java_math_BigInteger)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_math_BigInteger_square_R_java_math_BigInteger 34
typedef jobject (*func_java_math_BigInteger_square_R_java_math_BigInteger)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_square_boolean_R_java_math_BigInteger 35
typedef jobject (*func_java_math_BigInteger_square_boolean_R_java_math_BigInteger)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_math_BigInteger_squareKaratsuba_R_java_math_BigInteger 36
typedef jobject (*func_java_math_BigInteger_squareKaratsuba_R_java_math_BigInteger)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_squareToomCook3_R_java_math_BigInteger 37
typedef jobject (*func_java_math_BigInteger_squareToomCook3_R_java_math_BigInteger)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_divide_java_math_BigInteger_R_java_math_BigInteger 38
typedef jobject (*func_java_math_BigInteger_divide_java_math_BigInteger_R_java_math_BigInteger)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigInteger_divideKnuth_java_math_BigInteger_R_java_math_BigInteger 39
typedef jobject (*func_java_math_BigInteger_divideKnuth_java_math_BigInteger_R_java_math_BigInteger)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigInteger_divideAndRemainder_java_math_BigInteger_R_Array1_java_math_BigInteger 40
typedef jobject (*func_java_math_BigInteger_divideAndRemainder_java_math_BigInteger_R_Array1_java_math_BigInteger)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigInteger_divideAndRemainderKnuth_java_math_BigInteger_R_Array1_java_math_BigInteger 41
typedef jobject (*func_java_math_BigInteger_divideAndRemainderKnuth_java_math_BigInteger_R_Array1_java_math_BigInteger)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigInteger_remainder_java_math_BigInteger_R_java_math_BigInteger 42
typedef jobject (*func_java_math_BigInteger_remainder_java_math_BigInteger_R_java_math_BigInteger)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigInteger_remainderKnuth_java_math_BigInteger_R_java_math_BigInteger 43
typedef jobject (*func_java_math_BigInteger_remainderKnuth_java_math_BigInteger_R_java_math_BigInteger)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigInteger_divideBurnikelZiegler_java_math_BigInteger_R_java_math_BigInteger 44
typedef jobject (*func_java_math_BigInteger_divideBurnikelZiegler_java_math_BigInteger_R_java_math_BigInteger)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigInteger_remainderBurnikelZiegler_java_math_BigInteger_R_java_math_BigInteger 45
typedef jobject (*func_java_math_BigInteger_remainderBurnikelZiegler_java_math_BigInteger_R_java_math_BigInteger)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigInteger_divideAndRemainderBurnikelZiegler_java_math_BigInteger_R_Array1_java_math_BigInteger 46
typedef jobject (*func_java_math_BigInteger_divideAndRemainderBurnikelZiegler_java_math_BigInteger_R_Array1_java_math_BigInteger)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigInteger_pow_int_R_java_math_BigInteger 47
typedef jobject (*func_java_math_BigInteger_pow_int_R_java_math_BigInteger)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_math_BigInteger_gcd_java_math_BigInteger_R_java_math_BigInteger 48
typedef jobject (*func_java_math_BigInteger_gcd_java_math_BigInteger_R_java_math_BigInteger)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigInteger_abs_R_java_math_BigInteger 49
typedef jobject (*func_java_math_BigInteger_abs_R_java_math_BigInteger)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_negate_R_java_math_BigInteger 50
typedef jobject (*func_java_math_BigInteger_negate_R_java_math_BigInteger)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_signum_R_int 51
typedef jint (*func_java_math_BigInteger_signum_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_mod_java_math_BigInteger_R_java_math_BigInteger 52
typedef jobject (*func_java_math_BigInteger_mod_java_math_BigInteger_R_java_math_BigInteger)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigInteger_modPow_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger 53
typedef jobject (*func_java_math_BigInteger_modPow_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_math_BigInteger_oddModPow_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger 54
typedef jobject (*func_java_math_BigInteger_oddModPow_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_math_BigInteger_modPow2_java_math_BigInteger_int_R_java_math_BigInteger 55
typedef jobject (*func_java_math_BigInteger_modPow2_java_math_BigInteger_int_R_java_math_BigInteger)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_math_BigInteger_mod2_int_R_java_math_BigInteger 56
typedef jobject (*func_java_math_BigInteger_mod2_int_R_java_math_BigInteger)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_math_BigInteger_modInverse_java_math_BigInteger_R_java_math_BigInteger 57
typedef jobject (*func_java_math_BigInteger_modInverse_java_math_BigInteger_R_java_math_BigInteger)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger 58
typedef jobject (*func_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_math_BigInteger_shiftRight_int_R_java_math_BigInteger 59
typedef jobject (*func_java_math_BigInteger_shiftRight_int_R_java_math_BigInteger)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_math_BigInteger_shiftRightImpl_int_R_java_math_BigInteger 60
typedef jobject (*func_java_math_BigInteger_shiftRightImpl_int_R_java_math_BigInteger)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_math_BigInteger_javaIncrement_Array1_int_R_Array1_int 61
typedef jobject (*func_java_math_BigInteger_javaIncrement_Array1_int_R_Array1_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigInteger_and_java_math_BigInteger_R_java_math_BigInteger 62
typedef jobject (*func_java_math_BigInteger_and_java_math_BigInteger_R_java_math_BigInteger)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigInteger_or_java_math_BigInteger_R_java_math_BigInteger 63
typedef jobject (*func_java_math_BigInteger_or_java_math_BigInteger_R_java_math_BigInteger)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigInteger_xor_java_math_BigInteger_R_java_math_BigInteger 64
typedef jobject (*func_java_math_BigInteger_xor_java_math_BigInteger_R_java_math_BigInteger)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigInteger_not_R_java_math_BigInteger 65
typedef jobject (*func_java_math_BigInteger_not_R_java_math_BigInteger)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_andNot_java_math_BigInteger_R_java_math_BigInteger 66
typedef jobject (*func_java_math_BigInteger_andNot_java_math_BigInteger_R_java_math_BigInteger)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigInteger_testBit_int_R_boolean 67
typedef jbool (*func_java_math_BigInteger_testBit_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_math_BigInteger_setBit_int_R_java_math_BigInteger 68
typedef jobject (*func_java_math_BigInteger_setBit_int_R_java_math_BigInteger)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_math_BigInteger_clearBit_int_R_java_math_BigInteger 69
typedef jobject (*func_java_math_BigInteger_clearBit_int_R_java_math_BigInteger)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_math_BigInteger_flipBit_int_R_java_math_BigInteger 70
typedef jobject (*func_java_math_BigInteger_flipBit_int_R_java_math_BigInteger)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_math_BigInteger_getLowestSetBit_R_int 71
typedef jint (*func_java_math_BigInteger_getLowestSetBit_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_bitLength_R_int 72
typedef jint (*func_java_math_BigInteger_bitLength_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_bitCount_R_int 73
typedef jint (*func_java_math_BigInteger_bitCount_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_isProbablePrime_int_R_boolean 74
typedef jbool (*func_java_math_BigInteger_isProbablePrime_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_math_BigInteger_compareTo_java_math_BigInteger_R_int 75
typedef jint (*func_java_math_BigInteger_compareTo_java_math_BigInteger_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int 76
typedef jint (*func_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigInteger_compareMagnitude_long_R_int 77
typedef jint (*func_java_math_BigInteger_compareMagnitude_long_R_int)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_math_BigInteger_min_java_math_BigInteger_R_java_math_BigInteger 78
typedef jobject (*func_java_math_BigInteger_min_java_math_BigInteger_R_java_math_BigInteger)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigInteger_max_java_math_BigInteger_R_java_math_BigInteger 79
typedef jobject (*func_java_math_BigInteger_max_java_math_BigInteger_R_java_math_BigInteger)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigInteger_toString_int_R_java_lang_String 80
typedef jobject (*func_java_math_BigInteger_toString_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_math_BigInteger_smallToString_int_R_java_lang_String 81
typedef jobject (*func_java_math_BigInteger_smallToString_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_math_BigInteger_toByteArray_R_Array1_byte 82
typedef jobject (*func_java_math_BigInteger_toByteArray_R_Array1_byte)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_intLength_R_int 83
typedef jint (*func_java_math_BigInteger_intLength_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_signBit_R_int 84
typedef jint (*func_java_math_BigInteger_signBit_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_signInt_R_int 85
typedef jint (*func_java_math_BigInteger_signInt_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_getInt_int_R_int 86
typedef jint (*func_java_math_BigInteger_getInt_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_math_BigInteger_firstNonzeroIntNum_R_int 87
typedef jint (*func_java_math_BigInteger_firstNonzeroIntNum_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_magSerializedForm_R_Array1_byte 88
typedef jobject (*func_java_math_BigInteger_magSerializedForm_R_Array1_byte)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_longValueExact_R_long 89
typedef jlong (*func_java_math_BigInteger_longValueExact_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_intValueExact_R_int 90
typedef jint (*func_java_math_BigInteger_intValueExact_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_shortValueExact_R_short 91
typedef jshort (*func_java_math_BigInteger_shortValueExact_R_short)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigInteger_byteValueExact_R_byte 92
typedef jbyte (*func_java_math_BigInteger_byteValueExact_R_byte)(jcontext ctx, jobject self);

void mark_java_math_BigInteger(jobject object, jint mark, jint depth);
void clinit_java_math_BigInteger(jcontext ctx);
void init_java_math_BigInteger_Array1_byte(jcontext ctx, jobject self, jobject param0);
void init_java_math_BigInteger_Array1_int(jcontext ctx, jobject self, jobject param0);
void init_java_math_BigInteger_int_Array1_byte(jcontext ctx, jobject self, jint param0, jobject param1);
void init_java_math_BigInteger_int_Array1_int(jcontext ctx, jobject self, jint param0, jobject param1);
void init_java_math_BigInteger_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
void init_java_math_BigInteger_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jint M_java_math_BigInteger_parseInt_Array1_char_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void SM_java_math_BigInteger_destructiveMulAdd_Array1_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void init_java_math_BigInteger_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_java_math_BigInteger_int_java_util_Random(jcontext ctx, jobject self, jint param0, jobject param1);
jobject SM_java_math_BigInteger_randomBits_int_java_util_Random_R_Array1_byte(jcontext ctx, jint param0, jobject param1);
void init_java_math_BigInteger_int_int_java_util_Random(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
jobject SM_java_math_BigInteger_probablePrime_int_java_util_Random_R_java_math_BigInteger(jcontext ctx, jint param0, jobject param1);
jobject SM_java_math_BigInteger_smallPrime_int_int_java_util_Random_R_java_math_BigInteger(jcontext ctx, jint param0, jint param1, jobject param2);
jobject SM_java_math_BigInteger_largePrime_int_int_java_util_Random_R_java_math_BigInteger(jcontext ctx, jint param0, jint param1, jobject param2);
jobject M_java_math_BigInteger_nextProbablePrime_R_java_math_BigInteger(jcontext ctx, jobject self);
jint SM_java_math_BigInteger_getPrimeSearchLen_int_R_int(jcontext ctx, jint param0);
jbool M_java_math_BigInteger_primeToCertainty_int_java_util_Random_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1);
jbool M_java_math_BigInteger_passesLucasLehmer_R_boolean(jcontext ctx, jobject self);
jint SM_java_math_BigInteger_jacobiSymbol_int_java_math_BigInteger_R_int(jcontext ctx, jint param0, jobject param1);
jobject SM_java_math_BigInteger_lucasLehmerSequence_int_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jint param0, jobject param1, jobject param2);
jbool M_java_math_BigInteger_passesMillerRabin_int_java_util_Random_R_boolean(jcontext ctx, jobject self, jint param0, jobject param1);
void init_java_math_BigInteger_Array1_int_int(jcontext ctx, jobject self, jobject param0, jint param1);
void init_java_math_BigInteger_Array1_byte_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_java_math_BigInteger_checkRange(jcontext ctx, jobject self);
void SM_java_math_BigInteger_reportOverflow(jcontext ctx);
jobject SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(jcontext ctx, jlong param0);
void init_java_math_BigInteger_long(jcontext ctx, jobject self, jlong param0);
jobject SM_java_math_BigInteger_valueOf_Array1_int_R_java_math_BigInteger(jcontext ctx, jobject param0);
jobject M_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigInteger_add_long_R_java_math_BigInteger(jcontext ctx, jobject self, jlong param0);
jobject SM_java_math_BigInteger_add_Array1_int_long_R_Array1_int(jcontext ctx, jobject param0, jlong param1);
jobject SM_java_math_BigInteger_add_Array1_int_Array1_int_R_Array1_int(jcontext ctx, jobject param0, jobject param1);
jobject SM_java_math_BigInteger_subtract_long_Array1_int_R_Array1_int(jcontext ctx, jlong param0, jobject param1);
jobject SM_java_math_BigInteger_subtract_Array1_int_long_R_Array1_int(jcontext ctx, jobject param0, jlong param1);
jobject M_java_math_BigInteger_subtract_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0);
jobject SM_java_math_BigInteger_subtract_Array1_int_Array1_int_R_Array1_int(jcontext ctx, jobject param0, jobject param1);
jobject M_java_math_BigInteger_multiply_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigInteger_multiply_java_math_BigInteger_boolean_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject SM_java_math_BigInteger_multiplyByInt_Array1_int_int_int_R_java_math_BigInteger(jcontext ctx, jobject param0, jint param1, jint param2);
jobject M_java_math_BigInteger_multiply_long_R_java_math_BigInteger(jcontext ctx, jobject self, jlong param0);
jobject SM_java_math_BigInteger_multiplyToLen_Array1_int_int_Array1_int_int_Array1_int_R_Array1_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jobject param4);
jobject SM_java_math_BigInteger_multiplyKaratsuba_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject param0, jobject param1);
jobject SM_java_math_BigInteger_multiplyToomCook3_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject param0, jobject param1);
jobject M_java_math_BigInteger_getToomSlice_int_int_int_int_R_java_math_BigInteger(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jobject M_java_math_BigInteger_exactDivideBy3_R_java_math_BigInteger(jcontext ctx, jobject self);
jobject M_java_math_BigInteger_getLower_int_R_java_math_BigInteger(jcontext ctx, jobject self, jint param0);
jobject M_java_math_BigInteger_getUpper_int_R_java_math_BigInteger(jcontext ctx, jobject self, jint param0);
jobject M_java_math_BigInteger_square_R_java_math_BigInteger(jcontext ctx, jobject self);
jobject M_java_math_BigInteger_square_boolean_R_java_math_BigInteger(jcontext ctx, jobject self, jbool param0);
jobject SM_java_math_BigInteger_squareToLen_Array1_int_int_Array1_int_R_Array1_int(jcontext ctx, jobject param0, jint param1, jobject param2);
void SM_java_math_BigInteger_implSquareToLenChecks_Array1_int_int_Array1_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3);
jobject SM_java_math_BigInteger_implSquareToLen_Array1_int_int_Array1_int_int_R_Array1_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3);
jobject M_java_math_BigInteger_squareKaratsuba_R_java_math_BigInteger(jcontext ctx, jobject self);
jobject M_java_math_BigInteger_squareToomCook3_R_java_math_BigInteger(jcontext ctx, jobject self);
jobject M_java_math_BigInteger_divide_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigInteger_divideKnuth_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigInteger_divideAndRemainder_java_math_BigInteger_R_Array1_java_math_BigInteger(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigInteger_divideAndRemainderKnuth_java_math_BigInteger_R_Array1_java_math_BigInteger(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigInteger_remainder_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigInteger_remainderKnuth_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigInteger_divideBurnikelZiegler_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigInteger_remainderBurnikelZiegler_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigInteger_divideAndRemainderBurnikelZiegler_java_math_BigInteger_R_Array1_java_math_BigInteger(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigInteger_pow_int_R_java_math_BigInteger(jcontext ctx, jobject self, jint param0);
jobject M_java_math_BigInteger_gcd_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0);
jint SM_java_math_BigInteger_bitLengthForInt_int_R_int(jcontext ctx, jint param0);
jobject SM_java_math_BigInteger_leftShift_Array1_int_int_int_R_Array1_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_java_math_BigInteger_primitiveRightShift_Array1_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_java_math_BigInteger_primitiveLeftShift_Array1_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
jint SM_java_math_BigInteger_bitLength_Array1_int_int_R_int(jcontext ctx, jobject param0, jint param1);
jobject M_java_math_BigInteger_abs_R_java_math_BigInteger(jcontext ctx, jobject self);
jobject M_java_math_BigInteger_negate_R_java_math_BigInteger(jcontext ctx, jobject self);
jint M_java_math_BigInteger_signum_R_int(jcontext ctx, jobject self);
jobject M_java_math_BigInteger_mod_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigInteger_modPow_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject SM_java_math_BigInteger_montgomeryMultiply_Array1_int_Array1_int_Array1_int_int_long_Array1_int_R_Array1_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jlong param4, jobject param5);
jobject SM_java_math_BigInteger_montgomerySquare_Array1_int_Array1_int_int_long_Array1_int_R_Array1_int(jcontext ctx, jobject param0, jobject param1, jint param2, jlong param3, jobject param4);
void SM_java_math_BigInteger_implMontgomeryMultiplyChecks_Array1_int_Array1_int_Array1_int_int_Array1_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jobject param4);
jobject SM_java_math_BigInteger_materialize_Array1_int_int_R_Array1_int(jcontext ctx, jobject param0, jint param1);
jobject SM_java_math_BigInteger_implMontgomeryMultiply_Array1_int_Array1_int_Array1_int_int_long_Array1_int_R_Array1_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jlong param4, jobject param5);
jobject SM_java_math_BigInteger_implMontgomerySquare_Array1_int_Array1_int_int_long_Array1_int_R_Array1_int(jcontext ctx, jobject param0, jobject param1, jint param2, jlong param3, jobject param4);
jobject M_java_math_BigInteger_oddModPow_java_math_BigInteger_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject SM_java_math_BigInteger_montReduce_Array1_int_Array1_int_int_int_R_Array1_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3);
jint SM_java_math_BigInteger_intArrayCmpToLen_Array1_int_Array1_int_int_R_int(jcontext ctx, jobject param0, jobject param1, jint param2);
jint SM_java_math_BigInteger_subN_Array1_int_Array1_int_int_R_int(jcontext ctx, jobject param0, jobject param1, jint param2);
jint SM_java_math_BigInteger_mulAdd_Array1_int_Array1_int_int_int_int_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4);
void SM_java_math_BigInteger_implMulAddCheck_Array1_int_Array1_int_int_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4);
jint SM_java_math_BigInteger_implMulAdd_Array1_int_Array1_int_int_int_int_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4);
jint SM_java_math_BigInteger_addOne_Array1_int_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
jobject M_java_math_BigInteger_modPow2_java_math_BigInteger_int_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_java_math_BigInteger_mod2_int_R_java_math_BigInteger(jcontext ctx, jobject self, jint param0);
jobject M_java_math_BigInteger_modInverse_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigInteger_shiftLeft_int_R_java_math_BigInteger(jcontext ctx, jobject self, jint param0);
jobject SM_java_math_BigInteger_shiftLeft_Array1_int_int_R_Array1_int(jcontext ctx, jobject param0, jint param1);
jobject M_java_math_BigInteger_shiftRight_int_R_java_math_BigInteger(jcontext ctx, jobject self, jint param0);
jobject M_java_math_BigInteger_shiftRightImpl_int_R_java_math_BigInteger(jcontext ctx, jobject self, jint param0);
jobject M_java_math_BigInteger_javaIncrement_Array1_int_R_Array1_int(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigInteger_and_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigInteger_or_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigInteger_xor_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigInteger_not_R_java_math_BigInteger(jcontext ctx, jobject self);
jobject M_java_math_BigInteger_andNot_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0);
jbool M_java_math_BigInteger_testBit_int_R_boolean(jcontext ctx, jobject self, jint param0);
jobject M_java_math_BigInteger_setBit_int_R_java_math_BigInteger(jcontext ctx, jobject self, jint param0);
jobject M_java_math_BigInteger_clearBit_int_R_java_math_BigInteger(jcontext ctx, jobject self, jint param0);
jobject M_java_math_BigInteger_flipBit_int_R_java_math_BigInteger(jcontext ctx, jobject self, jint param0);
jint M_java_math_BigInteger_getLowestSetBit_R_int(jcontext ctx, jobject self);
jint M_java_math_BigInteger_bitLength_R_int(jcontext ctx, jobject self);
jint M_java_math_BigInteger_bitCount_R_int(jcontext ctx, jobject self);
jbool M_java_math_BigInteger_isProbablePrime_int_R_boolean(jcontext ctx, jobject self, jint param0);
jint M_java_math_BigInteger_compareTo_java_math_BigInteger_R_int(jcontext ctx, jobject self, jobject param0);
jint M_java_math_BigInteger_compareMagnitude_java_math_BigInteger_R_int(jcontext ctx, jobject self, jobject param0);
jint M_java_math_BigInteger_compareMagnitude_long_R_int(jcontext ctx, jobject self, jlong param0);
jbool M_java_math_BigInteger_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigInteger_min_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigInteger_max_java_math_BigInteger_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0);
jint M_java_math_BigInteger_hashCode_R_int(jcontext ctx, jobject self);
jobject M_java_math_BigInteger_toString_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
jobject M_java_math_BigInteger_smallToString_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
void SM_java_math_BigInteger_toString_java_math_BigInteger_java_lang_StringBuilder_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3);
jobject SM_java_math_BigInteger_getRadixConversionCache_int_int_R_java_math_BigInteger(jcontext ctx, jint param0, jint param1);
jobject M_java_math_BigInteger_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_math_BigInteger_toByteArray_R_Array1_byte(jcontext ctx, jobject self);
jint M_java_math_BigInteger_intValue_R_int(jcontext ctx, jobject self);
jlong M_java_math_BigInteger_longValue_R_long(jcontext ctx, jobject self);
jfloat M_java_math_BigInteger_floatValue_R_float(jcontext ctx, jobject self);
jdouble M_java_math_BigInteger_doubleValue_R_double(jcontext ctx, jobject self);
jobject SM_java_math_BigInteger_stripLeadingZeroInts_Array1_int_R_Array1_int(jcontext ctx, jobject param0);
jobject SM_java_math_BigInteger_trustedStripLeadingZeroInts_Array1_int_R_Array1_int(jcontext ctx, jobject param0);
jobject SM_java_math_BigInteger_stripLeadingZeroBytes_Array1_byte_R_Array1_int(jcontext ctx, jobject param0);
jobject SM_java_math_BigInteger_makePositive_Array1_byte_R_Array1_int(jcontext ctx, jobject param0);
jobject SM_java_math_BigInteger_makePositive_Array1_int_R_Array1_int(jcontext ctx, jobject param0);
jint M_java_math_BigInteger_intLength_R_int(jcontext ctx, jobject self);
jint M_java_math_BigInteger_signBit_R_int(jcontext ctx, jobject self);
jint M_java_math_BigInteger_signInt_R_int(jcontext ctx, jobject self);
jint M_java_math_BigInteger_getInt_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_java_math_BigInteger_firstNonzeroIntNum_R_int(jcontext ctx, jobject self);
jobject M_java_math_BigInteger_magSerializedForm_R_Array1_byte(jcontext ctx, jobject self);
jlong M_java_math_BigInteger_longValueExact_R_long(jcontext ctx, jobject self);
jint M_java_math_BigInteger_intValueExact_R_int(jcontext ctx, jobject self);
jshort M_java_math_BigInteger_shortValueExact_R_short(jcontext ctx, jobject self);
jbyte M_java_math_BigInteger_byteValueExact_R_byte(jcontext ctx, jobject self);
jint M_java_math_BigInteger_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
