#ifndef HEADER_rhino_EqualObjectGraphs$Func
#define HEADER_rhino_EqualObjectGraphs$Func

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_EqualObjectGraphs$Func {
	java_lang_Object parent;
} rhino_EqualObjectGraphs$Func;

extern Class class_rhino_EqualObjectGraphs$Func;


#define INDEX_rhino_EqualObjectGraphs$Func_apply_java_lang_Object_R_java_lang_Object 0
typedef jobject (*func_rhino_EqualObjectGraphs$Func_apply_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_EqualObjectGraphs$Func(jobject object, jint mark, jint depth);
void clinit_rhino_EqualObjectGraphs$Func(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
