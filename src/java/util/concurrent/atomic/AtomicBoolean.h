#ifndef HEADER_java_util_concurrent_atomic_AtomicBoolean
#define HEADER_java_util_concurrent_atomic_AtomicBoolean

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_atomic_AtomicBoolean {
	java_lang_Object parent;
	volatile jbool F_value;
} java_util_concurrent_atomic_AtomicBoolean;

extern Class class_java_util_concurrent_atomic_AtomicBoolean;


#define VTABLE_java_util_concurrent_atomic_AtomicBoolean_hashCode_R_int 0
typedef jint (*func_java_util_concurrent_atomic_AtomicBoolean_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_atomic_AtomicBoolean_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_concurrent_atomic_AtomicBoolean_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_atomic_AtomicBoolean_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_concurrent_atomic_AtomicBoolean_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_atomic_AtomicBoolean_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_concurrent_atomic_AtomicBoolean_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_atomic_AtomicBoolean_toString_R_java_lang_String 4
typedef jobject (*func_java_util_concurrent_atomic_AtomicBoolean_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_atomic_AtomicBoolean_finalize 5
typedef void (*func_java_util_concurrent_atomic_AtomicBoolean_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_atomic_AtomicBoolean_notify 6
typedef void (*func_java_util_concurrent_atomic_AtomicBoolean_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_atomic_AtomicBoolean_notifyAll 7
typedef void (*func_java_util_concurrent_atomic_AtomicBoolean_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_atomic_AtomicBoolean_wait 8
typedef void (*func_java_util_concurrent_atomic_AtomicBoolean_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_atomic_AtomicBoolean_wait_long 9
typedef void (*func_java_util_concurrent_atomic_AtomicBoolean_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_atomic_AtomicBoolean_wait_long_int 10
typedef void (*func_java_util_concurrent_atomic_AtomicBoolean_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_concurrent_atomic_AtomicBoolean_get_R_boolean 11
typedef jbool (*func_java_util_concurrent_atomic_AtomicBoolean_get_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_atomic_AtomicBoolean_compareAndSet_boolean_boolean_R_boolean 12
typedef jbool (*func_java_util_concurrent_atomic_AtomicBoolean_compareAndSet_boolean_boolean_R_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_java_util_concurrent_atomic_AtomicBoolean_weakCompareAndSet_boolean_boolean_R_boolean 13
typedef jbool (*func_java_util_concurrent_atomic_AtomicBoolean_weakCompareAndSet_boolean_boolean_R_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_java_util_concurrent_atomic_AtomicBoolean_set_boolean 14
typedef void (*func_java_util_concurrent_atomic_AtomicBoolean_set_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_util_concurrent_atomic_AtomicBoolean_lazySet_boolean 15
typedef void (*func_java_util_concurrent_atomic_AtomicBoolean_lazySet_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_util_concurrent_atomic_AtomicBoolean_getAndSet_boolean_R_boolean 16
typedef jbool (*func_java_util_concurrent_atomic_AtomicBoolean_getAndSet_boolean_R_boolean)(jcontext ctx, jobject self, jbool param0);

void mark_java_util_concurrent_atomic_AtomicBoolean(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_atomic_AtomicBoolean(jcontext ctx);
void init_java_util_concurrent_atomic_AtomicBoolean_boolean(jcontext ctx, jobject self, jbool param0);
void init_java_util_concurrent_atomic_AtomicBoolean(jcontext ctx, jobject self);
jbool M_java_util_concurrent_atomic_AtomicBoolean_get_R_boolean(jcontext ctx, jobject self);
jbool M_java_util_concurrent_atomic_AtomicBoolean_compareAndSet_boolean_boolean_R_boolean(jcontext ctx, jobject self, jbool param0, jbool param1);
jbool M_java_util_concurrent_atomic_AtomicBoolean_weakCompareAndSet_boolean_boolean_R_boolean(jcontext ctx, jobject self, jbool param0, jbool param1);
void M_java_util_concurrent_atomic_AtomicBoolean_set_boolean(jcontext ctx, jobject self, jbool param0);
void M_java_util_concurrent_atomic_AtomicBoolean_lazySet_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_java_util_concurrent_atomic_AtomicBoolean_getAndSet_boolean_R_boolean(jcontext ctx, jobject self, jbool param0);
jobject M_java_util_concurrent_atomic_AtomicBoolean_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
