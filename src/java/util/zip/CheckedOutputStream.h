#ifndef HEADER_java_util_zip_CheckedOutputStream
#define HEADER_java_util_zip_CheckedOutputStream

#include "Clearwing.h"
#include "java/io/FilterOutputStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_zip_CheckedOutputStream {
	java_io_FilterOutputStream parent;
	jref F_cksum;
} java_util_zip_CheckedOutputStream;

extern Class class_java_util_zip_CheckedOutputStream;


#define VTABLE_java_util_zip_CheckedOutputStream_hashCode_R_int 0
typedef jint (*func_java_util_zip_CheckedOutputStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_CheckedOutputStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_zip_CheckedOutputStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_CheckedOutputStream_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_zip_CheckedOutputStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_CheckedOutputStream_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_zip_CheckedOutputStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_CheckedOutputStream_toString_R_java_lang_String 4
typedef jobject (*func_java_util_zip_CheckedOutputStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_CheckedOutputStream_finalize 5
typedef void (*func_java_util_zip_CheckedOutputStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_CheckedOutputStream_notify 6
typedef void (*func_java_util_zip_CheckedOutputStream_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_CheckedOutputStream_notifyAll 7
typedef void (*func_java_util_zip_CheckedOutputStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_CheckedOutputStream_wait 8
typedef void (*func_java_util_zip_CheckedOutputStream_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_CheckedOutputStream_wait_long 9
typedef void (*func_java_util_zip_CheckedOutputStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_zip_CheckedOutputStream_wait_long_int 10
typedef void (*func_java_util_zip_CheckedOutputStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_zip_CheckedOutputStream_close 11
typedef void (*func_java_util_zip_CheckedOutputStream_close)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_CheckedOutputStream_flush 12
typedef void (*func_java_util_zip_CheckedOutputStream_flush)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_CheckedOutputStream_write_Array1_byte 13
typedef void (*func_java_util_zip_CheckedOutputStream_write_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_CheckedOutputStream_write_Array1_byte_int_int 14
typedef void (*func_java_util_zip_CheckedOutputStream_write_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_util_zip_CheckedOutputStream_write_int 15
typedef void (*func_java_util_zip_CheckedOutputStream_write_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_zip_CheckedOutputStream_checkError_R_boolean 16
typedef jbool (*func_java_util_zip_CheckedOutputStream_checkError_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_CheckedOutputStream_getChecksum_R_java_util_zip_Checksum 17
typedef jobject (*func_java_util_zip_CheckedOutputStream_getChecksum_R_java_util_zip_Checksum)(jcontext ctx, jobject self);

void mark_java_util_zip_CheckedOutputStream(jobject object, jint mark, jint depth);
void clinit_java_util_zip_CheckedOutputStream(jcontext ctx);
void init_java_util_zip_CheckedOutputStream_java_io_OutputStream_java_util_zip_Checksum(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_java_util_zip_CheckedOutputStream_write_int(jcontext ctx, jobject self, jint param0);
void M_java_util_zip_CheckedOutputStream_write_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jobject M_java_util_zip_CheckedOutputStream_getChecksum_R_java_util_zip_Checksum(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
