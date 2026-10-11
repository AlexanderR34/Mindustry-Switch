#ifndef HEADER_mindustry_mod_Mods$ModMeta
#define HEADER_mindustry_mod_Mods$ModMeta

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_mod_Mods$ModMeta {
	java_lang_Object parent;
	jref F_name;
	jref F_internalName;
	jref F_minGameVersion;
	jref F_displayName;
	jref F_author;
	jref F_description;
	jref F_subtitle;
	jref F_version;
	jref F_main;
	jref F_repo;
	jref F_dependencies;
	jref F_softDependencies;
	jbool F_hidden;
	jbool F_java;
	jbool F_iosCompatible;
	jfloat F_texturescale;
	jbool F_pregenerated;
	jref F_contentOrder;
	jbool F_legacyCompatible;
} mindustry_mod_Mods$ModMeta;

extern Class class_mindustry_mod_Mods$ModMeta;


#define VTABLE_mindustry_mod_Mods$ModMeta_hashCode_R_int 0
typedef jint (*func_mindustry_mod_Mods$ModMeta_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$ModMeta_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_mod_Mods$ModMeta_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$ModMeta_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_mod_Mods$ModMeta_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$ModMeta_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_mod_Mods$ModMeta_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$ModMeta_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_mod_Mods$ModMeta_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$ModMeta_finalize 5
typedef void (*func_mindustry_mod_Mods$ModMeta_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$ModMeta_notify 6
typedef void (*func_mindustry_mod_Mods$ModMeta_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$ModMeta_notifyAll 7
typedef void (*func_mindustry_mod_Mods$ModMeta_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$ModMeta_wait 8
typedef void (*func_mindustry_mod_Mods$ModMeta_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$ModMeta_wait_long 9
typedef void (*func_mindustry_mod_Mods$ModMeta_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_mod_Mods$ModMeta_wait_long_int 10
typedef void (*func_mindustry_mod_Mods$ModMeta_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_mod_Mods$ModMeta_isBlacklisted_R_boolean 11
typedef jbool (*func_mindustry_mod_Mods$ModMeta_isBlacklisted_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$ModMeta_shortDescription_R_java_lang_String 12
typedef jobject (*func_mindustry_mod_Mods$ModMeta_shortDescription_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$ModMeta_cleanup 13
typedef void (*func_mindustry_mod_Mods$ModMeta_cleanup)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$ModMeta_getMinMajor_R_int 14
typedef jint (*func_mindustry_mod_Mods$ModMeta_getMinMajor_R_int)(jcontext ctx, jobject self);

void mark_mindustry_mod_Mods$ModMeta(jobject object, jint mark, jint depth);
void clinit_mindustry_mod_Mods$ModMeta(jcontext ctx);
void init_mindustry_mod_Mods$ModMeta(jcontext ctx, jobject self);
jbool M_mindustry_mod_Mods$ModMeta_isBlacklisted_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_mod_Mods$ModMeta_shortDescription_R_java_lang_String(jcontext ctx, jobject self);
void M_mindustry_mod_Mods$ModMeta_cleanup(jcontext ctx, jobject self);
jint M_mindustry_mod_Mods$ModMeta_getMinMajor_R_int(jcontext ctx, jobject self);
jobject M_mindustry_mod_Mods$ModMeta_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
