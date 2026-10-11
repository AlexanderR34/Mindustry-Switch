#ifndef HEADER_mindustry_mod_Scripts
#define HEADER_mindustry_mod_Scripts

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_mod_Scripts {
	java_lang_Object parent;
	jref F_context;
	jref F_scope;
	jbool F_errored;
	jref F_currentMod;
} mindustry_mod_Scripts;

extern Class class_mindustry_mod_Scripts;


#define VTABLE_mindustry_mod_Scripts_hashCode_R_int 0
typedef jint (*func_mindustry_mod_Scripts_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Scripts_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_mod_Scripts_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Scripts_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_mod_Scripts_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Scripts_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_mod_Scripts_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Scripts_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_mod_Scripts_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Scripts_finalize 5
typedef void (*func_mindustry_mod_Scripts_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Scripts_notify 6
typedef void (*func_mindustry_mod_Scripts_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Scripts_notifyAll 7
typedef void (*func_mindustry_mod_Scripts_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Scripts_wait 8
typedef void (*func_mindustry_mod_Scripts_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Scripts_wait_long 9
typedef void (*func_mindustry_mod_Scripts_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_mod_Scripts_wait_long_int 10
typedef void (*func_mindustry_mod_Scripts_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_mod_Scripts_dispose 11
typedef void (*func_mindustry_mod_Scripts_dispose)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Scripts_isDisposed_R_boolean 12
typedef jbool (*func_mindustry_mod_Scripts_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Scripts_hasErrored_R_boolean 13
typedef jbool (*func_mindustry_mod_Scripts_hasErrored_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_Scripts_runConsole_java_lang_String_R_java_lang_String 14
typedef jobject (*func_mindustry_mod_Scripts_runConsole_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Scripts_getError_java_lang_Throwable_boolean_R_java_lang_String 15
typedef jobject (*func_mindustry_mod_Scripts_getError_java_lang_Throwable_boolean_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_mod_Scripts_log_java_lang_String_java_lang_String 16
typedef void (*func_mindustry_mod_Scripts_log_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Scripts_log_arc_util_Log$LogLevel_java_lang_String_java_lang_String 17
typedef void (*func_mindustry_mod_Scripts_log_arc_util_Log$LogLevel_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_mod_Scripts_newFloats_int_R_Array1_float 18
typedef jobject (*func_mindustry_mod_Scripts_newFloats_int_R_Array1_float)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_mod_Scripts_getClass_java_lang_Object_R_java_lang_Class 19
typedef jobject (*func_mindustry_mod_Scripts_getClass_java_lang_Object_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_Scripts_run_mindustry_mod_Mods$LoadedMod_arc_files_Fi 20
typedef void (*func_mindustry_mod_Scripts_run_mindustry_mod_Mods$LoadedMod_arc_files_Fi)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_Scripts_run_java_lang_String_java_lang_String_boolean_R_boolean 21
typedef jbool (*func_mindustry_mod_Scripts_run_java_lang_String_java_lang_String_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);

void mark_mindustry_mod_Scripts(jobject object, jint mark, jint depth);
void clinit_mindustry_mod_Scripts(jcontext ctx);
void init_mindustry_mod_Scripts(jcontext ctx, jobject self);
jbool M_mindustry_mod_Scripts_hasErrored_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_mod_Scripts_runConsole_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_mod_Scripts_getError_java_lang_Throwable_boolean_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_mindustry_mod_Scripts_log_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_mod_Scripts_log_arc_util_Log$LogLevel_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_mindustry_mod_Scripts_newFloats_int_R_Array1_float(jcontext ctx, jobject self, jint param0);
jobject M_mindustry_mod_Scripts_getClass_java_lang_Object_R_java_lang_Class(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_Scripts_run_mindustry_mod_Mods$LoadedMod_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_mindustry_mod_Scripts_run_java_lang_String_java_lang_String_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
void M_mindustry_mod_Scripts_dispose(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
