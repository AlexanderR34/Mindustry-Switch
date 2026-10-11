#ifndef HEADER_java_util_EnumMap$KeyIterator
#define HEADER_java_util_EnumMap$KeyIterator

#include "Clearwing.h"
#include "java/util/EnumMap_EnumMapIterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_EnumMap$KeyIterator {
	java_util_EnumMap$EnumMapIterator parent;
	jref F_this$0;
} java_util_EnumMap$KeyIterator;

extern Class class_java_util_EnumMap$KeyIterator;


#define VTABLE_java_util_EnumMap$KeyIterator_hashCode_R_int 0
typedef jint (*func_java_util_EnumMap$KeyIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$KeyIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_EnumMap$KeyIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EnumMap$KeyIterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_EnumMap$KeyIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$KeyIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_EnumMap$KeyIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$KeyIterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_EnumMap$KeyIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$KeyIterator_finalize 5
typedef void (*func_java_util_EnumMap$KeyIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$KeyIterator_notify 6
typedef void (*func_java_util_EnumMap$KeyIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$KeyIterator_notifyAll 7
typedef void (*func_java_util_EnumMap$KeyIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$KeyIterator_wait 8
typedef void (*func_java_util_EnumMap$KeyIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$KeyIterator_wait_long 9
typedef void (*func_java_util_EnumMap$KeyIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_EnumMap$KeyIterator_wait_long_int 10
typedef void (*func_java_util_EnumMap$KeyIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_EnumMap$KeyIterator_hasNext_R_boolean 11
typedef jbool (*func_java_util_EnumMap$KeyIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$KeyIterator_next_R_java_lang_Object 12
typedef jobject (*func_java_util_EnumMap$KeyIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$KeyIterator_remove 13
typedef void (*func_java_util_EnumMap$KeyIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$KeyIterator_forEachRemaining_java_util_function_Consumer 14
typedef void (*func_java_util_EnumMap$KeyIterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EnumMap$KeyIterator_checkLastReturnedIndex 15
typedef void (*func_java_util_EnumMap$KeyIterator_checkLastReturnedIndex)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$KeyIterator_next_R_java_lang_Enum 16
typedef jobject (*func_java_util_EnumMap$KeyIterator_next_R_java_lang_Enum)(jcontext ctx, jobject self);

void mark_java_util_EnumMap$KeyIterator(jobject object, jint mark, jint depth);
void clinit_java_util_EnumMap$KeyIterator(jcontext ctx);
void init_java_util_EnumMap$KeyIterator_java_util_EnumMap(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_EnumMap$KeyIterator_next_R_java_lang_Enum(jcontext ctx, jobject self);
jobject M_java_util_EnumMap$KeyIterator_next_R_java_lang_Object(jcontext ctx, jobject self);
void init_java_util_EnumMap$KeyIterator_java_util_EnumMap_java_util_EnumMap$1(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
