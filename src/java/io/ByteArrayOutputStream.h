#ifndef HEADER_java_io_ByteArrayOutputStream
#define HEADER_java_io_ByteArrayOutputStream

#include "Clearwing.h"
#include "java/io/OutputStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_ByteArrayOutputStream {
	java_io_OutputStream parent;
	jref F_buf;
	jint F_count;
} java_io_ByteArrayOutputStream;

extern Class class_java_io_ByteArrayOutputStream;


#define VTABLE_java_io_ByteArrayOutputStream_hashCode_R_int 0
typedef jint (*func_java_io_ByteArrayOutputStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_ByteArrayOutputStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_io_ByteArrayOutputStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_ByteArrayOutputStream_clone_R_java_lang_Object 2
typedef jobject (*func_java_io_ByteArrayOutputStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_io_ByteArrayOutputStream_getClass_R_java_lang_Class 3
typedef jobject (*func_java_io_ByteArrayOutputStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_io_ByteArrayOutputStream_toString_R_java_lang_String 4
typedef jobject (*func_java_io_ByteArrayOutputStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_ByteArrayOutputStream_finalize 5
typedef void (*func_java_io_ByteArrayOutputStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_io_ByteArrayOutputStream_notify 6
typedef void (*func_java_io_ByteArrayOutputStream_notify)(jcontext ctx, jobject self);
#define VTABLE_java_io_ByteArrayOutputStream_notifyAll 7
typedef void (*func_java_io_ByteArrayOutputStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_io_ByteArrayOutputStream_wait 8
typedef void (*func_java_io_ByteArrayOutputStream_wait)(jcontext ctx, jobject self);
#define VTABLE_java_io_ByteArrayOutputStream_wait_long 9
typedef void (*func_java_io_ByteArrayOutputStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_ByteArrayOutputStream_wait_long_int 10
typedef void (*func_java_io_ByteArrayOutputStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_io_ByteArrayOutputStream_close 11
typedef void (*func_java_io_ByteArrayOutputStream_close)(jcontext ctx, jobject self);
#define VTABLE_java_io_ByteArrayOutputStream_flush 12
typedef void (*func_java_io_ByteArrayOutputStream_flush)(jcontext ctx, jobject self);
#define VTABLE_java_io_ByteArrayOutputStream_write_Array1_byte 13
typedef void (*func_java_io_ByteArrayOutputStream_write_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_ByteArrayOutputStream_write_Array1_byte_int_int 14
typedef void (*func_java_io_ByteArrayOutputStream_write_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_ByteArrayOutputStream_write_int 15
typedef void (*func_java_io_ByteArrayOutputStream_write_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_ByteArrayOutputStream_checkError_R_boolean 16
typedef jbool (*func_java_io_ByteArrayOutputStream_checkError_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_ByteArrayOutputStream_expand_int 17
typedef void (*func_java_io_ByteArrayOutputStream_expand_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_ByteArrayOutputStream_reset 18
typedef void (*func_java_io_ByteArrayOutputStream_reset)(jcontext ctx, jobject self);
#define VTABLE_java_io_ByteArrayOutputStream_size_R_int 19
typedef jint (*func_java_io_ByteArrayOutputStream_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte 20
typedef jobject (*func_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte)(jcontext ctx, jobject self);
#define VTABLE_java_io_ByteArrayOutputStream_toString_int_R_java_lang_String 21
typedef jobject (*func_java_io_ByteArrayOutputStream_toString_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_ByteArrayOutputStream_toString_java_lang_String_R_java_lang_String 22
typedef jobject (*func_java_io_ByteArrayOutputStream_toString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_ByteArrayOutputStream_writeTo_java_io_OutputStream 23
typedef void (*func_java_io_ByteArrayOutputStream_writeTo_java_io_OutputStream)(jcontext ctx, jobject self, jobject param0);

void mark_java_io_ByteArrayOutputStream(jobject object, jint mark, jint depth);
void clinit_java_io_ByteArrayOutputStream(jcontext ctx);
void init_java_io_ByteArrayOutputStream(jcontext ctx, jobject self);
void init_java_io_ByteArrayOutputStream_int(jcontext ctx, jobject self, jint param0);
void M_java_io_ByteArrayOutputStream_close(jcontext ctx, jobject self);
void M_java_io_ByteArrayOutputStream_expand_int(jcontext ctx, jobject self, jint param0);
void M_java_io_ByteArrayOutputStream_reset(jcontext ctx, jobject self);
jint M_java_io_ByteArrayOutputStream_size_R_int(jcontext ctx, jobject self);
jobject M_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte(jcontext ctx, jobject self);
jobject M_java_io_ByteArrayOutputStream_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_io_ByteArrayOutputStream_toString_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
jobject M_java_io_ByteArrayOutputStream_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_java_io_ByteArrayOutputStream_write_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_io_ByteArrayOutputStream_write_int(jcontext ctx, jobject self, jint param0);
void M_java_io_ByteArrayOutputStream_writeTo_java_io_OutputStream(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
