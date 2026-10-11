#ifndef HEADER_java_lang_Number
#define HEADER_java_lang_Number

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_Number {
	java_lang_Object parent;
} java_lang_Number;

extern Class class_java_lang_Number;


#define VTABLE_java_lang_Number_hashCode_R_int 0
typedef jint (*func_java_lang_Number_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Number_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_Number_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Number_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_Number_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Number_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_Number_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Number_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_Number_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Number_finalize 5
typedef void (*func_java_lang_Number_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Number_notify 6
typedef void (*func_java_lang_Number_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Number_notifyAll 7
typedef void (*func_java_lang_Number_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Number_wait 8
typedef void (*func_java_lang_Number_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Number_wait_long 9
typedef void (*func_java_lang_Number_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_Number_wait_long_int 10
typedef void (*func_java_lang_Number_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_Number_intValue_R_int 11
typedef jint (*func_java_lang_Number_intValue_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Number_byteValue_R_byte 12
typedef jbyte (*func_java_lang_Number_byteValue_R_byte)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Number_longValue_R_long 13
typedef jlong (*func_java_lang_Number_longValue_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Number_floatValue_R_float 14
typedef jfloat (*func_java_lang_Number_floatValue_R_float)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Number_doubleValue_R_double 15
typedef jdouble (*func_java_lang_Number_doubleValue_R_double)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Number_shortValue_R_short 16
typedef jshort (*func_java_lang_Number_shortValue_R_short)(jcontext ctx, jobject self);

void mark_java_lang_Number(jobject object, jint mark, jint depth);
void clinit_java_lang_Number(jcontext ctx);
void init_java_lang_Number(jcontext ctx, jobject self);
jbyte M_java_lang_Number_byteValue_R_byte(jcontext ctx, jobject self);
jshort M_java_lang_Number_shortValue_R_short(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
