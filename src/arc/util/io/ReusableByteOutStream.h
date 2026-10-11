#ifndef HEADER_arc_util_io_ReusableByteOutStream
#define HEADER_arc_util_io_ReusableByteOutStream

#include "Clearwing.h"
#include "java/io/ByteArrayOutputStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_io_ReusableByteOutStream {
	java_io_ByteArrayOutputStream parent;
} arc_util_io_ReusableByteOutStream;

extern Class class_arc_util_io_ReusableByteOutStream;


#define VTABLE_arc_util_io_ReusableByteOutStream_hashCode_R_int 0
typedef jint (*func_arc_util_io_ReusableByteOutStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ReusableByteOutStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_io_ReusableByteOutStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_io_ReusableByteOutStream_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_io_ReusableByteOutStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ReusableByteOutStream_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_io_ReusableByteOutStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ReusableByteOutStream_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_io_ReusableByteOutStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ReusableByteOutStream_finalize 5
typedef void (*func_arc_util_io_ReusableByteOutStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ReusableByteOutStream_notify 6
typedef void (*func_arc_util_io_ReusableByteOutStream_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ReusableByteOutStream_notifyAll 7
typedef void (*func_arc_util_io_ReusableByteOutStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ReusableByteOutStream_wait 8
typedef void (*func_arc_util_io_ReusableByteOutStream_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ReusableByteOutStream_wait_long 9
typedef void (*func_arc_util_io_ReusableByteOutStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_io_ReusableByteOutStream_wait_long_int 10
typedef void (*func_arc_util_io_ReusableByteOutStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_io_ReusableByteOutStream_close 11
typedef void (*func_arc_util_io_ReusableByteOutStream_close)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ReusableByteOutStream_flush 12
typedef void (*func_arc_util_io_ReusableByteOutStream_flush)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ReusableByteOutStream_write_Array1_byte 13
typedef void (*func_arc_util_io_ReusableByteOutStream_write_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_io_ReusableByteOutStream_write_Array1_byte_int_int 14
typedef void (*func_arc_util_io_ReusableByteOutStream_write_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_util_io_ReusableByteOutStream_write_int 15
typedef void (*func_arc_util_io_ReusableByteOutStream_write_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_util_io_ReusableByteOutStream_checkError_R_boolean 16
typedef jbool (*func_arc_util_io_ReusableByteOutStream_checkError_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ReusableByteOutStream_expand_int 17
typedef void (*func_arc_util_io_ReusableByteOutStream_expand_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_util_io_ReusableByteOutStream_reset 18
typedef void (*func_arc_util_io_ReusableByteOutStream_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ReusableByteOutStream_size_R_int 19
typedef jint (*func_arc_util_io_ReusableByteOutStream_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ReusableByteOutStream_toByteArray_R_Array1_byte 20
typedef jobject (*func_arc_util_io_ReusableByteOutStream_toByteArray_R_Array1_byte)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ReusableByteOutStream_toString_int_R_java_lang_String 21
typedef jobject (*func_arc_util_io_ReusableByteOutStream_toString_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_util_io_ReusableByteOutStream_toString_java_lang_String_R_java_lang_String 22
typedef jobject (*func_arc_util_io_ReusableByteOutStream_toString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_io_ReusableByteOutStream_writeTo_java_io_OutputStream 23
typedef void (*func_arc_util_io_ReusableByteOutStream_writeTo_java_io_OutputStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_io_ReusableByteOutStream_getBytes_R_Array1_byte 24
typedef jobject (*func_arc_util_io_ReusableByteOutStream_getBytes_R_Array1_byte)(jcontext ctx, jobject self);

void mark_arc_util_io_ReusableByteOutStream(jobject object, jint mark, jint depth);
void clinit_arc_util_io_ReusableByteOutStream(jcontext ctx);
void init_arc_util_io_ReusableByteOutStream_int(jcontext ctx, jobject self, jint param0);
void init_arc_util_io_ReusableByteOutStream(jcontext ctx, jobject self);
jobject M_arc_util_io_ReusableByteOutStream_getBytes_R_Array1_byte(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
