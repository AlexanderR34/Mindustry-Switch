#ifndef HEADER_arc_util_io_ByteBufferInput
#define HEADER_arc_util_io_ByteBufferInput

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/io/DataInput.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_io_ByteBufferInput {
	java_lang_Object parent;
	jref F_buffer;
} arc_util_io_ByteBufferInput;

extern Class class_arc_util_io_ByteBufferInput;


#define VTABLE_arc_util_io_ByteBufferInput_hashCode_R_int 0
typedef jint (*func_arc_util_io_ByteBufferInput_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ByteBufferInput_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_io_ByteBufferInput_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_io_ByteBufferInput_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_io_ByteBufferInput_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ByteBufferInput_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_io_ByteBufferInput_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ByteBufferInput_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_io_ByteBufferInput_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ByteBufferInput_finalize 5
typedef void (*func_arc_util_io_ByteBufferInput_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ByteBufferInput_notify 6
typedef void (*func_arc_util_io_ByteBufferInput_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ByteBufferInput_notifyAll 7
typedef void (*func_arc_util_io_ByteBufferInput_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ByteBufferInput_wait 8
typedef void (*func_arc_util_io_ByteBufferInput_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ByteBufferInput_wait_long 9
typedef void (*func_arc_util_io_ByteBufferInput_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_io_ByteBufferInput_wait_long_int 10
typedef void (*func_arc_util_io_ByteBufferInput_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_io_ByteBufferInput_close 11
typedef void (*func_arc_util_io_ByteBufferInput_close)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ByteBufferInput_readBoolean_R_boolean 12
typedef jbool (*func_arc_util_io_ByteBufferInput_readBoolean_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ByteBufferInput_readByte_R_byte 13
typedef jbyte (*func_arc_util_io_ByteBufferInput_readByte_R_byte)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ByteBufferInput_readChar_R_char 14
typedef jchar (*func_arc_util_io_ByteBufferInput_readChar_R_char)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ByteBufferInput_readDouble_R_double 15
typedef jdouble (*func_arc_util_io_ByteBufferInput_readDouble_R_double)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ByteBufferInput_readFloat_R_float 16
typedef jfloat (*func_arc_util_io_ByteBufferInput_readFloat_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ByteBufferInput_readFully_Array1_byte 17
typedef void (*func_arc_util_io_ByteBufferInput_readFully_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_io_ByteBufferInput_readFully_Array1_byte_int_int 18
typedef void (*func_arc_util_io_ByteBufferInput_readFully_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_util_io_ByteBufferInput_readInt_R_int 19
typedef jint (*func_arc_util_io_ByteBufferInput_readInt_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ByteBufferInput_readLong_R_long 20
typedef jlong (*func_arc_util_io_ByteBufferInput_readLong_R_long)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ByteBufferInput_readShort_R_short 21
typedef jshort (*func_arc_util_io_ByteBufferInput_readShort_R_short)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ByteBufferInput_readUnsignedByte_R_int 22
typedef jint (*func_arc_util_io_ByteBufferInput_readUnsignedByte_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ByteBufferInput_readUnsignedShort_R_int 23
typedef jint (*func_arc_util_io_ByteBufferInput_readUnsignedShort_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ByteBufferInput_readUTF_R_java_lang_String 24
typedef jobject (*func_arc_util_io_ByteBufferInput_readUTF_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ByteBufferInput_skipBytes_int_R_int 25
typedef jint (*func_arc_util_io_ByteBufferInput_skipBytes_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_util_io_ByteBufferInput_setBuffer_java_nio_ByteBuffer 26
typedef void (*func_arc_util_io_ByteBufferInput_setBuffer_java_nio_ByteBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_io_ByteBufferInput_readLine_R_java_lang_String 27
typedef jobject (*func_arc_util_io_ByteBufferInput_readLine_R_java_lang_String)(jcontext ctx, jobject self);

void mark_arc_util_io_ByteBufferInput(jobject object, jint mark, jint depth);
void clinit_arc_util_io_ByteBufferInput(jcontext ctx);
void init_arc_util_io_ByteBufferInput_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0);
void init_arc_util_io_ByteBufferInput(jcontext ctx, jobject self);
void M_arc_util_io_ByteBufferInput_setBuffer_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0);
void M_arc_util_io_ByteBufferInput_readFully_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_arc_util_io_ByteBufferInput_readFully_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jint M_arc_util_io_ByteBufferInput_skipBytes_int_R_int(jcontext ctx, jobject self, jint param0);
jbool M_arc_util_io_ByteBufferInput_readBoolean_R_boolean(jcontext ctx, jobject self);
jbyte M_arc_util_io_ByteBufferInput_readByte_R_byte(jcontext ctx, jobject self);
jint M_arc_util_io_ByteBufferInput_readUnsignedByte_R_int(jcontext ctx, jobject self);
jshort M_arc_util_io_ByteBufferInput_readShort_R_short(jcontext ctx, jobject self);
jint M_arc_util_io_ByteBufferInput_readUnsignedShort_R_int(jcontext ctx, jobject self);
jchar M_arc_util_io_ByteBufferInput_readChar_R_char(jcontext ctx, jobject self);
jint M_arc_util_io_ByteBufferInput_readInt_R_int(jcontext ctx, jobject self);
jlong M_arc_util_io_ByteBufferInput_readLong_R_long(jcontext ctx, jobject self);
jfloat M_arc_util_io_ByteBufferInput_readFloat_R_float(jcontext ctx, jobject self);
jdouble M_arc_util_io_ByteBufferInput_readDouble_R_double(jcontext ctx, jobject self);
jobject M_arc_util_io_ByteBufferInput_readLine_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_util_io_ByteBufferInput_readUTF_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
