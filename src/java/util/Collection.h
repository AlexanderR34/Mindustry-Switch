#ifndef HEADER_java_util_Collection
#define HEADER_java_util_Collection

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Collection {
	java_lang_Object parent;
} java_util_Collection;

extern Class class_java_util_Collection;


#define INDEX_java_util_Collection_add_java_lang_Object_R_boolean 0
typedef jbool (*func_java_util_Collection_add_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Collection_addAll_java_util_Collection_R_boolean 1
typedef jbool (*func_java_util_Collection_addAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Collection_clear 2
typedef void (*func_java_util_Collection_clear)(jcontext ctx, jobject self);
#define INDEX_java_util_Collection_contains_java_lang_Object_R_boolean 3
typedef jbool (*func_java_util_Collection_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Collection_containsAll_java_util_Collection_R_boolean 4
typedef jbool (*func_java_util_Collection_containsAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Collection_equals_java_lang_Object_R_boolean 5
typedef jbool (*func_java_util_Collection_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Collection_hashCode_R_int 6
typedef jint (*func_java_util_Collection_hashCode_R_int)(jcontext ctx, jobject self);
#define INDEX_java_util_Collection_isEmpty_R_boolean 7
typedef jbool (*func_java_util_Collection_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define INDEX_java_util_Collection_iterator_R_java_util_Iterator 8
typedef jobject (*func_java_util_Collection_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define INDEX_java_util_Collection_remove_java_lang_Object_R_boolean 9
typedef jbool (*func_java_util_Collection_remove_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Collection_removeAll_java_util_Collection_R_boolean 10
typedef jbool (*func_java_util_Collection_removeAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Collection_retainAll_java_util_Collection_R_boolean 11
typedef jbool (*func_java_util_Collection_retainAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Collection_size_R_int 12
typedef jint (*func_java_util_Collection_size_R_int)(jcontext ctx, jobject self);
#define INDEX_java_util_Collection_toArray_R_Array1_java_lang_Object 13
typedef jobject (*func_java_util_Collection_toArray_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define INDEX_java_util_Collection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object 14
typedef jobject (*func_java_util_Collection_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_util_Collection_spliterator_R_java_util_Spliterator 15
typedef jobject (*func_java_util_Collection_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);

void mark_java_util_Collection(jobject object, jint mark, jint depth);
void clinit_java_util_Collection(jcontext ctx);
jobject M_java_util_Collection_spliterator_R_java_util_Spliterator(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
