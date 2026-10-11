#ifndef HEADER_mindustry_ui_Fonts$1
#define HEADER_mindustry_ui_Fonts$1

#include "Clearwing.h"
#include "arc/freetype/FreeTypeFontGenerator_FreeTypeFontParameter.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_Fonts$1 {
	arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter parent;
} mindustry_ui_Fonts$1;

extern Class class_mindustry_ui_Fonts$1;


#define VTABLE_mindustry_ui_Fonts$1_hashCode_R_int 0
typedef jint (*func_mindustry_ui_Fonts$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_Fonts$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Fonts$1_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_Fonts$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts$1_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_Fonts$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts$1_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_Fonts$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts$1_finalize 5
typedef void (*func_mindustry_ui_Fonts$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts$1_notify 6
typedef void (*func_mindustry_ui_Fonts$1_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts$1_notifyAll 7
typedef void (*func_mindustry_ui_Fonts$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts$1_wait 8
typedef void (*func_mindustry_ui_Fonts$1_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts$1_wait_long 9
typedef void (*func_mindustry_ui_Fonts$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_Fonts$1_wait_long_int 10
typedef void (*func_mindustry_ui_Fonts$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_ui_Fonts$1(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_Fonts$1(jcontext ctx);
void init_mindustry_ui_Fonts$1(jcontext ctx, jobject self);
jobject SM_mindustry_ui_Fonts$1_lambda$new$0_R_arc_graphics_g2d_Font(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
