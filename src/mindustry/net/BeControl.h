#ifndef HEADER_mindustry_net_BeControl
#define HEADER_mindustry_net_BeControl

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_BeControl {
	java_lang_Object parent;
	jbool F_checkUpdates;
	jbool F_updateAvailable;
	jref F_updateUrl;
	jint F_updateBuild;
} mindustry_net_BeControl;

extern Class class_mindustry_net_BeControl;

extern jint SF_mindustry_net_BeControl_updateInterval;

#define VTABLE_mindustry_net_BeControl_hashCode_R_int 0
typedef jint (*func_mindustry_net_BeControl_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_BeControl_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_net_BeControl_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_BeControl_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_net_BeControl_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_BeControl_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_net_BeControl_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_BeControl_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_net_BeControl_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_BeControl_finalize 5
typedef void (*func_mindustry_net_BeControl_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_BeControl_notify 6
typedef void (*func_mindustry_net_BeControl_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_BeControl_notifyAll 7
typedef void (*func_mindustry_net_BeControl_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_BeControl_wait 8
typedef void (*func_mindustry_net_BeControl_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_BeControl_wait_long 9
typedef void (*func_mindustry_net_BeControl_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_net_BeControl_wait_long_int 10
typedef void (*func_mindustry_net_BeControl_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_net_BeControl_active_R_boolean 11
typedef jbool (*func_mindustry_net_BeControl_active_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_BeControl_init 12
typedef void (*func_mindustry_net_BeControl_init)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_BeControl_checkUpdate_arc_func_Boolc 13
typedef void (*func_mindustry_net_BeControl_checkUpdate_arc_func_Boolc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_BeControl_isUpdateAvailable_R_boolean 14
typedef jbool (*func_mindustry_net_BeControl_isUpdateAvailable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_BeControl_showUpdateDialog 15
typedef void (*func_mindustry_net_BeControl_showUpdateDialog)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_BeControl_download_java_lang_String_arc_files_Fi_arc_func_Intc_arc_func_Floatc_arc_func_Boolp_java_lang_Runnable_arc_func_Cons 16
typedef void (*func_mindustry_net_BeControl_download_java_lang_String_arc_files_Fi_arc_func_Intc_arc_func_Floatc_arc_func_Boolp_java_lang_Runnable_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6);
#define VTABLE_mindustry_net_BeControl_lambda$showUpdateDialog$10 17
typedef void (*func_mindustry_net_BeControl_lambda$showUpdateDialog$10)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_BeControl_lambda$showUpdateDialog$0 18
typedef void (*func_mindustry_net_BeControl_lambda$showUpdateDialog$0)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_BeControl_lambda$checkUpdate$1_arc_func_Boolc_arc_util_Http$HttpResponse 19
typedef void (*func_mindustry_net_BeControl_lambda$checkUpdate$1_arc_func_Boolc_arc_util_Http$HttpResponse)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_net_BeControl_lambda$checkUpdate$3_arc_func_Boolc 20
typedef void (*func_mindustry_net_BeControl_lambda$checkUpdate$3_arc_func_Boolc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_BeControl_lambda$init$0 21
typedef void (*func_mindustry_net_BeControl_lambda$init$0)(jcontext ctx, jobject self);

void mark_mindustry_net_BeControl(jobject object, jint mark, jint depth);
void clinit_mindustry_net_BeControl(jcontext ctx);
jbool M_mindustry_net_BeControl_active_R_boolean(jcontext ctx, jobject self);
void init_mindustry_net_BeControl(jcontext ctx, jobject self);
void M_mindustry_net_BeControl_init(jcontext ctx, jobject self);
void M_mindustry_net_BeControl_checkUpdate_arc_func_Boolc(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_net_BeControl_isUpdateAvailable_R_boolean(jcontext ctx, jobject self);
void M_mindustry_net_BeControl_showUpdateDialog(jcontext ctx, jobject self);
void M_mindustry_net_BeControl_download_java_lang_String_arc_files_Fi_arc_func_Intc_arc_func_Floatc_arc_func_Boolp_java_lang_Runnable_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6);
void SM_mindustry_net_BeControl_lambda$download$0_java_lang_String_arc_files_Fi_arc_func_Intc_arc_func_Boolp_arc_func_Floatc_java_lang_Runnable_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6);
void SM_mindustry_net_BeControl_lambda$showUpdateDialog$15_arc_files_Fi_arc_files_Fi(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_net_BeControl_lambda$showUpdateDialog$16_arc_files_Fi_arc_files_Fi(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_net_BeControl_lambda$showUpdateDialog$14_R_boolean(jcontext ctx);
void SM_mindustry_net_BeControl_lambda$showUpdateDialog$13_float(jcontext ctx, jfloat param0);
void SM_mindustry_net_BeControl_lambda$showUpdateDialog$11_int(jcontext ctx, jint param0);
void SM_mindustry_net_BeControl_lambda$showUpdateDialog$12_int(jcontext ctx, jint param0);
void M_mindustry_net_BeControl_lambda$showUpdateDialog$10(jcontext ctx, jobject self);
void M_mindustry_net_BeControl_lambda$showUpdateDialog$0(jcontext ctx, jobject self);
void SM_mindustry_net_BeControl_lambda$showUpdateDialog$9_Array1_boolean_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject param0, jobject param1);
jfloat SM_mindustry_net_BeControl_lambda$showUpdateDialog$8_Array1_float_R_float(jcontext ctx, jobject param0);
jobject SM_mindustry_net_BeControl_lambda$showUpdateDialog$7_R_arc_graphics_Color(jcontext ctx);
jobject SM_mindustry_net_BeControl_lambda$showUpdateDialog$6_Array1_int_Array1_float_R_java_lang_CharSequence(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_net_BeControl_lambda$showUpdateDialog$5_mindustry_ui_dialogs_BaseDialog_java_lang_Throwable(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_net_BeControl_lambda$showUpdateDialog$4_arc_files_Fi_arc_files_Fi(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_net_BeControl_lambda$showUpdateDialog$3_Array1_boolean_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_net_BeControl_lambda$showUpdateDialog$2_Array1_float_float(jcontext ctx, jobject param0, jfloat param1);
void SM_mindustry_net_BeControl_lambda$showUpdateDialog$1_Array1_int_int(jcontext ctx, jobject param0, jint param1);
void M_mindustry_net_BeControl_lambda$checkUpdate$1_arc_func_Boolc_arc_util_Http$HttpResponse(jcontext ctx, jobject self, jobject param0, jobject param1);
void SM_mindustry_net_BeControl_lambda$checkUpdate$4_arc_func_Boolc(jcontext ctx, jobject param0);
void M_mindustry_net_BeControl_lambda$checkUpdate$3_arc_func_Boolc(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_net_BeControl_lambda$checkUpdate$2_arc_util_serialization_Jval_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_net_BeControl_lambda$checkUpdate$0_arc_func_Boolc_java_lang_Throwable(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_net_BeControl_lambda$init$2_arc_files_Fi_arc_files_Fi_R_boolean(jcontext ctx, jobject param0, jobject param1);
void M_mindustry_net_BeControl_lambda$init$0(jcontext ctx, jobject self);
void SM_mindustry_net_BeControl_lambda$init$1_boolean(jcontext ctx, jbool param0);

#ifdef __cplusplus
}
#endif

#endif
