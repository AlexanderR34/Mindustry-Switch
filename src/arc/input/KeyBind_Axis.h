#ifndef HEADER_arc_input_KeyBind$Axis
#define HEADER_arc_input_KeyBind$Axis

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/input/KeyBind_KeybindValue.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_input_KeyBind$Axis {
	java_lang_Object parent;
	jref F_min;
	jref F_max;
	jref F_key;
} arc_input_KeyBind$Axis;

extern Class class_arc_input_KeyBind$Axis;


#define VTABLE_arc_input_KeyBind$Axis_hashCode_R_int 0
typedef jint (*func_arc_input_KeyBind$Axis_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyBind$Axis_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_input_KeyBind$Axis_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_input_KeyBind$Axis_clone_R_java_lang_Object 2
typedef jobject (*func_arc_input_KeyBind$Axis_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyBind$Axis_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_input_KeyBind$Axis_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyBind$Axis_toString_R_java_lang_String 4
typedef jobject (*func_arc_input_KeyBind$Axis_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyBind$Axis_finalize 5
typedef void (*func_arc_input_KeyBind$Axis_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyBind$Axis_notify 6
typedef void (*func_arc_input_KeyBind$Axis_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyBind$Axis_notifyAll 7
typedef void (*func_arc_input_KeyBind$Axis_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyBind$Axis_wait 8
typedef void (*func_arc_input_KeyBind$Axis_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_input_KeyBind$Axis_wait_long 9
typedef void (*func_arc_input_KeyBind$Axis_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_input_KeyBind$Axis_wait_long_int 10
typedef void (*func_arc_input_KeyBind$Axis_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_input_KeyBind$Axis(jobject object, jint mark, jint depth);
void clinit_arc_input_KeyBind$Axis(jcontext ctx);
void init_arc_input_KeyBind$Axis_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0);
void init_arc_input_KeyBind$Axis_arc_input_KeyCode_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_arc_input_KeyBind$Axis_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
