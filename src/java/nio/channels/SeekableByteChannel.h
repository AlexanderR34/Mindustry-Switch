#ifndef HEADER_java_nio_channels_SeekableByteChannel
#define HEADER_java_nio_channels_SeekableByteChannel

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/nio/channels/ByteChannel.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_channels_SeekableByteChannel {
	java_lang_Object parent;
} java_nio_channels_SeekableByteChannel;

extern Class class_java_nio_channels_SeekableByteChannel;


#define INDEX_java_nio_channels_SeekableByteChannel_read_java_nio_ByteBuffer_R_int 0
typedef jint (*func_java_nio_channels_SeekableByteChannel_read_java_nio_ByteBuffer_R_int)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_nio_channels_SeekableByteChannel_write_java_nio_ByteBuffer_R_int 1
typedef jint (*func_java_nio_channels_SeekableByteChannel_write_java_nio_ByteBuffer_R_int)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_nio_channels_SeekableByteChannel_position_R_long 2
typedef jlong (*func_java_nio_channels_SeekableByteChannel_position_R_long)(jcontext ctx, jobject self);
#define INDEX_java_nio_channels_SeekableByteChannel_position_long_R_java_nio_channels_SeekableByteChannel 3
typedef jobject (*func_java_nio_channels_SeekableByteChannel_position_long_R_java_nio_channels_SeekableByteChannel)(jcontext ctx, jobject self, jlong param0);
#define INDEX_java_nio_channels_SeekableByteChannel_size_R_long 4
typedef jlong (*func_java_nio_channels_SeekableByteChannel_size_R_long)(jcontext ctx, jobject self);
#define INDEX_java_nio_channels_SeekableByteChannel_truncate_long_R_java_nio_channels_SeekableByteChannel 5
typedef jobject (*func_java_nio_channels_SeekableByteChannel_truncate_long_R_java_nio_channels_SeekableByteChannel)(jcontext ctx, jobject self, jlong param0);

void mark_java_nio_channels_SeekableByteChannel(jobject object, jint mark, jint depth);
void clinit_java_nio_channels_SeekableByteChannel(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
