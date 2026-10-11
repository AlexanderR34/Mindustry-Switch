#ifndef HEADER_arc_input_GestureDetector$1
#define HEADER_arc_input_GestureDetector$1

#include "Clearwing.h"
#include "arc/util/Timer_Task.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_input_GestureDetector$1 {
	arc_util_Timer$Task parent;
	jref F_this$0;
} arc_input_GestureDetector$1;

extern Class class_arc_input_GestureDetector$1;


#define VTABLE_arc_input_GestureDetector$1_hashCode_R_int 0
typedef jint (*func_arc_input_GestureDetector$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_input_GestureDetector$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_input_GestureDetector$1_clone_R_java_lang_Object 2
typedef jobject (*func_arc_input_GestureDetector$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector$1_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_input_GestureDetector$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector$1_toString_R_java_lang_String 4
typedef jobject (*func_arc_input_GestureDetector$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector$1_finalize 5
typedef void (*func_arc_input_GestureDetector$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector$1_notify 6
typedef void (*func_arc_input_GestureDetector$1_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector$1_notifyAll 7
typedef void (*func_arc_input_GestureDetector$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector$1_wait 8
typedef void (*func_arc_input_GestureDetector$1_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector$1_wait_long 9
typedef void (*func_arc_input_GestureDetector$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_input_GestureDetector$1_wait_long_int 10
typedef void (*func_arc_input_GestureDetector$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_input_GestureDetector$1_run 11
typedef void (*func_arc_input_GestureDetector$1_run)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector$1_cancel 12
typedef void (*func_arc_input_GestureDetector$1_cancel)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector$1_isScheduled_R_boolean 13
typedef jbool (*func_arc_input_GestureDetector$1_isScheduled_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_input_GestureDetector$1_getExecuteTimeMillis_R_long 14
typedef jlong (*func_arc_input_GestureDetector$1_getExecuteTimeMillis_R_long)(jcontext ctx, jobject self);

void mark_arc_input_GestureDetector$1(jobject object, jint mark, jint depth);
void clinit_arc_input_GestureDetector$1(jcontext ctx);
void init_arc_input_GestureDetector$1_arc_input_GestureDetector(jcontext ctx, jobject self, jobject param0);
void M_arc_input_GestureDetector$1_run(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
