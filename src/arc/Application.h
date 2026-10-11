#ifndef HEADER_arc_Application
#define HEADER_arc_Application

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_Application {
	java_lang_Object parent;
} arc_Application;

extern Class class_arc_Application;


#define INDEX_arc_Application_getListeners_R_arc_struct_Seq 0
typedef jobject (*func_arc_Application_getListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define INDEX_arc_Application_addListener_arc_ApplicationListener 1
typedef void (*func_arc_Application_addListener_arc_ApplicationListener)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_Application_removeListener_arc_ApplicationListener 2
typedef void (*func_arc_Application_removeListener_arc_ApplicationListener)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_Application_defaultUpdate 3
typedef void (*func_arc_Application_defaultUpdate)(jcontext ctx, jobject self);
#define INDEX_arc_Application_getType_R_arc_Application$ApplicationType 4
typedef jobject (*func_arc_Application_getType_R_arc_Application$ApplicationType)(jcontext ctx, jobject self);
#define INDEX_arc_Application_isDesktop_R_boolean 5
typedef jbool (*func_arc_Application_isDesktop_R_boolean)(jcontext ctx, jobject self);
#define INDEX_arc_Application_isHeadless_R_boolean 6
typedef jbool (*func_arc_Application_isHeadless_R_boolean)(jcontext ctx, jobject self);
#define INDEX_arc_Application_isAndroid_R_boolean 7
typedef jbool (*func_arc_Application_isAndroid_R_boolean)(jcontext ctx, jobject self);
#define INDEX_arc_Application_isIOS_R_boolean 8
typedef jbool (*func_arc_Application_isIOS_R_boolean)(jcontext ctx, jobject self);
#define INDEX_arc_Application_isMobile_R_boolean 9
typedef jbool (*func_arc_Application_isMobile_R_boolean)(jcontext ctx, jobject self);
#define INDEX_arc_Application_isWeb_R_boolean 10
typedef jbool (*func_arc_Application_isWeb_R_boolean)(jcontext ctx, jobject self);
#define INDEX_arc_Application_getVersion_R_int 11
typedef jint (*func_arc_Application_getVersion_R_int)(jcontext ctx, jobject self);
#define INDEX_arc_Application_getJavaHeap_R_long 12
typedef jlong (*func_arc_Application_getJavaHeap_R_long)(jcontext ctx, jobject self);
#define INDEX_arc_Application_getNativeHeap_R_long 13
typedef jlong (*func_arc_Application_getNativeHeap_R_long)(jcontext ctx, jobject self);
#define INDEX_arc_Application_getMainThread_R_java_lang_Thread 14
typedef jobject (*func_arc_Application_getMainThread_R_java_lang_Thread)(jcontext ctx, jobject self);
#define INDEX_arc_Application_isOnMainThread_R_boolean 15
typedef jbool (*func_arc_Application_isOnMainThread_R_boolean)(jcontext ctx, jobject self);
#define INDEX_arc_Application_getClipboardText_R_java_lang_String 16
typedef jobject (*func_arc_Application_getClipboardText_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_arc_Application_setClipboardText_java_lang_String 17
typedef void (*func_arc_Application_setClipboardText_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_Application_openFolder_java_lang_String_R_boolean 18
typedef jbool (*func_arc_Application_openFolder_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_Application_openURI_java_lang_String_R_boolean 19
typedef jbool (*func_arc_Application_openURI_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_Application_getDnsServers_arc_struct_Seq 20
typedef void (*func_arc_Application_getDnsServers_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_Application_post_java_lang_Runnable 21
typedef void (*func_arc_Application_post_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_Application_exit 22
typedef void (*func_arc_Application_exit)(jcontext ctx, jobject self);
#define INDEX_arc_Application_dispose 23
typedef void (*func_arc_Application_dispose)(jcontext ctx, jobject self);
#define INDEX_arc_Application_lambda$removeListener$0_arc_ApplicationListener 24
typedef void (*func_arc_Application_lambda$removeListener$0_arc_ApplicationListener)(jcontext ctx, jobject self, jobject param0);

void mark_arc_Application(jobject object, jint mark, jint depth);
void clinit_arc_Application(jcontext ctx);
void M_arc_Application_addListener_arc_ApplicationListener(jcontext ctx, jobject self, jobject param0);
void M_arc_Application_removeListener_arc_ApplicationListener(jcontext ctx, jobject self, jobject param0);
void M_arc_Application_defaultUpdate(jcontext ctx, jobject self);
jbool M_arc_Application_isDesktop_R_boolean(jcontext ctx, jobject self);
jbool M_arc_Application_isHeadless_R_boolean(jcontext ctx, jobject self);
jbool M_arc_Application_isAndroid_R_boolean(jcontext ctx, jobject self);
jbool M_arc_Application_isIOS_R_boolean(jcontext ctx, jobject self);
jbool M_arc_Application_isMobile_R_boolean(jcontext ctx, jobject self);
jbool M_arc_Application_isWeb_R_boolean(jcontext ctx, jobject self);
jint M_arc_Application_getVersion_R_int(jcontext ctx, jobject self);
jlong M_arc_Application_getJavaHeap_R_long(jcontext ctx, jobject self);
jlong M_arc_Application_getNativeHeap_R_long(jcontext ctx, jobject self);
jobject M_arc_Application_getMainThread_R_java_lang_Thread(jcontext ctx, jobject self);
jbool M_arc_Application_isOnMainThread_R_boolean(jcontext ctx, jobject self);
jbool M_arc_Application_openFolder_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_Application_openURI_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_arc_Application_getDnsServers_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_arc_Application_dispose(jcontext ctx, jobject self);
void M_arc_Application_lambda$removeListener$0_arc_ApplicationListener(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
