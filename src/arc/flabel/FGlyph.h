#ifndef HEADER_arc_flabel_FGlyph
#define HEADER_arc_flabel_FGlyph

#include "Clearwing.h"
#include "arc/graphics/g2d/Font_Glyph.h"
#include "arc/util/pooling/Pool_Poolable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_flabel_FGlyph {
	arc_graphics_g2d_Font$Glyph parent;
	jref F_run;
	jint F_internalIndex;
	jref F_color;
} arc_flabel_FGlyph;

extern Class class_arc_flabel_FGlyph;


#define VTABLE_arc_flabel_FGlyph_hashCode_R_int 0
typedef jint (*func_arc_flabel_FGlyph_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FGlyph_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_flabel_FGlyph_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FGlyph_clone_R_java_lang_Object 2
typedef jobject (*func_arc_flabel_FGlyph_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FGlyph_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_flabel_FGlyph_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FGlyph_toString_R_java_lang_String 4
typedef jobject (*func_arc_flabel_FGlyph_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FGlyph_finalize 5
typedef void (*func_arc_flabel_FGlyph_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FGlyph_notify 6
typedef void (*func_arc_flabel_FGlyph_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FGlyph_notifyAll 7
typedef void (*func_arc_flabel_FGlyph_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FGlyph_wait 8
typedef void (*func_arc_flabel_FGlyph_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FGlyph_wait_long 9
typedef void (*func_arc_flabel_FGlyph_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_flabel_FGlyph_wait_long_int 10
typedef void (*func_arc_flabel_FGlyph_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_flabel_FGlyph_getKerning_char_R_int 11
typedef jint (*func_arc_flabel_FGlyph_getKerning_char_R_int)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_arc_flabel_FGlyph_setKerning_int_int 12
typedef void (*func_arc_flabel_FGlyph_setKerning_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_flabel_FGlyph_reset 13
typedef void (*func_arc_flabel_FGlyph_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FGlyph_set_arc_graphics_g2d_Font$Glyph 14
typedef void (*func_arc_flabel_FGlyph_set_arc_graphics_g2d_Font$Glyph)(jcontext ctx, jobject self, jobject param0);

void mark_arc_flabel_FGlyph(jobject object, jint mark, jint depth);
void clinit_arc_flabel_FGlyph(jcontext ctx);
void init_arc_flabel_FGlyph(jcontext ctx, jobject self);
void M_arc_flabel_FGlyph_set_arc_graphics_g2d_Font$Glyph(jcontext ctx, jobject self, jobject param0);
void M_arc_flabel_FGlyph_reset(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
