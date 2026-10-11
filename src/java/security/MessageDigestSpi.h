#ifndef HEADER_java_security_MessageDigestSpi
#define HEADER_java_security_MessageDigestSpi

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_security_MessageDigestSpi {
	java_lang_Object parent;
	jref F_tempArray;
} java_security_MessageDigestSpi;

extern Class class_java_security_MessageDigestSpi;


#define VTABLE_java_security_MessageDigestSpi_hashCode_R_int 0
typedef jint (*func_java_security_MessageDigestSpi_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_security_MessageDigestSpi_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_security_MessageDigestSpi_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_MessageDigestSpi_clone_R_java_lang_Object 2
typedef jobject (*func_java_security_MessageDigestSpi_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_security_MessageDigestSpi_getClass_R_java_lang_Class 3
typedef jobject (*func_java_security_MessageDigestSpi_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_security_MessageDigestSpi_toString_R_java_lang_String 4
typedef jobject (*func_java_security_MessageDigestSpi_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_security_MessageDigestSpi_finalize 5
typedef void (*func_java_security_MessageDigestSpi_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_security_MessageDigestSpi_notify 6
typedef void (*func_java_security_MessageDigestSpi_notify)(jcontext ctx, jobject self);
#define VTABLE_java_security_MessageDigestSpi_notifyAll 7
typedef void (*func_java_security_MessageDigestSpi_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_security_MessageDigestSpi_wait 8
typedef void (*func_java_security_MessageDigestSpi_wait)(jcontext ctx, jobject self);
#define VTABLE_java_security_MessageDigestSpi_wait_long 9
typedef void (*func_java_security_MessageDigestSpi_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_security_MessageDigestSpi_wait_long_int 10
typedef void (*func_java_security_MessageDigestSpi_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_security_MessageDigestSpi_engineGetDigestLength_R_int 11
typedef jint (*func_java_security_MessageDigestSpi_engineGetDigestLength_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_security_MessageDigestSpi_engineUpdate_byte 12
typedef void (*func_java_security_MessageDigestSpi_engineUpdate_byte)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_java_security_MessageDigestSpi_engineUpdate_Array1_byte_int_int 13
typedef void (*func_java_security_MessageDigestSpi_engineUpdate_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_security_MessageDigestSpi_engineUpdate_java_nio_ByteBuffer 14
typedef void (*func_java_security_MessageDigestSpi_engineUpdate_java_nio_ByteBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_MessageDigestSpi_engineDigest_R_Array1_byte 15
typedef jobject (*func_java_security_MessageDigestSpi_engineDigest_R_Array1_byte)(jcontext ctx, jobject self);
#define VTABLE_java_security_MessageDigestSpi_engineDigest_Array1_byte_int_int_R_int 16
typedef jint (*func_java_security_MessageDigestSpi_engineDigest_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_security_MessageDigestSpi_engineReset 17
typedef void (*func_java_security_MessageDigestSpi_engineReset)(jcontext ctx, jobject self);

void mark_java_security_MessageDigestSpi(jobject object, jint mark, jint depth);
void clinit_java_security_MessageDigestSpi(jcontext ctx);
void init_java_security_MessageDigestSpi(jcontext ctx, jobject self);
jint M_java_security_MessageDigestSpi_engineGetDigestLength_R_int(jcontext ctx, jobject self);
void M_java_security_MessageDigestSpi_engineUpdate_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0);
jint M_java_security_MessageDigestSpi_engineDigest_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_security_MessageDigestSpi_clone_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
