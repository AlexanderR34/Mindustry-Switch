#ifndef HEADER_java_util_Hashtable$HashEnumIterator
#define HEADER_java_util_Hashtable$HashEnumIterator

#include "Clearwing.h"
#include "java/util/Hashtable_HashIterator.h"
#include "java/util/Enumeration.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Hashtable$HashEnumIterator {
	java_util_Hashtable$HashIterator parent;
	jbool F_isEnumeration;
	jint F_start;
	jref F_entry;
	jref F_this$0;
} java_util_Hashtable$HashEnumIterator;

extern Class class_java_util_Hashtable$HashEnumIterator;


#define VTABLE_java_util_Hashtable$HashEnumIterator_hashCode_R_int 0
typedef jint (*func_java_util_Hashtable$HashEnumIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$HashEnumIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Hashtable$HashEnumIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Hashtable$HashEnumIterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Hashtable$HashEnumIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$HashEnumIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Hashtable$HashEnumIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$HashEnumIterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Hashtable$HashEnumIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$HashEnumIterator_finalize 5
typedef void (*func_java_util_Hashtable$HashEnumIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$HashEnumIterator_notify 6
typedef void (*func_java_util_Hashtable$HashEnumIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$HashEnumIterator_notifyAll 7
typedef void (*func_java_util_Hashtable$HashEnumIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$HashEnumIterator_wait 8
typedef void (*func_java_util_Hashtable$HashEnumIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$HashEnumIterator_wait_long 9
typedef void (*func_java_util_Hashtable$HashEnumIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Hashtable$HashEnumIterator_wait_long_int 10
typedef void (*func_java_util_Hashtable$HashEnumIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Hashtable$HashEnumIterator_hasNext_R_boolean 11
typedef jbool (*func_java_util_Hashtable$HashEnumIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$HashEnumIterator_next_R_java_lang_Object 12
typedef jobject (*func_java_util_Hashtable$HashEnumIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$HashEnumIterator_remove 13
typedef void (*func_java_util_Hashtable$HashEnumIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$HashEnumIterator_forEachRemaining_java_util_function_Consumer 14
typedef void (*func_java_util_Hashtable$HashEnumIterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Hashtable$HashEnumIterator_hasMoreElements_R_boolean 15
typedef jbool (*func_java_util_Hashtable$HashEnumIterator_hasMoreElements_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$HashEnumIterator_nextElement_R_java_lang_Object 16
typedef jobject (*func_java_util_Hashtable$HashEnumIterator_nextElement_R_java_lang_Object)(jcontext ctx, jobject self);

void mark_java_util_Hashtable$HashEnumIterator(jobject object, jint mark, jint depth);
void clinit_java_util_Hashtable$HashEnumIterator(jcontext ctx);
void init_java_util_Hashtable$HashEnumIterator_java_util_Hashtable_java_util_MapEntry$Type(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_java_util_Hashtable$HashEnumIterator_java_util_Hashtable_java_util_MapEntry$Type_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
jbool M_java_util_Hashtable$HashEnumIterator_hasMoreElements_R_boolean(jcontext ctx, jobject self);
jbool M_java_util_Hashtable$HashEnumIterator_hasNext_R_boolean(jcontext ctx, jobject self);
jobject M_java_util_Hashtable$HashEnumIterator_next_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_java_util_Hashtable$HashEnumIterator_nextElement_R_java_lang_Object(jcontext ctx, jobject self);
void M_java_util_Hashtable$HashEnumIterator_remove(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
