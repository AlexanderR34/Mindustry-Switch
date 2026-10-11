#ifndef HEADER_mindustry_graphics_OverlayRenderer$CoreEdge
#define HEADER_mindustry_graphics_OverlayRenderer$CoreEdge

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_OverlayRenderer$CoreEdge {
	java_lang_Object parent;
	jfloat F_x1;
	jfloat F_y1;
	jfloat F_x2;
	jfloat F_y2;
	jref F_t1;
	jref F_t2;
} mindustry_graphics_OverlayRenderer$CoreEdge;

extern Class class_mindustry_graphics_OverlayRenderer$CoreEdge;


#define VTABLE_mindustry_graphics_OverlayRenderer$CoreEdge_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_OverlayRenderer$CoreEdge_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_OverlayRenderer$CoreEdge_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_OverlayRenderer$CoreEdge_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_OverlayRenderer$CoreEdge_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_OverlayRenderer$CoreEdge_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_OverlayRenderer$CoreEdge_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_OverlayRenderer$CoreEdge_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_OverlayRenderer$CoreEdge_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_OverlayRenderer$CoreEdge_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_OverlayRenderer$CoreEdge_finalize 5
typedef void (*func_mindustry_graphics_OverlayRenderer$CoreEdge_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_OverlayRenderer$CoreEdge_notify 6
typedef void (*func_mindustry_graphics_OverlayRenderer$CoreEdge_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_OverlayRenderer$CoreEdge_notifyAll 7
typedef void (*func_mindustry_graphics_OverlayRenderer$CoreEdge_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_OverlayRenderer$CoreEdge_wait 8
typedef void (*func_mindustry_graphics_OverlayRenderer$CoreEdge_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_OverlayRenderer$CoreEdge_wait_long 9
typedef void (*func_mindustry_graphics_OverlayRenderer$CoreEdge_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_OverlayRenderer$CoreEdge_wait_long_int 10
typedef void (*func_mindustry_graphics_OverlayRenderer$CoreEdge_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_graphics_OverlayRenderer$CoreEdge_displayed_R_mindustry_game_Team 11
typedef jobject (*func_mindustry_graphics_OverlayRenderer$CoreEdge_displayed_R_mindustry_game_Team)(jcontext ctx, jobject self);

void mark_mindustry_graphics_OverlayRenderer$CoreEdge(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_OverlayRenderer$CoreEdge(jcontext ctx);
void init_mindustry_graphics_OverlayRenderer$CoreEdge_float_float_float_float_mindustry_game_Team_mindustry_game_Team(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5);
jobject M_mindustry_graphics_OverlayRenderer$CoreEdge_displayed_R_mindustry_game_Team(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
