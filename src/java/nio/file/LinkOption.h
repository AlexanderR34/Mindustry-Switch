#ifndef HEADER_java_nio_file_LinkOption
#define HEADER_java_nio_file_LinkOption

#include "Clearwing.h"
#include "java/lang/Enum.h"
#include "java/nio/file/OpenOption.h"
#include "java/nio/file/CopyOption.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_file_LinkOption {
	java_lang_Enum parent;
} java_nio_file_LinkOption;

extern Class class_java_nio_file_LinkOption;

extern jobject SF_java_nio_file_LinkOption_NOFOLLOW_LINKS;
extern jobject SF_java_nio_file_LinkOption_$VALUES;

#define VTABLE_java_nio_file_LinkOption_hashCode_R_int 0
typedef jint (*func_java_nio_file_LinkOption_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_file_LinkOption_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_nio_file_LinkOption_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_file_LinkOption_clone_R_java_lang_Object 2
typedef jobject (*func_java_nio_file_LinkOption_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_file_LinkOption_getClass_R_java_lang_Class 3
typedef jobject (*func_java_nio_file_LinkOption_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_nio_file_LinkOption_toString_R_java_lang_String 4
typedef jobject (*func_java_nio_file_LinkOption_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_file_LinkOption_finalize 5
typedef void (*func_java_nio_file_LinkOption_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_nio_file_LinkOption_notify 6
typedef void (*func_java_nio_file_LinkOption_notify)(jcontext ctx, jobject self);
#define VTABLE_java_nio_file_LinkOption_notifyAll 7
typedef void (*func_java_nio_file_LinkOption_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_nio_file_LinkOption_wait 8
typedef void (*func_java_nio_file_LinkOption_wait)(jcontext ctx, jobject self);
#define VTABLE_java_nio_file_LinkOption_wait_long 9
typedef void (*func_java_nio_file_LinkOption_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_file_LinkOption_wait_long_int 10
typedef void (*func_java_nio_file_LinkOption_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_nio_file_LinkOption_compareTo_java_lang_Object_R_int 11
typedef jint (*func_java_nio_file_LinkOption_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_file_LinkOption_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_java_nio_file_LinkOption_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_file_LinkOption_name_R_java_lang_String 13
typedef jobject (*func_java_nio_file_LinkOption_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_file_LinkOption_ordinal_R_int 14
typedef jint (*func_java_nio_file_LinkOption_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_file_LinkOption_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_java_nio_file_LinkOption_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_java_nio_file_LinkOption(jobject object, jint mark, jint depth);
void clinit_java_nio_file_LinkOption(jcontext ctx);
jobject SM_java_nio_file_LinkOption_values_R_Array1_java_nio_file_LinkOption(jcontext ctx);
jobject SM_java_nio_file_LinkOption_valueOf_java_lang_String_R_java_nio_file_LinkOption(jcontext ctx, jobject param0);
void init_java_nio_file_LinkOption_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_java_nio_file_LinkOption_$values_R_Array1_java_nio_file_LinkOption(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
