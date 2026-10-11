#ifndef HEADER_java_util_RandomAccess
#define HEADER_java_util_RandomAccess

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_RandomAccess {
	java_lang_Object parent;
} java_util_RandomAccess;

extern Class class_java_util_RandomAccess;



void mark_java_util_RandomAccess(jobject object, jint mark, jint depth);
void clinit_java_util_RandomAccess(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
