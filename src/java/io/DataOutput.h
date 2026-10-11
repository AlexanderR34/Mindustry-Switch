#ifndef HEADER_java_io_DataOutput
#define HEADER_java_io_DataOutput

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/AutoCloseable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_DataOutput {
	java_lang_Object parent;
} java_io_DataOutput;

extern Class class_java_io_DataOutput;


#define INDEX_java_io_DataOutput_write_Array1_byte 0
typedef void (*func_java_io_DataOutput_write_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_io_DataOutput_write_Array1_byte_int_int 1
typedef void (*func_java_io_DataOutput_write_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define INDEX_java_io_DataOutput_write_int 2
typedef void (*func_java_io_DataOutput_write_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_java_io_DataOutput_writeBoolean_boolean 3
typedef void (*func_java_io_DataOutput_writeBoolean_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_java_io_DataOutput_writeByte_int 4
typedef void (*func_java_io_DataOutput_writeByte_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_java_io_DataOutput_writeChar_int 5
typedef void (*func_java_io_DataOutput_writeChar_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_java_io_DataOutput_writeChars_java_lang_String 6
typedef void (*func_java_io_DataOutput_writeChars_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_io_DataOutput_writeDouble_double 7
typedef void (*func_java_io_DataOutput_writeDouble_double)(jcontext ctx, jobject self, jdouble param0);
#define INDEX_java_io_DataOutput_writeFloat_float 8
typedef void (*func_java_io_DataOutput_writeFloat_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_java_io_DataOutput_writeInt_int 9
typedef void (*func_java_io_DataOutput_writeInt_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_java_io_DataOutput_writeLong_long 10
typedef void (*func_java_io_DataOutput_writeLong_long)(jcontext ctx, jobject self, jlong param0);
#define INDEX_java_io_DataOutput_writeShort_int 11
typedef void (*func_java_io_DataOutput_writeShort_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_java_io_DataOutput_writeUTF_java_lang_String 12
typedef void (*func_java_io_DataOutput_writeUTF_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_java_io_DataOutput(jobject object, jint mark, jint depth);
void clinit_java_io_DataOutput(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
