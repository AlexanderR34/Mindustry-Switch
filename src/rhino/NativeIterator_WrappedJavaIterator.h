#ifndef HEADER_rhino_NativeIterator$WrappedJavaIterator
#define HEADER_rhino_NativeIterator$WrappedJavaIterator

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_NativeIterator$WrappedJavaIterator {
	java_lang_Object parent;
	jref F_iterator;
	jref F_scope;
} rhino_NativeIterator$WrappedJavaIterator;

extern Class class_rhino_NativeIterator$WrappedJavaIterator;


#define VTABLE_rhino_NativeIterator$WrappedJavaIterator_hashCode_R_int 0
typedef jint (*func_rhino_NativeIterator$WrappedJavaIterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeIterator$WrappedJavaIterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_NativeIterator$WrappedJavaIterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_NativeIterator$WrappedJavaIterator_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_NativeIterator$WrappedJavaIterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeIterator$WrappedJavaIterator_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_NativeIterator$WrappedJavaIterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeIterator$WrappedJavaIterator_toString_R_java_lang_String 4
typedef jobject (*func_rhino_NativeIterator$WrappedJavaIterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeIterator$WrappedJavaIterator_finalize 5
typedef void (*func_rhino_NativeIterator$WrappedJavaIterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeIterator$WrappedJavaIterator_notify 6
typedef void (*func_rhino_NativeIterator$WrappedJavaIterator_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeIterator$WrappedJavaIterator_notifyAll 7
typedef void (*func_rhino_NativeIterator$WrappedJavaIterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeIterator$WrappedJavaIterator_wait 8
typedef void (*func_rhino_NativeIterator$WrappedJavaIterator_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeIterator$WrappedJavaIterator_wait_long 9
typedef void (*func_rhino_NativeIterator$WrappedJavaIterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_NativeIterator$WrappedJavaIterator_wait_long_int 10
typedef void (*func_rhino_NativeIterator$WrappedJavaIterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_NativeIterator$WrappedJavaIterator_next_R_java_lang_Object 11
typedef jobject (*func_rhino_NativeIterator$WrappedJavaIterator_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_NativeIterator$WrappedJavaIterator___iterator___boolean_R_java_lang_Object 12
typedef jobject (*func_rhino_NativeIterator$WrappedJavaIterator___iterator___boolean_R_java_lang_Object)(jcontext ctx, jobject self, jbool param0);

void mark_rhino_NativeIterator$WrappedJavaIterator(jobject object, jint mark, jint depth);
void clinit_rhino_NativeIterator$WrappedJavaIterator(jcontext ctx);
void init_rhino_NativeIterator$WrappedJavaIterator_java_util_Iterator_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_rhino_NativeIterator$WrappedJavaIterator_next_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_rhino_NativeIterator$WrappedJavaIterator___iterator___boolean_R_java_lang_Object(jcontext ctx, jobject self, jbool param0);

#ifdef __cplusplus
}
#endif

#endif
