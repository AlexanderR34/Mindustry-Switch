#ifndef HEADER_arc_util_pooling_Pools
#define HEADER_arc_util_pooling_Pools

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_pooling_Pools {
	java_lang_Object parent;
} arc_util_pooling_Pools;

extern Class class_arc_util_pooling_Pools;

extern jobject SF_arc_util_pooling_Pools_typePools;

#define VTABLE_arc_util_pooling_Pools_hashCode_R_int 0
typedef jint (*func_arc_util_pooling_Pools_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pools_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_pooling_Pools_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_pooling_Pools_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_pooling_Pools_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pools_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_pooling_Pools_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pools_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_pooling_Pools_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pools_finalize 5
typedef void (*func_arc_util_pooling_Pools_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pools_notify 6
typedef void (*func_arc_util_pooling_Pools_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pools_notifyAll 7
typedef void (*func_arc_util_pooling_Pools_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pools_wait 8
typedef void (*func_arc_util_pooling_Pools_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_pooling_Pools_wait_long 9
typedef void (*func_arc_util_pooling_Pools_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_pooling_Pools_wait_long_int 10
typedef void (*func_arc_util_pooling_Pools_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_pooling_Pools(jobject object, jint mark, jint depth);
void clinit_arc_util_pooling_Pools(jcontext ctx);
void init_arc_util_pooling_Pools(jcontext ctx, jobject self);
jobject SM_arc_util_pooling_Pools_get_java_lang_Class_arc_func_Prov_int_R_arc_util_pooling_Pool(jcontext ctx, jobject param0, jobject param1, jint param2);
jobject SM_arc_util_pooling_Pools_get_java_lang_Class_arc_func_Prov_R_arc_util_pooling_Pool(jcontext ctx, jobject param0, jobject param1);
void SM_arc_util_pooling_Pools_set_java_lang_Class_arc_util_pooling_Pool(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
void SM_arc_util_pooling_Pools_free_java_lang_Object(jcontext ctx, jobject param0);
void SM_arc_util_pooling_Pools_freeAll_arc_struct_Seq(jcontext ctx, jobject param0);
void SM_arc_util_pooling_Pools_freeAll_arc_struct_Seq_boolean(jcontext ctx, jobject param0, jbool param1);

#ifdef __cplusplus
}
#endif

#endif
