#ifndef HEADER_net_jpountz_util_Native
#define HEADER_net_jpountz_util_Native

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct net_jpountz_util_Native {
	java_lang_Enum parent;
} net_jpountz_util_Native;

extern Class class_net_jpountz_util_Native;

extern jbool SF_net_jpountz_util_Native_loaded;
extern jobject SF_net_jpountz_util_Native_$VALUES;

#define VTABLE_net_jpountz_util_Native_hashCode_R_int 0
typedef jint (*func_net_jpountz_util_Native_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_Native_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_net_jpountz_util_Native_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_net_jpountz_util_Native_clone_R_java_lang_Object 2
typedef jobject (*func_net_jpountz_util_Native_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_Native_getClass_R_java_lang_Class 3
typedef jobject (*func_net_jpountz_util_Native_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_Native_toString_R_java_lang_String 4
typedef jobject (*func_net_jpountz_util_Native_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_Native_finalize 5
typedef void (*func_net_jpountz_util_Native_finalize)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_Native_notify 6
typedef void (*func_net_jpountz_util_Native_notify)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_Native_notifyAll 7
typedef void (*func_net_jpountz_util_Native_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_Native_wait 8
typedef void (*func_net_jpountz_util_Native_wait)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_Native_wait_long 9
typedef void (*func_net_jpountz_util_Native_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_net_jpountz_util_Native_wait_long_int 10
typedef void (*func_net_jpountz_util_Native_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_net_jpountz_util_Native_compareTo_java_lang_Object_R_int 11
typedef jint (*func_net_jpountz_util_Native_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_net_jpountz_util_Native_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_net_jpountz_util_Native_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_net_jpountz_util_Native_name_R_java_lang_String 13
typedef jobject (*func_net_jpountz_util_Native_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_Native_ordinal_R_int 14
typedef jint (*func_net_jpountz_util_Native_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_Native_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_net_jpountz_util_Native_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_net_jpountz_util_Native(jobject object, jint mark, jint depth);
void clinit_net_jpountz_util_Native(jcontext ctx);
jobject SM_net_jpountz_util_Native_values_R_Array1_net_jpountz_util_Native(jcontext ctx);
jobject SM_net_jpountz_util_Native_valueOf_java_lang_String_R_net_jpountz_util_Native(jcontext ctx, jobject param0);
void init_net_jpountz_util_Native_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_net_jpountz_util_Native_arch_R_java_lang_String(jcontext ctx);
jobject SM_net_jpountz_util_Native_os_R_net_jpountz_util_Native$OS(jcontext ctx);
jobject SM_net_jpountz_util_Native_resourceName_R_java_lang_String(jcontext ctx);
jbool SM_net_jpountz_util_Native_isLoaded_R_boolean(jcontext ctx);
void SM_net_jpountz_util_Native_cleanupOldTempLibs(jcontext ctx);
void SM_net_jpountz_util_Native_load(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
