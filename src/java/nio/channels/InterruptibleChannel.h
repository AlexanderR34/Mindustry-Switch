#ifndef HEADER_java_nio_channels_InterruptibleChannel
#define HEADER_java_nio_channels_InterruptibleChannel

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/nio/channels/Channel.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_channels_InterruptibleChannel {
	java_lang_Object parent;
} java_nio_channels_InterruptibleChannel;

extern Class class_java_nio_channels_InterruptibleChannel;


#define INDEX_java_nio_channels_InterruptibleChannel_close 0
typedef void (*func_java_nio_channels_InterruptibleChannel_close)(jcontext ctx, jobject self);

void mark_java_nio_channels_InterruptibleChannel(jobject object, jint mark, jint depth);
void clinit_java_nio_channels_InterruptibleChannel(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
