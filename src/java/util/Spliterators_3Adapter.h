#ifndef HEADER_java_util_Spliterators$3Adapter
#define HEADER_java_util_Spliterators$3Adapter

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/PrimitiveIterator_OfLong.h"
#include "java/util/function/LongConsumer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Spliterators$3Adapter {
	java_lang_Object parent;
	jbool F_valueReady;
	jlong F_nextElement;
	jref F_val$spliterator;
} java_util_Spliterators$3Adapter;

extern Class class_java_util_Spliterators$3Adapter;


#define VTABLE_java_util_Spliterators$3Adapter_hashCode_R_int 0
typedef jint (*func_java_util_Spliterators$3Adapter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$3Adapter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Spliterators$3Adapter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$3Adapter_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Spliterators$3Adapter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$3Adapter_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Spliterators$3Adapter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$3Adapter_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Spliterators$3Adapter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$3Adapter_finalize 5
typedef void (*func_java_util_Spliterators$3Adapter_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$3Adapter_notify 6
typedef void (*func_java_util_Spliterators$3Adapter_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$3Adapter_notifyAll 7
typedef void (*func_java_util_Spliterators$3Adapter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$3Adapter_wait 8
typedef void (*func_java_util_Spliterators$3Adapter_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$3Adapter_wait_long 9
typedef void (*func_java_util_Spliterators$3Adapter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Spliterators$3Adapter_wait_long_int 10
typedef void (*func_java_util_Spliterators$3Adapter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Spliterators$3Adapter_hasNext_R_boolean 11
typedef jbool (*func_java_util_Spliterators$3Adapter_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$3Adapter_next_R_java_lang_Object 12
typedef jobject (*func_java_util_Spliterators$3Adapter_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$3Adapter_remove 13
typedef void (*func_java_util_Spliterators$3Adapter_remove)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$3Adapter_forEachRemaining_java_util_function_Consumer 14
typedef void (*func_java_util_Spliterators$3Adapter_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$3Adapter_forEachRemaining_java_lang_Object 15
typedef void (*func_java_util_Spliterators$3Adapter_forEachRemaining_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$3Adapter_nextLong_R_long 16
typedef jlong (*func_java_util_Spliterators$3Adapter_nextLong_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$3Adapter_forEachRemaining_java_util_function_LongConsumer 17
typedef void (*func_java_util_Spliterators$3Adapter_forEachRemaining_java_util_function_LongConsumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$3Adapter_next_R_java_lang_Long 18
typedef jobject (*func_java_util_Spliterators$3Adapter_next_R_java_lang_Long)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$3Adapter_accept_long 19
typedef void (*func_java_util_Spliterators$3Adapter_accept_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Spliterators$3Adapter_andThen_java_util_function_LongConsumer_R_java_util_function_LongConsumer 20
typedef jobject (*func_java_util_Spliterators$3Adapter_andThen_java_util_function_LongConsumer_R_java_util_function_LongConsumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$3Adapter_lambda$andThen$0_java_util_function_LongConsumer_long 21
typedef void (*func_java_util_Spliterators$3Adapter_lambda$andThen$0_java_util_function_LongConsumer_long)(jcontext ctx, jobject self, jobject param0, jlong param1);

void mark_java_util_Spliterators$3Adapter(jobject object, jint mark, jint depth);
void clinit_java_util_Spliterators$3Adapter(jcontext ctx);
void init_java_util_Spliterators$3Adapter_java_util_Spliterator$OfLong(jcontext ctx, jobject self, jobject param0);
void M_java_util_Spliterators$3Adapter_accept_long(jcontext ctx, jobject self, jlong param0);
jbool M_java_util_Spliterators$3Adapter_hasNext_R_boolean(jcontext ctx, jobject self);
jlong M_java_util_Spliterators$3Adapter_nextLong_R_long(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
