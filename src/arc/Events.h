#ifndef HEADER_arc_Events
#define HEADER_arc_Events

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_Events {
	java_lang_Object parent;
} arc_Events;

extern Class class_arc_Events;

extern jobject SF_arc_Events_events;

#define VTABLE_arc_Events_hashCode_R_int 0
typedef jint (*func_arc_Events_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_Events_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_Events_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Events_clone_R_java_lang_Object 2
typedef jobject (*func_arc_Events_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_Events_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_Events_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_Events_toString_R_java_lang_String 4
typedef jobject (*func_arc_Events_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_Events_finalize 5
typedef void (*func_arc_Events_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_Events_notify 6
typedef void (*func_arc_Events_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_Events_notifyAll 7
typedef void (*func_arc_Events_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_Events_wait 8
typedef void (*func_arc_Events_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_Events_wait_long 9
typedef void (*func_arc_Events_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_Events_wait_long_int 10
typedef void (*func_arc_Events_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_Events(jobject object, jint mark, jint depth);
void clinit_arc_Events(jcontext ctx);
void init_arc_Events(jcontext ctx, jobject self);
void SM_arc_Events_on_java_lang_Class_arc_func_Cons(jcontext ctx, jobject param0, jobject param1);
void SM_arc_Events_run_java_lang_Object_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1);
jbool SM_arc_Events_remove_java_lang_Class_arc_func_Cons_R_boolean(jcontext ctx, jobject param0, jobject param1);
void SM_arc_Events_fire_java_lang_Enum(jcontext ctx, jobject param0);
void SM_arc_Events_fire_java_lang_Object(jcontext ctx, jobject param0);
void SM_arc_Events_fire_java_lang_Class_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
void SM_arc_Events_clear(jcontext ctx);
jobject SM_arc_Events_lambda$remove$0_R_arc_struct_Seq(jcontext ctx);
void SM_arc_Events_lambda$run$1_java_lang_Runnable_java_lang_Object(jcontext ctx, jobject param0, jobject param1);
jobject SM_arc_Events_lambda$run$0_R_arc_struct_Seq(jcontext ctx);
jobject SM_arc_Events_lambda$on$0_R_arc_struct_Seq(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
