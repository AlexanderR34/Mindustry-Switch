#ifndef HEADER_net_jpountz_lz4_LZ4UnknownSizeDecompressor
#define HEADER_net_jpountz_lz4_LZ4UnknownSizeDecompressor

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct net_jpountz_lz4_LZ4UnknownSizeDecompressor {
	java_lang_Object parent;
} net_jpountz_lz4_LZ4UnknownSizeDecompressor;

extern Class class_net_jpountz_lz4_LZ4UnknownSizeDecompressor;


#define INDEX_net_jpountz_lz4_LZ4UnknownSizeDecompressor_decompress_Array1_byte_int_int_Array1_byte_int_int_R_int 0
typedef jint (*func_net_jpountz_lz4_LZ4UnknownSizeDecompressor_decompress_Array1_byte_int_int_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jint param4, jint param5);
#define INDEX_net_jpountz_lz4_LZ4UnknownSizeDecompressor_decompress_Array1_byte_int_int_Array1_byte_int_R_int 1
typedef jint (*func_net_jpountz_lz4_LZ4UnknownSizeDecompressor_decompress_Array1_byte_int_int_Array1_byte_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jint param4);

void mark_net_jpountz_lz4_LZ4UnknownSizeDecompressor(jobject object, jint mark, jint depth);
void clinit_net_jpountz_lz4_LZ4UnknownSizeDecompressor(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
