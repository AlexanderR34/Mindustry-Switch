#ifndef HEADER_arc_freetype_FreeType$Face
#define HEADER_arc_freetype_FreeType$Face

#include "Clearwing.h"
#include "arc/freetype/FreeType_Pointer.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_freetype_FreeType$Face {
	arc_freetype_FreeType$Pointer parent;
	jref F_library;
} arc_freetype_FreeType$Face;

extern Class class_arc_freetype_FreeType$Face;


#define VTABLE_arc_freetype_FreeType$Face_hashCode_R_int 0
typedef jint (*func_arc_freetype_FreeType$Face_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Face_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_freetype_FreeType$Face_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_freetype_FreeType$Face_clone_R_java_lang_Object 2
typedef jobject (*func_arc_freetype_FreeType$Face_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Face_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_freetype_FreeType$Face_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Face_toString_R_java_lang_String 4
typedef jobject (*func_arc_freetype_FreeType$Face_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Face_finalize 5
typedef void (*func_arc_freetype_FreeType$Face_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Face_notify 6
typedef void (*func_arc_freetype_FreeType$Face_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Face_notifyAll 7
typedef void (*func_arc_freetype_FreeType$Face_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Face_wait 8
typedef void (*func_arc_freetype_FreeType$Face_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Face_wait_long 9
typedef void (*func_arc_freetype_FreeType$Face_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_freetype_FreeType$Face_wait_long_int 10
typedef void (*func_arc_freetype_FreeType$Face_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_freetype_FreeType$Face_dispose 11
typedef void (*func_arc_freetype_FreeType$Face_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Face_isDisposed_R_boolean 12
typedef jbool (*func_arc_freetype_FreeType$Face_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Face_getFaceFlags_R_int 13
typedef jint (*func_arc_freetype_FreeType$Face_getFaceFlags_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Face_getStyleFlags_R_int 14
typedef jint (*func_arc_freetype_FreeType$Face_getStyleFlags_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Face_getNumGlyphs_R_int 15
typedef jint (*func_arc_freetype_FreeType$Face_getNumGlyphs_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Face_getAscender_R_int 16
typedef jint (*func_arc_freetype_FreeType$Face_getAscender_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Face_getDescender_R_int 17
typedef jint (*func_arc_freetype_FreeType$Face_getDescender_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Face_getHeight_R_int 18
typedef jint (*func_arc_freetype_FreeType$Face_getHeight_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Face_getMaxAdvanceWidth_R_int 19
typedef jint (*func_arc_freetype_FreeType$Face_getMaxAdvanceWidth_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Face_getMaxAdvanceHeight_R_int 20
typedef jint (*func_arc_freetype_FreeType$Face_getMaxAdvanceHeight_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Face_getUnderlinePosition_R_int 21
typedef jint (*func_arc_freetype_FreeType$Face_getUnderlinePosition_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Face_getUnderlineThickness_R_int 22
typedef jint (*func_arc_freetype_FreeType$Face_getUnderlineThickness_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Face_selectSize_int_R_boolean 23
typedef jbool (*func_arc_freetype_FreeType$Face_selectSize_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_freetype_FreeType$Face_setCharSize_int_int_int_int_R_boolean 24
typedef jbool (*func_arc_freetype_FreeType$Face_setCharSize_int_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_arc_freetype_FreeType$Face_setPixelSizes_int_int_R_boolean 25
typedef jbool (*func_arc_freetype_FreeType$Face_setPixelSizes_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_freetype_FreeType$Face_loadGlyph_int_int_R_boolean 26
typedef jbool (*func_arc_freetype_FreeType$Face_loadGlyph_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_freetype_FreeType$Face_loadChar_int_int_R_boolean 27
typedef jbool (*func_arc_freetype_FreeType$Face_loadChar_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_arc_freetype_FreeType$Face_getGlyph_R_arc_freetype_FreeType$GlyphSlot 28
typedef jobject (*func_arc_freetype_FreeType$Face_getGlyph_R_arc_freetype_FreeType$GlyphSlot)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Face_getSize_R_arc_freetype_FreeType$Size 29
typedef jobject (*func_arc_freetype_FreeType$Face_getSize_R_arc_freetype_FreeType$Size)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Face_hasKerning_R_boolean 30
typedef jbool (*func_arc_freetype_FreeType$Face_hasKerning_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Face_getKerning_int_int_int_R_int 31
typedef jint (*func_arc_freetype_FreeType$Face_getKerning_int_int_int_R_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_arc_freetype_FreeType$Face_getCharIndex_int_R_int 32
typedef jint (*func_arc_freetype_FreeType$Face_getCharIndex_int_R_int)(jcontext ctx, jobject self, jint param0);

void mark_arc_freetype_FreeType$Face(jobject object, jint mark, jint depth);
void clinit_arc_freetype_FreeType$Face(jcontext ctx);
void init_arc_freetype_FreeType$Face_long_arc_freetype_FreeType$Library(jcontext ctx, jobject self, jlong param0, jobject param1);
void SM_arc_freetype_FreeType$Face_doneFace_long(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$Face_getFaceFlags_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$Face_getStyleFlags_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$Face_getNumGlyphs_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$Face_getAscender_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$Face_getDescender_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$Face_getHeight_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$Face_getMaxAdvanceWidth_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$Face_getMaxAdvanceHeight_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$Face_getUnderlinePosition_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$Face_getUnderlineThickness_long_R_int(jcontext ctx, jlong param0);
jbool SM_arc_freetype_FreeType$Face_selectSize_long_int_R_boolean(jcontext ctx, jlong param0, jint param1);
jbool SM_arc_freetype_FreeType$Face_setCharSize_long_int_int_int_int_R_boolean(jcontext ctx, jlong param0, jint param1, jint param2, jint param3, jint param4);
jbool SM_arc_freetype_FreeType$Face_setPixelSizes_long_int_int_R_boolean(jcontext ctx, jlong param0, jint param1, jint param2);
jbool SM_arc_freetype_FreeType$Face_loadGlyph_long_int_int_R_boolean(jcontext ctx, jlong param0, jint param1, jint param2);
jbool SM_arc_freetype_FreeType$Face_loadChar_long_int_int_R_boolean(jcontext ctx, jlong param0, jint param1, jint param2);
jlong SM_arc_freetype_FreeType$Face_getGlyph_long_R_long(jcontext ctx, jlong param0);
jlong SM_arc_freetype_FreeType$Face_getSize_long_R_long(jcontext ctx, jlong param0);
jbool SM_arc_freetype_FreeType$Face_hasKerning_long_R_boolean(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$Face_getKerning_long_int_int_int_R_int(jcontext ctx, jlong param0, jint param1, jint param2, jint param3);
jint SM_arc_freetype_FreeType$Face_getCharIndex_long_int_R_int(jcontext ctx, jlong param0, jint param1);
void M_arc_freetype_FreeType$Face_dispose(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$Face_getFaceFlags_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$Face_getStyleFlags_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$Face_getNumGlyphs_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$Face_getAscender_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$Face_getDescender_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$Face_getHeight_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$Face_getMaxAdvanceWidth_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$Face_getMaxAdvanceHeight_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$Face_getUnderlinePosition_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$Face_getUnderlineThickness_R_int(jcontext ctx, jobject self);
jbool M_arc_freetype_FreeType$Face_selectSize_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_arc_freetype_FreeType$Face_setCharSize_int_int_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jbool M_arc_freetype_FreeType$Face_setPixelSizes_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_arc_freetype_FreeType$Face_loadGlyph_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_arc_freetype_FreeType$Face_loadChar_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_arc_freetype_FreeType$Face_getGlyph_R_arc_freetype_FreeType$GlyphSlot(jcontext ctx, jobject self);
jobject M_arc_freetype_FreeType$Face_getSize_R_arc_freetype_FreeType$Size(jcontext ctx, jobject self);
jbool M_arc_freetype_FreeType$Face_hasKerning_R_boolean(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$Face_getKerning_int_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
jint M_arc_freetype_FreeType$Face_getCharIndex_int_R_int(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
