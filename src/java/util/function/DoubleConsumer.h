#ifndef HEADER_java_util_function_DoubleConsumer
#define HEADER_java_util_function_DoubleConsumer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_function_DoubleConsumer {
	java_lang_Object parent;
} java_util_function_DoubleConsumer;

extern Class class_java_util_function_DoubleConsumer;


#define INDEX_java_util_function_DoubleConsumer_accept_double 0
typedef void (*func_java_util_function_DoubleConsumer_accept_double)(jcontext ctx, jobject self, jdouble param0);
#define INDEX_java_util_function_DoubleConsumer_andThen_java_util_function_DoubleConsumer_R_java_util_function_DoubleConsumer 1
typedef jobject (*func_java_util_function_DoubleConsumer_andThen_java_util_function_DoubleConsumer_R_java_util_function_DoubleConsumer)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_function_DoubleConsumer_lambda$andThen$0_java_util_function_DoubleConsumer_double 2
typedef void (*func_java_util_function_DoubleConsumer_lambda$andThen$0_java_util_function_DoubleConsumer_double)(jcontext ctx, jobject self, jobject param0, jdouble param1);

void mark_java_util_function_DoubleConsumer(jobject object, jint mark, jint depth);
void clinit_java_util_function_DoubleConsumer(jcontext ctx);
jobject M_java_util_function_DoubleConsumer_andThen_java_util_function_DoubleConsumer_R_java_util_function_DoubleConsumer(jcontext ctx, jobject self, jobject param0);
void M_java_util_function_DoubleConsumer_lambda$andThen$0_java_util_function_DoubleConsumer_double(jcontext ctx, jobject self, jobject param0, jdouble param1);

#ifdef __cplusplus
}
#endif

#endif
