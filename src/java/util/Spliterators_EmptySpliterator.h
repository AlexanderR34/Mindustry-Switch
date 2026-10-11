#ifndef HEADER_java_util_Spliterators$EmptySpliterator
#define HEADER_java_util_Spliterators$EmptySpliterator

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Spliterators$EmptySpliterator {
	java_lang_Object parent;
} java_util_Spliterators$EmptySpliterator;

extern Class class_java_util_Spliterators$EmptySpliterator;


#define VTABLE_java_util_Spliterators$EmptySpliterator_hashCode_R_int 0
typedef jint (*func_java_util_Spliterators$EmptySpliterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Spliterators$EmptySpliterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$EmptySpliterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Spliterators$EmptySpliterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Spliterators$EmptySpliterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Spliterators$EmptySpliterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator_finalize 5
typedef void (*func_java_util_Spliterators$EmptySpliterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator_notify 6
typedef void (*func_java_util_Spliterators$EmptySpliterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator_notifyAll 7
typedef void (*func_java_util_Spliterators$EmptySpliterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator_wait 8
typedef void (*func_java_util_Spliterators$EmptySpliterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator_wait_long 9
typedef void (*func_java_util_Spliterators$EmptySpliterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Spliterators$EmptySpliterator_wait_long_int 10
typedef void (*func_java_util_Spliterators$EmptySpliterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Spliterators$EmptySpliterator_trySplit_R_java_util_Spliterator 11
typedef jobject (*func_java_util_Spliterators$EmptySpliterator_trySplit_R_java_util_Spliterator)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator_tryAdvance_java_lang_Object_R_boolean 12
typedef jbool (*func_java_util_Spliterators$EmptySpliterator_tryAdvance_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$EmptySpliterator_forEachRemaining_java_lang_Object 13
typedef void (*func_java_util_Spliterators$EmptySpliterator_forEachRemaining_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Spliterators$EmptySpliterator_estimateSize_R_long 14
typedef jlong (*func_java_util_Spliterators$EmptySpliterator_estimateSize_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_Spliterators$EmptySpliterator_characteristics_R_int 15
typedef jint (*func_java_util_Spliterators$EmptySpliterator_characteristics_R_int)(jcontext ctx, jobject self);

void mark_java_util_Spliterators$EmptySpliterator(jobject object, jint mark, jint depth);
void clinit_java_util_Spliterators$EmptySpliterator(jcontext ctx);
void init_java_util_Spliterators$EmptySpliterator(jcontext ctx, jobject self);
jobject M_java_util_Spliterators$EmptySpliterator_trySplit_R_java_util_Spliterator(jcontext ctx, jobject self);
jbool M_java_util_Spliterators$EmptySpliterator_tryAdvance_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_java_util_Spliterators$EmptySpliterator_forEachRemaining_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jlong M_java_util_Spliterators$EmptySpliterator_estimateSize_R_long(jcontext ctx, jobject self);
jint M_java_util_Spliterators$EmptySpliterator_characteristics_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
