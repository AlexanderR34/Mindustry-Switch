#ifndef HEADER_java_lang_StringToReal$StringExponentPair
#define HEADER_java_lang_StringToReal$StringExponentPair

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_StringToReal$StringExponentPair {
	java_lang_Object parent;
	jref F_s;
	jlong F_e;
	jbool F_negative;
	jbool F_infinity;
	jbool F_zero;
} java_lang_StringToReal$StringExponentPair;

extern Class class_java_lang_StringToReal$StringExponentPair;


#define VTABLE_java_lang_StringToReal$StringExponentPair_hashCode_R_int 0
typedef jint (*func_java_lang_StringToReal$StringExponentPair_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringToReal$StringExponentPair_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_StringToReal$StringExponentPair_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_StringToReal$StringExponentPair_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_StringToReal$StringExponentPair_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringToReal$StringExponentPair_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_StringToReal$StringExponentPair_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringToReal$StringExponentPair_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_StringToReal$StringExponentPair_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringToReal$StringExponentPair_finalize 5
typedef void (*func_java_lang_StringToReal$StringExponentPair_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringToReal$StringExponentPair_notify 6
typedef void (*func_java_lang_StringToReal$StringExponentPair_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringToReal$StringExponentPair_notifyAll 7
typedef void (*func_java_lang_StringToReal$StringExponentPair_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringToReal$StringExponentPair_wait 8
typedef void (*func_java_lang_StringToReal$StringExponentPair_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_StringToReal$StringExponentPair_wait_long 9
typedef void (*func_java_lang_StringToReal$StringExponentPair_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_StringToReal$StringExponentPair_wait_long_int 10
typedef void (*func_java_lang_StringToReal$StringExponentPair_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_StringToReal$StringExponentPair_specialValue_R_float 11
typedef jfloat (*func_java_lang_StringToReal$StringExponentPair_specialValue_R_float)(jcontext ctx, jobject self);

void mark_java_lang_StringToReal$StringExponentPair(jobject object, jint mark, jint depth);
void clinit_java_lang_StringToReal$StringExponentPair(jcontext ctx);
void init_java_lang_StringToReal$StringExponentPair(jcontext ctx, jobject self);
jfloat M_java_lang_StringToReal$StringExponentPair_specialValue_R_float(jcontext ctx, jobject self);
void init_java_lang_StringToReal$StringExponentPair_java_lang_StringToReal$1(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
