#ifndef HEADER_java_lang_Byte
#define HEADER_java_lang_Byte

#include "Clearwing.h"
#include "java/lang/Number.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_Byte {
	java_lang_Number parent;
	jbyte F_value;
} java_lang_Byte;

extern Class class_java_lang_Byte;

extern jobject SF_java_lang_Byte_TYPE;
extern jint SF_java_lang_Byte_SIZE;
extern jbyte SF_java_lang_Byte_MAX_VALUE;
extern jbyte SF_java_lang_Byte_MIN_VALUE;

#define VTABLE_java_lang_Byte_hashCode_R_int 0
typedef jint (*func_java_lang_Byte_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Byte_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_Byte_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Byte_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_Byte_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Byte_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_Byte_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Byte_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_Byte_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Byte_finalize 5
typedef void (*func_java_lang_Byte_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Byte_notify 6
typedef void (*func_java_lang_Byte_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Byte_notifyAll 7
typedef void (*func_java_lang_Byte_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Byte_wait 8
typedef void (*func_java_lang_Byte_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Byte_wait_long 9
typedef void (*func_java_lang_Byte_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_Byte_wait_long_int 10
typedef void (*func_java_lang_Byte_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_Byte_intValue_R_int 11
typedef jint (*func_java_lang_Byte_intValue_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Byte_byteValue_R_byte 12
typedef jbyte (*func_java_lang_Byte_byteValue_R_byte)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Byte_longValue_R_long 13
typedef jlong (*func_java_lang_Byte_longValue_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Byte_floatValue_R_float 14
typedef jfloat (*func_java_lang_Byte_floatValue_R_float)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Byte_doubleValue_R_double 15
typedef jdouble (*func_java_lang_Byte_doubleValue_R_double)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Byte_shortValue_R_short 16
typedef jshort (*func_java_lang_Byte_shortValue_R_short)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Byte_compareTo_java_lang_Object_R_int 17
typedef jint (*func_java_lang_Byte_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Byte_compareTo_java_lang_Byte_R_int 18
typedef jint (*func_java_lang_Byte_compareTo_java_lang_Byte_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_java_lang_Byte(jobject object, jint mark, jint depth);
void clinit_java_lang_Byte(jcontext ctx);
void init_java_lang_Byte_byte(jcontext ctx, jobject self, jbyte param0);
jbyte M_java_lang_Byte_byteValue_R_byte(jcontext ctx, jobject self);
jbool M_java_lang_Byte_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_lang_Byte_hashCode_R_int(jcontext ctx, jobject self);
jint SM_java_lang_Byte_hashCode_byte_R_int(jcontext ctx, jbyte param0);
jbyte SM_java_lang_Byte_parseByte_java_lang_String_R_byte(jcontext ctx, jobject param0);
jbyte SM_java_lang_Byte_parseByte_java_lang_String_int_R_byte(jcontext ctx, jobject param0, jint param1);
jobject M_java_lang_Byte_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_java_lang_Byte_toString_byte_R_java_lang_String(jcontext ctx, jbyte param0);
jobject SM_java_lang_Byte_valueOf_byte_R_java_lang_Byte(jcontext ctx, jbyte param0);
jobject SM_java_lang_Byte_valueOf_java_lang_String_R_java_lang_Byte(jcontext ctx, jobject param0);
jint SM_java_lang_Byte_toUnsignedInt_byte_R_int(jcontext ctx, jbyte param0);
jint M_java_lang_Byte_intValue_R_int(jcontext ctx, jobject self);
jlong M_java_lang_Byte_longValue_R_long(jcontext ctx, jobject self);
jfloat M_java_lang_Byte_floatValue_R_float(jcontext ctx, jobject self);
jdouble M_java_lang_Byte_doubleValue_R_double(jcontext ctx, jobject self);
jint SM_java_lang_Byte_compare_byte_byte_R_int(jcontext ctx, jbyte param0, jbyte param1);
jint SM_java_lang_Byte_compareUnsigned_byte_byte_R_int(jcontext ctx, jbyte param0, jbyte param1);
jlong SM_java_lang_Byte_toUnsignedLong_byte_R_long(jcontext ctx, jbyte param0);
jint M_java_lang_Byte_compareTo_java_lang_Byte_R_int(jcontext ctx, jobject self, jobject param0);
jint M_java_lang_Byte_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
