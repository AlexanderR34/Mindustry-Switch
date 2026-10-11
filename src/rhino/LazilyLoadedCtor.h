#ifndef HEADER_rhino_LazilyLoadedCtor
#define HEADER_rhino_LazilyLoadedCtor

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_LazilyLoadedCtor {
	java_lang_Object parent;
	jref F_scope;
	jref F_propertyName;
	jref F_className;
	jbool F_sealed;
	jref F_initializedValue;
	jint F_state;
} rhino_LazilyLoadedCtor;

extern Class class_rhino_LazilyLoadedCtor;

extern jint SF_rhino_LazilyLoadedCtor_STATE_BEFORE_INIT;
extern jint SF_rhino_LazilyLoadedCtor_STATE_INITIALIZING;
extern jint SF_rhino_LazilyLoadedCtor_STATE_WITH_VALUE;

#define VTABLE_rhino_LazilyLoadedCtor_hashCode_R_int 0
typedef jint (*func_rhino_LazilyLoadedCtor_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_LazilyLoadedCtor_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_LazilyLoadedCtor_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_LazilyLoadedCtor_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_LazilyLoadedCtor_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_LazilyLoadedCtor_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_LazilyLoadedCtor_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_LazilyLoadedCtor_toString_R_java_lang_String 4
typedef jobject (*func_rhino_LazilyLoadedCtor_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_LazilyLoadedCtor_finalize 5
typedef void (*func_rhino_LazilyLoadedCtor_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_LazilyLoadedCtor_notify 6
typedef void (*func_rhino_LazilyLoadedCtor_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_LazilyLoadedCtor_notifyAll 7
typedef void (*func_rhino_LazilyLoadedCtor_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_LazilyLoadedCtor_wait 8
typedef void (*func_rhino_LazilyLoadedCtor_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_LazilyLoadedCtor_wait_long 9
typedef void (*func_rhino_LazilyLoadedCtor_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_LazilyLoadedCtor_wait_long_int 10
typedef void (*func_rhino_LazilyLoadedCtor_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_LazilyLoadedCtor_init 11
typedef void (*func_rhino_LazilyLoadedCtor_init)(jcontext ctx, jobject self);
#define VTABLE_rhino_LazilyLoadedCtor_getValue_R_java_lang_Object 12
typedef jobject (*func_rhino_LazilyLoadedCtor_getValue_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_LazilyLoadedCtor_buildValue_R_java_lang_Object 13
typedef jobject (*func_rhino_LazilyLoadedCtor_buildValue_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_LazilyLoadedCtor_buildValue0_R_java_lang_Object 14
typedef jobject (*func_rhino_LazilyLoadedCtor_buildValue0_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_LazilyLoadedCtor_cast_java_lang_Class_R_java_lang_Class 15
typedef jobject (*func_rhino_LazilyLoadedCtor_cast_java_lang_Class_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_LazilyLoadedCtor(jobject object, jint mark, jint depth);
void clinit_rhino_LazilyLoadedCtor(jcontext ctx);
void init_rhino_LazilyLoadedCtor_rhino_ScriptableObject_java_lang_String_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3);
void M_rhino_LazilyLoadedCtor_init(jcontext ctx, jobject self);
jobject M_rhino_LazilyLoadedCtor_getValue_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_rhino_LazilyLoadedCtor_buildValue_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_rhino_LazilyLoadedCtor_buildValue0_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_rhino_LazilyLoadedCtor_cast_java_lang_Class_R_java_lang_Class(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
