#ifndef HEADER_rhino_ObjArray
#define HEADER_rhino_ObjArray

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ObjArray {
	java_lang_Object parent;
	jint F_size;
	jbool F_sealed;
	jref F_f0;
	jref F_f1;
	jref F_f2;
	jref F_f3;
	jref F_f4;
	jref F_data;
} rhino_ObjArray;

extern Class class_rhino_ObjArray;

extern jint SF_rhino_ObjArray_FIELDS_STORE_SIZE;

#define VTABLE_rhino_ObjArray_hashCode_R_int 0
typedef jint (*func_rhino_ObjArray_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjArray_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ObjArray_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ObjArray_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ObjArray_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjArray_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ObjArray_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjArray_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ObjArray_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjArray_finalize 5
typedef void (*func_rhino_ObjArray_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjArray_notify 6
typedef void (*func_rhino_ObjArray_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjArray_notifyAll 7
typedef void (*func_rhino_ObjArray_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjArray_wait 8
typedef void (*func_rhino_ObjArray_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjArray_wait_long 9
typedef void (*func_rhino_ObjArray_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ObjArray_wait_long_int 10
typedef void (*func_rhino_ObjArray_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ObjArray_isSealed_R_boolean 11
typedef jbool (*func_rhino_ObjArray_isSealed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjArray_seal 12
typedef void (*func_rhino_ObjArray_seal)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjArray_isEmpty_R_boolean 13
typedef jbool (*func_rhino_ObjArray_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjArray_size_R_int 14
typedef jint (*func_rhino_ObjArray_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjArray_setSize_int 15
typedef void (*func_rhino_ObjArray_setSize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ObjArray_get_int_R_java_lang_Object 16
typedef jobject (*func_rhino_ObjArray_get_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ObjArray_set_int_java_lang_Object 17
typedef void (*func_rhino_ObjArray_set_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_ObjArray_getImpl_int_R_java_lang_Object 18
typedef jobject (*func_rhino_ObjArray_getImpl_int_R_java_lang_Object)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ObjArray_setImpl_int_java_lang_Object 19
typedef void (*func_rhino_ObjArray_setImpl_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_ObjArray_indexOf_java_lang_Object_R_int 20
typedef jint (*func_rhino_ObjArray_indexOf_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ObjArray_lastIndexOf_java_lang_Object_R_int 21
typedef jint (*func_rhino_ObjArray_lastIndexOf_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ObjArray_peek_R_java_lang_Object 22
typedef jobject (*func_rhino_ObjArray_peek_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjArray_pop_R_java_lang_Object 23
typedef jobject (*func_rhino_ObjArray_pop_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjArray_push_java_lang_Object 24
typedef void (*func_rhino_ObjArray_push_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ObjArray_add_java_lang_Object 25
typedef void (*func_rhino_ObjArray_add_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ObjArray_add_int_java_lang_Object 26
typedef void (*func_rhino_ObjArray_add_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_rhino_ObjArray_remove_int 27
typedef void (*func_rhino_ObjArray_remove_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_rhino_ObjArray_clear 28
typedef void (*func_rhino_ObjArray_clear)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjArray_toArray_R_Array1_java_lang_Object 29
typedef jobject (*func_rhino_ObjArray_toArray_R_Array1_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ObjArray_toArray_Array1_java_lang_Object 30
typedef void (*func_rhino_ObjArray_toArray_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ObjArray_toArray_Array1_java_lang_Object_int 31
typedef void (*func_rhino_ObjArray_toArray_Array1_java_lang_Object_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_rhino_ObjArray_ensureCapacity_int 32
typedef void (*func_rhino_ObjArray_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);

void mark_rhino_ObjArray(jobject object, jint mark, jint depth);
void clinit_rhino_ObjArray(jcontext ctx);
void init_rhino_ObjArray(jcontext ctx, jobject self);
jbool M_rhino_ObjArray_isSealed_R_boolean(jcontext ctx, jobject self);
void M_rhino_ObjArray_seal(jcontext ctx, jobject self);
jbool M_rhino_ObjArray_isEmpty_R_boolean(jcontext ctx, jobject self);
jint M_rhino_ObjArray_size_R_int(jcontext ctx, jobject self);
void M_rhino_ObjArray_setSize_int(jcontext ctx, jobject self, jint param0);
jobject M_rhino_ObjArray_get_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
void M_rhino_ObjArray_set_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_rhino_ObjArray_getImpl_int_R_java_lang_Object(jcontext ctx, jobject self, jint param0);
void M_rhino_ObjArray_setImpl_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
jint M_rhino_ObjArray_indexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jint M_rhino_ObjArray_lastIndexOf_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_ObjArray_peek_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_rhino_ObjArray_pop_R_java_lang_Object(jcontext ctx, jobject self);
void M_rhino_ObjArray_push_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_rhino_ObjArray_add_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_rhino_ObjArray_add_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
void M_rhino_ObjArray_remove_int(jcontext ctx, jobject self, jint param0);
void M_rhino_ObjArray_clear(jcontext ctx, jobject self);
jobject M_rhino_ObjArray_toArray_R_Array1_java_lang_Object(jcontext ctx, jobject self);
void M_rhino_ObjArray_toArray_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_rhino_ObjArray_toArray_Array1_java_lang_Object_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_rhino_ObjArray_ensureCapacity_int(jcontext ctx, jobject self, jint param0);
jobject SM_rhino_ObjArray_onInvalidIndex_int_int_R_java_lang_RuntimeException(jcontext ctx, jint param0, jint param1);
jobject SM_rhino_ObjArray_onEmptyStackTopRead_R_java_lang_RuntimeException(jcontext ctx);
jobject SM_rhino_ObjArray_onSeledMutation_R_java_lang_RuntimeException(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
