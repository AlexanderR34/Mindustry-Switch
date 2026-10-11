#ifndef HEADER_arc_util_io_ByteBufferOutput
#define HEADER_arc_util_io_ByteBufferOutput

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/io/DataOutput.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_io_ByteBufferOutput {
	java_lang_Object parent;
	jref F_buffer;
} arc_util_io_ByteBufferOutput;

extern Class class_arc_util_io_ByteBufferOutput;


#define VTABLE_arc_util_io_ByteBufferOutput_hashCode_R_int 0
typedef jint (*func_arc_util_io_ByteBufferOutput_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ByteBufferOutput_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_io_ByteBufferOutput_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_io_ByteBufferOutput_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_io_ByteBufferOutput_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ByteBufferOutput_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_io_ByteBufferOutput_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ByteBufferOutput_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_io_ByteBufferOutput_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ByteBufferOutput_finalize 5
typedef void (*func_arc_util_io_ByteBufferOutput_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ByteBufferOutput_notify 6
typedef void (*func_arc_util_io_ByteBufferOutput_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ByteBufferOutput_notifyAll 7
typedef void (*func_arc_util_io_ByteBufferOutput_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ByteBufferOutput_wait 8
typedef void (*func_arc_util_io_ByteBufferOutput_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ByteBufferOutput_wait_long 9
typedef void (*func_arc_util_io_ByteBufferOutput_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_io_ByteBufferOutput_wait_long_int 10
typedef void (*func_arc_util_io_ByteBufferOutput_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_io_ByteBufferOutput_close 11
typedef void (*func_arc_util_io_ByteBufferOutput_close)(jcontext ctx, jobject self);
#define VTABLE_arc_util_io_ByteBufferOutput_write_Array1_byte 12
typedef void (*func_arc_util_io_ByteBufferOutput_write_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_io_ByteBufferOutput_write_Array1_byte_int_int 13
typedef void (*func_arc_util_io_ByteBufferOutput_write_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_util_io_ByteBufferOutput_write_int 14
typedef void (*func_arc_util_io_ByteBufferOutput_write_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_util_io_ByteBufferOutput_writeBoolean_boolean 15
typedef void (*func_arc_util_io_ByteBufferOutput_writeBoolean_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_util_io_ByteBufferOutput_writeByte_int 16
typedef void (*func_arc_util_io_ByteBufferOutput_writeByte_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_util_io_ByteBufferOutput_writeChar_int 17
typedef void (*func_arc_util_io_ByteBufferOutput_writeChar_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_util_io_ByteBufferOutput_writeChars_java_lang_String 18
typedef void (*func_arc_util_io_ByteBufferOutput_writeChars_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_io_ByteBufferOutput_writeDouble_double 19
typedef void (*func_arc_util_io_ByteBufferOutput_writeDouble_double)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_arc_util_io_ByteBufferOutput_writeFloat_float 20
typedef void (*func_arc_util_io_ByteBufferOutput_writeFloat_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_util_io_ByteBufferOutput_writeInt_int 21
typedef void (*func_arc_util_io_ByteBufferOutput_writeInt_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_util_io_ByteBufferOutput_writeLong_long 22
typedef void (*func_arc_util_io_ByteBufferOutput_writeLong_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_io_ByteBufferOutput_writeShort_int 23
typedef void (*func_arc_util_io_ByteBufferOutput_writeShort_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_util_io_ByteBufferOutput_writeUTF_java_lang_String 24
typedef void (*func_arc_util_io_ByteBufferOutput_writeUTF_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_io_ByteBufferOutput_writeBytes_java_lang_String 25
typedef void (*func_arc_util_io_ByteBufferOutput_writeBytes_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_arc_util_io_ByteBufferOutput(jobject object, jint mark, jint depth);
void clinit_arc_util_io_ByteBufferOutput(jcontext ctx);
void init_arc_util_io_ByteBufferOutput_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0);
void init_arc_util_io_ByteBufferOutput(jcontext ctx, jobject self);
void M_arc_util_io_ByteBufferOutput_write_int(jcontext ctx, jobject self, jint param0);
void M_arc_util_io_ByteBufferOutput_write_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_arc_util_io_ByteBufferOutput_write_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_arc_util_io_ByteBufferOutput_writeBoolean_boolean(jcontext ctx, jobject self, jbool param0);
void M_arc_util_io_ByteBufferOutput_writeByte_int(jcontext ctx, jobject self, jint param0);
void M_arc_util_io_ByteBufferOutput_writeShort_int(jcontext ctx, jobject self, jint param0);
void M_arc_util_io_ByteBufferOutput_writeChar_int(jcontext ctx, jobject self, jint param0);
void M_arc_util_io_ByteBufferOutput_writeInt_int(jcontext ctx, jobject self, jint param0);
void M_arc_util_io_ByteBufferOutput_writeLong_long(jcontext ctx, jobject self, jlong param0);
void M_arc_util_io_ByteBufferOutput_writeFloat_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_util_io_ByteBufferOutput_writeDouble_double(jcontext ctx, jobject self, jdouble param0);
void M_arc_util_io_ByteBufferOutput_writeBytes_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_arc_util_io_ByteBufferOutput_writeChars_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_arc_util_io_ByteBufferOutput_writeUTF_java_lang_String(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
