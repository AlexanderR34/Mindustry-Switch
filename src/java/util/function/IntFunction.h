#ifndef HEADER_java_util_function_IntFunction
#define HEADER_java_util_function_IntFunction

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_function_IntFunction {
	java_lang_Object parent;
} java_util_function_IntFunction;

extern Class class_java_util_function_IntFunction;


#define INDEX_java_util_function_IntFunction_apply_int_R_java_lang_Object 0
typedef jobject (*func_java_util_function_IntFunction_apply_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);

void mark_java_util_function_IntFunction(jobject object, jint mark, jint depth);
void clinit_java_util_function_IntFunction(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
