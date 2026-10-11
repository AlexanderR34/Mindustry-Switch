#ifndef HEADER_java_util_concurrent_LinkedBlockingQueue$Itr
#define HEADER_java_util_concurrent_LinkedBlockingQueue$Itr

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_LinkedBlockingQueue$Itr {
	java_lang_Object parent;
	jref F_current;
	jref F_lastRet;
	jref F_currentElement;
	jref F_this$0;
} java_util_concurrent_LinkedBlockingQueue$Itr;

extern Class class_java_util_concurrent_LinkedBlockingQueue$Itr;


#define VTABLE_java_util_concurrent_LinkedBlockingQueue$Itr_hashCode_R_int 0
typedef jint (*func_java_util_concurrent_LinkedBlockingQueue$Itr_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_LinkedBlockingQueue$Itr_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_concurrent_LinkedBlockingQueue$Itr_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_LinkedBlockingQueue$Itr_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_concurrent_LinkedBlockingQueue$Itr_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_LinkedBlockingQueue$Itr_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_concurrent_LinkedBlockingQueue$Itr_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_LinkedBlockingQueue$Itr_toString_R_java_lang_String 4
typedef jobject (*func_java_util_concurrent_LinkedBlockingQueue$Itr_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_LinkedBlockingQueue$Itr_finalize 5
typedef void (*func_java_util_concurrent_LinkedBlockingQueue$Itr_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_LinkedBlockingQueue$Itr_notify 6
typedef void (*func_java_util_concurrent_LinkedBlockingQueue$Itr_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_LinkedBlockingQueue$Itr_notifyAll 7
typedef void (*func_java_util_concurrent_LinkedBlockingQueue$Itr_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_LinkedBlockingQueue$Itr_wait 8
typedef void (*func_java_util_concurrent_LinkedBlockingQueue$Itr_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_LinkedBlockingQueue$Itr_wait_long 9
typedef void (*func_java_util_concurrent_LinkedBlockingQueue$Itr_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_LinkedBlockingQueue$Itr_wait_long_int 10
typedef void (*func_java_util_concurrent_LinkedBlockingQueue$Itr_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_concurrent_LinkedBlockingQueue$Itr_hasNext_R_boolean 11
typedef jbool (*func_java_util_concurrent_LinkedBlockingQueue$Itr_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_LinkedBlockingQueue$Itr_next_R_java_lang_Object 12
typedef jobject (*func_java_util_concurrent_LinkedBlockingQueue$Itr_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_LinkedBlockingQueue$Itr_remove 13
typedef void (*func_java_util_concurrent_LinkedBlockingQueue$Itr_remove)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_LinkedBlockingQueue$Itr_forEachRemaining_java_util_function_Consumer 14
typedef void (*func_java_util_concurrent_LinkedBlockingQueue$Itr_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_LinkedBlockingQueue$Itr_nextNode_java_util_concurrent_LinkedBlockingQueue$Node_R_java_util_concurrent_LinkedBlockingQueue$Node 15
typedef jobject (*func_java_util_concurrent_LinkedBlockingQueue$Itr_nextNode_java_util_concurrent_LinkedBlockingQueue$Node_R_java_util_concurrent_LinkedBlockingQueue$Node)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_concurrent_LinkedBlockingQueue$Itr(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_LinkedBlockingQueue$Itr(jcontext ctx);
void init_java_util_concurrent_LinkedBlockingQueue$Itr_java_util_concurrent_LinkedBlockingQueue(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_concurrent_LinkedBlockingQueue$Itr_hasNext_R_boolean(jcontext ctx, jobject self);
jobject M_java_util_concurrent_LinkedBlockingQueue$Itr_nextNode_java_util_concurrent_LinkedBlockingQueue$Node_R_java_util_concurrent_LinkedBlockingQueue$Node(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_concurrent_LinkedBlockingQueue$Itr_next_R_java_lang_Object(jcontext ctx, jobject self);
void M_java_util_concurrent_LinkedBlockingQueue$Itr_remove(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
