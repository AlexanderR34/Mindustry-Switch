#ifndef HEADER_mindustry_mod_Mods$ModResolutionContext
#define HEADER_mindustry_mod_Mods$ModResolutionContext

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_mod_Mods$ModResolutionContext {
	java_lang_Object parent;
	jref F_dependencies;
	jref F_visited;
	jref F_ordered;
	jref F_invalid;
} mindustry_mod_Mods$ModResolutionContext;

extern Class class_mindustry_mod_Mods$ModResolutionContext;


#define VTABLE_mindustry_mod_Mods$ModResolutionContext_hashCode_R_int 0
typedef jint (*func_mindustry_mod_Mods$ModResolutionContext_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$ModResolutionContext_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_mod_Mods$ModResolutionContext_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Mods$ModResolutionContext_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_mod_Mods$ModResolutionContext_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$ModResolutionContext_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_mod_Mods$ModResolutionContext_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$ModResolutionContext_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_mod_Mods$ModResolutionContext_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$ModResolutionContext_finalize 5
typedef void (*func_mindustry_mod_Mods$ModResolutionContext_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$ModResolutionContext_notify 6
typedef void (*func_mindustry_mod_Mods$ModResolutionContext_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$ModResolutionContext_notifyAll 7
typedef void (*func_mindustry_mod_Mods$ModResolutionContext_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$ModResolutionContext_wait 8
typedef void (*func_mindustry_mod_Mods$ModResolutionContext_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Mods$ModResolutionContext_wait_long 9
typedef void (*func_mindustry_mod_Mods$ModResolutionContext_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_mod_Mods$ModResolutionContext_wait_long_int 10
typedef void (*func_mindustry_mod_Mods$ModResolutionContext_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_mod_Mods$ModResolutionContext(jobject object, jint mark, jint depth);
void clinit_mindustry_mod_Mods$ModResolutionContext(jcontext ctx);
void init_mindustry_mod_Mods$ModResolutionContext(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
