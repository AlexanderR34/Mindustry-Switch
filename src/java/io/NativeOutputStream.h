#ifndef HEADER_java_io_NativeOutputStream
#define HEADER_java_io_NativeOutputStream

#include "Clearwing.h"
#include "java/io/OutputStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_NativeOutputStream {
	java_io_OutputStream parent;
} java_io_NativeOutputStream;

extern Class class_java_io_NativeOutputStream;


#define VTABLE_java_io_NativeOutputStream_hashCode_R_int 0
typedef jint (*func_java_io_NativeOutputStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_NativeOutputStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_io_NativeOutputStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_NativeOutputStream_clone_R_java_lang_Object 2
typedef jobject (*func_java_io_NativeOutputStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_io_NativeOutputStream_getClass_R_java_lang_Class 3
typedef jobject (*func_java_io_NativeOutputStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_io_NativeOutputStream_toString_R_java_lang_String 4
typedef jobject (*func_java_io_NativeOutputStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_NativeOutputStream_finalize 5
typedef void (*func_java_io_NativeOutputStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_io_NativeOutputStream_notify 6
typedef void (*func_java_io_NativeOutputStream_notify)(jcontext ctx, jobject self);
#define VTABLE_java_io_NativeOutputStream_notifyAll 7
typedef void (*func_java_io_NativeOutputStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_io_NativeOutputStream_wait 8
typedef void (*func_java_io_NativeOutputStream_wait)(jcontext ctx, jobject self);
#define VTABLE_java_io_NativeOutputStream_wait_long 9
typedef void (*func_java_io_NativeOutputStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_NativeOutputStream_wait_long_int 10
typedef void (*func_java_io_NativeOutputStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_io_NativeOutputStream_close 11
typedef void (*func_java_io_NativeOutputStream_close)(jcontext ctx, jobject self);
#define VTABLE_java_io_NativeOutputStream_flush 12
typedef void (*func_java_io_NativeOutputStream_flush)(jcontext ctx, jobject self);
#define VTABLE_java_io_NativeOutputStream_write_Array1_byte 13
typedef void (*func_java_io_NativeOutputStream_write_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_NativeOutputStream_write_Array1_byte_int_int 14
typedef void (*func_java_io_NativeOutputStream_write_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_NativeOutputStream_write_int 15
typedef void (*func_java_io_NativeOutputStream_write_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_NativeOutputStream_checkError_R_boolean 16
typedef jbool (*func_java_io_NativeOutputStream_checkError_R_boolean)(jcontext ctx, jobject self);

void mark_java_io_NativeOutputStream(jobject object, jint mark, jint depth);
void clinit_java_io_NativeOutputStream(jcontext ctx);
void init_java_io_NativeOutputStream(jcontext ctx, jobject self);
void M_java_io_NativeOutputStream_write_int(jcontext ctx, jobject self, jint param0);
void M_java_io_NativeOutputStream_write_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_io_NativeOutputStream_write_Array1_byte(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
