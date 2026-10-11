#ifndef HEADER_java_util_concurrent_LinkedBlockingQueue$Node
#define HEADER_java_util_concurrent_LinkedBlockingQueue$Node

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_LinkedBlockingQueue$Node {
	java_lang_Object parent;
	jref F_item;
	jref F_next;
} java_util_concurrent_LinkedBlockingQueue$Node;

extern Class class_java_util_concurrent_LinkedBlockingQueue$Node;


#define VTABLE_java_util_concurrent_LinkedBlockingQueue$Node_hashCode_R_int 0
typedef jint (*func_java_util_concurrent_LinkedBlockingQueue$Node_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_LinkedBlockingQueue$Node_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_concurrent_LinkedBlockingQueue$Node_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_LinkedBlockingQueue$Node_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_concurrent_LinkedBlockingQueue$Node_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_LinkedBlockingQueue$Node_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_concurrent_LinkedBlockingQueue$Node_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_LinkedBlockingQueue$Node_toString_R_java_lang_String 4
typedef jobject (*func_java_util_concurrent_LinkedBlockingQueue$Node_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_LinkedBlockingQueue$Node_finalize 5
typedef void (*func_java_util_concurrent_LinkedBlockingQueue$Node_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_LinkedBlockingQueue$Node_notify 6
typedef void (*func_java_util_concurrent_LinkedBlockingQueue$Node_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_LinkedBlockingQueue$Node_notifyAll 7
typedef void (*func_java_util_concurrent_LinkedBlockingQueue$Node_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_LinkedBlockingQueue$Node_wait 8
typedef void (*func_java_util_concurrent_LinkedBlockingQueue$Node_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_LinkedBlockingQueue$Node_wait_long 9
typedef void (*func_java_util_concurrent_LinkedBlockingQueue$Node_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_LinkedBlockingQueue$Node_wait_long_int 10
typedef void (*func_java_util_concurrent_LinkedBlockingQueue$Node_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_java_util_concurrent_LinkedBlockingQueue$Node(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_LinkedBlockingQueue$Node(jcontext ctx);
void init_java_util_concurrent_LinkedBlockingQueue$Node_java_lang_Object(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
