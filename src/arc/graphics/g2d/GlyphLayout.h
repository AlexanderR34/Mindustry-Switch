#ifndef HEADER_arc_graphics_g2d_GlyphLayout
#define HEADER_arc_graphics_g2d_GlyphLayout

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/pooling/Pool_Poolable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_g2d_GlyphLayout {
	java_lang_Object parent;
	jref F_runs;
	jref F_colorStack;
	jbool F_ignoreMarkup;
	jfloat F_width;
	jfloat F_height;
} arc_graphics_g2d_GlyphLayout;

extern Class class_arc_graphics_g2d_GlyphLayout;


#define VTABLE_arc_graphics_g2d_GlyphLayout_hashCode_R_int 0
typedef jint (*func_arc_graphics_g2d_GlyphLayout_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_GlyphLayout_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_g2d_GlyphLayout_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_g2d_GlyphLayout_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_g2d_GlyphLayout_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_GlyphLayout_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_g2d_GlyphLayout_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_GlyphLayout_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_g2d_GlyphLayout_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_GlyphLayout_finalize 5
typedef void (*func_arc_graphics_g2d_GlyphLayout_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_GlyphLayout_notify 6
typedef void (*func_arc_graphics_g2d_GlyphLayout_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_GlyphLayout_notifyAll 7
typedef void (*func_arc_graphics_g2d_GlyphLayout_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_GlyphLayout_wait 8
typedef void (*func_arc_graphics_g2d_GlyphLayout_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_GlyphLayout_wait_long 9
typedef void (*func_arc_graphics_g2d_GlyphLayout_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_g2d_GlyphLayout_wait_long_int 10
typedef void (*func_arc_graphics_g2d_GlyphLayout_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_g2d_GlyphLayout_reset 11
typedef void (*func_arc_graphics_g2d_GlyphLayout_reset)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_GlyphLayout_free 12
typedef void (*func_arc_graphics_g2d_GlyphLayout_free)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence 13
typedef void (*func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_arc_graphics_Color_float_int_boolean 14
typedef void (*func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_arc_graphics_Color_float_int_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jint param4, jbool param5);
#define VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_int_int_arc_graphics_Color_float_int_boolean_java_lang_String 15
typedef void (*func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_int_int_arc_graphics_Color_float_int_boolean_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jobject param4, jfloat param5, jint param6, jbool param7, jobject param8);
#define VTABLE_arc_graphics_g2d_GlyphLayout_truncate_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_GlyphLayout$GlyphRun_float_java_lang_String_int_arc_util_pooling_Pool 16
typedef void (*func_arc_graphics_g2d_GlyphLayout_truncate_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_GlyphLayout$GlyphRun_float_java_lang_String_int_arc_util_pooling_Pool)(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jobject param3, jint param4, jobject param5);
#define VTABLE_arc_graphics_g2d_GlyphLayout_wrap_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_GlyphLayout$GlyphRun_arc_util_pooling_Pool_int_int_R_arc_graphics_g2d_GlyphLayout$GlyphRun 17
typedef jobject (*func_arc_graphics_g2d_GlyphLayout_wrap_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_GlyphLayout$GlyphRun_arc_util_pooling_Pool_int_int_R_arc_graphics_g2d_GlyphLayout$GlyphRun)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jint param4);
#define VTABLE_arc_graphics_g2d_GlyphLayout_adjustLastGlyph_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_GlyphLayout$GlyphRun 18
typedef void (*func_arc_graphics_g2d_GlyphLayout_adjustLastGlyph_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_GlyphLayout$GlyphRun)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_graphics_g2d_GlyphLayout_parseColorMarkup_java_lang_CharSequence_int_int_arc_util_pooling_Pool_R_int 19
typedef jint (*func_arc_graphics_g2d_GlyphLayout_parseColorMarkup_java_lang_CharSequence_int_int_arc_util_pooling_Pool_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3);

void mark_arc_graphics_g2d_GlyphLayout(jobject object, jint mark, jint depth);
void clinit_arc_graphics_g2d_GlyphLayout(jcontext ctx);
void init_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self);
void init_arc_graphics_g2d_GlyphLayout_boolean(jcontext ctx, jobject self, jbool param0);
void init_arc_graphics_g2d_GlyphLayout_arc_graphics_g2d_Font_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_arc_graphics_g2d_GlyphLayout_arc_graphics_g2d_Font_java_lang_CharSequence_arc_graphics_Color_float_int_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jint param4, jbool param5);
void init_arc_graphics_g2d_GlyphLayout_arc_graphics_g2d_Font_java_lang_CharSequence_int_int_arc_graphics_Color_float_int_boolean_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jobject param4, jfloat param5, jint param6, jbool param7, jobject param8);
jobject SM_arc_graphics_g2d_GlyphLayout_obtain_R_arc_graphics_g2d_GlyphLayout(jcontext ctx);
void M_arc_graphics_g2d_GlyphLayout_free(jcontext ctx, jobject self);
void M_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_arc_graphics_Color_float_int_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jint param4, jbool param5);
void M_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_int_int_arc_graphics_Color_float_int_boolean_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jobject param4, jfloat param5, jint param6, jbool param7, jobject param8);
void M_arc_graphics_g2d_GlyphLayout_truncate_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_GlyphLayout$GlyphRun_float_java_lang_String_int_arc_util_pooling_Pool(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jobject param3, jint param4, jobject param5);
jobject M_arc_graphics_g2d_GlyphLayout_wrap_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_GlyphLayout$GlyphRun_arc_util_pooling_Pool_int_int_R_arc_graphics_g2d_GlyphLayout$GlyphRun(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jint param4);
void M_arc_graphics_g2d_GlyphLayout_adjustLastGlyph_arc_graphics_g2d_Font$FontData_arc_graphics_g2d_GlyphLayout$GlyphRun(jcontext ctx, jobject self, jobject param0, jobject param1);
jint M_arc_graphics_g2d_GlyphLayout_parseColorMarkup_java_lang_CharSequence_int_int_arc_util_pooling_Pool_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3);
void M_arc_graphics_g2d_GlyphLayout_reset(jcontext ctx, jobject self);
jobject M_arc_graphics_g2d_GlyphLayout_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
