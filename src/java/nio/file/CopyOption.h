#ifndef HEADER_java_nio_file_CopyOption
#define HEADER_java_nio_file_CopyOption

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_file_CopyOption {
	java_lang_Object parent;
} java_nio_file_CopyOption;

extern Class class_java_nio_file_CopyOption;



void mark_java_nio_file_CopyOption(jobject object, jint mark, jint depth);
void clinit_java_nio_file_CopyOption(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
