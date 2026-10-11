#ifndef HEADER_java_util_function_ToDoubleFunction
#define HEADER_java_util_function_ToDoubleFunction

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_function_ToDoubleFunction {
	java_lang_Object parent;
} java_util_function_ToDoubleFunction;

extern Class class_java_util_function_ToDoubleFunction;


#define INDEX_java_util_function_ToDoubleFunction_applyAsDouble_java_lang_Object_R_double 0
typedef jdouble (*func_java_util_function_ToDoubleFunction_applyAsDouble_java_lang_Object_R_double)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_function_ToDoubleFunction(jobject object, jint mark, jint depth);
void clinit_java_util_function_ToDoubleFunction(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
