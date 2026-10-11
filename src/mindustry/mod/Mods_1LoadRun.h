#ifndef HEADER_mindustry_mod_Mods$1LoadRun
#define HEADER_mindustry_mod_Mods$1LoadRun

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_mod_Mods$1LoadRun {
	java_lang_Object parent;
	jref F_type;
	jref F_file;
	jref F_mod;
	jref F_this$0;
} mindustry_mod_Mods$1LoadRun;

extern Class class_mindustry_mod_Mods$1LoadRun;


#define VTABLE_mindustry_mod_Mods$1LoadRun_hashCode_R_int 0
typedef jint (*func_mindustry_mod_Mods$1LoadRun_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$1LoadRun_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_mod_Mods$1LoadRun_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$1LoadRun_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_mod_Mods$1LoadRun_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$1LoadRun_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_mod_Mods$1LoadRun_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$1LoadRun_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_mod_Mods$1LoadRun_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$1LoadRun_finalize 5
typedef void (*func_mindustry_mod_Mods$1LoadRun_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$1LoadRun_notify 6
typedef void (*func_mindustry_mod_Mods$1LoadRun_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$1LoadRun_notifyAll 7
typedef void (*func_mindustry_mod_Mods$1LoadRun_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$1LoadRun_wait 8
typedef void (*func_mindustry_mod_Mods$1LoadRun_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$1LoadRun_wait_long 9
typedef void (*func_mindustry_mod_Mods$1LoadRun_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_mod_Mods$1LoadRun_wait_long_int 10
typedef void (*func_mindustry_mod_Mods$1LoadRun_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_mod_Mods$1LoadRun_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_mod_Mods$1LoadRun_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$1LoadRun_compareTo_mindustry_mod_Mods$1LoadRun_R_int 12
typedef jint (*func_mindustry_mod_Mods$1LoadRun_compareTo_mindustry_mod_Mods$1LoadRun_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_mod_Mods$1LoadRun(jobject object, jint mark, jint depth);
void clinit_mindustry_mod_Mods$1LoadRun(jcontext ctx);
void init_mindustry_mod_Mods$1LoadRun_mindustry_mod_Mods_mindustry_ctype_ContentType_arc_files_Fi_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
jint M_mindustry_mod_Mods$1LoadRun_compareTo_mindustry_mod_Mods$1LoadRun_R_int(jcontext ctx, jobject self, jobject param0);
jint M_mindustry_mod_Mods$1LoadRun_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
