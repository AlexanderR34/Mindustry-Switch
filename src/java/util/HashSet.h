#ifndef HEADER_java_util_HashSet
#define HEADER_java_util_HashSet

#include "Clearwing.h"
#include "java/util/AbstractSet.h"
#include "java/util/Set.h"
#include "java/lang/Cloneable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_HashSet {
	java_util_AbstractSet parent;
	jref F_backingMap;
} java_util_HashSet;

extern Class class_java_util_HashSet;


#define VTABLE_java_util_HashSet_hashCode_R_int 0
typedef jint (*func_java_util_HashSet_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashSet_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_HashSet_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_HashSet_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_HashSet_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashSet_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_HashSet_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashSet_toString_R_java_lang_String 4
typedef jobject (*func_java_util_HashSet_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashSet_finalize 5
typedef void (*func_java_util_HashSet_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashSet_notify 6
typedef void (*func_java_util_HashSet_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashSet_notifyAll 7
typedef void (*func_java_util_HashSet_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashSet_wait 8
typedef void (*func_java_util_HashSet_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashSet_wait_long 9
typedef void (*func_java_util_HashSet_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_HashSet_wait_long_int 10
typedef void (*func_java_util_HashSet_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_HashSet_iterator_R_java_util_Iterator 11
typedef jobject (*func_java_util_HashSet_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashSet_forEach_java_util_function_Consumer 12
typedef void (*func_java_util_HashSet_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_HashSet_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_java_util_HashSet_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashSet_add_java_lang_Object_R_boolean 14
typedef jbool (*func_java_util_HashSet_add_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_HashSet_addAll_java_util_Collection_R_boolean 15
typedef jbool (*func_java_util_HashSet_addAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_HashSet_clear 16
typedef void (*func_java_util_HashSet_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashSet_contains_java_lang_Object_R_boolean 17
typedef jbool (*func_java_util_HashSet_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_HashSet_containsAll_java_util_Collection_R_boolean 18
typedef jbool (*func_java_util_HashSet_containsAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_HashSet_isEmpty_R_boolean 19
typedef jbool (*func_java_util_HashSet_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashSet_remove_java_lang_Object_R_boolean 20
typedef jbool (*func_java_util_HashSet_remove_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_HashSet_removeAll_java_util_Collection_R_boolean 21
typedef jbool (*func_java_util_HashSet_removeAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_HashSet_retainAll_java_util_Collection_R_boolean 22
typedef jbool (*func_java_util_HashSet_retainAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_HashSet_size_R_int 23
typedef jint (*func_java_util_HashSet_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashSet_toArray_R_Array1_java_lang_Object 24
typedef jobject (*func_java_util_HashSet_toArray_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashSet_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object 25
typedef jobject (*func_java_util_HashSet_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_HashSet_createBackingMap_int_float_R_java_util_HashMap 26
typedef jobject (*func_java_util_HashSet_createBackingMap_int_float_R_java_util_HashMap)(jcontext ctx, jobject self, jint param0, jfloat param1);

void mark_java_util_HashSet(jobject object, jint mark, jint depth);
void clinit_java_util_HashSet(jcontext ctx);
void init_java_util_HashSet(jcontext ctx, jobject self);
void init_java_util_HashSet_int(jcontext ctx, jobject self, jint param0);
void init_java_util_HashSet_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void init_java_util_HashSet_java_util_Collection(jcontext ctx, jobject self, jobject param0);
void init_java_util_HashSet_java_util_HashMap(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_HashSet_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_java_util_HashSet_clear(jcontext ctx, jobject self);
jbool M_java_util_HashSet_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_HashSet_isEmpty_R_boolean(jcontext ctx, jobject self);
jobject M_java_util_HashSet_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
jbool M_java_util_HashSet_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_util_HashSet_size_R_int(jcontext ctx, jobject self);
jobject M_java_util_HashSet_createBackingMap_int_float_R_java_util_HashMap(jcontext ctx, jobject self, jint param0, jfloat param1);
jobject M_java_util_HashSet_clone_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
