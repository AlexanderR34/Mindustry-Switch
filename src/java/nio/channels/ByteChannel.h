#ifndef HEADER_java_nio_channels_ByteChannel
#define HEADER_java_nio_channels_ByteChannel

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/nio/channels/ReadableByteChannel.h"
#include "java/nio/channels/WritableByteChannel.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_channels_ByteChannel {
	java_lang_Object parent;
} java_nio_channels_ByteChannel;

extern Class class_java_nio_channels_ByteChannel;



void mark_java_nio_channels_ByteChannel(jobject object, jint mark, jint depth);
void clinit_java_nio_channels_ByteChannel(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
