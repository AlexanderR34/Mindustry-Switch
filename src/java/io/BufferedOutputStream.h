#ifndef HEADER_java_io_BufferedOutputStream
#define HEADER_java_io_BufferedOutputStream

#include "Clearwing.h"
#include "java/io/FilterOutputStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_BufferedOutputStream {
	java_io_FilterOutputStream parent;
	jref F_buf;
	jint F_count;
} java_io_BufferedOutputStream;

extern Class class_java_io_BufferedOutputStream;


#define VTABLE_java_io_BufferedOutputStream_hashCode_R_int 0
typedef jint (*func_java_io_BufferedOutputStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedOutputStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_io_BufferedOutputStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_BufferedOutputStream_clone_R_java_lang_Object 2
typedef jobject (*func_java_io_BufferedOutputStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedOutputStream_getClass_R_java_lang_Class 3
typedef jobject (*func_java_io_BufferedOutputStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedOutputStream_toString_R_java_lang_String 4
typedef jobject (*func_java_io_BufferedOutputStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedOutputStream_finalize 5
typedef void (*func_java_io_BufferedOutputStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedOutputStream_notify 6
typedef void (*func_java_io_BufferedOutputStream_notify)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedOutputStream_notifyAll 7
typedef void (*func_java_io_BufferedOutputStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedOutputStream_wait 8
typedef void (*func_java_io_BufferedOutputStream_wait)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedOutputStream_wait_long 9
typedef void (*func_java_io_BufferedOutputStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_BufferedOutputStream_wait_long_int 10
typedef void (*func_java_io_BufferedOutputStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_io_BufferedOutputStream_close 11
typedef void (*func_java_io_BufferedOutputStream_close)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedOutputStream_flush 12
typedef void (*func_java_io_BufferedOutputStream_flush)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedOutputStream_write_Array1_byte 13
typedef void (*func_java_io_BufferedOutputStream_write_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_BufferedOutputStream_write_Array1_byte_int_int 14
typedef void (*func_java_io_BufferedOutputStream_write_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_BufferedOutputStream_write_int 15
typedef void (*func_java_io_BufferedOutputStream_write_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_BufferedOutputStream_checkError_R_boolean 16
typedef jbool (*func_java_io_BufferedOutputStream_checkError_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_BufferedOutputStream_flushBuffer 17
typedef void (*func_java_io_BufferedOutputStream_flushBuffer)(jcontext ctx, jobject self);

void mark_java_io_BufferedOutputStream(jobject object, jint mark, jint depth);
void clinit_java_io_BufferedOutputStream(jcontext ctx);
void init_java_io_BufferedOutputStream_java_io_OutputStream(jcontext ctx, jobject self, jobject param0);
void init_java_io_BufferedOutputStream_java_io_OutputStream_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_java_io_BufferedOutputStream_flushBuffer(jcontext ctx, jobject self);
void M_java_io_BufferedOutputStream_write_int(jcontext ctx, jobject self, jint param0);
void M_java_io_BufferedOutputStream_write_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_io_BufferedOutputStream_flush(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
