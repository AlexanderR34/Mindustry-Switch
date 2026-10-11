#ifndef HEADER_rhino_ScriptRuntime$StringIdOrIndex
#define HEADER_rhino_ScriptRuntime$StringIdOrIndex

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ScriptRuntime$StringIdOrIndex {
	java_lang_Object parent;
	jref F_stringId;
	jint F_index;
} rhino_ScriptRuntime$StringIdOrIndex;

extern Class class_rhino_ScriptRuntime$StringIdOrIndex;


#define VTABLE_rhino_ScriptRuntime$StringIdOrIndex_hashCode_R_int 0
typedef jint (*func_rhino_ScriptRuntime$StringIdOrIndex_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptRuntime$StringIdOrIndex_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ScriptRuntime$StringIdOrIndex_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ScriptRuntime$StringIdOrIndex_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ScriptRuntime$StringIdOrIndex_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptRuntime$StringIdOrIndex_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ScriptRuntime$StringIdOrIndex_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptRuntime$StringIdOrIndex_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ScriptRuntime$StringIdOrIndex_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptRuntime$StringIdOrIndex_finalize 5
typedef void (*func_rhino_ScriptRuntime$StringIdOrIndex_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptRuntime$StringIdOrIndex_notify 6
typedef void (*func_rhino_ScriptRuntime$StringIdOrIndex_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptRuntime$StringIdOrIndex_notifyAll 7
typedef void (*func_rhino_ScriptRuntime$StringIdOrIndex_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptRuntime$StringIdOrIndex_wait 8
typedef void (*func_rhino_ScriptRuntime$StringIdOrIndex_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptRuntime$StringIdOrIndex_wait_long 9
typedef void (*func_rhino_ScriptRuntime$StringIdOrIndex_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ScriptRuntime$StringIdOrIndex_wait_long_int 10
typedef void (*func_rhino_ScriptRuntime$StringIdOrIndex_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_ScriptRuntime$StringIdOrIndex(jobject object, jint mark, jint depth);
void clinit_rhino_ScriptRuntime$StringIdOrIndex(jcontext ctx);
void init_rhino_ScriptRuntime$StringIdOrIndex_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_rhino_ScriptRuntime$StringIdOrIndex_int(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
