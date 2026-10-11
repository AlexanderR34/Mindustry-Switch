#ifndef HEADER_java_io_DataInputStream
#define HEADER_java_io_DataInputStream

#include "Clearwing.h"
#include "java/io/FilterInputStream.h"
#include "java/io/DataInput.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_DataInputStream {
	java_io_FilterInputStream parent;
	jref F_scratch;
} java_io_DataInputStream;

extern Class class_java_io_DataInputStream;


#define VTABLE_java_io_DataInputStream_hashCode_R_int 0
typedef jint (*func_java_io_DataInputStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataInputStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_io_DataInputStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_DataInputStream_clone_R_java_lang_Object 2
typedef jobject (*func_java_io_DataInputStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataInputStream_getClass_R_java_lang_Class 3
typedef jobject (*func_java_io_DataInputStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataInputStream_toString_R_java_lang_String 4
typedef jobject (*func_java_io_DataInputStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataInputStream_finalize 5
typedef void (*func_java_io_DataInputStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataInputStream_notify 6
typedef void (*func_java_io_DataInputStream_notify)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataInputStream_notifyAll 7
typedef void (*func_java_io_DataInputStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataInputStream_wait 8
typedef void (*func_java_io_DataInputStream_wait)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataInputStream_wait_long 9
typedef void (*func_java_io_DataInputStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_DataInputStream_wait_long_int 10
typedef void (*func_java_io_DataInputStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_io_DataInputStream_close 11
typedef void (*func_java_io_DataInputStream_close)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataInputStream_available_R_int 12
typedef jint (*func_java_io_DataInputStream_available_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataInputStream_mark_int 13
typedef void (*func_java_io_DataInputStream_mark_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_DataInputStream_markSupported_R_boolean 14
typedef jbool (*func_java_io_DataInputStream_markSupported_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataInputStream_read_R_int 15
typedef jint (*func_java_io_DataInputStream_read_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataInputStream_read_Array1_byte_R_int 16
typedef jint (*func_java_io_DataInputStream_read_Array1_byte_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_DataInputStream_read_Array1_byte_int_int_R_int 17
typedef jint (*func_java_io_DataInputStream_read_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_DataInputStream_reset 18
typedef void (*func_java_io_DataInputStream_reset)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataInputStream_skip_long_R_long 19
typedef jlong (*func_java_io_DataInputStream_skip_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_DataInputStream_readBoolean_R_boolean 20
typedef jbool (*func_java_io_DataInputStream_readBoolean_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataInputStream_readByte_R_byte 21
typedef jbyte (*func_java_io_DataInputStream_readByte_R_byte)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataInputStream_readChar_R_char 22
typedef jchar (*func_java_io_DataInputStream_readChar_R_char)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataInputStream_readDouble_R_double 23
typedef jdouble (*func_java_io_DataInputStream_readDouble_R_double)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataInputStream_readFloat_R_float 24
typedef jfloat (*func_java_io_DataInputStream_readFloat_R_float)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataInputStream_readFully_Array1_byte 25
typedef void (*func_java_io_DataInputStream_readFully_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_DataInputStream_readFully_Array1_byte_int_int 26
typedef void (*func_java_io_DataInputStream_readFully_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_DataInputStream_readInt_R_int 27
typedef jint (*func_java_io_DataInputStream_readInt_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataInputStream_readLong_R_long 28
typedef jlong (*func_java_io_DataInputStream_readLong_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataInputStream_readShort_R_short 29
typedef jshort (*func_java_io_DataInputStream_readShort_R_short)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataInputStream_readUnsignedByte_R_int 30
typedef jint (*func_java_io_DataInputStream_readUnsignedByte_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataInputStream_readUnsignedShort_R_int 31
typedef jint (*func_java_io_DataInputStream_readUnsignedShort_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String 32
typedef jobject (*func_java_io_DataInputStream_readUTF_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_DataInputStream_skipBytes_int_R_int 33
typedef jint (*func_java_io_DataInputStream_skipBytes_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_DataInputStream_decodeUTF_int_R_java_lang_String 34
typedef jobject (*func_java_io_DataInputStream_decodeUTF_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_DataInputStream_readLine_R_java_lang_String 35
typedef jobject (*func_java_io_DataInputStream_readLine_R_java_lang_String)(jcontext ctx, jobject self);

void mark_java_io_DataInputStream(jobject object, jint mark, jint depth);
void clinit_java_io_DataInputStream(jcontext ctx);
void init_java_io_DataInputStream_java_io_InputStream(jcontext ctx, jobject self, jobject param0);
jbool M_java_io_DataInputStream_readBoolean_R_boolean(jcontext ctx, jobject self);
jbyte M_java_io_DataInputStream_readByte_R_byte(jcontext ctx, jobject self);
jchar M_java_io_DataInputStream_readChar_R_char(jcontext ctx, jobject self);
jdouble M_java_io_DataInputStream_readDouble_R_double(jcontext ctx, jobject self);
jfloat M_java_io_DataInputStream_readFloat_R_float(jcontext ctx, jobject self);
void M_java_io_DataInputStream_readFully_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_java_io_DataInputStream_readFully_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jint M_java_io_DataInputStream_readInt_R_int(jcontext ctx, jobject self);
jlong M_java_io_DataInputStream_readLong_R_long(jcontext ctx, jobject self);
jshort M_java_io_DataInputStream_readShort_R_short(jcontext ctx, jobject self);
jint M_java_io_DataInputStream_readUnsignedByte_R_int(jcontext ctx, jobject self);
jint M_java_io_DataInputStream_readUnsignedShort_R_int(jcontext ctx, jobject self);
jobject M_java_io_DataInputStream_readUTF_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_io_DataInputStream_decodeUTF_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
jobject SM_java_io_DataInputStream_decodeUTF_int_java_io_DataInput_R_java_lang_String(jcontext ctx, jint param0, jobject param1);
jobject SM_java_io_DataInputStream_decode_Array1_byte_Array1_char_int_int_R_java_lang_String(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3);
jobject SM_java_io_DataInputStream_readUTF_java_io_DataInput_R_java_lang_String(jcontext ctx, jobject param0);
jint M_java_io_DataInputStream_skipBytes_int_R_int(jcontext ctx, jobject self, jint param0);
jobject M_java_io_DataInputStream_readLine_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
