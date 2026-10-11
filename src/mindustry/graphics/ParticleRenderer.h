#ifndef HEADER_mindustry_graphics_ParticleRenderer
#define HEADER_mindustry_graphics_ParticleRenderer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_ParticleRenderer {
	java_lang_Object parent;
	jref F_data;
	volatile jint F_count;
	jref F_addBuffer;
	jint F_addCount;
	jref F_mesh;
	jref F_vertexBuffer;
	volatile jint F_vertexBufferLength;
	jref F_asyncTask;
} mindustry_graphics_ParticleRenderer;

extern Class class_mindustry_graphics_ParticleRenderer;

extern jbool SF_mindustry_graphics_ParticleRenderer_useAsync;
extern jint SF_mindustry_graphics_ParticleRenderer_maxParticles;
extern jint SF_mindustry_graphics_ParticleRenderer_maxParticlesPerFrame;
extern jint SF_mindustry_graphics_ParticleRenderer_particleSize;
extern jint SF_mindustry_graphics_ParticleRenderer_particleVertexSize;
extern jfloat SF_mindustry_graphics_ParticleRenderer_globalDrag;
extern jfloat SF_mindustry_graphics_ParticleRenderer_cullPadding;
extern jobject SF_mindustry_graphics_ParticleRenderer_attributes;
extern jobject SF_mindustry_graphics_ParticleRenderer_shader;

#define VTABLE_mindustry_graphics_ParticleRenderer_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_ParticleRenderer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_ParticleRenderer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_ParticleRenderer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_ParticleRenderer_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_ParticleRenderer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_ParticleRenderer_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_ParticleRenderer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_ParticleRenderer_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_ParticleRenderer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_ParticleRenderer_finalize 5
typedef void (*func_mindustry_graphics_ParticleRenderer_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_ParticleRenderer_notify 6
typedef void (*func_mindustry_graphics_ParticleRenderer_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_ParticleRenderer_notifyAll 7
typedef void (*func_mindustry_graphics_ParticleRenderer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_ParticleRenderer_wait 8
typedef void (*func_mindustry_graphics_ParticleRenderer_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_ParticleRenderer_wait_long 9
typedef void (*func_mindustry_graphics_ParticleRenderer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_ParticleRenderer_wait_long_int 10
typedef void (*func_mindustry_graphics_ParticleRenderer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_ParticleRenderer_count_R_int 11
typedef jint (*func_mindustry_graphics_ParticleRenderer_count_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_ParticleRenderer_updateAndRender 12
typedef void (*func_mindustry_graphics_ParticleRenderer_updateAndRender)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_ParticleRenderer_update 13
typedef void (*func_mindustry_graphics_ParticleRenderer_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_ParticleRenderer_updateAsync 14
typedef void (*func_mindustry_graphics_ParticleRenderer_updateAsync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_ParticleRenderer_render 15
typedef void (*func_mindustry_graphics_ParticleRenderer_render)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_ParticleRenderer_add_float_float_float_float_float_float_float_float 16
typedef void (*func_mindustry_graphics_ParticleRenderer_add_float_float_float_float_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
#define VTABLE_mindustry_graphics_ParticleRenderer_buildVertices 17
typedef void (*func_mindustry_graphics_ParticleRenderer_buildVertices)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_ParticleRenderer_uploadMeshData_arc_graphics_Mesh 18
typedef void (*func_mindustry_graphics_ParticleRenderer_uploadMeshData_arc_graphics_Mesh)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_graphics_ParticleRenderer(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_ParticleRenderer(jcontext ctx);
void init_mindustry_graphics_ParticleRenderer(jcontext ctx, jobject self);
jint M_mindustry_graphics_ParticleRenderer_count_R_int(jcontext ctx, jobject self);
void M_mindustry_graphics_ParticleRenderer_updateAndRender(jcontext ctx, jobject self);
void M_mindustry_graphics_ParticleRenderer_update(jcontext ctx, jobject self);
void M_mindustry_graphics_ParticleRenderer_updateAsync(jcontext ctx, jobject self);
void M_mindustry_graphics_ParticleRenderer_render(jcontext ctx, jobject self);
void M_mindustry_graphics_ParticleRenderer_add_float_float_float_float_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7);
void M_mindustry_graphics_ParticleRenderer_buildVertices(jcontext ctx, jobject self);
void M_mindustry_graphics_ParticleRenderer_uploadMeshData_arc_graphics_Mesh(jcontext ctx, jobject self, jobject param0);
jint SM_mindustry_graphics_ParticleRenderer_update_Array1_float_int_float_R_int(jcontext ctx, jobject param0, jint param1, jfloat param2);
void SM_mindustry_graphics_ParticleRenderer_makeShader(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
