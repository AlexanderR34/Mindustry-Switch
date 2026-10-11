#ifndef HEADER_arc_util_io_FastDeflaterOutputStream
#define HEADER_arc_util_io_FastDeflaterOutputStream

#include "Clearwing.h"
#include "java/util/zip/DeflaterOutputStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_io_FastDeflaterOutputStream {
	java_util_zip_DeflaterOutputStream parent;
	jref F_tmp;
} arc_util_io_FastDeflaterOutputStream;

extern Class class_arc_util_io_FastDeflaterOutputStream;


#define VTABLE_arc_util_io_FastDeflaterOutputStream_hashCode_R_int 0
typedef jint (*func_arc_util_io_FastDeflaterOutputStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_FastDeflaterOutputStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_io_FastDeflaterOutputStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_io_FastDeflaterOutputStream_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_io_FastDeflaterOutputStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_FastDeflaterOutputStream_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_io_FastDeflaterOutputStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_FastDeflaterOutputStream_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_io_FastDeflaterOutputStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_FastDeflaterOutputStream_finalize 5
typedef void (*func_arc_util_io_FastDeflaterOutputStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_FastDeflaterOutputStream_notify 6
typedef void (*func_arc_util_io_FastDeflaterOutputStream_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_FastDeflaterOutputStream_notifyAll 7
typedef void (*func_arc_util_io_FastDeflaterOutputStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_FastDeflaterOutputStream_wait 8
typedef void (*func_arc_util_io_FastDeflaterOutputStream_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_FastDeflaterOutputStream_wait_long 9
typedef void (*func_arc_util_io_FastDeflaterOutputStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_io_FastDeflaterOutputStream_wait_long_int 10
typedef void (*func_arc_util_io_FastDeflaterOutputStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_io_FastDeflaterOutputStream_close 11
typedef void (*func_arc_util_io_FastDeflaterOutputStream_close)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_FastDeflaterOutputStream_flush 12
typedef void (*func_arc_util_io_FastDeflaterOutputStream_flush)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_FastDeflaterOutputStream_write_Array1_byte 13
typedef void (*func_arc_util_io_FastDeflaterOutputStream_write_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_io_FastDeflaterOutputStream_write_Array1_byte_int_int 14
typedef void (*func_arc_util_io_FastDeflaterOutputStream_write_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_util_io_FastDeflaterOutputStream_write_int 15
typedef void (*func_arc_util_io_FastDeflaterOutputStream_write_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_util_io_FastDeflaterOutputStream_checkError_R_boolean 16
typedef jbool (*func_arc_util_io_FastDeflaterOutputStream_checkError_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_FastDeflaterOutputStream_finish 17
typedef void (*func_arc_util_io_FastDeflaterOutputStream_finish)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_FastDeflaterOutputStream_deflate 18
typedef void (*func_arc_util_io_FastDeflaterOutputStream_deflate)(jcontext ctx, jobject self);

void mark_arc_util_io_FastDeflaterOutputStream(jobject object, jint mark, jint depth);
void clinit_arc_util_io_FastDeflaterOutputStream(jcontext ctx);
void init_arc_util_io_FastDeflaterOutputStream_java_io_OutputStream(jcontext ctx, jobject self, jobject param0);
void M_arc_util_io_FastDeflaterOutputStream_write_int(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
