#ifndef HEADER_rhino_Hashtable
#define HEADER_rhino_Hashtable

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Iterable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_Hashtable {
	java_lang_Object parent;
	jref F_map;
	jref F_first;
	jref F_last;
} rhino_Hashtable;

extern Class class_rhino_Hashtable;

extern jbool SF_rhino_Hashtable_$assertionsDisabled;

#define VTABLE_rhino_Hashtable_hashCode_R_int 0
typedef jint (*func_rhino_Hashtable_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Hashtable_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_Hashtable_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Hashtable_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_Hashtable_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_Hashtable_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_Hashtable_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_Hashtable_toString_R_java_lang_String 4
typedef jobject (*func_rhino_Hashtable_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_Hashtable_finalize 5
typedef void (*func_rhino_Hashtable_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_Hashtable_notify 6
typedef void (*func_rhino_Hashtable_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_Hashtable_notifyAll 7
typedef void (*func_rhino_Hashtable_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_Hashtable_wait 8
typedef void (*func_rhino_Hashtable_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_Hashtable_wait_long 9
typedef void (*func_rhino_Hashtable_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_Hashtable_wait_long_int 10
typedef void (*func_rhino_Hashtable_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_Hashtable_iterator_R_java_util_Iterator 11
typedef jobject (*func_rhino_Hashtable_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_Hashtable_forEach_java_util_function_Consumer 12
typedef void (*func_rhino_Hashtable_forEach_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Hashtable_spliterator_R_java_util_Spliterator 13
typedef jobject (*func_rhino_Hashtable_spliterator_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_rhino_Hashtable_makeDummy_R_rhino_Hashtable$Entry 14
typedef jobject (*func_rhino_Hashtable_makeDummy_R_rhino_Hashtable$Entry)(jcontext ctx, jobject self);
#define VTABLE_rhino_Hashtable_size_R_int 15
typedef jint (*func_rhino_Hashtable_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_Hashtable_put_java_lang_Object_java_lang_Object 16
typedef void (*func_rhino_Hashtable_put_java_lang_Object_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_Hashtable_get_java_lang_Object_R_java_lang_Object 17
typedef jobject (*func_rhino_Hashtable_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Hashtable_has_java_lang_Object_R_boolean 18
typedef jbool (*func_rhino_Hashtable_has_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Hashtable_delete_java_lang_Object_R_java_lang_Object 19
typedef jobject (*func_rhino_Hashtable_delete_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_Hashtable_clear 20
typedef void (*func_rhino_Hashtable_clear)(jcontext ctx, jobject self);

void mark_rhino_Hashtable(jobject object, jint mark, jint depth);
void clinit_rhino_Hashtable(jcontext ctx);
void init_rhino_Hashtable(jcontext ctx, jobject self);
jobject M_rhino_Hashtable_makeDummy_R_rhino_Hashtable$Entry(jcontext ctx, jobject self);
jint M_rhino_Hashtable_size_R_int(jcontext ctx, jobject self);
void M_rhino_Hashtable_put_java_lang_Object_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_rhino_Hashtable_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_rhino_Hashtable_has_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_Hashtable_delete_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_rhino_Hashtable_clear(jcontext ctx, jobject self);
jobject M_rhino_Hashtable_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
jobject SM_rhino_Hashtable_access$000_rhino_Hashtable_R_rhino_Hashtable$Entry(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
