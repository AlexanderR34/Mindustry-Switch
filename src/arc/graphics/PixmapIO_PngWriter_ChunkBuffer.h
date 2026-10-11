#ifndef HEADER_arc_graphics_PixmapIO$PngWriter$ChunkBuffer
#define HEADER_arc_graphics_PixmapIO$PngWriter$ChunkBuffer

#include "Clearwing.h"
#include "java/io/DataOutputStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_PixmapIO$PngWriter$ChunkBuffer {
	java_io_DataOutputStream parent;
	jref F_buffer;
	jref F_crc;
} arc_graphics_PixmapIO$PngWriter$ChunkBuffer;

extern Class class_arc_graphics_PixmapIO$PngWriter$ChunkBuffer;


#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_hashCode_R_int 0
typedef jint (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_finalize 5
typedef void (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_notify 6
typedef void (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_notifyAll 7
typedef void (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_wait 8
typedef void (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_wait_long 9
typedef void (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_wait_long_int 10
typedef void (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_close 11
typedef void (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_close)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_flush 12
typedef void (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_flush)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_write_Array1_byte 13
typedef void (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_write_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_write_Array1_byte_int_int 14
typedef void (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_write_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_write_int 15
typedef void (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_write_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_checkError_R_boolean 16
typedef jbool (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_checkError_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeBoolean_boolean 17
typedef void (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeBoolean_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeByte_int 18
typedef void (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeByte_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeChar_int 19
typedef void (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeChar_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeChars_java_lang_String 20
typedef void (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeChars_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeDouble_double 21
typedef void (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeDouble_double)(jcontext ctx, jobject self, jdouble param0);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeFloat_float 22
typedef void (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeFloat_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeInt_int 23
typedef void (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeInt_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeLong_long 24
typedef void (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeLong_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeShort_int 25
typedef void (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeShort_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeUTF_java_lang_String 26
typedef void (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeUTF_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_size_R_int 27
typedef jint (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeBytes_java_lang_String 28
typedef void (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeBytes_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeLongToBuffer_long_Array1_byte_int_R_int 29
typedef jint (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeLongToBuffer_long_Array1_byte_int_R_int)(jcontext ctx, jobject self, jlong param0, jobject param1, jint param2);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeShortToBuffer_int_Array1_byte_int_R_int 30
typedef jint (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeShortToBuffer_int_Array1_byte_int_R_int)(jcontext ctx, jobject self, jint param0, jobject param1, jint param2);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_countUTFBytes_java_lang_String_R_long 31
typedef jlong (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_countUTFBytes_java_lang_String_R_long)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeUTFBytesToBuffer_java_lang_String_long_Array1_byte_int_R_int 32
typedef jint (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_writeUTFBytesToBuffer_java_lang_String_long_Array1_byte_int_R_int)(jcontext ctx, jobject self, jobject param0, jlong param1, jobject param2, jint param3);
#define VTABLE_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_endChunk_java_io_DataOutputStream 33
typedef void (*func_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_endChunk_java_io_DataOutputStream)(jcontext ctx, jobject self, jobject param0);

void mark_arc_graphics_PixmapIO$PngWriter$ChunkBuffer(jobject object, jint mark, jint depth);
void clinit_arc_graphics_PixmapIO$PngWriter$ChunkBuffer(jcontext ctx);
void init_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_int(jcontext ctx, jobject self, jint param0);
void init_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_java_io_ByteArrayOutputStream_java_util_zip_CRC32(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_graphics_PixmapIO$PngWriter$ChunkBuffer_endChunk_java_io_DataOutputStream(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
