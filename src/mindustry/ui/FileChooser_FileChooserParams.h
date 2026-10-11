#ifndef HEADER_mindustry_ui_FileChooser$FileChooserParams
#define HEADER_mindustry_ui_FileChooser$FileChooserParams

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_FileChooser$FileChooserParams {
	java_lang_Object parent;
	jbool F_open;
	jbool F_allowMultiple;
	jref F_title;
	jref F_fileName;
	jref F_extensions;
	jref F_handler;
	jref F_multipleHandler;
} mindustry_ui_FileChooser$FileChooserParams;

extern Class class_mindustry_ui_FileChooser$FileChooserParams;


#define VTABLE_mindustry_ui_FileChooser$FileChooserParams_hashCode_R_int 0
typedef jint (*func_mindustry_ui_FileChooser$FileChooserParams_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_FileChooser$FileChooserParams_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_FileChooser$FileChooserParams_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_FileChooser$FileChooserParams_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_FileChooser$FileChooserParams_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_FileChooser$FileChooserParams_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_FileChooser$FileChooserParams_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_FileChooser$FileChooserParams_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_FileChooser$FileChooserParams_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_FileChooser$FileChooserParams_finalize 5
typedef void (*func_mindustry_ui_FileChooser$FileChooserParams_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_FileChooser$FileChooserParams_notify 6
typedef void (*func_mindustry_ui_FileChooser$FileChooserParams_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_FileChooser$FileChooserParams_notifyAll 7
typedef void (*func_mindustry_ui_FileChooser$FileChooserParams_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_FileChooser$FileChooserParams_wait 8
typedef void (*func_mindustry_ui_FileChooser$FileChooserParams_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_FileChooser$FileChooserParams_wait_long 9
typedef void (*func_mindustry_ui_FileChooser$FileChooserParams_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_FileChooser$FileChooserParams_wait_long_int 10
typedef void (*func_mindustry_ui_FileChooser$FileChooserParams_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_FileChooser$FileChooserParams_checkParams 11
typedef void (*func_mindustry_ui_FileChooser$FileChooserParams_checkParams)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_FileChooser$FileChooserParams_submit_arc_func_Cons 12
typedef void (*func_mindustry_ui_FileChooser$FileChooserParams_submit_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_FileChooser$FileChooserParams_submitMulti_arc_func_Cons 13
typedef void (*func_mindustry_ui_FileChooser$FileChooserParams_submitMulti_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_FileChooser$FileChooserParams_name_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams 14
typedef jobject (*func_mindustry_ui_FileChooser$FileChooserParams_name_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_FileChooser$FileChooserParams_extensions_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams 15
typedef jobject (*func_mindustry_ui_FileChooser$FileChooserParams_extensions_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_FileChooser$FileChooserParams_open_boolean_R_mindustry_ui_FileChooser$FileChooserParams 16
typedef jobject (*func_mindustry_ui_FileChooser$FileChooserParams_open_boolean_R_mindustry_ui_FileChooser$FileChooserParams)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_ui_FileChooser$FileChooserParams_title_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams 17
typedef jobject (*func_mindustry_ui_FileChooser$FileChooserParams_title_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_FileChooser$FileChooserParams_handleChooseResult_Array1_arc_files_Fi 18
typedef void (*func_mindustry_ui_FileChooser$FileChooserParams_handleChooseResult_Array1_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_ui_FileChooser$FileChooserParams(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_FileChooser$FileChooserParams(jcontext ctx);
void init_mindustry_ui_FileChooser$FileChooserParams(jcontext ctx, jobject self);
void M_mindustry_ui_FileChooser$FileChooserParams_checkParams(jcontext ctx, jobject self);
void M_mindustry_ui_FileChooser$FileChooserParams_submit_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_FileChooser$FileChooserParams_submitMulti_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_ui_FileChooser$FileChooserParams_name_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_ui_FileChooser$FileChooserParams_extensions_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_ui_FileChooser$FileChooserParams_open_boolean_R_mindustry_ui_FileChooser$FileChooserParams(jcontext ctx, jobject self, jbool param0);
jobject M_mindustry_ui_FileChooser$FileChooserParams_title_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(jcontext ctx, jobject self, jobject param0);
void M_mindustry_ui_FileChooser$FileChooserParams_handleChooseResult_Array1_arc_files_Fi(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
