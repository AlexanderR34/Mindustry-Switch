#ifndef HEADER_java_util_HashMap$AbstractMapIterator
#define HEADER_java_util_HashMap$AbstractMapIterator

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_HashMap$AbstractMapIterator {
	java_lang_Object parent;
	jint F_position;
	jint F_expectedModCount;
	jref F_futureEntry;
	jref F_currentEntry;
	jref F_prevEntry;
	jref F_associatedMap;
} java_util_HashMap$AbstractMapIterator;

extern Class class_java_util_HashMap$AbstractMapIterator;


#define VTABLE_java_util_HashMap$AbstractMapIterator_hashCode_R_int 0
typedef jint (*func_java_util_HashMap$AbstractMapIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap$AbstractMapIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_HashMap$AbstractMapIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_HashMap$AbstractMapIterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_HashMap$AbstractMapIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap$AbstractMapIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_HashMap$AbstractMapIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap$AbstractMapIterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_HashMap$AbstractMapIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap$AbstractMapIterator_finalize 5
typedef void (*func_java_util_HashMap$AbstractMapIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap$AbstractMapIterator_notify 6
typedef void (*func_java_util_HashMap$AbstractMapIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap$AbstractMapIterator_notifyAll 7
typedef void (*func_java_util_HashMap$AbstractMapIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap$AbstractMapIterator_wait 8
typedef void (*func_java_util_HashMap$AbstractMapIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap$AbstractMapIterator_wait_long 9
typedef void (*func_java_util_HashMap$AbstractMapIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_HashMap$AbstractMapIterator_wait_long_int 10
typedef void (*func_java_util_HashMap$AbstractMapIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_HashMap$AbstractMapIterator_hasNext_R_boolean 11
typedef jbool (*func_java_util_HashMap$AbstractMapIterator_hasNext_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap$AbstractMapIterator_checkConcurrentMod 12
typedef void (*func_java_util_HashMap$AbstractMapIterator_checkConcurrentMod)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap$AbstractMapIterator_makeNext 13
typedef void (*func_java_util_HashMap$AbstractMapIterator_makeNext)(jcontext ctx, jobject self);
#define VTABLE_java_util_HashMap$AbstractMapIterator_remove 14
typedef void (*func_java_util_HashMap$AbstractMapIterator_remove)(jcontext ctx, jobject self);

void mark_java_util_HashMap$AbstractMapIterator(jobject object, jint mark, jint depth);
void clinit_java_util_HashMap$AbstractMapIterator(jcontext ctx);
void init_java_util_HashMap$AbstractMapIterator_java_util_HashMap(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_HashMap$AbstractMapIterator_hasNext_R_boolean(jcontext ctx, jobject self);
void M_java_util_HashMap$AbstractMapIterator_checkConcurrentMod(jcontext ctx, jobject self);
void M_java_util_HashMap$AbstractMapIterator_makeNext(jcontext ctx, jobject self);
void M_java_util_HashMap$AbstractMapIterator_remove(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
