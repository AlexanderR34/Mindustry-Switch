#ifndef HEADER_java_util_LinkedHashMap$ValueIterator
#define HEADER_java_util_LinkedHashMap$ValueIterator

#include "Clearwing.h"
#include "java/util/LinkedHashMap_AbstractMapIterator.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_LinkedHashMap$ValueIterator {
	java_util_LinkedHashMap$AbstractMapIterator parent;
} java_util_LinkedHashMap$ValueIterator;

extern Class class_java_util_LinkedHashMap$ValueIterator;


#define VTABLE_java_util_LinkedHashMap$ValueIterator_hashCode_R_int 0
typedef jint (*func_java_util_LinkedHashMap$ValueIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap$ValueIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_LinkedHashMap$ValueIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedHashMap$ValueIterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_LinkedHashMap$ValueIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap$ValueIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_LinkedHashMap$ValueIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap$ValueIterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_LinkedHashMap$ValueIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap$ValueIterator_finalize 5
typedef void (*func_java_util_LinkedHashMap$ValueIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap$ValueIterator_notify 6
typedef void (*func_java_util_LinkedHashMap$ValueIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap$ValueIterator_notifyAll 7
typedef void (*func_java_util_LinkedHashMap$ValueIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap$ValueIterator_wait 8
typedef void (*func_java_util_LinkedHashMap$ValueIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap$ValueIterator_wait_long 9
typedef void (*func_java_util_LinkedHashMap$ValueIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_LinkedHashMap$ValueIterator_wait_long_int 10
typedef void (*func_java_util_LinkedHashMap$ValueIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_LinkedHashMap$ValueIterator_hasNext_R_boolean 11
typedef jbool (*func_java_util_LinkedHashMap$ValueIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap$ValueIterator_checkConcurrentMod 12
typedef void (*func_java_util_LinkedHashMap$ValueIterator_checkConcurrentMod)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap$ValueIterator_makeNext 13
typedef void (*func_java_util_LinkedHashMap$ValueIterator_makeNext)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap$ValueIterator_remove 14
typedef void (*func_java_util_LinkedHashMap$ValueIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap$ValueIterator_next_R_java_lang_Object 15
typedef jobject (*func_java_util_LinkedHashMap$ValueIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap$ValueIterator_forEachRemaining_java_util_function_Consumer 16
typedef void (*func_java_util_LinkedHashMap$ValueIterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_LinkedHashMap$ValueIterator(jobject object, jint mark, jint depth);
void clinit_java_util_LinkedHashMap$ValueIterator(jcontext ctx);
void init_java_util_LinkedHashMap$ValueIterator_java_util_LinkedHashMap(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_LinkedHashMap$ValueIterator_next_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
