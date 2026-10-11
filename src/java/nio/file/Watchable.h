#ifndef HEADER_java_nio_file_Watchable
#define HEADER_java_nio_file_Watchable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_file_Watchable {
	java_lang_Object parent;
} java_nio_file_Watchable;

extern Class class_java_nio_file_Watchable;


#define INDEX_java_nio_file_Watchable_register_java_nio_file_WatchService_Array1_java_nio_file_WatchEvent$Kind_Array1_java_nio_file_WatchEvent$Modifier_R_java_nio_file_WatchKey 0
typedef jobject (*func_java_nio_file_Watchable_register_java_nio_file_WatchService_Array1_java_nio_file_WatchEvent$Kind_Array1_java_nio_file_WatchEvent$Modifier_R_java_nio_file_WatchKey)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define INDEX_java_nio_file_Watchable_register_java_nio_file_WatchService_Array1_java_nio_file_WatchEvent$Kind_R_java_nio_file_WatchKey 1
typedef jobject (*func_java_nio_file_Watchable_register_java_nio_file_WatchService_Array1_java_nio_file_WatchEvent$Kind_R_java_nio_file_WatchKey)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_java_nio_file_Watchable(jobject object, jint mark, jint depth);
void clinit_java_nio_file_Watchable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
