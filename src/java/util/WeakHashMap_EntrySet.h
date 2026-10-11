#ifndef HEADER_java_util_WeakHashMap$EntrySet
#define HEADER_java_util_WeakHashMap$EntrySet

#include "Clearwing.h"
#include "java/util/AbstractSet.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_WeakHashMap$EntrySet {
	java_util_AbstractSet parent;
	jref F_this$0;
} java_util_WeakHashMap$EntrySet;

extern Class class_java_util_WeakHashMap$EntrySet;


#define VTABLE_java_util_WeakHashMap$EntrySet_hashCode_R_int 0
typedef jint (*func_java_util_WeakHashMap$EntrySet_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$EntrySet_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_WeakHashMap$EntrySet_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap$EntrySet_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_WeakHashMap$EntrySet_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$EntrySet_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_WeakHashMap$EntrySet_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$EntrySet_toString_R_java_lang_String 4
typedef jobject (*func_java_util_WeakHashMap$EntrySet_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$EntrySet_finalize 5
typedef void (*func_java_util_WeakHashMap$EntrySet_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$EntrySet_notify 6
typedef void (*func_java_util_WeakHashMap$EntrySet_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$EntrySet_notifyAll 7
typedef void (*func_java_util_WeakHashMap$EntrySet_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$EntrySet_wait 8
typedef void (*func_java_util_WeakHashMap$EntrySet_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$EntrySet_wait_long 9
typedef void (*func_java_util_WeakHashMap$EntrySet_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_WeakHashMap$EntrySet_wait_long_int 10
typedef void (*func_java_util_WeakHashMap$EntrySet_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_WeakHashMap$EntrySet_iterator_R_java_util_Iterator 11
typedef jobject (*func_java_util_WeakHashMap$EntrySet_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$EntrySet_forEach_java_util_function_Consumer 12
typedef void (*func_java_util_WeakHashMap$EntrySet_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap$EntrySet_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_java_util_WeakHashMap$EntrySet_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$EntrySet_add_java_lang_Object_R_boolean 14
typedef jbool (*func_java_util_WeakHashMap$EntrySet_add_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap$EntrySet_addAll_java_util_Collection_R_boolean 15
typedef jbool (*func_java_util_WeakHashMap$EntrySet_addAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap$EntrySet_clear 16
typedef void (*func_java_util_WeakHashMap$EntrySet_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$EntrySet_contains_java_lang_Object_R_boolean 17
typedef jbool (*func_java_util_WeakHashMap$EntrySet_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap$EntrySet_containsAll_java_util_Collection_R_boolean 18
typedef jbool (*func_java_util_WeakHashMap$EntrySet_containsAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap$EntrySet_isEmpty_R_boolean 19
typedef jbool (*func_java_util_WeakHashMap$EntrySet_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$EntrySet_remove_java_lang_Object_R_boolean 20
typedef jbool (*func_java_util_WeakHashMap$EntrySet_remove_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap$EntrySet_removeAll_java_util_Collection_R_boolean 21
typedef jbool (*func_java_util_WeakHashMap$EntrySet_removeAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap$EntrySet_retainAll_java_util_Collection_R_boolean 22
typedef jbool (*func_java_util_WeakHashMap$EntrySet_retainAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap$EntrySet_size_R_int 23
typedef jint (*func_java_util_WeakHashMap$EntrySet_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$EntrySet_toArray_R_Array1_java_lang_Object 24
typedef jobject (*func_java_util_WeakHashMap$EntrySet_toArray_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$EntrySet_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object 25
typedef jobject (*func_java_util_WeakHashMap$EntrySet_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap$EntrySet_deepCopy_R_java_util_List 26
typedef jobject (*func_java_util_WeakHashMap$EntrySet_deepCopy_R_java_util_List)(jcontext ctx, jobject self);

void mark_java_util_WeakHashMap$EntrySet(jobject object, jint mark, jint depth);
void clinit_java_util_WeakHashMap$EntrySet(jcontext ctx);
void init_java_util_WeakHashMap$EntrySet_java_util_WeakHashMap(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_WeakHashMap$EntrySet_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
jbool M_java_util_WeakHashMap$EntrySet_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_WeakHashMap$EntrySet_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_util_WeakHashMap$EntrySet_size_R_int(jcontext ctx, jobject self);
void M_java_util_WeakHashMap$EntrySet_clear(jcontext ctx, jobject self);
jobject M_java_util_WeakHashMap$EntrySet_deepCopy_R_java_util_List(jcontext ctx, jobject self);
jobject M_java_util_WeakHashMap$EntrySet_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_WeakHashMap$EntrySet_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_WeakHashMap$EntrySet_spliterator_R_java_util_Spliterator(jcontext ctx, jobject self);
void init_java_util_WeakHashMap$EntrySet_java_util_WeakHashMap_java_util_WeakHashMap$1(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
