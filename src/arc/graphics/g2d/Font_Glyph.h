#ifndef HEADER_arc_graphics_g2d_Font$Glyph
#define HEADER_arc_graphics_g2d_Font$Glyph

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_Font$Glyph {
	java_lang_Object parent;
	jint F_id;
	jint F_srcX;
	jint F_srcY;
	jint F_width;
	jint F_height;
	jfloat F_u;
	jfloat F_v;
	jfloat F_u2;
	jfloat F_v2;
	jint F_xoffset;
	jint F_yoffset;
	jint F_xadvance;
	jref F_kerning;
	jbool F_fixedWidth;
	jint F_page;
} arc_graphics_g2d_Font$Glyph;

extern Class class_arc_graphics_g2d_Font$Glyph;


#define VTABLE_arc_graphics_g2d_Font$Glyph_hashCode_R_int 0
typedef jint (*func_arc_graphics_g2d_Font$Glyph_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font$Glyph_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g2d_Font$Glyph_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_Font$Glyph_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g2d_Font$Glyph_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font$Glyph_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g2d_Font$Glyph_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font$Glyph_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g2d_Font$Glyph_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font$Glyph_finalize 5
typedef void (*func_arc_graphics_g2d_Font$Glyph_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font$Glyph_notify 6
typedef void (*func_arc_graphics_g2d_Font$Glyph_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font$Glyph_notifyAll 7
typedef void (*func_arc_graphics_g2d_Font$Glyph_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font$Glyph_wait 8
typedef void (*func_arc_graphics_g2d_Font$Glyph_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font$Glyph_wait_long 9
typedef void (*func_arc_graphics_g2d_Font$Glyph_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g2d_Font$Glyph_wait_long_int 10
typedef void (*func_arc_graphics_g2d_Font$Glyph_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_g2d_Font$Glyph_getKerning_char_R_int 11
typedef jint (*func_arc_graphics_g2d_Font$Glyph_getKerning_char_R_int)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_arc_graphics_g2d_Font$Glyph_setKerning_int_int 12
typedef void (*func_arc_graphics_g2d_Font$Glyph_setKerning_int_int)(jcontext ctx, jobject self, jint param0, jint param1);

void mark_arc_graphics_g2d_Font$Glyph(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_Font$Glyph(jcontext ctx);
void init_arc_graphics_g2d_Font$Glyph(jcontext ctx, jobject self);
jint M_arc_graphics_g2d_Font$Glyph_getKerning_char_R_int(jcontext ctx, jobject self, jchar param0);
void M_arc_graphics_g2d_Font$Glyph_setKerning_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_arc_graphics_g2d_Font$Glyph_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
