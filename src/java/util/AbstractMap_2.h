#ifndef HEADER_java_util_AbstractMap$2
#define HEADER_java_util_AbstractMap$2

#include "Clearwing.h"
#include "java/util/AbstractCollection.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_AbstractMap$2 {
	java_util_AbstractCollection parent;
	jref F_this$0;
} java_util_AbstractMap$2;

extern Class class_java_util_AbstractMap$2;


#define VTABLE_java_util_AbstractMap$2_hashCode_R_int 0
typedef jint (*func_java_util_AbstractMap$2_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap$2_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_AbstractMap$2_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractMap$2_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_AbstractMap$2_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap$2_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_AbstractMap$2_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap$2_toString_R_java_lang_String 4
typedef jobject (*func_java_util_AbstractMap$2_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap$2_finalize 5
typedef void (*func_java_util_AbstractMap$2_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap$2_notify 6
typedef void (*func_java_util_AbstractMap$2_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap$2_notifyAll 7
typedef void (*func_java_util_AbstractMap$2_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap$2_wait 8
typedef void (*func_java_util_AbstractMap$2_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap$2_wait_long 9
typedef void (*func_java_util_AbstractMap$2_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_AbstractMap$2_wait_long_int 10
typedef void (*func_java_util_AbstractMap$2_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_AbstractMap$2_iterator_R_java_util_Iterator 11
typedef jobject (*func_java_util_AbstractMap$2_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap$2_forEach_java_util_function_Consumer 12
typedef void (*func_java_util_AbstractMap$2_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractMap$2_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_java_util_AbstractMap$2_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap$2_add_java_lang_Object_R_boolean 14
typedef jbool (*func_java_util_AbstractMap$2_add_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractMap$2_addAll_java_util_Collection_R_boolean 15
typedef jbool (*func_java_util_AbstractMap$2_addAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractMap$2_clear 16
typedef void (*func_java_util_AbstractMap$2_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap$2_contains_java_lang_Object_R_boolean 17
typedef jbool (*func_java_util_AbstractMap$2_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractMap$2_containsAll_java_util_Collection_R_boolean 18
typedef jbool (*func_java_util_AbstractMap$2_containsAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractMap$2_isEmpty_R_boolean 19
typedef jbool (*func_java_util_AbstractMap$2_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap$2_remove_java_lang_Object_R_boolean 20
typedef jbool (*func_java_util_AbstractMap$2_remove_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractMap$2_removeAll_java_util_Collection_R_boolean 21
typedef jbool (*func_java_util_AbstractMap$2_removeAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractMap$2_retainAll_java_util_Collection_R_boolean 22
typedef jbool (*func_java_util_AbstractMap$2_retainAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_AbstractMap$2_size_R_int 23
typedef jint (*func_java_util_AbstractMap$2_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap$2_toArray_R_Array1_java_lang_Object 24
typedef jobject (*func_java_util_AbstractMap$2_toArray_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_AbstractMap$2_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object 25
typedef jobject (*func_java_util_AbstractMap$2_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_AbstractMap$2(jobject object, jint mark, jint depth);
void clinit_java_util_AbstractMap$2(jcontext ctx);
void init_java_util_AbstractMap$2_java_util_AbstractMap(jcontext ctx, jobject self, jobject param0);
jint M_java_util_AbstractMap$2_size_R_int(jcontext ctx, jobject self);
jbool M_java_util_AbstractMap$2_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_AbstractMap$2_iterator_R_java_util_Iterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
