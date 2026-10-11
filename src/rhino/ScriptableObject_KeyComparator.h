#ifndef HEADER_rhino_ScriptableObject$KeyComparator
#define HEADER_rhino_ScriptableObject$KeyComparator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Comparator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ScriptableObject$KeyComparator {
	java_lang_Object parent;
} rhino_ScriptableObject$KeyComparator;

extern Class class_rhino_ScriptableObject$KeyComparator;


#define VTABLE_rhino_ScriptableObject$KeyComparator_hashCode_R_int 0
typedef jint (*func_rhino_ScriptableObject$KeyComparator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$KeyComparator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ScriptableObject$KeyComparator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ScriptableObject$KeyComparator_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ScriptableObject$KeyComparator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$KeyComparator_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ScriptableObject$KeyComparator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$KeyComparator_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ScriptableObject$KeyComparator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$KeyComparator_finalize 5
typedef void (*func_rhino_ScriptableObject$KeyComparator_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$KeyComparator_notify 6
typedef void (*func_rhino_ScriptableObject$KeyComparator_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$KeyComparator_notifyAll 7
typedef void (*func_rhino_ScriptableObject$KeyComparator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$KeyComparator_wait 8
typedef void (*func_rhino_ScriptableObject$KeyComparator_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$KeyComparator_wait_long 9
typedef void (*func_rhino_ScriptableObject$KeyComparator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ScriptableObject$KeyComparator_wait_long_int 10
typedef void (*func_rhino_ScriptableObject$KeyComparator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ScriptableObject$KeyComparator_compare_java_lang_Object_java_lang_Object_R_int 11
typedef jint (*func_rhino_ScriptableObject$KeyComparator_compare_java_lang_Object_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ScriptableObject$KeyComparator_reversed_R_java_util_Comparator 12
typedef jobject (*func_rhino_ScriptableObject$KeyComparator_reversed_R_java_util_Comparator)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptableObject$KeyComparator_thenComparing_java_util_Comparator_R_java_util_Comparator 13
typedef jobject (*func_rhino_ScriptableObject$KeyComparator_thenComparing_java_util_Comparator_R_java_util_Comparator)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ScriptableObject$KeyComparator_thenComparing_java_util_function_Function_java_util_Comparator_R_java_util_Comparator 14
typedef jobject (*func_rhino_ScriptableObject$KeyComparator_thenComparing_java_util_function_Function_java_util_Comparator_R_java_util_Comparator)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_ScriptableObject$KeyComparator_thenComparing_java_util_function_Function_R_java_util_Comparator 15
typedef jobject (*func_rhino_ScriptableObject$KeyComparator_thenComparing_java_util_function_Function_R_java_util_Comparator)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ScriptableObject$KeyComparator_thenComparingInt_java_util_function_ToIntFunction_R_java_util_Comparator 16
typedef jobject (*func_rhino_ScriptableObject$KeyComparator_thenComparingInt_java_util_function_ToIntFunction_R_java_util_Comparator)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ScriptableObject$KeyComparator_thenComparingLong_java_util_function_ToLongFunction_R_java_util_Comparator 17
typedef jobject (*func_rhino_ScriptableObject$KeyComparator_thenComparingLong_java_util_function_ToLongFunction_R_java_util_Comparator)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ScriptableObject$KeyComparator_thenComparingDouble_java_util_function_ToDoubleFunction_R_java_util_Comparator 18
typedef jobject (*func_rhino_ScriptableObject$KeyComparator_thenComparingDouble_java_util_function_ToDoubleFunction_R_java_util_Comparator)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ScriptableObject$KeyComparator_lambda$thenComparing$0_java_util_Comparator_java_lang_Object_java_lang_Object_R_int 19
typedef jint (*func_rhino_ScriptableObject$KeyComparator_lambda$thenComparing$0_java_util_Comparator_java_lang_Object_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

void mark_rhino_ScriptableObject$KeyComparator(jobject object, jint mark, jint depth);
void clinit_rhino_ScriptableObject$KeyComparator(jcontext ctx);
void init_rhino_ScriptableObject$KeyComparator(jcontext ctx, jobject self);
jint M_rhino_ScriptableObject$KeyComparator_compare_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
