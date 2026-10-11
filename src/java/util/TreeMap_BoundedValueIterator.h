#ifndef HEADER_java_util_TreeMap$BoundedValueIterator
#define HEADER_java_util_TreeMap$BoundedValueIterator

#include "Clearwing.h"
#include "java/util/TreeMap_BoundedMapIterator.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_TreeMap$BoundedValueIterator {
	java_util_TreeMap$BoundedMapIterator parent;
} java_util_TreeMap$BoundedValueIterator;

extern Class class_java_util_TreeMap$BoundedValueIterator;


#define VTABLE_java_util_TreeMap$BoundedValueIterator_hashCode_R_int 0
typedef jint (*func_java_util_TreeMap$BoundedValueIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedValueIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_TreeMap$BoundedValueIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap$BoundedValueIterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_TreeMap$BoundedValueIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedValueIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_TreeMap$BoundedValueIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedValueIterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_TreeMap$BoundedValueIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedValueIterator_finalize 5
typedef void (*func_java_util_TreeMap$BoundedValueIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedValueIterator_notify 6
typedef void (*func_java_util_TreeMap$BoundedValueIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedValueIterator_notifyAll 7
typedef void (*func_java_util_TreeMap$BoundedValueIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedValueIterator_wait 8
typedef void (*func_java_util_TreeMap$BoundedValueIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedValueIterator_wait_long 9
typedef void (*func_java_util_TreeMap$BoundedValueIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_TreeMap$BoundedValueIterator_wait_long_int 10
typedef void (*func_java_util_TreeMap$BoundedValueIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_TreeMap$BoundedValueIterator_hasNext_R_boolean 11
typedef jbool (*func_java_util_TreeMap$BoundedValueIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedValueIterator_makeNext 12
typedef void (*func_java_util_TreeMap$BoundedValueIterator_makeNext)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedValueIterator_remove 13
typedef void (*func_java_util_TreeMap$BoundedValueIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedValueIterator_makeBoundedNext 14
typedef void (*func_java_util_TreeMap$BoundedValueIterator_makeBoundedNext)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedValueIterator_next_R_java_lang_Object 15
typedef jobject (*func_java_util_TreeMap$BoundedValueIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedValueIterator_forEachRemaining_java_util_function_Consumer 16
typedef void (*func_java_util_TreeMap$BoundedValueIterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_TreeMap$BoundedValueIterator(jobject object, jint mark, jint depth);
void clinit_java_util_TreeMap$BoundedValueIterator(jcontext ctx);
void init_java_util_TreeMap$BoundedValueIterator_java_util_TreeMap$Node_int_java_util_TreeMap_java_util_TreeMap$Node_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jint param4);
jobject M_java_util_TreeMap$BoundedValueIterator_next_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
