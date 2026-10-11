#ifndef HEADER_mindustry_logic_LCategory
#define HEADER_mindustry_logic_LCategory

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LCategory {
	java_lang_Object parent;
	jref F_name;
	jint F_id;
	jref F_color;
	jref F_icon;
} mindustry_logic_LCategory;

extern Class class_mindustry_logic_LCategory;

extern jobject SF_mindustry_logic_LCategory_all;
extern jobject SF_mindustry_logic_LCategory_unknown;
extern jobject SF_mindustry_logic_LCategory_io;
extern jobject SF_mindustry_logic_LCategory_block;
extern jobject SF_mindustry_logic_LCategory_operation;
extern jobject SF_mindustry_logic_LCategory_control;
extern jobject SF_mindustry_logic_LCategory_unit;
extern jobject SF_mindustry_logic_LCategory_world;

#define VTABLE_mindustry_logic_LCategory_hashCode_R_int 0
typedef jint (*func_mindustry_logic_LCategory_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCategory_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_LCategory_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCategory_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_LCategory_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCategory_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_LCategory_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCategory_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_LCategory_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCategory_finalize 5
typedef void (*func_mindustry_logic_LCategory_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCategory_notify 6
typedef void (*func_mindustry_logic_LCategory_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCategory_notifyAll 7
typedef void (*func_mindustry_logic_LCategory_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCategory_wait 8
typedef void (*func_mindustry_logic_LCategory_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCategory_wait_long 9
typedef void (*func_mindustry_logic_LCategory_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_LCategory_wait_long_int 10
typedef void (*func_mindustry_logic_LCategory_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_logic_LCategory_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_logic_LCategory_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LCategory_localized_R_java_lang_String 12
typedef jobject (*func_mindustry_logic_LCategory_localized_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCategory_description_R_java_lang_String 13
typedef jobject (*func_mindustry_logic_LCategory_description_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LCategory_compareTo_mindustry_logic_LCategory_R_int 14
typedef jint (*func_mindustry_logic_LCategory_compareTo_mindustry_logic_LCategory_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_logic_LCategory(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LCategory(jcontext ctx);
void init_mindustry_logic_LCategory_java_lang_String_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_mindustry_logic_LCategory_java_lang_String_arc_graphics_Color_arc_scene_style_Drawable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_mindustry_logic_LCategory_localized_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_logic_LCategory_description_R_java_lang_String(jcontext ctx, jobject self);
jint M_mindustry_logic_LCategory_compareTo_mindustry_logic_LCategory_R_int(jcontext ctx, jobject self, jobject param0);
jint M_mindustry_logic_LCategory_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
