#ifndef HEADER_java_lang_Integer
#define HEADER_java_lang_Integer

#include "Clearwing.h"
#include "java/lang/Number.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_Integer {
	java_lang_Number parent;
	jint F_value;
} java_lang_Integer;

extern Class class_java_lang_Integer;

extern jobject SF_java_lang_Integer_TYPE;
extern jobject SF_java_lang_Integer_DIGITS;
extern jint SF_java_lang_Integer_MAX_VALUE;
extern jint SF_java_lang_Integer_MIN_VALUE;
extern jint SF_java_lang_Integer_SIZE;

#define VTABLE_java_lang_Integer_hashCode_R_int 0
typedef jint (*func_java_lang_Integer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Integer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_Integer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Integer_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_Integer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Integer_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_Integer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Integer_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_Integer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Integer_finalize 5
typedef void (*func_java_lang_Integer_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Integer_notify 6
typedef void (*func_java_lang_Integer_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Integer_notifyAll 7
typedef void (*func_java_lang_Integer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Integer_wait 8
typedef void (*func_java_lang_Integer_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Integer_wait_long 9
typedef void (*func_java_lang_Integer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_Integer_wait_long_int 10
typedef void (*func_java_lang_Integer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_Integer_intValue_R_int 11
typedef jint (*func_java_lang_Integer_intValue_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Integer_byteValue_R_byte 12
typedef jbyte (*func_java_lang_Integer_byteValue_R_byte)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Integer_longValue_R_long 13
typedef jlong (*func_java_lang_Integer_longValue_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Integer_floatValue_R_float 14
typedef jfloat (*func_java_lang_Integer_floatValue_R_float)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Integer_doubleValue_R_double 15
typedef jdouble (*func_java_lang_Integer_doubleValue_R_double)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Integer_shortValue_R_short 16
typedef jshort (*func_java_lang_Integer_shortValue_R_short)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Integer_compareTo_java_lang_Object_R_int 17
typedef jint (*func_java_lang_Integer_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Integer_compareTo_java_lang_Integer_R_int 18
typedef jint (*func_java_lang_Integer_compareTo_java_lang_Integer_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_java_lang_Integer(jobject object, jint mark, jint depth);
void clinit_java_lang_Integer(jcontext ctx);
void init_java_lang_Integer_int(jcontext ctx, jobject self, jint param0);
void init_java_lang_Integer_java_lang_String(jcontext ctx, jobject self, jobject param0);
jbyte M_java_lang_Integer_byteValue_R_byte(jcontext ctx, jobject self);
jdouble M_java_lang_Integer_doubleValue_R_double(jcontext ctx, jobject self);
jbool M_java_lang_Integer_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jfloat M_java_lang_Integer_floatValue_R_float(jcontext ctx, jobject self);
jint M_java_lang_Integer_hashCode_R_int(jcontext ctx, jobject self);
jint M_java_lang_Integer_intValue_R_int(jcontext ctx, jobject self);
jlong M_java_lang_Integer_longValue_R_long(jcontext ctx, jobject self);
jint SM_java_lang_Integer_rotateLeft_int_int_R_int(jcontext ctx, jint param0, jint param1);
jint SM_java_lang_Integer_rotateRight_int_int_R_int(jcontext ctx, jint param0, jint param1);
jint SM_java_lang_Integer_reverse_int_R_int(jcontext ctx, jint param0);
jint SM_java_lang_Integer_reverseBytes_int_R_int(jcontext ctx, jint param0);
jint SM_java_lang_Integer_compareUnsigned_int_int_R_int(jcontext ctx, jint param0, jint param1);
jlong SM_java_lang_Integer_toUnsignedLong_int_R_long(jcontext ctx, jint param0);
jint SM_java_lang_Integer_divideUnsigned_int_int_R_int(jcontext ctx, jint param0, jint param1);
jint SM_java_lang_Integer_remainderUnsigned_int_int_R_int(jcontext ctx, jint param0, jint param1);
jint SM_java_lang_Integer_bitCount_int_R_int(jcontext ctx, jint param0);
jint SM_java_lang_Integer_lowestOneBit_int_R_int(jcontext ctx, jint param0);
jint SM_java_lang_Integer_highestOneBit_int_R_int(jcontext ctx, jint param0);
jint SM_java_lang_Integer_parseInt_java_lang_String_R_int(jcontext ctx, jobject param0);
jint SM_java_lang_Integer_parseInt_java_lang_String_int_R_int(jcontext ctx, jobject param0, jint param1);
jint SM_java_lang_Integer_parse_java_lang_String_int_int_boolean_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jbool param3);
jobject SM_java_lang_Integer_getInteger_java_lang_String_R_java_lang_Integer(jcontext ctx, jobject param0);
jobject SM_java_lang_Integer_getInteger_java_lang_String_int_R_java_lang_Integer(jcontext ctx, jobject param0, jint param1);
jobject SM_java_lang_Integer_getInteger_java_lang_String_java_lang_Integer_R_java_lang_Integer(jcontext ctx, jobject param0, jobject param1);
jobject SM_java_lang_Integer_invalidInt_java_lang_String_R_java_lang_NumberFormatException(jcontext ctx, jobject param0);
jint SM_java_lang_Integer_hashCode_int_R_int(jcontext ctx, jint param0);
jshort M_java_lang_Integer_shortValue_R_short(jcontext ctx, jobject self);
jobject SM_java_lang_Integer_toBinaryString_int_R_java_lang_String(jcontext ctx, jint param0);
jobject SM_java_lang_Integer_intToBinaryString_int_R_java_lang_String(jcontext ctx, jint param0);
jobject SM_java_lang_Integer_toHexString_int_R_java_lang_String(jcontext ctx, jint param0);
jobject SM_java_lang_Integer_intToHexString_int_int_R_java_lang_String(jcontext ctx, jint param0, jint param1);
jobject SM_java_lang_Integer_intToOctalString_int_R_java_lang_String(jcontext ctx, jint param0);
jobject SM_java_lang_Integer_toOctalString_int_R_java_lang_String(jcontext ctx, jint param0);
jobject M_java_lang_Integer_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_java_lang_Integer_toString_int_R_java_lang_String(jcontext ctx, jint param0);
jobject SM_java_lang_Integer_toString_int_int_R_java_lang_String(jcontext ctx, jint param0, jint param1);
jobject SM_java_lang_Integer_valueOf_java_lang_String_R_java_lang_Integer(jcontext ctx, jobject param0);
jobject SM_java_lang_Integer_valueOf_java_lang_String_int_R_java_lang_Integer(jcontext ctx, jobject param0, jint param1);
jobject SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(jcontext ctx, jint param0);
jint SM_java_lang_Integer_signum_int_R_int(jcontext ctx, jint param0);
jint SM_java_lang_Integer_compare_int_int_R_int(jcontext ctx, jint param0, jint param1);
jint M_java_lang_Integer_compareTo_java_lang_Integer_R_int(jcontext ctx, jobject self, jobject param0);
jint SM_java_lang_Integer_numberOfLeadingZeros_int_R_int(jcontext ctx, jint param0);
jint SM_java_lang_Integer_numberOfTrailingZeros_int_R_int(jcontext ctx, jint param0);
jint SM_java_lang_Integer_sum_int_int_R_int(jcontext ctx, jint param0, jint param1);
jint SM_java_lang_Integer_max_int_int_R_int(jcontext ctx, jint param0, jint param1);
jint SM_java_lang_Integer_min_int_int_R_int(jcontext ctx, jint param0, jint param1);
jint M_java_lang_Integer_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
