#ifndef HEADER_java_nio_file_WatchKey
#define HEADER_java_nio_file_WatchKey

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_file_WatchKey {
	java_lang_Object parent;
} java_nio_file_WatchKey;

extern Class class_java_nio_file_WatchKey;


#define INDEX_java_nio_file_WatchKey_isValid_R_boolean 0
typedef jbool (*func_java_nio_file_WatchKey_isValid_R_boolean)(jcontext ctx, jobject self);
#define INDEX_java_nio_file_WatchKey_pollEvents_R_java_util_List 1
typedef jobject (*func_java_nio_file_WatchKey_pollEvents_R_java_util_List)(jcontext ctx, jobject self);
#define INDEX_java_nio_file_WatchKey_reset_R_boolean 2
typedef jbool (*func_java_nio_file_WatchKey_reset_R_boolean)(jcontext ctx, jobject self);
#define INDEX_java_nio_file_WatchKey_cancel 3
typedef void (*func_java_nio_file_WatchKey_cancel)(jcontext ctx, jobject self);
#define INDEX_java_nio_file_WatchKey_watchable_R_java_nio_file_Watchable 4
typedef jobject (*func_java_nio_file_WatchKey_watchable_R_java_nio_file_Watchable)(jcontext ctx, jobject self);

void mark_java_nio_file_WatchKey(jobject object, jint mark, jint depth);
void clinit_java_nio_file_WatchKey(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
