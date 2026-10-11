#ifndef HEADER_mindustry_mod_ModListing
#define HEADER_mindustry_mod_ModListing

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_mod_ModListing {
	java_lang_Object parent;
	jref F_repo;
	jref F_name;
	jref F_internalName;
	jref F_author;
	jref F_lastUpdated;
	jref F_description;
	jref F_minGameVersion;
	jref F_version;
	jref F_iconHash;
	jbool F_hasScripts;
	jbool F_hasJava;
	jbool F_iosCompatible;
	jbool F_legacyCompatible;
	jbool F_hasIcon;
	jref F_releases;
	jref F_tags;
	jint F_stars;
} mindustry_mod_ModListing;

extern Class class_mindustry_mod_ModListing;


#define VTABLE_mindustry_mod_ModListing_hashCode_R_int 0
typedef jint (*func_mindustry_mod_ModListing_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_ModListing_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_mod_ModListing_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_ModListing_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_mod_ModListing_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_ModListing_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_mod_ModListing_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_ModListing_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_mod_ModListing_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_ModListing_finalize 5
typedef void (*func_mindustry_mod_ModListing_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_ModListing_notify 6
typedef void (*func_mindustry_mod_ModListing_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_ModListing_notifyAll 7
typedef void (*func_mindustry_mod_ModListing_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_ModListing_wait 8
typedef void (*func_mindustry_mod_ModListing_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_ModListing_wait_long 9
typedef void (*func_mindustry_mod_ModListing_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_mod_ModListing_wait_long_int 10
typedef void (*func_mindustry_mod_ModListing_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_mod_ModListing_getMatchingRelease_R_mindustry_mod_ModListing$ModRelease 11
typedef jobject (*func_mindustry_mod_ModListing_getMatchingRelease_R_mindustry_mod_ModListing$ModRelease)(jcontext ctx, jobject self);

void mark_mindustry_mod_ModListing(jobject object, jint mark, jint depth);
void clinit_mindustry_mod_ModListing(jcontext ctx);
void init_mindustry_mod_ModListing(jcontext ctx, jobject self);
jobject M_mindustry_mod_ModListing_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_mod_ModListing_getMatchingRelease_R_mindustry_mod_ModListing$ModRelease(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
