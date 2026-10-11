#ifndef HEADER_arc_freetype_FreeType$GlyphMetrics
#define HEADER_arc_freetype_FreeType$GlyphMetrics

#include "Clearwing.h"
#include "arc/freetype/FreeType_Pointer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_freetype_FreeType$GlyphMetrics {
	arc_freetype_FreeType$Pointer parent;
} arc_freetype_FreeType$GlyphMetrics;

extern Class class_arc_freetype_FreeType$GlyphMetrics;


#define VTABLE_arc_freetype_FreeType$GlyphMetrics_hashCode_R_int 0
typedef jint (*func_arc_freetype_FreeType$GlyphMetrics_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphMetrics_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_freetype_FreeType$GlyphMetrics_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_freetype_FreeType$GlyphMetrics_clone_R_java_lang_Object 2
typedef jobject (*func_arc_freetype_FreeType$GlyphMetrics_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphMetrics_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_freetype_FreeType$GlyphMetrics_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphMetrics_toString_R_java_lang_String 4
typedef jobject (*func_arc_freetype_FreeType$GlyphMetrics_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphMetrics_finalize 5
typedef void (*func_arc_freetype_FreeType$GlyphMetrics_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphMetrics_notify 6
typedef void (*func_arc_freetype_FreeType$GlyphMetrics_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphMetrics_notifyAll 7
typedef void (*func_arc_freetype_FreeType$GlyphMetrics_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphMetrics_wait 8
typedef void (*func_arc_freetype_FreeType$GlyphMetrics_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphMetrics_wait_long 9
typedef void (*func_arc_freetype_FreeType$GlyphMetrics_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_freetype_FreeType$GlyphMetrics_wait_long_int 10
typedef void (*func_arc_freetype_FreeType$GlyphMetrics_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_freetype_FreeType$GlyphMetrics_getWidth_R_int 11
typedef jint (*func_arc_freetype_FreeType$GlyphMetrics_getWidth_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphMetrics_getHeight_R_int 12
typedef jint (*func_arc_freetype_FreeType$GlyphMetrics_getHeight_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphMetrics_getHoriBearingX_R_int 13
typedef jint (*func_arc_freetype_FreeType$GlyphMetrics_getHoriBearingX_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphMetrics_getHoriBearingY_R_int 14
typedef jint (*func_arc_freetype_FreeType$GlyphMetrics_getHoriBearingY_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphMetrics_getHoriAdvance_R_int 15
typedef jint (*func_arc_freetype_FreeType$GlyphMetrics_getHoriAdvance_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphMetrics_getVertBearingX_R_int 16
typedef jint (*func_arc_freetype_FreeType$GlyphMetrics_getVertBearingX_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphMetrics_getVertBearingY_R_int 17
typedef jint (*func_arc_freetype_FreeType$GlyphMetrics_getVertBearingY_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeType$GlyphMetrics_getVertAdvance_R_int 18
typedef jint (*func_arc_freetype_FreeType$GlyphMetrics_getVertAdvance_R_int)(jcontext ctx, jobject self);

void mark_arc_freetype_FreeType$GlyphMetrics(jobject object, jint mark, jint depth);
void clinit_arc_freetype_FreeType$GlyphMetrics(jcontext ctx);
void init_arc_freetype_FreeType$GlyphMetrics_long(jcontext ctx, jobject self, jlong param0);
jint SM_arc_freetype_FreeType$GlyphMetrics_getWidth_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$GlyphMetrics_getHeight_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$GlyphMetrics_getHoriBearingX_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$GlyphMetrics_getHoriBearingY_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$GlyphMetrics_getHoriAdvance_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$GlyphMetrics_getVertBearingX_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$GlyphMetrics_getVertBearingY_long_R_int(jcontext ctx, jlong param0);
jint SM_arc_freetype_FreeType$GlyphMetrics_getVertAdvance_long_R_int(jcontext ctx, jlong param0);
jint M_arc_freetype_FreeType$GlyphMetrics_getWidth_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$GlyphMetrics_getHeight_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$GlyphMetrics_getHoriBearingX_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$GlyphMetrics_getHoriBearingY_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$GlyphMetrics_getHoriAdvance_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$GlyphMetrics_getVertBearingX_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$GlyphMetrics_getVertBearingY_R_int(jcontext ctx, jobject self);
jint M_arc_freetype_FreeType$GlyphMetrics_getVertAdvance_R_int(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
