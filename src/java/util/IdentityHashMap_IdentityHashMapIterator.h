#ifndef HEADER_java_util_IdentityHashMap$IdentityHashMapIterator
#define HEADER_java_util_IdentityHashMap$IdentityHashMapIterator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_IdentityHashMap$IdentityHashMapIterator {
	java_lang_Object parent;
	jint F_position;
	jint F_lastPosition;
	jref F_associatedMap;
	jint F_expectedModCount;
	jref F_type;
	jbool F_canRemove;
} java_util_IdentityHashMap$IdentityHashMapIterator;

extern Class class_java_util_IdentityHashMap$IdentityHashMapIterator;


#define VTABLE_java_util_IdentityHashMap$IdentityHashMapIterator_hashCode_R_int 0
typedef jint (*func_java_util_IdentityHashMap$IdentityHashMapIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_IdentityHashMap$IdentityHashMapIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_IdentityHashMap$IdentityHashMapIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_IdentityHashMap$IdentityHashMapIterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_IdentityHashMap$IdentityHashMapIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_IdentityHashMap$IdentityHashMapIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_IdentityHashMap$IdentityHashMapIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_IdentityHashMap$IdentityHashMapIterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_IdentityHashMap$IdentityHashMapIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_IdentityHashMap$IdentityHashMapIterator_finalize 5
typedef void (*func_java_util_IdentityHashMap$IdentityHashMapIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_IdentityHashMap$IdentityHashMapIterator_notify 6
typedef void (*func_java_util_IdentityHashMap$IdentityHashMapIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_IdentityHashMap$IdentityHashMapIterator_notifyAll 7
typedef void (*func_java_util_IdentityHashMap$IdentityHashMapIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_IdentityHashMap$IdentityHashMapIterator_wait 8
typedef void (*func_java_util_IdentityHashMap$IdentityHashMapIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_IdentityHashMap$IdentityHashMapIterator_wait_long 9
typedef void (*func_java_util_IdentityHashMap$IdentityHashMapIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_IdentityHashMap$IdentityHashMapIterator_wait_long_int 10
typedef void (*func_java_util_IdentityHashMap$IdentityHashMapIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_IdentityHashMap$IdentityHashMapIterator_hasNext_R_boolean 11
typedef jbool (*func_java_util_IdentityHashMap$IdentityHashMapIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_IdentityHashMap$IdentityHashMapIterator_next_R_java_lang_Object 12
typedef jobject (*func_java_util_IdentityHashMap$IdentityHashMapIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_IdentityHashMap$IdentityHashMapIterator_remove 13
typedef void (*func_java_util_IdentityHashMap$IdentityHashMapIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_java_util_IdentityHashMap$IdentityHashMapIterator_forEachRemaining_java_util_function_Consumer 14
typedef void (*func_java_util_IdentityHashMap$IdentityHashMapIterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_IdentityHashMap$IdentityHashMapIterator_checkConcurrentMod 15
typedef void (*func_java_util_IdentityHashMap$IdentityHashMapIterator_checkConcurrentMod)(jcontext ctx, jobject self);

void mark_java_util_IdentityHashMap$IdentityHashMapIterator(jobject object, jint mark, jint depth);
void clinit_java_util_IdentityHashMap$IdentityHashMapIterator(jcontext ctx);
void init_java_util_IdentityHashMap$IdentityHashMapIterator_java_util_MapEntry$Type_java_util_IdentityHashMap(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_java_util_IdentityHashMap$IdentityHashMapIterator_hasNext_R_boolean(jcontext ctx, jobject self);
void M_java_util_IdentityHashMap$IdentityHashMapIterator_checkConcurrentMod(jcontext ctx, jobject self);
jobject M_java_util_IdentityHashMap$IdentityHashMapIterator_next_R_java_lang_Object(jcontext ctx, jobject self);
void M_java_util_IdentityHashMap$IdentityHashMapIterator_remove(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
