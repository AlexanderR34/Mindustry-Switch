#ifndef HEADER_java_util_function_Consumer
#define HEADER_java_util_function_Consumer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_function_Consumer {
	java_lang_Object parent;
} java_util_function_Consumer;

extern Class class_java_util_function_Consumer;


#define INDEX_java_util_function_Consumer_accept_java_lang_Object 0
typedef void (*func_java_util_function_Consumer_accept_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_function_Consumer_andThen_java_util_function_Consumer_R_java_util_function_Consumer 1
typedef jobject (*func_java_util_function_Consumer_andThen_java_util_function_Consumer_R_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_function_Consumer_lambda$andThen$0_java_util_function_Consumer_java_lang_Object 2
typedef void (*func_java_util_function_Consumer_lambda$andThen$0_java_util_function_Consumer_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_java_util_function_Consumer(jobject object, jint mark, jint depth);
void clinit_java_util_function_Consumer(jcontext ctx);
jobject M_java_util_function_Consumer_andThen_java_util_function_Consumer_R_java_util_function_Consumer(jcontext ctx, jobject self, jobject param0);
void M_java_util_function_Consumer_lambda$andThen$0_java_util_function_Consumer_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
