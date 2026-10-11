#ifndef HEADER_java_nio_channels_AsynchronousChannel
#define HEADER_java_nio_channels_AsynchronousChannel

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/nio/channels/Channel.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_channels_AsynchronousChannel {
	java_lang_Object parent;
} java_nio_channels_AsynchronousChannel;

extern Class class_java_nio_channels_AsynchronousChannel;


#define INDEX_java_nio_channels_AsynchronousChannel_close 0
typedef void (*func_java_nio_channels_AsynchronousChannel_close)(jcontext ctx, jobject self);

void mark_java_nio_channels_AsynchronousChannel(jobject object, jint mark, jint depth);
void clinit_java_nio_channels_AsynchronousChannel(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
