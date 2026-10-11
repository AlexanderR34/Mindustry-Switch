#ifndef HEADER_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap
#define HEADER_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap {
	java_lang_Object parent;
	jref F_glyph;
	jref F_bitmap;
	jref F_this$0;
} arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap;

extern Class class_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap;


#define VTABLE_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap_hashCode_R_int 0
typedef jint (*func_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap_clone_R_java_lang_Object 2
typedef jobject (*func_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap_toString_R_java_lang_String 4
typedef jobject (*func_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap_finalize 5
typedef void (*func_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap_notify 6
typedef void (*func_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap_notifyAll 7
typedef void (*func_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap_wait 8
typedef void (*func_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap_wait_long 9
typedef void (*func_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap_wait_long_int 10
typedef void (*func_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap(jobject object, jint mark, jint depth);
void clinit_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap(jcontext ctx);
void init_arc_freetype_FreeTypeFontGenerator$GlyphAndBitmap_arc_freetype_FreeTypeFontGenerator(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
