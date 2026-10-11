#ifndef HEADER_java_util_LinkedList$ReverseLinkIterator
#define HEADER_java_util_LinkedList$ReverseLinkIterator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_LinkedList$ReverseLinkIterator {
	java_lang_Object parent;
	jint F_expectedModCount;
	jref F_list;
	jref F_link;
	jbool F_canRemove;
	jref F_this$0;
} java_util_LinkedList$ReverseLinkIterator;

extern Class class_java_util_LinkedList$ReverseLinkIterator;


#define VTABLE_java_util_LinkedList$ReverseLinkIterator_hashCode_R_int 0
typedef jint (*func_java_util_LinkedList$ReverseLinkIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList$ReverseLinkIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_LinkedList$ReverseLinkIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedList$ReverseLinkIterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_LinkedList$ReverseLinkIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList$ReverseLinkIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_LinkedList$ReverseLinkIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList$ReverseLinkIterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_LinkedList$ReverseLinkIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList$ReverseLinkIterator_finalize 5
typedef void (*func_java_util_LinkedList$ReverseLinkIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList$ReverseLinkIterator_notify 6
typedef void (*func_java_util_LinkedList$ReverseLinkIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList$ReverseLinkIterator_notifyAll 7
typedef void (*func_java_util_LinkedList$ReverseLinkIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList$ReverseLinkIterator_wait 8
typedef void (*func_java_util_LinkedList$ReverseLinkIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList$ReverseLinkIterator_wait_long 9
typedef void (*func_java_util_LinkedList$ReverseLinkIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_LinkedList$ReverseLinkIterator_wait_long_int 10
typedef void (*func_java_util_LinkedList$ReverseLinkIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_LinkedList$ReverseLinkIterator_hasNext_R_boolean 11
typedef jbool (*func_java_util_LinkedList$ReverseLinkIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList$ReverseLinkIterator_next_R_java_lang_Object 12
typedef jobject (*func_java_util_LinkedList$ReverseLinkIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList$ReverseLinkIterator_remove 13
typedef void (*func_java_util_LinkedList$ReverseLinkIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedList$ReverseLinkIterator_forEachRemaining_java_util_function_Consumer 14
typedef void (*func_java_util_LinkedList$ReverseLinkIterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_LinkedList$ReverseLinkIterator(jobject object, jint mark, jint depth);
void clinit_java_util_LinkedList$ReverseLinkIterator(jcontext ctx);
void init_java_util_LinkedList$ReverseLinkIterator_java_util_LinkedList_java_util_LinkedList(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_java_util_LinkedList$ReverseLinkIterator_hasNext_R_boolean(jcontext ctx, jobject self);
jobject M_java_util_LinkedList$ReverseLinkIterator_next_R_java_lang_Object(jcontext ctx, jobject self);
void M_java_util_LinkedList$ReverseLinkIterator_remove(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
