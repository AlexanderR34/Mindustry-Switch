#ifndef HEADER_java_util_TreeMap$BoundedKeyIterator
#define HEADER_java_util_TreeMap$BoundedKeyIterator

#include "Clearwing.h"
#include "java/util/TreeMap_BoundedMapIterator.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_TreeMap$BoundedKeyIterator {
	java_util_TreeMap$BoundedMapIterator parent;
} java_util_TreeMap$BoundedKeyIterator;

extern Class class_java_util_TreeMap$BoundedKeyIterator;


#define VTABLE_java_util_TreeMap$BoundedKeyIterator_hashCode_R_int 0
typedef jint (*func_java_util_TreeMap$BoundedKeyIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedKeyIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_TreeMap$BoundedKeyIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap$BoundedKeyIterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_TreeMap$BoundedKeyIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedKeyIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_TreeMap$BoundedKeyIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedKeyIterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_TreeMap$BoundedKeyIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedKeyIterator_finalize 5
typedef void (*func_java_util_TreeMap$BoundedKeyIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedKeyIterator_notify 6
typedef void (*func_java_util_TreeMap$BoundedKeyIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedKeyIterator_notifyAll 7
typedef void (*func_java_util_TreeMap$BoundedKeyIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedKeyIterator_wait 8
typedef void (*func_java_util_TreeMap$BoundedKeyIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedKeyIterator_wait_long 9
typedef void (*func_java_util_TreeMap$BoundedKeyIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_TreeMap$BoundedKeyIterator_wait_long_int 10
typedef void (*func_java_util_TreeMap$BoundedKeyIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_TreeMap$BoundedKeyIterator_hasNext_R_boolean 11
typedef jbool (*func_java_util_TreeMap$BoundedKeyIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedKeyIterator_makeNext 12
typedef void (*func_java_util_TreeMap$BoundedKeyIterator_makeNext)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedKeyIterator_remove 13
typedef void (*func_java_util_TreeMap$BoundedKeyIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedKeyIterator_makeBoundedNext 14
typedef void (*func_java_util_TreeMap$BoundedKeyIterator_makeBoundedNext)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedKeyIterator_next_R_java_lang_Object 15
typedef jobject (*func_java_util_TreeMap$BoundedKeyIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$BoundedKeyIterator_forEachRemaining_java_util_function_Consumer 16
typedef void (*func_java_util_TreeMap$BoundedKeyIterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_TreeMap$BoundedKeyIterator(jobject object, jint mark, jint depth);
void clinit_java_util_TreeMap$BoundedKeyIterator(jcontext ctx);
void init_java_util_TreeMap$BoundedKeyIterator_java_util_TreeMap$Node_int_java_util_TreeMap_java_util_TreeMap$Node_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jint param4);
jobject M_java_util_TreeMap$BoundedKeyIterator_next_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
