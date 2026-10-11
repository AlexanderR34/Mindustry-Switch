#ifndef HEADER_mindustry_logic_GlobalVars$VarEntry
#define HEADER_mindustry_logic_GlobalVars$VarEntry

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_GlobalVars$VarEntry {
	java_lang_Object parent;
	jref F_name;
	jref F_description;
	jref F_icon;
	jbool F_privileged;
} mindustry_logic_GlobalVars$VarEntry;

extern Class class_mindustry_logic_GlobalVars$VarEntry;


#define VTABLE_mindustry_logic_GlobalVars$VarEntry_hashCode_R_int 0
typedef jint (*func_mindustry_logic_GlobalVars$VarEntry_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_GlobalVars$VarEntry_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_GlobalVars$VarEntry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_GlobalVars$VarEntry_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_GlobalVars$VarEntry_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_GlobalVars$VarEntry_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_GlobalVars$VarEntry_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_GlobalVars$VarEntry_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_GlobalVars$VarEntry_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_GlobalVars$VarEntry_finalize 5
typedef void (*func_mindustry_logic_GlobalVars$VarEntry_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_GlobalVars$VarEntry_notify 6
typedef void (*func_mindustry_logic_GlobalVars$VarEntry_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_GlobalVars$VarEntry_notifyAll 7
typedef void (*func_mindustry_logic_GlobalVars$VarEntry_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_GlobalVars$VarEntry_wait 8
typedef void (*func_mindustry_logic_GlobalVars$VarEntry_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_GlobalVars$VarEntry_wait_long 9
typedef void (*func_mindustry_logic_GlobalVars$VarEntry_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_GlobalVars$VarEntry_wait_long_int 10
typedef void (*func_mindustry_logic_GlobalVars$VarEntry_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_logic_GlobalVars$VarEntry(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_GlobalVars$VarEntry(jcontext ctx);
void init_mindustry_logic_GlobalVars$VarEntry_java_lang_String_java_lang_String_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3);
void init_mindustry_logic_GlobalVars$VarEntry(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
