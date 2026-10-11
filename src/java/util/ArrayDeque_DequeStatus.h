#ifndef HEADER_java_util_ArrayDeque$DequeStatus
#define HEADER_java_util_ArrayDeque$DequeStatus

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_ArrayDeque$DequeStatus {
	java_lang_Enum parent;
} java_util_ArrayDeque$DequeStatus;

extern Class class_java_util_ArrayDeque$DequeStatus;

extern jobject SF_java_util_ArrayDeque$DequeStatus_Empty;
extern jobject SF_java_util_ArrayDeque$DequeStatus_Normal;
extern jobject SF_java_util_ArrayDeque$DequeStatus_Full;
extern jobject SF_java_util_ArrayDeque$DequeStatus_$VALUES;

#define VTABLE_java_util_ArrayDeque$DequeStatus_hashCode_R_int 0
typedef jint (*func_java_util_ArrayDeque$DequeStatus_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$DequeStatus_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_ArrayDeque$DequeStatus_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayDeque$DequeStatus_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_ArrayDeque$DequeStatus_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$DequeStatus_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_ArrayDeque$DequeStatus_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$DequeStatus_toString_R_java_lang_String 4
typedef jobject (*func_java_util_ArrayDeque$DequeStatus_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$DequeStatus_finalize 5
typedef void (*func_java_util_ArrayDeque$DequeStatus_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$DequeStatus_notify 6
typedef void (*func_java_util_ArrayDeque$DequeStatus_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$DequeStatus_notifyAll 7
typedef void (*func_java_util_ArrayDeque$DequeStatus_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$DequeStatus_wait 8
typedef void (*func_java_util_ArrayDeque$DequeStatus_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$DequeStatus_wait_long 9
typedef void (*func_java_util_ArrayDeque$DequeStatus_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_ArrayDeque$DequeStatus_wait_long_int 10
typedef void (*func_java_util_ArrayDeque$DequeStatus_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_ArrayDeque$DequeStatus_compareTo_java_lang_Object_R_int 11
typedef jint (*func_java_util_ArrayDeque$DequeStatus_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayDeque$DequeStatus_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_java_util_ArrayDeque$DequeStatus_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ArrayDeque$DequeStatus_name_R_java_lang_String 13
typedef jobject (*func_java_util_ArrayDeque$DequeStatus_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$DequeStatus_ordinal_R_int 14
typedef jint (*func_java_util_ArrayDeque$DequeStatus_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_ArrayDeque$DequeStatus_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_java_util_ArrayDeque$DequeStatus_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_java_util_ArrayDeque$DequeStatus(jobject object, jint mark, jint depth);
void clinit_java_util_ArrayDeque$DequeStatus(jcontext ctx);
jobject SM_java_util_ArrayDeque$DequeStatus_values_R_Array1_java_util_ArrayDeque$DequeStatus(jcontext ctx);
jobject SM_java_util_ArrayDeque$DequeStatus_valueOf_java_lang_String_R_java_util_ArrayDeque$DequeStatus(jcontext ctx, jobject param0);
void init_java_util_ArrayDeque$DequeStatus_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_java_util_ArrayDeque$DequeStatus_$values_R_Array1_java_util_ArrayDeque$DequeStatus(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
