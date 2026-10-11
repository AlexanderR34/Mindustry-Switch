#ifndef HEADER_java_net_NetPermission
#define HEADER_java_net_NetPermission

#include "Clearwing.h"
#include "java/security/BasicPermission.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_NetPermission {
	java_security_BasicPermission parent;
} java_net_NetPermission;

extern Class class_java_net_NetPermission;

extern jlong SF_java_net_NetPermission_serialVersionUID;

#define VTABLE_java_net_NetPermission_hashCode_R_int 0
typedef jint (*func_java_net_NetPermission_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetPermission_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_net_NetPermission_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_NetPermission_clone_R_java_lang_Object 2
typedef jobject (*func_java_net_NetPermission_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetPermission_getClass_R_java_lang_Class 3
typedef jobject (*func_java_net_NetPermission_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetPermission_toString_R_java_lang_String 4
typedef jobject (*func_java_net_NetPermission_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetPermission_finalize 5
typedef void (*func_java_net_NetPermission_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetPermission_notify 6
typedef void (*func_java_net_NetPermission_notify)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetPermission_notifyAll 7
typedef void (*func_java_net_NetPermission_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetPermission_wait 8
typedef void (*func_java_net_NetPermission_wait)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetPermission_wait_long 9
typedef void (*func_java_net_NetPermission_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_net_NetPermission_wait_long_int 10
typedef void (*func_java_net_NetPermission_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_net_NetPermission_checkGuard_java_lang_Object 11
typedef void (*func_java_net_NetPermission_checkGuard_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_NetPermission_implies_java_security_Permission_R_boolean 12
typedef jbool (*func_java_net_NetPermission_implies_java_security_Permission_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_NetPermission_getName_R_java_lang_String 13
typedef jobject (*func_java_net_NetPermission_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetPermission_getActions_R_java_lang_String 14
typedef jobject (*func_java_net_NetPermission_getActions_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetPermission_newPermissionCollection_R_java_security_PermissionCollection 15
typedef jobject (*func_java_net_NetPermission_newPermissionCollection_R_java_security_PermissionCollection)(jcontext ctx, jobject self);
#define VTABLE_java_net_NetPermission_init_java_lang_String 16
typedef void (*func_java_net_NetPermission_init_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_NetPermission_readObject_java_io_ObjectInputStream 17
typedef void (*func_java_net_NetPermission_readObject_java_io_ObjectInputStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_NetPermission_getCanonicalName_R_java_lang_String 18
typedef jobject (*func_java_net_NetPermission_getCanonicalName_R_java_lang_String)(jcontext ctx, jobject self);

void mark_java_net_NetPermission(jobject object, jint mark, jint depth);
void clinit_java_net_NetPermission(jcontext ctx);
void init_java_net_NetPermission_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_java_net_NetPermission_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
