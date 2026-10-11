#ifndef HEADER_java_nio_file_OpenOption
#define HEADER_java_nio_file_OpenOption

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_file_OpenOption {
	java_lang_Object parent;
} java_nio_file_OpenOption;

extern Class class_java_nio_file_OpenOption;



void mark_java_nio_file_OpenOption(jobject object, jint mark, jint depth);
void clinit_java_nio_file_OpenOption(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
