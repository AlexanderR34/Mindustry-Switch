#ifndef HEADER_java_util_function_IntConsumer
#define HEADER_java_util_function_IntConsumer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_function_IntConsumer {
	java_lang_Object parent;
} java_util_function_IntConsumer;

extern Class class_java_util_function_IntConsumer;


#define INDEX_java_util_function_IntConsumer_accept_int 0
typedef void (*func_java_util_function_IntConsumer_accept_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_java_util_function_IntConsumer_andThen_java_util_function_IntConsumer_R_java_util_function_IntConsumer 1
typedef jobject (*func_java_util_function_IntConsumer_andThen_java_util_function_IntConsumer_R_java_util_function_IntConsumer)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_function_IntConsumer_lambda$andThen$0_java_util_function_IntConsumer_int 2
typedef void (*func_java_util_function_IntConsumer_lambda$andThen$0_java_util_function_IntConsumer_int)(jcontext ctx, jobject self, jobject param0, jint param1);

void mark_java_util_function_IntConsumer(jobject object, jint mark, jint depth);
void clinit_java_util_function_IntConsumer(jcontext ctx);
jobject M_java_util_function_IntConsumer_andThen_java_util_function_IntConsumer_R_java_util_function_IntConsumer(jcontext ctx, jobject self, jobject param0);
void M_java_util_function_IntConsumer_lambda$andThen$0_java_util_function_IntConsumer_int(jcontext ctx, jobject self, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
