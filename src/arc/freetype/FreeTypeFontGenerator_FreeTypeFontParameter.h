#ifndef HEADER_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter
#define HEADER_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter {
	java_lang_Object parent;
	jint F_size;
	jbool F_mono;
	jref F_hinting;
	jref F_color;
	jfloat F_gamma;
	jint F_renderCount;
	jfloat F_borderWidth;
	jref F_borderColor;
	jbool F_borderStraight;
	jfloat F_borderGamma;
	jint F_shadowOffsetX;
	jint F_shadowOffsetY;
	jref F_shadowColor;
	jint F_spaceX;
	jint F_spaceY;
	jint F_padTop;
	jint F_padLeft;
	jint F_padBottom;
	jint F_padRight;
	jref F_characters;
	jbool F_kerning;
	jref F_packer;
	jbool F_flip;
	jbool F_genMipMaps;
	jref F_minFilter;
	jref F_magFilter;
	jbool F_incremental;
	jref F_fallback;
} arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter;

extern Class class_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter;


#define VTABLE_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_hashCode_R_int 0
typedef jint (*func_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_clone_R_java_lang_Object 2
typedef jobject (*func_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_toString_R_java_lang_String 4
typedef jobject (*func_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_finalize 5
typedef void (*func_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_notify 6
typedef void (*func_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_notifyAll 7
typedef void (*func_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_wait 8
typedef void (*func_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_wait_long 9
typedef void (*func_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_wait_long_int 10
typedef void (*func_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(jobject object, jint mark, jint depth);
void clinit_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(jcontext ctx);
void init_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
