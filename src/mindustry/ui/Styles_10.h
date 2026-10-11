#ifndef HEADER_mindustry_ui_Styles$10
#define HEADER_mindustry_ui_Styles$10

#include "Clearwing.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_Styles$10 {
	arc_scene_ui_TextButton$TextButtonStyle parent;
} mindustry_ui_Styles$10;

extern Class class_mindustry_ui_Styles$10;


#define VTABLE_mindustry_ui_Styles$10_hashCode_R_int 0
typedef jint (*func_mindustry_ui_Styles$10_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles$10_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_Styles$10_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Styles$10_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_Styles$10_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles$10_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_Styles$10_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles$10_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_Styles$10_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles$10_finalize 5
typedef void (*func_mindustry_ui_Styles$10_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles$10_notify 6
typedef void (*func_mindustry_ui_Styles$10_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles$10_notifyAll 7
typedef void (*func_mindustry_ui_Styles$10_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles$10_wait 8
typedef void (*func_mindustry_ui_Styles$10_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Styles$10_wait_long 9
typedef void (*func_mindustry_ui_Styles$10_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_Styles$10_wait_long_int 10
typedef void (*func_mindustry_ui_Styles$10_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_ui_Styles$10(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_Styles$10(jcontext ctx);
void init_mindustry_ui_Styles$10(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
