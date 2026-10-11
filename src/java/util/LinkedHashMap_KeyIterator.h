#ifndef HEADER_java_util_LinkedHashMap$KeyIterator
#define HEADER_java_util_LinkedHashMap$KeyIterator

#include "Clearwing.h"
#include "java/util/LinkedHashMap_AbstractMapIterator.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_LinkedHashMap$KeyIterator {
	java_util_LinkedHashMap$AbstractMapIterator parent;
} java_util_LinkedHashMap$KeyIterator;

extern Class class_java_util_LinkedHashMap$KeyIterator;


#define VTABLE_java_util_LinkedHashMap$KeyIterator_hashCode_R_int 0
typedef jint (*func_java_util_LinkedHashMap$KeyIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap$KeyIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_LinkedHashMap$KeyIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_LinkedHashMap$KeyIterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_LinkedHashMap$KeyIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap$KeyIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_LinkedHashMap$KeyIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap$KeyIterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_LinkedHashMap$KeyIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap$KeyIterator_finalize 5
typedef void (*func_java_util_LinkedHashMap$KeyIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap$KeyIterator_notify 6
typedef void (*func_java_util_LinkedHashMap$KeyIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap$KeyIterator_notifyAll 7
typedef void (*func_java_util_LinkedHashMap$KeyIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap$KeyIterator_wait 8
typedef void (*func_java_util_LinkedHashMap$KeyIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap$KeyIterator_wait_long 9
typedef void (*func_java_util_LinkedHashMap$KeyIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_LinkedHashMap$KeyIterator_wait_long_int 10
typedef void (*func_java_util_LinkedHashMap$KeyIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_LinkedHashMap$KeyIterator_hasNext_R_boolean 11
typedef jbool (*func_java_util_LinkedHashMap$KeyIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap$KeyIterator_checkConcurrentMod 12
typedef void (*func_java_util_LinkedHashMap$KeyIterator_checkConcurrentMod)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap$KeyIterator_makeNext 13
typedef void (*func_java_util_LinkedHashMap$KeyIterator_makeNext)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap$KeyIterator_remove 14
typedef void (*func_java_util_LinkedHashMap$KeyIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap$KeyIterator_next_R_java_lang_Object 15
typedef jobject (*func_java_util_LinkedHashMap$KeyIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_LinkedHashMap$KeyIterator_forEachRemaining_java_util_function_Consumer 16
typedef void (*func_java_util_LinkedHashMap$KeyIterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_LinkedHashMap$KeyIterator(jobject object, jint mark, jint depth);
void clinit_java_util_LinkedHashMap$KeyIterator(jcontext ctx);
void init_java_util_LinkedHashMap$KeyIterator_java_util_LinkedHashMap(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_LinkedHashMap$KeyIterator_next_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
