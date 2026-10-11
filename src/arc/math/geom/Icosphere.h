#ifndef HEADER_arc_math_geom_Icosphere
#define HEADER_arc_math_geom_Icosphere

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_math_geom_Icosphere {
	java_lang_Object parent;
} arc_math_geom_Icosphere;

extern Class class_arc_math_geom_Icosphere;

extern jfloat SF_arc_math_geom_Icosphere_t;
extern jobject SF_arc_math_geom_Icosphere_baseVert;
extern jobject SF_arc_math_geom_Icosphere_baseFace;

#define VTABLE_arc_math_geom_Icosphere_hashCode_R_int 0
typedef jint (*func_arc_math_geom_Icosphere_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Icosphere_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_math_geom_Icosphere_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_math_geom_Icosphere_clone_R_java_lang_Object 2
typedef jobject (*func_arc_math_geom_Icosphere_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Icosphere_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_math_geom_Icosphere_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Icosphere_toString_R_java_lang_String 4
typedef jobject (*func_arc_math_geom_Icosphere_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Icosphere_finalize 5
typedef void (*func_arc_math_geom_Icosphere_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Icosphere_notify 6
typedef void (*func_arc_math_geom_Icosphere_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Icosphere_notifyAll 7
typedef void (*func_arc_math_geom_Icosphere_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Icosphere_wait 8
typedef void (*func_arc_math_geom_Icosphere_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_math_geom_Icosphere_wait_long 9
typedef void (*func_arc_math_geom_Icosphere_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_math_geom_Icosphere_wait_long_int 10
typedef void (*func_arc_math_geom_Icosphere_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_math_geom_Icosphere(jobject object, jint mark, jint depth);
void clinit_arc_math_geom_Icosphere(jcontext ctx);
void init_arc_math_geom_Icosphere(jcontext ctx, jobject self);
jobject SM_arc_math_geom_Icosphere_create_int_R_arc_math_geom_MeshResult(jcontext ctx, jint param0);
void SM_arc_math_geom_Icosphere_subdivide_int_int_int_arc_struct_FloatSeq_arc_struct_IntSeq_int(jcontext ctx, jint param0, jint param1, jint param2, jobject param3, jobject param4, jint param5);
jobject SM_arc_math_geom_Icosphere_v_float_float_float_R_arc_math_geom_Vec3(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);

#ifdef __cplusplus
}
#endif

#endif
