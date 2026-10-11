#ifndef HEADER_java_security_PermissionCollection
#define HEADER_java_security_PermissionCollection

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_security_PermissionCollection {
	java_lang_Object parent;
	volatile jbool F_readOnly;
} java_security_PermissionCollection;

extern Class class_java_security_PermissionCollection;

extern jlong SF_java_security_PermissionCollection_serialVersionUID;

#define VTABLE_java_security_PermissionCollection_hashCode_R_int 0
typedef jint (*func_java_security_PermissionCollection_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_security_PermissionCollection_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_security_PermissionCollection_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_PermissionCollection_clone_R_java_lang_Object 2
typedef jobject (*func_java_security_PermissionCollection_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_security_PermissionCollection_getClass_R_java_lang_Class 3
typedef jobject (*func_java_security_PermissionCollection_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_security_PermissionCollection_toString_R_java_lang_String 4
typedef jobject (*func_java_security_PermissionCollection_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_security_PermissionCollection_finalize 5
typedef void (*func_java_security_PermissionCollection_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_security_PermissionCollection_notify 6
typedef void (*func_java_security_PermissionCollection_notify)(jcontext ctx, jobject self);
#define VTABLE_java_security_PermissionCollection_notifyAll 7
typedef void (*func_java_security_PermissionCollection_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_security_PermissionCollection_wait 8
typedef void (*func_java_security_PermissionCollection_wait)(jcontext ctx, jobject self);
#define VTABLE_java_security_PermissionCollection_wait_long 9
typedef void (*func_java_security_PermissionCollection_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_security_PermissionCollection_wait_long_int 10
typedef void (*func_java_security_PermissionCollection_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_security_PermissionCollection_add_java_security_Permission 11
typedef void (*func_java_security_PermissionCollection_add_java_security_Permission)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_PermissionCollection_implies_java_security_Permission_R_boolean 12
typedef jbool (*func_java_security_PermissionCollection_implies_java_security_Permission_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_PermissionCollection_elements_R_java_util_Enumeration 13
typedef jobject (*func_java_security_PermissionCollection_elements_R_java_util_Enumeration)(jcontext ctx, jobject self);
#define VTABLE_java_security_PermissionCollection_setReadOnly 14
typedef void (*func_java_security_PermissionCollection_setReadOnly)(jcontext ctx, jobject self);
#define VTABLE_java_security_PermissionCollection_isReadOnly_R_boolean 15
typedef jbool (*func_java_security_PermissionCollection_isReadOnly_R_boolean)(jcontext ctx, jobject self);

void mark_java_security_PermissionCollection(jobject object, jint mark, jint depth);
void clinit_java_security_PermissionCollection(jcontext ctx);
void init_java_security_PermissionCollection(jcontext ctx, jobject self);
void M_java_security_PermissionCollection_setReadOnly(jcontext ctx, jobject self);
jbool M_java_security_PermissionCollection_isReadOnly_R_boolean(jcontext ctx, jobject self);
jobject M_java_security_PermissionCollection_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
