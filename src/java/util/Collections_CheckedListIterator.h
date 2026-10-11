#ifndef HEADER_java_util_Collections$CheckedListIterator
#define HEADER_java_util_Collections$CheckedListIterator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/ListIterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Collections$CheckedListIterator {
	java_lang_Object parent;
	jref F_i;
	jref F_type;
} java_util_Collections$CheckedListIterator;

extern Class class_java_util_Collections$CheckedListIterator;


#define VTABLE_java_util_Collections$CheckedListIterator_hashCode_R_int 0
typedef jint (*func_java_util_Collections$CheckedListIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$CheckedListIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Collections$CheckedListIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$CheckedListIterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Collections$CheckedListIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$CheckedListIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Collections$CheckedListIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$CheckedListIterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Collections$CheckedListIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$CheckedListIterator_finalize 5
typedef void (*func_java_util_Collections$CheckedListIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$CheckedListIterator_notify 6
typedef void (*func_java_util_Collections$CheckedListIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$CheckedListIterator_notifyAll 7
typedef void (*func_java_util_Collections$CheckedListIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$CheckedListIterator_wait 8
typedef void (*func_java_util_Collections$CheckedListIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$CheckedListIterator_wait_long 9
typedef void (*func_java_util_Collections$CheckedListIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Collections$CheckedListIterator_wait_long_int 10
typedef void (*func_java_util_Collections$CheckedListIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Collections$CheckedListIterator_hasNext_R_boolean 11
typedef jbool (*func_java_util_Collections$CheckedListIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$CheckedListIterator_next_R_java_lang_Object 12
typedef jobject (*func_java_util_Collections$CheckedListIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$CheckedListIterator_remove 13
typedef void (*func_java_util_Collections$CheckedListIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$CheckedListIterator_forEachRemaining_java_util_function_Consumer 14
typedef void (*func_java_util_Collections$CheckedListIterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$CheckedListIterator_add_java_lang_Object 15
typedef void (*func_java_util_Collections$CheckedListIterator_add_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Collections$CheckedListIterator_hasPrevious_R_boolean 16
typedef jbool (*func_java_util_Collections$CheckedListIterator_hasPrevious_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$CheckedListIterator_nextIndex_R_int 17
typedef jint (*func_java_util_Collections$CheckedListIterator_nextIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$CheckedListIterator_previous_R_java_lang_Object 18
typedef jobject (*func_java_util_Collections$CheckedListIterator_previous_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$CheckedListIterator_previousIndex_R_int 19
typedef jint (*func_java_util_Collections$CheckedListIterator_previousIndex_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Collections$CheckedListIterator_set_java_lang_Object 20
typedef void (*func_java_util_Collections$CheckedListIterator_set_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_Collections$CheckedListIterator(jobject object, jint mark, jint depth);
void clinit_java_util_Collections$CheckedListIterator(jcontext ctx);
void init_java_util_Collections$CheckedListIterator_java_util_ListIterator_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_java_util_Collections$CheckedListIterator_hasNext_R_boolean(jcontext ctx, jobject self);
jobject M_java_util_Collections$CheckedListIterator_next_R_java_lang_Object(jcontext ctx, jobject self);
void M_java_util_Collections$CheckedListIterator_remove(jcontext ctx, jobject self);
jbool M_java_util_Collections$CheckedListIterator_hasPrevious_R_boolean(jcontext ctx, jobject self);
jobject M_java_util_Collections$CheckedListIterator_previous_R_java_lang_Object(jcontext ctx, jobject self);
jint M_java_util_Collections$CheckedListIterator_nextIndex_R_int(jcontext ctx, jobject self);
jint M_java_util_Collections$CheckedListIterator_previousIndex_R_int(jcontext ctx, jobject self);
void M_java_util_Collections$CheckedListIterator_set_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_java_util_Collections$CheckedListIterator_add_java_lang_Object(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
