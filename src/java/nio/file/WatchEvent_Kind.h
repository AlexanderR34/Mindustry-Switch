#ifndef HEADER_java_nio_file_WatchEvent$Kind
#define HEADER_java_nio_file_WatchEvent$Kind

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_file_WatchEvent$Kind {
	java_lang_Object parent;
} java_nio_file_WatchEvent$Kind;

extern Class class_java_nio_file_WatchEvent$Kind;


#define INDEX_java_nio_file_WatchEvent$Kind_name_R_java_lang_String 0
typedef jobject (*func_java_nio_file_WatchEvent$Kind_name_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_java_nio_file_WatchEvent$Kind_type_R_java_lang_Class 1
typedef jobject (*func_java_nio_file_WatchEvent$Kind_type_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_java_nio_file_WatchEvent$Kind(jobject object, jint mark, jint depth);
void clinit_java_nio_file_WatchEvent$Kind(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
