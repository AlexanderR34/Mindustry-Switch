#ifndef HEADER_java_security_provider_ByteArrayAccess
#define HEADER_java_security_provider_ByteArrayAccess

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_security_provider_ByteArrayAccess {
	java_lang_Object parent;
} java_security_provider_ByteArrayAccess;

extern Class class_java_security_provider_ByteArrayAccess;


#define VTABLE_java_security_provider_ByteArrayAccess_hashCode_R_int 0
typedef jint (*func_java_security_provider_ByteArrayAccess_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_ByteArrayAccess_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_security_provider_ByteArrayAccess_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_provider_ByteArrayAccess_clone_R_java_lang_Object 2
typedef jobject (*func_java_security_provider_ByteArrayAccess_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_ByteArrayAccess_getClass_R_java_lang_Class 3
typedef jobject (*func_java_security_provider_ByteArrayAccess_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_ByteArrayAccess_toString_R_java_lang_String 4
typedef jobject (*func_java_security_provider_ByteArrayAccess_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_ByteArrayAccess_finalize 5
typedef void (*func_java_security_provider_ByteArrayAccess_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_ByteArrayAccess_notify 6
typedef void (*func_java_security_provider_ByteArrayAccess_notify)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_ByteArrayAccess_notifyAll 7
typedef void (*func_java_security_provider_ByteArrayAccess_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_ByteArrayAccess_wait 8
typedef void (*func_java_security_provider_ByteArrayAccess_wait)(jcontext ctx, jobject self);
#define VTABLE_java_security_provider_ByteArrayAccess_wait_long 9
typedef void (*func_java_security_provider_ByteArrayAccess_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_security_provider_ByteArrayAccess_wait_long_int 10
typedef void (*func_java_security_provider_ByteArrayAccess_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_security_provider_ByteArrayAccess(jobject object, jint mark, jint depth);
void clinit_java_security_provider_ByteArrayAccess(jcontext ctx);
void init_java_security_provider_ByteArrayAccess(jcontext ctx, jobject self);
void SM_java_security_provider_ByteArrayAccess_b2iLittle_Array1_byte_int_Array1_int_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4);
void SM_java_security_provider_ByteArrayAccess_b2iLittle64_Array1_byte_int_Array1_int(jcontext ctx, jobject param0, jint param1, jobject param2);
void SM_java_security_provider_ByteArrayAccess_i2bLittle_Array1_int_int_Array1_byte_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4);
void SM_java_security_provider_ByteArrayAccess_i2bLittle4_int_Array1_byte_int(jcontext ctx, jint param0, jobject param1, jint param2);
void SM_java_security_provider_ByteArrayAccess_b2iBig_Array1_byte_int_Array1_int_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4);
void SM_java_security_provider_ByteArrayAccess_b2iBig64_Array1_byte_int_Array1_int(jcontext ctx, jobject param0, jint param1, jobject param2);
void SM_java_security_provider_ByteArrayAccess_i2bBig_Array1_int_int_Array1_byte_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4);
void SM_java_security_provider_ByteArrayAccess_i2bBig4_int_Array1_byte_int(jcontext ctx, jint param0, jobject param1, jint param2);
void SM_java_security_provider_ByteArrayAccess_b2lBig_Array1_byte_int_Array1_long_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4);
void SM_java_security_provider_ByteArrayAccess_b2lBig128_Array1_byte_int_Array1_long(jcontext ctx, jobject param0, jint param1, jobject param2);
void SM_java_security_provider_ByteArrayAccess_l2bBig_Array1_long_int_Array1_byte_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4);
void SM_java_security_provider_ByteArrayAccess_b2lLittle_Array1_byte_int_Array1_long_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4);
void SM_java_security_provider_ByteArrayAccess_l2bLittle_Array1_long_int_Array1_byte_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4);

#ifdef __cplusplus
}
#endif

#endif
