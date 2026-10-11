#ifndef HEADER_mindustry_mod_Plugin
#define HEADER_mindustry_mod_Plugin

#include "Clearwing.h"
#include "mindustry/mod/Mod.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_mod_Plugin {
	mindustry_mod_Mod parent;
} mindustry_mod_Plugin;

extern Class class_mindustry_mod_Plugin;


#define VTABLE_mindustry_mod_Plugin_hashCode_R_int 0
typedef jint (*func_mindustry_mod_Plugin_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Plugin_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_mod_Plugin_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Plugin_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_mod_Plugin_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Plugin_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_mod_Plugin_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Plugin_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_mod_Plugin_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Plugin_finalize 5
typedef void (*func_mindustry_mod_Plugin_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Plugin_notify 6
typedef void (*func_mindustry_mod_Plugin_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Plugin_notifyAll 7
typedef void (*func_mindustry_mod_Plugin_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Plugin_wait 8
typedef void (*func_mindustry_mod_Plugin_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Plugin_wait_long 9
typedef void (*func_mindustry_mod_Plugin_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_mod_Plugin_wait_long_int 10
typedef void (*func_mindustry_mod_Plugin_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_mod_Plugin_getConfigFolder_R_arc_files_Fi 11
typedef jobject (*func_mindustry_mod_Plugin_getConfigFolder_R_arc_files_Fi)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Plugin_getConfig_R_arc_files_Fi 12
typedef jobject (*func_mindustry_mod_Plugin_getConfig_R_arc_files_Fi)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Plugin_init 13
typedef void (*func_mindustry_mod_Plugin_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Plugin_loadContent 14
typedef void (*func_mindustry_mod_Plugin_loadContent)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Plugin_packSprites_mindustry_graphics_MultiPacker 15
typedef void (*func_mindustry_mod_Plugin_packSprites_mindustry_graphics_MultiPacker)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Plugin_registerServerCommands_arc_util_CommandHandler 16
typedef void (*func_mindustry_mod_Plugin_registerServerCommands_arc_util_CommandHandler)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Plugin_registerClientCommands_arc_util_CommandHandler 17
typedef void (*func_mindustry_mod_Plugin_registerClientCommands_arc_util_CommandHandler)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_mod_Plugin(jobject object, jint mark, jint depth);
void clinit_mindustry_mod_Plugin(jcontext ctx);
void init_mindustry_mod_Plugin(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
