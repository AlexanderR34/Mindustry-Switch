#ifndef HEADER_java_lang_StringToReal
#define HEADER_java_lang_StringToReal

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_StringToReal {
	java_lang_Object parent;
} java_lang_StringToReal;

extern Class class_java_lang_StringToReal;


#define VTABLE_java_lang_StringToReal_hashCode_R_int 0
typedef jint (*func_java_lang_StringToReal_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringToReal_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_StringToReal_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_StringToReal_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_StringToReal_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringToReal_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_StringToReal_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringToReal_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_StringToReal_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringToReal_finalize 5
typedef void (*func_java_lang_StringToReal_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringToReal_notify 6
typedef void (*func_java_lang_StringToReal_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringToReal_notifyAll 7
typedef void (*func_java_lang_StringToReal_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringToReal_wait 8
typedef void (*func_java_lang_StringToReal_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringToReal_wait_long 9
typedef void (*func_java_lang_StringToReal_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_StringToReal_wait_long_int 10
typedef void (*func_java_lang_StringToReal_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_lang_StringToReal(jobject object, jint mark, jint depth);
void clinit_java_lang_StringToReal(jcontext ctx);
void init_java_lang_StringToReal(jcontext ctx, jobject self);
jdouble SM_java_lang_StringToReal_parseDblImpl_java_lang_String_int_R_double(jcontext ctx, jobject param0, jint param1);
jfloat SM_java_lang_StringToReal_parseFltImpl_java_lang_String_int_R_float(jcontext ctx, jobject param0, jint param1);
jobject SM_java_lang_StringToReal_invalidReal_java_lang_String_boolean_R_java_lang_NumberFormatException(jcontext ctx, jobject param0, jbool param1);
jobject SM_java_lang_StringToReal_initialParse_java_lang_String_int_boolean_R_java_lang_StringToReal$StringExponentPair(jcontext ctx, jobject param0, jint param1, jbool param2);
jfloat SM_java_lang_StringToReal_parseName_java_lang_String_boolean_R_float(jcontext ctx, jobject param0, jbool param1);
jdouble SM_java_lang_StringToReal_parseDouble_java_lang_String_R_double(jcontext ctx, jobject param0);
jfloat SM_java_lang_StringToReal_parseFloat_java_lang_String_R_float(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
