#ifndef HEADER_mindustry_ui_Links$LinkEntry
#define HEADER_mindustry_ui_Links$LinkEntry

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_Links$LinkEntry {
	java_lang_Object parent;
	jref F_name;
	jref F_title;
	jref F_description;
	jref F_link;
	jref F_color;
	jref F_icon;
} mindustry_ui_Links$LinkEntry;

extern Class class_mindustry_ui_Links$LinkEntry;


#define VTABLE_mindustry_ui_Links$LinkEntry_hashCode_R_int 0
typedef jint (*func_mindustry_ui_Links$LinkEntry_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Links$LinkEntry_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_Links$LinkEntry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_Links$LinkEntry_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_Links$LinkEntry_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Links$LinkEntry_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_Links$LinkEntry_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Links$LinkEntry_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_Links$LinkEntry_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Links$LinkEntry_finalize 5
typedef void (*func_mindustry_ui_Links$LinkEntry_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Links$LinkEntry_notify 6
typedef void (*func_mindustry_ui_Links$LinkEntry_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Links$LinkEntry_notifyAll 7
typedef void (*func_mindustry_ui_Links$LinkEntry_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Links$LinkEntry_wait 8
typedef void (*func_mindustry_ui_Links$LinkEntry_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_Links$LinkEntry_wait_long 9
typedef void (*func_mindustry_ui_Links$LinkEntry_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_Links$LinkEntry_wait_long_int 10
typedef void (*func_mindustry_ui_Links$LinkEntry_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_ui_Links$LinkEntry(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_Links$LinkEntry(jcontext ctx);
void init_mindustry_ui_Links$LinkEntry_java_lang_String_java_lang_String_arc_scene_style_Drawable_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);

#ifdef __cplusplus
}
#endif

#endif
