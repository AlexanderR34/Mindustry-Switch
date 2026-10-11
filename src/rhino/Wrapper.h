#ifndef HEADER_rhino_Wrapper
#define HEADER_rhino_Wrapper

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Wrapper {
	java_lang_Object parent;
} rhino_Wrapper;

extern Class class_rhino_Wrapper;


#define INDEX_rhino_Wrapper_unwrap_R_java_lang_Object 0
typedef jobject (*func_rhino_Wrapper_unwrap_R_java_lang_Object)(jcontext ctx, jobject self);

void mark_rhino_Wrapper(jobject object, jint mark, jint depth);
void clinit_rhino_Wrapper(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
