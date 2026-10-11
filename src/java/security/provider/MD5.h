#ifndef HEADER_java_security_provider_MD5
#define HEADER_java_security_provider_MD5

#include "Clearwing.h"
#include "java/security/provider/DigestBase.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_security_provider_MD5 {
	java_security_provider_DigestBase parent;
	jref F_state;
	jref F_x;
} java_security_provider_MD5;

extern Class class_java_security_provider_MD5;


#define VTABLE_java_security_provider_MD5_hashCode_R_int 0
typedef jint (*func_java_security_provider_MD5_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_MD5_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_security_provider_MD5_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_provider_MD5_clone_R_java_lang_Object 2
typedef jobject (*func_java_security_provider_MD5_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_MD5_getClass_R_java_lang_Class 3
typedef jobject (*func_java_security_provider_MD5_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_MD5_toString_R_java_lang_String 4
typedef jobject (*func_java_security_provider_MD5_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_MD5_finalize 5
typedef void (*func_java_security_provider_MD5_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_MD5_notify 6
typedef void (*func_java_security_provider_MD5_notify)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_MD5_notifyAll 7
typedef void (*func_java_security_provider_MD5_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_MD5_wait 8
typedef void (*func_java_security_provider_MD5_wait)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_MD5_wait_long 9
typedef void (*func_java_security_provider_MD5_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_security_provider_MD5_wait_long_int 10
typedef void (*func_java_security_provider_MD5_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_security_provider_MD5_engineGetDigestLength_R_int 11
typedef jint (*func_java_security_provider_MD5_engineGetDigestLength_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_MD5_engineUpdate_byte 12
typedef void (*func_java_security_provider_MD5_engineUpdate_byte)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_java_security_provider_MD5_engineUpdate_Array1_byte_int_int 13
typedef void (*func_java_security_provider_MD5_engineUpdate_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_security_provider_MD5_engineUpdate_java_nio_ByteBuffer 14
typedef void (*func_java_security_provider_MD5_engineUpdate_java_nio_ByteBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_provider_MD5_engineDigest_R_Array1_byte 15
typedef jobject (*func_java_security_provider_MD5_engineDigest_R_Array1_byte)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_MD5_engineDigest_Array1_byte_int_int_R_int 16
typedef jint (*func_java_security_provider_MD5_engineDigest_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_security_provider_MD5_engineReset 17
typedef void (*func_java_security_provider_MD5_engineReset)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_MD5_implCompressMultiBlock_Array1_byte_int_int_R_int 18
typedef jint (*func_java_security_provider_MD5_implCompressMultiBlock_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_security_provider_MD5_implCompressMultiBlock0_Array1_byte_int_int_R_int 19
typedef jint (*func_java_security_provider_MD5_implCompressMultiBlock0_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_security_provider_MD5_implCompressMultiBlockCheck_Array1_byte_int_int 20
typedef void (*func_java_security_provider_MD5_implCompressMultiBlockCheck_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_security_provider_MD5_implCompress_Array1_byte_int 21
typedef void (*func_java_security_provider_MD5_implCompress_Array1_byte_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_security_provider_MD5_implDigest_Array1_byte_int 22
typedef void (*func_java_security_provider_MD5_implDigest_Array1_byte_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_security_provider_MD5_implReset 23
typedef void (*func_java_security_provider_MD5_implReset)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_MD5_resetHashes 24
typedef void (*func_java_security_provider_MD5_resetHashes)(jcontext ctx, jobject self);

void mark_java_security_provider_MD5(jobject object, jint mark, jint depth);
void clinit_java_security_provider_MD5(jcontext ctx);
void init_java_security_provider_MD5(jcontext ctx, jobject self);
jobject M_java_security_provider_MD5_clone_R_java_lang_Object(jcontext ctx, jobject self);
void M_java_security_provider_MD5_implReset(jcontext ctx, jobject self);
void M_java_security_provider_MD5_resetHashes(jcontext ctx, jobject self);
void M_java_security_provider_MD5_implDigest_Array1_byte_int(jcontext ctx, jobject self, jobject param0, jint param1);
jint SM_java_security_provider_MD5_FF_int_int_int_int_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6);
jint SM_java_security_provider_MD5_GG_int_int_int_int_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6);
jint SM_java_security_provider_MD5_HH_int_int_int_int_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6);
jint SM_java_security_provider_MD5_II_int_int_int_int_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6);
void M_java_security_provider_MD5_implCompress_Array1_byte_int(jcontext ctx, jobject self, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
