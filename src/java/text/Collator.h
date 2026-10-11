#ifndef HEADER_java_text_Collator
#define HEADER_java_text_Collator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Comparator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_text_Collator {
	java_lang_Object parent;
} java_text_Collator;

extern Class class_java_text_Collator;

extern jint SF_java_text_Collator_NO_DECOMPOSITION;
extern jint SF_java_text_Collator_CANONICAL_DECOMPOSITION;
extern jint SF_java_text_Collator_FULL_DECOMPOSITION;
extern jint SF_java_text_Collator_PRIMARY;
extern jint SF_java_text_Collator_SECONDARY;
extern jint SF_java_text_Collator_TERTIARY;
extern jint SF_java_text_Collator_IDENTICAL;

#define VTABLE_java_text_Collator_hashCode_R_int 0
typedef jint (*func_java_text_Collator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_text_Collator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_text_Collator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_text_Collator_clone_R_java_lang_Object 2
typedef jobject (*func_java_text_Collator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_text_Collator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_text_Collator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_text_Collator_toString_R_java_lang_String 4
typedef jobject (*func_java_text_Collator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_text_Collator_finalize 5
typedef void (*func_java_text_Collator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_text_Collator_notify 6
typedef void (*func_java_text_Collator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_text_Collator_notifyAll 7
typedef void (*func_java_text_Collator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_text_Collator_wait 8
typedef void (*func_java_text_Collator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_text_Collator_wait_long 9
typedef void (*func_java_text_Collator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_text_Collator_wait_long_int 10
typedef void (*func_java_text_Collator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_text_Collator_compare_java_lang_Object_java_lang_Object_R_int 11
typedef jint (*func_java_text_Collator_compare_java_lang_Object_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_text_Collator_reversed_R_java_util_Comparator 12
typedef jobject (*func_java_text_Collator_reversed_R_java_util_Comparator)(jcontext ctx, jobject self);
#define VTABLE_java_text_Collator_thenComparing_java_util_Comparator_R_java_util_Comparator 13
typedef jobject (*func_java_text_Collator_thenComparing_java_util_Comparator_R_java_util_Comparator)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_text_Collator_thenComparing_java_util_function_Function_java_util_Comparator_R_java_util_Comparator 14
typedef jobject (*func_java_text_Collator_thenComparing_java_util_function_Function_java_util_Comparator_R_java_util_Comparator)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_text_Collator_thenComparing_java_util_function_Function_R_java_util_Comparator 15
typedef jobject (*func_java_text_Collator_thenComparing_java_util_function_Function_R_java_util_Comparator)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_text_Collator_thenComparingInt_java_util_function_ToIntFunction_R_java_util_Comparator 16
typedef jobject (*func_java_text_Collator_thenComparingInt_java_util_function_ToIntFunction_R_java_util_Comparator)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_text_Collator_thenComparingLong_java_util_function_ToLongFunction_R_java_util_Comparator 17
typedef jobject (*func_java_text_Collator_thenComparingLong_java_util_function_ToLongFunction_R_java_util_Comparator)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_text_Collator_thenComparingDouble_java_util_function_ToDoubleFunction_R_java_util_Comparator 18
typedef jobject (*func_java_text_Collator_thenComparingDouble_java_util_function_ToDoubleFunction_R_java_util_Comparator)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_text_Collator_lambda$thenComparing$0_java_util_Comparator_java_lang_Object_java_lang_Object_R_int 19
typedef jint (*func_java_text_Collator_lambda$thenComparing$0_java_util_Comparator_java_lang_Object_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_text_Collator_compare_java_lang_String_java_lang_String_R_int 20
typedef jint (*func_java_text_Collator_compare_java_lang_String_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_text_Collator_equals_java_lang_String_java_lang_String_R_boolean 21
typedef jbool (*func_java_text_Collator_equals_java_lang_String_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_text_Collator_getCollationKey_java_lang_String_R_java_text_CollationKey 22
typedef jobject (*func_java_text_Collator_getCollationKey_java_lang_String_R_java_text_CollationKey)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_text_Collator_getDecomposition_R_int 23
typedef jint (*func_java_text_Collator_getDecomposition_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_text_Collator_getStrength_R_int 24
typedef jint (*func_java_text_Collator_getStrength_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_text_Collator_setDecomposition_int 25
typedef void (*func_java_text_Collator_setDecomposition_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_text_Collator_setStrength_int 26
typedef void (*func_java_text_Collator_setStrength_int)(jcontext ctx, jobject self, jint param0);

void mark_java_text_Collator(jobject object, jint mark, jint depth);
void clinit_java_text_Collator(jcontext ctx);
void init_java_text_Collator(jcontext ctx, jobject self);
jint M_java_text_Collator_compare_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_java_text_Collator_equals_java_lang_String_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject SM_java_text_Collator_getAvailableLocales_R_Array1_java_util_Locale(jcontext ctx);
jint M_java_text_Collator_getDecomposition_R_int(jcontext ctx, jobject self);
jobject SM_java_text_Collator_getInstance_R_java_text_Collator(jcontext ctx);
jobject SM_java_text_Collator_getInstance_java_util_Locale_R_java_text_Collator(jcontext ctx, jobject param0);
jint M_java_text_Collator_getStrength_R_int(jcontext ctx, jobject self);
void M_java_text_Collator_setDecomposition_int(jcontext ctx, jobject self, jint param0);
void M_java_text_Collator_setStrength_int(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
