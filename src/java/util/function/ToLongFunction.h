#ifndef HEADER_java_util_function_ToLongFunction
#define HEADER_java_util_function_ToLongFunction

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_function_ToLongFunction {
	java_lang_Object parent;
} java_util_function_ToLongFunction;

extern Class class_java_util_function_ToLongFunction;


#define INDEX_java_util_function_ToLongFunction_applyAsLong_java_lang_Object_R_long 0
typedef jlong (*func_java_util_function_ToLongFunction_applyAsLong_java_lang_Object_R_long)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_function_ToLongFunction(jobject object, jint mark, jint depth);
void clinit_java_util_function_ToLongFunction(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
