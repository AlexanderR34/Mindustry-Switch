#ifndef HEADER_mindustry_core_Version
#define HEADER_mindustry_core_Version

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_core_Version {
	java_lang_Object parent;
} mindustry_core_Version;

extern Class class_mindustry_core_Version;

extern jobject SF_mindustry_core_Version_type;
extern jobject SF_mindustry_core_Version_modifier;
extern jobject SF_mindustry_core_Version_commitHash;
extern jobject SF_mindustry_core_Version_buildDate;
extern jint SF_mindustry_core_Version_number;
extern jint SF_mindustry_core_Version_build;
extern jint SF_mindustry_core_Version_revision;
extern jbool SF_mindustry_core_Version_isSteam;
extern jbool SF_mindustry_core_Version_enabled;

#define VTABLE_mindustry_core_Version_hashCode_R_int 0
typedef jint (*func_mindustry_core_Version_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Version_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_core_Version_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_core_Version_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_core_Version_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Version_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_core_Version_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Version_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_core_Version_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Version_finalize 5
typedef void (*func_mindustry_core_Version_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Version_notify 6
typedef void (*func_mindustry_core_Version_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Version_notifyAll 7
typedef void (*func_mindustry_core_Version_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Version_wait 8
typedef void (*func_mindustry_core_Version_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_core_Version_wait_long 9
typedef void (*func_mindustry_core_Version_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_core_Version_wait_long_int 10
typedef void (*func_mindustry_core_Version_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_core_Version(jobject object, jint mark, jint depth);
void clinit_mindustry_core_Version(jcontext ctx);
void init_mindustry_core_Version(jcontext ctx, jobject self);
void SM_mindustry_core_Version_init(jcontext ctx);
jbool SM_mindustry_core_Version_isAtLeast_java_lang_String_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_core_Version_isAtLeast_int_int_java_lang_String_R_boolean(jcontext ctx, jint param0, jint param1, jobject param2);
jobject SM_mindustry_core_Version_buildString_R_java_lang_String(jcontext ctx);
jobject SM_mindustry_core_Version_combined_R_java_lang_String(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
