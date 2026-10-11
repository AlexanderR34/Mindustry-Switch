#ifndef HEADER_java_lang_Cloneable
#define HEADER_java_lang_Cloneable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_Cloneable {
	java_lang_Object parent;
} java_lang_Cloneable;

extern Class class_java_lang_Cloneable;



void mark_java_lang_Cloneable(jobject object, jint mark, jint depth);
void clinit_java_lang_Cloneable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
