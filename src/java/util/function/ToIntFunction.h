#ifndef HEADER_java_util_function_ToIntFunction
#define HEADER_java_util_function_ToIntFunction

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_function_ToIntFunction {
	java_lang_Object parent;
} java_util_function_ToIntFunction;

extern Class class_java_util_function_ToIntFunction;


#define INDEX_java_util_function_ToIntFunction_applyAsInt_java_lang_Object_R_int 0
typedef jint (*func_java_util_function_ToIntFunction_applyAsInt_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_function_ToIntFunction(jobject object, jint mark, jint depth);
void clinit_java_util_function_ToIntFunction(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
