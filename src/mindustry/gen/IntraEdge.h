#ifndef HEADER_mindustry_gen_IntraEdge
#define HEADER_mindustry_gen_IntraEdge

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_IntraEdge {
	java_lang_Object parent;
} mindustry_gen_IntraEdge;

extern Class class_mindustry_gen_IntraEdge;

extern jlong SF_mindustry_gen_IntraEdge_bitMaskDir;
extern jlong SF_mindustry_gen_IntraEdge_bitMaskPortal;
extern jlong SF_mindustry_gen_IntraEdge_bitMaskCost;

#define VTABLE_mindustry_gen_IntraEdge_hashCode_R_int 0
typedef jint (*func_mindustry_gen_IntraEdge_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_IntraEdge_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_IntraEdge_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_IntraEdge_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_IntraEdge_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_IntraEdge_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_IntraEdge_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_IntraEdge_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_IntraEdge_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_IntraEdge_finalize 5
typedef void (*func_mindustry_gen_IntraEdge_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_IntraEdge_notify 6
typedef void (*func_mindustry_gen_IntraEdge_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_IntraEdge_notifyAll 7
typedef void (*func_mindustry_gen_IntraEdge_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_IntraEdge_wait 8
typedef void (*func_mindustry_gen_IntraEdge_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_IntraEdge_wait_long 9
typedef void (*func_mindustry_gen_IntraEdge_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_IntraEdge_wait_long_int 10
typedef void (*func_mindustry_gen_IntraEdge_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_gen_IntraEdge(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_IntraEdge(jcontext ctx);
void init_mindustry_gen_IntraEdge(jcontext ctx, jobject self);
jint SM_mindustry_gen_IntraEdge_dir_long_R_int(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_IntraEdge_dir_long_int_R_long(jcontext ctx, jlong param0, jint param1);
jint SM_mindustry_gen_IntraEdge_portal_long_R_int(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_IntraEdge_portal_long_int_R_long(jcontext ctx, jlong param0, jint param1);
jfloat SM_mindustry_gen_IntraEdge_cost_long_R_float(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_IntraEdge_cost_long_float_R_long(jcontext ctx, jlong param0, jfloat param1);
jlong SM_mindustry_gen_IntraEdge_get_int_int_float_R_long(jcontext ctx, jint param0, jint param1, jfloat param2);

#ifdef __cplusplus
}
#endif

#endif
