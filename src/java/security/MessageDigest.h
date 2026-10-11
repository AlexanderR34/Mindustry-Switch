#ifndef HEADER_java_security_MessageDigest
#define HEADER_java_security_MessageDigest

#include "Clearwing.h"
#include "java/security/MessageDigestSpi.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_security_MessageDigest {
	java_security_MessageDigestSpi parent;
	jref F_algorithm;
	jref F_provider;
} java_security_MessageDigest;

extern Class class_java_security_MessageDigest;


#define VTABLE_java_security_MessageDigest_hashCode_R_int 0
typedef jint (*func_java_security_MessageDigest_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_security_MessageDigest_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_security_MessageDigest_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_MessageDigest_clone_R_java_lang_Object 2
typedef jobject (*func_java_security_MessageDigest_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_security_MessageDigest_getClass_R_java_lang_Class 3
typedef jobject (*func_java_security_MessageDigest_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_security_MessageDigest_toString_R_java_lang_String 4
typedef jobject (*func_java_security_MessageDigest_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_security_MessageDigest_finalize 5
typedef void (*func_java_security_MessageDigest_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_security_MessageDigest_notify 6
typedef void (*func_java_security_MessageDigest_notify)(jcontext ctx, jobject self);
#define VTABLE_java_security_MessageDigest_notifyAll 7
typedef void (*func_java_security_MessageDigest_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_security_MessageDigest_wait 8
typedef void (*func_java_security_MessageDigest_wait)(jcontext ctx, jobject self);
#define VTABLE_java_security_MessageDigest_wait_long 9
typedef void (*func_java_security_MessageDigest_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_security_MessageDigest_wait_long_int 10
typedef void (*func_java_security_MessageDigest_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_security_MessageDigest_engineGetDigestLength_R_int 11
typedef jint (*func_java_security_MessageDigest_engineGetDigestLength_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_security_MessageDigest_engineUpdate_byte 12
typedef void (*func_java_security_MessageDigest_engineUpdate_byte)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_java_security_MessageDigest_engineUpdate_Array1_byte_int_int 13
typedef void (*func_java_security_MessageDigest_engineUpdate_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_security_MessageDigest_engineUpdate_java_nio_ByteBuffer 14
typedef void (*func_java_security_MessageDigest_engineUpdate_java_nio_ByteBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_MessageDigest_engineDigest_R_Array1_byte 15
typedef jobject (*func_java_security_MessageDigest_engineDigest_R_Array1_byte)(jcontext ctx, jobject self);
#define VTABLE_java_security_MessageDigest_engineDigest_Array1_byte_int_int_R_int 16
typedef jint (*func_java_security_MessageDigest_engineDigest_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_security_MessageDigest_engineReset 17
typedef void (*func_java_security_MessageDigest_engineReset)(jcontext ctx, jobject self);
#define VTABLE_java_security_MessageDigest_getProvider_R_java_security_Provider 18
typedef jobject (*func_java_security_MessageDigest_getProvider_R_java_security_Provider)(jcontext ctx, jobject self);
#define VTABLE_java_security_MessageDigest_update_byte 19
typedef void (*func_java_security_MessageDigest_update_byte)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_java_security_MessageDigest_update_Array1_byte_int_int 20
typedef void (*func_java_security_MessageDigest_update_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_security_MessageDigest_update_Array1_byte 21
typedef void (*func_java_security_MessageDigest_update_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_MessageDigest_update_java_nio_ByteBuffer 22
typedef void (*func_java_security_MessageDigest_update_java_nio_ByteBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_MessageDigest_digest_R_Array1_byte 23
typedef jobject (*func_java_security_MessageDigest_digest_R_Array1_byte)(jcontext ctx, jobject self);
#define VTABLE_java_security_MessageDigest_digest_Array1_byte_int_int_R_int 24
typedef jint (*func_java_security_MessageDigest_digest_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_security_MessageDigest_digest_Array1_byte_R_Array1_byte 25
typedef jobject (*func_java_security_MessageDigest_digest_Array1_byte_R_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_MessageDigest_getProviderName_R_java_lang_String 26
typedef jobject (*func_java_security_MessageDigest_getProviderName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_security_MessageDigest_reset 27
typedef void (*func_java_security_MessageDigest_reset)(jcontext ctx, jobject self);
#define VTABLE_java_security_MessageDigest_getAlgorithm_R_java_lang_String 28
typedef jobject (*func_java_security_MessageDigest_getAlgorithm_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_security_MessageDigest_getDigestLength_R_int 29
typedef jint (*func_java_security_MessageDigest_getDigestLength_R_int)(jcontext ctx, jobject self);

void mark_java_security_MessageDigest(jobject object, jint mark, jint depth);
void clinit_java_security_MessageDigest(jcontext ctx);
void init_java_security_MessageDigest_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_java_security_MessageDigest_java_lang_String_java_security_Provider(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject SM_java_security_MessageDigest_getInstance_java_lang_String_R_java_security_MessageDigest(jcontext ctx, jobject param0);
jobject SM_java_security_MessageDigest_getInstance_java_lang_String_java_lang_String_R_java_security_MessageDigest(jcontext ctx, jobject param0, jobject param1);
jobject SM_java_security_MessageDigest_getInstance_java_lang_String_java_security_Provider_R_java_security_MessageDigest(jcontext ctx, jobject param0, jobject param1);
jobject M_java_security_MessageDigest_getProvider_R_java_security_Provider(jcontext ctx, jobject self);
void M_java_security_MessageDigest_update_byte(jcontext ctx, jobject self, jbyte param0);
void M_java_security_MessageDigest_update_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_security_MessageDigest_update_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_java_security_MessageDigest_update_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0);
jobject M_java_security_MessageDigest_digest_R_Array1_byte(jcontext ctx, jobject self);
jint M_java_security_MessageDigest_digest_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_security_MessageDigest_digest_Array1_byte_R_Array1_byte(jcontext ctx, jobject self, jobject param0);
jobject M_java_security_MessageDigest_getProviderName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_security_MessageDigest_toString_R_java_lang_String(jcontext ctx, jobject self);
jbool SM_java_security_MessageDigest_isEqual_Array1_byte_Array1_byte_R_boolean(jcontext ctx, jobject param0, jobject param1);
void M_java_security_MessageDigest_reset(jcontext ctx, jobject self);
jobject M_java_security_MessageDigest_getAlgorithm_R_java_lang_String(jcontext ctx, jobject self);
jint M_java_security_MessageDigest_getDigestLength_R_int(jcontext ctx, jobject self);
jobject M_java_security_MessageDigest_clone_R_java_lang_Object(jcontext ctx, jobject self);
void init_java_security_MessageDigest_java_lang_String_java_security_Provider_java_security_MessageDigest$1(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject SM_java_security_MessageDigest_access$200_java_security_MessageDigest_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_java_security_MessageDigest_access$300_java_security_MessageDigest_R_java_security_Provider(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
