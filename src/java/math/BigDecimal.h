#ifndef HEADER_java_math_BigDecimal
#define HEADER_java_math_BigDecimal

#include "Clearwing.h"
#include "java/lang/Number.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_math_BigDecimal {
	java_lang_Number parent;
	jref F_intVal;
	jint F_scale;
	jint F_precision;
	jref F_stringCache;
	jlong F_intCompact;
} java_math_BigDecimal;

extern Class class_java_math_BigDecimal;

extern jlong SF_java_math_BigDecimal_INFLATED;
extern jobject SF_java_math_BigDecimal_INFLATED_BIGINT;
extern jint SF_java_math_BigDecimal_MAX_COMPACT_DIGITS;
extern jlong SF_java_math_BigDecimal_serialVersionUID;
extern jobject SF_java_math_BigDecimal_threadLocalStringBuilderHelper;
extern jobject SF_java_math_BigDecimal_zeroThroughTen;
extern jobject SF_java_math_BigDecimal_ZERO_SCALED_BY;
extern jlong SF_java_math_BigDecimal_HALF_LONG_MAX_VALUE;
extern jlong SF_java_math_BigDecimal_HALF_LONG_MIN_VALUE;
extern jobject SF_java_math_BigDecimal_ZERO;
extern jobject SF_java_math_BigDecimal_ONE;
extern jobject SF_java_math_BigDecimal_TEN;
extern jint SF_java_math_BigDecimal_ROUND_UP;
extern jint SF_java_math_BigDecimal_ROUND_DOWN;
extern jint SF_java_math_BigDecimal_ROUND_CEILING;
extern jint SF_java_math_BigDecimal_ROUND_FLOOR;
extern jint SF_java_math_BigDecimal_ROUND_HALF_UP;
extern jint SF_java_math_BigDecimal_ROUND_HALF_DOWN;
extern jint SF_java_math_BigDecimal_ROUND_HALF_EVEN;
extern jint SF_java_math_BigDecimal_ROUND_UNNECESSARY;
extern jobject SF_java_math_BigDecimal_double10pow;
extern jobject SF_java_math_BigDecimal_float10pow;
extern jobject SF_java_math_BigDecimal_LONG_TEN_POWERS_TABLE;
extern volatile jobject SF_java_math_BigDecimal_BIG_TEN_POWERS_TABLE;
extern jint SF_java_math_BigDecimal_BIG_TEN_POWERS_TABLE_INITLEN;
extern jint SF_java_math_BigDecimal_BIG_TEN_POWERS_TABLE_MAX;
extern jobject SF_java_math_BigDecimal_THRESHOLDS_TABLE;
extern jlong SF_java_math_BigDecimal_DIV_NUM_BASE;
extern jobject SF_java_math_BigDecimal_LONGLONG_TEN_POWERS_TABLE;
extern jbool SF_java_math_BigDecimal_$assertionsDisabled;

