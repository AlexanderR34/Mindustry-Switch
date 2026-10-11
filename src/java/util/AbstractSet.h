#ifndef HEADER_java_util_AbstractSet
#define HEADER_java_util_AbstractSet

#include "Clearwing.h"
#include "java/util/AbstractCollection.h"
#include "java/util/Set.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_AbstractSet {
	java_util_AbstractCollection parent;
} java_util_AbstractSet;

extern Class class_java_util_AbstractSet;


#define VTABLE_java_util_AbstractSet_hashCode_R_int 0
typedef jint (*func_java_util_AbstractSet_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractSet_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_AbstractSet_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractSet_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_AbstractSet_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractSet_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_AbstractSet_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractSet_toString_R_java_lang_String 4
typedef jobject (*func_java_util_AbstractSet_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractSet_finalize 5
typedef void (*func_java_util_AbstractSet_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractSet_notify 6
typedef void (*func_java_util_AbstractSet_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractSet_notifyAll 7
typedef void (*func_java_util_AbstractSet_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractSet_wait 8
typedef void (*func_java_util_AbstractSet_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractSet_wait_long 9
typedef void (*func_java_util_AbstractSet_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_AbstractSet_wait_long_int 10
typedef void (*func_java_util_AbstractSet_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_AbstractSet_iterator_R_java_util_Iterator 11
typedef jobject (*func_java_util_AbstractSet_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractSet_forEach_java_util_function_Consumer 12
typedef void (*func_java_util_AbstractSet_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractSet_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_java_util_AbstractSet_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractSet_add_java_lang_Object_R_boolean 14
typedef jbool (*func_java_util_AbstractSet_add_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractSet_addAll_java_util_Collection_R_boolean 15
typedef jbool (*func_java_util_AbstractSet_addAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractSet_clear 16
typedef void (*func_java_util_AbstractSet_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractSet_contains_java_lang_Object_R_boolean 17
typedef jbool (*func_java_util_AbstractSet_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractSet_containsAll_java_util_Collection_R_boolean 18
typedef jbool (*func_java_util_AbstractSet_containsAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractSet_isEmpty_R_boolean 19
typedef jbool (*func_java_util_AbstractSet_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractSet_remove_java_lang_Object_R_boolean 20
typedef jbool (*func_java_util_AbstractSet_remove_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractSet_removeAll_java_util_Collection_R_boolean 21
typedef jbool (*func_java_util_AbstractSet_removeAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractSet_retainAll_java_util_Collection_R_boolean 22
typedef jbool (*func_java_util_AbstractSet_retainAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractSet_size_R_int 23
typedef jint (*func_java_util_AbstractSet_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractSet_toArray_R_Array1_java_lang_Object 24
typedef jobject (*func_java_util_AbstractSet_toArray_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractSet_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object 25
typedef jobject (*func_java_util_AbstractSet_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_AbstractSet(jobject object, jint mark, jint depth);
void clinit_java_util_AbstractSet(jcontext ctx);
void init_java_util_AbstractSet(jcontext ctx, jobject self);
jbool M_java_util_AbstractSet_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_util_AbstractSet_hashCode_R_int(jcontext ctx, jobject self);
jbool M_java_util_AbstractSet_removeAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
