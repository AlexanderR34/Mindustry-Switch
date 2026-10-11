#ifndef HEADER_java_lang_Double
#define HEADER_java_lang_Double

#include "Clearwing.h"
#include "java/lang/Number.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_Double {
	java_lang_Number parent;
	jdouble F_value;
} java_lang_Double;

extern Class class_java_lang_Double;

extern jobject SF_java_lang_Double_TYPE;
extern jdouble SF_java_lang_Double_MAX_VALUE;
extern jdouble SF_java_lang_Double_MIN_VALUE;
extern jdouble SF_java_lang_Double_NaN;
extern jdouble SF_java_lang_Double_NEGATIVE_INFINITY;
extern jdouble SF_java_lang_Double_POSITIVE_INFINITY;
extern jint SF_java_lang_Double_MAX_EXPONENT;
extern jint SF_java_lang_Double_MIN_EXPONENT;
extern jint SF_java_lang_Double_SIZE;
extern jlong SF_java_lang_Double_POSITIVE_ZERO_BITS;
extern jlong SF_java_lang_Double_NEGATIVE_ZERO_BITS;

#define VTABLE_java_lang_Double_hashCode_R_int 0
typedef jint (*func_java_lang_Double_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Double_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_Double_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Double_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_Double_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Double_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_Double_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Double_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_Double_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Double_finalize 5
typedef void (*func_java_lang_Double_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Double_notify 6
typedef void (*func_java_lang_Double_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Double_notifyAll 7
typedef void (*func_java_lang_Double_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Double_wait 8
typedef void (*func_java_lang_Double_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Double_wait_long 9
typedef void (*func_java_lang_Double_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_Double_wait_long_int 10
typedef void (*func_java_lang_Double_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_Double_intValue_R_int 11
typedef jint (*func_java_lang_Double_intValue_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Double_byteValue_R_byte 12
typedef jbyte (*func_java_lang_Double_byteValue_R_byte)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Double_longValue_R_long 13
typedef jlong (*func_java_lang_Double_longValue_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Double_floatValue_R_float 14
typedef jfloat (*func_java_lang_Double_floatValue_R_float)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Double_doubleValue_R_double 15
typedef jdouble (*func_java_lang_Double_doubleValue_R_double)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Double_shortValue_R_short 16
typedef jshort (*func_java_lang_Double_shortValue_R_short)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Double_compareTo_java_lang_Object_R_int 17
typedef jint (*func_java_lang_Double_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Double_isInfinite_R_boolean 18
typedef jbool (*func_java_lang_Double_isInfinite_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Double_isNaN_R_boolean 19
typedef jbool (*func_java_lang_Double_isNaN_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Double_compareTo_java_lang_Double_R_int 20
typedef jint (*func_java_lang_Double_compareTo_java_lang_Double_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_java_lang_Double(jobject object, jint mark, jint depth);
void clinit_java_lang_Double(jcontext ctx);
void init_java_lang_Double_double(jcontext ctx, jobject self, jdouble param0);
jbyte M_java_lang_Double_byteValue_R_byte(jcontext ctx, jobject self);
jlong SM_java_lang_Double_doubleToLongBits_double_R_long(jcontext ctx, jdouble param0);
jlong SM_java_lang_Double_doubleToRawLongBits_double_R_long(jcontext ctx, jdouble param0);
jdouble M_java_lang_Double_doubleValue_R_double(jcontext ctx, jobject self);
jbool M_java_lang_Double_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jfloat M_java_lang_Double_floatValue_R_float(jcontext ctx, jobject self);
jint M_java_lang_Double_hashCode_R_int(jcontext ctx, jobject self);
jint SM_java_lang_Double_hashCode_double_R_int(jcontext ctx, jdouble param0);
jint M_java_lang_Double_intValue_R_int(jcontext ctx, jobject self);
jbool M_java_lang_Double_isInfinite_R_boolean(jcontext ctx, jobject self);
jbool SM_java_lang_Double_isInfinite_double_R_boolean(jcontext ctx, jdouble param0);
jbool M_java_lang_Double_isNaN_R_boolean(jcontext ctx, jobject self);
jbool SM_java_lang_Double_isNaN_double_R_boolean(jcontext ctx, jdouble param0);
jdouble SM_java_lang_Double_longBitsToDouble_long_R_double(jcontext ctx, jlong param0);
jlong M_java_lang_Double_longValue_R_long(jcontext ctx, jobject self);
jdouble SM_java_lang_Double_parseDouble_java_lang_String_R_double(jcontext ctx, jobject param0);
jshort M_java_lang_Double_shortValue_R_short(jcontext ctx, jobject self);
jobject M_java_lang_Double_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_java_lang_Double_toString_double_R_java_lang_String(jcontext ctx, jdouble param0);
jobject SM_java_lang_Double_toStringImpl_double_boolean_R_java_lang_String(jcontext ctx, jdouble param0, jbool param1);
jobject SM_java_lang_Double_valueOf_java_lang_String_R_java_lang_Double(jcontext ctx, jobject param0);
jobject SM_java_lang_Double_valueOf_double_R_java_lang_Double(jcontext ctx, jdouble param0);
jint SM_java_lang_Double_compare_double_double_R_int(jcontext ctx, jdouble param0, jdouble param1);
jint M_java_lang_Double_compareTo_java_lang_Double_R_int(jcontext ctx, jobject self, jobject param0);
jint M_java_lang_Double_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
