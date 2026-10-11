#ifndef HEADER_java_util_Collections$SetFromMap
#define HEADER_java_util_Collections$SetFromMap

#include "Clearwing.h"
#include "java/util/AbstractSet.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Collections$SetFromMap {
	java_util_AbstractSet parent;
	jref F_m;
	jref F_backingSet;
} java_util_Collections$SetFromMap;

extern Class class_java_util_Collections$SetFromMap;

extern jlong SF_java_util_Collections$SetFromMap_serialVersionUID;

#define VTABLE_java_util_Collections$SetFromMap_hashCode_R_int 0
typedef jint (*func_java_util_Collections$SetFromMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$SetFromMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Collections$SetFromMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$SetFromMap_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Collections$SetFromMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$SetFromMap_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Collections$SetFromMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$SetFromMap_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Collections$SetFromMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$SetFromMap_finalize 5
typedef void (*func_java_util_Collections$SetFromMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$SetFromMap_notify 6
typedef void (*func_java_util_Collections$SetFromMap_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$SetFromMap_notifyAll 7
typedef void (*func_java_util_Collections$SetFromMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$SetFromMap_wait 8
typedef void (*func_java_util_Collections$SetFromMap_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$SetFromMap_wait_long 9
typedef void (*func_java_util_Collections$SetFromMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Collections$SetFromMap_wait_long_int 10
typedef void (*func_java_util_Collections$SetFromMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Collections$SetFromMap_iterator_R_java_util_Iterator 11
typedef jobject (*func_java_util_Collections$SetFromMap_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$SetFromMap_forEach_java_util_function_Consumer 12
typedef void (*func_java_util_Collections$SetFromMap_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$SetFromMap_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_java_util_Collections$SetFromMap_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$SetFromMap_add_java_lang_Object_R_boolean 14
typedef jbool (*func_java_util_Collections$SetFromMap_add_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$SetFromMap_addAll_java_util_Collection_R_boolean 15
typedef jbool (*func_java_util_Collections$SetFromMap_addAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$SetFromMap_clear 16
typedef void (*func_java_util_Collections$SetFromMap_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$SetFromMap_contains_java_lang_Object_R_boolean 17
typedef jbool (*func_java_util_Collections$SetFromMap_contains_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$SetFromMap_containsAll_java_util_Collection_R_boolean 18
typedef jbool (*func_java_util_Collections$SetFromMap_containsAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$SetFromMap_isEmpty_R_boolean 19
typedef jbool (*func_java_util_Collections$SetFromMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$SetFromMap_remove_java_lang_Object_R_boolean 20
typedef jbool (*func_java_util_Collections$SetFromMap_remove_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$SetFromMap_removeAll_java_util_Collection_R_boolean 21
typedef jbool (*func_java_util_Collections$SetFromMap_removeAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$SetFromMap_retainAll_java_util_Collection_R_boolean 22
typedef jbool (*func_java_util_Collections$SetFromMap_retainAll_java_util_Collection_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$SetFromMap_size_R_int 23
typedef jint (*func_java_util_Collections$SetFromMap_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$SetFromMap_toArray_R_Array1_java_lang_Object 24
typedef jobject (*func_java_util_Collections$SetFromMap_toArray_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$SetFromMap_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object 25
typedef jobject (*func_java_util_Collections$SetFromMap_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_Collections$SetFromMap(jobject object, jint mark, jint depth);
void clinit_java_util_Collections$SetFromMap(jcontext ctx);
void init_java_util_Collections$SetFromMap_java_util_Map(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Collections$SetFromMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_util_Collections$SetFromMap_hashCode_R_int(jcontext ctx, jobject self);
jbool M_java_util_Collections$SetFromMap_add_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_java_util_Collections$SetFromMap_clear(jcontext ctx, jobject self);
jobject M_java_util_Collections$SetFromMap_toString_R_java_lang_String(jcontext ctx, jobject self);
jbool M_java_util_Collections$SetFromMap_contains_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Collections$SetFromMap_containsAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Collections$SetFromMap_isEmpty_R_boolean(jcontext ctx, jobject self);
jbool M_java_util_Collections$SetFromMap_remove_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_Collections$SetFromMap_retainAll_java_util_Collection_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Collections$SetFromMap_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_Collections$SetFromMap_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_Collections$SetFromMap_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
jint M_java_util_Collections$SetFromMap_size_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
