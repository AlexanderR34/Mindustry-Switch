#ifndef HEADER_java_nio_file_WatchService
#define HEADER_java_nio_file_WatchService

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/io/Closeable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_file_WatchService {
	java_lang_Object parent;
} java_nio_file_WatchService;

extern Class class_java_nio_file_WatchService;


#define INDEX_java_nio_file_WatchService_close 0
typedef void (*func_java_nio_file_WatchService_close)(jcontext ctx, jobject self);
#define INDEX_java_nio_file_WatchService_poll_R_java_nio_file_WatchKey 1
typedef jobject (*func_java_nio_file_WatchService_poll_R_java_nio_file_WatchKey)(jcontext ctx, jobject self);
#define INDEX_java_nio_file_WatchService_poll_long_java_util_concurrent_TimeUnit_R_java_nio_file_WatchKey 2
typedef jobject (*func_java_nio_file_WatchService_poll_long_java_util_concurrent_TimeUnit_R_java_nio_file_WatchKey)(jcontext ctx, jobject self, jlong param0, jobject param1);
#define INDEX_java_nio_file_WatchService_take_R_java_nio_file_WatchKey 3
typedef jobject (*func_java_nio_file_WatchService_take_R_java_nio_file_WatchKey)(jcontext ctx, jobject self);

void mark_java_nio_file_WatchService(jobject object, jint mark, jint depth);
void clinit_java_nio_file_WatchService(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
