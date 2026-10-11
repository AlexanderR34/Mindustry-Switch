#ifndef HEADER_arc_graphics_g2d_GlyphLayout$GlyphRun
#define HEADER_arc_graphics_g2d_GlyphLayout$GlyphRun

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/pooling/Pool_Poolable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_GlyphLayout$GlyphRun {
	java_lang_Object parent;
	jref F_color;
	jref F_glyphs;
	jref F_xAdvances;
	jfloat F_x;
	jfloat F_y;
	jfloat F_width;
} arc_graphics_g2d_GlyphLayout$GlyphRun;

extern Class class_arc_graphics_g2d_GlyphLayout$GlyphRun;


#define VTABLE_arc_graphics_g2d_GlyphLayout$GlyphRun_hashCode_R_int 0
typedef jint (*func_arc_graphics_g2d_GlyphLayout$GlyphRun_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_GlyphLayout$GlyphRun_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g2d_GlyphLayout$GlyphRun_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_GlyphLayout$GlyphRun_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g2d_GlyphLayout$GlyphRun_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_GlyphLayout$GlyphRun_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g2d_GlyphLayout$GlyphRun_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_GlyphLayout$GlyphRun_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g2d_GlyphLayout$GlyphRun_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_GlyphLayout$GlyphRun_finalize 5
typedef void (*func_arc_graphics_g2d_GlyphLayout$GlyphRun_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_GlyphLayout$GlyphRun_notify 6
typedef void (*func_arc_graphics_g2d_GlyphLayout$GlyphRun_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_GlyphLayout$GlyphRun_notifyAll 7
typedef void (*func_arc_graphics_g2d_GlyphLayout$GlyphRun_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_GlyphLayout$GlyphRun_wait 8
typedef void (*func_arc_graphics_g2d_GlyphLayout$GlyphRun_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_GlyphLayout$GlyphRun_wait_long 9
typedef void (*func_arc_graphics_g2d_GlyphLayout$GlyphRun_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g2d_GlyphLayout$GlyphRun_wait_long_int 10
typedef void (*func_arc_graphics_g2d_GlyphLayout$GlyphRun_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_g2d_GlyphLayout$GlyphRun_reset 11
typedef void (*func_arc_graphics_g2d_GlyphLayout$GlyphRun_reset)(jcontext ctx, jobject self);

void mark_arc_graphics_g2d_GlyphLayout$GlyphRun(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_GlyphLayout$GlyphRun(jcontext ctx);
void init_arc_graphics_g2d_GlyphLayout$GlyphRun(jcontext ctx, jobject self);
void M_arc_graphics_g2d_GlyphLayout$GlyphRun_reset(jcontext ctx, jobject self);
jobject M_arc_graphics_g2d_GlyphLayout$GlyphRun_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
