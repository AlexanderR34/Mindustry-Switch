#ifndef HEADER_arc_graphics_g2d_Font
#define HEADER_arc_graphics_g2d_Font

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_Font {
	java_lang_Object parent;
	jref F_data;
	jref F_cache;
	jref F_regions;
	jbool F_integer;
	jbool F_flipped;
	jbool F_ownsTexture;
} arc_graphics_g2d_Font;

extern Class class_arc_graphics_g2d_Font;

extern jint SF_arc_graphics_g2d_Font_LOG2_PAGE_SIZE;
extern jint SF_arc_graphics_g2d_Font_PAGE_SIZE;
extern jint SF_arc_graphics_g2d_Font_PAGES;

#define VTABLE_arc_graphics_g2d_Font_hashCode_R_int 0
typedef jint (*func_arc_graphics_g2d_Font_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g2d_Font_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_Font_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g2d_Font_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g2d_Font_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g2d_Font_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font_finalize 5
typedef void (*func_arc_graphics_g2d_Font_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font_notify 6
typedef void (*func_arc_graphics_g2d_Font_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font_notifyAll 7
typedef void (*func_arc_graphics_g2d_Font_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font_wait 8
typedef void (*func_arc_graphics_g2d_Font_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font_wait_long 9
typedef void (*func_arc_graphics_g2d_Font_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g2d_Font_wait_long_int 10
typedef void (*func_arc_graphics_g2d_Font_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_g2d_Font_dispose 11
typedef void (*func_arc_graphics_g2d_Font_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font_isDisposed_R_boolean 12
typedef jbool (*func_arc_graphics_g2d_Font_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font_load_arc_graphics_g2d_Font$FontData 13
typedef void (*func_arc_graphics_g2d_Font_load_arc_graphics_g2d_Font$FontData)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout 14
typedef jobject (*func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_arc_graphics_Color_float_boolean_int_R_arc_graphics_g2d_GlyphLayout 15
typedef jobject (*func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_arc_graphics_Color_float_boolean_int_R_arc_graphics_g2d_GlyphLayout)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jobject param3, jfloat param4, jbool param5, jint param6);
#define VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_R_arc_graphics_g2d_GlyphLayout 16
typedef jobject (*func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_R_arc_graphics_g2d_GlyphLayout)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3);
#define VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout 17
typedef jobject (*func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jint param4, jbool param5);
#define VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout 18
typedef jobject (*func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4, jfloat param5, jint param6, jbool param7);
#define VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout 19
typedef jobject (*func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4, jfloat param5, jint param6, jbool param7, jobject param8);
#define VTABLE_arc_graphics_g2d_Font_draw_arc_graphics_g2d_GlyphLayout_float_float 20
typedef void (*func_arc_graphics_g2d_Font_draw_arc_graphics_g2d_GlyphLayout_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_arc_graphics_g2d_Font_getColor_R_arc_graphics_Color 21
typedef jobject (*func_arc_graphics_g2d_Font_getColor_R_arc_graphics_Color)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font_setColor_arc_graphics_Color 22
typedef void (*func_arc_graphics_g2d_Font_setColor_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_Font_setColor_float_float_float_float 23
typedef void (*func_arc_graphics_g2d_Font_setColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_arc_graphics_g2d_Font_getScaleX_R_float 24
typedef jfloat (*func_arc_graphics_g2d_Font_getScaleX_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font_getScaleY_R_float 25
typedef jfloat (*func_arc_graphics_g2d_Font_getScaleY_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font_getRegion_R_arc_graphics_g2d_TextureRegion 26
typedef jobject (*func_arc_graphics_g2d_Font_getRegion_R_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font_getRegions_R_arc_struct_Seq 27
typedef jobject (*func_arc_graphics_g2d_Font_getRegions_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font_getRegion_int_R_arc_graphics_g2d_TextureRegion 28
typedef jobject (*func_arc_graphics_g2d_Font_getRegion_int_R_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_g2d_Font_getLineHeight_R_float 29
typedef jfloat (*func_arc_graphics_g2d_Font_getLineHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font_getSpaceXadvance_R_float 30
typedef jfloat (*func_arc_graphics_g2d_Font_getSpaceXadvance_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font_getXHeight_R_float 31
typedef jfloat (*func_arc_graphics_g2d_Font_getXHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font_getCapHeight_R_float 32
typedef jfloat (*func_arc_graphics_g2d_Font_getCapHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font_getAscent_R_float 33
typedef jfloat (*func_arc_graphics_g2d_Font_getAscent_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font_getDescent_R_float 34
typedef jfloat (*func_arc_graphics_g2d_Font_getDescent_R_float)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font_isFlipped_R_boolean 35
typedef jbool (*func_arc_graphics_g2d_Font_isFlipped_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font_setFixedWidthGlyphs_java_lang_CharSequence 36
typedef void (*func_arc_graphics_g2d_Font_setFixedWidthGlyphs_java_lang_CharSequence)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_Font_setUseIntegerPositions_boolean 37
typedef void (*func_arc_graphics_g2d_Font_setUseIntegerPositions_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean 38
typedef jbool (*func_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache 39
typedef jobject (*func_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData 40
typedef jobject (*func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font_ownsTexture_R_boolean 41
typedef jbool (*func_arc_graphics_g2d_Font_ownsTexture_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font_setOwnsTexture_boolean 42
typedef void (*func_arc_graphics_g2d_Font_setOwnsTexture_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_graphics_g2d_Font_newFontCache_R_arc_graphics_g2d_FontCache 43
typedef jobject (*func_arc_graphics_g2d_Font_newFontCache_R_arc_graphics_g2d_FontCache)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font_addFallback_arc_graphics_g2d_Font 44
typedef void (*func_arc_graphics_g2d_Font_addFallback_arc_graphics_g2d_Font)(jcontext ctx, jobject self, jobject param0);

void mark_arc_graphics_g2d_Font(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_Font(jcontext ctx);
void init_arc_graphics_g2d_Font_arc_files_Fi_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_arc_graphics_g2d_Font_arc_files_Fi_arc_graphics_g2d_TextureRegion_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
void init_arc_graphics_g2d_Font_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
void init_arc_graphics_g2d_Font_arc_files_Fi_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void init_arc_graphics_g2d_Font_arc_files_Fi_arc_files_Fi_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
void init_arc_graphics_g2d_Font_arc_files_Fi_arc_files_Fi_boolean_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jbool param3);
void init_arc_graphics_g2d_Font_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_TextureRegion_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
void init_arc_graphics_g2d_Font_arc_graphics_g2d_Font$FontData_arc_struct_Seq_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
jint SM_arc_graphics_g2d_Font_indexOf_java_lang_CharSequence_char_int_R_int(jcontext ctx, jobject param0, jchar param1, jint param2);
void M_arc_graphics_g2d_Font_load_arc_graphics_g2d_Font$FontData(jcontext ctx, jobject self, jobject param0);
jobject M_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
jobject M_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_arc_graphics_Color_float_boolean_int_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jobject param3, jfloat param4, jbool param5, jint param6);
jobject M_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3);
jobject M_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_float_int_boolean_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jint param4, jbool param5);
jobject M_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_int_float_int_boolean_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4, jfloat param5, jint param6, jbool param7);
jobject M_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_int_float_int_boolean_java_lang_String_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4, jfloat param5, jint param6, jbool param7, jobject param8);
void M_arc_graphics_g2d_Font_draw_arc_graphics_g2d_GlyphLayout_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
jobject M_arc_graphics_g2d_Font_getColor_R_arc_graphics_Color(jcontext ctx, jobject self);
void M_arc_graphics_g2d_Font_setColor_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_g2d_Font_setColor_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jfloat M_arc_graphics_g2d_Font_getScaleX_R_float(jcontext ctx, jobject self);
jfloat M_arc_graphics_g2d_Font_getScaleY_R_float(jcontext ctx, jobject self);
jobject M_arc_graphics_g2d_Font_getRegion_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self);
jobject M_arc_graphics_g2d_Font_getRegions_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_arc_graphics_g2d_Font_getRegion_int_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jint param0);
jfloat M_arc_graphics_g2d_Font_getLineHeight_R_float(jcontext ctx, jobject self);
jfloat M_arc_graphics_g2d_Font_getSpaceXadvance_R_float(jcontext ctx, jobject self);
jfloat M_arc_graphics_g2d_Font_getXHeight_R_float(jcontext ctx, jobject self);
jfloat M_arc_graphics_g2d_Font_getCapHeight_R_float(jcontext ctx, jobject self);
jfloat M_arc_graphics_g2d_Font_getAscent_R_float(jcontext ctx, jobject self);
jfloat M_arc_graphics_g2d_Font_getDescent_R_float(jcontext ctx, jobject self);
jbool M_arc_graphics_g2d_Font_isFlipped_R_boolean(jcontext ctx, jobject self);
void M_arc_graphics_g2d_Font_dispose(jcontext ctx, jobject self);
jbool M_arc_graphics_g2d_Font_isDisposed_R_boolean(jcontext ctx, jobject self);
void M_arc_graphics_g2d_Font_setFixedWidthGlyphs_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_g2d_Font_setUseIntegerPositions_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean(jcontext ctx, jobject self);
jobject M_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache(jcontext ctx, jobject self);
jobject M_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData(jcontext ctx, jobject self);
jbool M_arc_graphics_g2d_Font_ownsTexture_R_boolean(jcontext ctx, jobject self);
void M_arc_graphics_g2d_Font_setOwnsTexture_boolean(jcontext ctx, jobject self, jbool param0);
jobject M_arc_graphics_g2d_Font_newFontCache_R_arc_graphics_g2d_FontCache(jcontext ctx, jobject self);
jobject M_arc_graphics_g2d_Font_toString_R_java_lang_String(jcontext ctx, jobject self);
void M_arc_graphics_g2d_Font_addFallback_arc_graphics_g2d_Font(jcontext ctx, jobject self, jobject param0);
jbool SM_arc_graphics_g2d_Font_lambda$isDisposed$0_arc_graphics_g2d_TextureRegion_R_boolean(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
