#ifndef HEADER_mindustry_gen_NodeIndex
#define HEADER_mindustry_gen_NodeIndex

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_NodeIndex {
	java_lang_Object parent;
} mindustry_gen_NodeIndex;

extern Class class_mindustry_gen_NodeIndex;

extern jint SF_mindustry_gen_NodeIndex_bitMaskCluster;
extern jint SF_mindustry_gen_NodeIndex_bitMaskDir;
extern jint SF_mindustry_gen_NodeIndex_bitMaskPortal;

#define VTABLE_mindustry_gen_NodeIndex_hashCode_R_int 0
typedef jint (*func_mindustry_gen_NodeIndex_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_NodeIndex_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_NodeIndex_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_NodeIndex_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_NodeIndex_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_NodeIndex_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_NodeIndex_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_NodeIndex_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_NodeIndex_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_NodeIndex_finalize 5
typedef void (*func_mindustry_gen_NodeIndex_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_NodeIndex_notify 6
typedef void (*func_mindustry_gen_NodeIndex_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_NodeIndex_notifyAll 7
typedef void (*func_mindustry_gen_NodeIndex_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_NodeIndex_wait 8
typedef void (*func_mindustry_gen_NodeIndex_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_NodeIndex_wait_long 9
typedef void (*func_mindustry_gen_NodeIndex_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_NodeIndex_wait_long_int 10
typedef void (*func_mindustry_gen_NodeIndex_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_gen_NodeIndex(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_NodeIndex(jcontext ctx);
void init_mindustry_gen_NodeIndex(jcontext ctx, jobject self);
jint SM_mindustry_gen_NodeIndex_cluster_int_R_int(jcontext ctx, jint param0);
jint SM_mindustry_gen_NodeIndex_cluster_int_int_R_int(jcontext ctx, jint param0, jint param1);
jint SM_mindustry_gen_NodeIndex_dir_int_R_int(jcontext ctx, jint param0);
jint SM_mindustry_gen_NodeIndex_dir_int_int_R_int(jcontext ctx, jint param0, jint param1);
jint SM_mindustry_gen_NodeIndex_portal_int_R_int(jcontext ctx, jint param0);
jint SM_mindustry_gen_NodeIndex_portal_int_int_R_int(jcontext ctx, jint param0, jint param1);
jint SM_mindustry_gen_NodeIndex_get_int_int_int_R_int(jcontext ctx, jint param0, jint param1, jint param2);

#ifdef __cplusplus
}
#endif

#endif
