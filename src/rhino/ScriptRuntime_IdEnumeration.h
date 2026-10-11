#ifndef HEADER_rhino_ScriptRuntime$IdEnumeration
#define HEADER_rhino_ScriptRuntime$IdEnumeration

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_ScriptRuntime$IdEnumeration {
	java_lang_Object parent;
	jref F_obj;
	jref F_ids;
	jref F_used;
	jref F_currentId;
	jint F_index;
	jint F_enumType;
	jbool F_enumNumbers;
	jref F_iterator;
} rhino_ScriptRuntime$IdEnumeration;

extern Class class_rhino_ScriptRuntime$IdEnumeration;


#define VTABLE_rhino_ScriptRuntime$IdEnumeration_hashCode_R_int 0
typedef jint (*func_rhino_ScriptRuntime$IdEnumeration_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptRuntime$IdEnumeration_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_ScriptRuntime$IdEnumeration_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_ScriptRuntime$IdEnumeration_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_ScriptRuntime$IdEnumeration_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptRuntime$IdEnumeration_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_ScriptRuntime$IdEnumeration_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptRuntime$IdEnumeration_toString_R_java_lang_String 4
typedef jobject (*func_rhino_ScriptRuntime$IdEnumeration_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptRuntime$IdEnumeration_finalize 5
typedef void (*func_rhino_ScriptRuntime$IdEnumeration_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptRuntime$IdEnumeration_notify 6
typedef void (*func_rhino_ScriptRuntime$IdEnumeration_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptRuntime$IdEnumeration_notifyAll 7
typedef void (*func_rhino_ScriptRuntime$IdEnumeration_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptRuntime$IdEnumeration_wait 8
typedef void (*func_rhino_ScriptRuntime$IdEnumeration_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_ScriptRuntime$IdEnumeration_wait_long 9
typedef void (*func_rhino_ScriptRuntime$IdEnumeration_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_ScriptRuntime$IdEnumeration_wait_long_int 10
typedef void (*func_rhino_ScriptRuntime$IdEnumeration_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_rhino_ScriptRuntime$IdEnumeration(jobject object, jint mark, jint depth);
void clinit_rhino_ScriptRuntime$IdEnumeration(jcontext ctx);
void init_rhino_ScriptRuntime$IdEnumeration(jcontext ctx, jobject self);
void init_rhino_ScriptRuntime$IdEnumeration_rhino_ScriptRuntime$1(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
