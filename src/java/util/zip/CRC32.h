#ifndef HEADER_java_util_zip_CRC32
#define HEADER_java_util_zip_CRC32

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/zip/Checksum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_zip_CRC32 {
	java_lang_Object parent;
	jint F_crc;
} java_util_zip_CRC32;

extern Class class_java_util_zip_CRC32;

extern jbool SF_java_util_zip_CRC32_$assertionsDisabled;

#define VTABLE_java_util_zip_CRC32_hashCode_R_int 0
typedef jint (*func_java_util_zip_CRC32_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_CRC32_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_zip_CRC32_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_CRC32_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_zip_CRC32_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_CRC32_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_zip_CRC32_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_CRC32_toString_R_java_lang_String 4
typedef jobject (*func_java_util_zip_CRC32_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_CRC32_finalize 5
typedef void (*func_java_util_zip_CRC32_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_CRC32_notify 6
typedef void (*func_java_util_zip_CRC32_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_CRC32_notifyAll 7
typedef void (*func_java_util_zip_CRC32_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_CRC32_wait 8
typedef void (*func_java_util_zip_CRC32_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_CRC32_wait_long 9
typedef void (*func_java_util_zip_CRC32_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_zip_CRC32_wait_long_int 10
typedef void (*func_java_util_zip_CRC32_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_zip_CRC32_update_int 11
typedef void (*func_java_util_zip_CRC32_update_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_zip_CRC32_update_Array1_byte_int_int 12
typedef void (*func_java_util_zip_CRC32_update_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_util_zip_CRC32_getValue_R_long 13
typedef jlong (*func_java_util_zip_CRC32_getValue_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_CRC32_reset 14
typedef void (*func_java_util_zip_CRC32_reset)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_CRC32_update_Array1_byte 15
typedef void (*func_java_util_zip_CRC32_update_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_CRC32_update_java_nio_ByteBuffer 16
typedef void (*func_java_util_zip_CRC32_update_java_nio_ByteBuffer)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_zip_CRC32(jobject object, jint mark, jint depth);
void clinit_java_util_zip_CRC32(jcontext ctx);
void init_java_util_zip_CRC32(jcontext ctx, jobject self);
void M_java_util_zip_CRC32_update_int(jcontext ctx, jobject self, jint param0);
void M_java_util_zip_CRC32_update_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_util_zip_CRC32_update_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_java_util_zip_CRC32_update_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0);
void M_java_util_zip_CRC32_reset(jcontext ctx, jobject self);
jlong M_java_util_zip_CRC32_getValue_R_long(jcontext ctx, jobject self);
jint SM_java_util_zip_CRC32_update_int_int_R_int(jcontext ctx, jint param0, jint param1);
jint SM_java_util_zip_CRC32_updateBytes_int_Array1_byte_int_int_R_int(jcontext ctx, jint param0, jobject param1, jint param2, jint param3);
jint SM_java_util_zip_CRC32_updateByteBuffer_int_java_nio_ByteBuffer_int_int_R_int(jcontext ctx, jint param0, jobject param1, jint param2, jint param3);

#ifdef __cplusplus
}
#endif

#endif
