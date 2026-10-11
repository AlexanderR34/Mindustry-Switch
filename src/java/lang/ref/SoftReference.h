#ifndef HEADER_java_lang_ref_SoftReference
#define HEADER_java_lang_ref_SoftReference

#include "Clearwing.h"
#include "java/lang/ref/WeakReference.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_ref_SoftReference {
	java_lang_ref_WeakReference parent;
} java_lang_ref_SoftReference;

extern Class class_java_lang_ref_SoftReference;


#define VTABLE_java_lang_ref_SoftReference_hashCode_R_int 0
typedef jint (*func_java_lang_ref_SoftReference_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_SoftReference_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_ref_SoftReference_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ref_SoftReference_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_ref_SoftReference_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_SoftReference_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_ref_SoftReference_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_SoftReference_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_ref_SoftReference_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_SoftReference_finalize 5
typedef void (*func_java_lang_ref_SoftReference_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_SoftReference_notify 6
typedef void (*func_java_lang_ref_SoftReference_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_SoftReference_notifyAll 7
typedef void (*func_java_lang_ref_SoftReference_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_SoftReference_wait 8
typedef void (*func_java_lang_ref_SoftReference_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_SoftReference_wait_long 9
typedef void (*func_java_lang_ref_SoftReference_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_ref_SoftReference_wait_long_int 10
typedef void (*func_java_lang_ref_SoftReference_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_ref_SoftReference_clear 11
typedef void (*func_java_lang_ref_SoftReference_clear)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_SoftReference_get_R_java_lang_Object 12
typedef jobject (*func_java_lang_ref_SoftReference_get_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ref_SoftReference_refersTo_java_lang_Object_R_boolean 13
typedef jbool (*func_java_lang_ref_SoftReference_refersTo_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ref_SoftReference_init_java_lang_Object 14
typedef void (*func_java_lang_ref_SoftReference_init_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_java_lang_ref_SoftReference(jobject object, jint mark, jint depth);
void clinit_java_lang_ref_SoftReference(jcontext ctx);
void init_java_lang_ref_SoftReference_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void init_java_lang_ref_SoftReference_java_lang_Object_java_lang_ref_ReferenceQueue(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
