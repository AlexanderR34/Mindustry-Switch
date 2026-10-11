#ifndef HEADER_java_util_EnumMap$EntrySet
#define HEADER_java_util_EnumMap$EntrySet

#include "Clearwing.h"
#include "java/util/AbstractSet.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_EnumMap$EntrySet {
	java_util_AbstractSet parent;
	jref F_this$0;
} java_util_EnumMap$EntrySet;

extern Class class_java_util_EnumMap$EntrySet;


#define VTABLE_java_util_EnumMap$EntrySet_hashCode_R_int 0
typedef jint (*func_java_util_EnumMap$EntrySet_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EntrySet_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_EnumMap$EntrySet_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EnumMap$EntrySet_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_EnumMap$EntrySet_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EntrySet_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_EnumMap$EntrySet_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EntrySet_toString_R_java_lang_String 4
typedef jobject (*func_java_util_EnumMap$EntrySet_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EntrySet_finalize 5
typedef void (*func_java_util_EnumMap$EntrySet_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EntrySet_notify 6
typedef void (*func_java_util_EnumMap$EntrySet_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EntrySet_notifyAll 7
typedef void (*func_java_util_EnumMap$EntrySet_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EntrySet_wait 8
typedef void (*func_java_util_EnumMap$EntrySet_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EntrySet_wait_long 9
typedef void (*func_java_util_EnumMap$EntrySet_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_EnumMap$EntrySet_wait_long_int 10
typedef void (*func_java_util_EnumMap$EntrySet_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_EnumMap$EntrySet_iterator_R_java_util_Iterator 11
typedef jobject (*func_java_util_EnumMap$EntrySet_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EntrySet_forEach_java_util_function_Consumer 12
typedef void (*func_java_util_EnumMap$EntrySet_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EnumMap$EntrySet_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_java_util_EnumMap$EntrySet_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EntrySet_add_java_lang_Object_R_boolean 14
typedef jbool (*func_java_util_EnumMap$EntrySet_add_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EnumMap$EntrySet_addAll_java_util_Collection_R_boolean 15
typedef jbool (*func_java_util_EnumMap$EntrySet_addAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EnumMap$EntrySet_clear 16
typedef void (*func_java_util_EnumMap$EntrySet_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EntrySet_contains_java_lang_Object_R_boolean 17
typedef jbool (*func_java_util_EnumMap$EntrySet_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EnumMap$EntrySet_containsAll_java_util_Collection_R_boolean 18
typedef jbool (*func_java_util_EnumMap$EntrySet_containsAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EnumMap$EntrySet_isEmpty_R_boolean 19
typedef jbool (*func_java_util_EnumMap$EntrySet_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EntrySet_remove_java_lang_Object_R_boolean 20
typedef jbool (*func_java_util_EnumMap$EntrySet_remove_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EnumMap$EntrySet_removeAll_java_util_Collection_R_boolean 21
typedef jbool (*func_java_util_EnumMap$EntrySet_removeAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EnumMap$EntrySet_retainAll_java_util_Collection_R_boolean 22
typedef jbool (*func_java_util_EnumMap$EntrySet_retainAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EnumMap$EntrySet_size_R_int 23
typedef jint (*func_java_util_EnumMap$EntrySet_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EntrySet_toArray_R_Array1_java_lang_Object 24
typedef jobject (*func_java_util_EnumMap$EntrySet_toArray_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_EnumMap$EntrySet_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object 25
typedef jobject (*func_java_util_EnumMap$EntrySet_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_EnumMap$EntrySet_fillEntryArray_Array1_java_lang_Object_R_Array1_java_lang_Object 26
typedef jobject (*func_java_util_EnumMap$EntrySet_fillEntryArray_Array1_java_lang_Object_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_EnumMap$EntrySet(jobject object, jint mark, jint depth);
void clinit_java_util_EnumMap$EntrySet(jcontext ctx);
void init_java_util_EnumMap$EntrySet_java_util_EnumMap(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_EnumMap$EntrySet_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
jbool M_java_util_EnumMap$EntrySet_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_EnumMap$EntrySet_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_util_EnumMap$EntrySet_size_R_int(jcontext ctx, jobject self);
void M_java_util_EnumMap$EntrySet_clear(jcontext ctx, jobject self);
jobject M_java_util_EnumMap$EntrySet_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_EnumMap$EntrySet_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_EnumMap$EntrySet_fillEntryArray_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void init_java_util_EnumMap$EntrySet_java_util_EnumMap_java_util_EnumMap$1(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
