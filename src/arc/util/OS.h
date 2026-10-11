#ifndef HEADER_arc_util_OS
#define HEADER_arc_util_OS

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_OS {
	java_lang_Object parent;
} arc_util_OS;

extern Class class_arc_util_OS;

extern jint SF_arc_util_OS_cores;
extern jobject SF_arc_util_OS_username;
extern jobject SF_arc_util_OS_userHome;
extern jobject SF_arc_util_OS_osName;
extern jobject SF_arc_util_OS_osVersion;
extern jobject SF_arc_util_OS_osArch;
extern jobject SF_arc_util_OS_osArchBits;
extern jobject SF_arc_util_OS_javaVersion;
extern jint SF_arc_util_OS_javaVersionNumber;
extern jbool SF_arc_util_OS_isWindows;
extern jbool SF_arc_util_OS_isLinux;
extern jbool SF_arc_util_OS_isMac;
extern jbool SF_arc_util_OS_isIos;
extern jbool SF_arc_util_OS_isAndroid;
extern jbool SF_arc_util_OS_isARM;
extern jbool SF_arc_util_OS_is64Bit;
extern jbool SF_arc_util_OS_isMobile;
extern jbool SF_arc_util_OS_isDesktop;

#define VTABLE_arc_util_OS_hashCode_R_int 0
typedef jint (*func_arc_util_OS_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_OS_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_OS_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_OS_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_OS_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_OS_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_OS_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_OS_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_OS_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_OS_finalize 5
typedef void (*func_arc_util_OS_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_OS_notify 6
typedef void (*func_arc_util_OS_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_OS_notifyAll 7
typedef void (*func_arc_util_OS_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_OS_wait 8
typedef void (*func_arc_util_OS_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_OS_wait_long 9
typedef void (*func_arc_util_OS_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_OS_wait_long_int 10
typedef void (*func_arc_util_OS_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_util_OS(jobject object, jint mark, jint depth);
void clinit_arc_util_OS(jcontext ctx);
void init_arc_util_OS(jcontext ctx, jobject self);
jobject SM_arc_util_OS_getAppDataDirectoryString_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_arc_util_OS_getWindowsTmpDir_R_java_lang_String(jcontext ctx);
jobject SM_arc_util_OS_exec_boolean_Array1_java_lang_String_R_java_lang_String(jcontext ctx, jbool param0, jobject param1);
jobject SM_arc_util_OS_exec_Array1_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jbool SM_arc_util_OS_execSafe_java_lang_String_R_boolean(jcontext ctx, jobject param0);
jbool SM_arc_util_OS_execSafe_Array1_java_lang_String_R_boolean(jcontext ctx, jobject param0);
jobject SM_arc_util_OS_getAppDataDirectory_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject param0);
jbool SM_arc_util_OS_hasProp_java_lang_String_R_boolean(jcontext ctx, jobject param0);
jobject SM_arc_util_OS_prop_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jbool SM_arc_util_OS_hasEnvFlag_java_lang_String_R_boolean(jcontext ctx, jobject param0);
jbool SM_arc_util_OS_hasEnv_java_lang_String_R_boolean(jcontext ctx, jobject param0);
jobject SM_arc_util_OS_env_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_arc_util_OS_propNoNull_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
