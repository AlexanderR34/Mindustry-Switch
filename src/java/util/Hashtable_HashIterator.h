#ifndef HEADER_java_util_Hashtable$HashIterator
#define HEADER_java_util_Hashtable$HashIterator

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/Iterator.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Hashtable$HashIterator {
	java_lang_Object parent;
	jint F_position;
	jint F_expectedModCount;
	jref F_type;
	jref F_lastEntry;
	jint F_lastPosition;
	jbool F_canRemove;
	jref F_this$0;
} java_util_Hashtable$HashIterator;

extern Class class_java_util_Hashtable$HashIterator;


#define VTABLE_java_util_Hashtable$HashIterator_hashCode_R_int 0
typedef jint (*func_java_util_Hashtable$HashIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$HashIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Hashtable$HashIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Hashtable$HashIterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Hashtable$HashIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$HashIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Hashtable$HashIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$HashIterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Hashtable$HashIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$HashIterator_finalize 5
typedef void (*func_java_util_Hashtable$HashIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$HashIterator_notify 6
typedef void (*func_java_util_Hashtable$HashIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$HashIterator_notifyAll 7
typedef void (*func_java_util_Hashtable$HashIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$HashIterator_wait 8
typedef void (*func_java_util_Hashtable$HashIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$HashIterator_wait_long 9
typedef void (*func_java_util_Hashtable$HashIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Hashtable$HashIterator_wait_long_int 10
typedef void (*func_java_util_Hashtable$HashIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Hashtable$HashIterator_hasNext_R_boolean 11
typedef jbool (*func_java_util_Hashtable$HashIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$HashIterator_next_R_java_lang_Object 12
typedef jobject (*func_java_util_Hashtable$HashIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$HashIterator_remove 13
typedef void (*func_java_util_Hashtable$HashIterator_remove)(jcontext ctx, jobject self);
#define VTABLE_java_util_Hashtable$HashIterator_forEachRemaining_java_util_function_Consumer 14
typedef void (*func_java_util_Hashtable$HashIterator_forEachRemaining_java_util_function_Consumer)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_Hashtable$HashIterator(jobject object, jint mark, jint depth);
void clinit_java_util_Hashtable$HashIterator(jcontext ctx);
void init_java_util_Hashtable$HashIterator_java_util_Hashtable_java_util_MapEntry$Type(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_java_util_Hashtable$HashIterator_hasNext_R_boolean(jcontext ctx, jobject self);
jobject M_java_util_Hashtable$HashIterator_next_R_java_lang_Object(jcontext ctx, jobject self);
void M_java_util_Hashtable$HashIterator_remove(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
