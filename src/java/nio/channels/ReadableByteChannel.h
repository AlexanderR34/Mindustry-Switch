#ifndef HEADER_java_nio_channels_ReadableByteChannel
#define HEADER_java_nio_channels_ReadableByteChannel

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/nio/channels/Channel.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_channels_ReadableByteChannel {
	java_lang_Object parent;
} java_nio_channels_ReadableByteChannel;

extern Class class_java_nio_channels_ReadableByteChannel;


#define INDEX_java_nio_channels_ReadableByteChannel_read_java_nio_ByteBuffer_R_int 0
typedef jint (*func_java_nio_channels_ReadableByteChannel_read_java_nio_ByteBuffer_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_java_nio_channels_ReadableByteChannel(jobject object, jint mark, jint depth);
void clinit_java_nio_channels_ReadableByteChannel(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
