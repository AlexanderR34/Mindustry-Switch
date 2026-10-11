#ifndef HEADER_java_util_zip_DeflaterOutputStream
#define HEADER_java_util_zip_DeflaterOutputStream

#include "Clearwing.h"
#include "java/io/FilterOutputStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_zip_DeflaterOutputStream {
	java_io_FilterOutputStream parent;
	jref F_def;
	jref F_buf;
	jbool F_closed;
	jbool F_syncFlush;
	jbool F_usesDefaultDeflater;
} java_util_zip_DeflaterOutputStream;

extern Class class_java_util_zip_DeflaterOutputStream;


#define VTABLE_java_util_zip_DeflaterOutputStream_hashCode_R_int 0
typedef jint (*func_java_util_zip_DeflaterOutputStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_DeflaterOutputStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_zip_DeflaterOutputStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_DeflaterOutputStream_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_zip_DeflaterOutputStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_DeflaterOutputStream_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_zip_DeflaterOutputStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_DeflaterOutputStream_toString_R_java_lang_String 4
typedef jobject (*func_java_util_zip_DeflaterOutputStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_DeflaterOutputStream_finalize 5
typedef void (*func_java_util_zip_DeflaterOutputStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_DeflaterOutputStream_notify 6
typedef void (*func_java_util_zip_DeflaterOutputStream_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_DeflaterOutputStream_notifyAll 7
typedef void (*func_java_util_zip_DeflaterOutputStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_DeflaterOutputStream_wait 8
typedef void (*func_java_util_zip_DeflaterOutputStream_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_DeflaterOutputStream_wait_long 9
typedef void (*func_java_util_zip_DeflaterOutputStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_zip_DeflaterOutputStream_wait_long_int 10
typedef void (*func_java_util_zip_DeflaterOutputStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_zip_DeflaterOutputStream_close 11
typedef void (*func_java_util_zip_DeflaterOutputStream_close)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_DeflaterOutputStream_flush 12
typedef void (*func_java_util_zip_DeflaterOutputStream_flush)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_DeflaterOutputStream_write_Array1_byte 13
typedef void (*func_java_util_zip_DeflaterOutputStream_write_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_DeflaterOutputStream_write_Array1_byte_int_int 14
typedef void (*func_java_util_zip_DeflaterOutputStream_write_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_util_zip_DeflaterOutputStream_write_int 15
typedef void (*func_java_util_zip_DeflaterOutputStream_write_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_zip_DeflaterOutputStream_checkError_R_boolean 16
typedef jbool (*func_java_util_zip_DeflaterOutputStream_checkError_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_DeflaterOutputStream_finish 17
typedef void (*func_java_util_zip_DeflaterOutputStream_finish)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_DeflaterOutputStream_deflate 18
typedef void (*func_java_util_zip_DeflaterOutputStream_deflate)(jcontext ctx, jobject self);

void mark_java_util_zip_DeflaterOutputStream(jobject object, jint mark, jint depth);
void clinit_java_util_zip_DeflaterOutputStream(jcontext ctx);
void init_java_util_zip_DeflaterOutputStream_java_io_OutputStream_java_util_zip_Deflater_int_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jbool param3);
void init_java_util_zip_DeflaterOutputStream_java_io_OutputStream_java_util_zip_Deflater_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
void init_java_util_zip_DeflaterOutputStream_java_io_OutputStream_java_util_zip_Deflater_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
void init_java_util_zip_DeflaterOutputStream_java_io_OutputStream_java_util_zip_Deflater(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_java_util_zip_DeflaterOutputStream_java_io_OutputStream_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void init_java_util_zip_DeflaterOutputStream_java_io_OutputStream(jcontext ctx, jobject self, jobject param0);
void M_java_util_zip_DeflaterOutputStream_write_int(jcontext ctx, jobject self, jint param0);
void M_java_util_zip_DeflaterOutputStream_write_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_util_zip_DeflaterOutputStream_finish(jcontext ctx, jobject self);
void M_java_util_zip_DeflaterOutputStream_close(jcontext ctx, jobject self);
void M_java_util_zip_DeflaterOutputStream_deflate(jcontext ctx, jobject self);
void M_java_util_zip_DeflaterOutputStream_flush(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
