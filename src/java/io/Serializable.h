#ifndef HEADER_java_io_Serializable
#define HEADER_java_io_Serializable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_Serializable {
	java_lang_Object parent;
} java_io_Serializable;

extern Class class_java_io_Serializable;



void mark_java_io_Serializable(jobject object, jint mark, jint depth);
void clinit_java_io_Serializable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
