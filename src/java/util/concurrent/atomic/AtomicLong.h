#ifndef HEADER_java_util_concurrent_atomic_AtomicLong
#define HEADER_java_util_concurrent_atomic_AtomicLong

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_concurrent_atomic_AtomicLong {
	java_lang_Object parent;
	volatile jlong F_value;
} java_util_concurrent_atomic_AtomicLong;

extern Class class_java_util_concurrent_atomic_AtomicLong;


#define VTABLE_java_util_concurrent_atomic_AtomicLong_hashCode_R_int 0
typedef jint (*func_java_util_concurrent_atomic_AtomicLong_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_atomic_AtomicLong_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_concurrent_atomic_AtomicLong_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_concurrent_atomic_AtomicLong_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_concurrent_atomic_AtomicLong_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_atomic_AtomicLong_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_concurrent_atomic_AtomicLong_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_atomic_AtomicLong_toString_R_java_lang_String 4
typedef jobject (*func_java_util_concurrent_atomic_AtomicLong_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_atomic_AtomicLong_finalize 5
typedef void (*func_java_util_concurrent_atomic_AtomicLong_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_atomic_AtomicLong_notify 6
typedef void (*func_java_util_concurrent_atomic_AtomicLong_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_atomic_AtomicLong_notifyAll 7
typedef void (*func_java_util_concurrent_atomic_AtomicLong_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_atomic_AtomicLong_wait 8
typedef void (*func_java_util_concurrent_atomic_AtomicLong_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_atomic_AtomicLong_wait_long 9
typedef void (*func_java_util_concurrent_atomic_AtomicLong_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_atomic_AtomicLong_wait_long_int 10
typedef void (*func_java_util_concurrent_atomic_AtomicLong_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_concurrent_atomic_AtomicLong_get_R_long 11
typedef jlong (*func_java_util_concurrent_atomic_AtomicLong_get_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_atomic_AtomicLong_compareAndSet_long_long_R_boolean 12
typedef jbool (*func_java_util_concurrent_atomic_AtomicLong_compareAndSet_long_long_R_boolean)(jcontext ctx, jobject self, jlong param0, jlong param1);
#define VTABLE_java_util_concurrent_atomic_AtomicLong_weakCompareAndSet_long_long_R_boolean 13
typedef jbool (*func_java_util_concurrent_atomic_AtomicLong_weakCompareAndSet_long_long_R_boolean)(jcontext ctx, jobject self, jlong param0, jlong param1);
#define VTABLE_java_util_concurrent_atomic_AtomicLong_set_long 14
typedef void (*func_java_util_concurrent_atomic_AtomicLong_set_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_atomic_AtomicLong_lazySet_long 15
typedef void (*func_java_util_concurrent_atomic_AtomicLong_lazySet_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_atomic_AtomicLong_getAndSet_long_R_long 16
typedef jlong (*func_java_util_concurrent_atomic_AtomicLong_getAndSet_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_concurrent_atomic_AtomicLong_getAndIncrement_R_long 17
typedef jlong (*func_java_util_concurrent_atomic_AtomicLong_getAndIncrement_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_atomic_AtomicLong_getAndDecrement_R_long 18
typedef jlong (*func_java_util_concurrent_atomic_AtomicLong_getAndDecrement_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_atomic_AtomicLong_getAndAdd_int_R_long 19
typedef jlong (*func_java_util_concurrent_atomic_AtomicLong_getAndAdd_int_R_long)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_util_concurrent_atomic_AtomicLong_incrementAndGet_R_long 20
typedef jlong (*func_java_util_concurrent_atomic_AtomicLong_incrementAndGet_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_atomic_AtomicLong_decrementAndGet_R_long 21
typedef jlong (*func_java_util_concurrent_atomic_AtomicLong_decrementAndGet_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_util_concurrent_atomic_AtomicLong_addAndGet_int_R_long 22
typedef jlong (*func_java_util_concurrent_atomic_AtomicLong_addAndGet_int_R_long)(jcontext ctx, jobject self, jint param0);

void mark_java_util_concurrent_atomic_AtomicLong(jobject object, jint mark, jint depth);
void clinit_java_util_concurrent_atomic_AtomicLong(jcontext ctx);
void init_java_util_concurrent_atomic_AtomicLong_long(jcontext ctx, jobject self, jlong param0);
void init_java_util_concurrent_atomic_AtomicLong(jcontext ctx, jobject self);
jlong M_java_util_concurrent_atomic_AtomicLong_get_R_long(jcontext ctx, jobject self);
jbool M_java_util_concurrent_atomic_AtomicLong_compareAndSet_long_long_R_boolean(jcontext ctx, jobject self, jlong param0, jlong param1);
jbool M_java_util_concurrent_atomic_AtomicLong_weakCompareAndSet_long_long_R_boolean(jcontext ctx, jobject self, jlong param0, jlong param1);
void M_java_util_concurrent_atomic_AtomicLong_set_long(jcontext ctx, jobject self, jlong param0);
void M_java_util_concurrent_atomic_AtomicLong_lazySet_long(jcontext ctx, jobject self, jlong param0);
jlong M_java_util_concurrent_atomic_AtomicLong_getAndSet_long_R_long(jcontext ctx, jobject self, jlong param0);
jlong M_java_util_concurrent_atomic_AtomicLong_getAndIncrement_R_long(jcontext ctx, jobject self);
jlong M_java_util_concurrent_atomic_AtomicLong_getAndDecrement_R_long(jcontext ctx, jobject self);
jlong M_java_util_concurrent_atomic_AtomicLong_getAndAdd_int_R_long(jcontext ctx, jobject self, jint param0);
jlong M_java_util_concurrent_atomic_AtomicLong_incrementAndGet_R_long(jcontext ctx, jobject self);
jlong M_java_util_concurrent_atomic_AtomicLong_decrementAndGet_R_long(jcontext ctx, jobject self);
jlong M_java_util_concurrent_atomic_AtomicLong_addAndGet_int_R_long(jcontext ctx, jobject self, jint param0);
jobject M_java_util_concurrent_atomic_AtomicLong_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
