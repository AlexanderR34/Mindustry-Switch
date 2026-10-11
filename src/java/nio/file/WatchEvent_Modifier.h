#ifndef HEADER_java_nio_file_WatchEvent$Modifier
#define HEADER_java_nio_file_WatchEvent$Modifier

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_file_WatchEvent$Modifier {
	java_lang_Object parent;
} java_nio_file_WatchEvent$Modifier;

extern Class class_java_nio_file_WatchEvent$Modifier;


#define INDEX_java_nio_file_WatchEvent$Modifier_name_R_java_lang_String 0
typedef jobject (*func_java_nio_file_WatchEvent$Modifier_name_R_java_lang_String)(jcontext ctx, jobject self);

void mark_java_nio_file_WatchEvent$Modifier(jobject object, jint mark, jint depth);
void clinit_java_nio_file_WatchEvent$Modifier(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
