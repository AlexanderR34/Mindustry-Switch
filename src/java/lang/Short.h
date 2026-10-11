#ifndef HEADER_java_lang_Short
#define HEADER_java_lang_Short

#include "Clearwing.h"
#include "java/lang/Number.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_Short {
	java_lang_Number parent;
	jshort F_value;
} java_lang_Short;

extern Class class_java_lang_Short;

extern jshort SF_java_lang_Short_MAX_VALUE;
extern jshort SF_java_lang_Short_MIN_VALUE;
extern jobject SF_java_lang_Short_TYPE;

#define VTABLE_java_lang_Short_hashCode_R_int 0
typedef jint (*func_java_lang_Short_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Short_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_Short_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Short_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_Short_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Short_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_Short_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Short_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_Short_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Short_finalize 5
typedef void (*func_java_lang_Short_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Short_notify 6
typedef void (*func_java_lang_Short_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Short_notifyAll 7
typedef void (*func_java_lang_Short_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Short_wait 8
typedef void (*func_java_lang_Short_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Short_wait_long 9
typedef void (*func_java_lang_Short_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_Short_wait_long_int 10
typedef void (*func_java_lang_Short_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_Short_intValue_R_int 11
typedef jint (*func_java_lang_Short_intValue_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Short_byteValue_R_byte 12
typedef jbyte (*func_java_lang_Short_byteValue_R_byte)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Short_longValue_R_long 13
typedef jlong (*func_java_lang_Short_longValue_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Short_floatValue_R_float 14
typedef jfloat (*func_java_lang_Short_floatValue_R_float)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Short_doubleValue_R_double 15
typedef jdouble (*func_java_lang_Short_doubleValue_R_double)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Short_shortValue_R_short 16
typedef jshort (*func_java_lang_Short_shortValue_R_short)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Short_compareTo_java_lang_Object_R_int 17
typedef jint (*func_java_lang_Short_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Short_compareTo_java_lang_Short_R_int 18
typedef jint (*func_java_lang_Short_compareTo_java_lang_Short_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_java_lang_Short(jobject object, jint mark, jint depth);
void clinit_java_lang_Short(jcontext ctx);
void init_java_lang_Short_short(jcontext ctx, jobject self, jshort param0);
jshort SM_java_lang_Short_reverseBytes_short_R_short(jcontext ctx, jshort param0);
jbool M_java_lang_Short_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_lang_Short_hashCode_R_int(jcontext ctx, jobject self);
jint SM_java_lang_Short_hashCode_short_R_int(jcontext ctx, jshort param0);
jshort SM_java_lang_Short_parseShort_java_lang_String_R_short(jcontext ctx, jobject param0);
jshort SM_java_lang_Short_parseShort_java_lang_String_int_R_short(jcontext ctx, jobject param0, jint param1);
jshort M_java_lang_Short_shortValue_R_short(jcontext ctx, jobject self);
jobject M_java_lang_Short_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_java_lang_Short_valueOf_short_R_java_lang_Short(jcontext ctx, jshort param0);
jobject SM_java_lang_Short_valueOf_java_lang_String_R_java_lang_Short(jcontext ctx, jobject param0);
jint M_java_lang_Short_intValue_R_int(jcontext ctx, jobject self);
jlong M_java_lang_Short_longValue_R_long(jcontext ctx, jobject self);
jfloat M_java_lang_Short_floatValue_R_float(jcontext ctx, jobject self);
jdouble M_java_lang_Short_doubleValue_R_double(jcontext ctx, jobject self);
jint SM_java_lang_Short_toUnsignedInt_short_R_int(jcontext ctx, jshort param0);
jlong SM_java_lang_Short_toUnsignedLong_short_R_long(jcontext ctx, jshort param0);
jint SM_java_lang_Short_compare_short_short_R_int(jcontext ctx, jshort param0, jshort param1);
jint SM_java_lang_Short_compareUnsigned_short_short_R_int(jcontext ctx, jshort param0, jshort param1);
jint M_java_lang_Short_compareTo_java_lang_Short_R_int(jcontext ctx, jobject self, jobject param0);
jint M_java_lang_Short_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
