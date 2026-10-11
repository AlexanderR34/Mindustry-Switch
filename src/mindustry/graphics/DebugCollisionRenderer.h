#ifndef HEADER_mindustry_graphics_DebugCollisionRenderer
#define HEADER_mindustry_graphics_DebugCollisionRenderer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_DebugCollisionRenderer {
	java_lang_Object parent;
} mindustry_graphics_DebugCollisionRenderer;

extern Class class_mindustry_graphics_DebugCollisionRenderer;

extern jobject SF_mindustry_graphics_DebugCollisionRenderer_edges;

#define VTABLE_mindustry_graphics_DebugCollisionRenderer_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_DebugCollisionRenderer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_DebugCollisionRenderer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_DebugCollisionRenderer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_DebugCollisionRenderer_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_DebugCollisionRenderer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_DebugCollisionRenderer_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_DebugCollisionRenderer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_DebugCollisionRenderer_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_DebugCollisionRenderer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_DebugCollisionRenderer_finalize 5
typedef void (*func_mindustry_graphics_DebugCollisionRenderer_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_DebugCollisionRenderer_notify 6
typedef void (*func_mindustry_graphics_DebugCollisionRenderer_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_DebugCollisionRenderer_notifyAll 7
typedef void (*func_mindustry_graphics_DebugCollisionRenderer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_DebugCollisionRenderer_wait 8
typedef void (*func_mindustry_graphics_DebugCollisionRenderer_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_DebugCollisionRenderer_wait_long 9
typedef void (*func_mindustry_graphics_DebugCollisionRenderer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_DebugCollisionRenderer_wait_long_int 10
typedef void (*func_mindustry_graphics_DebugCollisionRenderer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_graphics_DebugCollisionRenderer(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_DebugCollisionRenderer(jcontext ctx);
void init_mindustry_graphics_DebugCollisionRenderer(jcontext ctx, jobject self);
void SM_mindustry_graphics_DebugCollisionRenderer_draw(jcontext ctx);
void SM_mindustry_graphics_DebugCollisionRenderer_lambda$draw$0_arc_math_geom_Rect(jcontext ctx, jobject param0);
void SM_mindustry_graphics_DebugCollisionRenderer_lambda$draw$3_arc_math_geom_Rect_mindustry_gen_Drawc(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_graphics_DebugCollisionRenderer_lambda$draw$2_arc_math_geom_Rect_mindustry_gen_Drawc(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_graphics_DebugCollisionRenderer_lambda$draw$1_arc_math_geom_Rect_mindustry_gen_Drawc(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
