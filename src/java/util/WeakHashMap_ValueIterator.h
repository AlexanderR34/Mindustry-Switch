#ifndef HEADER_java_util_WeakHashMap$ValueIterator
#define HEADER_java_util_WeakHashMap$ValueIterator

#include "Clearwing.h"
#include "java/util/WeakHashMap_HashIterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_WeakHashMap$ValueIterator {
	java_util_WeakHashMap$HashIterator parent;
	jref F_this$0;
} java_util_WeakHashMap$ValueIterator;

extern Class class_java_util_WeakHashMap$ValueIterator;


#define VTABLE_java_util_WeakHashMap$ValueIterator_hashCode_R_int 0
typedef jint (*func_java_util_WeakHashMap$ValueIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$ValueIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_WeakHashMap$ValueIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap$ValueIterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_WeakHashMap$ValueIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$ValueIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_WeakHashMap$ValueIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$ValueIterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_WeakHashMap$ValueIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$ValueIterator_finalize 5
typedef void (*func_java_util_WeakHashMap$ValueIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$ValueIterator_notify 6
typedef void (*func_java_util_WeakHashMap$ValueIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$ValueIterator_notifyAll 7
typedef void (*func_java_util_WeakHashMap$ValueIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$ValueIterator_wait 8
typedef void (*func_java_util_WeakHashMap$ValueIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$ValueIterator_wait_long 9
typedef void (*func_java_util_WeakHashMap$ValueIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_WeakHashMap$ValueIterator_wait_long_int 10
typedef void (*func_java_util_WeakHashMap$ValueIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_WeakHashMap$ValueIterator_hasNext_R_boolean 11
typedef jbool (*func_java_util_WeakHashMap$ValueIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$ValueIterator_next_R_java_lang_Object 12
typedef jobject (*func_java_util_WeakHashMap$ValueIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$ValueIterator_remove 13
typedef void (*func_java_util_WeakHashMap$ValueIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$ValueIterator_forEachRemaining_java_util_function_Consumer 14
typedef void (*func_java_util_WeakHashMap$ValueIterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap$ValueIterator_nextEntry_R_java_util_WeakHashMap$Entry 15
typedef jobject (*func_java_util_WeakHashMap$ValueIterator_nextEntry_R_java_util_WeakHashMap$Entry)(jcontext ctx, jobject self);

void mark_java_util_WeakHashMap$ValueIterator(jobject object, jint mark, jint depth);
void clinit_java_util_WeakHashMap$ValueIterator(jcontext ctx);
void init_java_util_WeakHashMap$ValueIterator_java_util_WeakHashMap(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_WeakHashMap$ValueIterator_next_R_java_lang_Object(jcontext ctx, jobject self);
void init_java_util_WeakHashMap$ValueIterator_java_util_WeakHashMap_java_util_WeakHashMap$1(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
