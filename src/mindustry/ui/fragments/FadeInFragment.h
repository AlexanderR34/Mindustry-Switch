#ifndef HEADER_mindustry_ui_fragments_FadeInFragment
#define HEADER_mindustry_ui_fragments_FadeInFragment

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_fragments_FadeInFragment {
	java_lang_Object parent;
	jfloat F_time;
} mindustry_ui_fragments_FadeInFragment;

extern Class class_mindustry_ui_fragments_FadeInFragment;

extern jfloat SF_mindustry_ui_fragments_FadeInFragment_duration;

#define VTABLE_mindustry_ui_fragments_FadeInFragment_hashCode_R_int 0
typedef jint (*func_mindustry_ui_fragments_FadeInFragment_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_FadeInFragment_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_fragments_FadeInFragment_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_fragments_FadeInFragment_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_fragments_FadeInFragment_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_FadeInFragment_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_fragments_FadeInFragment_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_FadeInFragment_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_fragments_FadeInFragment_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_FadeInFragment_finalize 5
typedef void (*func_mindustry_ui_fragments_FadeInFragment_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_FadeInFragment_notify 6
typedef void (*func_mindustry_ui_fragments_FadeInFragment_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_FadeInFragment_notifyAll 7
typedef void (*func_mindustry_ui_fragments_FadeInFragment_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_FadeInFragment_wait 8
typedef void (*func_mindustry_ui_fragments_FadeInFragment_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_fragments_FadeInFragment_wait_long 9
typedef void (*func_mindustry_ui_fragments_FadeInFragment_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_fragments_FadeInFragment_wait_long_int 10
typedef void (*func_mindustry_ui_fragments_FadeInFragment_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_fragments_FadeInFragment_build_arc_scene_Group 11
typedef void (*func_mindustry_ui_fragments_FadeInFragment_build_arc_scene_Group)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_ui_fragments_FadeInFragment(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_fragments_FadeInFragment(jcontext ctx);
void init_mindustry_ui_fragments_FadeInFragment(jcontext ctx, jobject self);
void M_mindustry_ui_fragments_FadeInFragment_build_arc_scene_Group(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
