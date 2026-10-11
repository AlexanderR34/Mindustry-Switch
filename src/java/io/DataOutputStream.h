#ifndef HEADER_java_io_DataOutputStream
#define HEADER_java_io_DataOutputStream

#include "Clearwing.h"
#include "java/io/FilterOutputStream.h"
#include "java/io/DataOutput.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_DataOutputStream {
	java_io_FilterOutputStream parent;
	jint F_written;
	jref F_buff;
} java_io_DataOutputStream;

extern Class class_java_io_DataOutputStream;


#define VTABLE_java_io_DataOutputStream_hashCode_R_int 0
typedef jint (*func_java_io_DataOutputStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataOutputStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_io_DataOutputStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_DataOutputStream_clone_R_java_lang_Object 2
typedef jobject (*func_java_io_DataOutputStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataOutputStream_getClass_R_java_lang_Class 3
typedef jobject (*func_java_io_DataOutputStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataOutputStream_toString_R_java_lang_String 4
typedef jobject (*func_java_io_DataOutputStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataOutputStream_finalize 5
typedef void (*func_java_io_DataOutputStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataOutputStream_notify 6
typedef void (*func_java_io_DataOutputStream_notify)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataOutputStream_notifyAll 7
typedef void (*func_java_io_DataOutputStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataOutputStream_wait 8
typedef void (*func_java_io_DataOutputStream_wait)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataOutputStream_wait_long 9
typedef void (*func_java_io_DataOutputStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_DataOutputStream_wait_long_int 10
typedef void (*func_java_io_DataOutputStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_io_DataOutputStream_close 11
typedef void (*func_java_io_DataOutputStream_close)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataOutputStream_flush 12
typedef void (*func_java_io_DataOutputStream_flush)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataOutputStream_write_Array1_byte 13
typedef void (*func_java_io_DataOutputStream_write_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_DataOutputStream_write_Array1_byte_int_int 14
typedef void (*func_java_io_DataOutputStream_write_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_DataOutputStream_write_int 15
typedef void (*func_java_io_DataOutputStream_write_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_DataOutputStream_checkError_R_boolean 16
typedef jbool (*func_java_io_DataOutputStream_checkError_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataOutputStream_writeBoolean_boolean 17
typedef void (*func_java_io_DataOutputStream_writeBoolean_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_io_DataOutputStream_writeByte_int 18
typedef void (*func_java_io_DataOutputStream_writeByte_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_DataOutputStream_writeChar_int 19
typedef void (*func_java_io_DataOutputStream_writeChar_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_DataOutputStream_writeChars_java_lang_String 20
typedef void (*func_java_io_DataOutputStream_writeChars_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_DataOutputStream_writeDouble_double 21
typedef void (*func_java_io_DataOutputStream_writeDouble_double)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_java_io_DataOutputStream_writeFloat_float 22
typedef void (*func_java_io_DataOutputStream_writeFloat_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_java_io_DataOutputStream_writeInt_int 23
typedef void (*func_java_io_DataOutputStream_writeInt_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_DataOutputStream_writeLong_long 24
typedef void (*func_java_io_DataOutputStream_writeLong_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_DataOutputStream_writeShort_int 25
typedef void (*func_java_io_DataOutputStream_writeShort_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String 26
typedef void (*func_java_io_DataOutputStream_writeUTF_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_DataOutputStream_size_R_int 27
typedef jint (*func_java_io_DataOutputStream_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataOutputStream_writeBytes_java_lang_String 28
typedef void (*func_java_io_DataOutputStream_writeBytes_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_DataOutputStream_writeLongToBuffer_long_Array1_byte_int_R_int 29
typedef jint (*func_java_io_DataOutputStream_writeLongToBuffer_long_Array1_byte_int_R_int)(jcontext ctx, jobject self, jlong param0, jobject param1, jint param2);
#define VTABLE_java_io_DataOutputStream_writeShortToBuffer_int_Array1_byte_int_R_int 30
typedef jint (*func_java_io_DataOutputStream_writeShortToBuffer_int_Array1_byte_int_R_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
#define VTABLE_java_io_DataOutputStream_countUTFBytes_java_lang_String_R_long 31
typedef jlong (*func_java_io_DataOutputStream_countUTFBytes_java_lang_String_R_long)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_DataOutputStream_writeUTFBytesToBuffer_java_lang_String_long_Array1_byte_int_R_int 32
typedef jint (*func_java_io_DataOutputStream_writeUTFBytesToBuffer_java_lang_String_long_Array1_byte_int_R_int)(jcontext ctx, jobject self, jobject param0, jlong param1, jobject param2, jint param3);

void mark_java_io_DataOutputStream(jobject object, jint mark, jint depth);
void clinit_java_io_DataOutputStream(jcontext ctx);
void init_java_io_DataOutputStream_java_io_OutputStream(jcontext ctx, jobject self, jobject param0);
void M_java_io_DataOutputStream_flush(jcontext ctx, jobject self);
jint M_java_io_DataOutputStream_size_R_int(jcontext ctx, jobject self);
void M_java_io_DataOutputStream_write_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_io_DataOutputStream_write_int(jcontext ctx, jobject self, jint param0);
void M_java_io_DataOutputStream_writeBoolean_boolean(jcontext ctx, jobject self, jbool param0);
void M_java_io_DataOutputStream_writeByte_int(jcontext ctx, jobject self, jint param0);
void M_java_io_DataOutputStream_writeBytes_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_java_io_DataOutputStream_writeChar_int(jcontext ctx, jobject self, jint param0);
void M_java_io_DataOutputStream_writeChars_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_java_io_DataOutputStream_writeDouble_double(jcontext ctx, jobject self, jdouble param0);
void M_java_io_DataOutputStream_writeFloat_float(jcontext ctx, jobject self, jfloat param0);
void M_java_io_DataOutputStream_writeInt_int(jcontext ctx, jobject self, jint param0);
void M_java_io_DataOutputStream_writeLong_long(jcontext ctx, jobject self, jlong param0);
jint M_java_io_DataOutputStream_writeLongToBuffer_long_Array1_byte_int_R_int(jcontext ctx, jobject self, jlong param0, jobject param1, jint param2);
void M_java_io_DataOutputStream_writeShort_int(jcontext ctx, jobject self, jint param0);
jint M_java_io_DataOutputStream_writeShortToBuffer_int_Array1_byte_int_R_int(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
void M_java_io_DataOutputStream_writeUTF_java_lang_String(jcontext ctx, jobject self, jobject param0);
jlong M_java_io_DataOutputStream_countUTFBytes_java_lang_String_R_long(jcontext ctx, jobject self, jobject param0);
jint M_java_io_DataOutputStream_writeUTFBytesToBuffer_java_lang_String_long_Array1_byte_int_R_int(jcontext ctx, jobject self, jobject param0, jlong param1, jobject param2, jint param3);

#ifdef __cplusplus
}
#endif

#endif
