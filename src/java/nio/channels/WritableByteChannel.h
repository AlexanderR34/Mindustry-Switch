#ifndef HEADER_java_nio_channels_WritableByteChannel
#define HEADER_java_nio_channels_WritableByteChannel

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/nio/channels/Channel.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_channels_WritableByteChannel {
	java_lang_Object parent;
} java_nio_channels_WritableByteChannel;

extern Class class_java_nio_channels_WritableByteChannel;


#define INDEX_java_nio_channels_WritableByteChannel_write_java_nio_ByteBuffer_R_int 0
typedef jint (*func_java_nio_channels_WritableByteChannel_write_java_nio_ByteBuffer_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_java_nio_channels_WritableByteChannel(jobject object, jint mark, jint depth);
void clinit_java_nio_channels_WritableByteChannel(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
