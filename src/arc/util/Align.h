#ifndef HEADER_arc_util_Align
#define HEADER_arc_util_Align

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_Align {
	java_lang_Object parent;
} arc_util_Align;

extern Class class_arc_util_Align;

extern jint SF_arc_util_Align_center;
extern jint SF_arc_util_Align_top;
extern jint SF_arc_util_Align_bottom;
extern jint SF_arc_util_Align_left;
extern jint SF_arc_util_Align_right;
extern jint SF_arc_util_Align_topLeft;
extern jint SF_arc_util_Align_topRight;
extern jint SF_arc_util_Align_bottomLeft;
extern jint SF_arc_util_Align_bottomRight;

#define VTABLE_arc_util_Align_hashCode_R_int 0
typedef jint (*func_arc_util_Align_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Align_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_Align_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_Align_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_Align_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Align_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_Align_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Align_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_Align_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Align_finalize 5
typedef void (*func_arc_util_Align_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Align_notify 6
typedef void (*func_arc_util_Align_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Align_notifyAll 7
typedef void (*func_arc_util_Align_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Align_wait 8
typedef void (*func_arc_util_Align_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_Align_wait_long 9
typedef void (*func_arc_util_Align_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_Align_wait_long_int 10
typedef void (*func_arc_util_Align_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_Align(jobject object, jint mark, jint depth);
void clinit_arc_util_Align(jcontext ctx);
void init_arc_util_Align(jcontext ctx, jobject self);
jbool SM_arc_util_Align_isLeft_int_R_boolean(jcontext ctx, jint param0);
jbool SM_arc_util_Align_isRight_int_R_boolean(jcontext ctx, jint param0);
jbool SM_arc_util_Align_isTop_int_R_boolean(jcontext ctx, jint param0);
jbool SM_arc_util_Align_isBottom_int_R_boolean(jcontext ctx, jint param0);
jbool SM_arc_util_Align_isCenterVertical_int_R_boolean(jcontext ctx, jint param0);
jbool SM_arc_util_Align_isCenterHorizontal_int_R_boolean(jcontext ctx, jint param0);
jobject SM_arc_util_Align_toString_int_R_java_lang_String(jcontext ctx, jint param0);

#ifdef __cplusplus
}
#endif

#endif
