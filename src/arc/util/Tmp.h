#ifndef HEADER_arc_util_Tmp
#define HEADER_arc_util_Tmp

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Tmp {
	java_lang_Object parent;
} arc_util_Tmp;

extern Class class_arc_util_Tmp;

extern jobject SF_arc_util_Tmp_v1;
extern jobject SF_arc_util_Tmp_v2;
extern jobject SF_arc_util_Tmp_v3;
extern jobject SF_arc_util_Tmp_v4;
extern jobject SF_arc_util_Tmp_v5;
extern jobject SF_arc_util_Tmp_v6;
extern jobject SF_arc_util_Tmp_v31;
extern jobject SF_arc_util_Tmp_v32;
extern jobject SF_arc_util_Tmp_v33;
extern jobject SF_arc_util_Tmp_v34;
extern jobject SF_arc_util_Tmp_r1;
extern jobject SF_arc_util_Tmp_r2;
extern jobject SF_arc_util_Tmp_r3;
extern jobject SF_arc_util_Tmp_cr1;
extern jobject SF_arc_util_Tmp_cr2;
extern jobject SF_arc_util_Tmp_cr3;
extern jobject SF_arc_util_Tmp_t1;
extern jobject SF_arc_util_Tmp_c1;
extern jobject SF_arc_util_Tmp_c2;
extern jobject SF_arc_util_Tmp_c3;
extern jobject SF_arc_util_Tmp_c4;
extern jobject SF_arc_util_Tmp_p1;
extern jobject SF_arc_util_Tmp_p2;
extern jobject SF_arc_util_Tmp_p3;
extern jobject SF_arc_util_Tmp_tr1;
extern jobject SF_arc_util_Tmp_tr2;
extern jobject SF_arc_util_Tmp_m1;
extern jobject SF_arc_util_Tmp_m2;
extern jobject SF_arc_util_Tmp_m3;
extern jobject SF_arc_util_Tmp_m4;
extern jobject SF_arc_util_Tmp_bz2;
extern jobject SF_arc_util_Tmp_bz3;

#define VTABLE_arc_util_Tmp_hashCode_R_int 0
typedef jint (*func_arc_util_Tmp_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Tmp_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_Tmp_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Tmp_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_Tmp_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Tmp_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_Tmp_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Tmp_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_Tmp_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Tmp_finalize 5
typedef void (*func_arc_util_Tmp_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Tmp_notify 6
typedef void (*func_arc_util_Tmp_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Tmp_notifyAll 7
typedef void (*func_arc_util_Tmp_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Tmp_wait 8
typedef void (*func_arc_util_Tmp_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Tmp_wait_long 9
typedef void (*func_arc_util_Tmp_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_Tmp_wait_long_int 10
typedef void (*func_arc_util_Tmp_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_Tmp(jobject object, jint mark, jint depth);
void clinit_arc_util_Tmp(jcontext ctx);
void init_arc_util_Tmp(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
