#ifndef HEADER_arc_graphics_g2d_Font$FontData
#define HEADER_arc_graphics_g2d_Font$FontData

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_Font$FontData {
	java_lang_Object parent;
	jref F_glyphs;
	jref F_imagePaths;
	jref F_fontFile;
	jbool F_flipped;
	jfloat F_padTop;
	jfloat F_padRight;
	jfloat F_padBottom;
	jfloat F_padLeft;
	jfloat F_lineHeight;
	jfloat F_capHeight;
	jfloat F_ascent;
	jfloat F_descent;
	jfloat F_down;
	jfloat F_blankLineScale;
	jfloat F_scaleX;
	jfloat F_scaleY;
	jbool F_markupEnabled;
	jfloat F_cursorX;
	jref F_missingGlyph;
	jfloat F_spaceXadvance;
	jfloat F_xHeight;
	jref F_breakChars;
	jref F_xChars;
	jref F_capChars;
} arc_graphics_g2d_Font$FontData;

extern Class class_arc_graphics_g2d_Font$FontData;


#define VTABLE_arc_graphics_g2d_Font$FontData_hashCode_R_int 0
typedef jint (*func_arc_graphics_g2d_Font$FontData_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font$FontData_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g2d_Font$FontData_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_Font$FontData_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g2d_Font$FontData_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font$FontData_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g2d_Font$FontData_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font$FontData_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g2d_Font$FontData_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font$FontData_finalize 5
typedef void (*func_arc_graphics_g2d_Font$FontData_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font$FontData_notify 6
typedef void (*func_arc_graphics_g2d_Font$FontData_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font$FontData_notifyAll 7
typedef void (*func_arc_graphics_g2d_Font$FontData_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font$FontData_wait 8
typedef void (*func_arc_graphics_g2d_Font$FontData_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font$FontData_wait_long 9
typedef void (*func_arc_graphics_g2d_Font$FontData_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g2d_Font$FontData_wait_long_int 10
typedef void (*func_arc_graphics_g2d_Font$FontData_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_g2d_Font$FontData_setOverride_arc_graphics_g2d_Font$FontData 11
typedef void (*func_arc_graphics_g2d_Font$FontData_setOverride_arc_graphics_g2d_Font$FontData)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_Font$FontData_addFallback_arc_graphics_g2d_Font$FontData 12
typedef void (*func_arc_graphics_g2d_Font$FontData_addFallback_arc_graphics_g2d_Font$FontData)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_Font$FontData_load_arc_files_Fi_boolean 13
typedef void (*func_arc_graphics_g2d_Font$FontData_load_arc_files_Fi_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_graphics_g2d_Font$FontData_setGlyphRegion_arc_graphics_g2d_Font$Glyph_arc_graphics_g2d_TextureRegion 14
typedef void (*func_arc_graphics_g2d_Font$FontData_setGlyphRegion_arc_graphics_g2d_Font$Glyph_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_g2d_Font$FontData_setLineHeight_float 15
typedef void (*func_arc_graphics_g2d_Font$FontData_setLineHeight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_Font$FontData_setGlyph_int_arc_graphics_g2d_Font$Glyph 16
typedef void (*func_arc_graphics_g2d_Font$FontData_setGlyph_int_arc_graphics_g2d_Font$Glyph)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_arc_graphics_g2d_Font$FontData_getFirstGlyph_R_arc_graphics_g2d_Font$Glyph 17
typedef jobject (*func_arc_graphics_g2d_Font$FontData_getFirstGlyph_R_arc_graphics_g2d_Font$Glyph)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font$FontData_hasGlyph_char_R_boolean 18
typedef jbool (*func_arc_graphics_g2d_Font$FontData_hasGlyph_char_R_boolean)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph 19
typedef jobject (*func_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_arc_graphics_g2d_Font$FontData_getGlyphs_arc_graphics_g2d_GlyphLayout$GlyphRun_java_lang_CharSequence_int_int_arc_graphics_g2d_Font$Glyph 20
typedef void (*func_arc_graphics_g2d_Font$FontData_getGlyphs_arc_graphics_g2d_GlyphLayout$GlyphRun_java_lang_CharSequence_int_int_arc_graphics_g2d_Font$Glyph)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jobject param4);
#define VTABLE_arc_graphics_g2d_Font$FontData_getWrapIndex_arc_struct_Seq_int_R_int 21
typedef jint (*func_arc_graphics_g2d_Font$FontData_getWrapIndex_arc_struct_Seq_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_graphics_g2d_Font$FontData_isBreakChar_char_R_boolean 22
typedef jbool (*func_arc_graphics_g2d_Font$FontData_isBreakChar_char_R_boolean)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_arc_graphics_g2d_Font$FontData_isWhitespace_char_R_boolean 23
typedef jbool (*func_arc_graphics_g2d_Font$FontData_isWhitespace_char_R_boolean)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_arc_graphics_g2d_Font$FontData_getImagePath_int_R_java_lang_String 24
typedef jobject (*func_arc_graphics_g2d_Font$FontData_getImagePath_int_R_java_lang_String)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_graphics_g2d_Font$FontData_getImagePaths_R_Array1_java_lang_String 25
typedef jobject (*func_arc_graphics_g2d_Font$FontData_getImagePaths_R_Array1_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font$FontData_getFontFile_R_arc_files_Fi 26
typedef jobject (*func_arc_graphics_g2d_Font$FontData_getFontFile_R_arc_files_Fi)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_Font$FontData_setScale_float_float 27
typedef void (*func_arc_graphics_g2d_Font$FontData_setScale_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_arc_graphics_g2d_Font$FontData_setScale_float 28
typedef void (*func_arc_graphics_g2d_Font$FontData_setScale_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_arc_graphics_g2d_Font$FontData_scale_float 29
typedef void (*func_arc_graphics_g2d_Font$FontData_scale_float)(jcontext ctx, jobject self, jfloat param0);

void mark_arc_graphics_g2d_Font$FontData(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_Font$FontData(jcontext ctx);
void init_arc_graphics_g2d_Font$FontData(jcontext ctx, jobject self);
void init_arc_graphics_g2d_Font$FontData_arc_files_Fi_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_arc_graphics_g2d_Font$FontData_setOverride_arc_graphics_g2d_Font$FontData(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_g2d_Font$FontData_addFallback_arc_graphics_g2d_Font$FontData(jcontext ctx, jobject self, jobject param0);
void M_arc_graphics_g2d_Font$FontData_load_arc_files_Fi_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_arc_graphics_g2d_Font$FontData_setGlyphRegion_arc_graphics_g2d_Font$Glyph_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_graphics_g2d_Font$FontData_setLineHeight_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_graphics_g2d_Font$FontData_setGlyph_int_arc_graphics_g2d_Font$Glyph(jcontext ctx, jobject self, jint param0, jobject param1);
jobject M_arc_graphics_g2d_Font$FontData_getFirstGlyph_R_arc_graphics_g2d_Font$Glyph(jcontext ctx, jobject self);
jbool M_arc_graphics_g2d_Font$FontData_hasGlyph_char_R_boolean(jcontext ctx, jobject self, jchar param0);
jobject M_arc_graphics_g2d_Font$FontData_getGlyph_char_R_arc_graphics_g2d_Font$Glyph(jcontext ctx, jobject self, jchar param0);
void M_arc_graphics_g2d_Font$FontData_getGlyphs_arc_graphics_g2d_GlyphLayout$GlyphRun_java_lang_CharSequence_int_int_arc_graphics_g2d_Font$Glyph(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jobject param4);
jint M_arc_graphics_g2d_Font$FontData_getWrapIndex_arc_struct_Seq_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1);
jbool M_arc_graphics_g2d_Font$FontData_isBreakChar_char_R_boolean(jcontext ctx, jobject self, jchar param0);
jbool M_arc_graphics_g2d_Font$FontData_isWhitespace_char_R_boolean(jcontext ctx, jobject self, jchar param0);
jobject M_arc_graphics_g2d_Font$FontData_getImagePath_int_R_java_lang_String(jcontext ctx, jobject self, jint param0);
jobject M_arc_graphics_g2d_Font$FontData_getImagePaths_R_Array1_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_graphics_g2d_Font$FontData_getFontFile_R_arc_files_Fi(jcontext ctx, jobject self);
void M_arc_graphics_g2d_Font$FontData_setScale_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_arc_graphics_g2d_Font$FontData_setScale_float(jcontext ctx, jobject self, jfloat param0);
void M_arc_graphics_g2d_Font$FontData_scale_float(jcontext ctx, jobject self, jfloat param0);

#ifdef __cplusplus
}
#endif

#endif
