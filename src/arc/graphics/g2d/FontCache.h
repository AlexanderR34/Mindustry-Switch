#ifndef HEADER_arc_graphics_g2d_FontCache
#define HEADER_arc_graphics_g2d_FontCache

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_FontCache {
	java_lang_Object parent;
	jref F_font;
	jref F_layouts;
	jref F_pooledLayouts;
	jref F_color;
	jbool F_integer;
	jint F_glyphCount;
	jfloat F_x;
	jfloat F_y;
	jfloat F_currentTint;
	jref F_pageVertices;
	jref F_idx;
	jref F_pageGlyphIndices;
	jref F_tempGlyphCount;
} arc_graphics_g2d_FontCache;

extern Class class_arc_graphics_g2d_FontCache;

extern jobject SF_arc_graphics_g2d_FontCache_tempColor;

#define VTABLE_arc_graphics_g2d_FontCache_hashCode_R_int 0
typedef jint (*func_arc_graphics_g2d_FontCache_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_FontCache_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g2d_FontCache_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_FontCache_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g2d_FontCache_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_FontCache_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g2d_FontCache_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_FontCache_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g2d_FontCache_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_FontCache_finalize 5
typedef void (*func_arc_graphics_g2d_FontCache_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_FontCache_notify 6
typedef void (*func_arc_graphics_g2d_FontCache_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_FontCache_notifyAll 7
typedef void (*func_arc_graphics_g2d_FontCache_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_FontCache_wait 8
typedef void (*func_arc_graphics_g2d_FontCache_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_FontCache_wait_long 9
typedef void (*func_arc_graphics_g2d_FontCache_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g2d_FontCache_wait_long_int 10
typedef void (*func_arc_graphics_g2d_FontCache_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_g2d_FontCache_setPosition_float_float 11
typedef void (*func_arc_graphics_g2d_FontCache_setPosition_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_graphics_g2d_FontCache_translate_float_float 12
typedef void (*func_arc_graphics_g2d_FontCache_translate_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_graphics_g2d_FontCache_setRotation_float_float_float 13
typedef void (*func_arc_graphics_g2d_FontCache_setRotation_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_arc_graphics_g2d_FontCache_tint_arc_graphics_Color 14
typedef void (*func_arc_graphics_g2d_FontCache_tint_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_FontCache_setAlphas_float 15
typedef void (*func_arc_graphics_g2d_FontCache_setAlphas_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_FontCache_setColors_float 16
typedef void (*func_arc_graphics_g2d_FontCache_setColors_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_FontCache_setColors_arc_graphics_Color 17
typedef void (*func_arc_graphics_g2d_FontCache_setColors_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_FontCache_setColors_float_float_float_float 18
typedef void (*func_arc_graphics_g2d_FontCache_setColors_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_graphics_g2d_FontCache_setColors_arc_graphics_Color_int_int 19
typedef void (*func_arc_graphics_g2d_FontCache_setColors_arc_graphics_Color_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_arc_graphics_g2d_FontCache_setColors_float_int_int 20
typedef void (*func_arc_graphics_g2d_FontCache_setColors_float_int_int)(jcontext ctx, jobject self, jfloat param0, jint param1, jint param2);
#define VTABLE_arc_graphics_g2d_FontCache_getColor_R_arc_graphics_Color 21
typedef jobject (*func_arc_graphics_g2d_FontCache_getColor_R_arc_graphics_Color)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_FontCache_setColor_arc_graphics_Color 22
typedef void (*func_arc_graphics_g2d_FontCache_setColor_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_FontCache_setColor_float_float_float_float 23
typedef void (*func_arc_graphics_g2d_FontCache_setColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_graphics_g2d_FontCache_draw 24
typedef void (*func_arc_graphics_g2d_FontCache_draw)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_FontCache_draw_int_int 25
typedef void (*func_arc_graphics_g2d_FontCache_draw_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_graphics_g2d_FontCache_draw_float 26
typedef void (*func_arc_graphics_g2d_FontCache_draw_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_FontCache_clear 27
typedef void (*func_arc_graphics_g2d_FontCache_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_FontCache_requireGlyphs_arc_graphics_g2d_GlyphLayout 28
typedef void (*func_arc_graphics_g2d_FontCache_requireGlyphs_arc_graphics_g2d_GlyphLayout)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_FontCache_requirePageGlyphs_int_int 29
typedef void (*func_arc_graphics_g2d_FontCache_requirePageGlyphs_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_graphics_g2d_FontCache_addToCache_arc_graphics_g2d_GlyphLayout_float_float 30
typedef void (*func_arc_graphics_g2d_FontCache_addToCache_arc_graphics_g2d_GlyphLayout_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_graphics_g2d_FontCache_addGlyph_arc_graphics_g2d_Font$Glyph_float_float_float 31
typedef void (*func_arc_graphics_g2d_FontCache_addGlyph_arc_graphics_g2d_Font$Glyph_float_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_graphics_g2d_FontCache_setText_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout 32
typedef jobject (*func_arc_graphics_g2d_FontCache_setText_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_graphics_g2d_FontCache_setText_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout 33
typedef jobject (*func_arc_graphics_g2d_FontCache_setText_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jint param4, jbool param5);
#define VTABLE_arc_graphics_g2d_FontCache_setText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout 34
typedef jobject (*func_arc_graphics_g2d_FontCache_setText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4, jfloat param5, jint param6, jbool param7);
#define VTABLE_arc_graphics_g2d_FontCache_setText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout 35
typedef jobject (*func_arc_graphics_g2d_FontCache_setText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4, jfloat param5, jint param6, jbool param7, jobject param8);
#define VTABLE_arc_graphics_g2d_FontCache_setText_arc_graphics_g2d_GlyphLayout_float_float 36
typedef void (*func_arc_graphics_g2d_FontCache_setText_arc_graphics_g2d_GlyphLayout_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout 37
typedef jobject (*func_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout 38
typedef jobject (*func_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jint param4, jbool param5);
#define VTABLE_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout 39
typedef jobject (*func_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4, jfloat param5, jint param6, jbool param7);
#define VTABLE_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout 40
typedef jobject (*func_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4, jfloat param5, jint param6, jbool param7, jobject param8);
#define VTABLE_arc_graphics_g2d_FontCache_addText_arc_graphics_g2d_GlyphLayout_float_float 41
typedef void (*func_arc_graphics_g2d_FontCache_addText_arc_graphics_g2d_GlyphLayout_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_graphics_g2d_FontCache_getX_R_float 42
typedef jfloat (*func_arc_graphics_g2d_FontCache_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_FontCache_getY_R_float 43
typedef jfloat (*func_arc_graphics_g2d_FontCache_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font 44
typedef jobject (*func_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_FontCache_setUseIntegerPositions_boolean 45
typedef void (*func_arc_graphics_g2d_FontCache_setUseIntegerPositions_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_graphics_g2d_FontCache_usesIntegerPositions_R_boolean 46
typedef jbool (*func_arc_graphics_g2d_FontCache_usesIntegerPositions_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_FontCache_getVertices_R_Array1_float 47
typedef jobject (*func_arc_graphics_g2d_FontCache_getVertices_R_Array1_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_FontCache_getVertices_int_R_Array1_float 48
typedef jobject (*func_arc_graphics_g2d_FontCache_getVertices_int_R_Array1_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_g2d_FontCache_getVertexCount_int_R_int 49
typedef jint (*func_arc_graphics_g2d_FontCache_getVertexCount_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_g2d_FontCache_getLayouts_R_arc_struct_Seq 50
typedef jobject (*func_arc_graphics_g2d_FontCache_getLayouts_R_arc_struct_Seq)(jcontext ctx, jobject self);

void mark_arc_graphics_g2d_FontCache(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_FontCache(jcontext ctx);
void init_arc_graphics_g2d_FontCache_arc_graphics_g2d_Font(jcontext ctx, jobject self, jobject param0);
void init_arc_graphics_g2d_FontCache_arc_graphics_g2d_Font_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_arc_graphics_g2d_FontCache_setPosition_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_arc_graphics_g2d_FontCache_translate_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_arc_graphics_g2d_FontCache_setRotation_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
void M_arc_graphics_g2d_FontCache_tint_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_g2d_FontCache_setAlphas_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_graphics_g2d_FontCache_setColors_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_graphics_g2d_FontCache_setColors_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_g2d_FontCache_setColors_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_arc_graphics_g2d_FontCache_setColors_arc_graphics_Color_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_arc_graphics_g2d_FontCache_setColors_float_int_int(jcontext ctx, jobject self, jfloat param0, jint param1, jint param2);
jobject M_arc_graphics_g2d_FontCache_getColor_R_arc_graphics_Color(jcontext ctx, jobject self);
void M_arc_graphics_g2d_FontCache_setColor_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_g2d_FontCache_setColor_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_arc_graphics_g2d_FontCache_draw(jcontext ctx, jobject self);
void M_arc_graphics_g2d_FontCache_draw_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_graphics_g2d_FontCache_draw_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_graphics_g2d_FontCache_clear(jcontext ctx, jobject self);
void M_arc_graphics_g2d_FontCache_requireGlyphs_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_g2d_FontCache_requirePageGlyphs_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_arc_graphics_g2d_FontCache_addToCache_arc_graphics_g2d_GlyphLayout_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
void M_arc_graphics_g2d_FontCache_addGlyph_arc_graphics_g2d_Font$Glyph_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3);
jobject M_arc_graphics_g2d_FontCache_setText_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
jobject M_arc_graphics_g2d_FontCache_setText_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jint param4, jbool param5);
jobject M_arc_graphics_g2d_FontCache_setText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4, jfloat param5, jint param6, jbool param7);
jobject M_arc_graphics_g2d_FontCache_setText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4, jfloat param5, jint param6, jbool param7, jobject param8);
void M_arc_graphics_g2d_FontCache_setText_arc_graphics_g2d_GlyphLayout_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
jobject M_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
jobject M_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jint param4, jbool param5);
jobject M_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4, jfloat param5, jint param6, jbool param7);
jobject M_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4, jfloat param5, jint param6, jbool param7, jobject param8);
void M_arc_graphics_g2d_FontCache_addText_arc_graphics_g2d_GlyphLayout_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
jfloat M_arc_graphics_g2d_FontCache_getX_R_float(jcontext ctx, jobject self);
jfloat M_arc_graphics_g2d_FontCache_getY_R_float(jcontext ctx, jobject self);
jobject M_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font(jcontext ctx, jobject self);
void M_arc_graphics_g2d_FontCache_setUseIntegerPositions_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_arc_graphics_g2d_FontCache_usesIntegerPositions_R_boolean(jcontext ctx, jobject self);
jobject M_arc_graphics_g2d_FontCache_getVertices_R_Array1_float(jcontext ctx, jobject self);
jobject M_arc_graphics_g2d_FontCache_getVertices_int_R_Array1_float(jcontext ctx, jobject self, jint param0);
jint M_arc_graphics_g2d_FontCache_getVertexCount_int_R_int(jcontext ctx, jobject self, jint param0);
jobject M_arc_graphics_g2d_FontCache_getLayouts_R_arc_struct_Seq(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
