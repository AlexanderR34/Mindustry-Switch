#ifndef HEADER_arc_math_geom_Point2
#define HEADER_arc_math_geom_Point2

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_geom_Point2 {
	java_lang_Object parent;
	jint F_x;
	jint F_y;
} arc_math_geom_Point2;

extern Class class_arc_math_geom_Point2;


#define VTABLE_arc_math_geom_Point2_hashCode_R_int 0
typedef jint (*func_arc_math_geom_Point2_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Point2_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_geom_Point2_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Point2_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_geom_Point2_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Point2_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_geom_Point2_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Point2_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_geom_Point2_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Point2_finalize 5
typedef void (*func_arc_math_geom_Point2_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Point2_notify 6
typedef void (*func_arc_math_geom_Point2_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Point2_notifyAll 7
typedef void (*func_arc_math_geom_Point2_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Point2_wait 8
typedef void (*func_arc_math_geom_Point2_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Point2_wait_long 9
typedef void (*func_arc_math_geom_Point2_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_geom_Point2_wait_long_int 10
typedef void (*func_arc_math_geom_Point2_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_geom_Point2_pack_R_int 11
typedef jint (*func_arc_math_geom_Point2_pack_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Point2_set_arc_math_geom_Point2_R_arc_math_geom_Point2 12
typedef jobject (*func_arc_math_geom_Point2_set_arc_math_geom_Point2_R_arc_math_geom_Point2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2 13
typedef jobject (*func_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_math_geom_Point2_dst2_arc_math_geom_Point2_R_float 14
typedef jfloat (*func_arc_math_geom_Point2_dst2_arc_math_geom_Point2_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Point2_dst2_int_int_R_float 15
typedef jfloat (*func_arc_math_geom_Point2_dst2_int_int_R_float)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_math_geom_Point2_dst_arc_math_geom_Point2_R_float 16
typedef jfloat (*func_arc_math_geom_Point2_dst_arc_math_geom_Point2_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Point2_dst_int_int_R_float 17
typedef jfloat (*func_arc_math_geom_Point2_dst_int_int_R_float)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_math_geom_Point2_add_arc_math_geom_Point2_R_arc_math_geom_Point2 18
typedef jobject (*func_arc_math_geom_Point2_add_arc_math_geom_Point2_R_arc_math_geom_Point2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Point2_add_int_int_R_arc_math_geom_Point2 19
typedef jobject (*func_arc_math_geom_Point2_add_int_int_R_arc_math_geom_Point2)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_math_geom_Point2_sub_arc_math_geom_Point2_R_arc_math_geom_Point2 20
typedef jobject (*func_arc_math_geom_Point2_sub_arc_math_geom_Point2_R_arc_math_geom_Point2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Point2_sub_int_int_R_arc_math_geom_Point2 21
typedef jobject (*func_arc_math_geom_Point2_sub_int_int_R_arc_math_geom_Point2)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_math_geom_Point2_cpy_R_arc_math_geom_Point2 22
typedef jobject (*func_arc_math_geom_Point2_cpy_R_arc_math_geom_Point2)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Point2_rotate_int_R_arc_math_geom_Point2 23
typedef jobject (*func_arc_math_geom_Point2_rotate_int_R_arc_math_geom_Point2)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_math_geom_Point2_equals_int_int_R_boolean 24
typedef jbool (*func_arc_math_geom_Point2_equals_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);

void mark_arc_math_geom_Point2(jobject object, jint mark, jint depth);
void clinit_arc_math_geom_Point2(jcontext ctx);
void init_arc_math_geom_Point2(jcontext ctx, jobject self);
void init_arc_math_geom_Point2_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void init_arc_math_geom_Point2_arc_math_geom_Point2(jcontext ctx, jobject self, jobject param0);
jobject SM_arc_math_geom_Point2_unpack_int_R_arc_math_geom_Point2(jcontext ctx, jint param0);
jint SM_arc_math_geom_Point2_pack_int_int_R_int(jcontext ctx, jint param0, jint param1);
jshort SM_arc_math_geom_Point2_x_int_R_short(jcontext ctx, jint param0);
jshort SM_arc_math_geom_Point2_y_int_R_short(jcontext ctx, jint param0);
jint M_arc_math_geom_Point2_pack_R_int(jcontext ctx, jobject self);
jobject M_arc_math_geom_Point2_set_arc_math_geom_Point2_R_arc_math_geom_Point2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2(jcontext ctx, jobject self, jint param0, jint param1);
jfloat M_arc_math_geom_Point2_dst2_arc_math_geom_Point2_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Point2_dst2_int_int_R_float(jcontext ctx, jobject self, jint param0, jint param1);
jfloat M_arc_math_geom_Point2_dst_arc_math_geom_Point2_R_float(jcontext ctx, jobject self, jobject param0);
jfloat M_arc_math_geom_Point2_dst_int_int_R_float(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_arc_math_geom_Point2_add_arc_math_geom_Point2_R_arc_math_geom_Point2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Point2_add_int_int_R_arc_math_geom_Point2(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_arc_math_geom_Point2_sub_arc_math_geom_Point2_R_arc_math_geom_Point2(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Point2_sub_int_int_R_arc_math_geom_Point2(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_arc_math_geom_Point2_cpy_R_arc_math_geom_Point2(jcontext ctx, jobject self);
jobject M_arc_math_geom_Point2_rotate_int_R_arc_math_geom_Point2(jcontext ctx, jobject self, jint param0);
jbool M_arc_math_geom_Point2_equals_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jbool SM_arc_math_geom_Point2_equals_int_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jint param3);
jbool M_arc_math_geom_Point2_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_arc_math_geom_Point2_hashCode_R_int(jcontext ctx, jobject self);
jobject M_arc_math_geom_Point2_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
