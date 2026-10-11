#ifndef HEADER_mindustry_graphics_g3d_MeshBuilder
#define HEADER_mindustry_graphics_g3d_MeshBuilder

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_g3d_MeshBuilder {
	java_lang_Object parent;
} mindustry_graphics_g3d_MeshBuilder;

extern Class class_mindustry_graphics_g3d_MeshBuilder;

extern jbool SF_mindustry_graphics_g3d_MeshBuilder_packNormals;
extern volatile jobject SF_mindustry_graphics_g3d_MeshBuilder_tmpHeights;

#define VTABLE_mindustry_graphics_g3d_MeshBuilder_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_g3d_MeshBuilder_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_MeshBuilder_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_g3d_MeshBuilder_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_g3d_MeshBuilder_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_g3d_MeshBuilder_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_MeshBuilder_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_g3d_MeshBuilder_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_MeshBuilder_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_g3d_MeshBuilder_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_MeshBuilder_finalize 5
typedef void (*func_mindustry_graphics_g3d_MeshBuilder_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_MeshBuilder_notify 6
typedef void (*func_mindustry_graphics_g3d_MeshBuilder_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_MeshBuilder_notifyAll 7
typedef void (*func_mindustry_graphics_g3d_MeshBuilder_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_MeshBuilder_wait 8
typedef void (*func_mindustry_graphics_g3d_MeshBuilder_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_g3d_MeshBuilder_wait_long 9
typedef void (*func_mindustry_graphics_g3d_MeshBuilder_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_g3d_MeshBuilder_wait_long_int 10
typedef void (*func_mindustry_graphics_g3d_MeshBuilder_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_graphics_g3d_MeshBuilder(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_g3d_MeshBuilder(jcontext ctx);
void init_mindustry_graphics_g3d_MeshBuilder(jcontext ctx, jobject self);
jobject SM_mindustry_graphics_g3d_MeshBuilder_buildIcosphere_int_float_R_arc_graphics_Mesh(jcontext ctx, jint param0, jfloat param1);
jobject SM_mindustry_graphics_g3d_MeshBuilder_buildPlanetGrid_mindustry_graphics_g3d_PlanetGrid_arc_graphics_Color_float_R_arc_graphics_Mesh(jcontext ctx, jobject param0, jobject param1, jfloat param2);
jobject SM_mindustry_graphics_g3d_MeshBuilder_buildHex_arc_graphics_Color_int_float_R_arc_graphics_Mesh(jcontext ctx, jobject param0, jint param1, jfloat param2);
jobject SM_mindustry_graphics_g3d_MeshBuilder_buildHex_mindustry_graphics_g3d_HexMesher_int_float_float_R_arc_graphics_Mesh(jcontext ctx, jobject param0, jint param1, jfloat param2, jfloat param3);
jobject SM_mindustry_graphics_g3d_MeshBuilder_begin_int_int_boolean_boolean_R_arc_graphics_Mesh(jcontext ctx, jint param0, jint param1, jbool param2, jbool param3);
jobject SM_mindustry_graphics_g3d_MeshBuilder_begin_int_int_boolean_boolean_boolean_R_arc_graphics_Mesh(jcontext ctx, jint param0, jint param1, jbool param2, jbool param3, jbool param4);
jobject SM_mindustry_graphics_g3d_MeshBuilder_end_arc_graphics_Mesh_R_arc_graphics_Mesh(jcontext ctx, jobject param0);
jobject SM_mindustry_graphics_g3d_MeshBuilder_normal_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
void SM_mindustry_graphics_g3d_MeshBuilder_normal_float_float_float_float_float_float_float_float_float_arc_math_geom_Vec3(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jobject param9);
void SM_mindustry_graphics_g3d_MeshBuilder_verts_arc_graphics_Mesh_Array1_float_arc_math_geom_Vec3_float_arc_math_geom_Vec3_float_arc_math_geom_Vec3_float_arc_math_geom_Vec3_float_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jobject param4, jfloat param5, jobject param6, jfloat param7, jobject param8, jfloat param9, jfloat param10);
void SM_mindustry_graphics_g3d_MeshBuilder_vert_arc_graphics_Mesh_Array1_float_float_float_float_arc_math_geom_Vec3_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jobject param5, jfloat param6, jfloat param7);
jfloat SM_mindustry_graphics_g3d_MeshBuilder_packNormals_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);

#ifdef __cplusplus
}
#endif

#endif
