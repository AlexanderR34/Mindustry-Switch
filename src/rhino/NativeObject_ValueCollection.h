#ifndef HEADER_rhino_NativeObject$ValueCollection
#define HEADER_rhino_NativeObject$ValueCollection

#include "Clearwing.h"
#include "java/util/AbstractCollection.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_NativeObject$ValueCollection {
	java_util_AbstractCollection parent;
	jref F_this$0;
} rhino_NativeObject$ValueCollection;

extern Class class_rhino_NativeObject$ValueCollection;


#define VTABLE_rhino_NativeObject$ValueCollection_hashCode_R_int 0
typedef jint (*func_rhino_NativeObject$ValueCollection_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$ValueCollection_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_NativeObject$ValueCollection_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeObject$ValueCollection_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_NativeObject$ValueCollection_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$ValueCollection_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_NativeObject$ValueCollection_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$ValueCollection_toString_R_java_lang_String 4
typedef jobject (*func_rhino_NativeObject$ValueCollection_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$ValueCollection_finalize 5
typedef void (*func_rhino_NativeObject$ValueCollection_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$ValueCollection_notify 6
typedef void (*func_rhino_NativeObject$ValueCollection_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$ValueCollection_notifyAll 7
typedef void (*func_rhino_NativeObject$ValueCollection_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$ValueCollection_wait 8
typedef void (*func_rhino_NativeObject$ValueCollection_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$ValueCollection_wait_long 9
typedef void (*func_rhino_NativeObject$ValueCollection_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_NativeObject$ValueCollection_wait_long_int 10
typedef void (*func_rhino_NativeObject$ValueCollection_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_NativeObject$ValueCollection_iterator_R_java_util_Iterator 11
typedef jobject (*func_rhino_NativeObject$ValueCollection_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$ValueCollection_forEach_java_util_function_Consumer 12
typedef void (*func_rhino_NativeObject$ValueCollection_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeObject$ValueCollection_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_rhino_NativeObject$ValueCollection_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$ValueCollection_add_java_lang_Object_R_boolean 14
typedef jbool (*func_rhino_NativeObject$ValueCollection_add_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeObject$ValueCollection_addAll_java_util_Collection_R_boolean 15
typedef jbool (*func_rhino_NativeObject$ValueCollection_addAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeObject$ValueCollection_clear 16
typedef void (*func_rhino_NativeObject$ValueCollection_clear)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$ValueCollection_contains_java_lang_Object_R_boolean 17
typedef jbool (*func_rhino_NativeObject$ValueCollection_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeObject$ValueCollection_containsAll_java_util_Collection_R_boolean 18
typedef jbool (*func_rhino_NativeObject$ValueCollection_containsAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeObject$ValueCollection_isEmpty_R_boolean 19
typedef jbool (*func_rhino_NativeObject$ValueCollection_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$ValueCollection_remove_java_lang_Object_R_boolean 20
typedef jbool (*func_rhino_NativeObject$ValueCollection_remove_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeObject$ValueCollection_removeAll_java_util_Collection_R_boolean 21
typedef jbool (*func_rhino_NativeObject$ValueCollection_removeAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeObject$ValueCollection_retainAll_java_util_Collection_R_boolean 22
typedef jbool (*func_rhino_NativeObject$ValueCollection_retainAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeObject$ValueCollection_size_R_int 23
typedef jint (*func_rhino_NativeObject$ValueCollection_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$ValueCollection_toArray_R_Array1_java_lang_Object 24
typedef jobject (*func_rhino_NativeObject$ValueCollection_toArray_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeObject$ValueCollection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object 25
typedef jobject (*func_rhino_NativeObject$ValueCollection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_NativeObject$ValueCollection(jobject object, jint mark, jint depth);
void clinit_rhino_NativeObject$ValueCollection(jcontext ctx);
void init_rhino_NativeObject$ValueCollection_rhino_NativeObject(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_NativeObject$ValueCollection_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
jint M_rhino_NativeObject$ValueCollection_size_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
