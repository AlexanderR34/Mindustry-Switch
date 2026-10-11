#ifndef HEADER_java_lang_reflect_Type
#define HEADER_java_lang_reflect_Type

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_reflect_Type {
	java_lang_Object parent;
} java_lang_reflect_Type;

extern Class class_java_lang_reflect_Type;



void mark_java_lang_reflect_Type(jobject object, jint mark, jint depth);
void clinit_java_lang_reflect_Type(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
