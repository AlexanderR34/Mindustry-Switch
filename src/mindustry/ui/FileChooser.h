#ifndef HEADER_mindustry_ui_FileChooser
#define HEADER_mindustry_ui_FileChooser

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_FileChooser {
	java_lang_Object parent;
} mindustry_ui_FileChooser;

extern Class class_mindustry_ui_FileChooser;


#define VTABLE_mindustry_ui_FileChooser_hashCode_R_int 0
typedef jint (*func_mindustry_ui_FileChooser_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_FileChooser_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_FileChooser_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_FileChooser_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_FileChooser_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_FileChooser_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_FileChooser_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_FileChooser_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_FileChooser_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_FileChooser_finalize 5
typedef void (*func_mindustry_ui_FileChooser_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_FileChooser_notify 6
typedef void (*func_mindustry_ui_FileChooser_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_FileChooser_notifyAll 7
typedef void (*func_mindustry_ui_FileChooser_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_FileChooser_wait 8
typedef void (*func_mindustry_ui_FileChooser_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_FileChooser_wait_long 9
typedef void (*func_mindustry_ui_FileChooser_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_FileChooser_wait_long_int 10
typedef void (*func_mindustry_ui_FileChooser_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_ui_FileChooser(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_FileChooser(jcontext ctx);
void init_mindustry_ui_FileChooser(jcontext ctx, jobject self);
void SM_mindustry_ui_FileChooser_export_java_lang_String_java_lang_String_mindustry_core_Platform$FileWriter(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_mindustry_ui_FileChooser_open_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(jcontext ctx, jobject param0);
jobject SM_mindustry_ui_FileChooser_save_Array1_java_lang_String_R_mindustry_ui_FileChooser$FileChooserParams(jcontext ctx, jobject param0);
jobject SM_mindustry_ui_FileChooser_createFallbackFileChooser_mindustry_ui_FileChooser$FileChooserParams_R_mindustry_ui_dialogs_FileChooserDialog(jcontext ctx, jobject param0);
void SM_mindustry_ui_FileChooser_showFallbackFileChooser_mindustry_ui_FileChooser$FileChooserParams(jcontext ctx, jobject param0);
void SM_mindustry_ui_FileChooser_lambda$createFallbackFileChooser$1_mindustry_ui_FileChooser$FileChooserParams_arc_files_Fi(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_ui_FileChooser_lambda$createFallbackFileChooser$0_mindustry_ui_FileChooser$FileChooserParams_arc_files_Fi_R_boolean(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_ui_FileChooser_lambda$export$2_java_lang_String_java_lang_String_mindustry_core_Platform$FileWriter(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_ui_FileChooser_lambda$export$0_mindustry_core_Platform$FileWriter_arc_files_Fi(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_ui_FileChooser_lambda$export$1_mindustry_core_Platform$FileWriter_arc_files_Fi(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
