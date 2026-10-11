#ifndef HEADER_java_io_DataInput
#define HEADER_java_io_DataInput

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/AutoCloseable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_DataInput {
	java_lang_Object parent;
} java_io_DataInput;

extern Class class_java_io_DataInput;


#define INDEX_java_io_DataInput_readBoolean_R_boolean 0
typedef jbool (*func_java_io_DataInput_readBoolean_R_boolean)(jcontext ctx, jobject self);
#define INDEX_java_io_DataInput_readByte_R_byte 1
typedef jbyte (*func_java_io_DataInput_readByte_R_byte)(jcontext ctx, jobject self);
#define INDEX_java_io_DataInput_readChar_R_char 2
typedef jchar (*func_java_io_DataInput_readChar_R_char)(jcontext ctx, jobject self);
#define INDEX_java_io_DataInput_readDouble_R_double 3
typedef jdouble (*func_java_io_DataInput_readDouble_R_double)(jcontext ctx, jobject self);
#define INDEX_java_io_DataInput_readFloat_R_float 4
typedef jfloat (*func_java_io_DataInput_readFloat_R_float)(jcontext ctx, jobject self);
#define INDEX_java_io_DataInput_readFully_Array1_byte 5
typedef void (*func_java_io_DataInput_readFully_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_io_DataInput_readFully_Array1_byte_int_int 6
typedef void (*func_java_io_DataInput_readFully_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define INDEX_java_io_DataInput_readInt_R_int 7
typedef jint (*func_java_io_DataInput_readInt_R_int)(jcontext ctx, jobject self);
#define INDEX_java_io_DataInput_readLong_R_long 8
typedef jlong (*func_java_io_DataInput_readLong_R_long)(jcontext ctx, jobject self);
#define INDEX_java_io_DataInput_readShort_R_short 9
typedef jshort (*func_java_io_DataInput_readShort_R_short)(jcontext ctx, jobject self);
#define INDEX_java_io_DataInput_readUnsignedByte_R_int 10
typedef jint (*func_java_io_DataInput_readUnsignedByte_R_int)(jcontext ctx, jobject self);
#define INDEX_java_io_DataInput_readUnsignedShort_R_int 11
typedef jint (*func_java_io_DataInput_readUnsignedShort_R_int)(jcontext ctx, jobject self);
#define INDEX_java_io_DataInput_readUTF_R_java_lang_String 12
typedef jobject (*func_java_io_DataInput_readUTF_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_java_io_DataInput_skipBytes_int_R_int 13
typedef jint (*func_java_io_DataInput_skipBytes_int_R_int)(jcontext ctx, jobject self, jint param0);

void mark_java_io_DataInput(jobject object, jint mark, jint depth);
void clinit_java_io_DataInput(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
