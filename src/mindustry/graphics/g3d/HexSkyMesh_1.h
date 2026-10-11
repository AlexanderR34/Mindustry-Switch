#ifndef HEADER_mindustry_graphics_g3d_HexSkyMesh$1
#define HEADER_mindustry_graphics_g3d_HexSkyMesh$1

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/g3d/HexMesher.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_g3d_HexSkyMesh$1 {
	java_lang_Object parent;
	jref F_val$color;
	jint F_val$seed;
	jint F_val$octaves;
	jfloat F_val$persistence;
	jfloat F_val$scl;
	jfloat F_val$thresh;
} mindustry_graphics_g3d_HexSkyMesh$1;

extern Class class_mindustry_graphics_g3d_HexSkyMesh$1;


#define VTABLE_mindustry_graphics_g3d_HexSkyMesh$1_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_g3d_HexSkyMesh$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_g3d_HexSkyMesh$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh$1_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_g3d_HexSkyMesh$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh$1_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_g3d_HexSkyMesh$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh$1_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_g3d_HexSkyMesh$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh$1_finalize 5
typedef void (*func_mindustry_graphics_g3d_HexSkyMesh$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh$1_notify 6
typedef void (*func_mindustry_graphics_g3d_HexSkyMesh$1_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh$1_notifyAll 7
typedef void (*func_mindustry_graphics_g3d_HexSkyMesh$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh$1_wait 8
typedef void (*func_mindustry_graphics_g3d_HexSkyMesh$1_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh$1_wait_long 9
typedef void (*func_mindustry_graphics_g3d_HexSkyMesh$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh$1_wait_long_int 10
typedef void (*func_mindustry_graphics_g3d_HexSkyMesh$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh$1_getHeight_arc_math_geom_Vec3_R_float 11
typedef jfloat (*func_mindustry_graphics_g3d_HexSkyMesh$1_getHeight_arc_math_geom_Vec3_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh$1_getColor_arc_math_geom_Vec3_arc_graphics_Color 12
typedef void (*func_mindustry_graphics_g3d_HexSkyMesh$1_getColor_arc_math_geom_Vec3_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh$1_getEmissiveColor_arc_math_geom_Vec3_arc_graphics_Color 13
typedef void (*func_mindustry_graphics_g3d_HexSkyMesh$1_getEmissiveColor_arc_math_geom_Vec3_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh$1_isEmissive_R_boolean 14
typedef jbool (*func_mindustry_graphics_g3d_HexSkyMesh$1_isEmissive_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_HexSkyMesh$1_skip_arc_math_geom_Vec3_R_boolean 15
typedef jbool (*func_mindustry_graphics_g3d_HexSkyMesh$1_skip_arc_math_geom_Vec3_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_graphics_g3d_HexSkyMesh$1(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_g3d_HexSkyMesh$1(jcontext ctx);
void init_mindustry_graphics_g3d_HexSkyMesh$1_arc_graphics_Color_int_int_float_float_float(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jfloat param3, jfloat param4, jfloat param5);
jfloat M_mindustry_graphics_g3d_HexSkyMesh$1_getHeight_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_g3d_HexSkyMesh$1_getColor_arc_math_geom_Vec3_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_mindustry_graphics_g3d_HexSkyMesh$1_skip_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
