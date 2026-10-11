#ifndef HEADER_arc_graphics_Pixmap$Format
#define HEADER_arc_graphics_Pixmap$Format

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_graphics_Pixmap$Format {
	java_lang_Enum parent;
	jint F_glFormat;
	jint F_glType;
} arc_graphics_Pixmap$Format;

extern Class class_arc_graphics_Pixmap$Format;

extern jobject SF_arc_graphics_Pixmap$Format_alpha;
extern jobject SF_arc_graphics_Pixmap$Format_intensity;
extern jobject SF_arc_graphics_Pixmap$Format_luminanceAlpha;
extern jobject SF_arc_graphics_Pixmap$Format_rgb565;
extern jobject SF_arc_graphics_Pixmap$Format_rgba4444;
extern jobject SF_arc_graphics_Pixmap$Format_rgb888;
extern jobject SF_arc_graphics_Pixmap$Format_rgba8888;
extern jobject SF_arc_graphics_Pixmap$Format_all;
extern jobject SF_arc_graphics_Pixmap$Format_$VALUES;

#define VTABLE_arc_graphics_Pixmap$Format_hashCode_R_int 0
typedef jint (*func_arc_graphics_Pixmap$Format_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmap$Format_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_graphics_Pixmap$Format_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Pixmap$Format_clone_R_java_lang_Object 2
typedef jobject (*func_arc_graphics_Pixmap$Format_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmap$Format_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_graphics_Pixmap$Format_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmap$Format_toString_R_java_lang_String 4
typedef jobject (*func_arc_graphics_Pixmap$Format_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmap$Format_finalize 5
typedef void (*func_arc_graphics_Pixmap$Format_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmap$Format_notify 6
typedef void (*func_arc_graphics_Pixmap$Format_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmap$Format_notifyAll 7
typedef void (*func_arc_graphics_Pixmap$Format_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmap$Format_wait 8
typedef void (*func_arc_graphics_Pixmap$Format_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmap$Format_wait_long 9
typedef void (*func_arc_graphics_Pixmap$Format_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_graphics_Pixmap$Format_wait_long_int 10
typedef void (*func_arc_graphics_Pixmap$Format_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_graphics_Pixmap$Format_compareTo_java_lang_Object_R_int 11
typedef jint (*func_arc_graphics_Pixmap$Format_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Pixmap$Format_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_arc_graphics_Pixmap$Format_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_graphics_Pixmap$Format_name_R_java_lang_String 13
typedef jobject (*func_arc_graphics_Pixmap$Format_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmap$Format_ordinal_R_int 14
typedef jint (*func_arc_graphics_Pixmap$Format_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_graphics_Pixmap$Format_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_arc_graphics_Pixmap$Format_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_arc_graphics_Pixmap$Format(jobject object, jint mark, jint depth);
void clinit_arc_graphics_Pixmap$Format(jcontext ctx);
jobject SM_arc_graphics_Pixmap$Format_values_R_Array1_arc_graphics_Pixmap$Format(jcontext ctx);
jobject SM_arc_graphics_Pixmap$Format_valueOf_java_lang_String_R_arc_graphics_Pixmap$Format(jcontext ctx, jobject param0);
void init_arc_graphics_Pixmap$Format_java_lang_String_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
jobject SM_arc_graphics_Pixmap$Format_$values_R_Array1_arc_graphics_Pixmap$Format(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
