#ifndef HEADER_arc_util_pooling_Pool
#define HEADER_arc_util_pooling_Pool

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_pooling_Pool {
	java_lang_Object parent;
	jint F_max;
	jref F_freeObjects;
	jint F_peak;
} arc_util_pooling_Pool;

extern Class class_arc_util_pooling_Pool;


#define VTABLE_arc_util_pooling_Pool_hashCode_R_int 0
typedef jint (*func_arc_util_pooling_Pool_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pool_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_pooling_Pool_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_pooling_Pool_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_pooling_Pool_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pool_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_pooling_Pool_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pool_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_pooling_Pool_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pool_finalize 5
typedef void (*func_arc_util_pooling_Pool_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pool_notify 6
typedef void (*func_arc_util_pooling_Pool_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pool_notifyAll 7
typedef void (*func_arc_util_pooling_Pool_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pool_wait 8
typedef void (*func_arc_util_pooling_Pool_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pool_wait_long 9
typedef void (*func_arc_util_pooling_Pool_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_pooling_Pool_wait_long_int 10
typedef void (*func_arc_util_pooling_Pool_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_pooling_Pool_newObject_R_java_lang_Object 11
typedef jobject (*func_arc_util_pooling_Pool_newObject_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pool_obtain_R_java_lang_Object 12
typedef jobject (*func_arc_util_pooling_Pool_obtain_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pool_free_java_lang_Object 13
typedef void (*func_arc_util_pooling_Pool_free_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_pooling_Pool_reset_java_lang_Object 14
typedef void (*func_arc_util_pooling_Pool_reset_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_pooling_Pool_freeAll_arc_struct_Seq 15
typedef void (*func_arc_util_pooling_Pool_freeAll_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_pooling_Pool_clear 16
typedef void (*func_arc_util_pooling_Pool_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pool_getFree_R_int 17
typedef jint (*func_arc_util_pooling_Pool_getFree_R_int)(jcontext ctx, jobject self);

void mark_arc_util_pooling_Pool(jobject object, jint mark, jint depth);
void clinit_arc_util_pooling_Pool(jcontext ctx);
void init_arc_util_pooling_Pool(jcontext ctx, jobject self);
void init_arc_util_pooling_Pool_int(jcontext ctx, jobject self, jint param0);
void init_arc_util_pooling_Pool_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_arc_util_pooling_Pool_obtain_R_java_lang_Object(jcontext ctx, jobject self);
void M_arc_util_pooling_Pool_free_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_arc_util_pooling_Pool_reset_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_arc_util_pooling_Pool_freeAll_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_arc_util_pooling_Pool_clear(jcontext ctx, jobject self);
jint M_arc_util_pooling_Pool_getFree_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
