#ifndef HEADER_rhino_Callable
#define HEADER_rhino_Callable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Callable {
	java_lang_Object parent;
} rhino_Callable;

extern Class class_rhino_Callable;


#define INDEX_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object 0
typedef jobject (*func_rhino_Callable_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);

void mark_rhino_Callable(jobject object, jint mark, jint depth);
void clinit_rhino_Callable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
