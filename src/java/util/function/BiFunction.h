#ifndef HEADER_java_util_function_BiFunction
#define HEADER_java_util_function_BiFunction

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_function_BiFunction {
	java_lang_Object parent;
} java_util_function_BiFunction;

extern Class class_java_util_function_BiFunction;


#define INDEX_java_util_function_BiFunction_apply_java_lang_Object_java_lang_Object_R_java_lang_Object 0
typedef jobject (*func_java_util_function_BiFunction_apply_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_java_util_function_BiFunction_andThen_java_util_function_Function_R_java_util_function_BiFunction 1
typedef jobject (*func_java_util_function_BiFunction_andThen_java_util_function_Function_R_java_util_function_BiFunction)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_function_BiFunction_lambda$andThen$0_java_util_function_Function_java_lang_Object_java_lang_Object_R_java_lang_Object 2
typedef jobject (*func_java_util_function_BiFunction_lambda$andThen$0_java_util_function_Function_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

void mark_java_util_function_BiFunction(jobject object, jint mark, jint depth);
void clinit_java_util_function_BiFunction(jcontext ctx);
jobject M_java_util_function_BiFunction_andThen_java_util_function_Function_R_java_util_function_BiFunction(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_function_BiFunction_lambda$andThen$0_java_util_function_Function_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
