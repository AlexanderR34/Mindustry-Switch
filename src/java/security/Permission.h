#ifndef HEADER_java_security_Permission
#define HEADER_java_security_Permission

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/security/Guard.h"
#include "java/io/Serializable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_security_Permission {
	java_lang_Object parent;
	jref F_name;
} java_security_Permission;

extern Class class_java_security_Permission;

extern jlong SF_java_security_Permission_serialVersionUID;

#define VTABLE_java_security_Permission_hashCode_R_int 0
typedef jint (*func_java_security_Permission_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_security_Permission_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_security_Permission_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_Permission_clone_R_java_lang_Object 2
typedef jobject (*func_java_security_Permission_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_security_Permission_getClass_R_java_lang_Class 3
typedef jobject (*func_java_security_Permission_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_security_Permission_toString_R_java_lang_String 4
typedef jobject (*func_java_security_Permission_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_security_Permission_finalize 5
typedef void (*func_java_security_Permission_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_security_Permission_notify 6
typedef void (*func_java_security_Permission_notify)(jcontext ctx, jobject self);
#define VTABLE_java_security_Permission_notifyAll 7
typedef void (*func_java_security_Permission_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_security_Permission_wait 8
typedef void (*func_java_security_Permission_wait)(jcontext ctx, jobject self);
#define VTABLE_java_security_Permission_wait_long 9
typedef void (*func_java_security_Permission_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_security_Permission_wait_long_int 10
typedef void (*func_java_security_Permission_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_security_Permission_checkGuard_java_lang_Object 11
typedef void (*func_java_security_Permission_checkGuard_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_Permission_implies_java_security_Permission_R_boolean 12
typedef jbool (*func_java_security_Permission_implies_java_security_Permission_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_Permission_getName_R_java_lang_String 13
typedef jobject (*func_java_security_Permission_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_security_Permission_getActions_R_java_lang_String 14
typedef jobject (*func_java_security_Permission_getActions_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_security_Permission_newPermissionCollection_R_java_security_PermissionCollection 15
typedef jobject (*func_java_security_Permission_newPermissionCollection_R_java_security_PermissionCollection)(jcontext ctx, jobject self);

void mark_java_security_Permission(jobject object, jint mark, jint depth);
void clinit_java_security_Permission(jcontext ctx);
void init_java_security_Permission_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_java_security_Permission_checkGuard_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_security_Permission_getName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_security_Permission_newPermissionCollection_R_java_security_PermissionCollection(jcontext ctx, jobject self);
jobject M_java_security_Permission_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
