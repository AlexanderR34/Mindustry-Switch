#ifndef HEADER_java_security_provider_DigestBase
#define HEADER_java_security_provider_DigestBase

#include "Clearwing.h"
#include "java/security/MessageDigestSpi.h"
#include "java/lang/Cloneable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_security_provider_DigestBase {
	java_security_MessageDigestSpi parent;
	jref F_oneByte;
	jref F_algorithm;
	jint F_digestLength;
	jint F_blockSize;
	jref F_buffer;
	jint F_bufOfs;
	jlong F_bytesProcessed;
} java_security_provider_DigestBase;

extern Class class_java_security_provider_DigestBase;

extern jobject SF_java_security_provider_DigestBase_padding;

#define VTABLE_java_security_provider_DigestBase_hashCode_R_int 0
typedef jint (*func_java_security_provider_DigestBase_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_DigestBase_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_security_provider_DigestBase_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_provider_DigestBase_clone_R_java_lang_Object 2
typedef jobject (*func_java_security_provider_DigestBase_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_DigestBase_getClass_R_java_lang_Class 3
typedef jobject (*func_java_security_provider_DigestBase_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_DigestBase_toString_R_java_lang_String 4
typedef jobject (*func_java_security_provider_DigestBase_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_DigestBase_finalize 5
typedef void (*func_java_security_provider_DigestBase_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_DigestBase_notify 6
typedef void (*func_java_security_provider_DigestBase_notify)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_DigestBase_notifyAll 7
typedef void (*func_java_security_provider_DigestBase_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_DigestBase_wait 8
typedef void (*func_java_security_provider_DigestBase_wait)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_DigestBase_wait_long 9
typedef void (*func_java_security_provider_DigestBase_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_security_provider_DigestBase_wait_long_int 10
typedef void (*func_java_security_provider_DigestBase_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_security_provider_DigestBase_engineGetDigestLength_R_int 11
typedef jint (*func_java_security_provider_DigestBase_engineGetDigestLength_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_DigestBase_engineUpdate_byte 12
typedef void (*func_java_security_provider_DigestBase_engineUpdate_byte)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_java_security_provider_DigestBase_engineUpdate_Array1_byte_int_int 13
typedef void (*func_java_security_provider_DigestBase_engineUpdate_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_security_provider_DigestBase_engineUpdate_java_nio_ByteBuffer 14
typedef void (*func_java_security_provider_DigestBase_engineUpdate_java_nio_ByteBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_provider_DigestBase_engineDigest_R_Array1_byte 15
typedef jobject (*func_java_security_provider_DigestBase_engineDigest_R_Array1_byte)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_DigestBase_engineDigest_Array1_byte_int_int_R_int 16
typedef jint (*func_java_security_provider_DigestBase_engineDigest_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_security_provider_DigestBase_engineReset 17
typedef void (*func_java_security_provider_DigestBase_engineReset)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_DigestBase_implCompressMultiBlock_Array1_byte_int_int_R_int 18
typedef jint (*func_java_security_provider_DigestBase_implCompressMultiBlock_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_security_provider_DigestBase_implCompressMultiBlock0_Array1_byte_int_int_R_int 19
typedef jint (*func_java_security_provider_DigestBase_implCompressMultiBlock0_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_security_provider_DigestBase_implCompressMultiBlockCheck_Array1_byte_int_int 20
typedef void (*func_java_security_provider_DigestBase_implCompressMultiBlockCheck_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_security_provider_DigestBase_implCompress_Array1_byte_int 21
typedef void (*func_java_security_provider_DigestBase_implCompress_Array1_byte_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_security_provider_DigestBase_implDigest_Array1_byte_int 22
typedef void (*func_java_security_provider_DigestBase_implDigest_Array1_byte_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_security_provider_DigestBase_implReset 23
typedef void (*func_java_security_provider_DigestBase_implReset)(jcontext ctx, jobject self);

void mark_java_security_provider_DigestBase(jobject object, jint mark, jint depth);
void clinit_java_security_provider_DigestBase(jcontext ctx);
void init_java_security_provider_DigestBase_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jint M_java_security_provider_DigestBase_engineGetDigestLength_R_int(jcontext ctx, jobject self);
void M_java_security_provider_DigestBase_engineUpdate_byte(jcontext ctx, jobject self, jbyte param0);
void M_java_security_provider_DigestBase_engineUpdate_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jint M_java_security_provider_DigestBase_implCompressMultiBlock_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jint M_java_security_provider_DigestBase_implCompressMultiBlock0_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_security_provider_DigestBase_implCompressMultiBlockCheck_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_security_provider_DigestBase_engineReset(jcontext ctx, jobject self);
jobject M_java_security_provider_DigestBase_engineDigest_R_Array1_byte(jcontext ctx, jobject self);
jint M_java_security_provider_DigestBase_engineDigest_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_security_provider_DigestBase_clone_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
