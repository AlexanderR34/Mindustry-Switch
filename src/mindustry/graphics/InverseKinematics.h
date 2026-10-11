#ifndef HEADER_mindustry_graphics_InverseKinematics
#define HEADER_mindustry_graphics_InverseKinematics

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_InverseKinematics {
	java_lang_Object parent;
} mindustry_graphics_InverseKinematics;

extern Class class_mindustry_graphics_InverseKinematics;

extern jobject SF_mindustry_graphics_InverseKinematics_mat1;
extern jobject SF_mindustry_graphics_InverseKinematics_mat2;
extern jobject SF_mindustry_graphics_InverseKinematics_temp;
extern jobject SF_mindustry_graphics_InverseKinematics_temp2;
extern jobject SF_mindustry_graphics_InverseKinematics_at1;

#define VTABLE_mindustry_graphics_InverseKinematics_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_InverseKinematics_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_InverseKinematics_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_InverseKinematics_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_InverseKinematics_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_InverseKinematics_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_InverseKinematics_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_InverseKinematics_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_InverseKinematics_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_InverseKinematics_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_InverseKinematics_finalize 5
typedef void (*func_mindustry_graphics_InverseKinematics_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_InverseKinematics_notify 6
typedef void (*func_mindustry_graphics_InverseKinematics_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_InverseKinematics_notifyAll 7
typedef void (*func_mindustry_graphics_InverseKinematics_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_InverseKinematics_wait 8
typedef void (*func_mindustry_graphics_InverseKinematics_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_InverseKinematics_wait_long 9
typedef void (*func_mindustry_graphics_InverseKinematics_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_InverseKinematics_wait_long_int 10
typedef void (*func_mindustry_graphics_InverseKinematics_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_graphics_InverseKinematics(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_InverseKinematics(jcontext ctx);
void init_mindustry_graphics_InverseKinematics(jcontext ctx, jobject self);
jbool SM_mindustry_graphics_InverseKinematics_solve_float_float_arc_math_geom_Vec2_boolean_arc_math_geom_Vec2_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jobject param2, jbool param3, jobject param4);
jbool SM_mindustry_graphics_InverseKinematics_solve_float_float_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jobject param2, jobject param3, jobject param4);

#ifdef __cplusplus
}
#endif

#endif
