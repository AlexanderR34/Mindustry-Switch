#ifndef HEADER_java_lang_Float
#define HEADER_java_lang_Float

#include "Clearwing.h"
#include "java/lang/Number.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_Float {
	java_lang_Number parent;
	jfloat F_value;
} java_lang_Float;

extern Class class_java_lang_Float;

extern jfloat SF_java_lang_Float_MAX_VALUE;
extern jfloat SF_java_lang_Float_MIN_VALUE;
extern jint SF_java_lang_Float_MAX_EXPONENT;
extern jint SF_java_lang_Float_MIN_EXPONENT;
extern jfloat SF_java_lang_Float_NaN;
extern jfloat SF_java_lang_Float_NEGATIVE_INFINITY;
extern jfloat SF_java_lang_Float_POSITIVE_INFINITY;
extern jobject SF_java_lang_Float_TYPE;
extern jint SF_java_lang_Float_NEGATIVE_ZERO_BITS;

#define VTABLE_java_lang_Float_hashCode_R_int 0
typedef jint (*func_java_lang_Float_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Float_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_Float_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Float_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_Float_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Float_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_Float_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Float_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_Float_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Float_finalize 5
typedef void (*func_java_lang_Float_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Float_notify 6
typedef void (*func_java_lang_Float_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Float_notifyAll 7
typedef void (*func_java_lang_Float_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Float_wait 8
typedef void (*func_java_lang_Float_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Float_wait_long 9
typedef void (*func_java_lang_Float_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_Float_wait_long_int 10
typedef void (*func_java_lang_Float_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_Float_intValue_R_int 11
typedef jint (*func_java_lang_Float_intValue_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Float_byteValue_R_byte 12
typedef jbyte (*func_java_lang_Float_byteValue_R_byte)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Float_longValue_R_long 13
typedef jlong (*func_java_lang_Float_longValue_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Float_floatValue_R_float 14
typedef jfloat (*func_java_lang_Float_floatValue_R_float)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Float_doubleValue_R_double 15
typedef jdouble (*func_java_lang_Float_doubleValue_R_double)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Float_shortValue_R_short 16
typedef jshort (*func_java_lang_Float_shortValue_R_short)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Float_compareTo_java_lang_Object_R_int 17
typedef jint (*func_java_lang_Float_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Float_isInfinite_R_boolean 18
typedef jbool (*func_java_lang_Float_isInfinite_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Float_isNaN_R_boolean 19
typedef jbool (*func_java_lang_Float_isNaN_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Float_compareTo_java_lang_Float_R_int 20
typedef jint (*func_java_lang_Float_compareTo_java_lang_Float_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_java_lang_Float(jobject object, jint mark, jint depth);
void clinit_java_lang_Float(jcontext ctx);
void init_java_lang_Float_double(jcontext ctx, jobject self, jdouble param0);
void init_java_lang_Float_float(jcontext ctx, jobject self, jfloat param0);
jbyte M_java_lang_Float_byteValue_R_byte(jcontext ctx, jobject self);
jdouble M_java_lang_Float_doubleValue_R_double(jcontext ctx, jobject self);
jbool M_java_lang_Float_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint SM_java_lang_Float_hashCode_float_R_int(jcontext ctx, jfloat param0);
jint SM_java_lang_Float_floatToIntBits_float_R_int(jcontext ctx, jfloat param0);
jint SM_java_lang_Float_floatToRawIntBits_float_R_int(jcontext ctx, jfloat param0);
jfloat M_java_lang_Float_floatValue_R_float(jcontext ctx, jobject self);
jint M_java_lang_Float_hashCode_R_int(jcontext ctx, jobject self);
jfloat SM_java_lang_Float_intBitsToFloat_int_R_float(jcontext ctx, jint param0);
jint M_java_lang_Float_intValue_R_int(jcontext ctx, jobject self);
jbool M_java_lang_Float_isInfinite_R_boolean(jcontext ctx, jobject self);
jbool SM_java_lang_Float_isInfinite_float_R_boolean(jcontext ctx, jfloat param0);
jbool M_java_lang_Float_isNaN_R_boolean(jcontext ctx, jobject self);
jbool SM_java_lang_Float_isNaN_float_R_boolean(jcontext ctx, jfloat param0);
jlong M_java_lang_Float_longValue_R_long(jcontext ctx, jobject self);
jfloat SM_java_lang_Float_parseFloat_java_lang_String_R_float(jcontext ctx, jobject param0);
jshort M_java_lang_Float_shortValue_R_short(jcontext ctx, jobject self);
jobject M_java_lang_Float_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_java_lang_Float_toString_float_R_java_lang_String(jcontext ctx, jfloat param0);
jobject SM_java_lang_Float_toStringImpl_float_boolean_R_java_lang_String(jcontext ctx, jfloat param0, jbool param1);
jobject SM_java_lang_Float_valueOf_java_lang_String_R_java_lang_Float(jcontext ctx, jobject param0);
jobject SM_java_lang_Float_valueOf_float_R_java_lang_Float(jcontext ctx, jfloat param0);
jint SM_java_lang_Float_compare_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1);
jint M_java_lang_Float_compareTo_java_lang_Float_R_int(jcontext ctx, jobject self, jobject param0);
jint M_java_lang_Float_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
