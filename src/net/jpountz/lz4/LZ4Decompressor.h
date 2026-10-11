#ifndef HEADER_net_jpountz_lz4_LZ4Decompressor
#define HEADER_net_jpountz_lz4_LZ4Decompressor

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct net_jpountz_lz4_LZ4Decompressor {
	java_lang_Object parent;
} net_jpountz_lz4_LZ4Decompressor;

extern Class class_net_jpountz_lz4_LZ4Decompressor;


#define INDEX_net_jpountz_lz4_LZ4Decompressor_decompress_Array1_byte_int_Array1_byte_int_int_R_int 0
typedef jint (*func_net_jpountz_lz4_LZ4Decompressor_decompress_Array1_byte_int_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3, jint param4);

void mark_net_jpountz_lz4_LZ4Decompressor(jobject object, jint mark, jint depth);
void clinit_net_jpountz_lz4_LZ4Decompressor(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
