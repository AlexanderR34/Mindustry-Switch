#ifndef HEADER_java_security_BasicPermission
#define HEADER_java_security_BasicPermission

#include "Clearwing.h"
#include "java/security/Permission.h"
#include "java/io/Serializable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_security_BasicPermission {
	java_security_Permission parent;
	jbool F_wildcard;
	jref F_path;
	jbool F_exitVM;
} java_security_BasicPermission;

extern Class class_java_security_BasicPermission;

extern jlong SF_java_security_BasicPermission_serialVersionUID;

#define VTABLE_java_security_BasicPermission_hashCode_R_int 0
typedef jint (*func_java_security_BasicPermission_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_security_BasicPermission_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_security_BasicPermission_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_BasicPermission_clone_R_java_lang_Object 2
typedef jobject (*func_java_security_BasicPermission_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_security_BasicPermission_getClass_R_java_lang_Class 3
typedef jobject (*func_java_security_BasicPermission_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_security_BasicPermission_toString_R_java_lang_String 4
typedef jobject (*func_java_security_BasicPermission_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_security_BasicPermission_finalize 5
typedef void (*func_java_security_BasicPermission_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_security_BasicPermission_notify 6
typedef void (*func_java_security_BasicPermission_notify)(jcontext ctx, jobject self);
#define VTABLE_java_security_BasicPermission_notifyAll 7
typedef void (*func_java_security_BasicPermission_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_security_BasicPermission_wait 8
typedef void (*func_java_security_BasicPermission_wait)(jcontext ctx, jobject self);
#define VTABLE_java_security_BasicPermission_wait_long 9
typedef void (*func_java_security_BasicPermission_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_security_BasicPermission_wait_long_int 10
typedef void (*func_java_security_BasicPermission_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_security_BasicPermission_checkGuard_java_lang_Object 11
typedef void (*func_java_security_BasicPermission_checkGuard_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_BasicPermission_implies_java_security_Permission_R_boolean 12
typedef jbool (*func_java_security_BasicPermission_implies_java_security_Permission_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_BasicPermission_getName_R_java_lang_String 13
typedef jobject (*func_java_security_BasicPermission_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_security_BasicPermission_getActions_R_java_lang_String 14
typedef jobject (*func_java_security_BasicPermission_getActions_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_security_BasicPermission_newPermissionCollection_R_java_security_PermissionCollection 15
typedef jobject (*func_java_security_BasicPermission_newPermissionCollection_R_java_security_PermissionCollection)(jcontext ctx, jobject self);
#define VTABLE_java_security_BasicPermission_init_java_lang_String 16
typedef void (*func_java_security_BasicPermission_init_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_BasicPermission_readObject_java_io_ObjectInputStream 17
typedef void (*func_java_security_BasicPermission_readObject_java_io_ObjectInputStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_BasicPermission_getCanonicalName_R_java_lang_String 18
typedef jobject (*func_java_security_BasicPermission_getCanonicalName_R_java_lang_String)(jcontext ctx, jobject self);

void mark_java_security_BasicPermission(jobject object, jint mark, jint depth);
void clinit_java_security_BasicPermission(jcontext ctx);
void M_java_security_BasicPermission_init_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_java_security_BasicPermission_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_java_security_BasicPermission_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_java_security_BasicPermission_implies_java_security_Permission_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_security_BasicPermission_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jint M_java_security_BasicPermission_hashCode_R_int(jcontext ctx, jobject self);
jobject M_java_security_BasicPermission_getActions_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_security_BasicPermission_newPermissionCollection_R_java_security_PermissionCollection(jcontext ctx, jobject self);
void M_java_security_BasicPermission_readObject_java_io_ObjectInputStream(jcontext ctx, jobject self, jobject param0);
jobject M_java_security_BasicPermission_getCanonicalName_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
