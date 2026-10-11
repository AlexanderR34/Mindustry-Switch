#ifndef HEADER_arc_freetype_FreeType$Glyph
#define HEADER_arc_freetype_FreeType$Glyph

#include "Clearwing.h"
#include "arc/freetype/FreeType_Pointer.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_freetype_FreeType$Glyph {
	arc_freetype_FreeType$Pointer parent;
	jbool F_rendered;
} arc_freetype_FreeType$Glyph;

extern Class class_arc_freetype_FreeType$Glyph;


#define VTABLE_arc_freetype_FreeType$Glyph_hashCode_R_int 0
typedef jint (*func_arc_freetype_FreeType$Glyph_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Glyph_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_freetype_FreeType$Glyph_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_freetype_FreeType$Glyph_clone_R_java_lang_Object 2
typedef jobject (*func_arc_freetype_FreeType$Glyph_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Glyph_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_freetype_FreeType$Glyph_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Glyph_toString_R_java_lang_String 4
typedef jobject (*func_arc_freetype_FreeType$Glyph_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Glyph_finalize 5
typedef void (*func_arc_freetype_FreeType$Glyph_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Glyph_notify 6
typedef void (*func_arc_freetype_FreeType$Glyph_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Glyph_notifyAll 7
typedef void (*func_arc_freetype_FreeType$Glyph_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Glyph_wait 8
typedef void (*func_arc_freetype_FreeType$Glyph_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Glyph_wait_long 9
typedef void (*func_arc_freetype_FreeType$Glyph_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_freetype_FreeType$Glyph_wait_long_int 10
typedef void (*func_arc_freetype_FreeType$Glyph_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_freetype_FreeType$Glyph_dispose 11
typedef void (*func_arc_freetype_FreeType$Glyph_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Glyph_isDisposed_R_boolean 12
typedef jbool (*func_arc_freetype_FreeType$Glyph_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Glyph_strokeBorder_arc_freetype_FreeType$Stroker_boolean 13
typedef void (*func_arc_freetype_FreeType$Glyph_strokeBorder_arc_freetype_FreeType$Stroker_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_freetype_FreeType$Glyph_toBitmap_int 14
typedef void (*func_arc_freetype_FreeType$Glyph_toBitmap_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_freetype_FreeType$Glyph_getBitmap_R_arc_freetype_FreeType$Bitmap 15
typedef jobject (*func_arc_freetype_FreeType$Glyph_getBitmap_R_arc_freetype_FreeType$Bitmap)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Glyph_getLeft_R_int 16
typedef jint (*func_arc_freetype_FreeType$Glyph_getLeft_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$Glyph_getTop_R_int 17
typedef jint (*func_arc_freetype_FreeType$Glyph_getTop_R_int)(jcontext ctx, jobject self);

void mark_arc_freetype_FreeType$Glyph(jobject object, jint mark, jint depth);
void clinit_arc_freetype_FreeType$Glyph(jcontext ctx);
void init_arc_freetype_FreeType$Glyph_long(jcontext ctx, jobject self, jlong param0);
void SM_arc_freetype_FreeType$Glyph_done_long(jcontext ctx, jlong param0);
jlong SM_arc_freetype_FreeType$Glyph_strokeBorder_long_long_boolean_R_long(jcontext ctx, jlong param0, jlong param1, jbool param2);
jlong SM_arc_freetype_FreeType$Glyph_toBitmap_long_int_R_long(jcontext ctx, jlong param0, jint param1);
jlong SM_arc_freetype_FreeType$Glyph_getBitmap_long_R_long(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$Glyph_getLeft_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$Glyph_getTop_long_R_int(jcontext ctx, jlong param0);
void M_arc_freetype_FreeType$Glyph_dispose(jcontext ctx, jobject self);
void M_arc_freetype_FreeType$Glyph_strokeBorder_arc_freetype_FreeType$Stroker_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_arc_freetype_FreeType$Glyph_toBitmap_int(jcontext ctx, jobject self, jint param0);
jobject M_arc_freetype_FreeType$Glyph_getBitmap_R_arc_freetype_FreeType$Bitmap(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$Glyph_getLeft_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$Glyph_getTop_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
