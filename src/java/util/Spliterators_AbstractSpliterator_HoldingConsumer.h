#ifndef HEADER_java_util_Spliterators$AbstractSpliterator$HoldingConsumer
#define HEADER_java_util_Spliterators$AbstractSpliterator$HoldingConsumer

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/function/Consumer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Spliterators$AbstractSpliterator$HoldingConsumer {
	java_lang_Object parent;
	jref F_value;
} java_util_Spliterators$AbstractSpliterator$HoldingConsumer;

extern Class class_java_util_Spliterators$AbstractSpliterator$HoldingConsumer;


#define VTABLE_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_hashCode_R_int 0
typedef jint (*func_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_finalize 5
typedef void (*func_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_notify 6
typedef void (*func_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_notifyAll 7
typedef void (*func_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_wait 8
typedef void (*func_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_wait_long 9
typedef void (*func_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_wait_long_int 10
typedef void (*func_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_accept_java_lang_Object 11
typedef void (*func_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_accept_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_andThen_java_util_function_Consumer_R_java_util_function_Consumer 12
typedef jobject (*func_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_andThen_java_util_function_Consumer_R_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_lambda$andThen$0_java_util_function_Consumer_java_lang_Object 13
typedef void (*func_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_lambda$andThen$0_java_util_function_Consumer_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_java_util_Spliterators$AbstractSpliterator$HoldingConsumer(jobject object, jint mark, jint depth);
void clinit_java_util_Spliterators$AbstractSpliterator$HoldingConsumer(jcontext ctx);
void init_java_util_Spliterators$AbstractSpliterator$HoldingConsumer(jcontext ctx, jobject self);
void M_java_util_Spliterators$AbstractSpliterator$HoldingConsumer_accept_java_lang_Object(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
