#ifndef HEADER_net_jpountz_util_Native$OS
#define HEADER_net_jpountz_util_Native$OS

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct net_jpountz_util_Native$OS {
	java_lang_Enum parent;
	jref F_name;
	jref F_libExtension;
} net_jpountz_util_Native$OS;

extern Class class_net_jpountz_util_Native$OS;

extern jobject SF_net_jpountz_util_Native$OS_WINDOWS;
extern jobject SF_net_jpountz_util_Native$OS_LINUX;
extern jobject SF_net_jpountz_util_Native$OS_MAC;
extern jobject SF_net_jpountz_util_Native$OS_SOLARIS;
extern jobject SF_net_jpountz_util_Native$OS_$VALUES;

#define VTABLE_net_jpountz_util_Native$OS_hashCode_R_int 0
typedef jint (*func_net_jpountz_util_Native$OS_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_Native$OS_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_net_jpountz_util_Native$OS_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_net_jpountz_util_Native$OS_clone_R_java_lang_Object 2
typedef jobject (*func_net_jpountz_util_Native$OS_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_Native$OS_getClass_R_java_lang_Class 3
typedef jobject (*func_net_jpountz_util_Native$OS_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_Native$OS_toString_R_java_lang_String 4
typedef jobject (*func_net_jpountz_util_Native$OS_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_Native$OS_finalize 5
typedef void (*func_net_jpountz_util_Native$OS_finalize)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_Native$OS_notify 6
typedef void (*func_net_jpountz_util_Native$OS_notify)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_Native$OS_notifyAll 7
typedef void (*func_net_jpountz_util_Native$OS_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_Native$OS_wait 8
typedef void (*func_net_jpountz_util_Native$OS_wait)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_Native$OS_wait_long 9
typedef void (*func_net_jpountz_util_Native$OS_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_net_jpountz_util_Native$OS_wait_long_int 10
typedef void (*func_net_jpountz_util_Native$OS_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_net_jpountz_util_Native$OS_compareTo_java_lang_Object_R_int 11
typedef jint (*func_net_jpountz_util_Native$OS_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_net_jpountz_util_Native$OS_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_net_jpountz_util_Native$OS_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_net_jpountz_util_Native$OS_name_R_java_lang_String 13
typedef jobject (*func_net_jpountz_util_Native$OS_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_Native$OS_ordinal_R_int 14
typedef jint (*func_net_jpountz_util_Native$OS_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_net_jpountz_util_Native$OS_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_net_jpountz_util_Native$OS_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_net_jpountz_util_Native$OS(jobject object, jint mark, jint depth);
void clinit_net_jpountz_util_Native$OS(jcontext ctx);
jobject SM_net_jpountz_util_Native$OS_values_R_Array1_net_jpountz_util_Native$OS(jcontext ctx);
jobject SM_net_jpountz_util_Native$OS_valueOf_java_lang_String_R_net_jpountz_util_Native$OS(jcontext ctx, jobject param0);
void init_net_jpountz_util_Native$OS_java_lang_String_int_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3);

#ifdef __cplusplus
}
#endif

#endif
