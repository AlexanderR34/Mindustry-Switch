#ifndef HEADER_arc_util_Bench
#define HEADER_arc_util_Bench

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Bench {
	java_lang_Object parent;
} arc_util_Bench;

extern Class class_arc_util_Bench;

extern jlong SF_arc_util_Bench_totalStart;
extern jobject SF_arc_util_Bench_lastName;
extern jobject SF_arc_util_Bench_times;
extern jlong SF_arc_util_Bench_last;

#define VTABLE_arc_util_Bench_hashCode_R_int 0
typedef jint (*func_arc_util_Bench_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Bench_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_Bench_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Bench_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_Bench_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Bench_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_Bench_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Bench_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_Bench_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Bench_finalize 5
typedef void (*func_arc_util_Bench_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Bench_notify 6
typedef void (*func_arc_util_Bench_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Bench_notifyAll 7
typedef void (*func_arc_util_Bench_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Bench_wait 8
typedef void (*func_arc_util_Bench_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Bench_wait_long 9
typedef void (*func_arc_util_Bench_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_Bench_wait_long_int 10
typedef void (*func_arc_util_Bench_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_Bench(jobject object, jint mark, jint depth);
void clinit_arc_util_Bench(jcontext ctx);
void init_arc_util_Bench(jcontext ctx, jobject self);
void SM_arc_util_Bench_begin_java_lang_String(jcontext ctx, jobject param0);
void SM_arc_util_Bench_end(jcontext ctx);
void SM_arc_util_Bench_endi(jcontext ctx);
void SM_arc_util_Bench_lambda$end$0_long_java_lang_String_java_lang_Long(jcontext ctx, jlong param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
