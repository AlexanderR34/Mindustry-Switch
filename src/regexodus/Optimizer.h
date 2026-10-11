#ifndef HEADER_regexodus_Optimizer
#define HEADER_regexodus_Optimizer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_Optimizer {
	java_lang_Object parent;
	jref F_atom;
	jint F_distance;
} regexodus_Optimizer;

extern Class class_regexodus_Optimizer;

extern jint SF_regexodus_Optimizer_THRESHOLD;

#define VTABLE_regexodus_Optimizer_hashCode_R_int 0
typedef jint (*func_regexodus_Optimizer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Optimizer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_Optimizer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Optimizer_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_Optimizer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Optimizer_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_Optimizer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Optimizer_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_Optimizer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Optimizer_finalize 5
typedef void (*func_regexodus_Optimizer_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Optimizer_notify 6
typedef void (*func_regexodus_Optimizer_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Optimizer_notifyAll 7
typedef void (*func_regexodus_Optimizer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Optimizer_wait 8
typedef void (*func_regexodus_Optimizer_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_Optimizer_wait_long 9
typedef void (*func_regexodus_Optimizer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_Optimizer_wait_long_int 10
typedef void (*func_regexodus_Optimizer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_regexodus_Optimizer_makeFirst_regexodus_Term_R_regexodus_Term 11
typedef jobject (*func_regexodus_Optimizer_makeFirst_regexodus_Term_R_regexodus_Term)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_Optimizer_makeBacktrack_regexodus_Term_R_regexodus_Term 12
typedef jobject (*func_regexodus_Optimizer_makeBacktrack_regexodus_Term_R_regexodus_Term)(jcontext ctx, jobject self, jobject param0);

void mark_regexodus_Optimizer(jobject object, jint mark, jint depth);
void clinit_regexodus_Optimizer(jcontext ctx);
jobject SM_regexodus_Optimizer_find_regexodus_Term_R_regexodus_Optimizer(jcontext ctx, jobject param0);
jobject SM_regexodus_Optimizer_find_regexodus_Term_int_R_regexodus_Optimizer(jcontext ctx, jobject param0, jint param1);
void init_regexodus_Optimizer_regexodus_Term_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_regexodus_Optimizer_makeFirst_regexodus_Term_R_regexodus_Term(jcontext ctx, jobject self, jobject param0);
jobject M_regexodus_Optimizer_makeBacktrack_regexodus_Term_R_regexodus_Term(jcontext ctx, jobject self, jobject param0);
jbool M_regexodus_Optimizer_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_regexodus_Optimizer_hashCode_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
