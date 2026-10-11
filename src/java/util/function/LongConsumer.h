#ifndef HEADER_java_util_function_LongConsumer
#define HEADER_java_util_function_LongConsumer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_function_LongConsumer {
	java_lang_Object parent;
} java_util_function_LongConsumer;

extern Class class_java_util_function_LongConsumer;


#define INDEX_java_util_function_LongConsumer_accept_long 0
typedef void (*func_java_util_function_LongConsumer_accept_long)(jcontext ctx, jobject self, jlong param0);
#define INDEX_java_util_function_LongConsumer_andThen_java_util_function_LongConsumer_R_java_util_function_LongConsumer 1
typedef jobject (*func_java_util_function_LongConsumer_andThen_java_util_function_LongConsumer_R_java_util_function_LongConsumer)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_function_LongConsumer_lambda$andThen$0_java_util_function_LongConsumer_long 2
typedef void (*func_java_util_function_LongConsumer_lambda$andThen$0_java_util_function_LongConsumer_long)(jcontext ctx, jobject self, jobject param0, jlong param1);

void mark_java_util_function_LongConsumer(jobject object, jint mark, jint depth);
void clinit_java_util_function_LongConsumer(jcontext ctx);
jobject M_java_util_function_LongConsumer_andThen_java_util_function_LongConsumer_R_java_util_function_LongConsumer(jcontext ctx, jobject self, jobject param0);
void M_java_util_function_LongConsumer_lambda$andThen$0_java_util_function_LongConsumer_long(jcontext ctx, jobject self, jobject param0, jlong param1);

#ifdef __cplusplus
}
#endif

#endif
