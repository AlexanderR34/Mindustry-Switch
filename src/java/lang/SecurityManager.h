#ifndef HEADER_java_lang_SecurityManager
#define HEADER_java_lang_SecurityManager

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_SecurityManager {
	java_lang_Object parent;
	jbool F_inCheck;
	jbool F_initialized;
} java_lang_SecurityManager;

extern Class class_java_lang_SecurityManager;


#define VTABLE_java_lang_SecurityManager_hashCode_R_int 0
typedef jint (*func_java_lang_SecurityManager_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_SecurityManager_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_SecurityManager_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_SecurityManager_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_SecurityManager_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_SecurityManager_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_SecurityManager_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_SecurityManager_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_SecurityManager_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_SecurityManager_finalize 5
typedef void (*func_java_lang_SecurityManager_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_SecurityManager_notify 6
typedef void (*func_java_lang_SecurityManager_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_SecurityManager_notifyAll 7
typedef void (*func_java_lang_SecurityManager_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_SecurityManager_wait 8
typedef void (*func_java_lang_SecurityManager_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_SecurityManager_wait_long 9
typedef void (*func_java_lang_SecurityManager_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_SecurityManager_wait_long_int 10
typedef void (*func_java_lang_SecurityManager_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_SecurityManager_hasAllPermission_R_boolean 11
typedef jbool (*func_java_lang_SecurityManager_hasAllPermission_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_SecurityManager_getInCheck_R_boolean 12
typedef jbool (*func_java_lang_SecurityManager_getInCheck_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_SecurityManager_getClassContext_R_Array1_java_lang_Class 13
typedef jobject (*func_java_lang_SecurityManager_getClassContext_R_Array1_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_SecurityManager_currentClassLoader_R_java_lang_ClassLoader 14
typedef jobject (*func_java_lang_SecurityManager_currentClassLoader_R_java_lang_ClassLoader)(jcontext ctx, jobject self);
#define VTABLE_java_lang_SecurityManager_currentLoadedClass_R_java_lang_Class 15
typedef jobject (*func_java_lang_SecurityManager_currentLoadedClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_SecurityManager_classDepth_java_lang_String_R_int 16
typedef jint (*func_java_lang_SecurityManager_classDepth_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_SecurityManager_classLoaderDepth_R_int 17
typedef jint (*func_java_lang_SecurityManager_classLoaderDepth_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_SecurityManager_inClass_java_lang_String_R_boolean 18
typedef jbool (*func_java_lang_SecurityManager_inClass_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_SecurityManager_inClassLoader_R_boolean 19
typedef jbool (*func_java_lang_SecurityManager_inClassLoader_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_SecurityManager_getSecurityContext_R_java_lang_Object 20
typedef jobject (*func_java_lang_SecurityManager_getSecurityContext_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_SecurityManager_checkPermission_java_security_Permission 21
typedef void (*func_java_lang_SecurityManager_checkPermission_java_security_Permission)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_SecurityManager_checkPermission_java_security_Permission_java_lang_Object 22
typedef void (*func_java_lang_SecurityManager_checkPermission_java_security_Permission_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_lang_SecurityManager_checkCreateClassLoader 23
typedef void (*func_java_lang_SecurityManager_checkCreateClassLoader)(jcontext ctx, jobject self);
#define VTABLE_java_lang_SecurityManager_checkAccess_java_lang_Thread 24
typedef void (*func_java_lang_SecurityManager_checkAccess_java_lang_Thread)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_SecurityManager_checkAccess_java_lang_ThreadGroup 25
typedef void (*func_java_lang_SecurityManager_checkAccess_java_lang_ThreadGroup)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_SecurityManager_checkExit_int 26
typedef void (*func_java_lang_SecurityManager_checkExit_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_lang_SecurityManager_checkExec_java_lang_String 27
typedef void (*func_java_lang_SecurityManager_checkExec_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_SecurityManager_checkLink_java_lang_String 28
typedef void (*func_java_lang_SecurityManager_checkLink_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_SecurityManager_checkRead_java_io_FileDescriptor 29
typedef void (*func_java_lang_SecurityManager_checkRead_java_io_FileDescriptor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_SecurityManager_checkRead_java_lang_String 30
typedef void (*func_java_lang_SecurityManager_checkRead_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_SecurityManager_checkRead_java_lang_String_java_lang_Object 31
typedef void (*func_java_lang_SecurityManager_checkRead_java_lang_String_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_lang_SecurityManager_checkWrite_java_io_FileDescriptor 32
typedef void (*func_java_lang_SecurityManager_checkWrite_java_io_FileDescriptor)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_SecurityManager_checkWrite_java_lang_String 33
typedef void (*func_java_lang_SecurityManager_checkWrite_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_SecurityManager_checkDelete_java_lang_String 34
typedef void (*func_java_lang_SecurityManager_checkDelete_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_SecurityManager_checkConnect_java_lang_String_int 35
typedef void (*func_java_lang_SecurityManager_checkConnect_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_lang_SecurityManager_checkConnect_java_lang_String_int_java_lang_Object 36
typedef void (*func_java_lang_SecurityManager_checkConnect_java_lang_String_int_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
#define VTABLE_java_lang_SecurityManager_checkListen_int 37
typedef void (*func_java_lang_SecurityManager_checkListen_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_lang_SecurityManager_checkAccept_java_lang_String_int 38
typedef void (*func_java_lang_SecurityManager_checkAccept_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_lang_SecurityManager_checkMulticast_java_net_InetAddress 39
typedef void (*func_java_lang_SecurityManager_checkMulticast_java_net_InetAddress)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_SecurityManager_checkMulticast_java_net_InetAddress_byte 40
typedef void (*func_java_lang_SecurityManager_checkMulticast_java_net_InetAddress_byte)(jcontext ctx, jobject self, jobject param0, jbyte param1);
#define VTABLE_java_lang_SecurityManager_checkPropertiesAccess 41
typedef void (*func_java_lang_SecurityManager_checkPropertiesAccess)(jcontext ctx, jobject self);
#define VTABLE_java_lang_SecurityManager_checkPropertyAccess_java_lang_String 42
typedef void (*func_java_lang_SecurityManager_checkPropertyAccess_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_SecurityManager_checkTopLevelWindow_java_lang_Object_R_boolean 43
typedef jbool (*func_java_lang_SecurityManager_checkTopLevelWindow_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_SecurityManager_checkPrintJobAccess 44
typedef void (*func_java_lang_SecurityManager_checkPrintJobAccess)(jcontext ctx, jobject self);
#define VTABLE_java_lang_SecurityManager_checkSystemClipboardAccess 45
typedef void (*func_java_lang_SecurityManager_checkSystemClipboardAccess)(jcontext ctx, jobject self);
#define VTABLE_java_lang_SecurityManager_checkAwtEventQueueAccess 46
typedef void (*func_java_lang_SecurityManager_checkAwtEventQueueAccess)(jcontext ctx, jobject self);
#define VTABLE_java_lang_SecurityManager_checkPackageAccess_java_lang_String 47
typedef void (*func_java_lang_SecurityManager_checkPackageAccess_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_SecurityManager_checkPackageDefinition_java_lang_String 48
typedef void (*func_java_lang_SecurityManager_checkPackageDefinition_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_SecurityManager_checkSetFactory 49
typedef void (*func_java_lang_SecurityManager_checkSetFactory)(jcontext ctx, jobject self);
#define VTABLE_java_lang_SecurityManager_checkMemberAccess_java_lang_Class_int 50
typedef void (*func_java_lang_SecurityManager_checkMemberAccess_java_lang_Class_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_java_lang_SecurityManager_checkSecurityAccess_java_lang_String 51
typedef void (*func_java_lang_SecurityManager_checkSecurityAccess_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_SecurityManager_getThreadGroup_R_java_lang_ThreadGroup 52
typedef jobject (*func_java_lang_SecurityManager_getThreadGroup_R_java_lang_ThreadGroup)(jcontext ctx, jobject self);

void mark_java_lang_SecurityManager(jobject object, jint mark, jint depth);
void clinit_java_lang_SecurityManager(jcontext ctx);
jbool M_java_lang_SecurityManager_hasAllPermission_R_boolean(jcontext ctx, jobject self);
jbool M_java_lang_SecurityManager_getInCheck_R_boolean(jcontext ctx, jobject self);
void init_java_lang_SecurityManager(jcontext ctx, jobject self);
jobject M_java_lang_SecurityManager_getClassContext_R_Array1_java_lang_Class(jcontext ctx, jobject self);
jobject M_java_lang_SecurityManager_currentClassLoader_R_java_lang_ClassLoader(jcontext ctx, jobject self);
jobject M_java_lang_SecurityManager_currentLoadedClass_R_java_lang_Class(jcontext ctx, jobject self);
jint M_java_lang_SecurityManager_classDepth_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
jint M_java_lang_SecurityManager_classLoaderDepth_R_int(jcontext ctx, jobject self);
jbool M_java_lang_SecurityManager_inClass_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_lang_SecurityManager_inClassLoader_R_boolean(jcontext ctx, jobject self);
jobject M_java_lang_SecurityManager_getSecurityContext_R_java_lang_Object(jcontext ctx, jobject self);
void M_java_lang_SecurityManager_checkPermission_java_security_Permission(jcontext ctx, jobject self, jobject param0);
void M_java_lang_SecurityManager_checkPermission_java_security_Permission_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_java_lang_SecurityManager_checkCreateClassLoader(jcontext ctx, jobject self);
void M_java_lang_SecurityManager_checkAccess_java_lang_Thread(jcontext ctx, jobject self, jobject param0);
void M_java_lang_SecurityManager_checkAccess_java_lang_ThreadGroup(jcontext ctx, jobject self, jobject param0);
void M_java_lang_SecurityManager_checkExit_int(jcontext ctx, jobject self, jint param0);
void M_java_lang_SecurityManager_checkExec_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_java_lang_SecurityManager_checkLink_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_java_lang_SecurityManager_checkRead_java_io_FileDescriptor(jcontext ctx, jobject self, jobject param0);
void M_java_lang_SecurityManager_checkRead_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_java_lang_SecurityManager_checkRead_java_lang_String_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_java_lang_SecurityManager_checkWrite_java_io_FileDescriptor(jcontext ctx, jobject self, jobject param0);
void M_java_lang_SecurityManager_checkWrite_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_java_lang_SecurityManager_checkDelete_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_java_lang_SecurityManager_checkConnect_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_java_lang_SecurityManager_checkConnect_java_lang_String_int_java_lang_Object(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
void M_java_lang_SecurityManager_checkListen_int(jcontext ctx, jobject self, jint param0);
void M_java_lang_SecurityManager_checkAccept_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_java_lang_SecurityManager_checkMulticast_java_net_InetAddress(jcontext ctx, jobject self, jobject param0);
void M_java_lang_SecurityManager_checkMulticast_java_net_InetAddress_byte(jcontext ctx, jobject self, jobject param0, jbyte param1);
void M_java_lang_SecurityManager_checkPropertiesAccess(jcontext ctx, jobject self);
void M_java_lang_SecurityManager_checkPropertyAccess_java_lang_String(jcontext ctx, jobject self, jobject param0);
jbool M_java_lang_SecurityManager_checkTopLevelWindow_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_java_lang_SecurityManager_checkPrintJobAccess(jcontext ctx, jobject self);
void M_java_lang_SecurityManager_checkSystemClipboardAccess(jcontext ctx, jobject self);
void M_java_lang_SecurityManager_checkAwtEventQueueAccess(jcontext ctx, jobject self);
void M_java_lang_SecurityManager_checkPackageAccess_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_java_lang_SecurityManager_checkPackageDefinition_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_java_lang_SecurityManager_checkSetFactory(jcontext ctx, jobject self);
void M_java_lang_SecurityManager_checkMemberAccess_java_lang_Class_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_java_lang_SecurityManager_checkSecurityAccess_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_SecurityManager_getThreadGroup_R_java_lang_ThreadGroup(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
