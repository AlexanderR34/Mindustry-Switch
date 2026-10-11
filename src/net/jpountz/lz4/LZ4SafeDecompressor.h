#ifndef HEADER_net_jpountz_lz4_LZ4SafeDecompressor
#define HEADER_net_jpountz_lz4_LZ4SafeDecompressor

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "net/jpountz/lz4/LZ4UnknownSizeDecompressor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct net_jpountz_lz4_LZ4SafeDecompressor {
	java_lang_Object parent;
} net_jpountz_lz4_LZ4SafeDecompressor;

extern Class class_net_jpountz_lz4_LZ4SafeDecompressor;


#define VTABLE_net_jpountz_lz4_LZ4SafeDecompressor_hashCode_R_int 0
typedef jint (*func_net_jpountz_lz4_LZ4SafeDecompressor_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4SafeDecompressor_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_net_jpountz_lz4_LZ4SafeDecompressor_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_net_jpountz_lz4_LZ4SafeDecompressor_clone_R_java_lang_Object 2
typedef jobject (*func_net_jpountz_lz4_LZ4SafeDecompressor_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4SafeDecompressor_getClass_R_java_lang_Class 3
typedef jobject (*func_net_jpountz_lz4_LZ4SafeDecompressor_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4SafeDecompressor_toString_R_java_lang_String 4
typedef jobject (*func_net_jpountz_lz4_LZ4SafeDecompressor_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4SafeDecompressor_finalize 5
typedef void (*func_net_jpountz_lz4_LZ4SafeDecompressor_finalize)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4SafeDecompressor_notify 6
typedef void (*func_net_jpountz_lz4_LZ4SafeDecompressor_notify)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4SafeDecompressor_notifyAll 7
typedef void (*func_net_jpountz_lz4_LZ4SafeDecompressor_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4SafeDecompressor_wait 8
typedef void (*func_net_jpountz_lz4_LZ4SafeDecompressor_wait)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_lz4_LZ4SafeDecompressor_wait_long 9
typedef void (*func_net_jpountz_lz4_LZ4SafeDecompressor_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_net_jpountz_lz4_LZ4SafeDecompressor_wait_long_int 10
typedef void (*func_net_jpountz_lz4_LZ4SafeDecompressor_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_net_jpountz_lz4_LZ4SafeDecompressor_decompress_Array1_byte_int_int_Array1_byte_int_int_R_int 11
typedef jint (*func_net_jpountz_lz4_LZ4SafeDecompressor_decompress_Array1_byte_int_int_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jint param4, jint param5);
#define VTABLE_net_jpountz_lz4_LZ4SafeDecompressor_decompress_Array1_byte_int_int_Array1_byte_int_R_int 12
typedef jint (*func_net_jpountz_lz4_LZ4SafeDecompressor_decompress_Array1_byte_int_int_Array1_byte_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jint param4);
#define VTABLE_net_jpountz_lz4_LZ4SafeDecompressor_decompress_java_nio_ByteBuffer_int_int_java_nio_ByteBuffer_int_int_R_int 13
typedef jint (*func_net_jpountz_lz4_LZ4SafeDecompressor_decompress_java_nio_ByteBuffer_int_int_java_nio_ByteBuffer_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jint param4, jint param5);
#define VTABLE_net_jpountz_lz4_LZ4SafeDecompressor_decompress_Array1_byte_Array1_byte_R_int 14
typedef jint (*func_net_jpountz_lz4_LZ4SafeDecompressor_decompress_Array1_byte_Array1_byte_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_net_jpountz_lz4_LZ4SafeDecompressor_decompress_Array1_byte_int_int_int_R_Array1_byte 15
typedef jobject (*func_net_jpountz_lz4_LZ4SafeDecompressor_decompress_Array1_byte_int_int_int_R_Array1_byte)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
#define VTABLE_net_jpountz_lz4_LZ4SafeDecompressor_decompress_Array1_byte_int_R_Array1_byte 16
typedef jobject (*func_net_jpountz_lz4_LZ4SafeDecompressor_decompress_Array1_byte_int_R_Array1_byte)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_net_jpountz_lz4_LZ4SafeDecompressor_decompress_java_nio_ByteBuffer_java_nio_ByteBuffer 17
typedef void (*func_net_jpountz_lz4_LZ4SafeDecompressor_decompress_java_nio_ByteBuffer_java_nio_ByteBuffer)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_net_jpountz_lz4_LZ4SafeDecompressor(jobject object, jint mark, jint depth);
void clinit_net_jpountz_lz4_LZ4SafeDecompressor(jcontext ctx);
void init_net_jpountz_lz4_LZ4SafeDecompressor(jcontext ctx, jobject self);
jint M_net_jpountz_lz4_LZ4SafeDecompressor_decompress_Array1_byte_int_int_Array1_byte_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jint param4);
jint M_net_jpountz_lz4_LZ4SafeDecompressor_decompress_Array1_byte_Array1_byte_R_int(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_net_jpountz_lz4_LZ4SafeDecompressor_decompress_Array1_byte_int_int_int_R_Array1_byte(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
jobject M_net_jpountz_lz4_LZ4SafeDecompressor_decompress_Array1_byte_int_R_Array1_byte(jcontext ctx, jobject self, jobject param0, jint param1);
void M_net_jpountz_lz4_LZ4SafeDecompressor_decompress_java_nio_ByteBuffer_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_net_jpountz_lz4_LZ4SafeDecompressor_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
