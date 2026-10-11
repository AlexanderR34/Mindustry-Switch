#ifndef HEADER_java_security_BasicPermissionCollection
#define HEADER_java_security_BasicPermissionCollection

#include "Clearwing.h"
#include "java/security/PermissionCollection.h"
#include "java/io/Serializable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_security_BasicPermissionCollection {
	java_security_PermissionCollection parent;
	jref F_perms;
	jbool F_all_allowed;
	jref F_permClass;
} java_security_BasicPermissionCollection;

extern Class class_java_security_BasicPermissionCollection;

extern jlong SF_java_security_BasicPermissionCollection_serialVersionUID;
extern jobject SF_java_security_BasicPermissionCollection_serialPersistentFields;

#define VTABLE_java_security_BasicPermissionCollection_hashCode_R_int 0
typedef jint (*func_java_security_BasicPermissionCollection_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_security_BasicPermissionCollection_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_security_BasicPermissionCollection_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_BasicPermissionCollection_clone_R_java_lang_Object 2
typedef jobject (*func_java_security_BasicPermissionCollection_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_security_BasicPermissionCollection_getClass_R_java_lang_Class 3
typedef jobject (*func_java_security_BasicPermissionCollection_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_security_BasicPermissionCollection_toString_R_java_lang_String 4
typedef jobject (*func_java_security_BasicPermissionCollection_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_security_BasicPermissionCollection_finalize 5
typedef void (*func_java_security_BasicPermissionCollection_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_security_BasicPermissionCollection_notify 6
typedef void (*func_java_security_BasicPermissionCollection_notify)(jcontext ctx, jobject self);
#define VTABLE_java_security_BasicPermissionCollection_notifyAll 7
typedef void (*func_java_security_BasicPermissionCollection_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_security_BasicPermissionCollection_wait 8
typedef void (*func_java_security_BasicPermissionCollection_wait)(jcontext ctx, jobject self);
#define VTABLE_java_security_BasicPermissionCollection_wait_long 9
typedef void (*func_java_security_BasicPermissionCollection_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_security_BasicPermissionCollection_wait_long_int 10
typedef void (*func_java_security_BasicPermissionCollection_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_security_BasicPermissionCollection_add_java_security_Permission 11
typedef void (*func_java_security_BasicPermissionCollection_add_java_security_Permission)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_BasicPermissionCollection_implies_java_security_Permission_R_boolean 12
typedef jbool (*func_java_security_BasicPermissionCollection_implies_java_security_Permission_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_BasicPermissionCollection_elements_R_java_util_Enumeration 13
typedef jobject (*func_java_security_BasicPermissionCollection_elements_R_java_util_Enumeration)(jcontext ctx, jobject self);
#define VTABLE_java_security_BasicPermissionCollection_setReadOnly 14
typedef void (*func_java_security_BasicPermissionCollection_setReadOnly)(jcontext ctx, jobject self);
#define VTABLE_java_security_BasicPermissionCollection_isReadOnly_R_boolean 15
typedef jbool (*func_java_security_BasicPermissionCollection_isReadOnly_R_boolean)(jcontext ctx, jobject self);

void mark_java_security_BasicPermissionCollection(jobject object, jint mark, jint depth);
void clinit_java_security_BasicPermissionCollection(jcontext ctx);
void init_java_security_BasicPermissionCollection_java_lang_Class(jcontext ctx, jobject self, jobject param0);
void M_java_security_BasicPermissionCollection_add_java_security_Permission(jcontext ctx, jobject self, jobject param0);
jbool M_java_security_BasicPermissionCollection_implies_java_security_Permission_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_security_BasicPermissionCollection_elements_R_java_util_Enumeration(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
