#ifndef HEADER_mindustry_graphics_g3d_HexMesher
#define HEADER_mindustry_graphics_g3d_HexMesher

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_g3d_HexMesher {
	java_lang_Object parent;
} mindustry_graphics_g3d_HexMesher;

extern Class class_mindustry_graphics_g3d_HexMesher;


#define INDEX_mindustry_graphics_g3d_HexMesher_getHeight_arc_math_geom_Vec3_R_float 0
typedef jfloat (*func_mindustry_graphics_g3d_HexMesher_getHeight_arc_math_geom_Vec3_R_float)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_graphics_g3d_HexMesher_getColor_arc_math_geom_Vec3_arc_graphics_Color 1
typedef void (*func_mindustry_graphics_g3d_HexMesher_getColor_arc_math_geom_Vec3_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_mindustry_graphics_g3d_HexMesher_getEmissiveColor_arc_math_geom_Vec3_arc_graphics_Color 2
typedef void (*func_mindustry_graphics_g3d_HexMesher_getEmissiveColor_arc_math_geom_Vec3_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_mindustry_graphics_g3d_HexMesher_isEmissive_R_boolean 3
typedef jbool (*func_mindustry_graphics_g3d_HexMesher_isEmissive_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_graphics_g3d_HexMesher_skip_arc_math_geom_Vec3_R_boolean 4
typedef jbool (*func_mindustry_graphics_g3d_HexMesher_skip_arc_math_geom_Vec3_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_graphics_g3d_HexMesher(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_g3d_HexMesher(jcontext ctx);
jfloat M_mindustry_graphics_g3d_HexMesher_getHeight_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0);
void M_mindustry_graphics_g3d_HexMesher_getColor_arc_math_geom_Vec3_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_graphics_g3d_HexMesher_getEmissiveColor_arc_math_geom_Vec3_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_mindustry_graphics_g3d_HexMesher_isEmissive_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_graphics_g3d_HexMesher_skip_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
