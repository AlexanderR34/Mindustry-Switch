#ifndef HEADER_arc_util_ScreenRecorder
#define HEADER_arc_util_ScreenRecorder

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_ScreenRecorder {
	java_lang_Object parent;
} arc_util_ScreenRecorder;

extern Class class_arc_util_ScreenRecorder;

extern jobject SF_arc_util_ScreenRecorder_record;

#define VTABLE_arc_util_ScreenRecorder_hashCode_R_int 0
typedef jint (*func_arc_util_ScreenRecorder_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ScreenRecorder_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_ScreenRecorder_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_ScreenRecorder_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_ScreenRecorder_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ScreenRecorder_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_ScreenRecorder_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ScreenRecorder_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_ScreenRecorder_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ScreenRecorder_finalize 5
typedef void (*func_arc_util_ScreenRecorder_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ScreenRecorder_notify 6
typedef void (*func_arc_util_ScreenRecorder_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ScreenRecorder_notifyAll 7
typedef void (*func_arc_util_ScreenRecorder_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ScreenRecorder_wait 8
typedef void (*func_arc_util_ScreenRecorder_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_ScreenRecorder_wait_long 9
typedef void (*func_arc_util_ScreenRecorder_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_ScreenRecorder_wait_long_int 10
typedef void (*func_arc_util_ScreenRecorder_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_ScreenRecorder(jobject object, jint mark, jint depth);
void clinit_arc_util_ScreenRecorder(jcontext ctx);
void init_arc_util_ScreenRecorder(jcontext ctx, jobject self);
void SM_arc_util_ScreenRecorder_record(jcontext ctx);
void SM_arc_util_ScreenRecorder_lambda$static$0_java_lang_reflect_Method_java_lang_Object_Array1_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
