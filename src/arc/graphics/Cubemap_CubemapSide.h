#ifndef HEADER_arc_graphics_Cubemap$CubemapSide
#define HEADER_arc_graphics_Cubemap$CubemapSide

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_Cubemap$CubemapSide {
	java_lang_Enum parent;
	jint F_index;
	jint F_glEnum;
	jref F_up;
	jref F_direction;
} arc_graphics_Cubemap$CubemapSide;

extern Class class_arc_graphics_Cubemap$CubemapSide;

extern jobject SF_arc_graphics_Cubemap$CubemapSide_positiveX;
extern jobject SF_arc_graphics_Cubemap$CubemapSide_negativeX;
extern jobject SF_arc_graphics_Cubemap$CubemapSide_positiveY;
extern jobject SF_arc_graphics_Cubemap$CubemapSide_negativeY;
extern jobject SF_arc_graphics_Cubemap$CubemapSide_positiveZ;
extern jobject SF_arc_graphics_Cubemap$CubemapSide_negativeZ;
extern jobject SF_arc_graphics_Cubemap$CubemapSide_all;
extern jobject SF_arc_graphics_Cubemap$CubemapSide_$VALUES;

#define VTABLE_arc_graphics_Cubemap$CubemapSide_hashCode_R_int 0
typedef jint (*func_arc_graphics_Cubemap$CubemapSide_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Cubemap$CubemapSide_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_Cubemap$CubemapSide_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Cubemap$CubemapSide_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_Cubemap$CubemapSide_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Cubemap$CubemapSide_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_Cubemap$CubemapSide_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Cubemap$CubemapSide_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_Cubemap$CubemapSide_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Cubemap$CubemapSide_finalize 5
typedef void (*func_arc_graphics_Cubemap$CubemapSide_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Cubemap$CubemapSide_notify 6
typedef void (*func_arc_graphics_Cubemap$CubemapSide_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Cubemap$CubemapSide_notifyAll 7
typedef void (*func_arc_graphics_Cubemap$CubemapSide_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Cubemap$CubemapSide_wait 8
typedef void (*func_arc_graphics_Cubemap$CubemapSide_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Cubemap$CubemapSide_wait_long 9
typedef void (*func_arc_graphics_Cubemap$CubemapSide_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_Cubemap$CubemapSide_wait_long_int 10
typedef void (*func_arc_graphics_Cubemap$CubemapSide_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_Cubemap$CubemapSide_compareTo_java_lang_Object_R_int 11
typedef jint (*func_arc_graphics_Cubemap$CubemapSide_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Cubemap$CubemapSide_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_arc_graphics_Cubemap$CubemapSide_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Cubemap$CubemapSide_name_R_java_lang_String 13
typedef jobject (*func_arc_graphics_Cubemap$CubemapSide_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Cubemap$CubemapSide_ordinal_R_int 14
typedef jint (*func_arc_graphics_Cubemap$CubemapSide_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Cubemap$CubemapSide_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_arc_graphics_Cubemap$CubemapSide_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Cubemap$CubemapSide_getGLEnum_R_int 16
typedef jint (*func_arc_graphics_Cubemap$CubemapSide_getGLEnum_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Cubemap$CubemapSide_getUp_arc_math_geom_Vec3_R_arc_math_geom_Vec3 17
typedef jobject (*func_arc_graphics_Cubemap$CubemapSide_getUp_arc_math_geom_Vec3_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Cubemap$CubemapSide_getDirection_arc_math_geom_Vec3_R_arc_math_geom_Vec3 18
typedef jobject (*func_arc_graphics_Cubemap$CubemapSide_getDirection_arc_math_geom_Vec3_R_arc_math_geom_Vec3)(jcontext ctx, jobject self, jobject param0);

void mark_arc_graphics_Cubemap$CubemapSide(jobject object, jint mark, jint depth);
void clinit_arc_graphics_Cubemap$CubemapSide(jcontext ctx);
jobject SM_arc_graphics_Cubemap$CubemapSide_values_R_Array1_arc_graphics_Cubemap$CubemapSide(jcontext ctx);
jobject SM_arc_graphics_Cubemap$CubemapSide_valueOf_java_lang_String_R_arc_graphics_Cubemap$CubemapSide(jcontext ctx, jobject param0);
void init_arc_graphics_Cubemap$CubemapSide_java_lang_String_int_int_int_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9);
jint M_arc_graphics_Cubemap$CubemapSide_getGLEnum_R_int(jcontext ctx, jobject self);
jobject M_arc_graphics_Cubemap$CubemapSide_getUp_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0);
jobject M_arc_graphics_Cubemap$CubemapSide_getDirection_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0);
jobject SM_arc_graphics_Cubemap$CubemapSide_$values_R_Array1_arc_graphics_Cubemap$CubemapSide(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
