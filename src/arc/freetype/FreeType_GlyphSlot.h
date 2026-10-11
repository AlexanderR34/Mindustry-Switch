#ifndef HEADER_arc_freetype_FreeType$GlyphSlot
#define HEADER_arc_freetype_FreeType$GlyphSlot

#include "Clearwing.h"
#include "arc/freetype/FreeType_Pointer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_freetype_FreeType$GlyphSlot {
	arc_freetype_FreeType$Pointer parent;
} arc_freetype_FreeType$GlyphSlot;

extern Class class_arc_freetype_FreeType$GlyphSlot;


#define VTABLE_arc_freetype_FreeType$GlyphSlot_hashCode_R_int 0
typedef jint (*func_arc_freetype_FreeType$GlyphSlot_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphSlot_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_freetype_FreeType$GlyphSlot_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_freetype_FreeType$GlyphSlot_clone_R_java_lang_Object 2
typedef jobject (*func_arc_freetype_FreeType$GlyphSlot_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphSlot_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_freetype_FreeType$GlyphSlot_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphSlot_toString_R_java_lang_String 4
typedef jobject (*func_arc_freetype_FreeType$GlyphSlot_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphSlot_finalize 5
typedef void (*func_arc_freetype_FreeType$GlyphSlot_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphSlot_notify 6
typedef void (*func_arc_freetype_FreeType$GlyphSlot_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphSlot_notifyAll 7
typedef void (*func_arc_freetype_FreeType$GlyphSlot_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphSlot_wait 8
typedef void (*func_arc_freetype_FreeType$GlyphSlot_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphSlot_wait_long 9
typedef void (*func_arc_freetype_FreeType$GlyphSlot_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_freetype_FreeType$GlyphSlot_wait_long_int 10
typedef void (*func_arc_freetype_FreeType$GlyphSlot_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_freetype_FreeType$GlyphSlot_getMetrics_R_arc_freetype_FreeType$GlyphMetrics 11
typedef jobject (*func_arc_freetype_FreeType$GlyphSlot_getMetrics_R_arc_freetype_FreeType$GlyphMetrics)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphSlot_getLinearHoriAdvance_R_int 12
typedef jint (*func_arc_freetype_FreeType$GlyphSlot_getLinearHoriAdvance_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphSlot_getLinearVertAdvance_R_int 13
typedef jint (*func_arc_freetype_FreeType$GlyphSlot_getLinearVertAdvance_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphSlot_getAdvanceX_R_int 14
typedef jint (*func_arc_freetype_FreeType$GlyphSlot_getAdvanceX_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphSlot_getAdvanceY_R_int 15
typedef jint (*func_arc_freetype_FreeType$GlyphSlot_getAdvanceY_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphSlot_getFormat_R_int 16
typedef jint (*func_arc_freetype_FreeType$GlyphSlot_getFormat_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphSlot_getBitmap_R_arc_freetype_FreeType$Bitmap 17
typedef jobject (*func_arc_freetype_FreeType$GlyphSlot_getBitmap_R_arc_freetype_FreeType$Bitmap)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphSlot_getBitmapLeft_R_int 18
typedef jint (*func_arc_freetype_FreeType$GlyphSlot_getBitmapLeft_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphSlot_getBitmapTop_R_int 19
typedef jint (*func_arc_freetype_FreeType$GlyphSlot_getBitmapTop_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphSlot_renderGlyph_int_R_boolean 20
typedef jbool (*func_arc_freetype_FreeType$GlyphSlot_renderGlyph_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_freetype_FreeType$GlyphSlot_getGlyph_R_arc_freetype_FreeType$Glyph 21
typedef jobject (*func_arc_freetype_FreeType$GlyphSlot_getGlyph_R_arc_freetype_FreeType$Glyph)(jcontext ctx, jobject self);

void mark_arc_freetype_FreeType$GlyphSlot(jobject object, jint mark, jint depth);
void clinit_arc_freetype_FreeType$GlyphSlot(jcontext ctx);
void init_arc_freetype_FreeType$GlyphSlot_long(jcontext ctx, jobject self, jlong param0);
jlong SM_arc_freetype_FreeType$GlyphSlot_getMetrics_long_R_long(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$GlyphSlot_getLinearHoriAdvance_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$GlyphSlot_getLinearVertAdvance_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$GlyphSlot_getAdvanceX_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$GlyphSlot_getAdvanceY_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$GlyphSlot_getFormat_long_R_int(jcontext ctx, jlong param0);
jlong SM_arc_freetype_FreeType$GlyphSlot_getBitmap_long_R_long(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$GlyphSlot_getBitmapLeft_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$GlyphSlot_getBitmapTop_long_R_int(jcontext ctx, jlong param0);
jbool SM_arc_freetype_FreeType$GlyphSlot_renderGlyph_long_int_R_boolean(jcontext ctx, jlong param0, jint param1);
jlong SM_arc_freetype_FreeType$GlyphSlot_getGlyph_long_R_long(jcontext ctx, jlong param0);
jobject M_arc_freetype_FreeType$GlyphSlot_getMetrics_R_arc_freetype_FreeType$GlyphMetrics(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$GlyphSlot_getLinearHoriAdvance_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$GlyphSlot_getLinearVertAdvance_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$GlyphSlot_getAdvanceX_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$GlyphSlot_getAdvanceY_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$GlyphSlot_getFormat_R_int(jcontext ctx, jobject self);
jobject M_arc_freetype_FreeType$GlyphSlot_getBitmap_R_arc_freetype_FreeType$Bitmap(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$GlyphSlot_getBitmapLeft_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$GlyphSlot_getBitmapTop_R_int(jcontext ctx, jobject self);
jbool M_arc_freetype_FreeType$GlyphSlot_renderGlyph_int_R_boolean(jcontext ctx, jobject self, jint param0);
jobject M_arc_freetype_FreeType$GlyphSlot_getGlyph_R_arc_freetype_FreeType$Glyph(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