#define VTABLE_java_math_BigDecimal_hashCode_R_int 0
typedef jint (*func_java_math_BigDecimal_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_math_BigDecimal_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigDecimal_clone_R_java_lang_Object 2
typedef jobject (*func_java_math_BigDecimal_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_getClass_R_java_lang_Class 3
typedef jobject (*func_java_math_BigDecimal_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_toString_R_java_lang_String 4
typedef jobject (*func_java_math_BigDecimal_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_finalize 5
typedef void (*func_java_math_BigDecimal_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_notify 6
typedef void (*func_java_math_BigDecimal_notify)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_notifyAll 7
typedef void (*func_java_math_BigDecimal_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_wait 8
typedef void (*func_java_math_BigDecimal_wait)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_wait_long 9
typedef void (*func_java_math_BigDecimal_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_math_BigDecimal_wait_long_int 10
typedef void (*func_java_math_BigDecimal_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_math_BigDecimal_intValue_R_int 11
typedef jint (*func_java_math_BigDecimal_intValue_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_byteValue_R_byte 12
typedef jbyte (*func_java_math_BigDecimal_byteValue_R_byte)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_longValue_R_long 13
typedef jlong (*func_java_math_BigDecimal_longValue_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_floatValue_R_float 14
typedef jfloat (*func_java_math_BigDecimal_floatValue_R_float)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_doubleValue_R_double 15
typedef jdouble (*func_java_math_BigDecimal_doubleValue_R_double)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_shortValue_R_short 16
typedef jshort (*func_java_math_BigDecimal_shortValue_R_short)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_compareTo_java_lang_Object_R_int 17
typedef jint (*func_java_math_BigDecimal_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigDecimal_adjustScale_int_long_R_int 18
typedef jint (*func_java_math_BigDecimal_adjustScale_int_long_R_int)(jcontext ctx, jobject self, jint param0, jlong param1);
#define VTABLE_java_math_BigDecimal_add_java_math_BigDecimal_R_java_math_BigDecimal 19
typedef jobject (*func_java_math_BigDecimal_add_java_math_BigDecimal_R_java_math_BigDecimal)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigDecimal_add_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal 20
typedef jobject (*func_java_math_BigDecimal_add_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_math_BigDecimal_preAlign_java_math_BigDecimal_java_math_BigDecimal_long_java_math_MathContext_R_Array1_java_math_BigDecimal 21
typedef jobject (*func_java_math_BigDecimal_preAlign_java_math_BigDecimal_java_math_BigDecimal_long_java_math_MathContext_R_Array1_java_math_BigDecimal)(jcontext ctx, jobject self, jobject param0, jobject param1, jlong param2, jobject param3);
#define VTABLE_java_math_BigDecimal_subtract_java_math_BigDecimal_R_java_math_BigDecimal 22
typedef jobject (*func_java_math_BigDecimal_subtract_java_math_BigDecimal_R_java_math_BigDecimal)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigDecimal_subtract_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal 23
typedef jobject (*func_java_math_BigDecimal_subtract_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_math_BigDecimal_multiply_java_math_BigDecimal_R_java_math_BigDecimal 24
typedef jobject (*func_java_math_BigDecimal_multiply_java_math_BigDecimal_R_java_math_BigDecimal)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigDecimal_multiply_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal 25
typedef jobject (*func_java_math_BigDecimal_multiply_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_math_BigDecimal_divide_java_math_BigDecimal_int_int_R_java_math_BigDecimal 26
typedef jobject (*func_java_math_BigDecimal_divide_java_math_BigDecimal_int_int_R_java_math_BigDecimal)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_math_BigDecimal_divide_java_math_BigDecimal_int_java_math_RoundingMode_R_java_math_BigDecimal 27
typedef jobject (*func_java_math_BigDecimal_divide_java_math_BigDecimal_int_java_math_RoundingMode_R_java_math_BigDecimal)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
#define VTABLE_java_math_BigDecimal_divide_java_math_BigDecimal_int_R_java_math_BigDecimal 28
typedef jobject (*func_java_math_BigDecimal_divide_java_math_BigDecimal_int_R_java_math_BigDecimal)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_math_BigDecimal_divide_java_math_BigDecimal_java_math_RoundingMode_R_java_math_BigDecimal 29
typedef jobject (*func_java_math_BigDecimal_divide_java_math_BigDecimal_java_math_RoundingMode_R_java_math_BigDecimal)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_math_BigDecimal_divide_java_math_BigDecimal_R_java_math_BigDecimal 30
typedef jobject (*func_java_math_BigDecimal_divide_java_math_BigDecimal_R_java_math_BigDecimal)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigDecimal_divide_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal 31
typedef jobject (*func_java_math_BigDecimal_divide_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_math_BigDecimal_divideToIntegralValue_java_math_BigDecimal_R_java_math_BigDecimal 32
typedef jobject (*func_java_math_BigDecimal_divideToIntegralValue_java_math_BigDecimal_R_java_math_BigDecimal)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigDecimal_divideToIntegralValue_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal 33
typedef jobject (*func_java_math_BigDecimal_divideToIntegralValue_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_math_BigDecimal_remainder_java_math_BigDecimal_R_java_math_BigDecimal 34
typedef jobject (*func_java_math_BigDecimal_remainder_java_math_BigDecimal_R_java_math_BigDecimal)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigDecimal_remainder_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal 35
typedef jobject (*func_java_math_BigDecimal_remainder_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_math_BigDecimal_divideAndRemainder_java_math_BigDecimal_R_Array1_java_math_BigDecimal 36
typedef jobject (*func_java_math_BigDecimal_divideAndRemainder_java_math_BigDecimal_R_Array1_java_math_BigDecimal)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigDecimal_divideAndRemainder_java_math_BigDecimal_java_math_MathContext_R_Array1_java_math_BigDecimal 37
typedef jobject (*func_java_math_BigDecimal_divideAndRemainder_java_math_BigDecimal_java_math_MathContext_R_Array1_java_math_BigDecimal)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_math_BigDecimal_pow_int_R_java_math_BigDecimal 38
typedef jobject (*func_java_math_BigDecimal_pow_int_R_java_math_BigDecimal)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_math_BigDecimal_pow_int_java_math_MathContext_R_java_math_BigDecimal 39
typedef jobject (*func_java_math_BigDecimal_pow_int_java_math_MathContext_R_java_math_BigDecimal)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_java_math_BigDecimal_abs_R_java_math_BigDecimal 40
typedef jobject (*func_java_math_BigDecimal_abs_R_java_math_BigDecimal)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_abs_java_math_MathContext_R_java_math_BigDecimal 41
typedef jobject (*func_java_math_BigDecimal_abs_java_math_MathContext_R_java_math_BigDecimal)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigDecimal_negate_R_java_math_BigDecimal 42
typedef jobject (*func_java_math_BigDecimal_negate_R_java_math_BigDecimal)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_negate_java_math_MathContext_R_java_math_BigDecimal 43
typedef jobject (*func_java_math_BigDecimal_negate_java_math_MathContext_R_java_math_BigDecimal)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigDecimal_plus_R_java_math_BigDecimal 44
typedef jobject (*func_java_math_BigDecimal_plus_R_java_math_BigDecimal)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_plus_java_math_MathContext_R_java_math_BigDecimal 45
typedef jobject (*func_java_math_BigDecimal_plus_java_math_MathContext_R_java_math_BigDecimal)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigDecimal_signum_R_int 46
typedef jint (*func_java_math_BigDecimal_signum_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_scale_R_int 47
typedef jint (*func_java_math_BigDecimal_scale_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_precision_R_int 48
typedef jint (*func_java_math_BigDecimal_precision_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_unscaledValue_R_java_math_BigInteger 49
typedef jobject (*func_java_math_BigDecimal_unscaledValue_R_java_math_BigInteger)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_round_java_math_MathContext_R_java_math_BigDecimal 50
typedef jobject (*func_java_math_BigDecimal_round_java_math_MathContext_R_java_math_BigDecimal)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigDecimal_setScale_int_java_math_RoundingMode_R_java_math_BigDecimal 51
typedef jobject (*func_java_math_BigDecimal_setScale_int_java_math_RoundingMode_R_java_math_BigDecimal)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal 52
typedef jobject (*func_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_java_math_BigDecimal_setScale_int_R_java_math_BigDecimal 53
typedef jobject (*func_java_math_BigDecimal_setScale_int_R_java_math_BigDecimal)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_math_BigDecimal_movePointLeft_int_R_java_math_BigDecimal 54
typedef jobject (*func_java_math_BigDecimal_movePointLeft_int_R_java_math_BigDecimal)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_math_BigDecimal_movePointRight_int_R_java_math_BigDecimal 55
typedef jobject (*func_java_math_BigDecimal_movePointRight_int_R_java_math_BigDecimal)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_math_BigDecimal_scaleByPowerOfTen_int_R_java_math_BigDecimal 56
typedef jobject (*func_java_math_BigDecimal_scaleByPowerOfTen_int_R_java_math_BigDecimal)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_math_BigDecimal_stripTrailingZeros_R_java_math_BigDecimal 57
typedef jobject (*func_java_math_BigDecimal_stripTrailingZeros_R_java_math_BigDecimal)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_compareTo_java_math_BigDecimal_R_int 58
typedef jint (*func_java_math_BigDecimal_compareTo_java_math_BigDecimal_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigDecimal_compareMagnitude_java_math_BigDecimal_R_int 59
typedef jint (*func_java_math_BigDecimal_compareMagnitude_java_math_BigDecimal_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigDecimal_min_java_math_BigDecimal_R_java_math_BigDecimal 60
typedef jobject (*func_java_math_BigDecimal_min_java_math_BigDecimal_R_java_math_BigDecimal)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigDecimal_max_java_math_BigDecimal_R_java_math_BigDecimal 61
typedef jobject (*func_java_math_BigDecimal_max_java_math_BigDecimal_R_java_math_BigDecimal)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_math_BigDecimal_toEngineeringString_R_java_lang_String 62
typedef jobject (*func_java_math_BigDecimal_toEngineeringString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_toPlainString_R_java_lang_String 63
typedef jobject (*func_java_math_BigDecimal_toPlainString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_getValueString_int_java_lang_String_int_R_java_lang_String 64
typedef jobject (*func_java_math_BigDecimal_getValueString_int_java_lang_String_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
#define VTABLE_java_math_BigDecimal_toBigInteger_R_java_math_BigInteger 65
typedef jobject (*func_java_math_BigDecimal_toBigInteger_R_java_math_BigInteger)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_toBigIntegerExact_R_java_math_BigInteger 66
typedef jobject (*func_java_math_BigDecimal_toBigIntegerExact_R_java_math_BigInteger)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_fractionOnly_R_boolean 67
typedef jbool (*func_java_math_BigDecimal_fractionOnly_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_longValueExact_R_long 68
typedef jlong (*func_java_math_BigDecimal_longValueExact_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_intValueExact_R_int 69
typedef jint (*func_java_math_BigDecimal_intValueExact_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_shortValueExact_R_short 70
typedef jshort (*func_java_math_BigDecimal_shortValueExact_R_short)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_byteValueExact_R_byte 71
typedef jbyte (*func_java_math_BigDecimal_byteValueExact_R_byte)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_ulp_R_java_math_BigDecimal 72
typedef jobject (*func_java_math_BigDecimal_ulp_R_java_math_BigDecimal)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_layoutChars_boolean_R_java_lang_String 73
typedef jobject (*func_java_math_BigDecimal_layoutChars_boolean_R_java_lang_String)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_math_BigDecimal_bigMultiplyPowerTen_int_R_java_math_BigInteger 74
typedef jobject (*func_java_math_BigDecimal_bigMultiplyPowerTen_int_R_java_math_BigInteger)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_math_BigDecimal_inflated_R_java_math_BigInteger 75
typedef jobject (*func_java_math_BigDecimal_inflated_R_java_math_BigInteger)(jcontext ctx, jobject self);
#define VTABLE_java_math_BigDecimal_checkScale_long_R_int 76
typedef jint (*func_java_math_BigDecimal_checkScale_long_R_int)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_math_BigDecimal_audit_R_java_math_BigDecimal 77
typedef jobject (*func_java_math_BigDecimal_audit_R_java_math_BigDecimal)(jcontext ctx, jobject self);

void mark_java_math_BigDecimal(jobject object, jint mark, jint depth);
void clinit_java_math_BigDecimal(jcontext ctx);
void init_java_math_BigDecimal_java_math_BigInteger_long_int_int(jcontext ctx, jobject self, jobject param0, jlong param1, jint param2, jint param3);
void init_java_math_BigDecimal_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void init_java_math_BigDecimal_Array1_char_int_int_java_math_MathContext(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3);
jint M_java_math_BigDecimal_adjustScale_int_long_R_int(jcontext ctx, jobject self, jint param0, jlong param1);
jlong SM_java_math_BigDecimal_parseExp_Array1_char_int_int_R_long(jcontext ctx, jobject param0, jint param1, jint param2);
void init_java_math_BigDecimal_Array1_char(jcontext ctx, jobject self, jobject param0);
void init_java_math_BigDecimal_Array1_char_java_math_MathContext(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_java_math_BigDecimal_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_java_math_BigDecimal_java_lang_String_java_math_MathContext(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_java_math_BigDecimal_double(jcontext ctx, jobject self, jdouble param0);
void init_java_math_BigDecimal_double_java_math_MathContext(jcontext ctx, jobject self, jdouble param0, jobject param1);
void init_java_math_BigDecimal_java_math_BigInteger(jcontext ctx, jobject self, jobject param0);
void init_java_math_BigDecimal_java_math_BigInteger_java_math_MathContext(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_java_math_BigDecimal_java_math_BigInteger_int(jcontext ctx, jobject self, jobject param0, jint param1);
void init_java_math_BigDecimal_java_math_BigInteger_int_java_math_MathContext(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
void init_java_math_BigDecimal_int(jcontext ctx, jobject self, jint param0);
void init_java_math_BigDecimal_int_java_math_MathContext(jcontext ctx, jobject self, jint param0, jobject param1);
void init_java_math_BigDecimal_long(jcontext ctx, jobject self, jlong param0);
void init_java_math_BigDecimal_long_java_math_MathContext(jcontext ctx, jobject self, jlong param0, jobject param1);
jobject SM_java_math_BigDecimal_valueOf_long_int_R_java_math_BigDecimal(jcontext ctx, jlong param0, jint param1);
jobject SM_java_math_BigDecimal_valueOf_long_R_java_math_BigDecimal(jcontext ctx, jlong param0);
jobject SM_java_math_BigDecimal_valueOf_long_int_int_R_java_math_BigDecimal(jcontext ctx, jlong param0, jint param1, jint param2);
jobject SM_java_math_BigDecimal_valueOf_java_math_BigInteger_int_int_R_java_math_BigDecimal(jcontext ctx, jobject param0, jint param1, jint param2);
jobject SM_java_math_BigDecimal_zeroValueOf_int_R_java_math_BigDecimal(jcontext ctx, jint param0);
jobject SM_java_math_BigDecimal_valueOf_double_R_java_math_BigDecimal(jcontext ctx, jdouble param0);
jobject M_java_math_BigDecimal_add_java_math_BigDecimal_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigDecimal_add_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_math_BigDecimal_preAlign_java_math_BigDecimal_java_math_BigDecimal_long_java_math_MathContext_R_Array1_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0, jobject param1, jlong param2, jobject param3);
jobject M_java_math_BigDecimal_subtract_java_math_BigDecimal_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigDecimal_subtract_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_math_BigDecimal_multiply_java_math_BigDecimal_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigDecimal_multiply_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_math_BigDecimal_divide_java_math_BigDecimal_int_int_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_math_BigDecimal_divide_java_math_BigDecimal_int_java_math_RoundingMode_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
jobject M_java_math_BigDecimal_divide_java_math_BigDecimal_int_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_java_math_BigDecimal_divide_java_math_BigDecimal_java_math_RoundingMode_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_math_BigDecimal_divide_java_math_BigDecimal_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigDecimal_divide_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_math_BigDecimal_divideToIntegralValue_java_math_BigDecimal_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigDecimal_divideToIntegralValue_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_math_BigDecimal_remainder_java_math_BigDecimal_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigDecimal_remainder_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_math_BigDecimal_divideAndRemainder_java_math_BigDecimal_R_Array1_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigDecimal_divideAndRemainder_java_math_BigDecimal_java_math_MathContext_R_Array1_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_math_BigDecimal_pow_int_R_java_math_BigDecimal(jcontext ctx, jobject self, jint param0);
jobject M_java_math_BigDecimal_pow_int_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_java_math_BigDecimal_abs_R_java_math_BigDecimal(jcontext ctx, jobject self);
jobject M_java_math_BigDecimal_abs_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigDecimal_negate_R_java_math_BigDecimal(jcontext ctx, jobject self);
jobject M_java_math_BigDecimal_negate_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigDecimal_plus_R_java_math_BigDecimal(jcontext ctx, jobject self);
jobject M_java_math_BigDecimal_plus_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0);
jint M_java_math_BigDecimal_signum_R_int(jcontext ctx, jobject self);
jint M_java_math_BigDecimal_scale_R_int(jcontext ctx, jobject self);
jint M_java_math_BigDecimal_precision_R_int(jcontext ctx, jobject self);
jobject M_java_math_BigDecimal_unscaledValue_R_java_math_BigInteger(jcontext ctx, jobject self);
jobject M_java_math_BigDecimal_round_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigDecimal_setScale_int_java_math_RoundingMode_R_java_math_BigDecimal(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_java_math_BigDecimal_setScale_int_int_R_java_math_BigDecimal(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_java_math_BigDecimal_setScale_int_R_java_math_BigDecimal(jcontext ctx, jobject self, jint param0);
jobject M_java_math_BigDecimal_movePointLeft_int_R_java_math_BigDecimal(jcontext ctx, jobject self, jint param0);
jobject M_java_math_BigDecimal_movePointRight_int_R_java_math_BigDecimal(jcontext ctx, jobject self, jint param0);
jobject M_java_math_BigDecimal_scaleByPowerOfTen_int_R_java_math_BigDecimal(jcontext ctx, jobject self, jint param0);
jobject M_java_math_BigDecimal_stripTrailingZeros_R_java_math_BigDecimal(jcontext ctx, jobject self);
jint M_java_math_BigDecimal_compareTo_java_math_BigDecimal_R_int(jcontext ctx, jobject self, jobject param0);
jint M_java_math_BigDecimal_compareMagnitude_java_math_BigDecimal_R_int(jcontext ctx, jobject self, jobject param0);
jbool M_java_math_BigDecimal_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigDecimal_min_java_math_BigDecimal_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0);
jobject M_java_math_BigDecimal_max_java_math_BigDecimal_R_java_math_BigDecimal(jcontext ctx, jobject self, jobject param0);
jint M_java_math_BigDecimal_hashCode_R_int(jcontext ctx, jobject self);
jobject M_java_math_BigDecimal_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_math_BigDecimal_toEngineeringString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_math_BigDecimal_toPlainString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_math_BigDecimal_getValueString_int_java_lang_String_int_R_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
jobject M_java_math_BigDecimal_toBigInteger_R_java_math_BigInteger(jcontext ctx, jobject self);
jobject M_java_math_BigDecimal_toBigIntegerExact_R_java_math_BigInteger(jcontext ctx, jobject self);
jlong M_java_math_BigDecimal_longValue_R_long(jcontext ctx, jobject self);
jbool M_java_math_BigDecimal_fractionOnly_R_boolean(jcontext ctx, jobject self);
jlong M_java_math_BigDecimal_longValueExact_R_long(jcontext ctx, jobject self);
jint M_java_math_BigDecimal_intValue_R_int(jcontext ctx, jobject self);
jint M_java_math_BigDecimal_intValueExact_R_int(jcontext ctx, jobject self);
jshort M_java_math_BigDecimal_shortValueExact_R_short(jcontext ctx, jobject self);
jbyte M_java_math_BigDecimal_byteValueExact_R_byte(jcontext ctx, jobject self);
jfloat M_java_math_BigDecimal_floatValue_R_float(jcontext ctx, jobject self);
jdouble M_java_math_BigDecimal_doubleValue_R_double(jcontext ctx, jobject self);
jobject M_java_math_BigDecimal_ulp_R_java_math_BigDecimal(jcontext ctx, jobject self);
jobject M_java_math_BigDecimal_layoutChars_boolean_R_java_lang_String(jcontext ctx, jobject self, jbool param0);
jobject SM_java_math_BigDecimal_bigTenToThe_int_R_java_math_BigInteger(jcontext ctx, jint param0);
jobject SM_java_math_BigDecimal_expandBigIntegerTenPowers_int_R_java_math_BigInteger(jcontext ctx, jint param0);
jlong SM_java_math_BigDecimal_longMultiplyPowerTen_long_int_R_long(jcontext ctx, jlong param0, jint param1);
jobject M_java_math_BigDecimal_bigMultiplyPowerTen_int_R_java_math_BigInteger(jcontext ctx, jobject self, jint param0);
jobject M_java_math_BigDecimal_inflated_R_java_math_BigInteger(jcontext ctx, jobject self);
void SM_java_math_BigDecimal_matchScale_Array1_java_math_BigDecimal(jcontext ctx, jobject param0);
jint SM_java_math_BigDecimal_longDigitLength_long_R_int(jcontext ctx, jlong param0);
jint SM_java_math_BigDecimal_bigDigitLength_java_math_BigInteger_R_int(jcontext ctx, jobject param0);
jint M_java_math_BigDecimal_checkScale_long_R_int(jcontext ctx, jobject self, jlong param0);
jlong SM_java_math_BigDecimal_compactValFor_java_math_BigInteger_R_long(jcontext ctx, jobject param0);
jint SM_java_math_BigDecimal_longCompareMagnitude_long_long_R_int(jcontext ctx, jlong param0, jlong param1);
jint SM_java_math_BigDecimal_saturateLong_long_R_int(jcontext ctx, jlong param0);
void SM_java_math_BigDecimal_print_java_lang_String_java_math_BigDecimal(jcontext ctx, jobject param0, jobject param1);
jobject M_java_math_BigDecimal_audit_R_java_math_BigDecimal(jcontext ctx, jobject self);
jint SM_java_math_BigDecimal_checkScaleNonZero_long_R_int(jcontext ctx, jlong param0);
jint SM_java_math_BigDecimal_checkScale_long_long_R_int(jcontext ctx, jlong param0, jlong param1);
jint SM_java_math_BigDecimal_checkScale_java_math_BigInteger_long_R_int(jcontext ctx, jobject param0, jlong param1);
jobject SM_java_math_BigDecimal_doRound_java_math_BigDecimal_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject param0, jobject param1);
jobject SM_java_math_BigDecimal_doRound_long_int_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jlong param0, jint param1, jobject param2);
jobject SM_java_math_BigDecimal_doRound_java_math_BigInteger_int_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject param0, jint param1, jobject param2);
jobject SM_java_math_BigDecimal_divideAndRoundByTenPow_java_math_BigInteger_int_int_R_java_math_BigInteger(jcontext ctx, jobject param0, jint param1, jint param2);
jobject SM_java_math_BigDecimal_divideAndRound_long_long_int_int_int_R_java_math_BigDecimal(jcontext ctx, jlong param0, jlong param1, jint param2, jint param3, jint param4);
jlong SM_java_math_BigDecimal_divideAndRound_long_long_int_R_long(jcontext ctx, jlong param0, jlong param1, jint param2);
jbool SM_java_math_BigDecimal_commonNeedIncrement_int_int_int_boolean_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jbool param3);
jbool SM_java_math_BigDecimal_needIncrement_long_int_int_long_long_R_boolean(jcontext ctx, jlong param0, jint param1, jint param2, jlong param3, jlong param4);
jobject SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_long_int_R_java_math_BigInteger(jcontext ctx, jobject param0, jlong param1, jint param2);
jobject SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_long_int_int_int_R_java_math_BigDecimal(jcontext ctx, jobject param0, jlong param1, jint param2, jint param3, jint param4);
jbool SM_java_math_BigDecimal_needIncrement_long_int_int_java_math_MutableBigInteger_long_R_boolean(jcontext ctx, jlong param0, jint param1, jint param2, jobject param3, jlong param4);
jobject SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_java_math_BigInteger_int_R_java_math_BigInteger(jcontext ctx, jobject param0, jobject param1, jint param2);
jobject SM_java_math_BigDecimal_divideAndRound_java_math_BigInteger_java_math_BigInteger_int_int_int_R_java_math_BigDecimal(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4);
jbool SM_java_math_BigDecimal_needIncrement_java_math_MutableBigInteger_int_int_java_math_MutableBigInteger_java_math_MutableBigInteger_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jobject param4);
jobject SM_java_math_BigDecimal_createAndStripZerosToMatchScale_java_math_BigInteger_int_long_R_java_math_BigDecimal(jcontext ctx, jobject param0, jint param1, jlong param2);
jobject SM_java_math_BigDecimal_createAndStripZerosToMatchScale_long_int_long_R_java_math_BigDecimal(jcontext ctx, jlong param0, jint param1, jlong param2);
jobject SM_java_math_BigDecimal_stripZerosToMatchScale_java_math_BigInteger_long_int_int_R_java_math_BigDecimal(jcontext ctx, jobject param0, jlong param1, jint param2, jint param3);
jlong SM_java_math_BigDecimal_add_long_long_R_long(jcontext ctx, jlong param0, jlong param1);
jobject SM_java_math_BigDecimal_add_long_long_int_R_java_math_BigDecimal(jcontext ctx, jlong param0, jlong param1, jint param2);
jobject SM_java_math_BigDecimal_add_long_int_long_int_R_java_math_BigDecimal(jcontext ctx, jlong param0, jint param1, jlong param2, jint param3);
jobject SM_java_math_BigDecimal_add_long_int_java_math_BigInteger_int_R_java_math_BigDecimal(jcontext ctx, jlong param0, jint param1, jobject param2, jint param3);
jobject SM_java_math_BigDecimal_add_java_math_BigInteger_int_java_math_BigInteger_int_R_java_math_BigDecimal(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3);
jobject SM_java_math_BigDecimal_bigMultiplyPowerTen_long_int_R_java_math_BigInteger(jcontext ctx, jlong param0, jint param1);
jobject SM_java_math_BigDecimal_bigMultiplyPowerTen_java_math_BigInteger_int_R_java_math_BigInteger(jcontext ctx, jobject param0, jint param1);
jobject SM_java_math_BigDecimal_divideSmallFastPath_long_int_long_int_long_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jlong param0, jint param1, jlong param2, jint param3, jlong param4, jobject param5);
jobject SM_java_math_BigDecimal_divide_long_int_long_int_long_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jlong param0, jint param1, jlong param2, jint param3, jlong param4, jobject param5);
jobject SM_java_math_BigDecimal_divide_java_math_BigInteger_int_long_int_long_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject param0, jint param1, jlong param2, jint param3, jlong param4, jobject param5);
jobject SM_java_math_BigDecimal_divide_long_int_java_math_BigInteger_int_long_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jlong param0, jint param1, jobject param2, jint param3, jlong param4, jobject param5);
jobject SM_java_math_BigDecimal_divide_java_math_BigInteger_int_java_math_BigInteger_int_long_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jlong param4, jobject param5);
jobject SM_java_math_BigDecimal_multiplyDivideAndRound_long_long_long_int_int_int_R_java_math_BigDecimal(jcontext ctx, jlong param0, jlong param1, jlong param2, jint param3, jint param4, jint param5);
jobject SM_java_math_BigDecimal_divideAndRound128_long_long_long_int_int_int_int_R_java_math_BigDecimal(jcontext ctx, jlong param0, jlong param1, jlong param2, jint param3, jint param4, jint param5, jint param6);
jobject SM_java_math_BigDecimal_roundedTenPower_int_int_int_int_R_java_math_BigDecimal(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
jobject SM_java_math_BigDecimal_scaledTenPow_int_int_int_R_java_math_BigDecimal(jcontext ctx, jint param0, jint param1, jint param2);
jobject SM_java_math_BigDecimal_divRemNegativeLong_long_long_R_Array1_long(jcontext ctx, jlong param0, jlong param1);
jlong SM_java_math_BigDecimal_make64_long_long_R_long(jcontext ctx, jlong param0, jlong param1);
jlong SM_java_math_BigDecimal_mulsub_long_long_long_long_long_R_long(jcontext ctx, jlong param0, jlong param1, jlong param2, jlong param3, jlong param4);
jbool SM_java_math_BigDecimal_unsignedLongCompare_long_long_R_boolean(jcontext ctx, jlong param0, jlong param1);
jbool SM_java_math_BigDecimal_unsignedLongCompareEq_long_long_R_boolean(jcontext ctx, jlong param0, jlong param1);
jint SM_java_math_BigDecimal_compareMagnitudeNormalized_long_int_long_int_R_int(jcontext ctx, jlong param0, jint param1, jlong param2, jint param3);
jint SM_java_math_BigDecimal_compareMagnitudeNormalized_long_int_java_math_BigInteger_int_R_int(jcontext ctx, jlong param0, jint param1, jobject param2, jint param3);
jint SM_java_math_BigDecimal_compareMagnitudeNormalized_java_math_BigInteger_int_java_math_BigInteger_int_R_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3);
jlong SM_java_math_BigDecimal_multiply_long_long_R_long(jcontext ctx, jlong param0, jlong param1);
jobject SM_java_math_BigDecimal_multiply_long_long_int_R_java_math_BigDecimal(jcontext ctx, jlong param0, jlong param1, jint param2);
jobject SM_java_math_BigDecimal_multiply_long_java_math_BigInteger_int_R_java_math_BigDecimal(jcontext ctx, jlong param0, jobject param1, jint param2);
jobject SM_java_math_BigDecimal_multiply_java_math_BigInteger_java_math_BigInteger_int_R_java_math_BigDecimal(jcontext ctx, jobject param0, jobject param1, jint param2);
jobject SM_java_math_BigDecimal_multiplyAndRound_long_long_int_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jlong param0, jlong param1, jint param2, jobject param3);
jobject SM_java_math_BigDecimal_multiplyAndRound_long_java_math_BigInteger_int_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jlong param0, jobject param1, jint param2, jobject param3);
jobject SM_java_math_BigDecimal_multiplyAndRound_java_math_BigInteger_java_math_BigInteger_int_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3);
jobject SM_java_math_BigDecimal_doRound128_long_long_int_int_java_math_MathContext_R_java_math_BigDecimal(jcontext ctx, jlong param0, jlong param1, jint param2, jint param3, jobject param4);
jint SM_java_math_BigDecimal_precision_long_long_R_int(jcontext ctx, jlong param0, jlong param1);
jbool SM_java_math_BigDecimal_longLongCompareMagnitude_long_long_long_long_R_boolean(jcontext ctx, jlong param0, jlong param1, jlong param2, jlong param3);
jobject SM_java_math_BigDecimal_divide_long_int_long_int_int_int_R_java_math_BigDecimal(jcontext ctx, jlong param0, jint param1, jlong param2, jint param3, jint param4, jint param5);
jobject SM_java_math_BigDecimal_divide_java_math_BigInteger_int_long_int_int_int_R_java_math_BigDecimal(jcontext ctx, jobject param0, jint param1, jlong param2, jint param3, jint param4, jint param5);
jobject SM_java_math_BigDecimal_divide_long_int_java_math_BigInteger_int_int_int_R_java_math_BigDecimal(jcontext ctx, jlong param0, jint param1, jobject param2, jint param3, jint param4, jint param5);
jobject SM_java_math_BigDecimal_divide_java_math_BigInteger_int_java_math_BigInteger_int_int_int_R_java_math_BigDecimal(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4, jint param5);
jint M_java_math_BigDecimal_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jobject SM_java_math_BigDecimal_access$000_java_math_BigDecimal_R_java_math_BigInteger(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
