#ifndef HEADER_java_util_Collections$UnmodifiableSet
#define HEADER_java_util_Collections$UnmodifiableSet

#include "Clearwing.h"
#include "java/util/Collections_UnmodifiableCollection.h"
#include "java/util/Set.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Collections$UnmodifiableSet {
	java_util_Collections$UnmodifiableCollection parent;
} java_util_Collections$UnmodifiableSet;

extern Class class_java_util_Collections$UnmodifiableSet;

extern jlong SF_java_util_Collections$UnmodifiableSet_serialVersionUID;

#define VTABLE_java_util_Collections$UnmodifiableSet_hashCode_R_int 0
typedef jint (*func_java_util_Collections$UnmodifiableSet_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$UnmodifiableSet_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Collections$UnmodifiableSet_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$UnmodifiableSet_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Collections$UnmodifiableSet_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$UnmodifiableSet_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Collections$UnmodifiableSet_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$UnmodifiableSet_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Collections$UnmodifiableSet_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$UnmodifiableSet_finalize 5
typedef void (*func_java_util_Collections$UnmodifiableSet_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$UnmodifiableSet_notify 6
typedef void (*func_java_util_Collections$UnmodifiableSet_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$UnmodifiableSet_notifyAll 7
typedef void (*func_java_util_Collections$UnmodifiableSet_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$UnmodifiableSet_wait 8
typedef void (*func_java_util_Collections$UnmodifiableSet_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$UnmodifiableSet_wait_long 9
typedef void (*func_java_util_Collections$UnmodifiableSet_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Collections$UnmodifiableSet_wait_long_int 10
typedef void (*func_java_util_Collections$UnmodifiableSet_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Collections$UnmodifiableSet_iterator_R_java_util_Iterator 11
typedef jobject (*func_java_util_Collections$UnmodifiableSet_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$UnmodifiableSet_forEach_java_util_function_Consumer 12
typedef void (*func_java_util_Collections$UnmodifiableSet_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$UnmodifiableSet_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_java_util_Collections$UnmodifiableSet_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$UnmodifiableSet_add_java_lang_Object_R_boolean 14
typedef jbool (*func_java_util_Collections$UnmodifiableSet_add_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$UnmodifiableSet_addAll_java_util_Collection_R_boolean 15
typedef jbool (*func_java_util_Collections$UnmodifiableSet_addAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$UnmodifiableSet_clear 16
typedef void (*func_java_util_Collections$UnmodifiableSet_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$UnmodifiableSet_contains_java_lang_Object_R_boolean 17
typedef jbool (*func_java_util_Collections$UnmodifiableSet_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$UnmodifiableSet_containsAll_java_util_Collection_R_boolean 18
typedef jbool (*func_java_util_Collections$UnmodifiableSet_containsAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$UnmodifiableSet_isEmpty_R_boolean 19
typedef jbool (*func_java_util_Collections$UnmodifiableSet_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$UnmodifiableSet_remove_java_lang_Object_R_boolean 20
typedef jbool (*func_java_util_Collections$UnmodifiableSet_remove_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$UnmodifiableSet_removeAll_java_util_Collection_R_boolean 21
typedef jbool (*func_java_util_Collections$UnmodifiableSet_removeAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$UnmodifiableSet_retainAll_java_util_Collection_R_boolean 22
typedef jbool (*func_java_util_Collections$UnmodifiableSet_retainAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$UnmodifiableSet_size_R_int 23
typedef jint (*func_java_util_Collections$UnmodifiableSet_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$UnmodifiableSet_toArray_R_Array1_java_lang_Object 24
typedef jobject (*func_java_util_Collections$UnmodifiableSet_toArray_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$UnmodifiableSet_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object 25
typedef jobject (*func_java_util_Collections$UnmodifiableSet_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_Collections$UnmodifiableSet(jobject object, jint mark, jint depth);
void clinit_java_util_Collections$UnmodifiableSet(jcontext ctx);
void init_java_util_Collections$UnmodifiableSet_java_util_Set(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Collections$UnmodifiableSet_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_util_Collections$UnmodifiableSet_hashCode_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
