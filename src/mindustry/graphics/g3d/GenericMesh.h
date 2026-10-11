#ifndef HEADER_mindustry_graphics_g3d_GenericMesh
#define HEADER_mindustry_graphics_g3d_GenericMesh

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_g3d_GenericMesh {
	java_lang_Object parent;
} mindustry_graphics_g3d_GenericMesh;

extern Class class_mindustry_graphics_g3d_GenericMesh;


#define INDEX_mindustry_graphics_g3d_GenericMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D 0
typedef void (*func_mindustry_graphics_g3d_GenericMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

void mark_mindustry_graphics_g3d_GenericMesh(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_g3d_GenericMesh(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
