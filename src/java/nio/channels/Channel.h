#ifndef HEADER_java_nio_channels_Channel
#define HEADER_java_nio_channels_Channel

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/io/Closeable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_channels_Channel {
	java_lang_Object parent;
} java_nio_channels_Channel;

extern Class class_java_nio_channels_Channel;


#define INDEX_java_nio_channels_Channel_isOpen_R_boolean 0
typedef jbool (*func_java_nio_channels_Channel_isOpen_R_boolean)(jcontext ctx, jobject self);
#define INDEX_java_nio_channels_Channel_close 1
typedef void (*func_java_nio_channels_Channel_close)(jcontext ctx, jobject self);

void mark_java_nio_channels_Channel(jobject object, jint mark, jint depth);
void clinit_java_nio_channels_Channel(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
