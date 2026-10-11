#ifndef HEADER_arc_math_geom_Ray
#define HEADER_arc_math_geom_Ray

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_geom_Ray {
	java_lang_Object parent;
	jref F_origin;
	jref F_direction;
} arc_math_geom_Ray;

extern Class class_arc_math_geom_Ray;


#define VTABLE_arc_math_geom_Ray_hashCode_R_int 0
typedef jint (*func_arc_math_geom_Ray_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Ray_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_geom_Ray_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Ray_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_geom_Ray_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Ray_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_geom_Ray_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Ray_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_geom_Ray_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Ray_finalize 5
typedef void (*func_arc_math_geom_Ray_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Ray_notify 6
typedef void (*func_arc_math_geom_Ray_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Ray_notifyAll 7
typedef void (*func_arc_math_geom_Ray_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Ray_wait 8
typedef void (*func_arc_math_geom_Ray_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Ray_wait_long 9
typedef void (*func_arc_math_geom_Ray_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_geom_Ray_wait_long_int 10
typedef void (*func_arc_math_geom_Ray_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_math_geom_Ray_cpy_R_arc_math_geom_Ray 11
typedef jobject (*func_arc_math_geom_Ray_cpy_R_arc_math_geom_Ray)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Ray_getEndPoint_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3 12
typedef jobject (*func_arc_math_geom_Ray_getEndPoint_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_math_geom_Ray_set_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Ray 13
typedef jobject (*func_arc_math_geom_Ray_set_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Ray)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_math_geom_Ray_set_float_float_float_float_float_float_R_arc_math_geom_Ray 14
typedef jobject (*func_arc_math_geom_Ray_set_float_float_float_float_float_float_R_arc_math_geom_Ray)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
#define VTABLE_arc_math_geom_Ray_set_arc_math_geom_Ray_R_arc_math_geom_Ray 15
typedef jobject (*func_arc_math_geom_Ray_set_arc_math_geom_Ray_R_arc_math_geom_Ray)(jcontext ctx, jobject self, jobject param0);

void mark_arc_math_geom_Ray(jobject object, jint mark, jint depth);
void clinit_arc_math_geom_Ray(jcontext ctx);
void init_arc_math_geom_Ray(jcontext ctx, jobject self);
void init_arc_math_geom_Ray_arc_math_geom_Vec3_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_math_geom_Ray_cpy_R_arc_math_geom_Ray(jcontext ctx, jobject self);
jobject M_arc_math_geom_Ray_getEndPoint_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jfloat param1);
jobject M_arc_math_geom_Ray_set_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Ray(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_math_geom_Ray_set_float_float_float_float_float_float_R_arc_math_geom_Ray(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5);
jobject M_arc_math_geom_Ray_set_arc_math_geom_Ray_R_arc_math_geom_Ray(jcontext ctx, jobject self, jobject param0);
jobject M_arc_math_geom_Ray_toString_R_java_lang_String(jcontext ctx, jobject self);
jbool M_arc_math_geom_Ray_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_arc_math_geom_Ray_hashCode_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
