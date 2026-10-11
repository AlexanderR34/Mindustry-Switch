#ifndef HEADER_java_util_EnumMap$EnumMapIterator
#define HEADER_java_util_EnumMap$EnumMapIterator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_EnumMap$EnumMapIterator {
	java_lang_Object parent;
	jint F_index;
	jint F_lastReturnedIndex;
	jref F_this$0;
} java_util_EnumMap$EnumMapIterator;

extern Class class_java_util_EnumMap$EnumMapIterator;


#define VTABLE_java_util_EnumMap$EnumMapIterator_hashCode_R_int 0
typedef jint (*func_java_util_EnumMap$EnumMapIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EnumMapIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_EnumMap$EnumMapIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EnumMap$EnumMapIterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_EnumMap$EnumMapIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EnumMapIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_EnumMap$EnumMapIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EnumMapIterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_EnumMap$EnumMapIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EnumMapIterator_finalize 5
typedef void (*func_java_util_EnumMap$EnumMapIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EnumMapIterator_notify 6
typedef void (*func_java_util_EnumMap$EnumMapIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EnumMapIterator_notifyAll 7
typedef void (*func_java_util_EnumMap$EnumMapIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EnumMapIterator_wait 8
typedef void (*func_java_util_EnumMap$EnumMapIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EnumMapIterator_wait_long 9
typedef void (*func_java_util_EnumMap$EnumMapIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_EnumMap$EnumMapIterator_wait_long_int 10
typedef void (*func_java_util_EnumMap$EnumMapIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_EnumMap$EnumMapIterator_hasNext_R_boolean 11
typedef jbool (*func_java_util_EnumMap$EnumMapIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EnumMapIterator_next_R_java_lang_Object 12
typedef jobject (*func_java_util_EnumMap$EnumMapIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EnumMapIterator_remove 13
typedef void (*func_java_util_EnumMap$EnumMapIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EnumMapIterator_forEachRemaining_java_util_function_Consumer 14
typedef void (*func_java_util_EnumMap$EnumMapIterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EnumMap$EnumMapIterator_checkLastReturnedIndex 15
typedef void (*func_java_util_EnumMap$EnumMapIterator_checkLastReturnedIndex)(jcontext ctx, jobject self);

void mark_java_util_EnumMap$EnumMapIterator(jobject object, jint mark, jint depth);
void clinit_java_util_EnumMap$EnumMapIterator(jcontext ctx);
void init_java_util_EnumMap$EnumMapIterator_java_util_EnumMap(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_EnumMap$EnumMapIterator_hasNext_R_boolean(jcontext ctx, jobject self);
void M_java_util_EnumMap$EnumMapIterator_remove(jcontext ctx, jobject self);
void M_java_util_EnumMap$EnumMapIterator_checkLastReturnedIndex(jcontext ctx, jobject self);
void init_java_util_EnumMap$EnumMapIterator_java_util_EnumMap_java_util_EnumMap$1(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
