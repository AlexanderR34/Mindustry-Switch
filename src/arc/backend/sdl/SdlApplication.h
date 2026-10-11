#ifndef HEADER_arc_backend_sdl_SdlApplication
#define HEADER_arc_backend_sdl_SdlApplication

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/Application.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_backend_sdl_SdlApplication {
	java_lang_Object parent;
	jref F_listeners;
	jref F_runnables;
	jref F_inputs;
	jref F_graphics;
	jref F_input;
	jref F_config;
	jref F_mainThread;
	jbool F_running;
	jlong F_window;
	jlong F_context;
} arc_backend_sdl_SdlApplication;

extern Class class_arc_backend_sdl_SdlApplication;


#define VTABLE_arc_backend_sdl_SdlApplication_hashCode_R_int 0
typedef jint (*func_arc_backend_sdl_SdlApplication_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_backend_sdl_SdlApplication_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_SdlApplication_clone_R_java_lang_Object 2
typedef jobject (*func_arc_backend_sdl_SdlApplication_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_backend_sdl_SdlApplication_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_toString_R_java_lang_String 4
typedef jobject (*func_arc_backend_sdl_SdlApplication_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_finalize 5
typedef void (*func_arc_backend_sdl_SdlApplication_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_notify 6
typedef void (*func_arc_backend_sdl_SdlApplication_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_notifyAll 7
typedef void (*func_arc_backend_sdl_SdlApplication_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_wait 8
typedef void (*func_arc_backend_sdl_SdlApplication_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_wait_long 9
typedef void (*func_arc_backend_sdl_SdlApplication_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_backend_sdl_SdlApplication_wait_long_int 10
typedef void (*func_arc_backend_sdl_SdlApplication_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlApplication_dispose 11
typedef void (*func_arc_backend_sdl_SdlApplication_dispose)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_isDisposed_R_boolean 12
typedef jbool (*func_arc_backend_sdl_SdlApplication_isDisposed_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_getListeners_R_arc_struct_Seq 13
typedef jobject (*func_arc_backend_sdl_SdlApplication_getListeners_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_addListener_arc_ApplicationListener 14
typedef void (*func_arc_backend_sdl_SdlApplication_addListener_arc_ApplicationListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_SdlApplication_removeListener_arc_ApplicationListener 15
typedef void (*func_arc_backend_sdl_SdlApplication_removeListener_arc_ApplicationListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_SdlApplication_defaultUpdate 16
typedef void (*func_arc_backend_sdl_SdlApplication_defaultUpdate)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_getType_R_arc_Application$ApplicationType 17
typedef jobject (*func_arc_backend_sdl_SdlApplication_getType_R_arc_Application$ApplicationType)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_isDesktop_R_boolean 18
typedef jbool (*func_arc_backend_sdl_SdlApplication_isDesktop_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_isHeadless_R_boolean 19
typedef jbool (*func_arc_backend_sdl_SdlApplication_isHeadless_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_isAndroid_R_boolean 20
typedef jbool (*func_arc_backend_sdl_SdlApplication_isAndroid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_isIOS_R_boolean 21
typedef jbool (*func_arc_backend_sdl_SdlApplication_isIOS_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_isMobile_R_boolean 22
typedef jbool (*func_arc_backend_sdl_SdlApplication_isMobile_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_isWeb_R_boolean 23
typedef jbool (*func_arc_backend_sdl_SdlApplication_isWeb_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_getVersion_R_int 24
typedef jint (*func_arc_backend_sdl_SdlApplication_getVersion_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_getJavaHeap_R_long 25
typedef jlong (*func_arc_backend_sdl_SdlApplication_getJavaHeap_R_long)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_getNativeHeap_R_long 26
typedef jlong (*func_arc_backend_sdl_SdlApplication_getNativeHeap_R_long)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_getMainThread_R_java_lang_Thread 27
typedef jobject (*func_arc_backend_sdl_SdlApplication_getMainThread_R_java_lang_Thread)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_isOnMainThread_R_boolean 28
typedef jbool (*func_arc_backend_sdl_SdlApplication_isOnMainThread_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_getClipboardText_R_java_lang_String 29
typedef jobject (*func_arc_backend_sdl_SdlApplication_getClipboardText_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_setClipboardText_java_lang_String 30
typedef void (*func_arc_backend_sdl_SdlApplication_setClipboardText_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_SdlApplication_openFolder_java_lang_String_R_boolean 31
typedef jbool (*func_arc_backend_sdl_SdlApplication_openFolder_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_SdlApplication_openURI_java_lang_String_R_boolean 32
typedef jbool (*func_arc_backend_sdl_SdlApplication_openURI_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_SdlApplication_getDnsServers_arc_struct_Seq 33
typedef void (*func_arc_backend_sdl_SdlApplication_getDnsServers_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_SdlApplication_post_java_lang_Runnable 34
typedef void (*func_arc_backend_sdl_SdlApplication_post_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_SdlApplication_exit 35
typedef void (*func_arc_backend_sdl_SdlApplication_exit)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_lambda$removeListener$0_arc_ApplicationListener 36
typedef void (*func_arc_backend_sdl_SdlApplication_lambda$removeListener$0_arc_ApplicationListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_SdlApplication_addTextInputListener 37
typedef void (*func_arc_backend_sdl_SdlApplication_addTextInputListener)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_initIcon 38
typedef void (*func_arc_backend_sdl_SdlApplication_initIcon)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_init 39
typedef void (*func_arc_backend_sdl_SdlApplication_init)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_loop 40
typedef void (*func_arc_backend_sdl_SdlApplication_loop)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_listen_arc_func_Cons 41
typedef void (*func_arc_backend_sdl_SdlApplication_listen_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_SdlApplication_cleanup 42
typedef void (*func_arc_backend_sdl_SdlApplication_cleanup)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_check_int 43
typedef void (*func_arc_backend_sdl_SdlApplication_check_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_arc_backend_sdl_SdlApplication_getWindow_R_long 44
typedef jlong (*func_arc_backend_sdl_SdlApplication_getWindow_R_long)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_restartMac 45
typedef void (*func_arc_backend_sdl_SdlApplication_restartMac)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlApplication_lambda$loop$0_arc_ApplicationListener 46
typedef void (*func_arc_backend_sdl_SdlApplication_lambda$loop$0_arc_ApplicationListener)(jcontext ctx, jobject self, jobject param0);

void mark_arc_backend_sdl_SdlApplication(jobject object, jint mark, jint depth);
void clinit_arc_backend_sdl_SdlApplication(jcontext ctx);
void init_arc_backend_sdl_SdlApplication_arc_ApplicationListener_arc_backend_sdl_SdlConfig(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_backend_sdl_SdlApplication_addTextInputListener(jcontext ctx, jobject self);
void M_arc_backend_sdl_SdlApplication_initIcon(jcontext ctx, jobject self);
void M_arc_backend_sdl_SdlApplication_init(jcontext ctx, jobject self);
void M_arc_backend_sdl_SdlApplication_loop(jcontext ctx, jobject self);
void M_arc_backend_sdl_SdlApplication_listen_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
void M_arc_backend_sdl_SdlApplication_cleanup(jcontext ctx, jobject self);
void M_arc_backend_sdl_SdlApplication_check_int(jcontext ctx, jobject self, jint param0);
jlong M_arc_backend_sdl_SdlApplication_getWindow_R_long(jcontext ctx, jobject self);
jobject M_arc_backend_sdl_SdlApplication_getMainThread_R_java_lang_Thread(jcontext ctx, jobject self);
jbool M_arc_backend_sdl_SdlApplication_openFolder_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_backend_sdl_SdlApplication_openURI_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_backend_sdl_SdlApplication_getListeners_R_arc_struct_Seq(jcontext ctx, jobject self);
jobject M_arc_backend_sdl_SdlApplication_getType_R_arc_Application$ApplicationType(jcontext ctx, jobject self);
jobject M_arc_backend_sdl_SdlApplication_getClipboardText_R_java_lang_String(jcontext ctx, jobject self);
void M_arc_backend_sdl_SdlApplication_setClipboardText_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_arc_backend_sdl_SdlApplication_post_java_lang_Runnable(jcontext ctx, jobject self, jobject param0);
void M_arc_backend_sdl_SdlApplication_exit(jcontext ctx, jobject self);
void M_arc_backend_sdl_SdlApplication_restartMac(jcontext ctx, jobject self);
jobject SM_arc_backend_sdl_SdlApplication_lambda$restartMac$1_int_R_Array1_java_lang_String(jcontext ctx, jint param0);
jobject SM_arc_backend_sdl_SdlApplication_lambda$restartMac$0_java_util_Map$Entry_R_java_lang_String(jcontext ctx, jobject param0);
void SM_arc_backend_sdl_SdlApplication_lambda$openURI$0_java_lang_String(jcontext ctx, jobject param0);
void SM_arc_backend_sdl_SdlApplication_lambda$openFolder$0_java_lang_String(jcontext ctx, jobject param0);
void SM_arc_backend_sdl_SdlApplication_lambda$cleanup$0_arc_ApplicationListener(jcontext ctx, jobject param0);
void M_arc_backend_sdl_SdlApplication_lambda$loop$0_arc_ApplicationListener(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
