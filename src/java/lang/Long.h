#ifndef HEADER_java_lang_Long
#define HEADER_java_lang_Long

#include "Clearwing.h"
#include "java/lang/Number.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_Long {
	java_lang_Number parent;
	jlong F_value;
} java_lang_Long;

extern Class class_java_lang_Long;

extern jobject SF_java_lang_Long_TYPE;
extern jlong SF_java_lang_Long_MAX_VALUE;
extern jlong SF_java_lang_Long_MIN_VALUE;
extern jint SF_java_lang_Long_SIZE;

#define VTABLE_java_lang_Long_hashCode_R_int 0
typedef jint (*func_java_lang_Long_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Long_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_Long_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Long_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_Long_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Long_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_Long_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Long_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_Long_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Long_finalize 5
typedef void (*func_java_lang_Long_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Long_notify 6
typedef void (*func_java_lang_Long_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Long_notifyAll 7
typedef void (*func_java_lang_Long_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Long_wait 8
typedef void (*func_java_lang_Long_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Long_wait_long 9
typedef void (*func_java_lang_Long_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_Long_wait_long_int 10
typedef void (*func_java_lang_Long_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_Long_intValue_R_int 11
typedef jint (*func_java_lang_Long_intValue_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Long_byteValue_R_byte 12
typedef jbyte (*func_java_lang_Long_byteValue_R_byte)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Long_longValue_R_long 13
typedef jlong (*func_java_lang_Long_longValue_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Long_floatValue_R_float 14
typedef jfloat (*func_java_lang_Long_floatValue_R_float)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Long_doubleValue_R_double 15
typedef jdouble (*func_java_lang_Long_doubleValue_R_double)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Long_shortValue_R_short 16
typedef jshort (*func_java_lang_Long_shortValue_R_short)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Long_compareTo_java_lang_Object_R_int 17
typedef jint (*func_java_lang_Long_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Long_compareTo_java_lang_Long_R_int 18
typedef jint (*func_java_lang_Long_compareTo_java_lang_Long_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_java_lang_Long(jobject object, jint mark, jint depth);
void clinit_java_lang_Long(jcontext ctx);
void init_java_lang_Long_long(jcontext ctx, jobject self, jlong param0);
void init_java_lang_Long_java_lang_String(jcontext ctx, jobject self, jobject param0);
jdouble M_java_lang_Long_doubleValue_R_double(jcontext ctx, jobject self);
jbool M_java_lang_Long_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jfloat M_java_lang_Long_floatValue_R_float(jcontext ctx, jobject self);
jint SM_java_lang_Long_signum_long_R_int(jcontext ctx, jlong param0);
jint M_java_lang_Long_hashCode_R_int(jcontext ctx, jobject self);
jint SM_java_lang_Long_hashCode_long_R_int(jcontext ctx, jlong param0);
jlong M_java_lang_Long_longValue_R_long(jcontext ctx, jobject self);
jint M_java_lang_Long_intValue_R_int(jcontext ctx, jobject self);
jbyte M_java_lang_Long_byteValue_R_byte(jcontext ctx, jobject self);
jlong SM_java_lang_Long_rotateLeft_long_int_R_long(jcontext ctx, jlong param0, jint param1);
jlong SM_java_lang_Long_rotateRight_long_int_R_long(jcontext ctx, jlong param0, jint param1);
jlong SM_java_lang_Long_reverse_long_R_long(jcontext ctx, jlong param0);
jlong SM_java_lang_Long_reverseBytes_long_R_long(jcontext ctx, jlong param0);
jlong SM_java_lang_Long_parseLong_java_lang_String_R_long(jcontext ctx, jobject param0);
jlong SM_java_lang_Long_parseLong_java_lang_String_int_R_long(jcontext ctx, jobject param0, jint param1);
jlong SM_java_lang_Long_parse_java_lang_String_int_int_boolean_R_long(jcontext ctx, jobject param0, jint param1, jint param2, jbool param3);
jobject SM_java_lang_Long_invalidLong_java_lang_String_R_java_lang_NumberFormatException(jcontext ctx, jobject param0);
jobject M_java_lang_Long_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_java_lang_Long_toString_long_R_java_lang_String(jcontext ctx, jlong param0);
jobject SM_java_lang_Long_toString_long_int_R_java_lang_String(jcontext ctx, jlong param0, jint param1);
jobject SM_java_lang_Long_toHexString_long_R_java_lang_String(jcontext ctx, jlong param0);
jobject SM_java_lang_Long_toBinaryString_long_R_java_lang_String(jcontext ctx, jlong param0);
jobject SM_java_lang_Long_getLong_java_lang_String_R_java_lang_Long(jcontext ctx, jobject param0);
jobject SM_java_lang_Long_getLong_java_lang_String_long_R_java_lang_Long(jcontext ctx, jobject param0, jlong param1);
jobject SM_java_lang_Long_getLong_java_lang_String_java_lang_Long_R_java_lang_Long(jcontext ctx, jobject param0, jobject param1);
jobject SM_java_lang_Long_toUnsignedString0_long_int_R_java_lang_String(jcontext ctx, jlong param0, jint param1);
jint SM_java_lang_Long_bitCount_long_R_int(jcontext ctx, jlong param0);
jint SM_java_lang_Long_formatUnsignedLong_long_int_Array1_char_int_int_R_int(jcontext ctx, jlong param0, jint param1, jobject param2, jint param3, jint param4);
jobject SM_java_lang_Long_valueOf_long_R_java_lang_Long(jcontext ctx, jlong param0);
jobject SM_java_lang_Long_valueOf_java_lang_String_R_java_lang_Long(jcontext ctx, jobject param0);
jint SM_java_lang_Long_compare_long_long_R_int(jcontext ctx, jlong param0, jlong param1);
jint M_java_lang_Long_compareTo_java_lang_Long_R_int(jcontext ctx, jobject self, jobject param0);
jint SM_java_lang_Long_compareUnsigned_long_long_R_int(jcontext ctx, jlong param0, jlong param1);
jlong SM_java_lang_Long_divideUnsigned_long_long_R_long(jcontext ctx, jlong param0, jlong param1);
jlong SM_java_lang_Long_remainderUnsigned_long_long_R_long(jcontext ctx, jlong param0, jlong param1);
jobject SM_java_lang_Long_toUnsignedBigInteger_long_R_java_math_BigInteger(jcontext ctx, jlong param0);
jint SM_java_lang_Long_numberOfLeadingZeros_long_R_int(jcontext ctx, jlong param0);
jint SM_java_lang_Long_numberOfTrailingZeros_long_R_int(jcontext ctx, jlong param0);
jlong SM_java_lang_Long_sum_long_long_R_long(jcontext ctx, jlong param0, jlong param1);
jlong SM_java_lang_Long_max_long_long_R_long(jcontext ctx, jlong param0, jlong param1);
jlong SM_java_lang_Long_min_long_long_R_long(jcontext ctx, jlong param0, jlong param1);
jint M_java_lang_Long_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
