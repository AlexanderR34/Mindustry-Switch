#ifndef HEADER_java_util_function_UnaryOperator
#define HEADER_java_util_function_UnaryOperator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/function/Function.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_function_UnaryOperator {
	java_lang_Object parent;
} java_util_function_UnaryOperator;

extern Class class_java_util_function_UnaryOperator;



void mark_java_util_function_UnaryOperator(jobject object, jint mark, jint depth);
void clinit_java_util_function_UnaryOperator(jcontext ctx);
jobject SM_java_util_function_UnaryOperator_identity_R_java_util_function_UnaryOperator(jcontext ctx);
jobject SM_java_util_function_UnaryOperator_lambda$identity$0_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
