#ifndef HEADER_java_nio_channels_CompletionHandler
#define HEADER_java_nio_channels_CompletionHandler

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_channels_CompletionHandler {
	java_lang_Object parent;
} java_nio_channels_CompletionHandler;

extern Class class_java_nio_channels_CompletionHandler;


#define INDEX_java_nio_channels_CompletionHandler_completed_java_lang_Object_java_lang_Object 0
typedef void (*func_java_nio_channels_CompletionHandler_completed_java_lang_Object_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_java_nio_channels_CompletionHandler_failed_java_lang_Throwable_java_lang_Object 1
typedef void (*func_java_nio_channels_CompletionHandler_failed_java_lang_Throwable_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_java_nio_channels_CompletionHandler(jobject object, jint mark, jint depth);
void clinit_java_nio_channels_CompletionHandler(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
