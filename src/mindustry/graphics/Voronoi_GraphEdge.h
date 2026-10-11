#ifndef HEADER_mindustry_graphics_Voronoi$GraphEdge
#define HEADER_mindustry_graphics_Voronoi$GraphEdge

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_Voronoi$GraphEdge {
	java_lang_Object parent;
	jfloat F_x1;
	jfloat F_y1;
	jfloat F_x2;
	jfloat F_y2;
	jint F_site1;
	jint F_site2;
} mindustry_graphics_Voronoi$GraphEdge;

extern Class class_mindustry_graphics_Voronoi$GraphEdge;


#define VTABLE_mindustry_graphics_Voronoi$GraphEdge_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_Voronoi$GraphEdge_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Voronoi$GraphEdge_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_Voronoi$GraphEdge_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Voronoi$GraphEdge_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_Voronoi$GraphEdge_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Voronoi$GraphEdge_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_Voronoi$GraphEdge_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Voronoi$GraphEdge_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_Voronoi$GraphEdge_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Voronoi$GraphEdge_finalize 5
typedef void (*func_mindustry_graphics_Voronoi$GraphEdge_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Voronoi$GraphEdge_notify 6
typedef void (*func_mindustry_graphics_Voronoi$GraphEdge_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Voronoi$GraphEdge_notifyAll 7
typedef void (*func_mindustry_graphics_Voronoi$GraphEdge_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Voronoi$GraphEdge_wait 8
typedef void (*func_mindustry_graphics_Voronoi$GraphEdge_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Voronoi$GraphEdge_wait_long 9
typedef void (*func_mindustry_graphics_Voronoi$GraphEdge_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_Voronoi$GraphEdge_wait_long_int 10
typedef void (*func_mindustry_graphics_Voronoi$GraphEdge_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_graphics_Voronoi$GraphEdge(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_Voronoi$GraphEdge(jcontext ctx);
void init_mindustry_graphics_Voronoi$GraphEdge(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
