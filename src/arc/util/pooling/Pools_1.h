#ifndef HEADER_arc_util_pooling_Pools$1
#define HEADER_arc_util_pooling_Pools$1

#include "Clearwing.h"
#include "arc/util/pooling/Pool.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_pooling_Pools$1 {
	arc_util_pooling_Pool parent;
	jref F_val$supplier;
} arc_util_pooling_Pools$1;

extern Class class_arc_util_pooling_Pools$1;


#define VTABLE_arc_util_pooling_Pools$1_hashCode_R_int 0
typedef jint (*func_arc_util_pooling_Pools$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pools$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_pooling_Pools$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_pooling_Pools$1_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_pooling_Pools$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pools$1_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_pooling_Pools$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pools$1_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_pooling_Pools$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pools$1_finalize 5
typedef void (*func_arc_util_pooling_Pools$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pools$1_notify 6
typedef void (*func_arc_util_pooling_Pools$1_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pools$1_notifyAll 7
typedef void (*func_arc_util_pooling_Pools$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pools$1_wait 8
typedef void (*func_arc_util_pooling_Pools$1_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pools$1_wait_long 9
typedef void (*func_arc_util_pooling_Pools$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_pooling_Pools$1_wait_long_int 10
typedef void (*func_arc_util_pooling_Pools$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_pooling_Pools$1_newObject_R_java_lang_Object 11
typedef jobject (*func_arc_util_pooling_Pools$1_newObject_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pools$1_obtain_R_java_lang_Object 12
typedef jobject (*func_arc_util_pooling_Pools$1_obtain_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pools$1_free_java_lang_Object 13
typedef void (*func_arc_util_pooling_Pools$1_free_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_pooling_Pools$1_reset_java_lang_Object 14
typedef void (*func_arc_util_pooling_Pools$1_reset_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_pooling_Pools$1_freeAll_arc_struct_Seq 15
typedef void (*func_arc_util_pooling_Pools$1_freeAll_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_pooling_Pools$1_clear 16
typedef void (*func_arc_util_pooling_Pools$1_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pools$1_getFree_R_int 17
typedef jint (*func_arc_util_pooling_Pools$1_getFree_R_int)(jcontext ctx, jobject self);

void mark_arc_util_pooling_Pools$1(jobject object, jint mark, jint depth);
void clinit_arc_util_pooling_Pools$1(jcontext ctx);
void init_arc_util_pooling_Pools$1_int_int_arc_func_Prov(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
jobject M_arc_util_pooling_Pools$1_newObject_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
