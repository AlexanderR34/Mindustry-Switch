#ifndef HEADER_rhino_ScriptRuntime$DefaultMessageProvider
#define HEADER_rhino_ScriptRuntime$DefaultMessageProvider

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime_MessageProvider.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ScriptRuntime$DefaultMessageProvider {
	java_lang_Object parent;
} rhino_ScriptRuntime$DefaultMessageProvider;

extern Class class_rhino_ScriptRuntime$DefaultMessageProvider;


#define VTABLE_rhino_ScriptRuntime$DefaultMessageProvider_hashCode_R_int 0
typedef jint (*func_rhino_ScriptRuntime$DefaultMessageProvider_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptRuntime$DefaultMessageProvider_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ScriptRuntime$DefaultMessageProvider_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ScriptRuntime$DefaultMessageProvider_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ScriptRuntime$DefaultMessageProvider_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptRuntime$DefaultMessageProvider_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ScriptRuntime$DefaultMessageProvider_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptRuntime$DefaultMessageProvider_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ScriptRuntime$DefaultMessageProvider_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptRuntime$DefaultMessageProvider_finalize 5
typedef void (*func_rhino_ScriptRuntime$DefaultMessageProvider_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptRuntime$DefaultMessageProvider_notify 6
typedef void (*func_rhino_ScriptRuntime$DefaultMessageProvider_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptRuntime$DefaultMessageProvider_notifyAll 7
typedef void (*func_rhino_ScriptRuntime$DefaultMessageProvider_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptRuntime$DefaultMessageProvider_wait 8
typedef void (*func_rhino_ScriptRuntime$DefaultMessageProvider_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptRuntime$DefaultMessageProvider_wait_long 9
typedef void (*func_rhino_ScriptRuntime$DefaultMessageProvider_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ScriptRuntime$DefaultMessageProvider_wait_long_int 10
typedef void (*func_rhino_ScriptRuntime$DefaultMessageProvider_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_ScriptRuntime$DefaultMessageProvider_getMessage_java_lang_String_Array1_java_lang_Object_R_java_lang_String 11
typedef jobject (*func_rhino_ScriptRuntime$DefaultMessageProvider_getMessage_java_lang_String_Array1_java_lang_Object_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_rhino_ScriptRuntime$DefaultMessageProvider(jobject object, jint mark, jint depth);
void clinit_rhino_ScriptRuntime$DefaultMessageProvider(jcontext ctx);
void init_rhino_ScriptRuntime$DefaultMessageProvider(jcontext ctx, jobject self);
jobject M_rhino_ScriptRuntime$DefaultMessageProvider_getMessage_java_lang_String_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_rhino_ScriptRuntime$DefaultMessageProvider_rhino_ScriptRuntime$1(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
