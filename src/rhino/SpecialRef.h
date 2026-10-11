#ifndef HEADER_rhino_SpecialRef
#define HEADER_rhino_SpecialRef

#include "Clearwing.h"
#include "rhino/Ref.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_SpecialRef {
	rhino_Ref parent;
	jref F_target;
	jint F_type;
	jref F_name;
} rhino_SpecialRef;

extern Class class_rhino_SpecialRef;

extern jint SF_rhino_SpecialRef_SPECIAL_NONE;
extern jint SF_rhino_SpecialRef_SPECIAL_PROTO;
extern jint SF_rhino_SpecialRef_SPECIAL_PARENT;

#define VTABLE_rhino_SpecialRef_hashCode_R_int 0
typedef jint (*func_rhino_SpecialRef_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_SpecialRef_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_SpecialRef_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_SpecialRef_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_SpecialRef_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_SpecialRef_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_SpecialRef_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_SpecialRef_toString_R_java_lang_String 4
typedef jobject (*func_rhino_SpecialRef_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_SpecialRef_finalize 5
typedef void (*func_rhino_SpecialRef_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_SpecialRef_notify 6
typedef void (*func_rhino_SpecialRef_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_SpecialRef_notifyAll 7
typedef void (*func_rhino_SpecialRef_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_SpecialRef_wait 8
typedef void (*func_rhino_SpecialRef_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_SpecialRef_wait_long 9
typedef void (*func_rhino_SpecialRef_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_SpecialRef_wait_long_int 10
typedef void (*func_rhino_SpecialRef_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_SpecialRef_has_rhino_Context_R_boolean 11
typedef jbool (*func_rhino_SpecialRef_has_rhino_Context_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_SpecialRef_get_rhino_Context_R_java_lang_Object 12
typedef jobject (*func_rhino_SpecialRef_get_rhino_Context_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_SpecialRef_set_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_Object 13
typedef jobject (*func_rhino_SpecialRef_set_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_rhino_SpecialRef_delete_rhino_Context_R_boolean 14
typedef jbool (*func_rhino_SpecialRef_delete_rhino_Context_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_SpecialRef(jobject object, jint mark, jint depth);
void clinit_rhino_SpecialRef(jcontext ctx);
void init_rhino_SpecialRef_rhino_Scriptable_int_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
jobject SM_rhino_SpecialRef_createSpecial_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_String_R_rhino_Ref(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3);
jobject M_rhino_SpecialRef_get_rhino_Context_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_SpecialRef_set_rhino_Context_rhino_Scriptable_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jbool M_rhino_SpecialRef_has_rhino_Context_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_rhino_SpecialRef_delete_rhino_Context_R_boolean(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
