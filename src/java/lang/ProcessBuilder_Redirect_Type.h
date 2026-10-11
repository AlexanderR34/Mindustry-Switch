#ifndef HEADER_java_lang_ProcessBuilder$Redirect$Type
#define HEADER_java_lang_ProcessBuilder$Redirect$Type

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_ProcessBuilder$Redirect$Type {
	java_lang_Enum parent;
} java_lang_ProcessBuilder$Redirect$Type;

extern Class class_java_lang_ProcessBuilder$Redirect$Type;

extern jobject SF_java_lang_ProcessBuilder$Redirect$Type_PIPE;
extern jobject SF_java_lang_ProcessBuilder$Redirect$Type_INHERIT;
extern jobject SF_java_lang_ProcessBuilder$Redirect$Type_READ;
extern jobject SF_java_lang_ProcessBuilder$Redirect$Type_WRITE;
extern jobject SF_java_lang_ProcessBuilder$Redirect$Type_APPEND;
extern jobject SF_java_lang_ProcessBuilder$Redirect$Type_$VALUES;

#define VTABLE_java_lang_ProcessBuilder$Redirect$Type_hashCode_R_int 0
typedef jint (*func_java_lang_ProcessBuilder$Redirect$Type_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$Type_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_ProcessBuilder$Redirect$Type_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ProcessBuilder$Redirect$Type_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_ProcessBuilder$Redirect$Type_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$Type_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_ProcessBuilder$Redirect$Type_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$Type_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_ProcessBuilder$Redirect$Type_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$Type_finalize 5
typedef void (*func_java_lang_ProcessBuilder$Redirect$Type_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$Type_notify 6
typedef void (*func_java_lang_ProcessBuilder$Redirect$Type_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$Type_notifyAll 7
typedef void (*func_java_lang_ProcessBuilder$Redirect$Type_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$Type_wait 8
typedef void (*func_java_lang_ProcessBuilder$Redirect$Type_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$Type_wait_long 9
typedef void (*func_java_lang_ProcessBuilder$Redirect$Type_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_ProcessBuilder$Redirect$Type_wait_long_int 10
typedef void (*func_java_lang_ProcessBuilder$Redirect$Type_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_ProcessBuilder$Redirect$Type_compareTo_java_lang_Object_R_int 11
typedef jint (*func_java_lang_ProcessBuilder$Redirect$Type_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ProcessBuilder$Redirect$Type_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_java_lang_ProcessBuilder$Redirect$Type_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ProcessBuilder$Redirect$Type_name_R_java_lang_String 13
typedef jobject (*func_java_lang_ProcessBuilder$Redirect$Type_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$Type_ordinal_R_int 14
typedef jint (*func_java_lang_ProcessBuilder$Redirect$Type_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ProcessBuilder$Redirect$Type_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_java_lang_ProcessBuilder$Redirect$Type_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_java_lang_ProcessBuilder$Redirect$Type(jobject object, jint mark, jint depth);
void clinit_java_lang_ProcessBuilder$Redirect$Type(jcontext ctx);
jobject SM_java_lang_ProcessBuilder$Redirect$Type_values_R_Array1_java_lang_ProcessBuilder$Redirect$Type(jcontext ctx);
jobject SM_java_lang_ProcessBuilder$Redirect$Type_valueOf_java_lang_String_R_java_lang_ProcessBuilder$Redirect$Type(jcontext ctx, jobject param0);
void init_java_lang_ProcessBuilder$Redirect$Type_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_java_lang_ProcessBuilder$Redirect$Type_$values_R_Array1_java_lang_ProcessBuilder$Redirect$Type(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
