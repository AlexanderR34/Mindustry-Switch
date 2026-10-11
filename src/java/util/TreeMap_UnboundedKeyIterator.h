#ifndef HEADER_java_util_TreeMap$UnboundedKeyIterator
#define HEADER_java_util_TreeMap$UnboundedKeyIterator

#include "Clearwing.h"
#include "java/util/TreeMap_AbstractMapIterator.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_TreeMap$UnboundedKeyIterator {
	java_util_TreeMap$AbstractMapIterator parent;
} java_util_TreeMap$UnboundedKeyIterator;

extern Class class_java_util_TreeMap$UnboundedKeyIterator;


#define VTABLE_java_util_TreeMap$UnboundedKeyIterator_hashCode_R_int 0
typedef jint (*func_java_util_TreeMap$UnboundedKeyIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$UnboundedKeyIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_TreeMap$UnboundedKeyIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_TreeMap$UnboundedKeyIterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_TreeMap$UnboundedKeyIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$UnboundedKeyIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_TreeMap$UnboundedKeyIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$UnboundedKeyIterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_TreeMap$UnboundedKeyIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$UnboundedKeyIterator_finalize 5
typedef void (*func_java_util_TreeMap$UnboundedKeyIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$UnboundedKeyIterator_notify 6
typedef void (*func_java_util_TreeMap$UnboundedKeyIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$UnboundedKeyIterator_notifyAll 7
typedef void (*func_java_util_TreeMap$UnboundedKeyIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$UnboundedKeyIterator_wait 8
typedef void (*func_java_util_TreeMap$UnboundedKeyIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$UnboundedKeyIterator_wait_long 9
typedef void (*func_java_util_TreeMap$UnboundedKeyIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_TreeMap$UnboundedKeyIterator_wait_long_int 10
typedef void (*func_java_util_TreeMap$UnboundedKeyIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_TreeMap$UnboundedKeyIterator_hasNext_R_boolean 11
typedef jbool (*func_java_util_TreeMap$UnboundedKeyIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$UnboundedKeyIterator_makeNext 12
typedef void (*func_java_util_TreeMap$UnboundedKeyIterator_makeNext)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$UnboundedKeyIterator_remove 13
typedef void (*func_java_util_TreeMap$UnboundedKeyIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$UnboundedKeyIterator_next_R_java_lang_Object 14
typedef jobject (*func_java_util_TreeMap$UnboundedKeyIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_TreeMap$UnboundedKeyIterator_forEachRemaining_java_util_function_Consumer 15
typedef void (*func_java_util_TreeMap$UnboundedKeyIterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_TreeMap$UnboundedKeyIterator(jobject object, jint mark, jint depth);
void clinit_java_util_TreeMap$UnboundedKeyIterator(jcontext ctx);
void init_java_util_TreeMap$UnboundedKeyIterator_java_util_TreeMap_java_util_TreeMap$Node_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
void init_java_util_TreeMap$UnboundedKeyIterator_java_util_TreeMap(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_TreeMap$UnboundedKeyIterator_next_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
