#ifndef HEADER_mindustry_graphics_Voronoi$Halfedge
#define HEADER_mindustry_graphics_Voronoi$Halfedge

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_Voronoi$Halfedge {
	java_lang_Object parent;
	jref F_ELleft;
	jref F_ELright;
	jref F_ELedge;
	jbool F_deleted;
	jint F_ELpm;
	jref F_vertex;
	jfloat F_ystar;
	jref F_PQnext;
} mindustry_graphics_Voronoi$Halfedge;

extern Class class_mindustry_graphics_Voronoi$Halfedge;


#define VTABLE_mindustry_graphics_Voronoi$Halfedge_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_Voronoi$Halfedge_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Voronoi$Halfedge_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_Voronoi$Halfedge_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Voronoi$Halfedge_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_Voronoi$Halfedge_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Voronoi$Halfedge_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_Voronoi$Halfedge_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Voronoi$Halfedge_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_Voronoi$Halfedge_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Voronoi$Halfedge_finalize 5
typedef void (*func_mindustry_graphics_Voronoi$Halfedge_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Voronoi$Halfedge_notify 6
typedef void (*func_mindustry_graphics_Voronoi$Halfedge_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Voronoi$Halfedge_notifyAll 7
typedef void (*func_mindustry_graphics_Voronoi$Halfedge_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Voronoi$Halfedge_wait 8
typedef void (*func_mindustry_graphics_Voronoi$Halfedge_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Voronoi$Halfedge_wait_long 9
typedef void (*func_mindustry_graphics_Voronoi$Halfedge_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_Voronoi$Halfedge_wait_long_int 10
typedef void (*func_mindustry_graphics_Voronoi$Halfedge_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_graphics_Voronoi$Halfedge(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_Voronoi$Halfedge(jcontext ctx);
void init_mindustry_graphics_Voronoi$Halfedge(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
