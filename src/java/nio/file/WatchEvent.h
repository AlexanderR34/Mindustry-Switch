#ifndef HEADER_java_nio_file_WatchEvent
#define HEADER_java_nio_file_WatchEvent

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_file_WatchEvent {
	java_lang_Object parent;
} java_nio_file_WatchEvent;

extern Class class_java_nio_file_WatchEvent;


#define INDEX_java_nio_file_WatchEvent_kind_R_java_nio_file_WatchEvent$Kind 0
typedef jobject (*func_java_nio_file_WatchEvent_kind_R_java_nio_file_WatchEvent$Kind)(jcontext ctx, jobject self);
#define INDEX_java_nio_file_WatchEvent_count_R_int 1
typedef jint (*func_java_nio_file_WatchEvent_count_R_int)(jcontext ctx, jobject self);
#define INDEX_java_nio_file_WatchEvent_context_R_java_lang_Object 2
typedef jobject (*func_java_nio_file_WatchEvent_context_R_java_lang_Object)(jcontext ctx, jobject self);

void mark_java_nio_file_WatchEvent(jobject object, jint mark, jint depth);
void clinit_java_nio_file_WatchEvent(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
