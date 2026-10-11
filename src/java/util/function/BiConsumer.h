#ifndef HEADER_java_util_function_BiConsumer
#define HEADER_java_util_function_BiConsumer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_function_BiConsumer {
	java_lang_Object parent;
} java_util_function_BiConsumer;

extern Class class_java_util_function_BiConsumer;


#define INDEX_java_util_function_BiConsumer_accept_java_lang_Object_java_lang_Object 0
typedef void (*func_java_util_function_BiConsumer_accept_java_lang_Object_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_java_util_function_BiConsumer_andThen_java_util_function_BiConsumer_R_java_util_function_BiConsumer 1
typedef jobject (*func_java_util_function_BiConsumer_andThen_java_util_function_BiConsumer_R_java_util_function_BiConsumer)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_function_BiConsumer_lambda$andThen$0_java_util_function_BiConsumer_java_lang_Object_java_lang_Object 2
typedef void (*func_java_util_function_BiConsumer_lambda$andThen$0_java_util_function_BiConsumer_java_lang_Object_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

void mark_java_util_function_BiConsumer(jobject object, jint mark, jint depth);
void clinit_java_util_function_BiConsumer(jcontext ctx);
jobject M_java_util_function_BiConsumer_andThen_java_util_function_BiConsumer_R_java_util_function_BiConsumer(jcontext ctx, jobject self, jobject param0);
void M_java_util_function_BiConsumer_lambda$andThen$0_java_util_function_BiConsumer_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
