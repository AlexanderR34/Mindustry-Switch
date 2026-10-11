#ifndef HEADER_mindustry_ui_Fonts$5
#define HEADER_mindustry_ui_Fonts$5

#include "Clearwing.h"
#include "arc/freetype/FreeTypeFontGenerator_FreeTypeFontParameter.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_Fonts$5 {
	arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter parent;
} mindustry_ui_Fonts$5;

extern Class class_mindustry_ui_Fonts$5;


#define VTABLE_mindustry_ui_Fonts$5_hashCode_R_int 0
typedef jint (*func_mindustry_ui_Fonts$5_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts$5_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_Fonts$5_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Fonts$5_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_Fonts$5_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts$5_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_Fonts$5_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts$5_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_Fonts$5_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts$5_finalize 5
typedef void (*func_mindustry_ui_Fonts$5_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts$5_notify 6
typedef void (*func_mindustry_ui_Fonts$5_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts$5_notifyAll 7
typedef void (*func_mindustry_ui_Fonts$5_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts$5_wait 8
typedef void (*func_mindustry_ui_Fonts$5_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Fonts$5_wait_long 9
typedef void (*func_mindustry_ui_Fonts$5_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_Fonts$5_wait_long_int 10
typedef void (*func_mindustry_ui_Fonts$5_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_ui_Fonts$5(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_Fonts$5(jcontext ctx);
void init_mindustry_ui_Fonts$5(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
