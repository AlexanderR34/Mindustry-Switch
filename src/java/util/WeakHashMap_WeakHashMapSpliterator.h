#ifndef HEADER_java_util_WeakHashMap$WeakHashMapSpliterator
#define HEADER_java_util_WeakHashMap$WeakHashMapSpliterator

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_WeakHashMap$WeakHashMapSpliterator {
	java_lang_Object parent;
	jref F_map;
	jref F_current;
	jint F_index;
	jint F_fence;
	jint F_est;
	jint F_expectedModCount;
} java_util_WeakHashMap$WeakHashMapSpliterator;

extern Class class_java_util_WeakHashMap$WeakHashMapSpliterator;


#define VTABLE_java_util_WeakHashMap$WeakHashMapSpliterator_hashCode_R_int 0
typedef jint (*func_java_util_WeakHashMap$WeakHashMapSpliterator_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$WeakHashMapSpliterator_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_WeakHashMap$WeakHashMapSpliterator_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_WeakHashMap$WeakHashMapSpliterator_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_WeakHashMap$WeakHashMapSpliterator_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$WeakHashMapSpliterator_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_WeakHashMap$WeakHashMapSpliterator_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$WeakHashMapSpliterator_toString_R_java_lang_String 4
typedef jobject (*func_java_util_WeakHashMap$WeakHashMapSpliterator_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$WeakHashMapSpliterator_finalize 5
typedef void (*func_java_util_WeakHashMap$WeakHashMapSpliterator_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$WeakHashMapSpliterator_notify 6
typedef void (*func_java_util_WeakHashMap$WeakHashMapSpliterator_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$WeakHashMapSpliterator_notifyAll 7
typedef void (*func_java_util_WeakHashMap$WeakHashMapSpliterator_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$WeakHashMapSpliterator_wait 8
typedef void (*func_java_util_WeakHashMap$WeakHashMapSpliterator_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$WeakHashMapSpliterator_wait_long 9
typedef void (*func_java_util_WeakHashMap$WeakHashMapSpliterator_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_WeakHashMap$WeakHashMapSpliterator_wait_long_int 10
typedef void (*func_java_util_WeakHashMap$WeakHashMapSpliterator_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_WeakHashMap$WeakHashMapSpliterator_getFence_R_int 11
typedef jint (*func_java_util_WeakHashMap$WeakHashMapSpliterator_getFence_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_WeakHashMap$WeakHashMapSpliterator_estimateSize_R_long 12
typedef jlong (*func_java_util_WeakHashMap$WeakHashMapSpliterator_estimateSize_R_long)(jcontext ctx, jobject self);

void mark_java_util_WeakHashMap$WeakHashMapSpliterator(jobject object, jint mark, jint depth);
void clinit_java_util_WeakHashMap$WeakHashMapSpliterator(jcontext ctx);
void init_java_util_WeakHashMap$WeakHashMapSpliterator_java_util_WeakHashMap_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
jint M_java_util_WeakHashMap$WeakHashMapSpliterator_getFence_R_int(jcontext ctx, jobject self);
jlong M_java_util_WeakHashMap$WeakHashMapSpliterator_estimateSize_R_long(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
